#ifndef DEFS_H
#define DEFS_H

#include <string>
#include "OctetsStream.h"

using namespace GNET;

struct GPair
{
    int key;
    int value;

    void marshal(OctetsStream &os)
    {
        os << key;
        os << value;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> key;
        os >> value;
    }
};

struct IntOctets
{
    int v_int;
    std::string v_string;

    void marshal(OctetsStream &os)
    {
        os << v_int;
        os.writeName(v_string);
    }

    void unmarshal(OctetsStream &os)
    {
        os >> v_int;
        os >> v_string;
    }
};

enum AUTOLOCK_REASON
{
    REASON_PLAYER,
    REASON_GM,
    REASON_IWEB,
};

enum AUTOLOCK_KEY
{
    LOCKTIME_NOW = 1,
    LOCKTIME_NEW = 2,
    LOCKSET_TIME = 3,
    LOCKSET_TIME_GM = 4,
    LOCKTIME_GM = 5,
};

enum FACTION_ROLES
{
    _R_UNMEMBER = 0,
    _R_SYSTEM = 1,
    _R_MASTER = 2,
    _R_VICEMASTER = 3,
    _R_BODYGUARD = 4,
    _R_POINEER = 5,
    _R_MEMBER = 6,
};

enum PLAYER_STATUS
{
    _STATUS_OFFLINE,
    _STATUS_READYLOGOUT,
    _STATUS_SELECTROLE,
    _STATUS_ONLINE,
    _STATUS_READYGAME,
    _STATUS_ONGAME,
    _STATUS_HIDDEN,
    _STATUS_READYLOGIN,
    _STATUS_SWITCH,
};

enum MessageType : uint8_t
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
};

enum Opcode : int
{
    opAutoLockGet = 0x188,
    opAutoLockSet = 0x310,
    opChatBroadcast = 0x78,
    opChatPrivate = 0x60,
    opClearStorehousePasswd = 0xD4A,
    opDeleteRole = 0xBC0,
    opDebugCommand = 0x369,
    opDebugAddCash = 0x209,
    opForbidUser = 0x1F44,
    opGetFactionDetail = 0x1200,
    opGetUserFaction = 0x11FF,
    opQueryUserRoles = 0x1F41,
    opGetMaxOnlineNum = 0x177,
    opGetUserRoles = 0xD49,
    opGMControlGame = 0x17C,
    opGMListOnlineUser = 0x160,
    opGMListOnlineUserRe = 0x161,
    opGMKickoutRole = 0x168,
    opGMRestartServer = 0x166,
    opGMShutupRole = 0x16A,
    opGMGetGameAttri = 0x178,
    opGMSetGameAttri = 0x179,
    opGetRoleData = 0x1F43,
    opPutRoleData = 0x1F42,
    opSysSendMail = 0x1076,
    opGetRole = 0xBBD,
    opDBGetConsumeInfos = 0x180,
    opDBRawRead = 0xBEF,
};

enum Attr : uint8_t
{
    PRV_DOUBLEEXP = 204,    
    PRV_LAMBDA = 205,       
    PRV_NOTRADE = 207,      
    PRV_NOAUCTION = 208,    
    PRV_NOMAIL = 209,       
    PRV_NOFACTION = 210,    
    PRV_DOUBLEMONEY = 211,  
    PRV_DOUBLEOBJECT = 212, 
    PRV_DOUBLESP = 213,     
    PRV_NOSELLPOINT = 214,  
};

enum MAIL_ATTR : uint8_t
{
    _MA_UNREAD = 0,
    _MA_ATTACH_OBJ,
    _MA_ATTACH_MONEY,
    _MA_ATTACH_BOTH,
    _MA_PRESERVE,
    _MA_TYPE_NUM,
};

enum MAIL_SENDER_TYPE
{
    _MST_PLAYER = 0,
    _MST_NPC,
    _MST_AUCTION,
    _MST_WEB,
    _MST_BATTLE,
    _MST_WEBTRADE,
    _MST_SYSAUCTION,
    _MST_COUNTRYBATTLE,
    _MST_PLAYERPRESENT,
    _MST_PLAYEROFFLINESHOP,
    _MST_TANKBATTLE,
    _MST_ANTICHEAT,
    _MST_FACTIONRESOURCEBATTLE,
    _MST_TYPE_NUM,
};
#endif