using GNET;
﻿namespace Protocols.Packets
{
    public class GMSetGameAttriArg : Protocol
    {
        public RoleId gmroleid = new RoleId();
        public int localsid;
        public byte attribute;
        public byte count;
        public byte value;

        public GMSetGameAttriArg() { }

        public override OctetsStream marshal(OctetsStream os)
        {
            this.gmroleid.marshal(os);
            os.marshal(this.localsid);
            os.marshal(this.attribute);
            os.marshal(this.count);
            os.marshal(this.value);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            gmroleid.unmarshal(os);
            this.localsid = os.unmarshal_int();
            this.attribute = os.unmarshal_byte();
            this.count = os.unmarshal_byte();
            this.value = os.unmarshal_byte();
            return os;
        }
    }
}
