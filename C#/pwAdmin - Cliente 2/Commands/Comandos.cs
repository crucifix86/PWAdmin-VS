using System;
using pwAdmin.Properties;
using Protocols.Packets;
using GNET;
using static GNET.Rpc.Data;
using Protocols;
using pwAdmin.GNET;

namespace pwAdmin
{
    public class Comandos
    {
        public static string ip = Settings.Default.ipservidor;
        public static int port = Convert.ToInt32(Settings.Default.portaservidor);
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

        public static OctetsStream UpdateInfosFromServer()
        {
            ServerInfo info = new ServerInfo();
            var os = Packet.SendPacket(ip, port, info, (int)CustomOpcode.UpdateInfoFromServer, true, true, false);
            return os;
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

        public static bool TestServerConnection()
        {
            try
            {
                var result = UpdateInfosFromServer();
                return result != null;
            }
            catch
            {
                return false;
            }
        }
        
        public static OctetsStream UpdateInfosFromServer()
        {
            try
            {
                // Test connection to pwAdmin server
                var request = new OctetsStream();
                request.compact_uint32(501350); // Key
                request.compact_uint32(14); // Get server config opcode
                request.compact_uint32(0); // Size
                
                var response = ServerConnection.SendOneShotRequestAsync(
                    Settings.Default.ipservidor,
                    Settings.Default.portaservidor,
                    request
                ).Result;
                
                return response;
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error getting server info: {ex.Message}");
                return null;
            }
        }
    }
}
