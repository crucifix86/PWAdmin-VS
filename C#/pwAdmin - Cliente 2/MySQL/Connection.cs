using MySqlConnector;
using pwAdmin.Properties;
using System;
using System.Windows.Forms;

namespace pwAdmin.MySQL
{
    public class Connection
    {
        string LinkAPI;
        String SenhaAPI;
        String Ip;
        String Porta;
        String Database;
        String Usuario;
        String Senha;

        public Connection()
        {
            carregaConfiguracao();
        }

        public void carregaConfiguracao()
        {
            Ip = Properties.Settings.Default.ip;
            Porta = Properties.Settings.Default.porta.ToString();
            Database = Properties.Settings.Default.db;
            Usuario = Properties.Settings.Default.login;
            Senha = Properties.Settings.Default.senha;
        }

        public void TestaConexão()
        {
            string str = "";
            carregaConfiguracao();
            MySqlConnection conn = getConnection();
            if (conn != null)
            {
                str += "Conexão com o banco de dados (MySQL) realizada com sucesso!" + Environment.NewLine;
                conn.Close();
            }
            else
                str += "Erro de conexão com o banco de dados (MySQL). Favor, verificar se os campos de configurações MySQL acima estão corretos." + Environment.NewLine;

            if (!Main.isDebug())
            {
                var os = Comandos.UpdateInfosFromServer();
                if (os == null)
                    str += "Erro de comunicação com o servidor. Favor, verificar se os campos de configurações do servidor acima estão corretos." + Environment.NewLine;
                else
                    str += "Conexão com o servidor realizada com sucesso!" + Environment.NewLine;
            }
            MessageBox.Show(str, "Comunicação com o servidor", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        public MySqlConnection getConnection()
        {
            carregaConfiguracao();
            MySqlConnection conn = new MySqlConnection("server=" + Ip + ";database=" + Database + ";port=" + Porta + ";uid=" + Usuario + ";pwd=" + Senha);
            try
            {
                conn.Open();
                return conn;
            }
            catch (System.Exception e)
            {
                Console.WriteLine(e.Message);
                return null;
            }
        }
    }
}
