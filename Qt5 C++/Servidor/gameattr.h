#ifndef GAMEATTRIBUTES_H
#define GAMEATTRIBUTES_H

#include "OctetsStream.h"
#include "player.h"

using namespace GNET;

class GMSetGameAttributes
{
public:
    int retcode;
    int gmroleid;
    int localsid;
    uint8_t attribute;
    uint8_t count;
    uint8_t value;

    void marshal(OctetsStream &os)
    {
        os << retcode;
        os << gmroleid;
        os << localsid;
        os << attribute;
        os << count;
        os << value;
    }
};

class GMGetGameAttributes
{
public:
    uint8_t attribute;
    uint8_t localsid;
    uint8_t value;

    void unmarshal(OctetsStream &os)
    {
        os >> attribute;
        os >> localsid;
        os >> value;
    }
};

class GetAttributes
{
public:
    std::vector<GMGetGameAttributes> attributes;

    void unmarshal(OctetsStream &os)
    {
        attributes.resize(10);
        for (int i = 0; i < 10; i++)
        {
            GMGetGameAttributes attr;
            attr.unmarshal(os);
            attributes[i] = attr;
        }
    }
};


class DBSendMailArg : public OctetsStream // 4214 ou 0x1076
{
public:
    int tid;      // 1
    int sysid;    // 32
    uint8_t sys_type; // 3
    int receiver; // id
    std::string title;
    std::string context;
    GRoleInventory attach_obj;
    int attach_money;

    DBSendMailArg() : OctetsStream() { init(); }

    void marshal(OctetsStream &os)
    {
        os << tid;
        os << sysid;
        os << sys_type;
        os << receiver;
        os.writeName(title);
        os.writeName(context);
        attach_obj.marshal(os);
        os << attach_money;
    }
};
#endif
