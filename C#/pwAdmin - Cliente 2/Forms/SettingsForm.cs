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
            // Server settings
            txtServerIP.Text = Settings.Default.ipservidor;
            nudServerPort.Value = Settings.Default.portaservidor > 0 ? Settings.Default.portaservidor : 630;
            
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
            // Save server settings
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
                
                // Debug: Show what we're about to save
                MessageBox.Show($"About to test connection with:\nIP: {txtServerIP.Text}\nPort: {nudServerPort.Value}\n\nCurrent Settings:\nipservidor: '{Settings.Default.ipservidor}'\nportaservidor: {Settings.Default.portaservidor}", 
                    "Debug Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
                
                // Save current form values to settings first
                Settings.Default.ipservidor = txtServerIP.Text.Trim();
                Settings.Default.portaservidor = (int)nudServerPort.Value;
                Settings.Default.Save();
                
                // Force reload from settings
                Comandos.ReloadSettings();
                
                // Update connection settings before testing
                Comandos.ip = txtServerIP.Text.Trim();
                Comandos.port = (int)nudServerPort.Value;
                
                Utils.Logger.Log($"Test connection button clicked - IP: '{Comandos.ip}', Port: {Comandos.port}");
                Utils.Logger.Log($"Settings values - ipservidor: '{Settings.Default.ipservidor}', portaservidor: {Settings.Default.portaservidor}");
                
                // Test server connection
                var result = Comandos.TestServerConnection();
                
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