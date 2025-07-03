using System.Text;

using GNET;
namespace Protocols.Packets
{
    public class DebugCommand : Protocol
    {
        public int roleid;
        public int tag;
        public Octets data = new Octets();

        public DebugCommand() : base((int)Opcode.DebugCommand) { }

        public void setCommand(string newmsg)
        {
            this.data.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(newmsg));
        }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.roleid);
            os.marshal(this.tag);
            os.marshal(this.data);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.roleid = os.unmarshal_int();
            this.tag = os.unmarshal_int();
            os.unmarshal(this.data);
            return os;
        }
    }
}
