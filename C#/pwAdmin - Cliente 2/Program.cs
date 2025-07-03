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
            
            // Log startup settings
            Utils.Logger.Log("=== Application Starting ===");
            Utils.Logger.Log($"Settings - ipservidor: '{Properties.Settings.Default.ipservidor}'");
            Utils.Logger.Log($"Settings - portaservidor: {Properties.Settings.Default.portaservidor}");
            
            Application.Run(new MainForm());
        }
    }
}
