using GNET;

namespace Protocols.Packets
{
    public class RoleDataPair : Protocol
    {
        public RoleId key = new RoleId();

        public byte overwrite;

        public GRoleData value = new GRoleData();

        public RoleDataPair() { }


        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.key.unmarshal(os);
            this.overwrite = os.unmarshal_byte();
            this.value.unmarshal(os);
            return os;
        }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.key);
            os.marshal(this.overwrite);
            os.marshal(this.value);
            return os;
        }
    }
}
