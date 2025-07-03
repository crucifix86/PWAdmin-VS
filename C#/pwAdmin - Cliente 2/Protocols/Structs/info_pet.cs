using System.Collections.Generic;

using GNET;
namespace Protocols.Structs
{

    public enum PetType
    {
        PET_CLASS_MOUNT,        //Montaria
        PET_CLASS_COMBAT,       //Combate
        PET_CLASS_FOLLOW,       //Mascote
        PET_CLASS_SUMMON,       //Invocação
        PET_CLASS_PLANT,        //Planta
        PET_CLASS_EVOLUTION,    //Evolução
        PET_CLASS_MAX,
    };

    public enum PetHonor
    {
        HONOR_LEVEL_0,          //Indomável	0-50
        HONOR_LEVEL_1,          //Cansado	51-150
        HONOR_LEVEL_2,          //Obediente	151-500
        HONOR_LEVEL_3,          //Leal	501-999
        HONOR_LEVEL_COUNT,

        HONOR_POINT_MAX = 999
    };

    public class skill
    {
        public int id;
        public int level;

        public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
        {
            id = os.ReadInt32();
            level = os.ReadInt32();
            return os;
        }

        public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
        {
            os.WriteInt32(id);
            os.WriteInt32(level);
            return os;
        }
    }
    public class evo_prop
    {
        public int r_attack;
        public int r_defense;
        public int r_hp;
        public int r_atk_lvl;
        public int r_def_lvl;
        public int nature;

        public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
        {
            r_attack = os.ReadInt32();
            r_defense = os.ReadInt32();
            r_hp = os.ReadInt32();
            r_atk_lvl = os.ReadInt32();
            r_def_lvl = os.ReadInt32();
            nature = os.ReadInt32();
            return os;
        }

        public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
        {
            os.WriteInt32(r_attack);
            os.WriteInt32(r_defense);
            os.WriteInt32(r_hp);
            os.WriteInt32(r_atk_lvl);
            os.WriteInt32(r_def_lvl);
            os.WriteInt32(nature);
            return os;
        }

    }

    public class info_pet
    {
        public int honor_point;
        public int hunger;
        public int feed_time;
        public int pet_tid;
        public int pet_vis_tid;
        public int pet_egg_tid;
        public int pet_class;
        public float hp_factor;
        public short level;
        public short color;
        public int exp;
        public int skill_point;
        public byte is_bind;
        public byte unused;
        public string name;
        public List<skill> skills = new List<skill>();
        public evo_prop evo_prop = new evo_prop(); // novo - pet evoluido
        public uint reserved_size; // nao utiliza

        public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
        {
            honor_point = os.ReadInt32();
            hunger = os.ReadInt32();
            feed_time = os.ReadInt32();
            pet_tid = os.ReadInt32();
            pet_vis_tid = os.ReadInt32();
            pet_egg_tid = os.ReadInt32();
            pet_class = os.ReadInt32();
            hp_factor = os.ReadFloat();
            level = os.ReadInt16();
            color = os.ReadInt16();
            exp = os.ReadInt32();
            skill_point = os.ReadInt32();
            is_bind = os.ReadByte();
            unused = os.ReadByte();
            name = os.Read2BytesString();
            for (int i = 0; i < 8; i++)
            {
                skill sk = new skill();
                sk.unmarshal(os);
                skills.Add(sk);
            }
            evo_prop.unmarshal(os);

            return os;
        }

        public List<info_pet> unmarshal_list(pwAdmin.Outro.OctetsStream os, int qtde)
        {
            List<info_pet> pet = new List<info_pet>();
            for (int i = 0; i < qtde; ++i)
            {
                honor_point = os.ReadInt32();
                hunger = os.ReadInt32();
                feed_time = os.ReadInt32();
                pet_tid = os.ReadInt32();
                pet_vis_tid = os.ReadInt32();
                pet_egg_tid = os.ReadInt32();
                pet_class = os.ReadInt32();
                hp_factor = os.ReadFloat();
                level = os.ReadInt16();
                color = os.ReadInt16();
                exp = os.ReadInt32();
                skill_point = os.ReadInt32();
                is_bind = os.ReadByte();
                unused = os.ReadByte();
                name = os.Read2BytesString();
                for (int j = 0; j < 8; j++)
                {
                    skill sk = new skill();
                    sk.unmarshal(os);
                    skills.Add(sk);
                }
                evo_prop.unmarshal(os);
                pet.Add(this);
            }
            return pet;
        }

        public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
        {
            os.WriteInt32(honor_point);
            os.WriteInt32(hunger);
            os.WriteInt32(feed_time);
            os.WriteInt32(pet_tid);
            os.WriteInt32(pet_vis_tid);
            os.WriteInt32(pet_egg_tid);
            os.WriteInt32(pet_class);
            os.WriteFloat(hp_factor);
            os.WriteInt16(level);
            os.WriteInt16(color);
            os.WriteInt32(skill_point);
            os.WriteByte(is_bind);
            os.WriteByte(unused);
            os.WriteString2(name);
            for (int i = 0; i < 8; i++)
            {
                skill sk = new skill();
                sk.marshal(os);
            }
            evo_prop.marshal(os);
            return os;
        }
    }

}
