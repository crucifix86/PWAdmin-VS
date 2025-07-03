using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using Microsoft.Extensions.Logging;
using MySqlConnector;
using pwAdmin.Server.Models;
using pwAdmin.Server.Services;

namespace pwAdmin.Server.Protocols
{
    public class RequestProcessor
    {
        private readonly SessionConfig _config;
        private readonly ILogger _logger;
        private readonly Dictionary<int, string> _opcodeNames;

        public RequestProcessor(SessionConfig config, ILogger logger)
        {
            _config = config;
            _logger = logger;
            _opcodeNames = InitializeOpcodeNames();
        }

        public async Task<byte[]> ProcessRequestAsync(byte[] requestData)
        {
            try
            {
                var os = new OctetsStream(requestData);
                var key = os.UncompactUInt32();
                var opcode = os.UncompactUInt32();
                var size = os.UncompactUInt32();

                if (key != 501350)
                {
                    _logger.LogWarning($"Invalid key received: {key}");
                    return new byte[0];
                }

                _logger.LogInformation($"Processing opcode: {opcode} ({GetOpcodeName(opcode)}), Size: {size}");

                switch (opcode)
                {
                    case 10: // Get Memory Info
                        return await GetMemoryInfo();
                    
                    case 11: // Get Process List
                        return await GetProcessList();
                    
                    case 12: // Get Instance List
                        return await GetInstanceList();
                    
                    case 13: // Execute Commands
                        return await ExecuteCommands(os, size);
                    
                    case 14: // Get Server Config
                        return GetServerConfig();
                    
                    case 16: // Get User Count
                        return await GetUserCount(os, size);
                    
                    case 17: // Get User List
                        return await GetUserList(os, size);
                    
                    case 18: // Get GM Privileges
                        return await GetGMPrivileges(os, size);
                    
                    case 352: // GMGetGameAttri
                        return await ForwardToGameServer(os, size, opcode, _config.GDeliveryIp, _config.GProviderPort);
                    
                    case 353: // GMSetGameAttri
                        return await ProcessGMSetGameAttri(os, size);
                    
                    case 120: // ChatBroadcast
                        return await ProcessChatBroadcast(os, size);
                    
                    case 3101: // AutoLockGet
                        return await ForwardToGameServer(os, size, opcode, _config.GameDbdIp, _config.GameDbdPort);
                    
                    case 3102: // AutoLockSet
                        return await ProcessAutoLockSet(os, size);
                    
                    case 3024: // GetUserRoles
                        return await ForwardToGameServer(os, size, opcode, _config.GameDbdIp, _config.GameDbdPort);
                    
                    case 1024: // GetRole
                    case 3012: // GetRoleData
                    case 3055: // DBGetConsumeInfos
                    case 4606: // GetFactionDetail
                        return await ForwardToGameServer(os, size, opcode, _config.GameDbdIp, _config.GameDbdPort);
                    
                    case 3002: // PutRoleData
                        await ForwardToGameServer(os, size, opcode, _config.GameDbdIp, _config.GameDbdPort, false);
                        return new byte[0];
                    
                    case 351: // GMListOnlineUser
                        return await ForwardToGameServer(os, size, opcode, _config.GDeliveryIp, _config.GDeliveryPort);
                    
                    default:
                        _logger.LogWarning($"Unknown opcode: {opcode}");
                        return new byte[0];
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error processing request");
                return new byte[0];
            }
        }

        private async Task<byte[]> GetMemoryInfo()
        {
            var memInfo = new MemoryInfo();
            
            try
            {
                var lines = await File.ReadAllLinesAsync("/proc/meminfo");
                foreach (var line in lines)
                {
                    var parts = line.Split(':');
                    if (parts.Length < 2) continue;
                    
                    var key = parts[0].Trim();
                    var value = parts[1].Trim().Replace(" kB", "");
                    
                    if (long.TryParse(value, out long kb))
                    {
                        switch (key)
                        {
                            case "MemTotal":
                                memInfo.MemTotal = kb * 1024;
                                break;
                            case "MemFree":
                                memInfo.MemFree = kb * 1024;
                                break;
                            case "SwapTotal":
                                memInfo.SwapTotal = kb * 1024;
                                break;
                            case "SwapFree":
                                memInfo.SwapFree = kb * 1024;
                                break;
                        }
                    }
                }
                
                memInfo.MemUsed = memInfo.MemTotal - memInfo.MemFree;
                memInfo.SwapUsed = memInfo.SwapTotal - memInfo.SwapFree;
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error reading memory info");
            }
            
            var response = new OctetsStream();
            memInfo.Marshal(response);
            response.Encode(10);
            
            return response.GetData();
        }

        private async Task<byte[]> GetProcessList()
        {
            var processes = new List<ProcessInfo>();
            
            // Get configured processes
            var configProcesses = GetConfiguredProcesses();
            foreach (var proc in configProcesses)
            {
                UpdateProcessInfo(proc);
                processes.Add(proc);
            }
            
            // Get map processes
            var mapProcesses = await GetMapProcesses();
            processes.AddRange(mapProcesses);
            
            var response = new OctetsStream();
            response.CompactUInt32((uint)processes.Count);
            
            foreach (var proc in processes)
            {
                proc.Marshal(response);
            }
            
            response.Encode(11);
            return response.GetData();
        }

        private List<ProcessInfo> GetConfiguredProcesses()
        {
            var processes = new List<ProcessInfo>();
            
            // Read from processes_config.ini if it exists
            var configFile = "processes_config.ini";
            if (File.Exists(configFile))
            {
                var lines = File.ReadAllLines(configFile);
                foreach (var line in lines)
                {
                    if (string.IsNullOrWhiteSpace(line) || line.StartsWith("#"))
                        continue;
                    
                    var parts = line.Split('=');
                    if (parts.Length == 2)
                    {
                        processes.Add(new ProcessInfo
                        {
                            Name = parts[0].Trim(),
                            Path = parts[1].Trim(),
                            Pid = 0,
                            MemoryPercent = 0,
                            CpuPercent = 0
                        });
                    }
                }
            }
            else
            {
                // Default processes
                processes.Add(new ProcessInfo { Name = "logservice", Path = "./logservice/logservice" });
                processes.Add(new ProcessInfo { Name = "uniquenamed", Path = "./uniquenamed/uniquenamed" });
                processes.Add(new ProcessInfo { Name = "authd", Path = "./authd/authd" });
                processes.Add(new ProcessInfo { Name = "gamedbd", Path = "./gamedbd/gamedbd" });
                processes.Add(new ProcessInfo { Name = "gdeliveryd", Path = "./gdeliveryd/gdeliveryd" });
                processes.Add(new ProcessInfo { Name = "gacd", Path = "./gacd/gacd" });
                processes.Add(new ProcessInfo { Name = "gfactiond", Path = "./gfactiond/gfactiond" });
                processes.Add(new ProcessInfo { Name = "glinkd", Path = "./glinkd/glinkd" });
            }
            
            return processes;
        }

        private void UpdateProcessInfo(ProcessInfo procInfo)
        {
            try
            {
                var processes = Process.GetProcessesByName(procInfo.Name);
                if (processes.Length > 0)
                {
                    var proc = processes[0];
                    procInfo.Pid = proc.Id;
                    
                    // Get memory usage
                    procInfo.MemoryPercent = GetProcessMemoryPercent(proc);
                    
                    // Get CPU usage (simplified)
                    procInfo.CpuPercent = GetProcessCpuPercent(proc);
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, $"Error updating process info for {procInfo.Name}");
            }
        }

        private double GetProcessMemoryPercent(Process process)
        {
            try
            {
                var totalMemory = GetTotalMemory();
                if (totalMemory > 0)
                {
                    return (process.WorkingSet64 / (double)totalMemory) * 100.0;
                }
            }
            catch { }
            return 0;
        }

        private double GetProcessCpuPercent(Process process)
        {
            // Simplified CPU calculation
            try
            {
                return process.TotalProcessorTime.TotalMilliseconds / Environment.TickCount * 100.0;
            }
            catch { }
            return 0;
        }

        private long GetTotalMemory()
        {
            try
            {
                var lines = File.ReadAllLines("/proc/meminfo");
                foreach (var line in lines)
                {
                    if (line.StartsWith("MemTotal:"))
                    {
                        var parts = line.Split(':')[1].Trim().Split(' ');
                        if (long.TryParse(parts[0], out long kb))
                        {
                            return kb * 1024;
                        }
                    }
                }
            }
            catch { }
            return 0;
        }

        private async Task<List<ProcessInfo>> GetMapProcesses()
        {
            var processes = new List<ProcessInfo>();
            
            // Get all gs processes
            try
            {
                var gsProcesses = Process.GetProcessesByName("gs");
                foreach (var proc in gsProcesses)
                {
                    var procInfo = new ProcessInfo
                    {
                        Name = "gs",
                        Path = proc.MainModule?.FileName ?? "gs",
                        Pid = proc.Id,
                        MemoryPercent = GetProcessMemoryPercent(proc),
                        CpuPercent = GetProcessCpuPercent(proc)
                    };
                    processes.Add(procInfo);
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error getting map processes");
            }
            
            return processes;
        }

        private async Task<byte[]> GetInstanceList()
        {
            var instances = new List<InstanceInfo>();
            
            // Read instances from file if exists
            var instanceFile = "instance.txt";
            if (File.Exists(instanceFile))
            {
                var lines = await File.ReadAllLinesAsync(instanceFile);
                foreach (var line in lines)
                {
                    var parts = line.Split('\t');
                    if (parts.Length >= 2)
                    {
                        instances.Add(new InstanceInfo
                        {
                            Tag = parts[0],
                            InstanceId = int.TryParse(parts[1], out int id) ? id : 0
                        });
                    }
                }
            }
            
            var response = new OctetsStream();
            response.CompactUInt32((uint)instances.Count);
            
            foreach (var instance in instances)
            {
                instance.Marshal(response);
            }
            
            response.Encode(12);
            return response.GetData();
        }

        private async Task<byte[]> ExecuteCommands(OctetsStream os, int size)
        {
            var commandCount = os.UncompactUInt32();
            
            for (int i = 0; i < commandCount; i++)
            {
                var command = os.ReadString();
                
                _logger.LogInformation($"Executing command: {command}");
                
                try
                {
                    var processInfo = new ProcessStartInfo
                    {
                        FileName = "/bin/bash",
                        Arguments = $"-c \"{command}\"",
                        RedirectStandardOutput = true,
                        RedirectStandardError = true,
                        UseShellExecute = false,
                        CreateNoWindow = true
                    };
                    
                    using var process = Process.Start(processInfo);
                    await process.WaitForExitAsync();
                    
                    if (process.ExitCode == 0)
                    {
                        _logger.LogInformation($"Command executed successfully: {command}");
                    }
                    else
                    {
                        var error = await process.StandardError.ReadToEndAsync();
                        _logger.LogError($"Command failed: {command}, Error: {error}");
                    }
                }
                catch (Exception ex)
                {
                    _logger.LogError(ex, $"Error executing command: {command}");
                }
            }
            
            return new byte[0];
        }

        private byte[] GetServerConfig()
        {
            var response = new OctetsStream();
            
            response.WriteString(_config.ServName);
            response.WriteString(_config.Password);
            response.WriteInt32(_config.Port);
            response.WriteString(_config.HomePath);
            response.WriteString(_config.GsName);
            response.WriteString(_config.GsConfPath);
            response.WriteString(_config.GsPath);
            response.WriteInt32(_config.Aid);
            response.WriteInt32(_config.ZoneId);
            response.WriteInt32(_config.ServId);
            response.WriteString(_config.DefaultIcon);
            response.WriteInt32(_config.LogRowCount);
            response.WriteString(_config.LogPath);
            response.WriteInt32(_config.ServerVersion);
            response.WriteString(_config.PidFile);
            response.WriteInt32(_config.PauseStartInstanceFixed);
            response.WriteInt32(_config.PauseStartPerInstance);
            response.WriteInt32(_config.MaxChatRow);
            response.WriteInt32(_config.MaxFormatLogRow);
            response.WriteInt32(_config.MaxWorld2LogRow);
            response.WriteInt32(_config.AuthDType);
            response.WriteString(_config.ShellAdd);
            response.WriteString(_config.GameBackupPath);
            response.WriteString(_config.MysqlBackupPath);
            response.WriteInt32(_config.MysqlBackupType);
            response.WriteString(_config.MysqlUser);
            response.WriteString(_config.MysqlPass);
            response.WriteInt32(_config.MysqlPort);
            response.WriteString(_config.MysqlBase);
            response.WriteString(_config.MysqlHost);
            response.WriteString(_config.GDeliveryIp);
            response.WriteInt32(_config.GDeliveryPort);
            response.WriteInt32(_config.GProviderPort);
            response.WriteString(_config.GameDbdIp);
            response.WriteInt32(_config.GameDbdPort);
            response.WriteString(_config.UniquenamedIp);
            response.WriteInt32(_config.UniquenamedPort);
            
            response.Encode(14);
            return response.GetData();
        }

        private async Task<byte[]> GetUserCount(OctetsStream os, int size)
        {
            var response = new OctetsStream();
            var commandCount = os.UncompactUInt32();
            
            for (int i = 0; i < commandCount; i++)
            {
                var sql = os.ReadString();
                _logger.LogInformation($"Executing SQL: {sql}");
                
                if (sql.Contains("auth"))
                {
                    // Get GM accounts
                    var gms = await GetGMAccounts(sql);
                    response.CompactUInt32((uint)gms.Count);
                    
                    foreach (var gm in gms)
                    {
                        response.WriteInt32(gm.Id);
                        response.WriteString(gm.Name);
                        response.WriteInt32(gm.Rules);
                    }
                }
                else
                {
                    // Get user count
                    var count = await GetUserCountFromDb(sql);
                    response.WriteInt32(count);
                }
            }
            
            response.Encode(16);
            return response.GetData();
        }

        private async Task<List<GMAccount>> GetGMAccounts(string sql)
        {
            var accounts = new List<GMAccount>();
            
            try
            {
                using var connection = new MySqlConnection(GetConnectionString());
                await connection.OpenAsync();
                
                using var command = new MySqlCommand(sql, connection);
                using var reader = await command.ExecuteReaderAsync();
                
                while (await reader.ReadAsync())
                {
                    accounts.Add(new GMAccount
                    {
                        Id = reader.GetInt32("userid"),
                        Name = reader.GetString("name"),
                        Rules = reader.GetInt32("rid")
                    });
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error getting GM accounts");
            }
            
            return accounts;
        }

        private async Task<int> GetUserCountFromDb(string sql)
        {
            try
            {
                using var connection = new MySqlConnection(GetConnectionString());
                await connection.OpenAsync();
                
                using var command = new MySqlCommand(sql, connection);
                var result = await command.ExecuteScalarAsync();
                
                if (result != null && int.TryParse(result.ToString(), out int count))
                {
                    return count;
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error getting user count");
            }
            
            return 0;
        }

        private async Task<byte[]> GetUserList(OctetsStream os, int size)
        {
            var sql = os.ReadString();
            _logger.LogInformation($"Getting user list with SQL: {sql}");
            
            var users = await GetUsersFromDb(sql);
            
            var response = new OctetsStream();
            response.CompactUInt32((uint)users.Count);
            
            foreach (var user in users)
            {
                user.Marshal(response);
            }
            
            response.Encode(17);
            return response.GetData();
        }

        private async Task<List<UserInfo>> GetUsersFromDb(string sql)
        {
            var users = new List<UserInfo>();
            
            try
            {
                using var connection = new MySqlConnection(GetConnectionString());
                await connection.OpenAsync();
                
                using var command = new MySqlCommand(sql, connection);
                using var reader = await command.ExecuteReaderAsync();
                
                while (await reader.ReadAsync())
                {
                    var user = new UserInfo
                    {
                        Id = reader.GetInt32("ID"),
                        Name = reader.GetString("name"),
                        Email = reader.IsDBNull(reader.GetOrdinal("email")) ? "" : reader.GetString("email"),
                        TrueName = reader.IsDBNull(reader.GetOrdinal("truename")) ? "" : reader.GetString("truename"),
                        IdNumber = reader.IsDBNull(reader.GetOrdinal("idnumber")) ? "" : reader.GetString("idnumber"),
                        Question = reader.IsDBNull(reader.GetOrdinal("question")) ? "" : reader.GetString("question"),
                        Answer = reader.IsDBNull(reader.GetOrdinal("answer")) ? "" : reader.GetString("answer")
                    };
                    
                    if (!reader.IsDBNull(reader.GetOrdinal("creatime")))
                    {
                        user.CreateTime = reader.GetDateTime("creatime");
                    }
                    
                    users.Add(user);
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error getting user list");
            }
            
            return users;
        }

        private async Task<byte[]> GetGMPrivileges(OctetsStream os, int size)
        {
            var sql = os.ReadString();
            _logger.LogInformation($"Getting GM privileges with SQL: {sql}");
            
            var privileges = new List<int>();
            
            try
            {
                using var connection = new MySqlConnection(GetConnectionString());
                await connection.OpenAsync();
                
                using var command = new MySqlCommand(sql, connection);
                using var reader = await command.ExecuteReaderAsync();
                
                while (await reader.ReadAsync())
                {
                    privileges.Add(reader.GetInt32(0));
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error getting GM privileges");
            }
            
            var response = new OctetsStream();
            response.CompactUInt32((uint)privileges.Count);
            
            foreach (var priv in privileges)
            {
                response.WriteInt32(priv);
            }
            
            response.Encode(18);
            return response.GetData();
        }

        private async Task<byte[]> ForwardToGameServer(OctetsStream os, int size, int opcode, string ip, int port, bool expectResponse = true)
        {
            try
            {
                var data = os.ReadBytes(0, size);
                var request = new OctetsStream(data);
                request.Encode(opcode);
                
                var response = await SendToGameServer(request.GetData(), ip, port, expectResponse);
                
                if (expectResponse && response != null)
                {
                    _logger.LogDebug($"Received {response.Length} bytes from game server");
                    return response;
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, $"Error forwarding to game server {ip}:{port}");
            }
            
            return new byte[0];
        }

        private async Task<byte[]> SendToGameServer(byte[] data, string ip, int port, bool expectResponse = true)
        {
            try
            {
                using var client = new TcpClient();
                await client.ConnectAsync(ip, port);
                
                using var stream = client.GetStream();
                await stream.WriteAsync(data, 0, data.Length);
                
                if (expectResponse)
                {
                    var buffer = new byte[16384];
                    var bytesRead = await stream.ReadAsync(buffer, 0, buffer.Length);
                    
                    if (bytesRead > 0)
                    {
                        var response = new byte[bytesRead];
                        Array.Copy(buffer, response, bytesRead);
                        return response;
                    }
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, $"Error sending to game server {ip}:{port}");
            }
            
            return new byte[0];
        }

        private async Task<byte[]> ProcessGMSetGameAttri(OctetsStream os, int size)
        {
            var attribute = os.ReadByte();
            var value = os.ReadByte();
            
            var arg = new OctetsStream();
            
            // GMSetGameAttributes structure
            arg.WriteInt32(-1); // retcode
            arg.WriteInt32(32); // gmroleid
            arg.WriteInt32(-1); // localsid
            arg.WriteByte(attribute);
            arg.WriteByte(1); // count
            arg.WriteByte(value);
            
            arg.Encode(353); // opGMSetGameAttri
            
            await SendToGameServer(arg.GetData(), _config.GDeliveryIp, _config.GDeliveryPort, false);
            return new byte[0];
        }

        private async Task<byte[]> ProcessChatBroadcast(OctetsStream os, int size)
        {
            var data = os.ReadBytes(0, size);
            
            // Forward to game server
            var request = new OctetsStream(data);
            request.Encode(120); // opChatBroadcast
            
            await SendToGameServer(request.GetData(), _config.GDeliveryIp, _config.GDeliveryPort, false);
            return new byte[0];
        }

        private async Task<byte[]> ProcessAutoLockSet(OctetsStream os, int size)
        {
            var data = os.ReadBytes(0, size);
            
            // Process autolock set
            // Implementation depends on your specific requirements
            
            return new byte[0];
        }

        private string GetConnectionString()
        {
            return $"Server={_config.MysqlHost};Port={_config.MysqlPort};Database={_config.MysqlBase};User={_config.MysqlUser};Password={_config.MysqlPass};";
        }

        private string GetOpcodeName(int opcode)
        {
            return _opcodeNames.TryGetValue(opcode, out string name) ? name : "Unknown";
        }

        private Dictionary<int, string> InitializeOpcodeNames()
        {
            return new Dictionary<int, string>
            {
                { 10, "GetMemoryInfo" },
                { 11, "GetProcessList" },
                { 12, "GetInstanceList" },
                { 13, "ExecuteCommands" },
                { 14, "GetServerConfig" },
                { 16, "GetUserCount" },
                { 17, "GetUserList" },
                { 18, "GetGMPrivileges" },
                { 120, "ChatBroadcast" },
                { 351, "GMListOnlineUser" },
                { 352, "GMGetGameAttri" },
                { 353, "GMSetGameAttri" },
                { 1024, "GetRole" },
                { 3002, "PutRoleData" },
                { 3012, "GetRoleData" },
                { 3024, "GetUserRoles" },
                { 3055, "DBGetConsumeInfos" },
                { 3101, "AutoLockGet" },
                { 3102, "AutoLockSet" },
                { 4606, "GetFactionDetail" }
            };
        }
    }
}