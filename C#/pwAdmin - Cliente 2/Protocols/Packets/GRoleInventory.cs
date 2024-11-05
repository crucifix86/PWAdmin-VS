using GNET;

namespace Protocols.Packets
{
    public class GRoleInventory : GNET.Rpc.Data
    {
        public int id;
        public int pos;
        public int count;
        public int max_count;
        public Octets data = new Octets();
        public int proctype;
        public int expire_date;
        public int guid1;
        public int guid2;
        public int mask;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.id);
            os.marshal(this.pos);
            os.marshal(this.count);
            os.marshal(this.max_count);
            os.marshal(this.data);
            os.marshal(this.proctype);
            os.marshal(this.expire_date);
            os.marshal(this.guid1);
            os.marshal(this.guid2);
            os.marshal(this.mask);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.id = os.unmarshal_int();
            this.pos = os.unmarshal_int();
            this.count = os.unmarshal_int();
            this.max_count = os.unmarshal_int();
            os.unmarshal(this.data);
            this.proctype = os.unmarshal_int();
            this.expire_date = os.unmarshal_int();
            this.guid1 = os.unmarshal_int();
            this.guid2 = os.unmarshal_int();
            this.mask = os.unmarshal_int();
            return os;
        }
    }
}