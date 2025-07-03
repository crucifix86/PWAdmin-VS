using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using pwAdmin.Forms.Gerenciador;
using pwAdmin.Forms.ItemEditor;

namespace pwAdmin
{
    public partial class Main : Form
    {
        private static bool debugMode;
        
        // Static properties needed by other parts of the application
        public static dynamic eLC { get; set; }
        public static dynamic skills { get; set; }
        public static string locale { get; set; }
        public static Main mainWindow { get; set; }
        public static List<dynamic> addonsList { get; set; }
        public static dynamic skill_info { get; set; }
        public static dynamic descricao { get; set; }
        public static dynamic addons { get; set; }
        public static dynamic info { get; set; }
        public static RichTextBox txtLog { get; set; }
        public static dynamic listItemDesc { get; set; }
        
        // Method to get image from resources
        public static Bitmap images(string filename)
        {
            // This method should load images from resources or file system
            // For now, return a default blank image
            return Properties.Resources.blank.ToBitmap();
        }
        
        public Main()
        {
            InitializeComponent();
            mainWindow = this;
            InitializeApplication();
        }

        private void InitializeApplication()
        {
            // Update status
            UpdateStatus("Initializing...");
            
            // Check if settings are configured
            if (string.IsNullOrEmpty(Settings.Default.ElementsPath))
            {
                MessageBox.Show("Please configure the application settings first.\n\nGo to File → Settings to set up server connection, database, and client paths.", 
                    "Configuration Required", MessageBoxButtons.OK, MessageBoxIcon.Information);
                UpdateStatus("Not Configured - Please go to File → Settings");
                return;
            }
            
            // Try to load elements.data
            try
            {
                if (System.IO.File.Exists(Settings.Default.ElementsPath))
                {
                    UpdateStatus("Loading elements.data...");
                    // TODO: Load elements.data using eListCollection
                    // eLC = new eListCollection();
                    // eLC.Load(Settings.Default.ElementsPath);
                    
                    MessageBox.Show("Elements data loading not yet implemented.", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
                else
                {
                    MessageBox.Show($"Elements.data file not found at:\n{Settings.Default.ElementsPath}\n\nPlease check your settings.", 
                        "File Not Found", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error loading elements.data:\n{ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            
            // Test server connection if configured
            if (!string.IsNullOrEmpty(Settings.Default.ipservidor))
            {
                UpdateStatus($"Connecting to server {Settings.Default.ipservidor}:{Settings.Default.portaservidor}...");
                try
                {
                    if (Comandos.TestServerConnection())
                    {
                        UpdateStatus($"Connected to {Settings.Default.ipservidor}:{Settings.Default.portaservidor}");
                    }
                    else
                    {
                        UpdateStatus("Server Offline");
                    }
                }
                catch (Exception ex)
                {
                    UpdateStatus("Connection Failed");
                    MessageBox.Show($"Failed to connect to server:\n{ex.Message}", "Connection Error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                }
            }
            else
            {
                UpdateStatus("No Server Configured");
            }
        }

        private void UpdateStatus(string message)
        {
            if (toolStripStatusLabel1 != null)
            {
                toolStripStatusLabel1.Text = message;
                Application.DoEvents(); // Force UI update
            }
        }

        public static bool isDebug() { return debugMode; }

        public static Image GetImageSkill(int skillId)
        {
            // Placeholder implementation - should be implemented based on actual requirements
            // This method should load skill images from resources or files
            return null;
        }

        // Menu event handlers
        private void settingsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            SettingsForm form = new SettingsForm();
            form.ShowDialog();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void accountInfoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // AccountInfo requires a Conta object - show message for now
            MessageBox.Show("Account Info requires selecting an account first.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void gMControlToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // GMControl requires a userid - for now just show a message
            MessageBox.Show("GM Control requires selecting a user ID first.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void mapsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Mapas form = new Mapas();
            form.ShowDialog();
        }

        private void weaponEditorToolStripMenuItem_Click(object sender, EventArgs e)
        {
            WeaponOctetsEditor form = new WeaponOctetsEditor();
            form.ShowDialog();
        }

        private void addonsListToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // AddonsList requires a WeaponOctetsEditor instance
            MessageBox.Show("Addons List should be opened from within the Weapon Editor.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void skillByClassToolStripMenuItem_Click(object sender, EventArgs e)
        {
            SkillByClass form = new SkillByClass();
            form.ShowDialog();
        }
    }
}
