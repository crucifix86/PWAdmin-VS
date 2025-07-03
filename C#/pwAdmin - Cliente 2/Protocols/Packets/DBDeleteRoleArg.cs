using GNET;
﻿namespace Protocols.Packets
{
    internal class DBDeleteRoleArg : Protocol
    {
        public RoleId roleid = new RoleId();
        public int create_roolback;

        public DBDeleteRoleArg() { }

        public override OctetsStream marshal(OctetsStream os)
        {
            roleid.marshal(os);
            os.marshal(create_roolback);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            roleid.unmarshal(os);
            create_roolback = os.unmarshal_int();
            return os;
        }
    }
}
