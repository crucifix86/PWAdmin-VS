namespace Protocols.Packets
{
    public class GetFactionDetailArg : Protocol
    {
        public RoleId key = new RoleId();

        public GetFactionDetailArg() : base((int)Opcode.GetFactionDetail) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(key);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            os.unmarshal(key);
            return os;
        }
    }
}
