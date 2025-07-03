using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using GNET;

namespace Protocols.Structs
{
    public class Pet
    {
        public int position;
        public info_pet pet;

        /*public List<info_pet> unmarshal(pwAdmin.Outro.OctetsStream os, int qtde)
        {
            List<info_pet> tmp = new List<info_pet>();
            for (int i = 0; i < qtde; ++i)
            {
                pet.honor_point = os.ReadInt32();
                pet.hunger = os.ReadInt32();
                pet.feed_time = os.ReadInt32();
                pet.pet_tid = os.ReadInt32();
                pet.pet_vis_tid = os.ReadInt32();
                pet.pet_egg_tid = os.ReadInt32();
                pet.pet_class = os.ReadInt32();
                pet.hp_factor = os.ReadFloat();
                pet.level = os.ReadInt16();
                pet.color = os.ReadInt16();
                pet.exp = os.ReadInt32();
                pet.skill_point = os.ReadInt32();
                pet.is_bind = os.ReadByte();
                pet.unused = os.ReadByte();
                pet.name = os.Read2BytesString();
                for (int j = 0; j < 8; j++)
                {
                    skill sk = new skill();
                    sk.unmarshal(os);
                    pet.skills.Add(sk);
                }
                pet.evo_prop.unmarshal(os);
                tmp.Add(pet);
            }
            return tmp;
        }*/
    }
}
