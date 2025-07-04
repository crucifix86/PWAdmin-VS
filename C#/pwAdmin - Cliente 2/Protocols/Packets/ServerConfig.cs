using GNET;
using GNET.Rpc;

namespace Protocols.Packets
{
    public class ServerConfig : GNET.Rpc.Data
    {
        public string ServName { get; set; } = "";
        public string Password { get; set; } = "";
        public int Port { get; set; } = 0;
        public string HomePath { get; set; } = "";
        public string GsName { get; set; } = "";
        public string GsConfPath { get; set; } = "";
        public string GsPath { get; set; } = "";
        public int Aid { get; set; } = 0;
        public int ZoneId { get; set; } = 0;
        public int ServId { get; set; } = 0;
        public string DefaultIcon { get; set; } = "";
        public int LogRowCount { get; set; } = 0;
        public string LogPath { get; set; } = "";
        public int ServerVersion { get; set; } = 0;
        public string PidFile { get; set; } = "";
        public int PauseStartInstanceFixed { get; set; } = 0;
        public int PauseStartPerInstance { get; set; } = 0;
        public int MaxChatRow { get; set; } = 0;
        public int MaxFormatLogRow { get; set; } = 0;
        public int MaxWorld2LogRow { get; set; } = 0;
        public int AuthDType { get; set; } = 0;
        public string ShellAdd { get; set; } = "";
        public string GameBackupPath { get; set; } = "";
        public string MysqlBackupPath { get; set; } = "";
        public int MysqlBackupType { get; set; } = 0;
        public string MysqlUser { get; set; } = "";
        public string MysqlPass { get; set; } = "";
        public int MysqlPort { get; set; } = 0;
        public string MysqlBase { get; set; } = "";
        public string MysqlHost { get; set; } = "";
        public string GDeliveryIp { get; set; } = "";
        public int GDeliveryPort { get; set; } = 0;
        public int GProviderPort { get; set; } = 0;
        public string GameDbdIp { get; set; } = "";
        public int GameDbdPort { get; set; } = 0;
        public string UniquenamedIp { get; set; } = "";
        public int UniquenamedPort { get; set; } = 0;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(ServName);
            os.marshal(Password);
            os.marshal(Port);
            os.marshal(HomePath);
            os.marshal(GsName);
            os.marshal(GsConfPath);
            os.marshal(GsPath);
            os.marshal(Aid);
            os.marshal(ZoneId);
            os.marshal(ServId);
            os.marshal(DefaultIcon);
            os.marshal(LogRowCount);
            os.marshal(LogPath);
            os.marshal(ServerVersion);
            os.marshal(PidFile);
            os.marshal(PauseStartInstanceFixed);
            os.marshal(PauseStartPerInstance);
            os.marshal(MaxChatRow);
            os.marshal(MaxFormatLogRow);
            os.marshal(MaxWorld2LogRow);
            os.marshal(AuthDType);
            os.marshal(ShellAdd);
            os.marshal(GameBackupPath);
            os.marshal(MysqlBackupPath);
            os.marshal(MysqlBackupType);
            os.marshal(MysqlUser);
            os.marshal(MysqlPass);
            os.marshal(MysqlPort);
            os.marshal(MysqlBase);
            os.marshal(MysqlHost);
            os.marshal(GDeliveryIp);
            os.marshal(GDeliveryPort);
            os.marshal(GProviderPort);
            os.marshal(GameDbdIp);
            os.marshal(GameDbdPort);
            os.marshal(UniquenamedIp);
            os.marshal(UniquenamedPort);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            // DO NOT skip any bytes - the data starts immediately after the header
            // The 0x02 we saw in the Python analysis was part of the complete response
            // but after the header is parsed, we're at the correct position
            
            // All strings use byte-length prefix in this response
            ServName = os.unmarshal_String_ByteLength();
            pwAdmin.Utils.Logger.Log($"Read ServName: '{ServName}', position: {os.Position}, remaining: {os.Remaining}");
            Password = os.unmarshal_String_ByteLength();
            Port = os.unmarshal_int();
            HomePath = os.unmarshal_String_ByteLength();
            GsName = os.unmarshal_String_ByteLength();
            GsConfPath = os.unmarshal_String_ByteLength();
            GsPath = os.unmarshal_String_ByteLength();
            Aid = os.unmarshal_int();
            ZoneId = os.unmarshal_int();
            ServId = os.unmarshal_int();
            DefaultIcon = os.unmarshal_String_ByteLength();
            LogRowCount = os.unmarshal_int();
            LogPath = os.unmarshal_String_ByteLength();
            ServerVersion = os.unmarshal_int();
            PidFile = os.unmarshal_String_ByteLength();
            PauseStartInstanceFixed = os.unmarshal_int();
            PauseStartPerInstance = os.unmarshal_int();
            MaxChatRow = os.unmarshal_int();
            MaxFormatLogRow = os.unmarshal_int();
            MaxWorld2LogRow = os.unmarshal_int();
            AuthDType = os.unmarshal_int();
            ShellAdd = os.unmarshal_String_ByteLength();
            GameBackupPath = os.unmarshal_String_ByteLength();
            MysqlBackupPath = os.unmarshal_String_ByteLength();
            MysqlBackupType = os.unmarshal_int();
            MysqlUser = os.unmarshal_String_ByteLength();
            MysqlPass = os.unmarshal_String_ByteLength();
            MysqlPort = os.unmarshal_int();
            MysqlBase = os.unmarshal_String_ByteLength();
            MysqlHost = os.unmarshal_String_ByteLength();
            GDeliveryIp = os.unmarshal_String_ByteLength();
            GDeliveryPort = os.unmarshal_int();
            GProviderPort = os.unmarshal_int();
            GameDbdIp = os.unmarshal_String_ByteLength();
            GameDbdPort = os.unmarshal_int();
            UniquenamedIp = os.unmarshal_String_ByteLength();
            UniquenamedPort = os.unmarshal_int();
            return os;
        }
    }
}