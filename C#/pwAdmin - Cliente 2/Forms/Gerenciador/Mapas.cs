using Protocols.Packets;
using System;
using System.Drawing;
using System.Windows.Forms;

namespace pwAdmin.Forms.Gerenciador
{
    public partial class Mapas : DevExpress.XtraEditors.XtraForm
    {
        public Mapas()
        {
            InitializeComponent();
            LoadMaps();
        }

        void LoadMaps()
        {
            foreach(ListMap map in Main.info.maps)
            {
                if (map.pid != 0) continue;
                var item = listMaps.Items.Add(map.name);
                item.UseItemStyleForSubItems = false;
                item.ForeColor = Color.Yellow;
                item.SubItems.Add(map.tag).ForeColor = Color.Magenta;
            }
        }

        private void simpleButton2_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void simpleButton1_Click(object sender, EventArgs e)
        {
            foreach(ListViewItem item in listMaps.SelectedItems)
            {
                string nome = item.SubItems[1].Text;
                ListMap map = new ListMap();
                map.tag = nome;
                Comandos.StartMap(map);
            }
            this.Close();
        }
    }
}