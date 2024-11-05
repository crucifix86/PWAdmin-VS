using System;
using System.Collections.Generic;
using System.Text;
using GNET;
using pwAdmin;
using static GNET.Rpc.Data;

namespace Protocols.Structs
{
    public class item_editor
    {
        public enum EquipMask
        {
            MASK_WEAPON = 0x0001,
            MASK_HEAD = 0x0002,
            MASK_NECK = 0x0004,
            MASK_SHOULDER = 0x0008,
            MASK_BODY = 0x0010,
            MASK_WAIST = 0x0020,
            MASK_LEG = 0x0040,
            MASK_FOOT = 0x0080,
            MASK_WRIST = 0x0100,
            MASK_FINGER1 = 0x0200,
            MASK_FINGER2 = 0x0400,
            MASK_PROJECTILE = 0x0800,
            MASK_FLYSWORD = 0x1000,
            MASK_DAMAGERUNE = 0x20000,
            MASK_BIBLE = 0x40000,
            MASK_SPEAKER = 0x80000,
            MASK_AUTO_HP = 0x100000,
            MASK_AUTO_MP = 0x200000,
            MASK_ELF = 0x800000,
            MASK_STALLCARD = 0x1000000,
            MASK_FORCE_TICKET = 0x4000000,
            MASK_DYNSKILL_ALL = 0x18000000,
            MASK_HAS_ADDON = 0x40000000
        }
        public enum EquipPosition

        {
            INDEX_WEAPON = 0,
            INDEX_HEAD = 1,
            INDEX_NECK = 2,
            INDEX_SHOULDER = 3,
            INDEX_BODY = 4,
            INDEX_WAIST = 5,
            INDEX_LEG = 6,
            INDEX_FOOT = 7,
            INDEX_WRIST = 8,
            INDEX_FINGER1 = 9,
            INDEX_FINGER2 = 10,
            INDEX_PROJECTILE = 11,
            INDEX_FLYSWORD = 12,
        };

        public class addon : Rpc.Data      //属性条目
        {
            public int tid;      // id + tipo de addon (0x2000, 0x4000, 0x6000 ...)
            public int param1;
            public int param2;

            public int id;
            public string name;
            public int iNumParam;
            public bool bEmbed;
            public bool bSuite;
            public bool bEngraved;

            public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
            {
                os.WriteInt32(tid);
                if (iNumParam >= 1)
                    os.WriteInt32(param1);
                if (iNumParam >= 2)
                    os.WriteInt32(param2);
                return os;
            }

            public override OctetsStream marshal(OctetsStream os)
            {
                os.marshal(tid);
                if (iNumParam >= 1)
                    os.marshal(param1);
                if (iNumParam >= 2)
                    os.marshal(param2);
                return os;
            }

            public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
            {
                tid = os.ReadInt32();
                id = tid & 0x1fff;
                iNumParam = (tid & 0x6000) >> 13;
                bEmbed = (tid & 0x8000) > 0 ? true : false;
                bSuite = (tid & 0x10000) > 0 ? true : false;
                bEngraved = (tid & 0x20000) > 0 ? true : false;

                if (iNumParam >= 1)
                    param1 = os.ReadInt32();
                if (iNumParam >= 2)
                    param2 = os.ReadInt32();
                return os;
            }

            public override OctetsStream unmarshal(OctetsStream os)
            {
                tid = os.unmarshal_int();
                id = tid & 0x1fff;
                iNumParam = (tid & 0x6000) >> 13;
                bEmbed = (tid & 0x8000) > 0 ? true : false;
                bSuite = (tid & 0x10000) > 0 ? true : false;
                bEngraved = (tid & 0x20000) > 0 ? true : false;

                if (iNumParam >= 1)
                    param1 = os.unmarshal_int();
                if (iNumParam >= 2)
                    param2 = os.unmarshal_int();
                return os;
            }
        }
        public struct prerequisition
        {
            public short level;
            public short race;
            public short strength;
            public short vitality;
            public short agility;
            public short energy;
            public int durability;
            public int max_durability;

            public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
            {
                os.WriteInt16(level);
                os.WriteInt16(race);
                os.WriteInt16(strength);
                os.WriteInt16(vitality);
                os.WriteInt16(agility);
                os.WriteInt16(energy);
                os.WriteInt32(durability);
                os.WriteInt32(max_durability);
                return os;
            }
            public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
            {
                level = os.ReadInt16();
                race = os.ReadInt16();
                strength = os.ReadInt16();
                vitality = os.ReadInt16();
                agility = os.ReadInt16();
                energy = os.ReadInt16();
                durability = os.ReadInt32();
                max_durability = os.ReadInt32();
                return os;
            }

            public OctetsStream unmarshal(OctetsStream os)
            {
                level = os.unmarshal_short();
                race = os.unmarshal_short();
                strength = os.unmarshal_short();
                vitality = os.unmarshal_short();
                agility = os.unmarshal_short();
                energy = os.unmarshal_short();
                durability = os.unmarshal_int();
                max_durability = os.unmarshal_int();
                return os;
            }
        }

        public struct made_tag_t
        {
            public byte tag_type;
            public byte tag_size;
            public string tag_content; // 40 max

            public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
            {
                os.WriteCUint(0);
                os.WriteByte(tag_type);
                byte[] bytes = Encoding.Unicode.GetBytes(tag_content);
                os.WriteByte(Convert.ToByte(bytes.Length));
                os.WriteBytes(bytes);
                return os;
            }

            public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
            {
                os.ReadCUInt();
                tag_type = os.ReadByte();
                tag_content = os.Read1BytesString();
                return os;
            }

            public OctetsStream unmarshal(OctetsStream os)
            {
                os.uncompact_uint32();
                tag_type = os.unmarshal_byte();
                tag_content = os.unmarshal_String();
                return os;
            }
        };

        public class weapon_essence
        {
            public enum WeaponType
            {
                WEAPON_TYPE_MELEE = 0,
                WEAPON_TYPE_RANGE = 1,
                WEAPON_TYPE_MELEE_ASN = 2,  //刺客使用的近程武器，除敏捷影响物攻外，其他与近程相同
            };

            public prerequisition prerequisition = new prerequisition();
            public int tipo;
            public made_tag_t made_tag = new made_tag_t();
            public short weapon_type;          //武器类别 对应模板里的进程远程标志
            public short weapon_delay;     //武器的攻击延迟时间，以50ms为单位
            public int weapon_class;           //武器子类 对应模板里的大类 比如刀剑 长兵等
            public int weapon_level;       //武器级别 某些操作需要武器级别
            public int require_projectile;     //需要弹药的类型
            public int damage_low; //物理攻击最小加值
            public int damage_high;//物理攻击最大加值
            public int magic_damage_low;       //魔法攻击
            public int magic_damage_high;      //魔法攻击
            public int attack_speed;
            public float attack_range;
            public float attack_short_range;
            public short slot_count;
            public short slot_flag;
            public int[] slots = new int[3];
            public int addon_count;
            public List<addon> addons = new List<addon>();
            public DataVector addons2 = new DataVector(new addon());

            public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
            {
                prerequisition.marshal(os);
                os.WriteByte(0x2c);
                made_tag.marshal(os);
                os.WriteInt16(weapon_type);
                os.WriteInt16(weapon_delay);
                os.WriteInt32(weapon_class);
                os.WriteInt32(weapon_level);
                os.WriteInt32(require_projectile);
                os.WriteInt32(damage_low);
                os.WriteInt32(damage_high);
                os.WriteInt32(magic_damage_low);
                os.WriteInt32(magic_damage_high);
                os.WriteInt32(attack_speed);
                os.WriteFloat(attack_range);
                os.WriteFloat(attack_short_range);
                os.WriteInt16(slot_count);
                os.WriteInt16(slot_flag);
                for (int i = 0; i < slot_count; ++i)
                    os.WriteInt32(slots[i]);
                os.WriteInt32(addon_count);
                for (int i = 0; i < addon_count; ++i)
                    addons[i].marshal(os);
                return os;
            }

            public OctetsStream marshal(OctetsStream os)
            {
                return os;
            }

            public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
            {
                prerequisition.unmarshal(os);
                tipo = os.ReadByte(); // 2c = arma
                made_tag.unmarshal(os);
                weapon_type = os.ReadInt16();
                weapon_delay = os.ReadInt16();
                weapon_class = os.ReadInt32();
                weapon_level = os.ReadInt32();
                require_projectile = os.ReadInt32();
                damage_low = os.ReadInt32();
                damage_high = os.ReadInt32();
                magic_damage_low = os.ReadInt32();
                magic_damage_high = os.ReadInt32();
                attack_speed = os.ReadInt32();
                attack_range = os.ReadFloat();
                attack_short_range = os.ReadFloat();
                slot_count = os.ReadInt16();
                slot_flag = os.ReadInt16();
                for (int i = 0; i < slot_count; ++i)
                    slots[i] = os.ReadInt32();
                addon_count = os.ReadInt32();
                for (int i = 0; i < addon_count; ++i)
                {
                    addon add = new addon();
                    add.unmarshal(os);
                    addons.Add(add);
                }
                return os;
            }

            public OctetsStream unmarshal(OctetsStream os)
            {
                prerequisition.unmarshal(os);
                tipo = os.unmarshal_byte();
                made_tag.unmarshal(os);
                weapon_type = os.unmarshal_short();
                weapon_delay = os.unmarshal_short();
                weapon_class = os.unmarshal_int();
                weapon_level = os.unmarshal_int();
                require_projectile = os.unmarshal_int();
                damage_low = os.unmarshal_int();
                damage_high = os.unmarshal_int();
                magic_damage_low = os.unmarshal_int();
                magic_damage_high = os.unmarshal_int();
                attack_speed = os.unmarshal_int();
                attack_range = os.unmarshal_float();
                attack_short_range = os.unmarshal_float();
                slot_count = os.unmarshal_short();
                slot_flag = os.unmarshal_short();
                for (int i = 0; i < slot_count; ++i)
                    slots[i] = os.unmarshal_int();
                addons2.unmarshal(os);
                return os;
            }
        };
    }
}
