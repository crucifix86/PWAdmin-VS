using GNET;

namespace Protocols.Packets
{
    public class RoleDataPair : Protocol
    {
        public RoleId key = new RoleId();

        public byte overwrite;

        public GRoleData value = new GRoleData();

        public RoleDataPair() : base((int)Opcode.PutRoleData) { }


        public override OctetsStream unmarshal(OctetsStream os)
        {
            os.unmarshal((Marshal)this.key);
            this.overwrite = os.unmarshal_byte();
            os.unmarshal((Marshal)this.value);
            return os;
        }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal((Marshal)this.key);
            os.marshal(this.overwrite);
            os.marshal((Marshal)this.value);
            return os;
        }
    }
}
