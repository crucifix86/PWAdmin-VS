#ifndef COMMANDS_H
#define COMMANDS_H

#include "OctetsStream.h"
#include "player.h"
#include "faction.h"
#include "gameattr.h"
#include "user.h"
#include "session.h"

#include <array>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <cstring>
#include <arpa/inet.h>
#include <cstdlib>
#include <map>

using namespace GNET;

OctetsStream SendPacket(string ipaddr, uint16_t port, OctetsStream &message, bool receive = false, bool removeHeaders = true)
{
    int sock = 0;
    sockaddr_in serv_addr;

    sock = socket(AF_INET, SOCK_STREAM, 0);

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);
    inet_pton(AF_INET, ipaddr.c_str(), &serv_addr.sin_addr);

    connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));

    ssize_t bytesSent = send(sock, message.data.data(), message.data.size(), 0);
    if (bytesSent <= 0)
    {
        cerr << "Failed to send data over socket" << endl;
    }

    if (receive)
    {
        char buffer[16384] = {0};
        ssize_t bytesRead = 0;
        string response;
        bytesRead = recv(sock, buffer, sizeof(buffer), 0);
        string str(buffer, bytesRead);
        vector<uint8_t> vec(str.begin(), str.end());
        OctetsStream os(vec);
        cout << bytesToHexString(os.data) << endl;
        int opcode = os.uncompact_uint32();
        int size = os.uncompact_uint32();
        short protocol = os.readInt16();
        os.data.resize(size + 4);
        if (removeHeaders)
        {
            auto sz = opcode << size << protocol;
            os.data.erase(os.data.begin(), os.data.begin() + sizeof(sz));
        }

        return os;
    }
    close(sock);
    return OctetsStream();
}

OctetsStream SendGetGameAttributes(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opGMGetGameAttri);
    OctetsStream res = SendPacket(Session::getInstance().gdeliveryd_ip, Session::getInstance().gdeliveryd_port, os, true, false);
    return res;
}

bool SendSetGameAttributes(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opGMSetGameAttri);
    SendPacket(Session::getInstance().gdeliveryd_ip, Session::getInstance().gdeliveryd_port, os);
    return true;
}

OctetsStream AutoLockGet(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opAutoLockGet);
    OctetsStream res = SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os, true, false);
    return res;
}

bool AutoLockSet(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opAutoLockSet);
    SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os);
    return true;
}

bool SendChatBroadcast(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opChatBroadcast);
    SendPacket(Session::getInstance().gdeliveryd_ip, Session::getInstance().gprovider_port, os);
    return true;
}

OctetsStream SendGetUserRoles(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opGetUserRoles);
    OctetsStream res = SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os, true, false);
    return res;
}

OctetsStream SendGetRole(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opGetRole);
    OctetsStream res = SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os, true, false);
    return res;
}

OctetsStream SendGetRoleData(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opGetRoleData);
    OctetsStream res = SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os, true, false);
    return res;
}

bool SendPutRoleData(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opPutRoleData);
    SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os);
    return true;
}

OctetsStream SendGetUserIdByRoleName(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opQueryUserRoles);
    OctetsStream res = SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os, true, false);
    return res;
}

bool SendDebugAddCash(Protocol value)
{
    OctetsStream arg(value);
    arg.Encode(opDebugAddCash);
    SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, arg);
    return true;
}

OctetsStream GetFactionDetail(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opGetFactionDetail);
    OctetsStream res = SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os, true, false);
    return res;
}

OctetsStream GetConsumeInfo(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opDBGetConsumeInfos);
    OctetsStream res = SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os, true, false);
    return res;
}

OctetsStream GetFactionList(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opDBRawRead);
    OctetsStream res = SendPacket(Session::getInstance().gamedbd_ip, Session::getInstance().gamedbd_port, os, true, false);
    return res;
}

OctetsStream ListOnlineUser(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opGMListOnlineUser);
    OctetsStream res = SendPacket(Session::getInstance().gdeliveryd_ip, Session::getInstance().gdeliveryd_port, os, true, false);
    return res;
}

bool SendBanRole(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opGMKickoutRole);
    SendPacket(Session::getInstance().gdeliveryd_ip, Session::getInstance().gdeliveryd_port, os);
    return true;
}

bool SendMail(Protocol value)
{
    OctetsStream os(value);
    os.Encode(opSysSendMail);
    SendPacket(Session::getInstance().gdeliveryd_ip, Session::getInstance().gdeliveryd_port, os);
    return true;
}

void RemoveItemFromPocket(GRoleData &data, int itemid, bool removeAll = false)
{
    if (!removeAll)
    {
        auto it = find_if(data.pocket.items.begin(), data.pocket.items.end(), [&](const GRoleInventory &obj)
                          { return obj.id == itemid; });
        if (it != data.pocket.items.end())
        {
            data.pocket.items.erase(it);
        }
    }
    else
    {
        auto new_end = remove_if(data.pocket.items.begin(), data.pocket.items.end(),
                                 [&](const GRoleInventory &obj)
                                 { return obj.id == itemid; });
        data.pocket.items.erase(new_end, data.pocket.items.end());
    }
}

bool FindItemInPocket(GRoleData &data, int itemid)
{
    auto it = find_if(data.pocket.items.begin(), data.pocket.items.end(), [&](const GRoleInventory &obj)
                      { return obj.id == itemid; });
    if (it != data.pocket.items.end())
    {
        return true;
    }
    return false;
}

string getCommandOutput(const char *cmd)
{
    cout << "Comando = " << cmd << endl;
    array<char, 128> buffer;
    string result;

    FILE *pipe = popen(cmd, "r"); // Abre o comando para leitura
    if (!pipe)
    {
        throw runtime_error("popen() failed!");
    }

    while (!feof(pipe))
    {
        if (fgets(buffer.data(), buffer.size(), pipe) != nullptr)
        {
            result += buffer.data();
        }
    }

    pclose(pipe);
    return result;
}

void DropCaches()
{
    getCommandOutput("echo 1 > /proc/sys/vm/drop_caches");
}

void StartMap(std::string map_tag)
{
    std::string server_path = Session::getInstance().homepath;
    std::string logs_path = Session::getInstance().logpath;
    char buffer[100];
    sprintf(buffer, "cd %s/gamed; nohup ./gs %s > %s/%s.log &", server_path.c_str(), map_tag.c_str(), logs_path.c_str(), map_tag.c_str());
    getCommandOutput(buffer);
}

int GetMapPid(string map_tag)
{
    string str = getCommandOutput("ps -eo pid,pmem,pcpu,command");
    auto splited = split(str, '\n');
    for (int i = 0; i < splited.size() - 1; i++)
    {
        auto s = splited[i];
        int pid = stoi(s.substr(0, 7));
        string process_name = s.substr(16);
        auto s2 = split(process_name, ' ');
        if (s2.size() == 2)
        {
            if (s2[0] == "./gs")
            {
                if (s2[1] == map_tag)
                    return pid;
            }
        }
    }
}

int GetPid(string tag)
{
    string str = getCommandOutput("ps -eo pid,pmem,pcpu,command");
    auto splited = split(str, '\n');
    for (int i = 0; i < splited.size() - 1; i++)
    {
        auto s = splited[i];
        int pid = stoi(s.substr(0, 7));
        string process_name = s.substr(16);
        auto s2 = split(process_name, ' ');
        if (s2.size() == 2)
        {
            if (s2[0] == tag)
            {
                return pid;
            }
        }
    }
}

void KillService(string service)
{
    int pid = GetMapPid(service);
    char cmd[100];
    sprintf(cmd, "kill -9 %d", pid);
    getCommandOutput(cmd);
}

void KillService2(string service)
{
    int pid = GetPid(service);
    char cmd[256];
    getCommandOutput(cmd);
}

bool CheckGM(int roleid)
{
    char buffer[4080];
    sprintf(buffer, "mysql -h%s -u%s -p%s -D%s -e\"SELECT userid FROM auth WHERE rid = 104\"", Session::getInstance().mysql_host.c_str(), Session::getInstance().mysql_user.c_str(), Session::getInstance().mysql_pass.c_str(), Session::getInstance().mysql_base.c_str());
    string str = getCommandOutput(buffer);
    auto splited = split(str, '\n');
    for (int i = 1; i < splited.size(); i++)
    {
        auto id = stoi(splited[i]);
        if (id == roleid)
            return true;
    }
    return false;
}

struct GM
{
    int id;
    string name;
    int rules;
};

struct User
{
public:
    int id;
    string user;
    string prompt;
    string answer;
    string name;
    string email;
    string mobilenumber;
    int gender;
    string birthday;
    string ip;
    string created;
    string isOnline;

    void marshal(OctetsStream &os)
    {
        os << id;
        os.writeName(user);
        os.writeName(prompt);
        os.writeName(answer);
        os.writeName(name);
        os.writeName(email);
        os.writeName(mobilenumber);
        os << gender;
        os.writeName(birthday);
        os.writeName(ip);
        os.writeName(created);
        os.writeName(isOnline);
    }
};

struct Memory
{
public:
    int memory_total = 0;
    int memory_used = 0;
    int swap_total = 0;
    int swap_used = 0;

    void marshal(OctetsStream &os)
    {
        os << memory_total;
        os << memory_used;
        os << swap_total;
        os << swap_used;
    }
};

struct Processes
{
public:
    int pid = 0;
    int processCount = 0;
    string processName = "";
    string processDir = "";
    string processFileName = "";
    string processParams = "";
    string processStart = "";
    string processKill = "";
    int serverProcess = 0;
    int startSleep = 0;
    int stopSleep = 0;
    float mem = 0.0f;
    float cpu = 0.0f;

    void marshal(OctetsStream &os)
    {
        os << pid;
        os << processCount;
        os.writeName(processName);
        os.writeName(processDir);
        os.writeName(processFileName);
        os.writeName(processParams);
        os.writeName(processStart);
        os.writeName(processKill);
        os << serverProcess;
        os << startSleep;
        os << stopSleep;
        os << mem;
        os << cpu;
    }
};

struct MapInstances
{
    string map_tag;
    string map_name;

    void marshal(OctetsStream &os)
    {
        os.writeName(map_tag);
        os.writeName(map_name);
    }
};

Memory GetMemory()
{
    Memory m;
    FILE *stream = popen("free -m", "r");
    if (!stream)
    {
        cerr << "Failed to run command\n";
        return Memory();
    }

    char buffer[256];
    string result;
    while (fgets(buffer, sizeof(buffer), stream) != nullptr)
    {
        result += buffer;
    }
    pclose(stream);

    stringstream ss(result);
    string line;

    while (getline(ss, line))
    {
        if (line.find("Mem:") != string::npos)
        {
            stringstream lineStream(line);
            string temp;
            int total, used;

            lineStream >> temp >> total >> used;
            m.memory_total = total;
            m.memory_used = used;
        }
        if (line.find("Swap:") != string::npos)
        {
            stringstream lineStream(line);
            string temp;
            int swap_total, swap_used;

            lineStream >> temp >> swap_total >> swap_used;
            m.swap_total = swap_total;
            m.swap_used = swap_used;
        }
    }
    return m;
}

void GetProcessPidMemCpu(Processes &proc)
{
    const char *cmd = "ps -eo pid,pmem,pcpu,command";
    FILE *stream = popen(cmd, "r");

    if (!stream)
    {
        cerr << "Failed to run command\n";
    }
    char buffer[1024];
    bool skipHeader = false; // To skip the header line

    while (fgets(buffer, sizeof(buffer), stream) != nullptr)
    {
        if (skipHeader)
        {
            skipHeader = false;
            continue;
        }
        stringstream ss(buffer);
        int pid;
        float mem, cpu;
        string name;
        ss >> pid >> mem >> cpu;
        getline(ss, name);
        if (name.find(proc.processFileName.substr(0, proc.processFileName.length() - 1)) != string::npos)
        {
            proc.pid = pid;
            proc.mem = mem;
            proc.cpu = cpu;
            proc.processStart = name;
        }
    }

    pclose(stream);
}

vector<Processes> GetMapProcesses()
{
    FILE *stream = popen("ps -eo pid,pmem,pcpu,command | grep ./gs", "r");
    if (!stream)
    {
        cerr << "Failed to run command\n";
    }
    char buffer[1024];
    bool skipHeader = false; // To skip the header line
    vector<Processes> listProcesses;
    while (fgets(buffer, sizeof(buffer), stream) != nullptr)
    {
        if (skipHeader)
        {
            skipHeader = false;
            continue;
        }
        stringstream ss(buffer);
        int pid;
        float mem, cpu;
        string name;
        ss >> pid >> mem >> cpu;
        getline(ss, name);
        Processes proc;
        proc.pid = pid;
        proc.mem = mem;
        proc.cpu = cpu;
        proc.processParams = name;
        listProcesses.push_back(proc);
    }
    pclose(stream);
    return listProcesses;
}

vector<Processes> GetProcesses()
{
    const char *cmd = "ps -eo pid,pmem,pcpu,command";
    FILE *stream = popen(cmd, "r");

    if (!stream)
    {
        cerr << "Failed to run command\n";
        return vector<Processes>();
    }

    vector<Processes> processes;
    char buffer[1024];
    bool skipHeader = false; // To skip the header line

    while (fgets(buffer, sizeof(buffer), stream) != nullptr)
    {
        if (skipHeader)
        {
            skipHeader = false;
            continue;
        }
        Processes p;
        stringstream ss(buffer);
        ss >> p.pid >> p.mem >> p.cpu;
        getline(ss, p.processName);

        processes.push_back(p);
    }

    pclose(stream);
    return processes;
}

vector<MapInstances> ReadInstances()
{
    ifstream file("instance.txt");
    if (!file.is_open())
    {
        pmensagem(RED, "Não foi possível abrir o arquivo instance.txt");
        return vector<MapInstances>();
    }

    vector<MapInstances> instances;
    string line;

    while (getline(file, line))
    {
        stringstream ss(line);
        string tag, name;

        getline(ss, tag, '='); // L�� at�� o delimitador '='
        getline(ss, name);     // L�� o restante da linha

        instances.push_back({tag, name});
    }

    file.close();
    return instances;
}

vector<Processes> GetProcessesConfig()
{
    vector<Processes> processes;
    // Load the INI file
    dictionary *ini = iniparser_load("processes_config.ini");

    if (!ini)
    {
        pmensagem(RED, "Erro ao carregar processes_config.ini");
        return processes;
    }

    int nsec = iniparser_getnsec(ini);
    for (int i = 0; i < nsec; i++)
    {        
        Processes p;
        const char *secname = iniparser_getsecname(ini, i);
        p.processName = secname;
        int keynum = iniparser_getsecnkeys(ini, secname);
        const char *keys[keynum];
        iniparser_getseckeys(ini, secname, keys);
        for (int j = 0; j < keynum; j++)
        {
            const char *key = split(keys[j], ':')[1].c_str();
            const char *value = iniparser_getstring(ini, keys[j], "");

            try
            {
                char buffer[100];
                sprintf(buffer, "%s:%s", secname, "processdir");
                p.processDir = iniparser_getstring(ini, buffer, "");
                sprintf(buffer, "%s:%s", secname, "processfilename");
                p.processFileName = iniparser_getstring(ini, buffer, "");
                sprintf(buffer, "%s:%s", secname, "processkill");
                p.processKill = iniparser_getstring(ini, buffer, "");
                sprintf(buffer, "%s:%s", secname, "processparams");
                p.processParams =iniparser_getstring(ini, buffer, "");
                sprintf(buffer, "%s:%s", secname, "processstart");
                p.processStart = iniparser_getstring(ini, buffer, "");
                sprintf(buffer, "%s:%s", secname, "serverprocess");
                p.serverProcess = iniparser_getint(ini, buffer, 0);
                sprintf(buffer, "%s:%s", secname, "startsleep");
                p.startSleep = iniparser_getint(ini, buffer, 2);
                sprintf(buffer, "%s:%s", secname, "stopsleep");
                p.stopSleep = iniparser_getint(ini, buffer, 1);
            }
            catch (exception e)
            {
                pmensagem(RED, e.what());
            }
        }        
        processes.push_back(p);
    }
    iniparser_freedict(ini);
    
    return processes;
}

vector<User> GetUserList(const char *cmd)
{
    vector<User> users;
    FILE *stream = popen(cmd, "r");
    if (!stream)
    {
        cerr << "Failed to run command\n";
    }
    char buffer[1024];
    bool skipHeader = true;
    while (fgets(buffer, sizeof(buffer), stream) != nullptr)
    {
        if (skipHeader)
        {
            skipHeader = false;
            continue;
        }
        stringstream iss(buffer);
        User record;
        string str = iss.str();
        auto splited = split(str, '\t');
        record.id = stoi(splited[0]);
        record.user = splited[1];
        record.prompt = splited[2];
        record.answer = splited[3];
        record.name = splited[4];
        record.email = splited[5];
        record.mobilenumber = splited[6];
        record.gender = stoi(splited[7]);
        record.birthday = splited[8];
        record.ip = splited[9];
        record.created = splited[10];
        record.isOnline = splited[11];
        users.push_back(record);
    }
    pclose(stream);
    return users;
}

int GetUserCount(const char *cmd)
{
    FILE *stream = popen(cmd, "r");
    if (!stream)
    {
        cerr << "Failed to run command\n";
    }
    char buffer[1024];
    bool skipHeader = true;
    int value = 0;
    while (fgets(buffer, sizeof(buffer), stream) != nullptr)
    {
        if (skipHeader)
        {
            skipHeader = false;
            continue;
        }
        stringstream ss(buffer);
        value = stoi(ss.str());
    }
    pclose(stream);
    return value;
}

vector<GM> GetGMCount(const char *cmd)
{
    vector<GM> gms;
    FILE *stream = popen(cmd, "r");
    if (!stream)
    {
        cerr << "Failed to run command\n";
    }
    char buffer[1024];
    bool skipHeader = true;
    int value = 0;
    while (fgets(buffer, sizeof(buffer), stream) != nullptr)
    {
        GM gm;
        if (skipHeader)
        {
            skipHeader = false;
            continue;
        }
        stringstream ss(buffer);
        int id, rules;
        ss >> gm.id >> gm.name >> gm.rules;
        gms.push_back(gm);
    }
    pclose(stream);
    return gms;
}

vector<int> GetGMPrivileges(const char *cmd)
{
    vector<int> privileges;
    FILE *stream = popen(cmd, "r");
    if (!stream)
    {
        cerr << "Failed to run command\n";
    }
    char buffer[1024];
    bool skipHeader = true;
    int value = 0;
    while (fgets(buffer, sizeof(buffer), stream) != nullptr)
    {
        if (skipHeader)
        {
            skipHeader = false;
            continue;
        }
        stringstream ss(buffer);
        int privilege;
        ss >> privilege;
        privileges.push_back(privilege);
    }
    pclose(stream);
    return privileges;
}

#endif