using GNET;
﻿namespace Protocols.Packets
{
    public class DebugAddCash : Protocol
    {
        public int userid;
        public int cashnum;

        public DebugAddCash() { }

        public override OctetsStream marshal(OctetsStream value)
        {
            value.marshal(userid);
            value.marshal(cashnum);
            return value;
        }
        public override OctetsStream unmarshal(OctetsStream value)
        {
            userid = value.unmarshal_int();
            cashnum = value.unmarshal_int();
            return value;
        }
    }
}
