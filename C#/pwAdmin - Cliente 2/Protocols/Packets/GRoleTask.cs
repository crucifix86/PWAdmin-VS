using GNET;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class GRoleTask : Protocol
    {
        public Octets task_data = new Octets();

        public Octets task_complete = new Octets();

        public Octets task_finishtime = new Octets();

        public DataVector task_inventory = new DataVector(new GRoleInventory());

        public GRoleTask() { }


        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.task_data);
            os.marshal(this.task_complete);
            os.marshal(this.task_finishtime);
            task_inventory.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            os.unmarshal(this.task_data);
            os.unmarshal(this.task_complete);
            os.unmarshal(this.task_finishtime);
            task_inventory.unmarshal(os);
            return os;
        }
    }
}