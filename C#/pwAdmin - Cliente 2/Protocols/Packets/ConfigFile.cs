namespace Protocols.Packets
{
    public class ConfigFile
    {
        //[Geral];
        public string servername;
        public string password;
        public string port;
        public string server_path;
        public string log_path;
        public string backup_path;
        public string aid;
        public string zoneid;
        public string serverid;
        public string server_version;
        //[MySQL];
        public string mysql_user;
        public string mysql_password;
        public string mysql_host;
        public string mysql_port;
        public string mysql_db;
        //[
        //ryd];
        public string gdeliveryd_ip;
        public string gdeliveryd_port;
        public string provider_port;
        //[gamedbd];
        public string gamedbd_ip;
        public string gamedbd_port;
        //[uniquenamed];
        public string uniquenamed_ip;
        public string uniquenamed_port;
    }
}
