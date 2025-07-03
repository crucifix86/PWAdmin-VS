using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using pwAdmin.Properties;

namespace pwAdmin
{
    public partial class MainForm : Form
    {
        private Panel leftPanel;
        private Panel rightPanel;
        private Panel[] pages;
        private Button[] navButtons;
        private int currentPage = 0;
        
        // Static properties needed by other parts of the application
        public static dynamic eLC { get; set; }
        public static dynamic skills { get; set; }
        public static string locale { get; set; }
        public static MainForm mainWindow { get; set; }
        public static List<dynamic> addonsList { get; set; }
        public static dynamic skill_info { get; set; }
        public static dynamic descricao { get; set; }
        public static dynamic addons { get; set; }
        public static dynamic info { get; set; }
        public static RichTextBox txtLog { get; set; }
        public static dynamic listItemDesc { get; set; }
        
        public MainForm()
        {
            InitializeComponent();
            mainWindow = this;
            SetupTheme();
            CreatePages();
            ShowPage(0);
        }
        
        private void SetupTheme()
        {
            // Dark theme colors
            this.BackColor = Color.FromArgb(30, 30, 30);
            this.ForeColor = Color.White;
        }
        
        private void CreatePages()
        {
            // Create the three main pages
            pages = new Panel[3];
            
            // Page 1: Server Management
            pages[0] = CreateServerManagementPage();
            
            // Page 2: Account Management  
            pages[1] = CreateAccountManagementPage();
            
            // Page 3: Settings
            pages[2] = CreateSettingsPage();
            
            // Add all pages to right panel
            foreach (var page in pages)
            {
                page.Dock = DockStyle.Fill;
                page.Visible = false;
                rightPanel.Controls.Add(page);
            }
        }
        
        private Panel CreateServerManagementPage()
        {
            Panel page = new Panel();
            page.BackColor = Color.FromArgb(45, 45, 45);
            
            // Server connection group
            GroupBox grpConnection = new GroupBox();
            grpConnection.Text = "Conexão com Servidor";
            grpConnection.ForeColor = Color.White;
            grpConnection.Location = new Point(10, 10);
            grpConnection.Size = new Size(780, 100);
            
            Label lblStatus = new Label();
            lblStatus.Text = "Status: Desconectado";
            lblStatus.Location = new Point(10, 25);
            lblStatus.AutoSize = true;
            grpConnection.Controls.Add(lblStatus);
            
            Button btnConnect = new Button();
            btnConnect.Text = "Conectar";
            btnConnect.Location = new Point(10, 50);
            btnConnect.Size = new Size(100, 30);
            btnConnect.FlatStyle = FlatStyle.Flat;
            btnConnect.BackColor = Color.FromArgb(0, 122, 204);
            btnConnect.Click += BtnConnect_Click;
            grpConnection.Controls.Add(btnConnect);
            
            page.Controls.Add(grpConnection);
            
            // Server info group
            GroupBox grpInfo = new GroupBox();
            grpInfo.Text = "Informações do Servidor";
            grpInfo.ForeColor = Color.White;
            grpInfo.Location = new Point(10, 120);
            grpInfo.Size = new Size(780, 200);
            
            DataGridView dgvServerInfo = new DataGridView();
            dgvServerInfo.Dock = DockStyle.Fill;
            dgvServerInfo.BackgroundColor = Color.FromArgb(30, 30, 30);
            dgvServerInfo.ForeColor = Color.White;
            dgvServerInfo.GridColor = Color.FromArgb(60, 60, 60);
            grpInfo.Controls.Add(dgvServerInfo);
            
            page.Controls.Add(grpInfo);
            
            // Process control group
            GroupBox grpProcesses = new GroupBox();
            grpProcesses.Text = "Controle de Processos";
            grpProcesses.ForeColor = Color.White;
            grpProcesses.Location = new Point(10, 330);
            grpProcesses.Size = new Size(780, 150);
            
            page.Controls.Add(grpProcesses);
            
            return page;
        }
        
        private Panel CreateAccountManagementPage()
        {
            Panel page = new Panel();
            page.BackColor = Color.FromArgb(45, 45, 45);
            
            // Search panel
            Panel searchPanel = new Panel();
            searchPanel.Height = 50;
            searchPanel.Dock = DockStyle.Top;
            
            Label lblSearch = new Label();
            lblSearch.Text = "Buscar:";
            lblSearch.Location = new Point(10, 15);
            lblSearch.AutoSize = true;
            searchPanel.Controls.Add(lblSearch);
            
            TextBox txtSearch = new TextBox();
            txtSearch.Location = new Point(60, 12);
            txtSearch.Size = new Size(200, 23);
            txtSearch.BackColor = Color.FromArgb(60, 60, 60);
            txtSearch.ForeColor = Color.White;
            txtSearch.BorderStyle = BorderStyle.FixedSingle;
            searchPanel.Controls.Add(txtSearch);
            
            Button btnSearch = new Button();
            btnSearch.Text = "Buscar";
            btnSearch.Location = new Point(270, 10);
            btnSearch.Size = new Size(80, 25);
            btnSearch.FlatStyle = FlatStyle.Flat;
            btnSearch.BackColor = Color.FromArgb(0, 122, 204);
            searchPanel.Controls.Add(btnSearch);
            
            Button btnCreateAccount = new Button();
            btnCreateAccount.Text = "Criar Conta";
            btnCreateAccount.Location = new Point(360, 10);
            btnCreateAccount.Size = new Size(100, 25);
            btnCreateAccount.FlatStyle = FlatStyle.Flat;
            btnCreateAccount.BackColor = Color.FromArgb(40, 167, 69);
            searchPanel.Controls.Add(btnCreateAccount);
            
            Button btnOnlineAccounts = new Button();
            btnOnlineAccounts.Text = "Contas Online";
            btnOnlineAccounts.Location = new Point(470, 10);
            btnOnlineAccounts.Size = new Size(100, 25);
            btnOnlineAccounts.FlatStyle = FlatStyle.Flat;
            btnOnlineAccounts.BackColor = Color.FromArgb(255, 193, 7);
            btnOnlineAccounts.ForeColor = Color.Black;
            searchPanel.Controls.Add(btnOnlineAccounts);
            
            page.Controls.Add(searchPanel);
            
            // Account list
            DataGridView dgvAccounts = new DataGridView();
            dgvAccounts.Dock = DockStyle.Fill;
            dgvAccounts.BackgroundColor = Color.FromArgb(30, 30, 30);
            dgvAccounts.ForeColor = Color.White;
            dgvAccounts.GridColor = Color.FromArgb(60, 60, 60);
            dgvAccounts.DefaultCellStyle.BackColor = Color.FromArgb(45, 45, 45);
            dgvAccounts.DefaultCellStyle.ForeColor = Color.White;
            dgvAccounts.DefaultCellStyle.SelectionBackColor = Color.FromArgb(0, 122, 204);
            dgvAccounts.ColumnHeadersDefaultCellStyle.BackColor = Color.FromArgb(60, 60, 60);
            dgvAccounts.ColumnHeadersDefaultCellStyle.ForeColor = Color.White;
            dgvAccounts.EnableHeadersVisualStyles = false;
            dgvAccounts.ReadOnly = true;
            dgvAccounts.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            dgvAccounts.Columns.Add("ID", "ID");
            dgvAccounts.Columns.Add("Login", "Login");
            dgvAccounts.Columns.Add("Email", "Email");
            dgvAccounts.Columns.Add("Status", "Status");
            dgvAccounts.Columns.Add("GM", "GM Level");
            
            // Add context menu
            ContextMenuStrip accountMenu = new ContextMenuStrip();
            accountMenu.Items.Add("Editar Conta", null, (s, e) => EditAccount());
            accountMenu.Items.Add("Privilégios GM", null, (s, e) => EditGMPrivileges());
            accountMenu.Items.Add("-");
            accountMenu.Items.Add("Ver Personagens", null, (s, e) => ViewCharacters());
            accountMenu.Items.Add("Editar Personagem", null, (s, e) => EditCharacter());
            accountMenu.Items.Add("-");
            accountMenu.Items.Add("Enviar Mail", null, (s, e) => SendMail());
            accountMenu.Items.Add("Adicionar Cash", null, (s, e) => AddCash());
            dgvAccounts.ContextMenuStrip = accountMenu;
            
            Panel gridPanel = new Panel();
            gridPanel.Dock = DockStyle.Fill;
            gridPanel.Padding = new Padding(10, 60, 10, 10);
            gridPanel.Controls.Add(dgvAccounts);
            
            page.Controls.Add(gridPanel);
            
            return page;
        }
        
        private Panel CreateSettingsPage()
        {
            Panel page = new Panel();
            page.BackColor = Color.FromArgb(45, 45, 45);
            page.AutoScroll = true;
            
            // Profile selection
            GroupBox grpProfile = new GroupBox();
            grpProfile.Text = "Perfil";
            grpProfile.ForeColor = Color.White;
            grpProfile.Location = new Point(10, 10);
            grpProfile.Size = new Size(780, 60);
            
            ComboBox cmbProfile = new ComboBox();
            cmbProfile.Location = new Point(10, 25);
            cmbProfile.Size = new Size(200, 23);
            cmbProfile.BackColor = Color.FromArgb(60, 60, 60);
            cmbProfile.ForeColor = Color.White;
            cmbProfile.FlatStyle = FlatStyle.Flat;
            cmbProfile.Items.Add("Default");
            cmbProfile.SelectedIndex = 0;
            grpProfile.Controls.Add(cmbProfile);
            
            page.Controls.Add(grpProfile);
            
            // File paths
            GroupBox grpFiles = new GroupBox();
            grpFiles.Text = "Arquivos do Cliente";
            grpFiles.ForeColor = Color.White;
            grpFiles.Location = new Point(10, 80);
            grpFiles.Size = new Size(780, 150);
            
            // Elements.data
            Label lblElements = new Label();
            lblElements.Text = "elements.data:";
            lblElements.Location = new Point(10, 25);
            lblElements.AutoSize = true;
            grpFiles.Controls.Add(lblElements);
            
            TextBox txtElements = new TextBox();
            txtElements.Location = new Point(100, 22);
            txtElements.Size = new Size(550, 23);
            txtElements.BackColor = Color.FromArgb(60, 60, 60);
            txtElements.ForeColor = Color.White;
            txtElements.Text = Settings.Default.ElementsPath ?? "";
            grpFiles.Controls.Add(txtElements);
            
            Button btnBrowseElements = new Button();
            btnBrowseElements.Text = "...";
            btnBrowseElements.Location = new Point(660, 21);
            btnBrowseElements.Size = new Size(30, 25);
            btnBrowseElements.FlatStyle = FlatStyle.Flat;
            btnBrowseElements.Click += (s, e) => BrowseFile(txtElements, "elements.data|elements.data");
            grpFiles.Controls.Add(btnBrowseElements);
            
            // configs.pck
            Label lblConfigs = new Label();
            lblConfigs.Text = "configs.pck:";
            lblConfigs.Location = new Point(10, 55);
            lblConfigs.AutoSize = true;
            grpFiles.Controls.Add(lblConfigs);
            
            TextBox txtConfigs = new TextBox();
            txtConfigs.Location = new Point(100, 52);
            txtConfigs.Size = new Size(550, 23);
            txtConfigs.BackColor = Color.FromArgb(60, 60, 60);
            txtConfigs.ForeColor = Color.White;
            grpFiles.Controls.Add(txtConfigs);
            
            Button btnBrowseConfigs = new Button();
            btnBrowseConfigs.Text = "...";
            btnBrowseConfigs.Location = new Point(660, 51);
            btnBrowseConfigs.Size = new Size(30, 25);
            btnBrowseConfigs.FlatStyle = FlatStyle.Flat;
            btnBrowseConfigs.Click += (s, e) => BrowseFile(txtConfigs, "PCK files|*.pck");
            grpFiles.Controls.Add(btnBrowseConfigs);
            
            page.Controls.Add(grpFiles);
            
            // Server settings
            GroupBox grpServer = new GroupBox();
            grpServer.Text = "Configurações do Servidor";
            grpServer.ForeColor = Color.White;
            grpServer.Location = new Point(10, 240);
            grpServer.Size = new Size(780, 120);
            
            Label lblServerIP = new Label();
            lblServerIP.Text = "IP:";
            lblServerIP.Location = new Point(10, 25);
            lblServerIP.AutoSize = true;
            grpServer.Controls.Add(lblServerIP);
            
            TextBox txtServerIP = new TextBox();
            txtServerIP.Location = new Point(100, 22);
            txtServerIP.Size = new Size(150, 23);
            txtServerIP.BackColor = Color.FromArgb(60, 60, 60);
            txtServerIP.ForeColor = Color.White;
            txtServerIP.Text = Settings.Default.ipservidor ?? "";
            grpServer.Controls.Add(txtServerIP);
            
            Label lblServerPort = new Label();
            lblServerPort.Text = "Porta:";
            lblServerPort.Location = new Point(270, 25);
            lblServerPort.AutoSize = true;
            grpServer.Controls.Add(lblServerPort);
            
            NumericUpDown nudServerPort = new NumericUpDown();
            nudServerPort.Location = new Point(320, 22);
            nudServerPort.Size = new Size(80, 23);
            nudServerPort.BackColor = Color.FromArgb(60, 60, 60);
            nudServerPort.ForeColor = Color.White;
            nudServerPort.Maximum = 65535;
            nudServerPort.Value = Settings.Default.portaservidor > 0 ? Settings.Default.portaservidor : 29000;
            grpServer.Controls.Add(nudServerPort);
            
            page.Controls.Add(grpServer);
            
            // Save button
            Button btnSave = new Button();
            btnSave.Text = "Salvar Configurações";
            btnSave.Location = new Point(10, 380);
            btnSave.Size = new Size(150, 30);
            btnSave.FlatStyle = FlatStyle.Flat;
            btnSave.BackColor = Color.FromArgb(40, 167, 69);
            btnSave.Click += BtnSave_Click;
            page.Controls.Add(btnSave);
            
            return page;
        }
        
        private void ShowPage(int index)
        {
            if (index < 0 || index >= pages.Length) return;
            
            // Hide all pages
            foreach (var page in pages)
            {
                page.Visible = false;
            }
            
            // Show selected page
            pages[index].Visible = true;
            currentPage = index;
            
            // Update nav button states
            for (int i = 0; i < navButtons.Length; i++)
            {
                navButtons[i].BackColor = (i == index) ? Color.FromArgb(0, 122, 204) : Color.FromArgb(45, 45, 45);
            }
        }
        
        private void NavButton_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            if (btn != null && btn.Tag != null)
            {
                int index = (int)btn.Tag;
                ShowPage(index);
            }
        }
        
        private void BtnConnect_Click(object sender, EventArgs e)
        {
            try
            {
                if (Comandos.TestServerConnection())
                {
                    MessageBox.Show("Conectado ao servidor com sucesso!", "Sucesso", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
                else
                {
                    MessageBox.Show("Falha ao conectar ao servidor.", "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Erro ao conectar: {ex.Message}", "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        
        private void BtnSave_Click(object sender, EventArgs e)
        {
            // Save settings
            Settings.Default.Save();
            MessageBox.Show("Configurações salvas com sucesso!", "Sucesso", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void BrowseFile(TextBox targetTextBox, string filter)
        {
            using (OpenFileDialog dialog = new OpenFileDialog())
            {
                dialog.Filter = filter;
                if (dialog.ShowDialog() == DialogResult.OK)
                {
                    targetTextBox.Text = dialog.FileName;
                }
            }
        }
        
        public static bool isDebug() { return false; }
        
        public static Image GetImageSkill(int skillId)
        {
            return null;
        }
        
        public static Bitmap images(string filename)
        {
            return Properties.Resources.blank.ToBitmap();
        }
        
        // Context menu methods
        private void EditAccount()
        {
            MessageBox.Show("Editar Conta - Em desenvolvimento", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void EditGMPrivileges()
        {
            MessageBox.Show("Privilégios GM - Em desenvolvimento", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void ViewCharacters()
        {
            MessageBox.Show("Ver Personagens - Em desenvolvimento", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void EditCharacter()
        {
            MessageBox.Show("Editar Personagem - Em desenvolvimento", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void SendMail()
        {
            MessageBox.Show("Enviar Mail - Em desenvolvimento", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void AddCash()
        {
            MessageBox.Show("Adicionar Cash - Em desenvolvimento", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}