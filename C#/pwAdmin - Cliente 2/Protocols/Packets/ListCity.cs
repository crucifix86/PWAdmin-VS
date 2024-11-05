using GNET;

namespace Protocols.Packets
{
    public class ListCity : Rpc.Data
    {
        public int level;
        public int owner;
        public int occupy_time;
        public int challenger;
        public int deposit;
        public int cutoff_time;
        public int battle_time;
        public int bonus_time;
        public int color;
        public int status;
        public int timeout;
        public int maxbonus;

        public ListCity() { }

        public ListCity(int level, int owner, int occupy_time, int challenger, int deposit, int cutoff_time, int battle_time, int bonus_time, int color, int status, int timeout, int maxbonus)
        {
            this.level = level;
            this.owner = owner;
            this.occupy_time = occupy_time;
            this.challenger = challenger;
            this.deposit = deposit;
            this.cutoff_time = cutoff_time;
            this.battle_time = battle_time;
            this.bonus_time = bonus_time;
            this.color = color;
            this.status = status;
            this.timeout = timeout;
            this.maxbonus = maxbonus;
        }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(level);
            os.marshal(owner);
            os.marshal(occupy_time);
            os.marshal(challenger);
            os.marshal(deposit);
            os.marshal(cutoff_time);
            os.marshal(battle_time);
            os.marshal(bonus_time);
            os.marshal(color);
            os.marshal(status);
            os.marshal(timeout);
            os.marshal(maxbonus);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            level = os.unmarshal_int();
            owner = os.unmarshal_int();
            occupy_time = os.unmarshal_int();
            challenger = os.unmarshal_int();
            deposit = os.unmarshal_int();
            cutoff_time = os.unmarshal_int();
            battle_time = os.unmarshal_int();
            bonus_time = os.unmarshal_int();
            color = os.unmarshal_int();
            status = os.unmarshal_int();
            timeout = os.unmarshal_int();
            maxbonus = os.unmarshal_int();
            return os;
        }
    }
}
