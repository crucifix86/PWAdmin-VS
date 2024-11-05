using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pwAdmin
{
    public enum PrivilegeType
    {
        PRV_TOGGLE_NAMEID = 0, //Mudar nome e ID do jogador
        PRV_HIDE_BEGOD = 1, //Insira furtividade ou invencibilidade
        PRV_ONLINE_ORNOT = 2, //Mudar online ou não
        PRV_CHAT_ORNOT = 3, //Alterna se a senha pode ser falada
        PRV_MOVETO_ROLE = 4, // move para o lado do caractere especificado
        PRV_FETCH_ROLE = 5, //Chama o personagem especificado ao GM
        PRV_MOVE_ASWILL = 6, //Move para a posição especificada
        PRV_MOVETO_NPC = 7, //Move para a posição do NPC especificada
        PRV_MOVETO_MAP = 8, // Move para o mapa especificado (copiar)
        PRV_ENHANCE_SPEED = 9, //move a aceleração
        PRV_FOLLOW = 10, //Segue o jogador
        PRV_LISTUSER = 11, //Obter a lista de jogadores online
        PRV_FORCE_OFFLINE = 100, //Força o jogador a ficar offline, e proíbe online por um certo tempo
        PRV_FORBID_TALK = 101, //Proibido
        PRV_FORBID_TRADE = 102, //Proibir trocas entre jogadores, jogadores e NPCs, apenas para um jogador
        PRV_FORBID_SELL = 103, //Proibido vender
        PRV_BROADCAST = 104, //difusão do sistema
        PRV_SHUTDOWN_GAMESERVER = 105, //encerra o servidor do jogo
        PRV_SUMMON_MONSTER = 200, //Invoca monstros
        PRV_DISPEL_SUMMON = 201, //Dispela o objeto invocado
        PRV_PRETEND = 202, //Fingir
        PRV_GMASTER = 203, //administrador GM
        PRV_DOUBLEEXP = 204, //Experiência dupla
        PRV_LAMBDA = 205, //Número de conexões simultâneas
        PRV_ACTIVITYMANAGER = 206, //gerenciador de atividades
        PRV_NOTRADE = 207, //Proibir transações entre jogadores
        PRV_NOAUCTION = 208, //Proibir operação de leilão
        PRV_NOMAIL = 209, //Proibir operação de correio
        PRV_NOFACTION = 210, //Proibir operação de gangue
        PRV_DOUBLEMONEY = 211, //Double drop money
        PRV_DOUBLEOBJECT = 212, //Double drop
        PRV_DOUBLESP = 213, //Dobrar pontos de habilidade
        PRV_NOSELLPOINT = 214, //Desativa cartões de ponto de venda
        PRV_PVP = 215, // interruptor PVP
    };

    public class Privileges
    {
		public static List<string> SetListPrivileges()
        {
            List<string> list = new List<string>();
            list.Add("0 - Alterar nome/ID do personagem");
            list.Add("1 - Ativar furtividade/invencibilidade");
            list.Add("2 - Mudar online ou não");
            list.Add("3 - Mutar jogador");
            list.Add("4 - Mover para o personagem");
            list.Add("5 - Puxar personagem");
            list.Add("6 - Mover com Ctrl+Click");
            list.Add("7 - Mover para NPC");
            list.Add("8 - Mover para mapa específico");
            list.Add("9 - Melhora a velocidade");
            list.Add("10 - Seguir o jogador");
            list.Add("11 - Obter a lista de jogadores online");
            list.Add("100 - Força o jogador a ficar offline");
            list.Add("101 - Proibir conversa");
            list.Add("102 - Proibir comércio");
            list.Add("103 - Proibir vendas");
            list.Add("104 - Transmissão de chat do sistema");
            list.Add("105 - Desligar o servidor");
            list.Add("200 - Invocar monstros");
            list.Add("201 - Desativar eventos");
            list.Add("202 - Ativar eventos");
            list.Add("203 - Ícone GM");
            list.Add("204 - Duplo exp");
            list.Add("205 - Conexões simultâneas");
            list.Add("206 - Gerencia atividades");
            list.Add("207 - Proibir comércio (lojinha)");
            list.Add("208 - Proibir leilão");
            list.Add("209 - Proibir correio");
            list.Add("210 - Proibir facção");
            list.Add("211 - Duplo dinheiro");
            list.Add("212 - Duplo drop");
            list.Add("213 - Duplo alma");
            list.Add("214 - Desativa cartões de ponto de venda");
            list.Add("215 - Interruptor PVP");
            return list;
        }
	}
}
