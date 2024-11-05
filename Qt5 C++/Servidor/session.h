#ifndef SESSION_H
#define SESSION_H

extern "C"
{
#include "iniparser.h"
}

#include <string>
#include <iostream>
using namespace std;

class Session
{
public:
    static Session &getInstance()
    {
        static Session instance;
        return instance;
    }
    Session(Session const &) = delete;
    void operator=(Session const &) = delete;

private:
    Session() {}

public:
    dictionary *config;

    // Functions
    string servname;
    string password;
    int port;
    string homepath;
    string gs_name;
    string gs_conf_path;
    string gs_path;
    int aid;
    int zoneid;
    int servid;
    string default_icon;
    int log_row_count;
    string logpath;
    int ServerVersion;
    string pidfile;
    int PauseStartInstanceFixed;
    int PauseStartPerInstance;
    int MaxChatRow;
    int MaxFormatLogRow;
    int MaxWorld2LogRow;
    int AuthDType;
    string ShellAdd;
    string GameBackupPath;
    string MysqlBackupPath;
    int MysqlBackupType;
    string mysql_user;
    string mysql_pass;
    int mysql_port;
    string mysql_base;
    string mysql_host;
    string gdeliveryd_ip;
    int gdeliveryd_port;
    int gprovider_port;
    string gamedbd_ip;
    int gamedbd_port;
    string uniquenamed_ip;
    int uniquenamed_port;

    bool ReadConfig()
    {
        config = iniparser_load("pwadmin.conf");
        if (config == NULL)
        {
            cerr << "Erro ao carregar o arquivo 'config.ini'" << endl;
            return false;
        }

        servname = iniparser_getstring(config, "General:servname", "Local");
        password = iniparser_getstring(config, "General:password", "");
        port = stoi(iniparser_getstring(config, "General:port", "600"));
        homepath = iniparser_getstring(config, "General:homepath", "/home");
        gs_name = iniparser_getstring(config, "General:gs_name", "gs");
        gs_conf_path = iniparser_getstring(config, "General:gs_conf_path", "$HOME$gamed/gs.conf");
        gs_path = iniparser_getstring(config, "General:gs_path", "$HOME$gamed");
        aid = stoi(iniparser_getstring(config, "General:aid", "1"));
        zoneid = stoi(iniparser_getstring(config, "General:zoneid", "1"));
        servid = stoi(iniparser_getstring(config, "General:servid", "1"));
        default_icon = iniparser_getstring(config, "General:default_icon", "0_0.dds");
        log_row_count = stoi(iniparser_getstring(config, "General:log_row_count", "150"));
        logpath = iniparser_getstring(config, "General:logpath", "$HOME$logs");
        ServerVersion = stoi(iniparser_getstring(config, "General:ServerVersion", "156"));
        pidfile = iniparser_getstring(config, "General:pidfile", "/var/run/pwadmin.pid");
        PauseStartInstanceFixed = stoi(iniparser_getstring(config, "General:PauseStartInstanceFixed", "5"));
        PauseStartPerInstance = stoi(iniparser_getstring(config, "General:PauseStartPerInstance", "2"));
        MaxChatRow = stoi(iniparser_getstring(config, "General:MaxChatRow", "200"));
        MaxFormatLogRow = stoi(iniparser_getstring(config, "General:MaxFormatLogRow", "200"));
        MaxWorld2LogRow = stoi(iniparser_getstring(config, "General:MaxWorld2LogRow", "400"));
        AuthDType = stoi(iniparser_getstring(config, "General:AuthDType", "0"));
        ShellAdd = iniparser_getstring(config, "General:ShellAdd", "nohup %s");
        GameBackupPath = iniparser_getstring(config, "General:GameBackupPath", "$HOME$backup");
        MysqlBackupPath = iniparser_getstring(config, "General:MysqlBackupPath", "$HOME$backup");
        MysqlBackupType = stoi(iniparser_getstring(config, "General:MysqlBackupType", "1"));
        mysql_user = iniparser_getstring(config, "Mysql:user", "root");
        mysql_pass = iniparser_getstring(config, "Mysql:pass", "");
        mysql_port = stoi(iniparser_getstring(config, "Mysql:port", "3306"));
        mysql_host = iniparser_getstring(config, "Mysql:host", "127.0.0.1");
        mysql_base = iniparser_getstring(config, "Mysql:base", "pw");
        gdeliveryd_ip = iniparser_getstring(config, "GDelivery:ip", "127.0.0.1");
        gdeliveryd_port = stoi(iniparser_getstring(config, "GDelivery:port", "29100"));
        gprovider_port = stoi(iniparser_getstring(config, "GDelivery:provider_port", "29300"));
        gamedbd_ip = iniparser_getstring(config, "GameDBD:ip", "127.0.0.1");
        gamedbd_port = stoi(iniparser_getstring(config, "GameDBD:port", "29400"));
        uniquenamed_ip = iniparser_getstring(config, "Uniquenamed:ip", "127.0.0.1");
        uniquenamed_port = stoi(iniparser_getstring(config, "Uniquenamed:port", "29401"));
        iniparser_freedict(config);
        return true;
    }
};

#endif