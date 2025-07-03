using GNET;
﻿namespace Protocols.Structs
{
    public class player_property
    {
        public int vitality;
        public int energy;
        public int strength;
        public int agility;
        public int max_hp;
        public int max_mp;
        public int hp_gen;
        public int mp_gen;
        public float walk_speed;
        public float run_speed;
        public float swim_speed;
        public float flight_speed;
        public int attack;
        public int damage_low;
        public int damage_high;
        public int attack_speed;
        public float attack_range;
        public int damage_low0;
        public int damage_high0;
        public int damage_low1;
        public int damage_high1;
        public int damage_low2;
        public int damage_high2;
        public int damage_low3;
        public int damage_high3;
        public int damage_low4;
        public int damage_high4;
        public int damage_magic_low;
        public int damage_magic_high;
        public int resistence0;
        public int resistence1;
        public int resistence2;
        public int resistence3;
        public int resistence4;
        public int defense;
        public int armor;
        public int max_ap;

        public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
        {
            this.vitality = os.ReadInt32();
            this.energy = os.ReadInt32();
            this.strength = os.ReadInt32();
            this.agility = os.ReadInt32();
            this.max_hp = os.ReadInt32();
            this.max_mp = os.ReadInt32();
            this.hp_gen = os.ReadInt32();
            this.mp_gen = os.ReadInt32();
            this.walk_speed = os.ReadFloat();
            this.run_speed = os.ReadFloat();
            this.swim_speed = os.ReadFloat();
            this.flight_speed = os.ReadFloat();
            this.attack = os.ReadInt32();
            this.damage_low = os.ReadInt32();
            this.damage_high = os.ReadInt32();
            this.attack_speed = os.ReadInt32();
            this.attack_range = os.ReadFloat();
            this.damage_low0 = os.ReadInt32();
            this.damage_high0 = os.ReadInt32();
            this.damage_low1 = os.ReadInt32();
            this.damage_high1 = os.ReadInt32();
            this.damage_low2 = os.ReadInt32();
            this.damage_high2 = os.ReadInt32();
            this.damage_low3 = os.ReadInt32();
            this.damage_high3 = os.ReadInt32();
            this.damage_low4 = os.ReadInt32();
            this.damage_high4 = os.ReadInt32();
            this.damage_magic_low = os.ReadInt32();
            this.damage_magic_high = os.ReadInt32();
            this.resistence0 = os.ReadInt32();
            this.resistence1 = os.ReadInt32();
            this.resistence2 = os.ReadInt32();
            this.resistence3 = os.ReadInt32();
            this.resistence4 = os.ReadInt32();
            this.defense = os.ReadInt32();
            this.armor = os.ReadInt32();
            this.max_ap = os.ReadInt32();
            return os;
        }

        public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
        {
            os.WriteInt32(this.vitality);
            os.WriteInt32(this.energy);
            os.WriteInt32(this.strength);
            os.WriteInt32(this.agility);
            os.WriteInt32(this.max_hp);
            os.WriteInt32(this.max_mp);
            os.WriteInt32(this.hp_gen);
            os.WriteInt32(this.mp_gen);
            os.WriteFloat(this.walk_speed);
            os.WriteFloat(this.run_speed);
            os.WriteFloat(this.swim_speed);
            os.WriteFloat(this.flight_speed);
            os.WriteInt32(this.attack);
            os.WriteInt32(this.damage_low);
            os.WriteInt32(this.damage_high);
            os.WriteInt32(this.attack_speed);
            os.WriteFloat(this.attack_range);
            os.WriteInt32(this.damage_low0);
            os.WriteInt32(this.damage_high0);
            os.WriteInt32(this.damage_low1);
            os.WriteInt32(this.damage_high1);
            os.WriteInt32(this.damage_low2);
            os.WriteInt32(this.damage_high2);
            os.WriteInt32(this.damage_low3);
            os.WriteInt32(this.damage_high3);
            os.WriteInt32(this.damage_low4);
            os.WriteInt32(this.damage_high4);
            os.WriteInt32(this.damage_magic_low);
            os.WriteInt32(this.damage_magic_high);
            os.WriteInt32(this.resistence0);
            os.WriteInt32(this.resistence1);
            os.WriteInt32(this.resistence2);
            os.WriteInt32(this.resistence3);
            os.WriteInt32(this.resistence4);
            os.WriteInt32(this.defense);
            os.WriteInt32(this.armor);
            os.WriteInt32(this.max_ap);
            return os;
        }
    }
}
