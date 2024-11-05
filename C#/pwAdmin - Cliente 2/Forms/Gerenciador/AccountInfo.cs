using DevExpress.XtraEditors;
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
    public partial class AccountInfo : DevExpress.XtraEditors.XtraForm
    {
        public Conta conta;
        public AccountInfo(Conta conta)
        {
            this.conta = conta;
            InitializeComponent();
            LoadAccount();
        }

        public void LoadAccount()
        {
            System.Security.Cryptography.MD5 hs = System.Security.Cryptography.MD5.Create();
            byte[] db = hs.ComputeHash(System.Text.Encoding.UTF8.GetBytes("alien5013501350"));
            string result = Convert.ToBase64String(db);

            Console.WriteLine(result);
            tbID.Text = conta.Id.ToString();
            tbName.Text = conta.Nome;
            tbUser.Text = conta.Usuario;
        }
    }
}