using GNET;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class GRoleEquipment : Protocol
    {
        public DataVector inv = new DataVector(new GRoleInventory());
        public GRoleEquipment() : base((int)Opcode.NULL) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            inv.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            inv.unmarshal(os);
            return os;
        }
    }
}