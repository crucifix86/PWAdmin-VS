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
                
                var dir = Path.GetDirectoryName(_settingsPath);
                Logger.Log($"Directory: {dir}");
                Logger.Log($"Directory exists: {Directory.Exists(dir)}");
                
                // Try to write using a more robust approach
                var content = $"{ip}|{port}";
                Logger.Log($"Writing content: '{content}'");
                
                // First try to delete the old file if it exists
                if (File.Exists(_settingsPath))
                {
                    Logger.Log("Deleting existing file...");
                    File.Delete(_settingsPath);
                }
                
                // Write the new content
                using (var writer = new StreamWriter(_settingsPath, false))
                {
                    writer.Write(content);
                    writer.Flush();
                }
                
                // Force a refresh of file system cache
                System.Threading.Thread.Sleep(100);
                
                // Verify file was created and has correct content
                if (File.Exists(_settingsPath))
                {
                    var readBack = File.ReadAllText(_settingsPath);
                    Logger.Log($"SUCCESS: File saved. Read back: '{readBack}'");
                    
                    if (readBack == content)
                    {
                        Logger.Log("Verification: Content matches!");
                        ServerIP = ip;
                        ServerPort = port;
                    }
                    else
                    {
                        Logger.Log($"ERROR: Content mismatch! Expected '{content}' but got '{readBack}'");
                        throw new Exception($"File content verification failed. Expected '{content}' but got '{readBack}'");
                    }
                }
                else
                {
                    Logger.Log("ERROR: File was not created!");
                    throw new Exception("File was not created after write attempt");
                }
            }
            catch (Exception ex)
            {
                Logger.LogError("Failed to save settings", ex);
                MessageBox.Show($"Failed to save settings:\n{ex.Message}\n\nPath: {_settingsPath}\n\nStack trace:\n{ex.StackTrace}", "Save Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                throw; // Re-throw so caller knows it failed
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