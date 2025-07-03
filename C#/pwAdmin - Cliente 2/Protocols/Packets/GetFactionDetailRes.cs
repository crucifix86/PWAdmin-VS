using GNET;
﻿namespace Protocols.Packets
{
    public class GetFactionDetailRes : Protocol
    {
        public int retcode;
        public GFactionDetail body = new GFactionDetail();

        public GetFactionDetailRes() : base((int)Opcode.GetFactionDetail) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(retcode);
            os.marshal(body);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            os.unmarshal(body);
            return os;
        }
    }
}
