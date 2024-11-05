using MySqlConnector;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pwAdmin.GerenciarContas
{
    enum role
    {
        membro,
        admin
    }

    public class Conta
    {
        private int id;
        private string usuario;
        private string senha;
        private string pergunta;
        private string resposta;
        private string nome;
        private string numeroId;
        private string email;
        private string telefone;
        private string estado;
        private string cidade;
        private string celular;
        private string endereco;
        private string cep;
        private int genero;
        private MySqlDateTime aniversario;
        private MySqlDateTime dataCriacao;
        private string qq;
        private string senha2;
        private string dinheiro;
        private role role;
        private string linguagem;
        private string codigoToken;
        private Byte[] criadoEm;
        private Byte[] atualizadoEm;

        public int Id { get => id; set => id = value; }
        public string Usuario { get => usuario; set => usuario = value; }
        public string Senha { get => senha; set => senha = value; }
        public string Pergunta { get => pergunta; set => pergunta = value; }
        public string Resposta { get => resposta; set => resposta = value; }
        public string Nome { get => nome; set => nome = value; }
        public string NumeroId { get => numeroId; set => numeroId = value; }
        public string Email { get => email; set => email = value; }
        public string Telefone { get => telefone; set => telefone = value; }
        public string Estado { get => estado; set => estado = value; }
        public string Cidade { get => cidade; set => cidade = value; }
        public string Celular { get => celular; set => celular = value; }
        public string Endereco { get => endereco; set => endereco = value; }
        public string Cep { get => cep; set => cep = value; }
        public int Genero { get => genero; set => genero = value; }
        public MySqlDateTime Aniversario { get => aniversario; set => aniversario = value; }
        public MySqlDateTime DataCriacao { get => dataCriacao; set => dataCriacao = value; }
        public string Qq { get => qq; set => qq = value; }
        public string Senha2 { get => senha2; set => senha2 = value; }
        public string Dinheiro { get => dinheiro; set => dinheiro = value; }
        public string Linguagem { get => linguagem; set => linguagem = value; }
        public string CodigoToken { get => codigoToken; set => codigoToken = value; }
        public byte[] CriadoEm { get => criadoEm; set => criadoEm = value; }
        public byte[] AtualizadoEm { get => atualizadoEm; set => atualizadoEm = value; }
        internal role Role { get => role; set => role = value; }
    }
}
