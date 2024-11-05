namespace Protocols
{
    public enum Opcode : int
    {
        NULL = 0,
        AutoLockGet = 0x188,
        AutoLockSet = 0x310,
        ChatBroadcast = 0x78,
        ChatPrivate = 0x60,
        ClearStorehousePasswd = 0xD4A,
        DeleteRole = 0xBC0,
        DebugCommand = 0x369,
        DebugAddCash = 0x209,
        ForbidUser = 0x1F44,
        GetFactionDetail = 0x1200,
        GetMaxOnlineNum = 0x177,
        GetUserRoles = 0xD49,
        GMControlGame = 0x17C,
        GMKickoutRole = 0x168,
        GMRestartServer = 0x166,
        GMShutupRole = 0x16A,
        GMGetGameAttri = 0x178,
        GMSetGameAttri = 0x179,
        GetRoleData = 0x1F43,
        PutRoleData = 0x1F42,
        SysSendMail = 0x1076,
    }

    public enum CustomOpcode : int
    {
        Chat = 0x1000,
        AutoLockGet,
        AutoLockSet,
        ClearStorehousePasswd,
        DeleteRole,
        DebugCommand,
        DebugAddCash,
        ForbidUser,
        GetFactionDetail,
        GetMaxOnlineNum,
        GetUserRoles,
        GMControlGame,
        GMKickoutRole,
        GMRestartServer,
        GMShutupRole,
        GMGetGameAttri,
        GMSetGameAttri,
        GetRoleData,
        PutRoleData,
        SysSendMail,
        UpdateInfoFromServer,
        StartProcess,
        StopProcess,
        StartMap,
        StopMap,
        ClearCache,
        GetFactionList,
        Logs
    }

    public enum Attr : byte
    {
        PRV_DOUBLEEXP = 204,    //双倍经验
        PRV_LAMBDA = 205,   //并发连接数
        PRV_NOTRADE = 207,  //禁止玩家间交易
        PRV_NOAUCTION = 208,    //禁止拍卖操作
        PRV_NOMAIL = 209,   //禁止邮件操作
        PRV_NOFACTION = 210,    //禁止帮派操作
        PRV_DOUBLEMONEY = 211,  //双倍掉钱
        PRV_DOUBLEOBJECT = 212, //双倍掉物
        PRV_DOUBLESP = 213, //双倍技能点
        PRV_NOSELLPOINT = 214,  //禁止销售点卡
    }

    public enum MessageType : byte
    {
        Normal = 0,
        Global = 1,
        Grupo = 2,
        Cla = 3,
        Privado = 4,
        Dano = 5,
        Combate = 6,
        Comercio = 7,
        SistemaAmarelo = 8,
        SistemaGM = 9,
        Outros = 10,
        VermelhoInstancia = 11,
        Mensageiro = 12,
        Batalha = 13,
        Nacoes = 14,
        Interservidor = 15,
    }

    public enum ChatType : int
    {
        Broadcast = 1,
        Privado = 2,
    }

    public enum Porta : int
    {
        GDELIVERYD = 29100,
        GPROVIDER = 29300,
        GAMEDBD = 29400,
    }

    public enum WarType : int
    {
        IniciarLance = 327660,
        TerminarLance = 414060,
        IniciarTW = 591600,
    }
}
