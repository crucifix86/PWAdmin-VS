using GNET;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class GRoleStorehouse : Protocol
    {
        public int capacity;

        public int money;

        public DataVector items = new DataVector(new GRoleInventory());

        public byte size1;

        public byte size2;

        public DataVector dress = new DataVector(new GRoleInventory());

        public DataVector material = new DataVector(new GRoleInventory());

        public byte size3;

        public DataVector generalcard = new DataVector(new GRoleInventory());

        public short reserved;

        public GRoleStorehouse() { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.capacity);
            os.marshal(this.money);
            items.marshal(os);
            os.marshal(this.size1);
            os.marshal(this.size2);
            dress.marshal(os);
            material.marshal(os);
            os.marshal(this.size3);
            generalcard.marshal(os);
            os.marshal(this.reserved);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.capacity = os.unmarshal_int();
            this.money = os.unmarshal_int();
            items.unmarshal(os);
            this.size1 = os.unmarshal_byte();
            this.size2 = os.unmarshal_byte();
            dress.unmarshal(os);
            material.unmarshal(os);
            this.size3 = os.unmarshal_byte();
            generalcard.unmarshal(os);
            this.reserved = os.unmarshal_short();
            return os;
        }
    }
}