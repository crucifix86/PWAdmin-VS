using GNET;
﻿namespace Protocols.Packets
{
    public class GetUserRolesArg : Protocol
    {
        public RoleId userid = new RoleId();

        public GetUserRolesArg() { }

        public override OctetsStream marshal(OctetsStream value)
        {
            userid.marshal(value);
            return value;
        }

        public override OctetsStream unmarshal(OctetsStream value)
        {
            userid.unmarshal(value);
            return value;
        }
    }
}