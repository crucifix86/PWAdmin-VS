using GNET;
using GNET.Rpc;

namespace Protocols.Packets
{
    public class IntOctets : GNET.Rpc.Data
    {
        public int m_int;
        public Octets m_octets = new Octets();

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.m_int);
            os.marshal(this.m_octets);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.m_int = os.unmarshal_int();
            os.unmarshal(this.m_octets);
            return os;
        }
    }
}
