using GNET;
using static GNET.Rpc.Data;

namespace Protocols.Packets
{
    public class GRoleBase : Protocol
    {
        public byte version;
        public int id;
        public Octets name = new Octets();
        public int race;
        public int cls;
        public byte gender;
        public Octets custom_data = new Octets();
        public Octets config_data = new Octets();
        public int custom_stamp;
        public byte status;
        public int delete_time;
        public int create_time;
        public int lastlogin_time;
        public DataVector forbid = new DataVector(new GRoleForbid());
        public Octets help_states = new Octets();
        public int spouse;
        public int userid;
        public Octets cross_data = new Octets();
        public byte reserved2;
        public byte reserved3;
        public byte reserved4;

        public GRoleBase() { }


        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.version);
            os.marshal(this.id);
            os.marshal(this.name);
            os.marshal(this.race);
            os.marshal(this.cls);
            os.marshal(this.gender);
            os.marshal(this.custom_data);
            os.marshal(this.config_data);
            os.marshal(this.custom_stamp);
            os.marshal(this.status);
            os.marshal(this.delete_time);
            os.marshal(this.create_time);
            os.marshal(this.lastlogin_time);
            forbid.marshal(os);
            os.marshal(this.help_states);
            os.marshal(this.spouse);
            os.marshal(this.userid);
            os.marshal(this.cross_data);
            os.marshal(this.reserved2);
            os.marshal(this.reserved3);
            os.marshal(this.reserved4);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.version = os.unmarshal_byte();
            this.id = os.unmarshal_int();
            os.unmarshal(this.name);
            this.race = os.unmarshal_int();
            this.cls = os.unmarshal_int();
            this.gender = os.unmarshal_byte();
            os.unmarshal(this.custom_data);
            os.unmarshal(this.config_data);
            this.custom_stamp = os.unmarshal_int();
            this.status = os.unmarshal_byte();
            this.delete_time = os.unmarshal_int();
            this.create_time = os.unmarshal_int();
            this.lastlogin_time = os.unmarshal_int();
            forbid.unmarshal(os);
            os.unmarshal(this.help_states);
            this.spouse = os.unmarshal_int();
            this.userid = os.unmarshal_int();
            os.unmarshal(this.cross_data);
            this.reserved2 = os.unmarshal_byte();
            this.reserved3 = os.unmarshal_byte();
            this.reserved4 = os.unmarshal_byte();
            return os;
        }

    }    
}