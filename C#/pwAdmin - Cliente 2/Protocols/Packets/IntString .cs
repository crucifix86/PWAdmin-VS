using GNET;
using GNET.Rpc;

namespace Protocols.Packets
{
    public class IntString : GNET.Rpc.Data
    {
        public int id;
        public string name;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.id);
            os.marshal(this.name);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.id = os.unmarshal_int();
            this.name = os.unmarshal_String();
            return os;
        }
    }
}
