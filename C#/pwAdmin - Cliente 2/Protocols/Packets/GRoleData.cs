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

        public GRoleData() : base((int)Opcode.GetRoleData) { }


        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal((Marshal)this.Base);
            os.marshal((Marshal)this.Status);
            os.marshal((Marshal)this.Pocket);
            os.marshal((Marshal)this.Equipment);
            os.marshal((Marshal)this.Storehouse);
            os.marshal((Marshal)this.Task);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            os.unmarshal((Marshal)this.Base);
            os.unmarshal((Marshal)this.Status);
            os.unmarshal((Marshal)this.Pocket);
            os.unmarshal((Marshal)this.Equipment);
            os.unmarshal((Marshal)this.Storehouse);
            os.unmarshal((Marshal)this.Task);
            return os;
        }
    }
}