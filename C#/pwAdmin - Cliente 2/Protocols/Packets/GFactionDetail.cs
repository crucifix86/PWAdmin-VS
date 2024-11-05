using GNET;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class GFactionDetail : Protocol
    {
        public int id;
        public Octets name = new Octets();
        public byte level;
        public int master;
        public Octets announce = new Octets();
        public Octets sysInfo = new Octets();
        public DataVector member = new DataVector(new FMemberInfo());
        public int last_op_time;
        public DataVector alliance = new DataVector(new GFactionAllianceOrHostile());
        public DataVector hostile = new DataVector(new GFactionAllianceOrHostile());
        public DataVector apply = new DataVector(new GFactionRelationApply());

        public GFactionDetail() : base((int)Opcode.GetFactionDetail) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(id);
            os.marshal(name);
            os.marshal(level);
            os.marshal(master);
            os.marshal(announce);
            os.marshal(sysInfo);
            member.marshal(os);
            os.marshal(last_op_time);
            alliance.marshal(os);
            hostile.marshal(os);
            apply.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            id = os.unmarshal_int();
            os.unmarshal(this.name);
            level = os.unmarshal_byte();
            master = os.unmarshal_int();
            os.unmarshal(announce);
            os.unmarshal(sysInfo);
            member.unmarshal(os);
            last_op_time = os.unmarshal_int();
            alliance.unmarshal(os);
            hostile.unmarshal(os);
            apply.unmarshal(os);
            return os;
        }
    }
}
