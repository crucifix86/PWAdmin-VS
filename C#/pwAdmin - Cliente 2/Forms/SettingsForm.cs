using System;
using System.Windows.Forms;
using pwAdmin.Properties;
using pwAdmin.MySQL;

namespace pwAdmin
{
    public partial class SettingsForm : Form
    {
        public SettingsForm()
        {
            InitializeComponent();
            LoadSettings();
        }

        private void LoadSettings()
        {
            // Load from our simple text file
            Utils.SimpleSettings.Load();
            
            // Server settings
            txtServerIP.Text = Utils.SimpleSettings.ServerIP;
            nudServerPort.Value = Utils.SimpleSettings.ServerPort;
            
            // Database settings
            txtDBHost.Text = Settings.Default.ip;
            nudDBPort.Value = Settings.Default.porta > 0 ? Settings.Default.porta : 3306;
            txtDBName.Text = Settings.Default.db;
            txtDBUser.Text = Settings.Default.login;
            txtDBPassword.Text = Settings.Default.senha;
            
            // PCK Keys
            txtKey1.Text = Settings.Default.key1;
            txtKey2.Text = Settings.Default.key2;
            
            // Client paths
            txtClientPath.Text = Settings.Default.ClientPath;
            txtElementsPath.Text = Settings.Default.ElementsPath;
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            try
            {
                Utils.Logger.Log($"=== btnSave_Click started ===");
                Utils.Logger.Log($"IP from textbox: '{txtServerIP.Text}'");
                Utils.Logger.Log($"Port from numeric: {nudServerPort.Value}");
                
                // Save server settings to our simple text file
                try
                {
                    Utils.SimpleSettings.Save(txtServerIP.Text.Trim(), (int)nudServerPort.Value);
                    
                    // Only show debug message if save succeeded
                    MessageBox.Show($"Server settings saved successfully!\n\nFile saved at:\n{Utils.SimpleSettings.GetSettingsPath()}\n\nSaved values:\nIP: {txtServerIP.Text.Trim()}\nPort: {nudServerPort.Value}", 
                        "Save Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
                catch (Exception saveEx)
                {
                    // Don't continue if the save failed
                    Utils.Logger.LogError("SimpleSettings.Save failed in btnSave_Click", saveEx);
                    return;
                }
                
                // Still save to Settings for backwards compatibility
                Settings.Default.ipservidor = txtServerIP.Text;
                Settings.Default.portaservidor = (int)nudServerPort.Value;
            
            // Save database settings
            Settings.Default.ip = txtDBHost.Text;
            Settings.Default.porta = (int)nudDBPort.Value;
            Settings.Default.db = txtDBName.Text;
            Settings.Default.login = txtDBUser.Text;
            Settings.Default.senha = txtDBPassword.Text;
            
            // Save PCK keys
            Settings.Default.key1 = txtKey1.Text;
            Settings.Default.key2 = txtKey2.Text;
            
            // Save client paths
            if (!string.IsNullOrEmpty(txtClientPath.Text))
            {
                Settings.Default.ClientPath = txtClientPath.Text;
            }
            
            if (!string.IsNullOrEmpty(txtElementsPath.Text))
            {
                Settings.Default.ElementsPath = txtElementsPath.Text;
            }
            
            Settings.Default.Save();
            MessageBox.Show("Settings saved successfully!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            catch (Exception ex)
            {
                Utils.Logger.LogError("Error in btnSave_Click", ex);
                MessageBox.Show($"Error saving settings: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btnTestServerConnection_Click(object sender, EventArgs e)
        {
            try
            {
                // Validate inputs
                if (string.IsNullOrWhiteSpace(txtServerIP.Text))
                {
                    MessageBox.Show("Please enter a server IP address.", "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                    return;
                }
                
                // Save to our simple text file first
                Utils.SimpleSettings.Save(txtServerIP.Text.Trim(), (int)nudServerPort.Value);
                
                // Show what we saved
                MessageBox.Show($"Settings saved to: {Utils.SimpleSettings.GetSettingsPath()}\n\nSaved values:\nIP: {Utils.SimpleSettings.ServerIP}\nPort: {Utils.SimpleSettings.ServerPort}\n\nNow testing connection...", 
                    "Simple Settings", MessageBoxButtons.OK, MessageBoxIcon.Information);
                
                // Test using the saved values
                var result = Comandos.TestDirectConnection(Utils.SimpleSettings.ServerIP, Utils.SimpleSettings.ServerPort);
                
                // Also try the regular test
                if (result)
                {
                    Utils.Logger.Log("TestDirectConnection succeeded, now trying TestServerConnection...");
                    var mainResult = Comandos.TestServerConnection();
                    Utils.Logger.Log($"TestServerConnection result: {mainResult}");
                }
                
                // Get the detailed log
                var log = Comandos.LastConnectionError;
                
                if (result)
                {
                    MessageBox.Show($"Server connection successful!\n\nDetails:\n{log}\n\nFull log saved to:\n{Utils.Logger.GetLogPath()}", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
                else
                {
                    MessageBox.Show($"Failed to connect to server.\n\nConnection Log:\n{log}\n\nFull log saved to:\n{Utils.Logger.GetLogPath()}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Connection error: {ex.Message}\n\nStack trace:\n{ex.StackTrace}\n\nDetailed log:\n{Comandos.LastConnectionError}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnTestDBConnection_Click(object sender, EventArgs e)
        {
            try
            {
                // Update settings temporarily for test
                Settings.Default.ip = txtDBHost.Text;
                Settings.Default.porta = (int)nudDBPort.Value;
                Settings.Default.db = txtDBName.Text;
                Settings.Default.login = txtDBUser.Text;
                Settings.Default.senha = txtDBPassword.Text;
                
                Connection conn = new Connection();
                conn.TestaConexão();
                
                MessageBox.Show("Database connection successful!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Database connection error: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnBrowseClient_Click(object sender, EventArgs e)
        {
            using (FolderBrowserDialog dialog = new FolderBrowserDialog())
            {
                dialog.Description = "Select Perfect World client folder";
                if (dialog.ShowDialog() == DialogResult.OK)
                {
                    txtClientPath.Text = dialog.SelectedPath;
                }
            }
        }

        private void btnBrowseElements_Click(object sender, EventArgs e)
        {
            using (OpenFileDialog dialog = new OpenFileDialog())
            {
                dialog.Filter = "Elements data file|elements.data|All files|*.*";
                dialog.Title = "Select elements.data file";
                if (dialog.ShowDialog() == DialogResult.OK)
                {
                    txtElementsPath.Text = dialog.FileName;
                }
            }
        }
    }
}