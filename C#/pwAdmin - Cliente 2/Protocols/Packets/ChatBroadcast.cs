using System.Text;

using GNET;
namespace Protocols.Packets
{
    public class ChatBroadCast : Protocol
    {
        public byte channel;
        public byte emotion;
        public int srcroleid;
        public Octets msg = new Octets();
        public Octets data = new Octets();

        public ChatBroadCast() { }

        public void setData()
        {
            this.data.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(""));
        }

        public void setMessage(string msg)
        {
            this.msg.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(msg));
        }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.channel);
            os.marshal(this.emotion);
            os.marshal(this.srcroleid);
            os.marshal(this.msg);
            os.marshal(this.data);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.channel = os.unmarshal_byte();
            this.emotion = os.unmarshal_byte();
            this.srcroleid = os.unmarshal_int();
            os.unmarshal(this.msg);
            os.unmarshal(this.data);
            return os;
        }
    }
}
