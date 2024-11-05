using System;
using System.Collections.Generic;
using System.Data;
using MySqlConnector;
using Protocols.Packets;
using pwAdmin.MySQL;
using pwAdmin.Debug;
using pwAdmin.Properties;

namespace pwAdmin.GerenciarContas
{
    public class ContaDao
    {
        private Conta conta;
        private List<Conta> listaContas;
        private DataTable dt;
        private MySqlDataAdapter adapter;
        private MySqlConnection conn;
        private MySqlCommand comando;

        public DataTable pesquisaContas(string pesquisa)
        {
            dt = new DataTable();
            String listarClientes = "SELECT id as ID, name as Usuario, passwd as Senha, email as Email, truename as Nome FROM users WHERE id='" + pesquisa + "' or name='" + pesquisa + "' or email='" + pesquisa + "' or truename='" + pesquisa + "';";
            Connection con = new Connection();
            conn = con.getConnection();
            adapter = new MySqlDataAdapter(listarClientes, conn);
            adapter.Fill(dt);
            conn.Close();
            return dt;
        }

        public int accountNumTotal()
        {
            String sql = "SELECT COUNT(*) FROM users";
            Connection con = new Connection();
            conn = con.getConnection();
            comando = new MySqlCommand(sql, conn);
            return Convert.ToInt32(comando.ExecuteScalar());
        }

        public int playerNumOnline()
        {
            String sql = "SELECT COUNT(*) FROM point WHERE zoneid > 0";
            Connection con = new Connection();
            conn = con.getConnection();
            comando = new MySqlCommand(sql, conn);
            return Convert.ToInt32(comando.ExecuteScalar());
        }

        public bool isOnline(int uid)
        {
            String sql = "SELECT COUNT(*) FROM point WHERE zoneid > 0 and uid = " + uid;
            Connection con = new Connection();
            conn = con.getConnection();
            comando = new MySqlCommand(sql, conn);
            return Convert.ToInt32(comando.ExecuteScalar()) > 0 ? true : false;
        }

        public List<Conta> retornaContas(string pesquisa)
        {
            listaContas = new List<Conta>();
            String sql = "SELECT * FROM users WHERE id='" + pesquisa + "' or name='" + pesquisa + "' or email='" + pesquisa + "' or truename='" + pesquisa + "';";
            Connection con = new Connection();
            conn = con.getConnection();
            using (comando = new MySqlCommand(sql, conn))
            {
                using (MySqlDataReader dr = comando.ExecuteReader())
                {
                    while (dr.Read())
                    {
                        Conta conta = new Conta();
                        conta.Id = dr.GetInt32("id");
                        conta.Usuario = dr.GetString("name");
                        conta.Nome = dr.GetString("truename");
                        conta.Email = dr.GetString("email");
                        listaContas.Add(conta);
                    }
                }
            }
            return listaContas;
        }

        public List<Conta> retornaTodasContas()
        {
            listaContas = new List<Conta>();
            String sql = "SELECT * FROM users;";
            Connection con = new Connection();
            conn = con.getConnection();
            using (comando = new MySqlCommand(sql, conn))
            {
                using (MySqlDataReader dr = comando.ExecuteReader())
                {
                    while (dr.Read())
                    {
                        Conta conta = new Conta();
                        conta.Id = dr.GetInt32("id");
                        conta.Usuario = dr.GetString("name");
                        conta.Nome = dr.GetString("truename");
                        conta.Email = dr.GetString("email");
                        listaContas.Add(conta);
                    }
                    dr.Close();
                }
            }
            conn.Close();
            return listaContas;
        }

        public List<GRoleData> retornaListaPersonagens(int userid)
        {
            List<GRoleData> listaPersonagens = new List<GRoleData>();
            var listaUserID = Main.isDebug() ? ComandosDebug.GetUserRoles(userid) : Comandos.GetUserRoles(userid);
            for (int i = 0; i < listaUserID.roles.Count; i++)
            {
                GRoleData data = Main.isDebug() ? ComandosDebug.GetRoleData(((IntString)listaUserID.roles[i]).id) : Comandos.GetRoleData(((IntString)listaUserID.roles[i]).id);
                listaPersonagens.Add(data);
            }
            return listaPersonagens;
        }

        public List<int> retornaPrivilegios(int userid)
        {
            List<int> lista = new List<int>();
            String sql = "SELECT rid FROM auth WHERE userid = " + userid + ";";
            Connection con = new Connection();
            conn = con.getConnection();
            using (comando = new MySqlCommand(sql, conn))
            {
                using (MySqlDataReader dr = comando.ExecuteReader())
                {
                    while (dr.Read())
                        lista.Add(dr.GetInt32("rid"));
                    dr.Close();
                }
            }
            conn.Close();
            return lista;
        }

        public void removePrivilegios(int userid)
        {
            String sql = "DELETE FROM auth WHERE userid = " + userid + ";";
            Connection con = new Connection();
            conn = con.getConnection();
            comando = new MySqlCommand(sql, conn);
            comando.ExecuteNonQuery();            
            conn.Close();
        }

        public void adicionaPrivilegios(int userid, List<int> privileges)
        {
            String sql = "INSERT INTO auth(userid, zoneid, rid) VALUES (" + userid + ", 1, " + privileges[0] + ")";
            for (int i = 1; i < privileges.Count; ++i)
                sql += ", (" + userid + ", 1, " + privileges[i] + ")";
            Connection con = new Connection();
            conn = con.getConnection();
            comando = new MySqlCommand(sql, conn);
            comando.ExecuteNonQuery();
            conn.Close();
        }
    }
}
