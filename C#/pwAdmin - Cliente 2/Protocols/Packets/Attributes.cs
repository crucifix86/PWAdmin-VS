using GNET;
using GNET.Rpc;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{    
    public class Attributes : GNET.Rpc.Data
    {      
        public byte attribute;
        public byte localsid;
        public byte value;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(attribute);
            os.marshal(localsid);
            os.marshal(value);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            attribute = os.unmarshal_byte();
            localsid = os.unmarshal_byte();
            value = os.unmarshal_byte();
            return os;
        }
    }

    public class GMGetGameAttributes : GNET.Rpc.Data
    {
        public DataVector attr = new DataVector(new Attributes());

        public override OctetsStream marshal(OctetsStream os)
        {
            attr.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            attr.unmarshal(os);
            return os;
        }
    }
}
