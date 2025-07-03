using GNET;
using GNET.Rpc;

namespace Protocols.Packets
{
    public class Log : GNET.Rpc.Data
    {
        public string message;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(message);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            message = os.unmarshal_String();
            return os;
        }

    }
}
