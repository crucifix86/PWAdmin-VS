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

        public static ServerInfo UpdateInfosFromServer()
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
                                
                                // Parse ServerInfo
                                var serverInfo = new ServerInfo();
                                serverInfo.unmarshal(response);
                                
                                Logger.Log($"ServerInfo parsed successfully:");
                                Logger.Log($"  Memory: {serverInfo.mem_used}/{serverInfo.mem_total} MB");
                                Logger.Log($"  Swap: {serverInfo.swp_used}/{serverInfo.swp_total} MB");
                                Logger.Log($"  Maps count: {serverInfo.maps.Count}");
                                Logger.Log($"  Processes count: {serverInfo.processes.Count}");
                                
                                // Log if counts are 0
                                if (serverInfo.maps.Count == 0)
                                {
                                    Logger.Log("WARNING: No maps returned from server");
                                }
                                if (serverInfo.processes.Count == 0)
                                {
                                    Logger.Log("WARNING: No processes returned from server");
                                }
                                
                                LastConnectionError = log.ToString();
                                Logger.Log("UpdateInfosFromServer completed successfully");
                                return serverInfo;
                            }
                            catch (Exception parseEx)
                            {
                                Logger.LogError("Failed to parse ServerInfo", parseEx);
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
                
                var serverInfo = UpdateInfosFromServer();
                if (serverInfo != null)
                {
                    // Store the server info globally
                    MainForm.info = serverInfo;
                    
                    log.AppendLine("Connection successful!");
                    log.AppendLine($"Server memory: {serverInfo.mem_used}MB/{serverInfo.mem_total}MB");
                    log.AppendLine($"Active maps: {serverInfo.maps.Count}");
                    log.AppendLine($"Running processes: {serverInfo.processes.Count}");
                    
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
    }
}
