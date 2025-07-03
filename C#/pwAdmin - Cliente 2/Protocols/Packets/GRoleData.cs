using GNET;

namespace Protocols.Packets
{
    public class GRoleData : Protocol
    {
        public GRoleBase Base = new GRoleBase();

        public GRoleStatus Status = new GRoleStatus();

        public GRolePocket Pocket = new GRolePocket();

        public GRoleEquipment Equipment = new GRoleEquipment();

        public GRoleStorehouse Storehouse = new GRoleStorehouse();

        public GRoleTask Task = new GRoleTask();

        public GRoleData() { }


        public override OctetsStream marshal(OctetsStream os)
        {
            this.Base.marshal(os);
            this.Status.marshal(os);
            this.Pocket.marshal(os);
            this.Equipment.marshal(os);
            this.Storehouse.marshal(os);
            this.Task.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.Base.unmarshal(os);
            this.Status.unmarshal(os);
            this.Pocket.unmarshal(os);
            this.Equipment.unmarshal(os);
            this.Storehouse.unmarshal(os);
            this.Task.unmarshal(os);
            return os;
        }
    }
}