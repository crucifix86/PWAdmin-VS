using GNET;
using GNET.Rpc;

namespace Protocols.Packets
{
    public class GFactionAllianceOrHostile : GNET.Rpc.Data
    {
        public int fid;
        public int end_time;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(fid);
            os.marshal(end_time);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            fid = os.unmarshal_int();
            end_time = os.unmarshal_int();
            return os;
        }
    }
}
