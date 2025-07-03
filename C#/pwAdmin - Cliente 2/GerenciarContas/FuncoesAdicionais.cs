using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using pwAdmin.MySQL;
using MySqlConnector;
using System.Windows.Forms;

namespace pwAdmin.GerenciarContas
{
    public class FuncoesAdicionais
    {
        private MySqlConnection conn;
        public void EnviarGOLD(int valor, Conta conta)
        {
            int OURO = valor / 100;
            int PRATA = valor % 100;
            string msg = "";
            Connection con = new Connection();
            conn = con.getConnection();
            string enviarGold = "call usecash (" + conta.Id + ", 1, 0, 1, 0, " + valor + ", 1, @error)";
            MySqlCommand mc = new MySqlCommand(enviarGold, conn);
            string teste = "@error";
            mc.Parameters.AddWithValue("@error", teste);
            mc.Prepare();
            if (OURO != 0 && PRATA == 0)
                msg = OURO.ToString() + " de OURO";
            else if (OURO != 0 && PRATA != 0)
                msg = OURO.ToString() + " de OURO e " + PRATA.ToString() + " de PRATA";
            else if (OURO == 0 && PRATA != 0)
                msg = PRATA.ToString() + " de PRATA";
            DialogResult dr = MessageBox.Show(string.Format("Enviar {0} para a conta {1} ?", msg, conta.Usuario), "Enviar GOLD", MessageBoxButtons.YesNo);
            if (dr == DialogResult.Yes)
            {
                mc.ExecuteNonQuery();               
                conn.Close();
            }
            else conn.Close();
        }
    }
}
