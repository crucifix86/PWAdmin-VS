using GNET;
using GNET.Rpc;
using System.Text;

namespace Protocols.Packets
{
    public class ListMap : GNET.Rpc.Data
    {
        public int pid = 0;
        public string tag = "";
        public string name = "";
        public double mem = 0.0;
        public double cpu = 0.0;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(pid);
            os.marshal(tag);
            os.marshal(name);
            os.marshal(mem);
            os.marshal(cpu);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            pid = os.unmarshal_int();
            tag = os.unmarshal_String();
            name = os.unmarshal_String();
            mem = os.unmarshal_double();
            cpu = os.unmarshal_double();
            return os;
        }
    }
}
