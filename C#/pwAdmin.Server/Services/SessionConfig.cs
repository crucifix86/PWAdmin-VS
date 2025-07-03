using System;
using System.Collections.Generic;
using System.IO;
using IniParser;
using IniParser.Model;

namespace pwAdmin.Server.Services
{
    public class SessionConfig
    {
        private IniData _config;

        // General settings
        public string ServName { get; set; } = "Local";
        public string Password { get; set; } = "";
        public int Port { get; set; } = 630;
        public string HomePath { get; set; } = "/root/pwserver";
        public string GsName { get; set; } = "gs";
        public string GsConfPath { get; set; } = "$HOME$gamed/gs.conf";
        public string GsPath { get; set; } = "$HOME$gamed";
        public int Aid { get; set; } = 1;
        public int ZoneId { get; set; } = 1;
        public int ServId { get; set; } = 1;
        public string DefaultIcon { get; set; } = "0_0.dds";
        public int LogRowCount { get; set; } = 150;
        public string LogPath { get; set; } = "$HOME$logs";
        public int ServerVersion { get; set; } = 156;
        public string PidFile { get; set; } = "/var/run/pwadmin.pid";
        public int PauseStartInstanceFixed { get; set; } = 5;
        public int PauseStartPerInstance { get; set; } = 2;
        public int MaxChatRow { get; set; } = 200;
        public int MaxFormatLogRow { get; set; } = 200;
        public int MaxWorld2LogRow { get; set; } = 400;
        public int AuthDType { get; set; } = 0;
        public string ShellAdd { get; set; } = "nohup %s";
        public string GameBackupPath { get; set; } = "$HOME$backup";
        public string MysqlBackupPath { get; set; } = "$HOME$backup";
        public int MysqlBackupType { get; set; } = 1;

        // MySQL settings
        public string MysqlUser { get; set; } = "root";
        public string MysqlPass { get; set; } = "";
        public int MysqlPort { get; set; } = 3306;
        public string MysqlBase { get; set; } = "pw";
        public string MysqlHost { get; set; } = "127.0.0.1";

        // Server connections
        public string GDeliveryIp { get; set; } = "127.0.0.1";
        public int GDeliveryPort { get; set; } = 29100;
        public int GProviderPort { get; set; } = 29300;
        public string GameDbdIp { get; set; } = "127.0.0.1";
        public int GameDbdPort { get; set; } = 29400;
        public string UniquenamedIp { get; set; } = "127.0.0.1";
        public int UniquenamedPort { get; set; } = 29401;

        public bool IsConfigValid { get; private set; }
        
        public SessionConfig()
        {
            IsConfigValid = LoadConfig();
        }

        public bool LoadConfig()
        {
            try
            {
                const string configFile = "pwadmin.conf";
                
                // Check if config file exists
                if (!File.Exists(configFile))
                {
                    Console.WriteLine($"Configuration file '{configFile}' not found!");
                    Console.WriteLine("Creating default configuration file...");
                    CreateDefaultConfigFile(configFile);
                    Console.WriteLine($"Please edit '{configFile}' with your server settings and restart.");
                    return false;
                }
                
                var parser = new FileIniDataParser();
                _config = parser.ReadFile(configFile);

                // General section
                ServName = GetString("General", "servname", ServName);
                Password = GetString("General", "password", Password);
                Port = GetInt("General", "port", Port);
                HomePath = GetString("General", "homepath", HomePath);
                GsName = GetString("General", "gs_name", GsName);
                GsConfPath = GetString("General", "gs_conf_path", GsConfPath);
                GsPath = GetString("General", "gs_path", GsPath);
                Aid = GetInt("General", "aid", Aid);
                ZoneId = GetInt("General", "zoneid", ZoneId);
                ServId = GetInt("General", "servid", ServId);
                DefaultIcon = GetString("General", "default_icon", DefaultIcon);
                LogRowCount = GetInt("General", "log_row_count", LogRowCount);
                LogPath = GetString("General", "logpath", LogPath);
                ServerVersion = GetInt("General", "ServerVersion", ServerVersion);
                PidFile = GetString("General", "pidfile", PidFile);
                PauseStartInstanceFixed = GetInt("General", "PauseStartInstanceFixed", PauseStartInstanceFixed);
                PauseStartPerInstance = GetInt("General", "PauseStartPerInstance", PauseStartPerInstance);
                MaxChatRow = GetInt("General", "MaxChatRow", MaxChatRow);
                MaxFormatLogRow = GetInt("General", "MaxFormatLogRow", MaxFormatLogRow);
                MaxWorld2LogRow = GetInt("General", "MaxWorld2LogRow", MaxWorld2LogRow);
                AuthDType = GetInt("General", "AuthDType", AuthDType);
                ShellAdd = GetString("General", "ShellAdd", ShellAdd);
                GameBackupPath = GetString("General", "GameBackupPath", GameBackupPath);
                MysqlBackupPath = GetString("General", "MysqlBackupPath", MysqlBackupPath);
                MysqlBackupType = GetInt("General", "MysqlBackupType", MysqlBackupType);

                // MySQL section
                MysqlUser = GetString("Mysql", "user", MysqlUser);
                MysqlPass = GetString("Mysql", "pass", MysqlPass);
                MysqlPort = GetInt("Mysql", "port", MysqlPort);
                MysqlBase = GetString("Mysql", "base", MysqlBase);
                MysqlHost = GetString("Mysql", "host", MysqlHost);

                // GDelivery section
                GDeliveryIp = GetString("GDelivery", "ip", GDeliveryIp);
                GDeliveryPort = GetInt("GDelivery", "port", GDeliveryPort);
                GProviderPort = GetInt("GDelivery", "provider_port", GProviderPort);

                // GameDBD section
                GameDbdIp = GetString("GameDBD", "ip", GameDbdIp);
                GameDbdPort = GetInt("GameDBD", "port", GameDbdPort);

                // Uniquenamed section
                UniquenamedIp = GetString("Uniquenamed", "ip", UniquenamedIp);
                UniquenamedPort = GetInt("Uniquenamed", "port", UniquenamedPort);

                // Set environment variable
                Environment.SetEnvironmentVariable("HOME", HomePath);

                return true;
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error loading config file: {ex.Message}");
                return false;
            }
        }

        private string GetString(string section, string key, string defaultValue)
        {
            return _config[section][key] ?? defaultValue;
        }

        private int GetInt(string section, string key, int defaultValue)
        {
            var value = _config[section][key];
            return int.TryParse(value, out int result) ? result : defaultValue;
        }

        public string ResolvePath(string path)
        {
            return path.Replace("$HOME$", HomePath + "/");
        }
        
        private void CreateDefaultConfigFile(string filename)
        {
            var defaultConfig = @"[General]
servname = YourServerName
password = 
port = 630
homepath = /home/pwserver
gs_name = gs
gs_conf_path = $HOME$gamed/gs.conf
gs_path = $HOME$gamed
aid = 1
zoneid = 1
servid = 1
default_icon = 0_0.dds
log_row_count = 150
logpath = $HOME$logs
ServerVersion = 156
pidfile = /var/run/pwadmin.pid
PauseStartInstanceFixed = 5
PauseStartPerInstance = 2
MaxChatRow = 200
MaxFormatLogRow = 200
MaxWorld2LogRow = 400
AuthDType = 0
ShellAdd = nohup %s
GameBackupPath = $HOME$backup
MysqlBackupPath = $HOME$backup
MysqlBackupType = 1

[Mysql]
user = root
pass = yourpassword
port = 3306
base = pw
host = 127.0.0.1

[GDelivery]
ip = 127.0.0.1
port = 29100
provider_port = 29300

[GameDBD]
ip = 127.0.0.1
port = 29400

[Uniquenamed]
ip = 127.0.0.1
port = 29401
";
            File.WriteAllText(filename, defaultConfig);
        }
    }
}