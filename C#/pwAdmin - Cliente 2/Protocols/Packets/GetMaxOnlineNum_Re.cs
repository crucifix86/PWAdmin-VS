using GNET;
using GNET.Rpc;

namespace Protocols.Packets
{
    public class GetMaxOnlineNum_Re : GNET.Rpc.Data
    {
        public int retcode { get; set; } = 0;
        public int maxnum { get; set; } = 0;
        public int fakemaxnum { get; set; } = 0;
        public int curnum { get; set; } = 0;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(retcode);
            os.marshal(maxnum);
            os.marshal(fakemaxnum);
            os.marshal(curnum);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            retcode = os.unmarshal_int();
            maxnum = os.unmarshal_int();
            fakemaxnum = os.unmarshal_int();
            curnum = os.unmarshal_int();
            return os;
        }
    }
}