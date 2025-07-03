using System;
using System.IO;

namespace pwAdmin.Utils
{
    public static class SimpleSettings
    {
        private static string _settingsPath = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "connection.txt");
        
        public static string ServerIP { get; set; } = "127.0.0.1";
        public static int ServerPort { get; set; } = 630;
        
        public static void Save(string ip, int port)
        {
            try
            {
                var content = $"{ip}|{port}";
                File.WriteAllText(_settingsPath, content);
                
                ServerIP = ip;
                ServerPort = port;
                
                Logger.Log($"Settings saved to {_settingsPath}: IP={ip}, Port={port}");
            }
            catch (Exception ex)
            {
                Logger.LogError("Failed to save settings", ex);
            }
        }
        
        public static void Load()
        {
            try
            {
                if (File.Exists(_settingsPath))
                {
                    var content = File.ReadAllText(_settingsPath);
                    var parts = content.Split('|');
                    
                    if (parts.Length >= 2)
                    {
                        ServerIP = parts[0];
                        if (int.TryParse(parts[1], out int port))
                        {
                            ServerPort = port;
                        }
                        
                        Logger.Log($"Settings loaded from {_settingsPath}: IP={ServerIP}, Port={ServerPort}");
                    }
                }
                else
                {
                    Logger.Log($"No settings file found at {_settingsPath}, using defaults");
                }
            }
            catch (Exception ex)
            {
                Logger.LogError("Failed to load settings", ex);
            }
        }
        
        public static string GetSettingsPath()
        {
            return _settingsPath;
        }
    }
}