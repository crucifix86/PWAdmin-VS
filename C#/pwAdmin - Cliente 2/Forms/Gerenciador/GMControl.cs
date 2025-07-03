using System.Windows.Forms;
using pwAdmin.GerenciarContas;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace pwAdmin
{
    public partial class GMControl : System.Windows.Forms.Form
    {
        public int userid;
        public GMControl(int userid)
        {
            this.userid = userid;
            InitializeComponent();
            LoadList();
            UpdateList(userid);
        }

        public void LoadList()
        {
            checkedListBox1.Items.AddRange(Privileges.SetListPrivileges().ToArray());
        }

        private void simpleButton1_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < checkedListBox1.Items.Count; ++i)
                checkedListBox1.SetItemChecked(i, true);
        }

        private void simpleButton2_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < checkedListBox1.Items.Count; ++i)
                checkedListBox1.SetItemChecked(i, false);
        }

        public void UpdateList(int userid)
        {
            ContaDao dao = new ContaDao();
            List<int> userPrivileges = dao.retornaPrivilegios(userid);
            for (int i = 0; i < checkedListBox1.Items.Count; ++i)
            {
                var split = checkedListBox1.Items[i].ToString().Split(' ');
                int num = Convert.ToInt32(split[0]);
                if (!userPrivileges.Contains(num)) continue;
                checkedListBox1.SetItemChecked(i, true);
            }

        }

        private void simpleButton3_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void simpleButton4_Click(object sender, EventArgs e)
        {
            ContaDao dao = new ContaDao();
            dao.removePrivilegios(userid);
            if (checkedListBox1.CheckedItems.Count == 0) return;
            List<int> privilegios = new List<int>();
            foreach (var item in checkedListBox1.CheckedItems)
            {
                var split = item.ToString().Split(' ');
                int num = Convert.ToInt32(split[0]);
                privilegios.Add(num);
            }
            dao.adicionaPrivilegios(userid, privilegios);
        }
    }
}