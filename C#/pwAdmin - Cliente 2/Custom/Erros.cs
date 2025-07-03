using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pwAdmin
{
    public class Erros
    {
        public static void mensagemErro(int id)
        {
            switch (id)
            {
                case 1:
                    MessageBox.Show("Não foi possível conectar com o servidor.\n" +
                        "Verifique se o servidor está ativo ou se as configurações de servidor estão corretas.", 
                        "Erro 001");
                    break;
            }
        }
    }
}
