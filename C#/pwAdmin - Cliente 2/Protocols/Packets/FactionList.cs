using GNET;

namespace Protocols.Packets
{
    public class FactionList : Protocol
    {
        public string name;
        public int level;
        public int masterid;
        public int masterrole;
        public int member_size;

        public FactionList() : base((int)CustomOpcode.GetFactionDetail) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(name);
            os.marshal(level);
            os.marshal(masterid);
            os.marshal(masterrole);
            os.marshal(member_size);
            return os;
        }
        public override OctetsStream unmarshal(OctetsStream os)
        {
            name = os.unmarshal_String();
            level = os.unmarshal_int();
            masterid = os.unmarshal_int();
            masterrole = os.unmarshal_int();
            member_size = os.unmarshal_int();
            return os;
        }
    }
}
