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
            nudServerPort.Value = Settings.Default.portaservidor > 0 ? Settings.Default.portaservidor : 29000;
            
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
                // Capture console output
                var originalOut = Console.Out;
                var stringWriter = new System.IO.StringWriter();
                Console.SetOut(stringWriter);
                
                // Test server connection
                var result = Comandos.TestServerConnection();
                
                // Restore console output
                Console.SetOut(originalOut);
                var log = stringWriter.ToString();
                
                if (result)
                {
                    MessageBox.Show($"Server connection successful!\n\nDetails:\n{log}", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
                else
                {
                    MessageBox.Show($"Failed to connect to server.\n\nConnection Log:\n{log}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
            catch (Exception ex)
            {
                Console.SetOut(Console.Out); // Ensure console is restored
                MessageBox.Show($"Connection error: {ex.Message}\n\nStack trace:\n{ex.StackTrace}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
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