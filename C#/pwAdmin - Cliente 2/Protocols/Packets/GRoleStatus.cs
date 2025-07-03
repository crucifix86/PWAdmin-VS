using GNET;

namespace Protocols.Packets
{
    public class GRoleStatus : Protocol
    {
        public byte version;

        public int level;

        public int level2;

        public int exp;

        public int sp;

        public int pp;

        public int hp;

        public int mp;

        public float posx;

        public float posy;

        public float posz;

        public int worldtag;

        public int invader_state;

        public int invader_time;

        public int pariah_time;

        public int reputation;

        public Octets custom_status = new Octets();

        public Octets filter_data = new Octets();

        public Octets charactermode = new Octets();

        public Octets instancekeylist = new Octets();

        public int dbltime_expire;

        public int dbltime_mode;

        public int dbltime_begin;

        public int dbltime_used;

        public int dbltime_max;

        public int time_used;

        public Octets dbltime_data = new Octets();

        public short storesize;

        public Octets petcorral = new Octets();

        public Octets property = new Octets();

        public Octets var_data = new Octets();

        public Octets skills = new Octets();

        public Octets storehousepasswd = new Octets();

        public Octets waypointlist = new Octets();

        public Octets coolingtime = new Octets();

        public Octets npc_relation = new Octets();

        public Octets multi_exp_ctrl = new Octets();

        public Octets storage_task = new Octets();

        public Octets faction_contrib = new Octets();

        public Octets force_data = new Octets();

        public Octets online_award = new Octets();

        public Octets profit_time_data = new Octets();

        public Octets country_data = new Octets();

        public Octets king_data = new Octets();

        public Octets meridian_data = new Octets();

        public Octets extraprop = new Octets();

        public Octets title_data = new Octets();

        public Octets reincarnation_data = new Octets();

        public Octets realm_data = new Octets();

        public byte reserved2;

        public byte reserved3;

        public GRoleStatus() { }


        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(this.version);
            os.marshal(this.level);
            os.marshal(this.level2);
            os.marshal(this.exp);
            os.marshal(this.sp);
            os.marshal(this.pp);
            os.marshal(this.hp);
            os.marshal(this.mp);            
            os.marshal(this.posx);
            os.marshal(this.posy);
            os.marshal(this.posz);
            os.marshal(this.worldtag);
            os.marshal(this.invader_state);
            os.marshal(this.invader_time);
            os.marshal(this.pariah_time);
            os.marshal(this.reputation);
            os.marshal(this.custom_status);
            os.marshal(this.filter_data);
            os.marshal(this.charactermode);
            os.marshal(this.instancekeylist);
            os.marshal(this.dbltime_expire);
            os.marshal(this.dbltime_mode);
            os.marshal(this.dbltime_begin);
            os.marshal(this.dbltime_used);
            os.marshal(this.dbltime_max);
            os.marshal(this.time_used);
            os.marshal(this.dbltime_data);
            os.marshal(this.storesize);
            os.marshal(this.petcorral);
            os.marshal(this.property);
            os.marshal(this.var_data);
            os.marshal(this.skills);
            os.marshal(this.storehousepasswd);
            os.marshal(this.waypointlist);
            os.marshal(this.coolingtime);
            os.marshal(this.npc_relation);
            os.marshal(this.multi_exp_ctrl);
            os.marshal(this.storage_task);
            os.marshal(this.faction_contrib);
            os.marshal(this.force_data);
            os.marshal(this.online_award);
            os.marshal(this.profit_time_data);
            os.marshal(this.country_data);
            os.marshal(this.king_data);
            os.marshal(this.meridian_data);
            os.marshal(this.extraprop);
            os.marshal(this.title_data);
            os.marshal(this.reincarnation_data);
            os.marshal(this.realm_data);
            os.marshal(this.reserved2);
            os.marshal(this.reserved3);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            this.version = os.unmarshal_byte();
            this.level = os.unmarshal_int();
            this.level2 = os.unmarshal_int();
            this.exp = os.unmarshal_int();
            this.sp = os.unmarshal_int();
            this.pp = os.unmarshal_int();
            this.hp = os.unmarshal_int();
            this.mp = os.unmarshal_int();
            this.posx = os.unmarshal_float();
            this.posy = os.unmarshal_float();
            this.posz = os.unmarshal_float();
            this.worldtag = os.unmarshal_int();
            this.invader_state = os.unmarshal_int();
            this.invader_time = os.unmarshal_int();
            this.pariah_time = os.unmarshal_int();
            this.reputation = os.unmarshal_int();
            os.unmarshal(this.custom_status);
            os.unmarshal(this.filter_data);
            os.unmarshal(this.charactermode);
            os.unmarshal(this.instancekeylist);
            this.dbltime_expire = os.unmarshal_int();
            this.dbltime_mode = os.unmarshal_int();
            this.dbltime_begin = os.unmarshal_int();
            this.dbltime_used = os.unmarshal_int();
            this.dbltime_max = os.unmarshal_int();
            this.time_used = os.unmarshal_int();
            os.unmarshal(this.dbltime_data);
            this.storesize = os.unmarshal_short();
            os.unmarshal(this.petcorral);
            os.unmarshal(this.property);
            os.unmarshal(this.var_data);
            os.unmarshal(this.skills);
            os.unmarshal(this.storehousepasswd);
            os.unmarshal(this.waypointlist);
            os.unmarshal(this.coolingtime);
            os.unmarshal(this.npc_relation);
            os.unmarshal(this.multi_exp_ctrl);
            os.unmarshal(this.storage_task);
            os.unmarshal(this.faction_contrib);
            os.unmarshal(this.force_data);
            os.unmarshal(this.online_award);
            os.unmarshal(this.profit_time_data);
            os.unmarshal(this.country_data);
            os.unmarshal(this.king_data);
            os.unmarshal(this.meridian_data);
            os.unmarshal(this.extraprop);
            os.unmarshal(this.title_data);
            os.unmarshal(this.reincarnation_data);
            os.unmarshal(this.realm_data);
            this.reserved2 = os.unmarshal_byte();
            this.reserved3 = os.unmarshal_byte();
            return os;
        }
    }
}
