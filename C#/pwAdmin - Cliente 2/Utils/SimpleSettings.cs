using System;
using System.IO;
using System.Windows.Forms;

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
                Logger.Log($"SimpleSettings.Save called with IP='{ip}', Port={port}");
                Logger.Log($"Settings path: {_settingsPath}");
                Logger.Log($"Directory exists: {Directory.Exists(Path.GetDirectoryName(_settingsPath))}");
                
                var content = $"{ip}|{port}";
                Logger.Log($"Writing content: '{content}'");
                
                File.WriteAllText(_settingsPath, content);
                
                // Verify file was created
                if (File.Exists(_settingsPath))
                {
                    Logger.Log($"SUCCESS: File created at {_settingsPath}");
                    var readBack = File.ReadAllText(_settingsPath);
                    Logger.Log($"File contents: '{readBack}'");
                }
                else
                {
                    Logger.Log("ERROR: File was not created!");
                }
                
                ServerIP = ip;
                ServerPort = port;
                
                Logger.Log($"Settings saved to {_settingsPath}: IP={ip}, Port={port}");
            }
            catch (Exception ex)
            {
                Logger.LogError("Failed to save settings", ex);
                MessageBox.Show($"Failed to save settings:\n{ex.Message}\n\nPath: {_settingsPath}", "Save Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
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
                    Logger.Log($"No settings file found at {_settingsPath}, creating default file");
                    
                    // Create the file with default values
                    try
                    {
                        var defaultContent = $"{ServerIP}|{ServerPort}";
                        File.WriteAllText(_settingsPath, defaultContent);
                        Logger.Log($"Created default settings file at {_settingsPath}");
                        
                        // Verify it was created
                        if (File.Exists(_settingsPath))
                        {
                            Logger.Log("Default settings file created successfully");
                        }
                        else
                        {
                            Logger.Log("ERROR: Default settings file was not created!");
                        }
                    }
                    catch (Exception createEx)
                    {
                        Logger.LogError("Failed to create default settings file", createEx);
                    }
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