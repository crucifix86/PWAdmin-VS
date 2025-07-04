using GNET;
using GNET.Rpc;

namespace Protocols.Packets
{
    public class MemoryInfoResponse : GNET.Rpc.Data
    {
        public long mem_total { get; set; } = 0;
        public long mem_used { get; set; } = 0;
        public long mem_free { get; set; } = 0;
        public long swp_total { get; set; } = 0;
        public long swp_used { get; set; } = 0;
        public long swp_free { get; set; } = 0;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(mem_total);
            os.marshal(mem_used);
            os.marshal(mem_free);
            os.marshal(swp_total);
            os.marshal(swp_used);
            os.marshal(swp_free);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            mem_total = os.unmarshal_long();
            mem_used = os.unmarshal_long();
            mem_free = os.unmarshal_long();
            swp_total = os.unmarshal_long();
            swp_used = os.unmarshal_long();
            swp_free = os.unmarshal_long();
            return os;
        }
    }
}