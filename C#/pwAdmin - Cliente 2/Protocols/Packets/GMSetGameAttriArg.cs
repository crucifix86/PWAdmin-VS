namespace Protocols.Packets
{
    public class GMSetGameAttriArg : Protocol
    {
        public RoleId gmroleid = new RoleId();
        public int localsid;
        public byte attribute;
        public byte count;
        public byte value;

        public GMSetGameAttriArg() : base((int)Opcode.GMSetGameAttri) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.gmroleid);
            os.marshal(this.localsid);
            os.marshal(this.attribute);
            os.marshal(this.count);
            os.marshal(this.value);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            os.unmarshal(gmroleid);
            this.localsid = os.unmarshal_int();
            this.attribute = os.unmarshal_byte();
            this.count = os.unmarshal_byte();
            this.value = os.unmarshal_byte();
            return os;
        }
    }
}
