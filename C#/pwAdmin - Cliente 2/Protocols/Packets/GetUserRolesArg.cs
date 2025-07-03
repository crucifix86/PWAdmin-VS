using GNET;
﻿namespace Protocols.Packets
{
    public class GetUserRolesArg : Protocol
    {
        public RoleId userid = new RoleId();

        public GetUserRolesArg() { }

        public override OctetsStream marshal(OctetsStream value)
        {
            value.marshal(userid);
            return value;
        }

        public override OctetsStream unmarshal(OctetsStream value)
        {
            value.unmarshal(userid);
            return value;
        }
    }
}