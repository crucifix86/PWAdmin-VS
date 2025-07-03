using GNET;
﻿namespace Protocols.Packets
{
    public class GetMaxOnlineNumRes : Protocol
    {
        public int retcode;
        public int maxnum;
        public int fakemaxnum;
        public int curnum;

        public GetMaxOnlineNumRes() { }

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
