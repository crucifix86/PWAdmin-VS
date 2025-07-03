using GNET;
﻿namespace Protocols.Packets
{
    public class GetFactionDetailArg : Protocol
    {
        public RoleId key = new RoleId();

        public GetFactionDetailArg() { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(key);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            key.unmarshal(os);
            return os;
        }
    }
}
