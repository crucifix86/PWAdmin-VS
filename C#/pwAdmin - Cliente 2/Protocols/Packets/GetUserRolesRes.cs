using GNET;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class GetUserRolesRes : Protocol
    {
        public DataVector roles = new DataVector(new IntString());

        public GetUserRolesRes() : base((int)Opcode.GetUserRoles) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            roles.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            roles.unmarshal(os);
            return os;
        }
    }
}