namespace Protocols.Packets
{
    public class GMGetGameAttriArg : Protocol
    {
        public RoleId gmroleid = new RoleId();
        public int localsid;
        public byte attribute;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.gmroleid);
            os.marshal(this.localsid);
            os.marshal(this.attribute);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            os.unmarshal(gmroleid);
            this.localsid = os.unmarshal_int();
            this.attribute = os.unmarshal_byte();
            return os;
        }

        public GMGetGameAttriArg() : base((int)Opcode.GMGetGameAttri)
        {

        }
    }
}
