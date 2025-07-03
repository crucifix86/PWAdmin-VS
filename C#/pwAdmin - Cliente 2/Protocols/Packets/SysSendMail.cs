using System;
using System.Text;
using GNET;

namespace Protocols.Packets
{
    public class SysSendMail : Protocol
    {
        public int tid;
        public int sysid;
        public byte sys_type;
        public int receiver;
        public Octets title = new Octets();
        public Octets context = new Octets();
        public GRoleInventory attach_obj = new GRoleInventory();
        public int attach_money;

        public SysSendMail() { }


        public void setTitle(String msg)
        {
            this.title.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(msg));
        }

        public void setContext(String msg)
        {
            this.context.replace(Encoding.GetEncoding("UTF-16LE").GetBytes(msg));
        }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.tid);
            os.marshal(this.sysid);
            os.marshal(this.sys_type);
            os.marshal(this.receiver);
            os.marshal(this.title);
            os.marshal(this.context);
            os.marshal(this.attach_obj);
            os.marshal(this.attach_money);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.tid = os.unmarshal_int();
            this.sysid = os.unmarshal_int();
            this.sys_type = os.unmarshal_byte();
            this.receiver = os.unmarshal_int();
            os.unmarshal(this.title);
            os.unmarshal(this.context);
            this.attach_obj.unmarshal(os);
            this.attach_money = os.unmarshal_int();
            return os;
        }

    }
}
