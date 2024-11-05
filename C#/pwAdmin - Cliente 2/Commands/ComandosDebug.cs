using GNET;
using Protocols;
using Protocols.Packets;
using pwAdmin.Properties;
using System;
using System.Linq;
using System.Threading;

namespace pwAdmin.Debug
{
    public class ComandosDebug
    {
        public static DBAutoLock AutolockGet(int userid)
        {
            DBAutoLockGet arg = new DBAutoLockGet();
            arg.userid.returncode = -1;
            arg.userid.id = userid;
            var os = Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GAMEDBD, arg, arg.getOpcode());
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
            Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GAMEDBD, arg, arg.getOpcode(), false);
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
        }

        public static GetFactionDetailRes GetListFactionDetail(int id)
        {
            GetFactionDetailArg arg = new GetFactionDetailArg();
            arg.key.returncode = -1;
            arg.key.id = 1;
            var os = Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GAMEDBD, arg, arg.getOpcode(), true, true, true);
            GetFactionDetailRes res = new GetFactionDetailRes();
            res.unmarshal(os);
            return res;
        }

        public static byte SysSendMail(SysSendMail arg)
        {
            var os = Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GDELIVERYD, arg, arg.getOpcode());
            return os.unmarshal_byte();
        }

        public static GMGetGameAttributes GetServerAttributes()
        {
            GMGetGameAttributes arg = new GMGetGameAttributes();
            var os = Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GPROVIDER, arg, (int)Opcode.GMGetGameAttri);
            os.unmarshal_short();
            for (int i = 0; i < 10; i++)
            {
                Attributes attr = new Attributes();
                attr.unmarshal(os);
                arg.attr.Add(attr);
            }
            return arg;
        }

        public static GRoleData GetRoleData(int roleid)
        {
            RoleId arg = new RoleId();
            arg.returncode = -1;
            arg.id = roleid;
            var os = Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GAMEDBD, arg, (int)Opcode.GetRoleData);
            GRoleData data = new GRoleData();
            data.unmarshal(os);
            return data;
        }
        public static void PutRoleData(int roleid, GRoleData roledata)
        {
            Thread.Sleep(5000);
            RoleDataPair arg = new RoleDataPair();
            arg.key.returncode = -1;
            arg.key.id = roleid;
            arg.overwrite = 1;
            arg.value = roledata;
            Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GAMEDBD, arg, arg.getOpcode(), false);
        }

        public static GetUserRolesRes GetUserRoles(int pid)
        {
            RoleId id = new RoleId();
            id.returncode = -1;
            id.id = pid;
            GetUserRolesArg arg = new GetUserRolesArg();
            arg.userid = id;
            var os = Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GAMEDBD, arg, arg.getOpcode());
            GetUserRolesRes res = new GetUserRolesRes();
            res.unmarshal(os);
            return res;
        }

        public static void TerritoryWar(int type)
        {
            switch (type)
            {
                case 1:
                    type = 327660;
                    break;
                case 2:
                    type = 414060;
                    break;
                case 3:
                    type = 591600;
                    break;
            }

            DebugCommand cmd = new DebugCommand();
            cmd.tag = 1;
            cmd.roleid = 1;
            cmd.setCommand(type.ToString());
            Packet.SendPacket(Settings.Default.ipservidor, (int)Porta.GPROVIDER, cmd, 2222);
        }
    }
}
