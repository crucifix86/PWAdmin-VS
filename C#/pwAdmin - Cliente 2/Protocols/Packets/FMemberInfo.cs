using GNET;

namespace Protocols.Packets
{
    public class FMemberInfo : Rpc.Data
    {
        public int roleid;
        public byte level;
        public byte occupation;
        public byte froleid;
        public short loginday;
        public byte online_status;
        public Octets name = new Octets();
        public Octets nickname = new Octets();
        public int contrib;
        public byte delayexpel;
        public int expeltime;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(roleid);
            os.marshal(level);
            os.marshal(occupation);
            os.marshal(froleid);
            os.marshal(loginday);
            os.marshal(online_status);
            os.marshal(name);
            os.marshal(nickname);
            os.marshal(contrib);
            os.marshal(delayexpel);
            os.marshal(expeltime);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            roleid = os.unmarshal_int();
            level = os.unmarshal_byte();
            occupation = os.unmarshal_byte();
            froleid = os.unmarshal_byte();
            loginday = os.unmarshal_short();
            os.unmarshal(name);
            os.unmarshal(nickname);
            contrib = os.unmarshal_int();
            delayexpel = os.unmarshal_byte();
            expeltime = os.unmarshal_int();
            return os;
        }
    }
}
