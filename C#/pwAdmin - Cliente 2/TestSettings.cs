using System;
using System.Windows.Forms;
using pwAdmin.Properties;

namespace pwAdmin
{
    public static class TestSettings
    {
        public static void ShowCurrentSettings()
        {
            var message = $"Current Settings:\n\n" +
                         $"ipservidor: '{Settings.Default.ipservidor}'\n" +
                         $"portaservidor: {Settings.Default.portaservidor}\n\n" +
                         $"If these are empty/0, the settings aren't being saved properly.";
            
            MessageBox.Show(message, "Current Settings", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        public static void TestSaveSettings(string ip, int port)
        {
            // Save
            Settings.Default.ipservidor = ip;
            Settings.Default.portaservidor = port;
            Settings.Default.Save();
            
            // Reload to verify
            Settings.Default.Reload();
            
            var message = $"Settings after save and reload:\n\n" +
                         $"ipservidor: '{Settings.Default.ipservidor}'\n" +
                         $"portaservidor: {Settings.Default.portaservidor}";
            
            MessageBox.Show(message, "Settings Test", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}