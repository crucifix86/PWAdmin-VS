#ifndef USER_H
#define USER_h

#include "OctetsStream.h"
#include "defs.h"

using namespace GNET;

class DBAutolock
{
    int retcode;
    std::vector<GPair> autolock;

    void unmarshal(OctetsStream &os)
    {
        os >> retcode;
        int size;
        os >> size;
        autolock.resize(size);
        for (int i = 0; i < size; i++)
        {
            GPair p;
            p.unmarshal(os);
            autolock[i] = p;
        }
    }
};

class DBAutoLockGet
{
public:
    int retcode;
    int userid;

    void marshal(OctetsStream &os)
    {
        os << retcode;
        os << userid;
    }
};

class DBAutoLockSet
{
public:
    int retcode;
    int userid;
    std::vector<GPair> autolock;

    void marshal(OctetsStream &os)
    {
        os << retcode;
        os << userid;
        uint8_t size = autolock.size();
        os << size;
        for (auto al : autolock)
            al.marshal(os);
    }
};

class QueryUseridArg
{
public:
    int retcode;
    std::string rolename;

    void marshal(OctetsStream &os)
    {
        os << retcode;
        os.writeName(rolename);
    }
};

class QueryUseridRes
{
public:
    int retcode;
    int userid;
    int roleid;
    int level;

    void unmarshal(OctetsStream &os)
    {
        os >> retcode;
        os.readInt16();
        os >> userid;
        os >> roleid;
        os >> level;
    }
};

class GetUserRolesArg
{
public:
    int retcode;
    int roleid;

    void marshal(OctetsStream &os)
    {
        os << retcode;
        os << roleid;
    }
};

class GetUserRolesRes
{
public:
    int retcode;
    std::vector<IntOctets> roles;

    void unmarshal(OctetsStream &os)
    {
        os >> retcode;
        int size;
        os >> size;
        roles.resize(size);
        for (int i = 0; i < size; i++)
        {
            IntOctets io;
            io.unmarshal(os);
            roles[i] = io;
        }
    }
};

#endif