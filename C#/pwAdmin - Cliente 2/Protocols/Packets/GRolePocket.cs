using GNET;
using System.Collections.Generic;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class GRolePocket : Protocol
    {
        public int capacity;
        public int timestamp;
        public int money;
        public List<GRoleInventory> items = new List<GRoleInventory>();
        public int reserved1;
        public int reserved2;

        public GRolePocket() : base((int)Opcode.NULL) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.capacity);
            os.marshal(this.timestamp);
            os.marshal(this.money);
            os.compact_uint32(items.Count);
            for (int i = 0; i < items.Count; i++)
            {
                items[i].marshal(os);
            }
            os.marshal(this.reserved1);
            os.marshal(this.reserved2);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.capacity = os.unmarshal_int();
            this.timestamp = os.unmarshal_int();
            this.money = os.unmarshal_int();
             int num = os.uncompact_uint32();
             for (int i = 0; i < num; i++)
             {
                 GRoleInventory item = new GRoleInventory();
                 item.unmarshal(os);
                 items.Add(item);
             }
            this.reserved1 = os.unmarshal_int();
            this.reserved2 = os.unmarshal_int();
            return os;
        }
    }
}