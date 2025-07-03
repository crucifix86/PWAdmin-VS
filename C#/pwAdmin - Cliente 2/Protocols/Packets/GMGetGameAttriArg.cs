using GNET;
﻿namespace Protocols.Packets
{
    public class GMGetGameAttriArg : Protocol
    {
        public RoleId gmroleid = new RoleId();
        public int localsid;
        public byte attribute;

        public override OctetsStream marshal(OctetsStream os)
        {
            this.gmroleid.marshal(os);
            os.marshal(this.localsid);
            os.marshal(this.attribute);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            gmroleid.unmarshal(os);
            this.localsid = os.unmarshal_int();
            this.attribute = os.unmarshal_byte();
            return os;
        }

        public GMGetGameAttriArg()
        {

        }
    }
}
