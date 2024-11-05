using Protocols.Structs;
using pwAdmin.Forms.ItemEditor;
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace pwAdmin
{
    public partial class AddonsList : DevExpress.XtraEditors.XtraForm
    {
        public WeaponOctetsEditor editor;
        public class EQUIPMENT_ADDON
        {
            public int ID;
            public string Name;
            public int num_params;
            public int param1;
            public int param2;
            public int param3;

            public override string ToString()
            {
                string valor = "";
                foreach (var id in Main.descricao)
                {
                    if (id.Key == param1)
                        valor = id.Value;
                }
                return valor;
            }
        }

        public static List<EQUIPMENT_ADDON> LoadAddons(Main f)
        {
            List<EQUIPMENT_ADDON> lista = new List<EQUIPMENT_ADDON>();
            for (int e = 0; e < Main.eLC.Lists[0].elementValues.Length; e++)
            {
                EQUIPMENT_ADDON addon = new EQUIPMENT_ADDON();
                addon.ID = Convert.ToInt32(Main.eLC.GetValue(0, e, 0));
                addon.Name = Main.eLC.GetValue(0, e, 1);
                addon.num_params = Convert.ToInt32(Main.eLC.GetValue(0, e, 2));
                addon.param1 = Convert.ToInt32(Main.eLC.GetValue(0, e, 3));
                addon.param2 = Convert.ToInt32(Main.eLC.GetValue(0, e, 4));
                addon.param3 = Convert.ToInt32(Main.eLC.GetValue(0, e, 5));
                lista.Add(addon);
            }
            return lista;
        }

        public AddonsList(WeaponOctetsEditor form)
        {
            editor = form;
            InitializeComponent();
            CarregaListaAtributos();
        }

        enum Tipo
        {
            INTERVALO_DE_ATAQUE_SEGUNDO,
            TEMPO_DE_INVOCACAO,
            HABILIDADES,
            ATAQUE_FISICO,
            ATAQUE_MAXIMO,
            ATAQUE_MAGICO,
            ATAQUE_MAGICO_MAXIMO,
            ATAQUE,
            ATAQUE_FISICO_MAGICO,
            DEFESA_FISICA,
            DEFESA_MAGICA,
            DEFESA_DE_METAL,
            DEFESA_DE_MADEIRA,
            DEFESA_DE_AGUA,
            DEFESA_DE_FOGO,
            DEFESA_DE_TERRA,
            DEFESA_FISICA_MAGICA,
            ATAQUE_E_DEFESA_FISICA,
            NIVEL_DE_ATAQUE,
            NIVEL_DE_DEFESA,
            HP,
            HP_MAXIMO,
            RECUPERACAO_DE_HP,
            MP,
            MP_MAXIMO,
            RECUPERACAO_DE_MP,
            MOVIMENTO,
            ESQUIVA,
            ACERTO,
            CRITICO,
            DURABILIDADE,
            REQUISITOS_DE_ATRIBUTO,
            REDUCAO_DE_DANO_FISICO,
            REDUCAO_DE_DANO_MAGICO,
            PROPRIEDADE_NAO_IDENTIFICADA,
            EXPERIENCIA,
            ALCANCE,
            DEFESA_DE_METAL_FOGO,
            DEFESA_DE_METAL_AGUA,
            DEFESA_DE_METAL_TERRA,
            DEFESA_DE_METAL_MADEIRA,
            DEFESA_DE_FOGO_AGUA,
            DEFESA_DE_FOGO_TERRA,
            DEFESA_DE_FOGO_MADEIRA,
            DEFESA_DE_AGUA_TERRA,
            DEFESA_DE_AGUA_MADEIRA,
            DEFESA_DE_TERRA_MADEIRA,
            FORCA,
            CONSTITUICAO,
            INTELIGENCIA,
            AGILIDADE,
            OLHO_DA_SELVA,
            FORCA_DA_ALMA,
            REDUCAO_DE_DANO_DE_FOGO,
            REDUCAO_DE_DANO_DE_METAL,
            REDUCAO_DE_DANO_DE_MADEIRA,
            REDUCAO_DE_DANO_DE_AGUA,
            REDUCAO_DE_DANO_DE_TERRA,
            NIVEL_DE_MATANCA,
            NIVEL_DE_GUARDIAO,
            ESPIRITO,
            TYPE_114,
            TYPE_115,
            PENETRACAO_FISICA,
            PENETRACAO_MAGICA,
        }

        void CarregaListaAtributos()
        {
            listView1.Items.Add("Intervalo de Ataque/segundo");
            listView1.Items.Add("Tempo de Invocação %");
            listView1.Items.Add("Habilidades");
            listView1.Items.Add("Ataque Físico");
            listView1.Items.Add("Ataque Máximo");
            listView1.Items.Add("Ataque Mágico");
            listView1.Items.Add("Ataque Mágico Máximo");
            listView1.Items.Add("Ataque (%)");
            listView1.Items.Add("Ataque Físico + Mágico");
            listView1.Items.Add("Defesa Física");
            listView1.Items.Add("Defesa Mágica");
            listView1.Items.Add("Defesa de Metal");
            listView1.Items.Add("Defesa de Madeira");
            listView1.Items.Add("Defesa de Água");
            listView1.Items.Add("Defesa de Fogo");
            listView1.Items.Add("Defesa de Terra");
            listView1.Items.Add("Defesa Física + Mágica");
            listView1.Items.Add("Ataque e Defesa Física");
            listView1.Items.Add("Nível de Ataque");
            listView1.Items.Add("Nível de Defesa");
            listView1.Items.Add("HP");
            listView1.Items.Add("HP Máximo");
            listView1.Items.Add("Recuperação de HP");
            listView1.Items.Add("MP");
            listView1.Items.Add("MP Máximo");
            listView1.Items.Add("Recuperação de MP");
            listView1.Items.Add("Movimento");
            listView1.Items.Add("Esquiva");
            listView1.Items.Add("Acerto");
            listView1.Items.Add("Crítico");
            listView1.Items.Add("Durabilidade");
            listView1.Items.Add("Requisitos de Atributo");
            listView1.Items.Add("Redução de Dano Físico");
            listView1.Items.Add("Redução de Dano Mágico");
            listView1.Items.Add("Propriedade Não Identificada");
            listView1.Items.Add("Experiência");
            listView1.Items.Add("Alcance");
            listView1.Items.Add("Defesa de Metal + Fogo");
            listView1.Items.Add("Defesa de Metal + Água");
            listView1.Items.Add("Defesa de Metal + Terra");
            listView1.Items.Add("Defesa de Metal + Madeira");
            listView1.Items.Add("Defesa de Fogo + Água");
            listView1.Items.Add("Defesa de Fogo + Terra");
            listView1.Items.Add("Defesa de Fogo + Madeira");
            listView1.Items.Add("Defesa de Água + Terra");
            listView1.Items.Add("Defesa de Água + Madeira");
            listView1.Items.Add("Defesa de Terra + Madeira");
            listView1.Items.Add("Força");
            listView1.Items.Add("Constituição");
            listView1.Items.Add("Inteligência");
            listView1.Items.Add("Agilidade");
            listView1.Items.Add("Olho da Selva");
            listView1.Items.Add("Força da Alma");
            listView1.Items.Add("Redução de Dano de Fogo");
            listView1.Items.Add("Redução de Dano de Metal");
            listView1.Items.Add("Redução de Dano de Madeira");
            listView1.Items.Add("Redução de Dano de Água");
            listView1.Items.Add("Redução de Dano de Terra");
            listView1.Items.Add("Nível de Matança");
            listView1.Items.Add("Nível de Guardião");
            listView1.Items.Add("Espírito");
            listView1.Items.Add("Type_114");
            listView1.Items.Add("Type_115");
            listView1.Items.Add("Penetração Física");
            listView1.Items.Add("Penetração Mágica");
        }


        private void listView1_ItemSelectionChanged(object sender, ListViewItemSelectionChangedEventArgs e)
        {
            listView2.Items.Clear();
            foreach (var item in Main.addons.AddonsList)
            {
                switch ((Tipo)e.Item.Index)
                {
                    case Tipo.INTERVALO_DE_ATAQUE_SEGUNDO:
                        {
                            if (!item.Value.Contains("weapon_speed") && !item.Value.Contains("attack_speed")) continue;

                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                listView2.Items.Add(String.Format("[{0}] Intervalo de Ataque -{1:f2} segundos", item.Key, Addons.IntToFloat(addon.param1)));
                            }
                        }
                        break;
                    case Tipo.TEMPO_DE_INVOCACAO:
                        {

                            if (!item.Value.Contains("cast_time")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                listView2.Items.Add(String.Format("[{0}] Tempo de Invocação +{1:f0}%", item.Key, Addons.IntToFloat(addon.param1) * 100));
                            }
                        }
                        break;
                    case Tipo.HABILIDADES:
                        {
                            if (!item.Value.Contains("item_skill_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                listView2.Items.Add(String.Format("[{0}] {1}", item.Key, addon));
                            }
                        }
                        break;
                    case Tipo.ATAQUE_FISICO:
                        {
                            if (!item.Value.Contains("enhance_weapon_damage")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque Físico +{1:f0}", item.Key, addon.param1);
                                if (addon.param1 != addon.param2)
                                    str += "~" + addon.param2;
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ATAQUE_MAXIMO:
                        {
                            if (!item.Value.Contains("enhance_weapon_max_damage")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque Máximo +{1:f0}", item.Key, addon.param1);
                                if (addon.param1 != addon.param2)
                                    str += "~" + addon.param2;
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ATAQUE_MAGICO:
                        {
                            if (!item.Value.Contains("enhance_weapon_magic")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque Mágico +{1:f0}", item.Key, addon.param1);
                                if (addon.param1 != addon.param2)
                                    str += "~" + addon.param2;
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ATAQUE_MAGICO_MAXIMO:
                        {
                            if (!item.Value.Contains("enhance_weapon_max_magic")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque Mágico Máximo +{1:f0}", item.Key, addon.param1);
                                if (addon.param1 != addon.param2)
                                    str += "~" + addon.param2;
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ATAQUE:
                        {
                            if (!item.Value.Contains("enhance_damage")) continue;
                            if (item.Value.Contains("reduce")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Ataque +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ATAQUE_FISICO_MAGICO:
                        {
                            if (!item.Value.Contains("refine_magic_damage")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque Físico/Mágico +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Ataque Físico/Mágico +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_FISICA:
                        {
                            if (!item.Value.Contains("armor_essence") && !item.Value.Contains("enhance_defense")) continue;
                            if (!item.Value.Contains("defense")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa Física +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Defesa Física +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_MAGICA:
                        {
                            if (!item.Value.Contains("enhance_all_resistance")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa Mágica +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Defesa Mágica +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_METAL:
                        {
                            if (!item.Value.Contains("enhance_resistance")) continue;
                            if (!item.Value.Contains("0")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Defesa de Metal +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_MADEIRA:
                        {
                            if (!item.Value.Contains("enhance_resistance")) continue;
                            if (!item.Value.Contains("1")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Madeira +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Defesa de Madeira +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_AGUA:
                        {
                            if (!item.Value.Contains("enhance_resistance")) continue;
                            if (!item.Value.Contains("2")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Água +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Defesa de Água +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_FOGO:
                        {
                            if (!item.Value.Contains("enhance_resistance")) continue;
                            if (!item.Value.Contains("3")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Fogo +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Defesa de Fogo +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_TERRA:
                        {
                            if (!item.Value.Contains("enhance_resistance")) continue;
                            if (!item.Value.Contains("4")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Terra +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Defesa de Terra +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_FISICA_MAGICA:
                        {
                            if (!item.Value.Contains("refine_defense_resistance")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa Física e Mágica +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ATAQUE_E_DEFESA_FISICA:
                        {
                            if (!item.Value.Contains("item_decoration_specific_damage_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque e Defesa Física +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.NIVEL_DE_ATAQUE:
                        {
                            if (!item.Value.Contains("item_decoration_specific_damage_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque e Defesa Física +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.NIVEL_DE_DEFESA:
                        {
                            if (!item.Value.Contains("item_decoration_specific_damage_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Ataque e Defesa Física +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.HP:
                        {
                            if (!item.Value.Contains("armor_essence")) continue;
                            if (!item.Value.Contains("hp_enhance")) continue;
                            if (item.Value.Contains("SCALE")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] HP +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.HP_MAXIMO:
                        {
                            if (!item.Value.Contains("armor_essence")) continue;
                            if (!item.Value.Contains("hp_enhance")) continue;
                            if (!item.Value.Contains("SCALE")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] HP Máximo +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.RECUPERACAO_DE_HP:
                        {
                            if (!item.Value.Contains("enhance_hpgen_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Recuperação de HP +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.MP:
                        {
                            if (!item.Value.Contains("armor_essence")) continue;
                            if (!item.Value.Contains("mp_enhance")) continue;
                            if (item.Value.Contains("SCALE")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] MP +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.MP_MAXIMO:
                        {
                            if (!item.Value.Contains("armor_essence")) continue;
                            if (!item.Value.Contains("mp_enhance")) continue;
                            if (!item.Value.Contains("SCALE")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] MP Máximo +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.RECUPERACAO_DE_MP:
                        {
                            if (!item.Value.Contains("enhance_mpgen_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Recuperação de MP +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.MOVIMENTO:
                        {
                            if (!item.Value.Contains("enhance_speed_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Movimento +{1:f2}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                if (item.Value.Contains("point"))
                                    str = String.Format("[{0}] Movimento +{1:f2} m/s", item.Key, Addons.IntToFloat(addon.param1));
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ESQUIVA:
                        {
                            if (!item.Value.Contains("enhance_armor")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Esquiva +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Esquiva +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ACERTO:
                        {
                            if (!item.Value.Contains("enhance_attack")) continue;
                            if (item.Value.Contains("speed")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Acerto +{1}", item.Key, addon.param1);
                                if (item.Value.Contains("scale"))
                                    str = String.Format("[{0}] Acerto +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.CRITICO:
                        {
                            if (!item.Value.Contains("enhance_crit_rate")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Crítico +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DURABILIDADE:
                        {
                            if (!item.Value.Contains("enhance_durability")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Durabilidade +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.REQUISITOS_DE_ATRIBUTO:
                        {
                            if (!item.Value.Contains("reduce_require_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Requisitos de Atributo +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.REDUCAO_DE_DANO_FISICO:
                        {
                            if (!item.Value.Contains("enhance_damage_reduce")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Redução de Dano Físico +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.REDUCAO_DE_DANO_MAGICO:
                        {
                            if (!item.Value.Contains("enhance_all_magic_damage_reduce")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Redução de Dano Mágico +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.PROPRIEDADE_NAO_IDENTIFICADA:
                        {
                            if (!item.Value.Contains("item_addon_random")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Propriedade desconhecida (avalie para identificar)", item.Key);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.EXPERIENCIA:
                        {
                            if (!item.Value.Contains("enhance_exp_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Experiência +{1}%", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ALCANCE:
                        {
                            if (!item.Value.Contains("attack_range")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Alcance +{1:f2}", item.Key, Addons.IntToFloat(addon.param1));
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    /*case Tipo.DEFESA_DE_METAL_FOGO:
                        {
                            if (!item.Value.Contains("IDMRA(0,3)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_METAL_AGUA:
                        {
                            if (!item.Value.Contains("IDMRA(0,2)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_METAL_TERRA:
                        {
                            if (!item.Value.Contains("IDMRA(0,4)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_METAL_MADEIRA:
                        {
                            if (!item.Value.Contains("IDMRA(0,3)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_FOGO_AGUA:
                        {
                            if (!item.Value.Contains("IDMRA(0,3)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_FOGO_TERRA:
                        {
                            if (!item.Value.Contains("IDMRA(0,3)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_FOGO_MADEIRA:
                        {
                            if (!item.Value.Contains("IDMRA(0,3)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_AGUA_TERRA:
                        {
                            if (!item.Value.Contains("IDMRA(0,3)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_AGUA_MADEIRA:
                        {
                            if (!item.Value.Contains("IDMRA(0,3)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.DEFESA_DE_TERRA_MADEIRA:
                        {
                            if (!item.Value.Contains("IDMRA(0,3)")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Defesa de Metal/Fogo +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;*/
                    case Tipo.FORCA:
                        {
                            if (!item.Value.Contains("enhance_str_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Força +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.CONSTITUICAO:
                        {
                            if (!item.Value.Contains("enhance_vit_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Constituição +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.INTELIGENCIA:
                        {
                            if (!item.Value.Contains("enhance_eng_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Inteligência +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.AGILIDADE:
                        {
                            if (!item.Value.Contains("enhance_agi_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Agilidade +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.OLHO_DA_SELVA:
                        {
                            if (!item.Value.Contains("query_other_property_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Olho da Selva: Nada foge deste olho +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.FORCA_DA_ALMA:
                        {
                            if (!item.Value.Contains("enhance_soulpower_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Força da Alma +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.REDUCAO_DE_DANO_DE_FOGO:
                        {
                            if (!item.Value.Contains("enhance_magic_damage_reduce3_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Redução do Dano de Fogo +{1}", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.REDUCAO_DE_DANO_DE_METAL:
                        {
                            if (!item.Value.Contains("enhance_magic_damage_reduce0_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Redução do Dano de Metal +{1}", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.REDUCAO_DE_DANO_DE_MADEIRA:
                        {
                            if (!item.Value.Contains("enhance_magic_damage_reduce1_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Redução do Dano de Madeira +{1}", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.REDUCAO_DE_DANO_DE_AGUA:
                        {
                            if (!item.Value.Contains("enhance_magic_damage_reduce2_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Redução do Dano de Água +{1}", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.REDUCAO_DE_DANO_DE_TERRA:
                        {
                            if (!item.Value.Contains("enhance_magic_damage_reduce4_addon")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Redução do Dano de Terra +{1}", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.NIVEL_DE_MATANCA:
                        {
                            if (!item.Value.Contains("enhance_penetration")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Nível de Matança +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.NIVEL_DE_GUARDIAO:
                        {
                            if (!item.Value.Contains("enhance_resilience")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Nível de Guardião +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.ESPIRITO:
                        {
                            if (!item.Value.Contains("enhance_vigour")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Espírito +{1}", item.Key, addon.param1);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.TYPE_114:
                        {
                        }
                        break;
                    case Tipo.TYPE_115:
                        {
                            if (!item.Value.Contains("enhance_mount_speed")) continue;
                            foreach (var addon in Main.addonsList)
                            {
                                if (addon.ID != item.Key) continue;
                                string str = String.Format("[{0}] Velocidade de Montaria +{1:f2}m/s", item.Key, Addons.IntToFloat(addon.param1) * 100);
                                listView2.Items.Add(str);
                            }
                        }
                        break;
                    case Tipo.PENETRACAO_FISICA:
                        {
                        }
                        break;
                    case Tipo.PENETRACAO_MAGICA:
                        {
                        }
                        break;
                }
            }
        }

        private void simpleButton2_Click(object sender, EventArgs e)
        {
            if (listView2.SelectedItems.Count == 0)
                return;
            ListViewItem item = listView2.SelectedItems[0];
            Regex rgx = new Regex(@"\[(.*)\]");
            int id = Convert.ToInt32(rgx.Match(item.Text).Groups[1].Value);
            UpdateDgvAddons(id);
            this.Close();
        }

        void UpdateDgvAddons(int id)
        {
            item_editor.addon addon = new item_editor.addon();

            foreach (var equip_addon in Main.addonsList)
            {
                if (equip_addon.ID != id) continue;
                string str;
                var it = Main.addons.AddonsList.TryGetValue(id, out str);
                Console.WriteLine(str);
                //str = editor.UpdateNames(str, equip_addon);
                addon.id = equip_addon.ID;
                addon.name = str;
                addon.param1 = Addons.IntToInt(equip_addon.param1);
                addon.param2 = Addons.IntToInt(equip_addon.param2);
                addon.iNumParam = equip_addon.num_params;
            }
            editor.weapon.addons.Add(addon);
        }

        private void simpleButton3_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}