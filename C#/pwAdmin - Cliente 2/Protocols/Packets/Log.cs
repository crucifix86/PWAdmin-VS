using GNET;

namespace Protocols.Packets
{
    public class Log : Rpc.Data
    {
        public string message;

        public override global::OctetsStream marshal(global::OctetsStream os)
        {
            os.marshal(message);
            return os;
        }

        public override global::OctetsStream unmarshal(global::OctetsStream os)
        {
            message = os.unmarshal_String();
            return os;
        }

    }
}
