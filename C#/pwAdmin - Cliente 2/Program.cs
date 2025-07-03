using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;

namespace pwAdmin
{
    internal static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            
            // Load simple settings
            Utils.SimpleSettings.Load();
            
            // Log startup settings
            Utils.Logger.Log("=== Application Starting ===");
            Utils.Logger.Log($"SimpleSettings loaded - IP: '{Utils.SimpleSettings.ServerIP}', Port: {Utils.SimpleSettings.ServerPort}");
            Utils.Logger.Log($"Settings file: {Utils.SimpleSettings.GetSettingsPath()}");
            
            Application.Run(new MainForm());
        }
    }
}
