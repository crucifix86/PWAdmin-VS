using pwAdmin.Forms.Pesquisa;
using System;
using System.Drawing;
using System.Windows.Forms;
using TradeGrid;
using static Protocols.Structs.item_editor;
using static pwAdmin.AddonsList;

namespace pwAdmin.Forms.ItemEditor
{
    public partial class WeaponOctetsEditor : System.Windows.Forms.Form
    {
        // public EditarPersonagem personagem; // TODO: Missing EditarPersonagem class
        public weapon_essence weapon = new weapon_essence();
        public WeaponOctetsEditor()
        {
            InitializeComponent();
        }

        public void Unmarshal(string valor)
        {
            Outro.OctetsStream os = new Outro.OctetsStream(Extensions.StringToByteArray(valor), Outro.RemoveHeaderType.None, false);
            weapon.unmarshal(os);
            LoadInfos();
        }

        public void LoadInfos()
        {
            tbLevel.Value = weapon.prerequisition.level;
            tbRace.Value = weapon.prerequisition.race;
            tbCon.Value = weapon.prerequisition.vitality;
            tbFor.Value = weapon.prerequisition.strength;
            tbDurab.Value = weapon.prerequisition.durability;
            tbDurabMax.Value = weapon.prerequisition.max_durability;
            tbTipo.Value = weapon.weapon_type;
            tbAtraso.Value = weapon.weapon_delay;
            tbInt.Value = weapon.prerequisition.energy;
            tbAgi.Value = weapon.prerequisition.agility;
            tbClasse.Value = weapon.weapon_class;
            tbLevelInfo.Value = weapon.weapon_level;
            tbProjet.Value = weapon.require_projectile;
            tbAtqF.Value = weapon.damage_low;
            tbAtqFMax.Value = weapon.damage_high;
            tbAtqM.Value = weapon.magic_damage_low;
            tbAtqMMax.Value = weapon.magic_damage_high;
            tbVelAtq.Value = weapon.attack_speed;
            tbTagType.Value = weapon.made_tag.tag_type;
            tbTagContent.Text = weapon.made_tag.tag_content;
            tbAtqRange.Value = Convert.ToDecimal(weapon.attack_range);
            tbAtqRangeShort.Value = Convert.ToDecimal(weapon.attack_short_range);

            for (int i = 0; i < weapon.slot_count; ++i)
            {
                dgvSlots.Rows.Add(weapon.slots[i].ToString(), Extensions.GetItemName(weapon.slots[i]));
            }

            for (int i = 0; i < weapon.addon_count; ++i)
            {
                addon add = weapon.addons[i];
                string str;
                Main.addons.AddonsList.TryGetValue(add.id, out str);
                dgvAddons.Rows.Add(add.id, str, add.param1, add.param2, add.iNumParam);
            }
            UpdateNameList();
            UpdateSlotInfo();
        }

        public void UpdateNameList()
        {
            foreach (DataGridViewRow row in dgvAddons.Rows)
            {
                int id = Convert.ToInt32(row.Cells[0].Value);
                EQUIPMENT_ADDON addon = new EQUIPMENT_ADDON();
                addon.ID = id;
                addon.param1 = Convert.ToInt32(row.Cells[2].Value);
                addon.param2 = Convert.ToInt32(row.Cells[3].Value);
                addon.num_params = Convert.ToInt32(row.Cells[4].Value);
                string str;
                Main.addons.AddonsList.TryGetValue(id, out str);
                row.Cells[1].Value = UpdateNames(str, addon);
            }
        }

        public void UpdateSlotList()
        {
            try
            {
                if (dgvSlots.Rows.Count >= 0)
                {
                    weapon.slot_count = (short)dgvSlots.Rows.Count;
                    for (int i = 0; i < dgvSlots.Rows.Count; i++)
                    {
                        weapon.slots[i] = Convert.ToInt32(dgvSlots.Rows[i].Cells[0].Value);
                    }
                }
            }
            catch { };
        }

        public void UpdateAddonList()
        {
            dgvAddons.Rows.Clear();
            foreach (addon add in weapon.addons)
            {
                dgvAddons.Rows.Add(add.id, add.name, add.param1, add.param2, add.iNumParam);
            }
            weapon.addon_count = weapon.addons.Count;
            UpdateNameList();
        }

        public void UpdateSlotInfo()
        {
            foreach (DataGridViewRow row in dgvSlots.Rows)
            {
                Image img = Extensions.GetItemImage(Convert.ToInt32(row.Cells[0].Value));
                ((TextAndImageCell)row.Cells[1]).Image = Extensions.ResizeImage(img, 22, 22);
                int valor = Convert.ToInt32(row.Cells[0].Value);
                ((TextAndImageCell)row.Cells[1]).Value = Extensions.GetItemName(valor != 0 ? valor : 0);
            }
        }

        private void groupControl10_CustomButtonClick(object sender, DevExpress.XtraBars.Docking2010.BaseButtonEventArgs e)
        {
            switch (e.Button.Properties.GroupIndex)
            {
                case 0:
                    {
                        if (dgvSlots.Rows.Count >= 0 & dgvSlots.Rows.Count < 4)
                            dgvSlots.Rows.Add(0, "");
                        UpdateSlotList();
                        UpdateSlotInfo();
                    }
                    break;
                case 1:
                    {
                        if (dgvSlots.Rows.Count > 0 || dgvSlots.SelectedRows.Count > 0)
                        {
                            try
                            {
                                foreach (DataGridViewRow row in dgvSlots.SelectedRows)
                                {
                                    dgvSlots.Rows.RemoveAt(row.Index);
                                }
                                UpdateSlotList();
                                UpdateSlotInfo();
                            }
                            catch (Exception b) { Console.WriteLine(b.Message); }
                        }
                    }
                    break;
                case 2:
                    if (dgvSlots.SelectedRows.Count <= 0) break;
                    SelectItem find = new SelectItem(this);
                    find.ShowDialog();
                    Item item = find.returnItem;
                    foreach (DataGridViewRow row in dgvSlots.SelectedRows)
                    {
                        row.Cells[0].Value = item.id;
                    }
                    UpdateSlotList();
                    UpdateSlotInfo();
                    break;
            }
        }

        private void dgvSlots_CellEndEdit(object sender, DataGridViewCellEventArgs e)
        {
            if (dgvSlots.Rows[e.RowIndex].Cells[0].Value != null || Convert.ToInt32(dgvSlots.Rows[e.RowIndex].Cells[0].Value) > 0)
                UpdateSlotInfo();
        }

        private void listview2_CustomButtonClick(object sender, DevExpress.XtraBars.Docking2010.BaseButtonEventArgs e)
        {
            switch (e.Button.Properties.GroupIndex)
            {
                case 0:
                    {
                        if (dgvAddons.Rows.Count >= 0 & dgvAddons.Rows.Count < 32)
                            dgvAddons.Rows.Add(0, "");
                    }
                    break;
                case 1:
                    {
                        if (dgvAddons.Rows.Count > 0 || dgvAddons.SelectedRows.Count > 0)
                        {
                            try
                            {
                                foreach (DataGridViewRow row in dgvAddons.SelectedRows)
                                {
                                    weapon.addons.RemoveAt(row.Index);
                                }
                                UpdateAddonList();
                            }
                            catch (Exception b) { Console.WriteLine(b.Message); }
                        }
                    }
                    break;
                case 2:
                    AddonsList lista = new AddonsList(this);
                    lista.ShowDialog();
                    UpdateAddonList();
                    break;
            }
        }

        private void dgvAddons_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            addon add = weapon.addons[dgvAddons.SelectedRows[0].Index];
            bParam1.Checked = add.iNumParam == 1 ? true : false || add.iNumParam == 3 ? true : false;
            bParam2.Checked = add.iNumParam == 2 ? true : false || add.iNumParam == 3 ? true : false;
            bEmbed.Checked = (add.tid & 0x8000) > 0 ? true : false;
            bSuite.Checked = (add.tid & 0x10000) > 0 ? true : false;
            bGravura.Checked = (add.tid & 0x20000) > 0 ? true : false;
        }

        public string UpdateNames(string item, EQUIPMENT_ADDON addon)
        {
            for (int i = 0; i < dgvAddons.Rows.Count; i++)
            {
                if (item.Contains("weapon_speed") || item.Contains("attack_speed"))
                    return String.Format("Intervalo de Ataque -{0:f2} segundos", 0.05 * addon.param1);
                if (item.Contains("cast_time"))
                    return String.Format("Tempo de Invocação +{0:f0}%", addon.param1);
                if (item.Contains("item_skill"))
                {
                    foreach (var add in Main.addonsList)
                    {
                        if (addon.ID != add.ID) continue;
                        return String.Format("{0}", add);
                    }

                }
                if (item.Contains("enhance_weapon_damage"))
                    return String.Format("Ataque Físico +{0:f0}", addon.param1);
                if (item.Contains("enhance_weapon_max_damage"))
                    return String.Format("Ataque Máximo +{0:f0}", addon.param1);
                if (item.Contains("enhance_weapon_magic"))
                    return String.Format("Ataque Mágico +{0:f0}", addon.param1);
                if (item.Contains("enhance_weapon_max_magic"))
                    return String.Format("Ataque Mágico Máximo +{0:f0}", addon.param1);
                if (item.Contains("enhance_damage"))
                    if (!item.Contains("reduce"))
                    {
                        return String.Format("Ataque +{0}", addon.param1);
                        if (item.Contains("scale"))
                            return String.Format("Ataque +{0}%", Addons.IntToFloat(addon.param1) * 100);
                    }
                if (item.Contains("refine_magic_damage"))
                {
                    return String.Format("Ataque Físico/Mágico +{0}", addon.param1);
                    if (item.Contains("scale"))
                        return String.Format("Ataque Físico/Mágico +{0}%", Addons.IntToFloat(addon.param1) * 100);
                }
                if (item.Contains("armor_essence") && item.Contains("enhance_defense"))
                    if (item.Contains("defense"))
                    {
                        return String.Format("Defesa Física +{0}", addon.param1);
                        if (item.Contains("scale"))
                            return String.Format("Defesa Física +{0}%", Addons.IntToFloat(addon.param1) * 100);
                    }
                if (item.Contains("enhance_all_resistance"))
                {
                    return String.Format("Defesa Mágica +{0}", addon.param1);
                    if (item.Contains("scale"))
                        return String.Format("Defesa Mágica +{0}%", Addons.IntToFloat(addon.param1) * 100);
                }
                if (item.Contains("enhance_resistance"))
                    if (item.Contains("0"))
                    {
                        return String.Format("Defesa de Metal +{0}", addon.param1);
                        if (item.Contains("scale"))
                            return String.Format("Defesa de Metal +{0}%", Addons.IntToFloat(addon.param1) * 100);
                    }
                if (item.Contains("enhance_resistance"))
                    if (item.Contains("1"))
                    {
                        return String.Format("Defesa de Madeira +{0}", addon.param1);
                        if (item.Contains("scale"))
                            return String.Format("Defesa de Madeira +{0}%", Addons.IntToFloat(addon.param1) * 100);
                    }
                if (item.Contains("enhance_resistance"))
                    if (item.Contains("2"))
                    {
                        return String.Format("Defesa de Água +{0}", addon.param1);
                        if (item.Contains("scale"))
                            return String.Format("Defesa de Água +{0}%", Addons.IntToFloat(addon.param1) * 100);
                    }
                if (item.Contains("enhance_resistance"))
                    if (item.Contains("3"))
                    {
                        return String.Format("Defesa de Fogo +{0}", addon.param1);
                        if (item.Contains("scale"))
                            return String.Format("Defesa de Fogo +{0}%", Addons.IntToFloat(addon.param1) * 100);
                    }
                if (item.Contains("enhance_resistance"))
                    if (item.Contains("4"))
                    {
                        return String.Format("Defesa de Terra +{0}", addon.param1);
                        if (item.Contains("scale"))
                            return String.Format("Defesa de Terra +{0}%", Addons.IntToFloat(addon.param1) * 100);
                    }
                if (item.Contains("refine_defense_resistance"))
                    return String.Format("Defesa Física e Mágica +{0}", addon.param1);
                if (item.Contains("item_decoration_specific_damage_addon"))
                    return String.Format("Ataque e Defesa Física +{0}", addon.param1);
                if (item.Contains("item_decoration_specific_damage_addon"))
                    return String.Format("Ataque e Defesa Física +{0}", addon.param1);
                if (item.Contains("item_decoration_specific_damage_addon"))
                    return String.Format("Ataque e Defesa Física +{0}", addon.param1);
                if (item.Contains("enhance_hp_"))
                        if (item.Contains("scale"))
                            return String.Format("HP Máximo +{0}%", addon.param1);
                        else
                            return String.Format("HP +{0}", addon.param1);

                if (item.Contains("enhance_hpgen_addon"))
                    return String.Format("Recuperação de HP +{0}", addon.param1);
                if (item.Contains("enhance_mp_"))
                    if (item.Contains("scale"))
                        return String.Format("MP Máximo +{0}%", addon.param1);
                    else
                        return String.Format("MP +{0}", addon.param1);
                if (item.Contains("enhance_mpgen_addon"))
                    return String.Format("Recuperação de MP +{0}", addon.param1);
                if (item.Contains("enhance_speed_addon"))
                    return String.Format("Movimento +{0:f2}%", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("point"))
                    return String.Format("Movimento +{0:f2} m/s", Addons.IntToFloat(addon.param1));
                if (item.Contains("enhance_armor"))
                {
                    return String.Format("Esquiva +{0}", addon.param1);
                    if (item.Contains("scale"))
                        return String.Format("Esquiva +{0}%", Addons.IntToFloat(addon.param1) * 100);
                }
                if (item.Contains("enhance_attack"))
                    if (!item.Contains("speed"))
                    {
                        return String.Format("Acerto +{0}%", addon.param1);
                        if (item.Contains("scale"))
                            return String.Format("Acerto +{0}", Addons.IntToFloat(addon.param1) * 100);
                    }
                if (item.Contains("enhance_crit_rate"))
                    return String.Format("Crítico +{0}%", addon.param1);
                if (item.Contains("enhance_durability"))
                    return String.Format("Durabilidade +{0}%", Addons.IntToFloat(addon.param1));
                if (item.Contains("reduce_require_addon"))
                    return String.Format("Requisitos de Atributo +{0}%", Addons.IntToFloat(addon.param1));
                if (item.Contains("enhance_damage_reduce"))
                    return String.Format("Redução de Dano Físico +{0}%", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("enhance_all_magic_damage_reduce"))
                    return String.Format("Redução de Dano Mágico +{0}%", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("item_addon_random"))
                    return String.Format("Propriedade desconhecida (avalie para identificar)");
                if (item.Contains("enhance_exp_addon"))
                    return String.Format("Experiência +{0}%", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("attack_range"))
                    return String.Format("Alcance +{0:f2}", Addons.IntToFloat(addon.param1));
                if (item.Contains("IDMRA(0,3)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,2)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,4)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,3)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,3)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,3)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,3)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,3)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,3)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("IDMRA(0,3)"))
                    return String.Format("Defesa de Metal/Fogo +{0}", addon.param1);
                if (item.Contains("enhance_str_addon"))
                    return String.Format("Força +{0}", addon.param1);
                if (item.Contains("enhance_vit_addon"))
                    return String.Format("Constituição +{0}", addon.param1);
                if (item.Contains("enhance_eng_addon"))
                    return String.Format("Inteligência +{0}", addon.param1);
                if (item.Contains("enhance_agi_addon"))
                    return String.Format("Agilidade +{0}", addon.param1);
                if (item.Contains("query_other_property_addon"))
                    return String.Format("Olho da Selva: Nada foge deste olho +{0}", addon.param1);
                if (item.Contains("enhance_soulpower_addon"))
                    return String.Format("Força da Alma +{0}", addon.param1);
                if (item.Contains("enhance_magic_damage_reduce3_addon"))
                    return String.Format("Redução do Dano de Fogo +{0}", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("enhance_magic_damage_reduce0_addon"))
                    return String.Format("Redução do Dano de Metal +{0}", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("enhance_magic_damage_reduce1_addon"))
                    return String.Format("Redução do Dano de Madeira +{0}", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("enhance_magic_damage_reduce2_addon"))
                    return String.Format("Redução do Dano de Água +{0}", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("enhance_magic_damage_reduce4_addon"))
                    return String.Format("Redução do Dano de Terra +{0}", Addons.IntToFloat(addon.param1) * 100);
                if (item.Contains("enhance_penetration"))
                    return String.Format("Nível de Matança +{0}", addon.param1);
                if (item.Contains("enhance_resilience"))
                    return String.Format("Nível de Guardião +{0}", addon.param1);
                if (item.Contains("enhance_vigour"))
                    return String.Format("Espírito +{0}", addon.param1);
                if (item.Contains("enhance_mount_speed"))
                    return String.Format("Velocidade de Montaria +{0:f2}m/s", Addons.IntToFloat(addon.param1) * 100);

            }
            return "";

        }

        private void simpleButton3_Click(object sender, EventArgs e)
        {
            weapon.prerequisition.level = Convert.ToInt16(tbLevel.Value);
            weapon.prerequisition.race = Convert.ToInt16(tbRace.Value);
            weapon.prerequisition.strength = Convert.ToInt16(tbFor.Value);
            weapon.prerequisition.vitality = Convert.ToInt16(tbCon.Value);
            weapon.prerequisition.agility = Convert.ToInt16(tbAgi.Value);
            weapon.prerequisition.energy = Convert.ToInt16(tbInt.Value);
            weapon.prerequisition.durability = Convert.ToInt32(tbDurab.Value);
            weapon.prerequisition.max_durability = Convert.ToInt32(tbDurabMax.Value);
            weapon.made_tag.tag_type = Convert.ToByte(tbTagType.Value);
            weapon.made_tag.tag_size = Convert.ToByte(tbTagContent.Text.Length);
            weapon.made_tag.tag_content = tbTagContent.Text;
            weapon.weapon_type = Convert.ToInt16(tbTipo.Value);          //武器类别 对应模板里的进程远程标志
            weapon.weapon_delay = Convert.ToInt16(tbAtraso.Value);     //武器的攻击延迟时间，以50ms为单位
            weapon.weapon_class = Convert.ToInt32(tbClasse.Value);           //武器子类 对应模板里的大类 比如刀剑 长兵等
            weapon.weapon_level = Convert.ToInt32(tbLevelInfo.Value);       //武器级别 某些操作需要武器级别
            weapon.require_projectile = Convert.ToInt32(tbProjet.Value);     //需要弹药的类型
            weapon.damage_low = Convert.ToInt32(tbAtqF.Value); //物理攻击最小加值
            weapon.damage_high = Convert.ToInt32(tbAtqFMax.Value);//物理攻击最大加值
            weapon.magic_damage_low = Convert.ToInt32(tbAtqM.Value);       //魔法攻击
            weapon.magic_damage_high = Convert.ToInt32(tbAtqMMax.Value);      //魔法攻击
            weapon.attack_speed = Convert.ToInt32(tbVelAtq.Value);
            weapon.attack_range = Convert.ToSingle(tbAtqRange.Value);
            weapon.attack_short_range = Convert.ToSingle(tbAtqRangeShort.Value);
            weapon.slot_flag = Convert.ToInt16(tbTagType.Value);
            weapon.slot_count = Convert.ToInt16(dgvSlots.Rows.Count);
            for (int i = 0; i < dgvSlots.Rows.Count; i++)
            {
                weapon.slots[i] = Convert.ToInt32(dgvSlots.Rows[i].Cells[0].Value);
            }
            weapon.addon_count = dgvAddons.Rows.Count;
            foreach (addon add in weapon.addons)
            {
                add.tid = add.id + 0x1fff + 1;
                add.tid += add.iNumParam == 2 ? 0x4000 : 0;
                add.tid += add.bEmbed ? 0x8000 : 0;
                add.tid += add.bSuite ? 0x10000 : 0;
                add.tid += add.bEngraved ? 0x20000 : 0;
            }
            Outro.OctetsStream os = new Outro.OctetsStream();
            os.BigEdian = false;
            weapon.marshal(os);
            Octets o = new Octets(os.Data);
            Console.WriteLine(Extensions.OctetsToHex(o));
        }

        private void dgvAddons_CellEndEdit(object sender, DataGridViewCellEventArgs e)
        {
            int id = Convert.ToInt32(dgvAddons.Rows[e.RowIndex].Cells[0].Value);
            int param1 = Convert.ToInt32(dgvAddons.Rows[e.RowIndex].Cells[2].Value);
            int param2 = Convert.ToInt32(dgvAddons.Rows[e.RowIndex].Cells[3].Value);
            int numparams = Convert.ToInt32(dgvAddons.Rows[e.RowIndex].Cells[4].Value);

            weapon.addons[e.RowIndex].id = id;
            weapon.addons[e.RowIndex].param1 = param1;
            weapon.addons[e.RowIndex].param2 = param2;
            weapon.addons[e.RowIndex].iNumParam = numparams;

            UpdateNameList();
        }
    }
}