using System.Windows.Forms;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using TradeGrid;

namespace pwAdmin
{
    public partial class SkillByClass : System.Windows.Forms.Form
    {
        // HabilidadesPersonagem personagem; // TODO: Missing HabilidadesPersonagem class
        dynamic personagem; // Using dynamic until HabilidadesPersonagem class is available

        public SkillByClass()
        {
            AddItens();
        }
        // TODO: Fix when HabilidadesPersonagem is available
        public SkillByClass(dynamic personagem)
        {
            InitializeComponent();
            NullDocument();
            AddItens();
            this.personagem = personagem;
        }

        void AddItens()
        {
            for (int i = 0; i < (int)Utilidades.Classe.MAX_CLASSE; i++)
            {
                ListViewItem v = new ListViewItem();
                v.Text = Utilidades.ClassePersonagem(i);
                imageList1.Images.Add(Utilidades.IconeClasses((Utilidades.Classe)i));
                v.ImageIndex = i;
                listView1.Items.Add(v);
            }
            listView1.Items.Add((new ListViewItem()).Text = "Artesanato");
        }

        void LoadSkill(int race)
        {
            foreach (var info in Main.skills)
            {
                int cls = Main.skill_info.skillInfo[info.Key].cls;
                if (cls == race)
                {
                    int max_level = Main.skill_info.skillInfo[info.Key].max_level;
                    dgvSkillsByClass.Rows.Add(info.Key, info.Value, cls, max_level);
                }
            }
            LoadIcons();
        }

        void LoadIcons()
        {
            if (dgvSkillsByClass.Rows.Count == 0) return;
            foreach (DataGridViewRow row in dgvSkillsByClass.Rows)
            {
                Image img = Properties.Resources._0;
                int id = Convert.ToInt32(row.Cells[0].Value);
                int tipo;
                if (row.Cells[2].Tag != null)
                    tipo = Convert.ToInt32(row.Cells[2].Tag);
                else
                    tipo = Convert.ToInt32(row.Cells[2].Value);
                row.Cells[2].Tag = tipo;
                tipo = Convert.ToInt32(row.Cells[2].Tag);
                img = Main.GetImageSkill(Main.skill_info.skillInfo[id].icon);
                TextAndImageCell cell = (TextAndImageCell)row.Cells[1];
                cell.Image = Extensions.ResizeImage(img, 22, 22);
                img = Utilidades.IconeClasses((Utilidades.Classe)tipo);
                cell = (TextAndImageCell)row.Cells[2];
                cell.Image = Extensions.ResizeImage(img, 14, 14);
                cell.Value = Utilidades.ClassePersonagem(tipo);
            }
        }

        void LoadIcons12()
        {
            if (dgvSkillsByClass.Rows.Count == 0) return;
            foreach (DataGridViewRow row in dgvSkillsByClass.Rows)
            {
                Image img = Properties.Resources._0;
                int id = Convert.ToInt32(row.Cells[0].Value);
                img = Main.GetImageSkill(Main.skill_info.skillInfo[id].icon);
                TextAndImageCell cell = (TextAndImageCell)row.Cells[1];
                cell.Image = Extensions.ResizeImage(img, 22, 22);
            }
        }

        private void listView1_Click(object sender, EventArgs e)
        {
            dgvSkillsByClass.Rows.Clear();
            for (int i = 0; i < listView1.SelectedItems.Count; i++)
            {
                int index = listView1.SelectedItems[i].Index;
                if (index == 12)
                {
                    int[] ids = { 158, 159, 160, 161, 164, 165, 167, 1402, 1722 };
                    foreach (int valor in ids)
                    {
                        foreach (var info in Main.skills)
                            if (info.Key == valor)
                                dgvSkillsByClass.Rows.Add(valor, info.Value, "0", Main.skill_info.skillInfo[valor].max_level);

                        LoadIcons12();
                    }
                }
                else LoadSkill(index);
            }
        }

        private void dgvSkillsByClass_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex == -1 || dgvSkillsByClass.SelectedRows.Count > 1) return;
            int id = (int)dgvSkillsByClass.Rows[e.RowIndex].Cells[0].Value;
            //var desc = Main.ReturnSkillDesc(id).Replace("\r", "<br>");
            var desc = Main.descricao[id].Replace("\r", "<br>");

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

        private void simpleButton1_Click(object sender, EventArgs e)
        {
            foreach (DataGridViewRow row in dgvSkillsByClass.Rows)
            {
                if (!row.Selected) continue;
                personagem.dgvHabilidadesPersonagem.Rows.Add(row.Cells[0].Value, row.Cells[1].Value, 0, row.Cells[3].Value);
            }
            personagem.CarregaImagens();
            personagem.RecarregaTabela();
        }
    }
}