using GNET;
using GNET.Rpc;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class ServerInfo : GNET.Rpc.Data
    {
        public int mem_used = 0;
        public int mem_free = 0;
        public int mem_total = 0;
        public int swp_used = 0;
        public int swp_free = 0;
        public int swp_total = 0;
        public DataVector maps = new DataVector(new ListMap());
        public DataVector processes = new DataVector(new Processes());

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(mem_used);
            os.marshal(mem_free);
            os.marshal(mem_total);
            os.marshal(swp_used);
            os.marshal(swp_free);
            os.marshal(swp_total);
            maps.marshal(os);
            processes.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            mem_used = os.unmarshal_int();
            mem_free = os.unmarshal_int();
            mem_total = os.unmarshal_int();
            swp_used = os.unmarshal_int();
            swp_free = os.unmarshal_int();
            swp_total = os.unmarshal_int();
            maps.unmarshal(os);
            processes.unmarshal(os);
            return os;
        }
    }
}
