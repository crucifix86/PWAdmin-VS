using System.Windows.Forms;
using pwAdmin.Forms.ItemEditor;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using TradeGrid;

namespace pwAdmin.Forms.Pesquisa
{
    public struct Item
    {
        public int id;
        public string nome;
        public Image img;
    }


    public partial class SelectItem : System.Windows.Forms.Form
    {
        List<Item> item = new List<Item>();
        WeaponOctetsEditor weaponOctetsEditor;
        public Item returnItem;
        public SelectItem()
        {
            InitializeComponent();
            NullDocument();
            PetCorralOctets(null);
        }

        public SelectItem(object obj)
        {
            InitializeComponent();
            NullDocument();
            if (obj.GetType() == typeof(WeaponOctetsEditor))
            {
                WeaponOctets(obj);
            }
        }

        void UpdateIconList()
        {
            int index = dgvItens.Columns["Nome"].Index;
            foreach (DataGridViewRow row in dgvItens.Rows)
            {
                
                Image img = Extensions.GetItemImage(Convert.ToInt32(row.Cells[0].Value));
                ((TextAndImageCell)row.Cells[index]).Image = Extensions.ResizeImage(img, 22, 22);
                Item it = item[row.Index];
                it.img = img;
            }
        }

        void WeaponOctets(object obj)
        {
            weaponOctetsEditor = (WeaponOctetsEditor)obj;
            int l = -1;
            for (int i = 0; i < Main.eLC.Lists.Length; i++)
            {
                if (Main.eLC.Lists[i].listName.Contains("STONE_ESSENCE"))
                {
                    l = i;
                    comboBoxEdit1.Items.Add(Main.eLC.Lists[i].listName);
                    comboBoxEdit1.SelectedIndex = 0;
                    break;
                }
            }
            for (int e = 0; e < Main.eLC.Lists[l].elementValues.Length; e++)
            {
                Item it = new Item();
                it.id = Convert.ToInt32(Main.eLC.Lists[l].elementValues[e][0]);
                it.nome = Extensions.ByteArray_to_UnicodeString((byte[])Main.eLC.Lists[l].elementValues[e][2]);
                it.img = null;
                item.Add(it);
            }
            UpdateDataGrid(item);
            UpdateIconList();
        }

        void PetCorralOctets(object obj)
        {
            //weaponOctetsEditor = (WeaponOctetsEditor)obj;
            int l = -1;
            for (int i = 0; i < Main.eLC.Lists.Length; i++)
            {
                if (Main.eLC.Lists[i].listName.Contains("PET_ESSENCE"))
                {
                    l = i;
                    comboBoxEdit1.Items.Add(Main.eLC.Lists[i].listName);
                    comboBoxEdit1.SelectedIndex = 0;
                    break;
                }
            }
            for (int e = 0; e < Main.eLC.Lists[l].elementValues.Length; e++)
            {
                Item it = new Item();
                it.id = Convert.ToInt32(Main.eLC.Lists[l].elementValues[e][0]);
                it.nome = Extensions.ByteArray_to_UnicodeString((byte[])Main.eLC.Lists[l].elementValues[e][2]);
                it.img = null;
                item.Add(it);
            }
            UpdateDataGrid(item);
            //UpdateIconList();
        }

        void UpdateDataGrid(List<Item> lista)
        {
            dgvItens.Rows.Clear();
            foreach (Item it in lista)
            {
                dgvItens.Rows.Add(it.id, it.nome);
            }
            UpdateIconList();
        }

        private void dgvItens_CellMouseEnter(object sender, DataGridViewCellEventArgs e)
        {
            
        }

        void Pesquisar()
        {
            int numero;
            List<Item> selecionados = (from x in item
                                       where int.TryParse(textEdit1.Text, out numero) ? x.id == numero : x.nome.Contains(textEdit1.Text)
                                       select x).ToList();
            UpdateDataGrid(selecionados);
        }

        private void simpleButton1_Click(object sender, EventArgs e)
        {
            Pesquisar();
        }

        private void textEdit1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == (char)Keys.Enter)
                Pesquisar();            
        }

        private void simpleButton2_Click(object sender, EventArgs e)
        {
            returnItem = item[dgvItens.CurrentCell.RowIndex];
            this.Close();
        }

        void NullDocument()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("<html>");
            sb.Append("<style>");
            sb.Append("body {margin: 0; padding: 3px; color:#ffffff; background-color:#101010; font-size:11px; font-family: verdana;	line-height:1.15em;}");
            sb.Append("p, ul {margin:0; padding:0px;}");
            sb.Append("ul {margin-left:20px; padding:1px;list-style-type: disc;}");
            sb.Append("</style>");
            sb.Append("<body>");
            sb.Append("</body></html>");
            webBrowser1.DocumentText = sb.ToString();
        }

        private void dgvItens_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex == -1 || dgvItens.SelectedRows.Count > 1) return;
            int id = (int)dgvItens.Rows[e.RowIndex].Cells[0].Value;
            var desc = Main.listItemDesc[id].ToString().Replace(@"\r", "<br>");

            StringBuilder sb = new StringBuilder();
            sb.Append("<html>");
            sb.Append("<style>");
            sb.Append("body {margin: 0; padding: 3px; color:#ffffff; background-color:#101010; font-size:11px; font-family: verdana;	line-height:1.15em;}");
            sb.Append("p, ul {margin:0; padding:0px;}");
            sb.Append("ul {margin-left:20px; padding:1px;list-style-type: disc;}");
            sb.Append("</style>");
            sb.Append("<body>");
            sb.Append("<font color='#ffffff'>");

            string[] blocks = desc.Split(new char[] { '^' });
            if (blocks.Length > 1)
            {
                for (int i = 1; i < blocks.Length; i++)
                {
                    if (blocks[i] != "")
                    {
                        var cor = blocks[i].Substring(0, 6);
                        sb.Append(blocks[i].Remove(0, 6).Insert(0, "<font color ='#" + cor + "'>").ToString());
                        sb.Append("</font>");
                    }
                }
            }
            sb.Append("</font>");
            sb.Append("</body></html>");
            webBrowser1.DocumentText = sb.ToString();
        }
    }
}