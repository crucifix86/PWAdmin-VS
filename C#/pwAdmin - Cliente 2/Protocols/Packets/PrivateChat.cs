using System.Text;
using GNET;

namespace Protocols.Packets
{
    public class PrivateChat : Protocol
    {
        public byte channel;
        public byte emotion;
        public Octets src_name = new Octets();
        public int srcroleid;
        public Octets dst_name = new Octets();
        public int dstroleid;
        public Octets msg = new Octets();
        public Octets data = new Octets();
        public int src_level;

        public PrivateChat() : base((int)Opcode.ChatPrivate) { }

        public void setData()
        {
            this.data.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(""));
        }
        public void setPrivateMessage(string newmsg)
        {
            this.msg.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(newmsg));
        }

        public void setSrcName(string msg)
        {
            this.src_name.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(msg));
        }

        public void SetDstName(string msg)
        {
            this.dst_name.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(msg));
        }


        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.channel = os.unmarshal_byte();
            this.emotion = os.unmarshal_byte();
            os.unmarshal(this.src_name);
            this.srcroleid = os.unmarshal_int();
            os.unmarshal(this.dst_name);
            this.dstroleid = os.unmarshal_int();
            os.unmarshal(this.msg);
            os.unmarshal(this.data);
            this.src_level = os.unmarshal_int();
            return os;
        }
        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.channel);
            os.marshal(this.emotion);
            os.marshal(this.src_name);
            os.marshal(this.srcroleid);
            os.marshal(this.dst_name);
            os.marshal(this.dstroleid);
            os.marshal(this.msg);
            os.marshal(this.data);
            os.marshal(this.src_level);
            return os;
        }
    }
}
