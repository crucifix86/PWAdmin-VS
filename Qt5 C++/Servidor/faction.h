#ifndef FACTION_H
#define FACTION_H

#include "OctetsStream.h"
using namespace GNET;
class GMember
{
public:
    uint32_t rid;
    uint8_t role;

    void marshal(OctetsStream &os)
    {
        os << rid;
        os << role;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> rid;
        os >> role;
    }
};
typedef std::vector<GMember> GMemberVector;

class GFactionInfo
{
public:
    uint32_t fid;
    std::string name;
    uint8_t level;
    GMember master;
    GMemberVector member;
    std::string announce;
    std::string sysinfo;

    void marshal(OctetsStream &os)
    {
        os << fid;
        os << name;
        os << level;
        master.marshal(os);
        os.compact_uint32(member.size());
        for (auto m : member)
            m.marshal(os);
        os << announce;
        os << sysinfo;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> fid;
        os >> name;
        os >> level;
        master.unmarshal(os);
        auto size = os.uncompact_uint32();
        member.resize(size);
        for (int i = 0; i < size; i++)
            member[i].unmarshal(os);
        os >> announce;
        os >> sysinfo;
    }
};

class FactionMemberInfo
{
public:
    unsigned int roleid;
    uint8_t level;
    uint8_t occupation;
    uint8_t froleid;
    short loginday;
    uint8_t online_status;
    std::string name;
    std::string nickname;
    int contrib;
    uint8_t delayexpel;
    int expeltime;
    int reputation;
    uint8_t reincarn_times;
    uint8_t gender;

    void marshal(OctetsStream &os)
    {
        os << roleid;
        os << level;
        os << occupation;
        os << froleid;
        os << loginday;
        os << online_status;
        os << name;
        os << nickname;
        os << contrib;
        os << delayexpel;
        os << expeltime;
        os << reputation;
        os << reincarn_times;
        os << gender;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> roleid;
        os >> level;
        os >> occupation;
        os >> froleid;
        os >> loginday;
        os >> online_status;
        os >> name;
        os >> nickname;
        os >> contrib;
        os >> delayexpel;
        os >> expeltime;
        os >> reputation;
        os >> reincarn_times;
        os >> gender;
    }
};

class GFactionAlliance
{
public:
    int fid;
    int end_time;

    void marshal(OctetsStream &os)
    {
        os << fid;
        os << end_time;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> fid;
        os >> end_time;
    }
};

class GFactionRelationApply
{
public:
    int type;
    int fid;
    int end_time;

    void marshal(OctetsStream &os)
    {
        os << type;
        os << fid;
        os << end_time;
    }

    void unmarshal(OctetsStream &os)
    {
        os >> type;
        os >> fid;
        os >> end_time;
    }
};
typedef std::vector<GFactionAlliance> GFactionAllianceVector;
typedef std::vector<GFactionAlliance> GFactionHostileVector;
typedef std::vector<GFactionRelationApply> GFactionRelationApplyVector;
typedef std::vector<FactionMemberInfo> FactionMemberInfoVector;

class GFactionDetail
{
public:
    unsigned int fid;
    std::string name;
    char level;
    unsigned int master;
    std::string announce;
    std::string sysinfo;
    FactionMemberInfoVector member;
    int last_op_time;
    GFactionAllianceVector alliance;
    GFactionHostileVector hostile;
    GFactionRelationApplyVector apply;

    void unmarshal(OctetsStream &os)
    {

        os >> fid;
        os >> name;
        os >> level;
        os >> master;
        os >> announce;
        os >> sysinfo;
        auto member_size = os.uncompact_uint32();
        member.resize(member_size);
        for (int i; i < member_size; i++)
        {
            member[i].unmarshal(os);
        }
        os >> last_op_time;
        auto alliance_size = os.uncompact_uint32();
        alliance.resize(alliance_size);
        for (int i; i < alliance_size; i++)
        {
            alliance[i].unmarshal(os);
        }
        auto hostile_size = os.uncompact_uint32();
        hostile.resize(hostile_size);
        for (int i; i < hostile_size; i++)
        {
            hostile[i].unmarshal(os);
        }
        auto apply_size = os.uncompact_uint32();
        apply.resize(apply_size);
        for (int i; i < apply_size; i++)
        {
            apply[i].unmarshal(os);
        }
    }
};
#endif