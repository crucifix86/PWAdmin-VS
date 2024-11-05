#ifndef PLAYER_H
#define PLAYER_H

#include "OctetsStream.h"
#include "defs.h"
#include "faction.h"
#include "session.h"

using namespace GNET;

class GMPlayerInfo
{
public:
    int userid;
    int roleid;
    int linkid;
    int localsid;
    int gsid;
    char status;
    std::string name;

    void marshal(OctetsStream &os)
    {
        os << userid;
        os << roleid;
        os << linkid;
        os << localsid;
        os << gsid;
        os << status;
        os << name;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> userid;
        os >> roleid;
        os >> linkid;
        os >> localsid;
        os >> gsid;
        os >> status;
        os >> name;
    }
};

class GRoleForbid
{
public:
    uint8_t type;
    int time;
    int createtime;
    std::string reason;

    void marshal(OctetsStream &os)
    {
        os << (type);
        os << (time);
        os << (createtime);
        os << (reason);
    }

    void unmarshal(OctetsStream &os)
    {
        os >> (type);
        os >> (time);
        os >> (createtime);
        os >> (reason);
    }
};
typedef std::vector<GRoleForbid> GRoleForbidVector;

class GRoleInventory
{
public:
    int id = 0;
    int pos = -1;
    int count = 1;
    int max_count = 1;
    std::string data = "";
    int proctype = 0;
    int expire_date = 0;
    int guid1 = 0;
    int guid2 = 0;
    int mask = 0;

    void marshal(OctetsStream &os)
    {
        os << (id);
        os << (pos);
        os << (count);
        os << (max_count);
        os << (data);
        os << (proctype);
        os << (expire_date);
        os << (guid1);
        os << (guid2);
        os << (mask);
    }

    void unmarshal(OctetsStream &os)
    {
        os >> (id);
        os >> (pos);
        os >> (count);
        os >> (max_count);
        os >> (data);
        os >> (proctype);
        os >> (expire_date);
        os >> (guid1);
        os >> (guid2);
        os >> (mask);
    }
};
typedef std::vector<GRoleInventory> GRoleInventoryVector;

class GRoleEquipment
{
public:
    GRoleInventoryVector inv;

    void marshal(OctetsStream &os)
    {
        os.compact_uint32(inv.size());
        for (auto i : inv)
            i.marshal(os);
    }

    void unmarshal(OctetsStream &os)
    {
        auto size = os.uncompact_uint32();
        inv.resize(size);
        for (int i = 0; i < size; i++)
            inv[i].unmarshal(os);
    }
};

class GRoleBase // atualizado para 1.6.5
{
public:
    int8_t version;
    unsigned int id;
    std::string name;
    int race;
    int cls;
    uint8_t gender;
    std::string custom_data;
    std::string config_data;
    unsigned int custom_stamp;
    uint8_t status;
    int delete_time;
    int create_time;
    int lastlogin_time;
    GRoleForbidVector forbid;
    std::string help_states;
    unsigned int spouse;
    unsigned int userid;
    std::string cross_data;
    std::string custom_data_highmode; // 1.6.5: alterado de uint8_t para Octets
    uint8_t reserved2;
    uint8_t reserved3;
    uint8_t reserved4;

    void marshal(OctetsStream &os)
    {
        os << (version);
        os << (id);
        os.writeName(name);
        os << (race);
        os << (cls);
        os << (gender);
        os << (custom_data);
        os << (config_data);
        os << (custom_stamp);
        os << (status);
        os << (delete_time);
        os << (create_time);
        os << (lastlogin_time);
        os.compact_uint32(forbid.size());
        for (auto f : forbid)
            f.marshal(os);
        os << (help_states);
        os << (spouse);
        os << (userid);
        os << (cross_data);
        if (Session::getInstance().ServerVersion >= 248)
            os << (custom_data_highmode);
        else
            os << (reserved2);
        os << (reserved3);
        os << (reserved4);
    }

    void unmarshal(OctetsStream &os)
    {
        os >> (version);
        os >> (id);
        os >> (name);
        os >> (race);
        os >> (cls);
        os >> (gender);
        os >> (custom_data);
        os >> (config_data);
        os >> (custom_stamp);
        os >> (status);
        os >> (delete_time);
        os >> (create_time);
        os >> (lastlogin_time);
        auto forbid_size = os.uncompact_uint32();
        forbid.resize(forbid_size);
        for (int i = 0; i < forbid_size; i++)
            forbid[i].unmarshal(os);
        os >> (help_states);
        os >> (spouse);
        os >> (userid);
        os >> (cross_data);
        if (Session::getInstance().ServerVersion >= 248)
            os >> (custom_data_highmode);
        else
            os >> (reserved2);
        os >> (reserved3);
        os >> (reserved4);
    }
};

class GRoleStatus
{
public:
    uint8_t version;
    int level;
    int level2;
    int exp;
    int sp;
    int pp;
    int hp;
    int mp;
    float posx;
    float posy;
    float posz;
    int worldtag;
    int invader_state;
    int invader_time;
    int pariah_time;
    int reputation;
    std::string custom_status;
    std::string filter_data;
    std::string charactermode;
    std::string instancekeylist;
    int dbltime_expire;
    int dbltime_mode;
    int dbltime_begin;
    int dbltime_used;
    int dbltime_max;
    int time_used;
    std::string dbltime_data;
    short storesize;
    std::string petcorral;
    std::string property;
    std::string var_data;
    std::string skills;
    std::string storehousepasswd;
    std::string waypointlist;
    std::string coolingtime;
    std::string npc_relation;
    std::string multi_exp_ctrl;
    std::string storage_task;
    std::string faction_contrib;
    std::string force_data;
    std::string online_award;
    std::string profit_time_data;
    std::string country_data;
    std::string king_data;
    std::string meridian_data;
    std::string extraprop;
    std::string title_data;
    std::string reincarnation_data;
    std::string realm_data;
    char reserved2;
    char reserved3;

    void marshal(OctetsStream &os)
    {
        os << (version);
        os << (level);
        os << (level2);
        os << (exp);
        os << (sp);
        os << (pp);
        os << (hp);
        os << (mp);
        os << (posx);
        os << (posy);
        os << (posz);
        os << (worldtag);
        os << (invader_state);
        os << (invader_time);
        os << (pariah_time);
        os << (reputation);
        os << (custom_status);
        os << (filter_data);
        os << (charactermode);
        os << (instancekeylist);
        os << (dbltime_expire);
        os << (dbltime_mode);
        os << (dbltime_begin);
        os << (dbltime_used);
        os << (dbltime_max);
        os << (time_used);
        os << (dbltime_data);
        os << (storesize);
        os << (petcorral);
        os << (property);
        os << (var_data);
        os << (skills);
        os << (storehousepasswd);
        os << (waypointlist);
        os << (coolingtime);
        os << (npc_relation);
        os << (multi_exp_ctrl);
        os << (storage_task);
        os << (faction_contrib);
        os << (force_data);
        os << (online_award);
        os << (profit_time_data);
        os << (country_data);
        os << (king_data);
        os << (meridian_data);
        os << (extraprop);
        os << (title_data);
        os << (reincarnation_data);
        os << (realm_data);
        os << (reserved2);
        os << (reserved3);
    }

    void unmarshal(OctetsStream &os)
    {
        os >> (version);
        os >> (level);
        os >> (level2);
        os >> (exp);
        os >> (sp);
        os >> (pp);
        os >> (hp);
        os >> (mp);
        os >> (posx);
        os >> (posy);
        os >> (posz);
        os >> (worldtag);
        os >> (invader_state);
        os >> (invader_time);
        os >> (pariah_time);
        os >> (reputation);
        os >> (custom_status);
        os >> (filter_data);
        os >> (charactermode);
        os >> (instancekeylist);
        os >> (dbltime_expire);
        os >> (dbltime_mode);
        os >> (dbltime_begin);
        os >> (dbltime_used);
        os >> (dbltime_max);
        os >> (time_used);
        os >> (dbltime_data);
        os >> (storesize);
        os >> (petcorral);
        os >> (property);
        os >> (var_data);
        os >> (skills);
        os >> (storehousepasswd);
        os >> (waypointlist);
        os >> (coolingtime);
        os >> (npc_relation);
        os >> (multi_exp_ctrl);
        os >> (storage_task);
        os >> (faction_contrib);
        os >> (force_data);
        os >> (online_award);
        os >> (profit_time_data);
        os >> (country_data);
        os >> (king_data);
        os >> (meridian_data);
        os >> (extraprop);
        os >> (title_data);
        os >> (reincarnation_data);
        os >> (realm_data);
        os >> (reserved2);
        os >> (reserved3);
    }
};

class GRolePocket
{
public:
    unsigned int capacity;
    unsigned int timestamp;
    unsigned int money;
    GRoleInventoryVector items;
    int reserved1;
    int reserved2;
    // 1.7.3
    int64_t money2;
    char u_shizhuang;
    int rune1;
    int rune2;
    string rune_data;
    char wuhun1;
    string wuhun_data;

    void marshal(OctetsStream &os)
    {
        os << capacity;
        os << timestamp;
        os << money;
        os.compact_uint32(items.size());
        for (auto i : items)
            i.marshal(os);
        os << reserved1;
        os << reserved2;
        if (Session::getInstance().ServerVersion > 248)
        {
            os << money2;
            os << u_shizhuang;
            os << rune1;
            os << rune2;
            os.writeName(rune_data);
            os << wuhun1;
            os.writeName(wuhun_data);
        }
    }
    void unmarshal(OctetsStream &os)
    {
        os >> capacity;
        os >> timestamp;
        os >> money;
        auto size = os.uncompact_uint32();
        items.resize(size);
        for (int i = 0; i < size; i++)
            items[i].unmarshal(os);
        os >> reserved1;
        os >> reserved2;
        if (Session::getInstance().ServerVersion > 248)
        {
            os >> money2;
            os >> u_shizhuang;
            os >> rune1;
            os >> rune2;
            os >> rune_data;
            os >> wuhun1;
            os >> wuhun_data;
        }
    }
};

class GRoleStorehouse
{
public:
    unsigned int capacity;
    unsigned int money;
    GRoleInventoryVector items;
    uint8_t size1;
    uint8_t size2;
    GRoleInventoryVector dress;
    GRoleInventoryVector material;
    uint8_t size3;
    GRoleInventoryVector generalcard;
    short reserved;

    void marshal(OctetsStream &os)
    {
        os << capacity;
        os << money;
        os.compact_uint32(items.size());
        for (auto i : items)
            i.marshal(os);
        os << size1;
        os << size2;
        os.compact_uint32(dress.size());
        for (auto i : dress)
            i.marshal(os);
        os.compact_uint32(material.size());
        for (auto i : material)
            i.marshal(os);
        os << size3;
        os.compact_uint32(generalcard.size());
        for (auto i : generalcard)
            i.marshal(os);
        os << reserved;
    }
    void unmarshal(OctetsStream &os)
    {
        os >> capacity;
        os >> money;
        int items_size = os.uncompact_uint32();
        items.resize(items_size);
        for (int i = 0; i < items_size; i++)
            items[i].marshal(os);
        os >> size1;
        os >> size2;
        int dress_size = os.uncompact_uint32();
        dress.resize(dress_size);
        for (int i = 0; i < dress_size; i++)
            dress[i].marshal(os);
        int material_size = os.uncompact_uint32();
        material.resize(material_size);
        for (int i = 0; i < material_size; i++)
            material[i].marshal(os);
        os >> size3;
        int generalcard_size = os.uncompact_uint32();
        generalcard.resize(generalcard_size);
        for (int i = 0; i < generalcard_size; i++)
            generalcard[i].marshal(os);
        os >> reserved;
    }
};

class GRoleTask
{
public:
    std::string task_data;
    std::string task_complete;
    std::string task_finishtime;
    GRoleInventoryVector task_inventory;

    void marshal(OctetsStream &os)
    {
        os << task_data;
        os << task_complete;
        os << task_finishtime;
        os.compact_uint32(task_inventory.size());
        for (auto i : task_inventory)
            i.marshal(os);
    }

    void unmarshal(OctetsStream &os)
    {
        os >> task_data;
        os >> task_complete;
        os >> task_finishtime;
        int size = os.uncompact_uint32();
        task_inventory.resize(size);
        for (int i = 0; i < size; i++)
            task_inventory[i].unmarshal(os);
    }
};

class GUserStorehouse
{
public:
    int capacity;
    unsigned int money;
    GRoleInventoryVector items;
    int reserved1;
    int reserved2;
    int reserved3;
    int reserved4;

    void marshal(OctetsStream &os)
    {
        os << capacity;
        os << money;
        os.compact_uint32(items.size());
        for (auto i : items)
            i.marshal(os);
        os << reserved1;
        os << reserved2;
        os << reserved3;
        os << reserved4;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> capacity;
        os >> money;
        int size = os.uncompact_uint32();
        items.resize(size);
        for (int i = 0; i < size; i++)
            items[i].unmarshal(os);
        os >> reserved1;
        os >> reserved2;
        os >> reserved3;
        os >> reserved4;
    }
};

class GShopLog
{
public:
    int roleid;
    int order_id;
    int item_id;
    int expire;
    int item_count;
    int order_count;
    int cash_need;
    int time;
    int guid1;
    int guid2;

    void marshal(OctetsStream &os)
    {
        os << roleid;
        os << order_id;
        os << item_id;
        os << expire;
        os << item_count;
        os << order_count;
        os << cash_need;
        os << time;
        os << guid1;
        os << guid2;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> roleid;
        os >> order_id;
        os >> item_id;
        os >> expire;
        os >> item_count;
        os >> order_count;
        os >> cash_need;
        os >> time;
        os >> guid1;
        os >> guid2;
    }
};
typedef std::vector<GShopLog> GShopLogVector;

class GRoleDetail
{
public:
    int retcode;
    int priority;
    uint16_t datamask;
    uint8_t gameserver_id;
    uint8_t version;
    unsigned int id;
    unsigned int userid;
    GRoleStatus status;
    std::string name;
    int race;
    int cls;
    unsigned int spouse;
    uint8_t gender;
    int create_time;
    int lastlogin_time;
    int cash_add;
    int cash_total;
    int cash_used;
    int cash_serial;
    unsigned int factionid;
    int factionrole;
    std::string custom_data;
    unsigned int custom_stamp;
    GRolePocket inventory;
    GRoleEquipment equipment;
    GRoleStorehouse storehouse;
    GRoleTask task;
    std::string addiction;
    GShopLogVector logs;
    int bonus_add;
    int bonus_reward;
    int bonus_used;
    int referrer;
    GUserStorehouse userstorehouse;
    std::string taskcounter;
    GFactionAllianceVector factionalliance;
    GFactionHostileVector factionhostile;
    int mall_consumption;
    int src_zoneid;
    // 1.5.3+
    int64_t unifid;
    int vip_level;
    int score_add;
    int score_cost;
    int score_consume;
    int day_clear_stamp;
    int week_clear_stamp;
    int month_clear_stamp;
    int year_clear_stamp;
    string purchase_limit_data;
    int home_level;

    void marshal(OctetsStream &os)
    {
        os << retcode;
        os << priority;
        os << datamask;
        os << gameserver_id;
        os << version;
        os << id;
        os << userid;
        status.marshal(os);
        os.writeName(name);
        os << race;
        os << cls;
        os << spouse;
        os << gender;
        os << create_time;
        os << lastlogin_time;
        os << cash_add;
        os << cash_total;
        os << cash_used;
        os << cash_serial;
        os << factionid;
        os << factionrole;
        os << custom_data;
        os << custom_stamp;
        inventory.marshal(os);
        equipment.marshal(os);
        storehouse.marshal(os);
        task.marshal(os);
        os << addiction;
        os.compact_uint32(logs.size());
        for (auto l : logs)
            l.marshal(os);
        os << bonus_add;
        os << bonus_reward;
        os << bonus_used;
        os << referrer;
        userstorehouse.marshal(os);
        os << taskcounter;
        os.compact_uint32(factionalliance.size());
        for (auto l : factionalliance)
            l.marshal(os);
        os.compact_uint32(factionhostile.size());
        for (auto l : factionhostile)
            l.marshal(os);
        os << mall_consumption;
        os << src_zoneid;
        if (Session::getInstance().ServerVersion >= 145)
        {
            os << unifid;
            os << vip_level;
            os << score_add;
            os << score_cost;
            os << score_consume;
            os << day_clear_stamp;
            os << week_clear_stamp;
            os << month_clear_stamp;
            os << year_clear_stamp;
            os << purchase_limit_data;
            os << home_level;
        }
    }

    void unmarshal(OctetsStream &os)
    {
        os >> retcode;
        os >> priority;
        os >> datamask;
        os >> gameserver_id;
        os >> version;
        os >> id;
        os >> userid;
        status.unmarshal(os);
        os >> name;
        os >> race;
        os >> cls;
        os >> spouse;
        os >> gender;
        os >> create_time;
        os >> lastlogin_time;
        os >> cash_add;
        os >> cash_total;
        os >> cash_used;
        os >> cash_serial;
        os >> factionid;
        os >> factionrole;
        os >> custom_data;
        os >> custom_stamp;
        inventory.unmarshal(os);
        equipment.unmarshal(os);
        storehouse.unmarshal(os);
        task.unmarshal(os);
        os >> addiction;
        auto logs_size = os.uncompact_uint32();
        logs.resize(logs_size);
        for (int i = 0; i < logs_size; i++)
            logs[i].unmarshal(os);
        os >> bonus_add;
        os >> bonus_reward;
        os >> bonus_used;
        os >> referrer;
        userstorehouse.unmarshal(os);
        os >> taskcounter;
        auto fa_size = os.uncompact_uint32();
        factionalliance.resize(fa_size);
        for (int i = 0; i < fa_size; i++)
            factionalliance[i].unmarshal(os);
        int fh_size = os.uncompact_uint32();
        factionhostile.resize(fh_size);
        for (int i = 0; i < fh_size; i++)
            factionhostile[i].unmarshal(os);
        os >> mall_consumption;
        os >> src_zoneid;
        if (Session::getInstance().ServerVersion >= 145)
        {
            os >> unifid;
            os >> vip_level;
            os >> score_add;
            os >> score_cost;
            os >> score_consume;
            os >> day_clear_stamp;
            os >> week_clear_stamp;
            os >> month_clear_stamp;
            os >> year_clear_stamp;
            os >> purchase_limit_data;
            os >> home_level;
        }
    }
};

class GRoleData
{
public:
    int retcode;
    int priority;
    GRoleBase base;
    GRoleStatus status;
    GRolePocket pocket;
    GRoleEquipment equipment;
    GRoleStorehouse storehouse;
    GRoleTask task;

    void marshal(OctetsStream &os)
    {
        base.marshal(os);
        status.marshal(os);
        pocket.marshal(os);
        equipment.marshal(os);
        storehouse.marshal(os);
        task.marshal(os);
        os.updateDataFromStream();
    }

    void unmarshal(OctetsStream &os)
    {
        os.readInt32() << os.readInt16();
        base.unmarshal(os);
        status.unmarshal(os);
        pocket.unmarshal(os);
        equipment.unmarshal(os);
        storehouse.unmarshal(os);
        task.unmarshal(os);
        os.updateDataFromStream();
    }
};

class DBGetConsumeInfoRes
{
public:
    int retcode;
    int size;
    int roleid;
    int level;
    int login_ip;
    int cash_add;
    int mall_consumption;
    int avg_online_time;

    void unmarshal(OctetsStream &os)
    {
        os >> retcode;
        os.readInt16();
        size = os.uncompact_uint32();
        os >> roleid;
        os >> level;
        os >> login_ip;
        os >> cash_add;
        os >> mall_consumption;
        os >> avg_online_time;
    }
};

class DBGetConsumeInfoArg
{
public:
    int retcode;
    int id;

    void marshal(OctetsStream &os)
    {
        os << retcode;
        os.compact_uint32(1);
        os << id;
    }
};

#endif