using Protocols.Structs;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Imaging;
namespace pwAdmin
{
    public class Utilidades
    {

        public static string IntToVelAtk(int valor)
        {
            return String.Format("{0:f2}", 1 / ((valor) * 0.05));
        }

        public static string VelAtkToInt(float valor)
        {
            return ((1 / valor) * 20).ToString("n0");
        }


        public enum Classe
        {
            GUERREIRO = 0,
            MAGO = 1,
            ESPIRITUALISTA = 2,
            FEITICEIRA = 3,
            BARBARO = 4,
            MERCENARIO = 5,
            ARQUEIRO = 6,
            SACERDOTE = 7,
            ARCANO = 8,
            MISTICO = 9,
            RETALHADOR = 10,
            TORMENTADOR = 11,
            MAX_CLASSE = 12
        }

        public static Image IconeClasses(Classe classe)
        {
            int x = 0, y = 0;
            List<Point> ponto = new List<Point>();
            ponto.Add(new Point(x, y));
            for (int i = 1; i < 12; ++i)
            {
                y = i * 14;
                x = 0;
                ponto.Add(new Point(x, y));
            }

            Point d = ponto[(int)classe];
            Bitmap pageBitmap = new Bitmap(14, 14, PixelFormat.Format32bppArgb);
            using (Graphics graphics = Graphics.FromImage(pageBitmap))
            {
                graphics.DrawImage(Properties.Resources.profession, new Rectangle(0, 0, 14, 14), new Rectangle(d.X, d.Y, 14, 14), GraphicsUnit.Pixel);
            }
            return (Image)pageBitmap;
        }

        public static Color CorPK(int state, int pariahTime)
        {
            Color NAMECOL_WHITE = Color.White;
            Color NAMECOL_RED0 = Color.FromArgb(0xffaaaa);
            Color NAMECOL_RED1 = Color.FromArgb(0xff6e6e);
            Color NAMECOL_RED2 = Color.FromArgb(0xff2828);
            switch (state)
            {
                case 0: return NAMECOL_WHITE;
                case 1: return NAMECOL_RED0;
                case 2: return pariahTime >= 72000 ? NAMECOL_RED1 : NAMECOL_RED2;
                default: return NAMECOL_WHITE;
            }
        }
        public enum ForbidType
        {
            FBD_FORBID_LOGIN = 100, //强制玩家下线，并禁止在一定时间上线
            FBD_FORBID_TALK = 101,  //禁言
            FBD_FORBID_TRADE = 102, //禁止玩家间、玩家与NPC交易
            FBD_FORBID_SELL = 103,  //禁卖
            FBD_FORBID_SELLPOINT = 104, //禁止销售点卡
            FBD_FORBID_CHEATER_LOGIN = 105, //禁止外挂用户登陆
        };

        public static string TipoDeBanimento(ForbidType tipo)
        {
            switch (tipo)
            {
                case ForbidType.FBD_FORBID_LOGIN: return "Login";
                case ForbidType.FBD_FORBID_TALK: return "Bate-Papo";
                case ForbidType.FBD_FORBID_TRADE: return "Negociação";
                case ForbidType.FBD_FORBID_SELL: return "Vender";
                case ForbidType.FBD_FORBID_SELLPOINT: return "Lojinha";
                case ForbidType.FBD_FORBID_CHEATER_LOGIN: return "Trapaça";
            }
            return "Desconhecido";
        }
        public static string TipoDeMascote(PetType tipo)
        {
            switch (tipo)
            {
                case PetType.PET_CLASS_MOUNT: return "Montaria";
                case PetType.PET_CLASS_COMBAT: return "Combate";
                case PetType.PET_CLASS_FOLLOW: return "Seguir";
                case PetType.PET_CLASS_SUMMON: return "Invocação";
                case PetType.PET_CLASS_PLANT: return "Planta";
                case PetType.PET_CLASS_EVOLUTION: return "Evolução";
            }
            return "Desconhecido";
        }

        public static String GeneroPersonagem(int idGenero)
        {
            switch (idGenero)
            {
                case 0: return "Masculino";
                case 1: return "Feminino";
            }
            return "Desconhecido";
        }

        public static String RacaPersonagem(int idRaca)
        {
            switch (idRaca)
            {
                case 0: return "Humano";
                case 1: return "Selvagem";
                case 2: return "Alado";
                case 3: return "Abissal";
                case 4: return "Guardião";
                case 5: return "Sombrio";
            }
            return "Desconhecido";
        }

        public static String ClassePersonagem(int idClasse)
        {
            switch (idClasse)
            {
                case 0: return "Guerreiro";
                case 1: return "Mago";
                case 2: return "Espiritualista";
                case 3: return "Feiticeira";
                case 4: return "Bárbaro";
                case 5: return "Mercenário";
                case 6: return "Arqueiro";
                case 7: return "Sacerdote";
                case 8: return "Arcano";
                case 9: return "Místico";
                case 10: return "Retalhador";
                case 11: return "Tormentador";
            }
            return "Desconhecido";
        }

        public static String CultivoPersonagem(int idCultivo)
        {
            switch (idCultivo)
            {
                case 0: return "Astuto";
                case 1: return "Harmonioso";
                case 2: return "O Equilíbrio Celestial";
                case 3: return "Lúcido";
                case 4: return "Enigmático";
                case 5: return "Ameaçador";
                case 6: return "Sinistro";
                case 7: return "Nirvana";
                case 8: return "Mahayana";
                case 20: return "Nobre";
                case 21: return "Iluminado";
                case 22: return "Imortal";
                case 30: return "Diabólico";
                case 31: return "Infernal";
                case 32: return "Demoníaco";
            }
            return "";
        }
    }
}
