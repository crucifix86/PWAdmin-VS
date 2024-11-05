namespace Protocols.Packets
{
    public class RoleId : Protocol
    {
        public int returncode;
        public int id;

        public RoleId() : base((int)Opcode.NULL) { }


        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.returncode);
            os.marshal(this.id);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.returncode = os.unmarshal_int();
            this.id = os.unmarshal_int();
            return os;
        }
    }
}
