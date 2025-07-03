using System.Windows.Forms;
using GNET;
using Protocols.Structs;
using System.Linq;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class GPetCorral : Protocol
    {
        public int capacity;
        public DataVector pets = new DataVector(new GPet());

        public GPetCorral() { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(capacity);
            pets.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.capacity = os.unmarshal_int();
            pets.unmarshal(os);
            return os;
        }
    }
}