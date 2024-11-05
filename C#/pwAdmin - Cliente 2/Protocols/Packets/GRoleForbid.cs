using GNET;

namespace Protocols.Packets
{
    public class GRoleForbid : Rpc.Data
    {
        public byte type;
        public int time;
        public int createtime;
        public Octets reason = new Octets();

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.type);
            os.marshal(this.time);
            os.marshal(this.createtime);
            os.marshal(this.reason);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.type = os.unmarshal_byte();
            this.time = os.unmarshal_int();
            this.createtime = os.unmarshal_int();
            os.unmarshal(this.reason);
            return os;
        }
    }
}