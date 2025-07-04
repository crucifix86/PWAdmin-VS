using System;
using pwAdmin.Properties;
using Protocols.Packets;
using GNET;
using static GNET.Rpc.Data;
using Protocols;
using pwAdmin.GNET;
using pwAdmin.Utils;

namespace pwAdmin
{
    public class Comandos
    {
        private static string _ip = null;
        private static int? _port = null;
        
        public static string ip 
        { 
            get 
            { 
                // Always use SimpleSettings
                return Utils.SimpleSettings.ServerIP;
            }
            set 
            { 
                _ip = value;
                Utils.SimpleSettings.ServerIP = value;
            }
        }
        
        public static int port 
        { 
            get 
            { 
                // Always use SimpleSettings
                return Utils.SimpleSettings.ServerPort;
            }
            set 
            { 
                _port = value;
                Utils.SimpleSettings.ServerPort = value;
            }
        }
        public static void AddCash(int userid, int valor)
        {
            DebugAddCash arg = new DebugAddCash();
            arg.userid = userid;
            arg.cashnum = valor;
            Packet.SendPacket(ip, port, arg, (int)CustomOpcode.DebugAddCash, false);
        }

        public static void SendMessage(int roleid, int dstroleid, MessageType channel, string msg)
        {
            ChatBroadCast c = new ChatBroadCast();
            c.channel = (byte)channel;
            c.emotion = 0;
            c.srcroleid = roleid;
            c.setMessage(msg);
            c.data.setString("");
            Packet.SendPacket(ip, port, c, (int)CustomOpcode.Chat, false);
        }

        public static DBAutoLock AutolockGet(int userid)
        {
            DBAutoLockGet arg = new DBAutoLockGet();
            arg.userid.returncode = -1;
            arg.userid.id = userid;
            var os = Packet.SendPacket(ip, port, arg, (int)CustomOpcode.AutoLockGet);
            DBAutoLock res = new DBAutoLock();
            res.unmarshal(os);
            return res;
        }

        public static void AutolockRemove(int userid)
        {
            DBAutoLockSet arg = new DBAutoLockSet();
            arg.userid.returncode = -1;
            arg.userid.id = userid;
            arg.count = 0;
            Packet.SendPacket(ip, port, arg, (int)CustomOpcode.AutoLockSet, false);
        }

        public static void DeleteRole(int roleid)
        {
            DBDeleteRoleArg arg = new DBDeleteRoleArg();
            arg.roleid.returncode = -1;
            arg.roleid.id = roleid;
            arg.create_roolback = 0;
            Packet.SendPacket(ip, port, arg, (int)CustomOpcode.DeleteRole, false);
        }

        public static void SetAttr(byte id, byte status)
        {
            GMSetGameAttriArg arg = new GMSetGameAttriArg();
            arg.gmroleid.returncode = -1;
            arg.gmroleid.id = 0;
            arg.localsid = 0;
            arg.attribute = id;
            arg.count = 1;
            arg.value = status;
            Packet.SendPacket(ip, port, arg, (int)CustomOpcode.GMSetGameAttri, false);
        }

        public static DataVector Logs(string file)
        {
            Log log = new Log();
            log.message = file;
            var os = Packet.SendPacket(ip, port, log, (int)CustomOpcode.Logs);
            DataVector v = new DataVector(new Log());
            v.unmarshal(os);
            return v;
        }

        public static GetFactionDetailRes GetListFactionDetail(int id)
        {
            GetFactionDetailArg arg = new GetFactionDetailArg();
            arg.key.returncode = -1;
            arg.key.id = id;
            var os = Packet.SendPacket(ip, port, arg, (int)CustomOpcode.GetFactionDetail);
            GetFactionDetailRes res = new GetFactionDetailRes();
            res.unmarshal(os);
            return res;
        }

        public static DataVector GetFactionList()
        {
            RoleId id = new RoleId();
            id.returncode = -1;
            id.id = 0;
            var nos = Packet.SendPacket(ip, port, id, (int)CustomOpcode.GetFactionList);
            DataVector v = new DataVector(new ListCity());
            v.unmarshal(nos);
            return v;
        }

        public static bool SysSendMail(int receiver, String title, String context, GRoleInventory attach_obj, int attach_money)
        {
            var random = new Random((int)DateTime.Now.Ticks);
            SysSendMail arg = new SysSendMail();
            arg.tid = random.Next();
            arg.sysid = 32;
            arg.sys_type = 3;
            arg.receiver = receiver;
            arg.setTitle(title);
            arg.setContext(context);
            if (attach_obj != null)
                arg.attach_obj = attach_obj;
            arg.attach_money = attach_money;
            var os = Packet.SendPacket(ip, port, arg, (int)CustomOpcode.SysSendMail);
            int retcode = os.unmarshal_byte();
            return (0 == retcode);
        }

        public static ServerConfig UpdateInfosFromServer()
        {
            Logger.Log("=== UpdateInfosFromServer Started ===");
            var log = new System.Text.StringBuilder();
            
            // For opcode 14 (GetServerConfig), we need to send an empty request
            var request = new OctetsStream();
            request.compact_uint32(501350); // Key
            request.compact_uint32(14); // Opcode for GetServerConfig
            request.compact_uint32(0); // Size (empty data)
            
            try
            {
                log.AppendLine($"Sending GetServerConfig request to {ip}:{port}");
                Logger.Log($"Attempting connection to {ip}:{port}");
                
                using (var client = new System.Net.Sockets.TcpClient())
                {
                    log.AppendLine("Creating TCP client...");
                    Logger.Log("Creating TCP client with 5 second timeout");
                    client.ReceiveTimeout = 5000; // 5 second timeout
                    client.SendTimeout = 5000;
                    
                    log.AppendLine($"Attempting to connect to {ip}:{port}...");
                    Logger.Log($"Connecting to {ip}:{port}...");
                    
                    client.Connect(ip, port);
                    
                    log.AppendLine("Connected successfully!");
                    Logger.Log("TCP connection established successfully");
                    
                    using (var stream = client.GetStream())
                    {
                        var data = request.getBytes();
                        log.AppendLine($"Sending {data.Length} bytes: {BitConverter.ToString(data)}");
                        Logger.LogData("Sending request data", data);
                        
                        stream.Write(data, 0, data.Length);
                        stream.Flush();
                        
                        log.AppendLine("Data sent, waiting for response...");
                        Logger.Log("Data sent, waiting for response...");
                        
                        // Try to read response directly with timeout
                        var buffer = new byte[65536]; // Increased buffer size
                        int bytesRead = 0;
                        
                        try
                        {
                            // The Read will block until data is available or timeout occurs
                            bytesRead = stream.Read(buffer, 0, buffer.Length);
                            
                            if (bytesRead > 0)
                            {
                                log.AppendLine($"Received {bytesRead} bytes response");
                                Logger.Log($"Received {bytesRead} bytes from server");
                                Logger.LogData("Response data", buffer, bytesRead);
                                
                                var responseData = new byte[bytesRead];
                                Array.Copy(buffer, responseData, bytesRead);
                                var response = new OctetsStream(responseData);
                            
                            // Parse the response
                            try
                            {
                                Logger.Log($"Response buffer size: {bytesRead} bytes");
                                Logger.LogData("Raw response", responseData, bytesRead);
                                
                                // Skip the header (key, opcode, size)
                                var key = response.uncompact_uint32();
                                var opcode = response.uncompact_uint32();
                                var size = response.uncompact_uint32();
                                
                                Logger.Log($"Response header - Key: {key}, Opcode: {opcode}, Size: {size}");
                                
                                // Verify we got the right response
                                if (key != 501350)
                                {
                                    Logger.Log($"ERROR: Invalid key in response: {key}");
                                    return null;
                                }
                                
                                // Parse ServerConfig
                                Logger.Log($"Stream position before ServerConfig parse: {response.Position}, remaining: {response.Remaining}");
                                var serverConfig = new ServerConfig();
                                serverConfig.unmarshal(response);
                                
                                Logger.Log($"ServerConfig parsed successfully:");
                                Logger.Log($"  Server Name: {serverConfig.ServName}");
                                Logger.Log($"  Home Path: {serverConfig.HomePath}");
                                Logger.Log($"  GS Path: {serverConfig.GsPath}");
                                Logger.Log($"  Log Path: {serverConfig.LogPath}");
                                Logger.Log($"  MySQL Host: {serverConfig.MysqlHost}");
                                Logger.Log($"  GDelivery: {serverConfig.GDeliveryIp}:{serverConfig.GDeliveryPort}");
                                
                                LastConnectionError = log.ToString();
                                Logger.Log("UpdateInfosFromServer completed successfully");
                                return serverConfig;
                            }
                            catch (Exception parseEx)
                            {
                                Logger.LogError("Failed to parse ServerConfig", parseEx);
                                log.AppendLine($"Parse error: {parseEx.Message}");
                                LastConnectionError = log.ToString();
                                return null;
                            }
                            }
                            else
                            {
                                log.AppendLine("No data received from server (0 bytes)");
                                Logger.Log("No data received from server");
                                LastConnectionError = log.ToString();
                                return null;
                            }
                        }
                        catch (Exception readEx)
                        {
                            Logger.LogError("Failed to read from stream", readEx);
                            log.AppendLine($"Read error: {readEx.Message}");
                            LastConnectionError = log.ToString();
                            return null;
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                log.AppendLine($"Error in UpdateInfosFromServer: {ex.Message}");
                log.AppendLine($"Exception type: {ex.GetType().Name}");
                if (ex.InnerException != null)
                {
                    log.AppendLine($"Inner exception: {ex.InnerException.Message}");
                }
                LastConnectionError = log.ToString();
                Logger.LogError("Error in UpdateInfosFromServer", ex);
                throw;
            }
        }

        public static void StartServer(Processes p)
        {
            Packet.SendPacket(ip, port, p, (int)CustomOpcode.StartProcess);
        }

        public static void StopServer(Processes p)
        {
            Packet.SendPacket(ip, port, p, (int)CustomOpcode.StopProcess);
        }

        public static void StartMap(ListMap tag)
        {
            Packet.SendPacket(ip, port, tag, (int)CustomOpcode.StartMap);
        }

        public static void StopMap(ListMap tag)
        {
            Packet.SendPacket(ip, port, tag, (int)CustomOpcode.StopMap);
        }

        public static void ClearCache()
        {
            OctetsStream os = new OctetsStream();
            os.compact_uint32((int)CustomOpcode.ClearCache);
            Packet.SendPacket(ip, port, os);
        }

        public static GMGetGameAttributes GetServerAttributes()
        {
            GMGetGameAttributes arg = new GMGetGameAttributes();
            var os = Packet.SendPacket(ip, port, arg, (int)CustomOpcode.GMGetGameAttri, true, true, false);
            os.uncompact_uint32();
            arg.unmarshal(os);
            return arg;
        }

        public static GRoleData GetRoleData(int roleid)
        {
            RoleId arg = new RoleId();
            arg.returncode = -1;
            arg.id = roleid;
            var os = Packet.SendPacket(ip, port, arg, (int)CustomOpcode.GetRoleData, true, true, false);
            os.uncompact_uint32();
            GRoleData data = new GRoleData();
            data.unmarshal(os);

            return data;
        }

        public static void TesteGetRoleData(int roleid)
        {
            RoleId arg = new RoleId();
            arg.returncode = -1;
            arg.id = roleid;
            var os = Packet.SendPacket(ip, port, arg, (int)CustomOpcode.GetRoleData, true, true, false);
            os.uncompact_uint32();
            GRoleBase b = new GRoleBase();
            b.unmarshal(os);
            GRoleStatus s = new GRoleStatus();
            s.unmarshal(os);
        }

        public static void PutRoleData(int roleid, GRoleData roledata)
        {
            RoleDataPair arg = new RoleDataPair();
            arg.key.returncode = -1;
            arg.key.id = roleid;
            arg.overwrite = 1;
            arg.value = roledata;
            Packet.SendPacket(ip, port, arg, (int)CustomOpcode.PutRoleData, false);
        }

        public static GetUserRolesRes GetUserRoles(int userid)
        {
            GetUserRolesArg arg = new GetUserRolesArg();
            arg.userid.returncode = -1;
            arg.userid.id = userid;
            var os = Packet.SendPacket(ip, port, arg, (int)CustomOpcode.GetUserRoles, true, true, false);
            os.uncompact_uint32();
            os.unmarshal_int();
            os.unmarshal_int();
            GetUserRolesRes res = new GetUserRolesRes();
            res.unmarshal(os);
            return res;
        }

        public static string LastConnectionError { get; set; } = "";
        
        public static bool TestDirectConnection(string serverIp, int serverPort)
        {
            Logger.Log($"=== TestDirectConnection Started with IP: {serverIp}, Port: {serverPort} ===");
            
            var log = new System.Text.StringBuilder();
            try
            {
                log.AppendLine($"Testing direct connection to {serverIp}:{serverPort}...");
                
                // Create request directly
                var request = new OctetsStream();
                request.compact_uint32(501350); // Key
                request.compact_uint32(14); // Opcode for GetServerConfig
                request.compact_uint32(0); // Size (empty data)
                
                using (var client = new System.Net.Sockets.TcpClient())
                {
                    client.ReceiveTimeout = 5000;
                    client.SendTimeout = 5000;
                    
                    Logger.Log($"Attempting direct connection to {serverIp}:{serverPort}");
                    client.Connect(serverIp, serverPort);
                    Logger.Log("Direct connection successful!");
                    
                    using (var stream = client.GetStream())
                    {
                        var data = request.getBytes();
                        stream.Write(data, 0, data.Length);
                        stream.Flush();
                        
                        System.Threading.Thread.Sleep(100);
                        
                        if (stream.DataAvailable)
                        {
                            var buffer = new byte[4096];
                            var bytesRead = stream.Read(buffer, 0, buffer.Length);
                            Logger.Log($"Received {bytesRead} bytes from server");
                            log.AppendLine("Connection successful!");
                            LastConnectionError = log.ToString();
                            return true;
                        }
                        else
                        {
                            Logger.Log("No response from server");
                            log.AppendLine("No response from server");
                            LastConnectionError = log.ToString();
                            return false;
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                log.AppendLine($"Connection error: {ex.Message}");
                LastConnectionError = log.ToString();
                Logger.LogError($"TestDirectConnection to {serverIp}:{serverPort} failed", ex);
                return false;
            }
        }
        
        public static void ReloadSettings()
        {
            _ip = null;
            _port = null;
            Logger.Log($"Settings reloaded - IP will be: {ip}, Port will be: {port}");
        }
        
        public static bool TestServerConnection()
        {
            Logger.Log("=== TestServerConnection Started ===");
            Logger.Log($"Static IP value: {ip}");
            Logger.Log($"Static Port value: {port}");
            Logger.Log($"_ip backing field: {_ip}");
            Logger.Log($"_port backing field: {_port}");
            Logger.Log($"Settings.Default.ipservidor: '{Settings.Default.ipservidor}'");
            Logger.Log($"Settings.Default.portaservidor: {Settings.Default.portaservidor}");
            Logger.Log($"Time: {DateTime.Now:yyyy-MM-dd HH:mm:ss}");
            
            // First try a simple TCP connection test
            try
            {
                Logger.Log($"Testing basic TCP connection to {ip}:{port}...");
                using (var testClient = new System.Net.Sockets.TcpClient())
                {
                    testClient.Connect(ip, port);
                    Logger.Log("Basic TCP connection successful!");
                    testClient.Close();
                }
            }
            catch (Exception tcpEx)
            {
                Logger.LogError($"Basic TCP connection failed to {ip}:{port}", tcpEx);
            }
            
            var log = new System.Text.StringBuilder();
            try
            {
                log.AppendLine($"Testing connection to {ip}:{port}...");
                log.AppendLine($"Server IP: {ip}");
                log.AppendLine($"Server Port: {port}");
                log.AppendLine($"Time: {DateTime.Now:yyyy-MM-dd HH:mm:ss}");
                
                var serverConfig = UpdateInfosFromServer();
                if (serverConfig != null)
                {
                    // Store the server config globally
                    MainForm.serverConfig = serverConfig;
                    
                    log.AppendLine("Connection successful!");
                    log.AppendLine($"Server name: {serverConfig.ServName}");
                    log.AppendLine($"Home path: {serverConfig.HomePath}");
                    log.AppendLine($"MySQL: {serverConfig.MysqlHost}:{serverConfig.MysqlPort}");
                    
                    LastConnectionError = log.ToString();
                    Logger.Log("TestServerConnection: SUCCESS");
                    return true;
                }
                else
                {
                    log.AppendLine("Connection failed: No response from server");
                    LastConnectionError = log.ToString();
                    Logger.Log("TestServerConnection: FAILED - No response from server");
                    return false;
                }
            }
            catch (Exception ex)
            {
                log.AppendLine($"Connection error: {ex.Message}");
                log.AppendLine($"Exception Type: {ex.GetType().Name}");
                if (ex.InnerException != null)
                {
                    log.AppendLine($"Inner exception: {ex.InnerException.Message}");
                }
                log.AppendLine($"Stack trace:\n{ex.StackTrace}");
                LastConnectionError = log.ToString();
                Logger.LogError("TestServerConnection failed", ex);
                return false;
            }
        }
        
        public static GetMaxOnlineNum_Re GetOnlinePlayerCount()
        {
            try
            {
                Logger.Log("=== GetOnlinePlayerCount Started ===");
                
                // Create request for custom opcode 16 (GetUserCount)
                var request = new OctetsStream();
                request.compact_uint32(501350); // Key
                request.compact_uint32(16); // Custom opcode for GetUserCount
                request.compact_uint32(0); // Size (empty data)
                
                using (var client = new System.Net.Sockets.TcpClient())
                {
                    client.ReceiveTimeout = 5000;
                    client.SendTimeout = 5000;
                    client.Connect(ip, port);
                    
                    using (var stream = client.GetStream())
                    {
                        var data = request.getBytes();
                        Logger.LogData("Sending GetMaxOnlineNum request", data);
                        stream.Write(data, 0, data.Length);
                        stream.Flush();
                        
                        var buffer = new byte[1024];
                        int bytesRead = stream.Read(buffer, 0, buffer.Length);
                        
                        if (bytesRead > 0)
                        {
                            var responseData = new byte[bytesRead];
                            Array.Copy(buffer, responseData, bytesRead);
                            var response = new OctetsStream(responseData);
                            
                            // Skip header
                            var key = response.uncompact_uint32();
                            var opcode = response.uncompact_uint32();
                            var size = response.uncompact_uint32();
                            
                            Logger.Log($"GetMaxOnlineNum response - Key: {key}, Opcode: {opcode}, Size: {size}");
                            
                            if (key == 501350)
                            {
                                var result = new GetMaxOnlineNum_Re();
                                result.unmarshal(response);
                                
                                Logger.Log($"Online players: {result.curnum}/{result.maxnum} (fake max: {result.fakemaxnum})");
                                return result;
                            }
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Logger.LogError("GetOnlinePlayerCount failed", ex);
            }
            
            return null;
        }
        
        public static ServerInfo GetServerInfo()
        {
            try
            {
                Logger.Log("=== GetServerInfo Started ===");
                
                // Create request for custom opcode 10 (GetMemoryInfo)
                var request = new OctetsStream();
                request.compact_uint32(501350); // Key
                request.compact_uint32(10); // Custom opcode for GetMemoryInfo
                request.compact_uint32(0); // Size (empty data)
                
                using (var client = new System.Net.Sockets.TcpClient())
                {
                    client.ReceiveTimeout = 5000;
                    client.SendTimeout = 5000;
                    client.Connect(ip, port);
                    
                    using (var stream = client.GetStream())
                    {
                        var data = request.getBytes();
                        Logger.LogData("Sending GetServerInfo request", data);
                        stream.Write(data, 0, data.Length);
                        stream.Flush();
                        
                        var buffer = new byte[65536];
                        int bytesRead = stream.Read(buffer, 0, buffer.Length);
                        
                        if (bytesRead > 0)
                        {
                            Logger.Log($"Received {bytesRead} bytes for ServerInfo");
                            var responseData = new byte[bytesRead];
                            Array.Copy(buffer, responseData, bytesRead);
                            var response = new OctetsStream(responseData);
                            
                            // Skip header
                            var key = response.uncompact_uint32();
                            var opcode = response.uncompact_uint32();
                            var size = response.uncompact_uint32();
                            
                            Logger.Log($"GetServerInfo response - Key: {key}, Opcode: {opcode}, Size: {size}");
                            
                            if (key == 501350)
                            {
                                // For opcode 10, we get memory info in a specific format
                                var memInfo = new MemoryInfoResponse();
                                memInfo.unmarshal(response);
                                
                                var result = new ServerInfo();
                                result.mem_total = (int)(memInfo.mem_total / 1024 / 1024); // Convert bytes to MB
                                result.mem_used = (int)(memInfo.mem_used / 1024 / 1024);
                                result.mem_free = (int)(memInfo.mem_free / 1024 / 1024);
                                result.swp_total = (int)(memInfo.swp_total / 1024 / 1024);
                                result.swp_used = (int)(memInfo.swp_used / 1024 / 1024);
                                result.swp_free = (int)(memInfo.swp_free / 1024 / 1024);
                                
                                Logger.Log($"Memory info parsed - Memory: {result.mem_used}/{result.mem_total} MB");
                                Logger.Log($"Memory info parsed - Swap: {result.swp_used}/{result.swp_total} MB");
                                
                                // Get process list (opcode 11) separately
                                GetProcessesAndMaps(result);
                                
                                return result;
                            }
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Logger.LogError("GetServerInfo failed", ex);
            }
            
            return null;
        }
        
        private static void GetProcessesAndMaps(ServerInfo serverInfo)
        {
            try
            {
                // Get process list (opcode 11)
                var processes = GetProcessList();
                if (processes != null)
                {
                    serverInfo.processes = processes;
                    Logger.Log($"Set serverInfo.processes with {processes.Count} items");
                }
                
                // Get instance list (opcode 12)
                var instances = GetInstanceList();
                if (instances != null)
                {
                    serverInfo.maps = instances;
                    Logger.Log($"Set serverInfo.maps with {instances.Count} items");
                }
            }
            catch (Exception ex)
            {
                Logger.LogError("Failed to get processes/maps", ex);
            }
        }
        
        private static DataVector GetProcessList()
        {
            try
            {
                var request = new OctetsStream();
                request.compact_uint32(501350); // Key
                request.compact_uint32(11); // Custom opcode for GetProcessList
                request.compact_uint32(0); // Size
                
                using (var client = new System.Net.Sockets.TcpClient())
                {
                    client.ReceiveTimeout = 5000;
                    client.SendTimeout = 5000;
                    client.Connect(ip, port);
                    
                    using (var stream = client.GetStream())
                    {
                        var data = request.getBytes();
                        stream.Write(data, 0, data.Length);
                        stream.Flush();
                        
                        var buffer = new byte[65536];
                        int bytesRead = stream.Read(buffer, 0, buffer.Length);
                        
                        if (bytesRead > 0)
                        {
                            var responseData = new byte[bytesRead];
                            Array.Copy(buffer, responseData, bytesRead);
                            var response = new OctetsStream(responseData);
                            
                            // Skip header
                            var key = response.uncompact_uint32();
                            var opcode = response.uncompact_uint32();
                            var size = response.uncompact_uint32();
                            
                            if (key == 501350)
                            {
                                // Parse process list
                                var count = response.uncompact_uint32();
                                var processes = new DataVector(); // Don't add template object
                                
                                for (uint i = 0; i < count; i++)
                                {
                                    var proc = new Processes();
                                    proc.processName = response.unmarshal_String();
                                    proc.processDir = response.unmarshal_String(); // Server sends path, we store in processDir
                                    proc.pid = response.unmarshal_int();
                                    proc.mem = response.unmarshal_int() / 100.0; // Server sends as int * 100
                                    proc.cpu = response.unmarshal_int() / 100.0;
                                    processes.add(proc);
                                }
                                
                                Logger.Log($"Got {count} processes");
                                return processes;
                            }
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Logger.LogError("GetProcessList failed", ex);
            }
            
            return new DataVector(); // Return empty DataVector without template object
        }
        
        private static DataVector GetInstanceList()
        {
            try
            {
                // Create the full list of all possible maps (like the JSP does)
                var allMaps = GetAllPossibleMaps();
                
                // Get the list of running processes to determine which maps are active
                var runningProcesses = GetProcessList();
                
                // Process the map list to set PIDs for running instances
                var instances = new DataVector();
                
                foreach (ListMap map in allMaps)
                {
                    // Check if this map is running by looking for its tag in the process list
                    bool isRunning = false;
                    foreach (Processes proc in runningProcesses)
                    {
                        // Check if process name contains the map tag (e.g., "./gs gs01" or "gs is01")
                        if (proc.processName.Contains(map.tag) || 
                            (proc.processDir != null && proc.processDir.Contains(map.tag)))
                        {
                            map.pid = proc.pid; // Set the process ID
                            isRunning = true;
                            Logger.Log($"Found running map: {map.tag} with PID {map.pid}");
                            break;
                        }
                    }
                    
                    if (!isRunning)
                    {
                        map.pid = 0; // Not running
                    }
                    
                    instances.add(map);
                }
                
                // Count running instances
                int runningCount = 0;
                foreach (ListMap map in instances)
                {
                    if (map.pid > 0) runningCount++;
                }
                Logger.Log($"Total maps: {instances.Count}, Running: {runningCount}");
                return instances;
            }
            catch (Exception ex)
            {
                Logger.LogError("GetInstanceList failed", ex);
            }
            
            return new DataVector();
        }
        
        private static DataVector GetAllPossibleMaps()
        {
            var maps = new DataVector();
            
            // Main world
            maps.add(new ListMap { pid = 0, tag = "gs01", name = "World" });
            
            // Instances
            maps.add(new ListMap { pid = 0, tag = "is01", name = "City of Abominations" });
            maps.add(new ListMap { pid = 0, tag = "is02", name = "Secret Passage" });
            maps.add(new ListMap { pid = 0, tag = "is05", name = "Firecrag Grotto" });
            maps.add(new ListMap { pid = 0, tag = "is06", name = "Den of Rabid Wolves" });
            maps.add(new ListMap { pid = 0, tag = "is07", name = "Cave of the Vicious" });
            maps.add(new ListMap { pid = 0, tag = "is08", name = "Hall of Deception" });
            maps.add(new ListMap { pid = 0, tag = "is09", name = "Gate of Delirium" });
            maps.add(new ListMap { pid = 0, tag = "is10", name = "Secret Frostcover Grounds" });
            maps.add(new ListMap { pid = 0, tag = "is11", name = "Valley of Disaster" });
            maps.add(new ListMap { pid = 0, tag = "is12", name = "Forest Ruins" });
            maps.add(new ListMap { pid = 0, tag = "is13", name = "Cave of Sadistic Glee" });
            maps.add(new ListMap { pid = 0, tag = "is14", name = "Wraithgate" });
            maps.add(new ListMap { pid = 0, tag = "is15", name = "Hallucinatory Trench" });
            maps.add(new ListMap { pid = 0, tag = "is16", name = "Eden" });
            maps.add(new ListMap { pid = 0, tag = "is17", name = "Brimstone Pit" });
            maps.add(new ListMap { pid = 0, tag = "is18", name = "Temple of the Dragon" });
            maps.add(new ListMap { pid = 0, tag = "is19", name = "Nightscream Island" });
            maps.add(new ListMap { pid = 0, tag = "is20", name = "Snake Isle" });
            
            // Add more maps as needed...
            // For now, just adding a subset to test
            
            // Territory War maps
            maps.add(new ListMap { pid = 0, tag = "bg01", name = "Territory War T-3 PvP" });
            maps.add(new ListMap { pid = 0, tag = "bg02", name = "Territory War T-3 PvE" });
            
            // Arena maps
            maps.add(new ListMap { pid = 0, tag = "arena01", name = "Etherblade Arena" });
            
            return maps;
        }
    }
}
