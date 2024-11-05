namespace Protocols.Packets
{
    public class GPair : Protocol
    {
        public int key;
        public int value;

        public GPair() : base((int)Opcode.NULL) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(key);
            os.marshal(value);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            key = os.unmarshal_int();
            value = os.unmarshal_int();
            return os;
        }
    }
}
