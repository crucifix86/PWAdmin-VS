using GNET;
﻿namespace Protocols.Packets
{
    public class GPet : GNET.Rpc.Data
    {
        public int index;
        public Octets data = new Octets();

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(index);
            os.marshal(data);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.index = os.unmarshal_int();
            os.unmarshal(this.data);
            return os;
        }
    }
}