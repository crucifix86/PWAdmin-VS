using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using pwAdmin.Properties;
using Protocols.Packets;

namespace pwAdmin
{
    public partial class MainForm : Form
    {
        private Panel leftPanel;
        private Panel rightPanel;
        private Panel[] pages;
        private Button[] navButtons;
        private int currentPage = 0;
        private StatusStrip statusStrip;
        private ToolStripStatusLabel lblStatus;
        private ToolStripStatusLabel lblConnection;
        
        // Static properties needed by other parts of the application
        public static dynamic eLC { get; set; }
        public static dynamic skills { get; set; }
        public static string locale { get; set; }
        public static MainForm mainWindow { get; set; }
        public static List<dynamic> addonsList { get; set; }
        public static dynamic skill_info { get; set; }
        public static dynamic descricao { get; set; }
        public static dynamic addons { get; set; }
        public static ServerInfo info { get; set; }
        public static ServerConfig serverConfig { get; set; }
        public static RichTextBox txtLog { get; set; }
        public static dynamic listItemDesc { get; set; }
        
        // Connection state
        private bool isConnected = false;
        
        public MainForm()
        {
            InitializeComponent();
            mainWindow = this;
            
            // VERIFICATION: This message proves you're running the updated code
            this.Text = "pwAdmin Client - SimpleSettings v1.8";
            
            // Show settings info on startup
            var settingsPath = Utils.SimpleSettings.GetSettingsPath();
            var fileExists = System.IO.File.Exists(settingsPath);
            
            MessageBox.Show($"UPDATED CODE v1.2 RUNNING!\n\nSettings file: {settingsPath}\nFile exists: {fileExists}\n\nCurrent settings:\nIP: {Utils.SimpleSettings.ServerIP}\nPort: {Utils.SimpleSettings.ServerPort}\n\nIf the file doesn't exist, it will be created when SimpleSettings.Load() runs.", 
                "Code Version Check", MessageBoxButtons.OK, MessageBoxIcon.Information);
            
            SetupTheme();
            CreateStatusBar();
            CreatePages();
            ShowPage(0);
        }
        
        private void SetupTheme()
        {
            // Dark theme colors
            this.BackColor = Color.FromArgb(30, 30, 30);
            this.ForeColor = Color.White;
        }
        
        private void CreateStatusBar()
        {
            statusStrip = new StatusStrip();
            statusStrip.BackColor = Color.FromArgb(0, 122, 204);
            statusStrip.ForeColor = Color.White;
            
            lblStatus = new ToolStripStatusLabel();
            lblStatus.Text = "Ready";
            lblStatus.Spring = true;
            lblStatus.TextAlign = ContentAlignment.MiddleLeft;
            statusStrip.Items.Add(lblStatus);
            
            lblConnection = new ToolStripStatusLabel();
            lblConnection.Text = "Disconnected";
            lblConnection.ForeColor = Color.Red;
            lblConnection.BorderSides = ToolStripStatusLabelBorderSides.Left;
            statusStrip.Items.Add(lblConnection);
            
            this.Controls.Add(statusStrip);
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
            
            // GM Accounts group (top left)
            GroupBox grpGMAccounts = new GroupBox();
            grpGMAccounts.Text = "GM Accounts";
            grpGMAccounts.ForeColor = Color.White;
            grpGMAccounts.Location = new Point(10, 10);
            grpGMAccounts.Size = new Size(320, 185);
            
            DataGridView dgvGMAccounts = new DataGridView();
            dgvGMAccounts.Dock = DockStyle.Fill;
            dgvGMAccounts.BackgroundColor = Color.FromArgb(30, 30, 30);
            dgvGMAccounts.ForeColor = Color.White;
            dgvGMAccounts.GridColor = Color.FromArgb(60, 60, 60);
            dgvGMAccounts.DefaultCellStyle.BackColor = Color.FromArgb(45, 45, 45);
            dgvGMAccounts.DefaultCellStyle.ForeColor = Color.White;
            dgvGMAccounts.ColumnHeadersDefaultCellStyle.BackColor = Color.FromArgb(60, 60, 60);
            dgvGMAccounts.ColumnHeadersDefaultCellStyle.ForeColor = Color.White;
            dgvGMAccounts.EnableHeadersVisualStyles = false;
            dgvGMAccounts.Columns.Add("ID", "ID");
            dgvGMAccounts.Columns.Add("Name", "Name");
            dgvGMAccounts.Columns.Add("Rules", "Rules");
            dgvGMAccounts.Columns[0].Width = 50;
            dgvGMAccounts.Columns[1].Width = 120;
            dgvGMAccounts.Columns[2].Width = 100;
            grpGMAccounts.Controls.Add(dgvGMAccounts);
            
            page.Controls.Add(grpGMAccounts);
            
            // Server Information group (top right)
            GroupBox grpServerInfo = new GroupBox();
            grpServerInfo.Text = "Server Information";
            grpServerInfo.ForeColor = Color.White;
            grpServerInfo.Location = new Point(340, 10);
            grpServerInfo.Size = new Size(450, 185);
            
            // Memory/Swap table
            TableLayoutPanel memoryTable = new TableLayoutPanel();
            memoryTable.Location = new Point(10, 20);
            memoryTable.Size = new Size(250, 90);
            memoryTable.RowCount = 4;
            memoryTable.ColumnCount = 3;
            memoryTable.CellBorderStyle = TableLayoutPanelCellBorderStyle.Single;
            memoryTable.BackColor = Color.FromArgb(30, 30, 30);
            memoryTable.ForeColor = Color.White;
            
            // Add headers and data placeholders
            memoryTable.Controls.Add(new Label() { Text = "", AutoSize = true }, 0, 0);
            memoryTable.Controls.Add(new Label() { Text = "Memory", AutoSize = true, ForeColor = Color.White }, 1, 0);
            memoryTable.Controls.Add(new Label() { Text = "Swap", AutoSize = true, ForeColor = Color.White }, 2, 0);
            memoryTable.Controls.Add(new Label() { Text = "Total", AutoSize = true, ForeColor = Color.White }, 0, 1);
            memoryTable.Controls.Add(new Label() { Text = "Used", AutoSize = true, ForeColor = Color.White }, 0, 2);
            memoryTable.Controls.Add(new Label() { Text = "Free", AutoSize = true, ForeColor = Color.White }, 0, 3);
            
            // Add data cells
            for (int row = 1; row <= 3; row++)
            {
                for (int col = 1; col <= 2; col++)
                {
                    Color textColor = row == 1 ? Color.Orange : (row == 2 ? Color.Cyan : Color.Green);
                    memoryTable.Controls.Add(new Label() { Text = "0 MB", AutoSize = true, ForeColor = textColor }, col, row);
                }
            }
            
            grpServerInfo.Controls.Add(memoryTable);
            
            // Online/Total accounts
            TableLayoutPanel accountsTable = new TableLayoutPanel();
            accountsTable.Location = new Point(10, 115);
            accountsTable.Size = new Size(250, 50);
            accountsTable.RowCount = 2;
            accountsTable.ColumnCount = 2;
            accountsTable.CellBorderStyle = TableLayoutPanelCellBorderStyle.Single;
            accountsTable.BackColor = Color.FromArgb(30, 30, 30);
            accountsTable.Controls.Add(new Label() { Text = "Online Accounts", AutoSize = true, ForeColor = Color.White }, 0, 0);
            accountsTable.Controls.Add(new Label() { Text = "Total Accounts", AutoSize = true, ForeColor = Color.White }, 1, 0);
            accountsTable.Controls.Add(new Label() { Text = "0", AutoSize = true, ForeColor = Color.Green }, 0, 1);
            accountsTable.Controls.Add(new Label() { Text = "0", AutoSize = true, ForeColor = Color.Purple }, 1, 1);
            
            grpServerInfo.Controls.Add(accountsTable);
            
            // Server details
            int yPos = 20;
            string[] labels = new string[] { "Name:", "Version:", "ZoneID:", "AID:" };
            foreach (string label in labels)
            {
                Label lbl = new Label();
                lbl.Text = label;
                lbl.Location = new Point(270, yPos);
                lbl.AutoSize = true;
                lbl.ForeColor = Color.Orange;
                grpServerInfo.Controls.Add(lbl);
                
                Label value = new Label();
                value.Text = "-";
                value.Location = new Point(340, yPos);
                value.AutoSize = true;
                grpServerInfo.Controls.Add(value);
                
                yPos += 25;
            }
            
            page.Controls.Add(grpServerInfo);
            
            // Process List group
            GroupBox grpProcesses = new GroupBox();
            grpProcesses.Text = "Process List";
            grpProcesses.ForeColor = Color.White;
            grpProcesses.Location = new Point(10, 200);
            grpProcesses.Size = new Size(320, 285);
            
            DataGridView dgvProcesses = new DataGridView();
            dgvProcesses.Dock = DockStyle.Fill;
            dgvProcesses.BackgroundColor = Color.FromArgb(30, 30, 30);
            dgvProcesses.ForeColor = Color.White;
            dgvProcesses.GridColor = Color.FromArgb(60, 60, 60);
            dgvProcesses.DefaultCellStyle.BackColor = Color.FromArgb(45, 45, 45);
            dgvProcesses.DefaultCellStyle.ForeColor = Color.White;
            dgvProcesses.ColumnHeadersDefaultCellStyle.BackColor = Color.FromArgb(60, 60, 60);
            dgvProcesses.ColumnHeadersDefaultCellStyle.ForeColor = Color.White;
            dgvProcesses.EnableHeadersVisualStyles = false;
            dgvProcesses.Columns.Add("Process", "Process");
            dgvProcesses.Columns.Add("Memory", "Mem (%)");
            dgvProcesses.Columns.Add("CPU", "CPU (%)");
            grpProcesses.Controls.Add(dgvProcesses);
            
            page.Controls.Add(grpProcesses);
            
            // Active Maps List group
            GroupBox grpMaps = new GroupBox();
            grpMaps.Text = "Active Maps List";
            grpMaps.ForeColor = Color.White;
            grpMaps.Location = new Point(340, 200);
            grpMaps.Size = new Size(450, 285);
            
            DataGridView dgvMaps = new DataGridView();
            dgvMaps.Dock = DockStyle.Fill;
            dgvMaps.BackgroundColor = Color.FromArgb(30, 30, 30);
            dgvMaps.ForeColor = Color.White;
            dgvMaps.GridColor = Color.FromArgb(60, 60, 60);
            dgvMaps.DefaultCellStyle.BackColor = Color.FromArgb(45, 45, 45);
            dgvMaps.DefaultCellStyle.ForeColor = Color.White;
            dgvMaps.ColumnHeadersDefaultCellStyle.BackColor = Color.FromArgb(60, 60, 60);
            dgvMaps.ColumnHeadersDefaultCellStyle.ForeColor = Color.White;
            dgvMaps.EnableHeadersVisualStyles = false;
            dgvMaps.Columns.Add("Tag", "Tag");
            dgvMaps.Columns.Add("Instance", "Instance");
            dgvMaps.Columns.Add("Memory", "Mem (%)");
            dgvMaps.Columns.Add("CPU", "CPU (%)");
            grpMaps.Controls.Add(dgvMaps);
            
            page.Controls.Add(grpMaps);
            
            // Log text box
            TextBox txtLog = new TextBox();
            txtLog.Location = new Point(10, 490);
            txtLog.Size = new Size(320, 60);
            txtLog.Multiline = true;
            txtLog.ReadOnly = true;
            txtLog.BackColor = Color.FromArgb(10, 10, 10);
            txtLog.ForeColor = Color.White;
            txtLog.ScrollBars = ScrollBars.Vertical;
            page.Controls.Add(txtLog);
            
            // Action buttons
            Button btnConnection = new Button();
            btnConnection.Text = "🟢 Connect";
            btnConnection.Location = new Point(340, 490);
            btnConnection.Size = new Size(140, 60);
            btnConnection.FlatStyle = FlatStyle.Flat;
            btnConnection.BackColor = Color.FromArgb(0, 85, 0);
            btnConnection.ForeColor = Color.White;
            btnConnection.Click += BtnConnect_Click;
            page.Controls.Add(btnConnection);
            
            Button btnStartMap = new Button();
            btnStartMap.Text = "🌍 Start Instance";
            btnStartMap.Location = new Point(485, 490);
            btnStartMap.Size = new Size(130, 30);
            btnStartMap.FlatStyle = FlatStyle.Flat;
            btnStartMap.BackColor = Color.FromArgb(40, 0, 85);
            btnStartMap.ForeColor = Color.White;
            page.Controls.Add(btnStartMap);
            
            Button btnShutdownMap = new Button();
            btnShutdownMap.Text = "🌍 Shutdown Instance";
            btnShutdownMap.Location = new Point(485, 520);
            btnShutdownMap.Size = new Size(130, 30);
            btnShutdownMap.FlatStyle = FlatStyle.Flat;
            btnShutdownMap.BackColor = Color.FromArgb(100, 50, 0);
            btnShutdownMap.ForeColor = Color.White;
            page.Controls.Add(btnShutdownMap);
            
            Button btnCleanCache = new Button();
            btnCleanCache.Text = "🔄 Clean Cache";
            btnCleanCache.Location = new Point(620, 490);
            btnCleanCache.Size = new Size(120, 30);
            btnCleanCache.FlatStyle = FlatStyle.Flat;
            btnCleanCache.BackColor = Color.FromArgb(0, 100, 50);
            btnCleanCache.ForeColor = Color.White;
            page.Controls.Add(btnCleanCache);
            
            Button btnManagement = new Button();
            btnManagement.Text = "🖥️ Management";
            btnManagement.Location = new Point(620, 520);
            btnManagement.Size = new Size(120, 30);
            btnManagement.FlatStyle = FlatStyle.Flat;
            btnManagement.BackColor = Color.FromArgb(0, 50, 100);
            btnManagement.ForeColor = Color.White;
            page.Controls.Add(btnManagement);
            
            return page;
        }
        
        private Panel CreateAccountManagementPage()
        {
            Panel page = new Panel();
            page.BackColor = Color.FromArgb(45, 45, 45);
            
            // Account List group
            GroupBox grpAccountList = new GroupBox();
            grpAccountList.Text = "Account List";
            grpAccountList.ForeColor = Color.White;
            grpAccountList.Location = new Point(10, 10);
            grpAccountList.Size = new Size(790, 250);
            
            // Search panel inside the group
            Panel searchPanel = new Panel();
            searchPanel.Height = 30;
            searchPanel.Dock = DockStyle.Top;
            searchPanel.Padding = new Padding(5, 5, 5, 0);
            
            Label lblSearch = new Label();
            lblSearch.Text = "Search:";
            lblSearch.Location = new Point(5, 7);
            lblSearch.AutoSize = true;
            searchPanel.Controls.Add(lblSearch);
            
            TextBox txtSearch = new TextBox();
            txtSearch.Location = new Point(55, 5);
            txtSearch.Size = new Size(200, 23);
            txtSearch.BackColor = Color.FromArgb(60, 60, 60);
            txtSearch.ForeColor = Color.White;
            txtSearch.BorderStyle = BorderStyle.FixedSingle;
            searchPanel.Controls.Add(txtSearch);
            
            Button btnSearch = new Button();
            btnSearch.Text = "🔍";
            btnSearch.Location = new Point(260, 4);
            btnSearch.Size = new Size(30, 25);
            btnSearch.FlatStyle = FlatStyle.Flat;
            btnSearch.BackColor = Color.FromArgb(0, 122, 204);
            searchPanel.Controls.Add(btnSearch);
            
            grpAccountList.Controls.Add(searchPanel);
            
            // Account list DataGridView
            DataGridView dgvAccounts = new DataGridView();
            dgvAccounts.Location = new Point(5, 50);
            dgvAccounts.Size = new Size(780, 195);
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
            dgvAccounts.Columns.Add("User", "User");
            dgvAccounts.Columns.Add("Name", "Name");
            dgvAccounts.Columns.Add("Email", "Email");
            dgvAccounts.Columns.Add("IP", "IP Address");
            dgvAccounts.Columns.Add("Created", "Created On");
            dgvAccounts.Columns[0].Width = 50;
            
            // Add context menu
            ContextMenuStrip accountMenu = new ContextMenuStrip();
            accountMenu.Items.Add("Edit Account", null, (s, e) => EditAccount());
            accountMenu.Items.Add("GM Privileges", null, (s, e) => EditGMPrivileges());
            accountMenu.Items.Add("-");
            accountMenu.Items.Add("View Characters", null, (s, e) => ViewCharacters());
            accountMenu.Items.Add("Edit Character", null, (s, e) => EditCharacter());
            accountMenu.Items.Add("-");
            accountMenu.Items.Add("Send Mail", null, (s, e) => SendMail());
            accountMenu.Items.Add("Add Cash", null, (s, e) => AddCash());
            dgvAccounts.ContextMenuStrip = accountMenu;
            
            grpAccountList.Controls.Add(dgvAccounts);
            page.Controls.Add(grpAccountList);
            
            // Action buttons row
            int buttonY = 265;
            
            Button btnAutoLock = new Button();
            btnAutoLock.Text = "🔒 Autolock";
            btnAutoLock.Location = new Point(10, buttonY);
            btnAutoLock.Size = new Size(90, 28);
            btnAutoLock.FlatStyle = FlatStyle.Flat;
            btnAutoLock.BackColor = Color.FromArgb(60, 60, 60);
            btnAutoLock.Enabled = false;
            page.Controls.Add(btnAutoLock);
            
            Button btnCreateAccount = new Button();
            btnCreateAccount.Text = "➕ Create Account";
            btnCreateAccount.Location = new Point(105, buttonY);
            btnCreateAccount.Size = new Size(110, 28);
            btnCreateAccount.FlatStyle = FlatStyle.Flat;
            btnCreateAccount.BackColor = Color.FromArgb(40, 167, 69);
            page.Controls.Add(btnCreateAccount);
            
            Button btnEditAccount = new Button();
            btnEditAccount.Text = "✏️ Edit Account";
            btnEditAccount.Location = new Point(220, buttonY);
            btnEditAccount.Size = new Size(100, 28);
            btnEditAccount.FlatStyle = FlatStyle.Flat;
            btnEditAccount.BackColor = Color.FromArgb(0, 122, 204);
            page.Controls.Add(btnEditAccount);
            
            Button btnOnlineAccounts = new Button();
            btnOnlineAccounts.Text = "🟢 Online Accounts";
            btnOnlineAccounts.Location = new Point(325, buttonY);
            btnOnlineAccounts.Size = new Size(120, 28);
            btnOnlineAccounts.FlatStyle = FlatStyle.Flat;
            btnOnlineAccounts.BackColor = Color.FromArgb(255, 193, 7);
            btnOnlineAccounts.ForeColor = Color.Black;
            page.Controls.Add(btnOnlineAccounts);
            
            Button btnInitialCharacters = new Button();
            btnInitialCharacters.Text = "👥 Initial Characters";
            btnInitialCharacters.Location = new Point(450, buttonY);
            btnInitialCharacters.Size = new Size(130, 28);
            btnInitialCharacters.FlatStyle = FlatStyle.Flat;
            btnInitialCharacters.BackColor = Color.FromArgb(108, 117, 125);
            page.Controls.Add(btnInitialCharacters);
            
            Button btnClanList = new Button();
            btnClanList.Text = "🏰 Clan List";
            btnClanList.Location = new Point(585, buttonY);
            btnClanList.Size = new Size(90, 28);
            btnClanList.FlatStyle = FlatStyle.Flat;
            btnClanList.BackColor = Color.FromArgb(220, 53, 69);
            page.Controls.Add(btnClanList);
            
            Button btnSendGold = new Button();
            btnSendGold.Text = "💰 Send GOLD";
            btnSendGold.Location = new Point(680, buttonY);
            btnSendGold.Size = new Size(100, 28);
            btnSendGold.FlatStyle = FlatStyle.Flat;
            btnSendGold.BackColor = Color.FromArgb(255, 193, 7);
            btnSendGold.ForeColor = Color.Black;
            page.Controls.Add(btnSendGold);
            
            // Character List group
            GroupBox grpCharacterList = new GroupBox();
            grpCharacterList.Text = "Character List";
            grpCharacterList.ForeColor = Color.White;
            grpCharacterList.Location = new Point(10, 300);
            grpCharacterList.Size = new Size(790, 200);
            
            DataGridView dgvCharacters = new DataGridView();
            dgvCharacters.Dock = DockStyle.Fill;
            dgvCharacters.BackgroundColor = Color.FromArgb(30, 30, 30);
            dgvCharacters.ForeColor = Color.White;
            dgvCharacters.GridColor = Color.FromArgb(60, 60, 60);
            dgvCharacters.DefaultCellStyle.BackColor = Color.FromArgb(45, 45, 45);
            dgvCharacters.DefaultCellStyle.ForeColor = Color.White;
            dgvCharacters.DefaultCellStyle.SelectionBackColor = Color.FromArgb(0, 122, 204);
            dgvCharacters.ColumnHeadersDefaultCellStyle.BackColor = Color.FromArgb(60, 60, 60);
            dgvCharacters.ColumnHeadersDefaultCellStyle.ForeColor = Color.White;
            dgvCharacters.EnableHeadersVisualStyles = false;
            dgvCharacters.ReadOnly = true;
            dgvCharacters.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            dgvCharacters.Columns.Add("ID", "ID");
            dgvCharacters.Columns.Add("Name", "Name");
            dgvCharacters.Columns.Add("Level", "Level");
            dgvCharacters.Columns.Add("Class", "Class");
            dgvCharacters.Columns.Add("Cultivation", "Cultivation");
            dgvCharacters.Columns.Add("Clan", "Clan");
            dgvCharacters.Columns.Add("Reputation", "Reputation");
            dgvCharacters.Columns.Add("Created", "Created On");
            dgvCharacters.Columns[0].Width = 50;
            dgvCharacters.Columns[2].Width = 50;
            
            grpCharacterList.Controls.Add(dgvCharacters);
            page.Controls.Add(grpCharacterList);
            
            // Online Players button at bottom
            Button btnOnlinePlayers = new Button();
            btnOnlinePlayers.Text = "🟢 Online Players";
            btnOnlinePlayers.Location = new Point(10, 505);
            btnOnlinePlayers.Size = new Size(130, 28);
            btnOnlinePlayers.FlatStyle = FlatStyle.Flat;
            btnOnlinePlayers.BackColor = Color.FromArgb(255, 193, 7);
            btnOnlinePlayers.ForeColor = Color.Black;
            page.Controls.Add(btnOnlinePlayers);
            
            return page;
        }
        
        private Panel CreateSettingsPage()
        {
            Panel page = new Panel();
            page.BackColor = Color.FromArgb(45, 45, 45);
            page.AutoScroll = true;
            
            // Select files group
            GroupBox grpFiles = new GroupBox();
            grpFiles.Text = "Select Files";
            grpFiles.ForeColor = Color.White;
            grpFiles.Location = new Point(10, 10);
            grpFiles.Size = new Size(600, 110);
            
            // Elements.data
            Label lblElements = new Label();
            lblElements.Text = "elements.data:";
            lblElements.Location = new Point(10, 25);
            lblElements.Size = new Size(80, 23);
            lblElements.TextAlign = ContentAlignment.MiddleRight;
            grpFiles.Controls.Add(lblElements);
            
            TextBox txtElements = new TextBox();
            txtElements.Location = new Point(95, 25);
            txtElements.Size = new Size(460, 23);
            txtElements.BackColor = Color.FromArgb(60, 60, 60);
            txtElements.ForeColor = Color.White;
            txtElements.Text = Settings.Default.ElementsPath ?? "";
            grpFiles.Controls.Add(txtElements);
            
            Button btnBrowseElements = new Button();
            btnBrowseElements.Text = "...";
            btnBrowseElements.Location = new Point(560, 24);
            btnBrowseElements.Size = new Size(30, 25);
            btnBrowseElements.FlatStyle = FlatStyle.Flat;
            btnBrowseElements.Click += (s, e) => BrowseFile(txtElements, "elements.data|elements.data");
            grpFiles.Controls.Add(btnBrowseElements);
            
            // configs.pck
            Label lblConfigs = new Label();
            lblConfigs.Text = "configs.pck:";
            lblConfigs.Location = new Point(10, 52);
            lblConfigs.Size = new Size(80, 23);
            lblConfigs.TextAlign = ContentAlignment.MiddleRight;
            grpFiles.Controls.Add(lblConfigs);
            
            TextBox txtConfigs = new TextBox();
            txtConfigs.Location = new Point(95, 52);
            txtConfigs.Size = new Size(460, 23);
            txtConfigs.BackColor = Color.FromArgb(60, 60, 60);
            txtConfigs.ForeColor = Color.White;
            grpFiles.Controls.Add(txtConfigs);
            
            Button btnBrowseConfigs = new Button();
            btnBrowseConfigs.Text = "...";
            btnBrowseConfigs.Location = new Point(560, 51);
            btnBrowseConfigs.Size = new Size(30, 25);
            btnBrowseConfigs.FlatStyle = FlatStyle.Flat;
            btnBrowseConfigs.Click += (s, e) => BrowseFile(txtConfigs, "PCK files|*.pck");
            grpFiles.Controls.Add(btnBrowseConfigs);
            
            // surfaces.pck
            Label lblSurfaces = new Label();
            lblSurfaces.Text = "surfaces.pck:";
            lblSurfaces.Location = new Point(10, 79);
            lblSurfaces.Size = new Size(80, 23);
            lblSurfaces.TextAlign = ContentAlignment.MiddleRight;
            grpFiles.Controls.Add(lblSurfaces);
            
            TextBox txtSurfaces = new TextBox();
            txtSurfaces.Location = new Point(95, 79);
            txtSurfaces.Size = new Size(460, 23);
            txtSurfaces.BackColor = Color.FromArgb(60, 60, 60);
            txtSurfaces.ForeColor = Color.White;
            grpFiles.Controls.Add(txtSurfaces);
            
            Button btnBrowseSurfaces = new Button();
            btnBrowseSurfaces.Text = "...";
            btnBrowseSurfaces.Location = new Point(560, 78);
            btnBrowseSurfaces.Size = new Size(30, 25);
            btnBrowseSurfaces.FlatStyle = FlatStyle.Flat;
            btnBrowseSurfaces.Click += (s, e) => BrowseFile(txtSurfaces, "PCK files|*.pck");
            grpFiles.Controls.Add(btnBrowseSurfaces);
            
            page.Controls.Add(grpFiles);
            
            // Auto-select button
            Button btnAutoSelect = new Button();
            btnAutoSelect.Text = "Select element folder for automatic adjustment...";
            btnAutoSelect.Location = new Point(10, 125);
            btnAutoSelect.Size = new Size(600, 25);
            btnAutoSelect.FlatStyle = FlatStyle.Flat;
            btnAutoSelect.BackColor = Color.FromArgb(60, 60, 60);
            page.Controls.Add(btnAutoSelect);
            
            // Server Settings group
            GroupBox grpServer = new GroupBox();
            grpServer.Text = "Server Settings";
            grpServer.ForeColor = Color.White;
            grpServer.Location = new Point(10, 160);
            grpServer.Size = new Size(300, 210);
            
            // Server IP
            Label lblServerIP = new Label();
            lblServerIP.Text = "Server IP:";
            lblServerIP.Location = new Point(10, 25);
            lblServerIP.Size = new Size(100, 23);
            lblServerIP.TextAlign = ContentAlignment.MiddleRight;
            grpServer.Controls.Add(lblServerIP);
            
            TextBox txtServerIP = new TextBox();
            txtServerIP.Location = new Point(115, 25);
            txtServerIP.Size = new Size(170, 23);
            txtServerIP.BackColor = Color.FromArgb(60, 60, 60);
            txtServerIP.ForeColor = Color.White;
            txtServerIP.Text = Settings.Default.ipservidor ?? "";
            grpServer.Controls.Add(txtServerIP);
            
            // Server Port
            Label lblServerPort = new Label();
            lblServerPort.Text = "Server Port:";
            lblServerPort.Location = new Point(10, 52);
            lblServerPort.Size = new Size(100, 23);
            lblServerPort.TextAlign = ContentAlignment.MiddleRight;
            grpServer.Controls.Add(lblServerPort);
            
            TextBox txtServerPort = new TextBox();
            txtServerPort.Location = new Point(115, 52);
            txtServerPort.Size = new Size(170, 23);
            txtServerPort.BackColor = Color.FromArgb(60, 60, 60);
            txtServerPort.ForeColor = Color.White;
            txtServerPort.Text = Settings.Default.portaservidor > 0 ? Settings.Default.portaservidor.ToString() : "29000";
            grpServer.Controls.Add(txtServerPort);
            
            // Password
            Label lblPassword = new Label();
            lblPassword.Text = "Password:";
            lblPassword.Location = new Point(10, 79);
            lblPassword.Size = new Size(100, 23);
            lblPassword.TextAlign = ContentAlignment.MiddleRight;
            grpServer.Controls.Add(lblPassword);
            
            TextBox txtPassword = new TextBox();
            txtPassword.Location = new Point(115, 79);
            txtPassword.Size = new Size(170, 23);
            txtPassword.BackColor = Color.FromArgb(60, 60, 60);
            txtPassword.ForeColor = Color.White;
            txtPassword.PasswordChar = '*';
            grpServer.Controls.Add(txtPassword);
            
            // Data interval
            Label lblInterval = new Label();
            lblInterval.Text = "Data interval (ms):";
            lblInterval.Location = new Point(10, 106);
            lblInterval.Size = new Size(100, 23);
            lblInterval.TextAlign = ContentAlignment.MiddleRight;
            grpServer.Controls.Add(lblInterval);
            
            TextBox txtInterval = new TextBox();
            txtInterval.Location = new Point(115, 106);
            txtInterval.Size = new Size(170, 23);
            txtInterval.BackColor = Color.FromArgb(60, 60, 60);
            txtInterval.ForeColor = Color.White;
            txtInterval.Text = "2000";
            grpServer.Controls.Add(txtInterval);
            
            // Profile Name
            Label lblProfileName = new Label();
            lblProfileName.Text = "Name:";
            lblProfileName.Location = new Point(10, 133);
            lblProfileName.Size = new Size(100, 23);
            lblProfileName.TextAlign = ContentAlignment.MiddleRight;
            grpServer.Controls.Add(lblProfileName);
            
            TextBox txtProfileName = new TextBox();
            txtProfileName.Location = new Point(115, 133);
            txtProfileName.Size = new Size(170, 23);
            txtProfileName.BackColor = Color.FromArgb(60, 60, 60);
            txtProfileName.ForeColor = Color.White;
            txtProfileName.Text = "Default";
            grpServer.Controls.Add(txtProfileName);
            
            // Test Connection button
            Button btnTestConnection = new Button();
            btnTestConnection.Text = "📡 Check Connection";
            btnTestConnection.Location = new Point(10, 170);
            btnTestConnection.Size = new Size(275, 30);
            btnTestConnection.FlatStyle = FlatStyle.Flat;
            btnTestConnection.BackColor = Color.FromArgb(0, 35, 97);
            btnTestConnection.Click += (s, e) => TestServerConnection();
            grpServer.Controls.Add(btnTestConnection);
            
            page.Controls.Add(grpServer);
            
            // PCK Keys group
            GroupBox grpPCKKeys = new GroupBox();
            grpPCKKeys.Text = "PCK Keys";
            grpPCKKeys.ForeColor = Color.White;
            grpPCKKeys.Location = new Point(320, 160);
            grpPCKKeys.Size = new Size(290, 210);
            
            string[] keyLabels = new string[] { "KEY#1:", "KEY#2:", "ASIG#1:", "ASIG#2:", "FSIG#1:", "FSIG#2:" };
            string[] keyDefaults = new string[] { "-1466731422", "-240896429", "-33685778", "-267534609", "1305093103", "1453361591" };
            
            for (int i = 0; i < keyLabels.Length; i++)
            {
                Label lbl = new Label();
                lbl.Text = keyLabels[i];
                lbl.Location = new Point(10, 25 + (i * 27));
                lbl.Size = new Size(50, 23);
                lbl.TextAlign = ContentAlignment.MiddleRight;
                grpPCKKeys.Controls.Add(lbl);
                
                TextBox txt = new TextBox();
                txt.Location = new Point(65, 25 + (i * 27));
                txt.Size = new Size(210, 23);
                txt.BackColor = Color.FromArgb(60, 60, 60);
                txt.ForeColor = Color.White;
                txt.Text = keyDefaults[i];
                grpPCKKeys.Controls.Add(txt);
            }
            
            page.Controls.Add(grpPCKKeys);
            
            // Profile list
            ListBox lstProfiles = new ListBox();
            lstProfiles.Location = new Point(620, 20);
            lstProfiles.Size = new Size(170, 330);
            lstProfiles.BackColor = Color.FromArgb(20, 20, 20);
            lstProfiles.ForeColor = Color.White;
            lstProfiles.BorderStyle = BorderStyle.FixedSingle;
            lstProfiles.Items.Add("Default");
            lstProfiles.SelectedIndex = 0;
            page.Controls.Add(lstProfiles);
            
            // Profile buttons
            Button btnAddProfile = new Button();
            btnAddProfile.Text = "Add";
            btnAddProfile.Location = new Point(620, 355);
            btnAddProfile.Size = new Size(80, 30);
            btnAddProfile.FlatStyle = FlatStyle.Flat;
            btnAddProfile.BackColor = Color.FromArgb(40, 0, 100);
            page.Controls.Add(btnAddProfile);
            
            Button btnDeleteProfile = new Button();
            btnDeleteProfile.Text = "Remove";
            btnDeleteProfile.Location = new Point(710, 355);
            btnDeleteProfile.Size = new Size(80, 30);
            btnDeleteProfile.FlatStyle = FlatStyle.Flat;
            btnDeleteProfile.BackColor = Color.FromArgb(85, 0, 0);
            page.Controls.Add(btnDeleteProfile);
            
            // Save buttons
            Button btnSaveSettings = new Button();
            btnSaveSettings.Text = "Save Settings";
            btnSaveSettings.Location = new Point(620, 395);
            btnSaveSettings.Size = new Size(170, 60);
            btnSaveSettings.FlatStyle = FlatStyle.Flat;
            btnSaveSettings.BackColor = Color.FromArgb(0, 85, 0);
            btnSaveSettings.Click += BtnSave_Click;
            page.Controls.Add(btnSaveSettings);
            
            Button btnSaveAllConfigs = new Button();
            btnSaveAllConfigs.Text = "💾 Save All Settings";
            btnSaveAllConfigs.Location = new Point(10, 490);
            btnSaveAllConfigs.Size = new Size(290, 60);
            btnSaveAllConfigs.FlatStyle = FlatStyle.Flat;
            btnSaveAllConfigs.BackColor = Color.FromArgb(0, 85, 0);
            btnSaveAllConfigs.Font = new Font(this.Font.FontFamily, 10, FontStyle.Bold);
            page.Controls.Add(btnSaveAllConfigs);
            
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
            Button btnConnect = sender as Button;
            
            // Handle disconnect
            if (isConnected)
            {
                isConnected = false;
                info = null;
                
                // Update UI
                lblConnection.Text = "Disconnected";
                lblConnection.ForeColor = Color.Red;
                lblStatus.Text = "Disconnected from server";
                
                if (btnConnect != null)
                {
                    btnConnect.Text = "Connect";
                    btnConnect.BackColor = Color.FromArgb(45, 45, 48);
                }
                
                // Clear any data in the UI
                ClearServerData();
                
                MessageBox.Show("Disconnected from server.", "Disconnected", MessageBoxButtons.OK, MessageBoxIcon.Information);
                return;
            }
            
            // Handle connect
            try
            {
                lblStatus.Text = "Connecting...";
                lblConnection.Text = "Connecting...";
                lblConnection.ForeColor = Color.Yellow;
                Application.DoEvents(); // Force UI update
                
                if (Comandos.TestServerConnection())
                {
                    isConnected = true;
                    
                    // Update UI to show connected
                    lblConnection.Text = "Connected";
                    lblConnection.ForeColor = Color.LightGreen;
                    lblStatus.Text = "Connected to server";
                    
                    // Update the button
                    if (btnConnect != null)
                    {
                        btnConnect.Text = "Disconnect";
                        btnConnect.BackColor = Color.FromArgb(200, 50, 50);
                    }
                    
                    // Load and display server data
                    try
                    {
                        lblStatus.Text = "Loading server data...";
                        PopulateServerData();
                        lblStatus.Text = "Ready";
                        
                        var serverInfo = $"Successfully connected!\n\nIP: {Comandos.ip}\nPort: {Comandos.port}";
                        if (info != null)
                        {
                            serverInfo += $"\n\nServer Status:";
                            serverInfo += $"\nMemory: {info.mem_used}MB / {info.mem_total}MB";
                            serverInfo += $"\nSwap: {info.swp_used}MB / {info.swp_total}MB";
                            serverInfo += $"\nActive Maps: {info.maps.Count}";
                            serverInfo += $"\nProcesses: {info.processes.Count}";
                        }
                        
                        MessageBox.Show(serverInfo, "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    }
                    catch (Exception dataEx)
                    {
                        Utils.Logger.LogError("Failed to load server data after connection", dataEx);
                        lblStatus.Text = "Connected (data load failed)";
                    }
                }
                else
                {
                    lblConnection.Text = "Disconnected";
                    lblConnection.ForeColor = Color.Red;
                    lblStatus.Text = "Connection failed";
                    MessageBox.Show($"Failed to connect to server.\n\nDetails:\n{Comandos.LastConnectionError}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
            catch (Exception ex)
            {
                lblConnection.Text = "Disconnected";
                lblConnection.ForeColor = Color.Red;
                lblStatus.Text = "Connection error";
                MessageBox.Show($"Connection error: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        
        private void PopulateServerData()
        {
            if (info == null) return;
            
            // Find the grids on the current page
            if (currentPage == 0 && pages[0] != null) // Server Management page
            {
                // Find the server info labels
                var serverInfoGroup = pages[0].Controls["groupServerInfo"] as GroupBox;
                if (serverInfoGroup != null)
                {
                    // Update memory info table
                    var memTable = serverInfoGroup.Controls["tableMemory"] as TableLayoutPanel;
                    if (memTable != null)
                    {
                        // Update memory labels (they should be at specific positions in the table)
                        if (memTable.Controls.Count >= 6)
                        {
                            memTable.Controls[1].Text = $"{info.mem_used} MB"; // Memory Used
                            memTable.Controls[3].Text = $"{info.mem_free} MB"; // Memory Free
                            memTable.Controls[5].Text = $"{info.mem_total} MB"; // Memory Total
                        }
                    }
                    
                    // Update swap info table
                    var swapTable = serverInfoGroup.Controls["tableSwap"] as TableLayoutPanel;
                    if (swapTable != null)
                    {
                        if (swapTable.Controls.Count >= 6)
                        {
                            swapTable.Controls[1].Text = $"{info.swp_used} MB"; // Swap Used
                            swapTable.Controls[3].Text = $"{info.swp_free} MB"; // Swap Free
                            swapTable.Controls[5].Text = $"{info.swp_total} MB"; // Swap Total
                        }
                    }
                }
                
                // Update Process List
                var processGrid = pages[0].Controls["gridProcessList"] as DataGridView;
                if (processGrid != null)
                {
                    processGrid.Rows.Clear();
                    foreach (Processes proc in info.processes)
                    {
                        processGrid.Rows.Add(proc.processName, $"{proc.mem} MB", $"{proc.cpu}%");
                    }
                }
                
                // Update Active Maps List
                var mapsGrid = pages[0].Controls["gridActiveMapsList"] as DataGridView;
                if (mapsGrid != null)
                {
                    mapsGrid.Rows.Clear();
                    foreach (ListMap map in info.maps)
                    {
                        if (map.pid != 0) // Only show active instances
                        {
                            mapsGrid.Rows.Add(map.tag, map.name, $"{map.mem} MB", $"{map.cpu}%");
                        }
                    }
                }
            }
        }
        
        private void ClearServerData()
        {
            // Clear data from all pages
            if (pages != null)
            {
                foreach (var page in pages)
                {
                    if (page == null) continue;
                    
                    // Clear all DataGridViews
                    foreach (Control control in page.Controls)
                    {
                        if (control is DataGridView grid)
                        {
                            grid.Rows.Clear();
                        }
                        else if (control is GroupBox group)
                        {
                            // Clear labels in groups
                            foreach (Control child in group.Controls)
                            {
                                if (child is TableLayoutPanel table)
                                {
                                    // Reset memory/swap values
                                    for (int i = 1; i < table.Controls.Count; i += 2)
                                    {
                                        if (table.Controls[i] is Label lbl && lbl.Text.Contains("MB"))
                                        {
                                            lbl.Text = "0 MB";
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
        private void BtnSave_Click(object sender, EventArgs e)
        {
            // Save settings
            Settings.Default.Save();
            MessageBox.Show("Settings saved successfully!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void TestServerConnection()
        {
            try
            {
                if (Comandos.TestServerConnection())
                {
                    MessageBox.Show("Successfully connected to server!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
                }
                else
                {
                    MessageBox.Show("Failed to connect to server.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Connection error: {ex.Message}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
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
            MessageBox.Show("Edit Account - In development", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void EditGMPrivileges()
        {
            MessageBox.Show("GM Privileges - In development", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void ViewCharacters()
        {
            MessageBox.Show("View Characters - In development", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void EditCharacter()
        {
            MessageBox.Show("Edit Character - In development", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void SendMail()
        {
            MessageBox.Show("Send Mail - In development", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        
        private void AddCash()
        {
            MessageBox.Show("Add Cash - In development", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}