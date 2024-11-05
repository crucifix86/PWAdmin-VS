namespace Protocols.Packets
{
    public class GetMaxOnlineNumArg : Protocol
    {
        public int padding;

        public GetMaxOnlineNumArg() : base((int)Opcode.GetMaxOnlineNum) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(padding);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            padding = os.unmarshal_int();
            return os;
        }
    }
}
