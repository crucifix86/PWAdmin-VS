namespace pwAdmin
{
    partial class Main
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.panel1 = new System.Windows.Forms.Panel();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exitToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.toolsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.accountInfoToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.gMControlToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mapsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.itemEditorToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.weaponEditorToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.addonsListToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.skillsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.skillByClassToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panel1.Location = new System.Drawing.Point(0, 24);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(905, 434);
            this.panel1.TabIndex = 0;
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem,
            this.toolsToolStripMenuItem,
            this.itemEditorToolStripMenuItem,
            this.skillsToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(905, 24);
            this.menuStrip1.TabIndex = 1;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.settingsToolStripMenuItem,
            new System.Windows.Forms.ToolStripSeparator(),
            this.exitToolStripMenuItem});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(37, 20);
            this.fileToolStripMenuItem.Text = "File";
            // 
            // settingsToolStripMenuItem
            // 
            this.settingsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.settingsToolStripMenuItem.Name = "settingsToolStripMenuItem";
            this.settingsToolStripMenuItem.Size = new System.Drawing.Size(116, 22);
            this.settingsToolStripMenuItem.Text = "Settings";
            this.settingsToolStripMenuItem.Click += new System.EventHandler(this.settingsToolStripMenuItem_Click);
            // 
            // exitToolStripMenuItem
            // 
            this.exitToolStripMenuItem.Name = "exitToolStripMenuItem";
            this.exitToolStripMenuItem.Size = new System.Drawing.Size(93, 22);
            this.exitToolStripMenuItem.Text = "Exit";
            this.exitToolStripMenuItem.Click += new System.EventHandler(this.exitToolStripMenuItem_Click);
            // 
            // toolsToolStripMenuItem
            // 
            this.toolsToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.accountInfoToolStripMenuItem,
            this.gMControlToolStripMenuItem,
            this.mapsToolStripMenuItem});
            this.toolsToolStripMenuItem.Name = "toolsToolStripMenuItem";
            this.toolsToolStripMenuItem.Size = new System.Drawing.Size(46, 20);
            this.toolsToolStripMenuItem.Text = "Tools";
            // 
            // accountInfoToolStripMenuItem
            // 
            this.accountInfoToolStripMenuItem.Name = "accountInfoToolStripMenuItem";
            this.accountInfoToolStripMenuItem.Size = new System.Drawing.Size(141, 22);
            this.accountInfoToolStripMenuItem.Text = "Account Info";
            this.accountInfoToolStripMenuItem.Click += new System.EventHandler(this.accountInfoToolStripMenuItem_Click);
            // 
            // gMControlToolStripMenuItem
            // 
            this.gMControlToolStripMenuItem.Name = "gMControlToolStripMenuItem";
            this.gMControlToolStripMenuItem.Size = new System.Drawing.Size(141, 22);
            this.gMControlToolStripMenuItem.Text = "GM Control";
            this.gMControlToolStripMenuItem.Click += new System.EventHandler(this.gMControlToolStripMenuItem_Click);
            // 
            // mapsToolStripMenuItem
            // 
            this.mapsToolStripMenuItem.Name = "mapsToolStripMenuItem";
            this.mapsToolStripMenuItem.Size = new System.Drawing.Size(141, 22);
            this.mapsToolStripMenuItem.Text = "Maps";
            this.mapsToolStripMenuItem.Click += new System.EventHandler(this.mapsToolStripMenuItem_Click);
            // 
            // itemEditorToolStripMenuItem
            // 
            this.itemEditorToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.weaponEditorToolStripMenuItem,
            this.addonsListToolStripMenuItem});
            this.itemEditorToolStripMenuItem.Name = "itemEditorToolStripMenuItem";
            this.itemEditorToolStripMenuItem.Size = new System.Drawing.Size(75, 20);
            this.itemEditorToolStripMenuItem.Text = "Item Editor";
            // 
            // weaponEditorToolStripMenuItem
            // 
            this.weaponEditorToolStripMenuItem.Name = "weaponEditorToolStripMenuItem";
            this.weaponEditorToolStripMenuItem.Size = new System.Drawing.Size(149, 22);
            this.weaponEditorToolStripMenuItem.Text = "Weapon Editor";
            this.weaponEditorToolStripMenuItem.Click += new System.EventHandler(this.weaponEditorToolStripMenuItem_Click);
            // 
            // addonsListToolStripMenuItem
            // 
            this.addonsListToolStripMenuItem.Name = "addonsListToolStripMenuItem";
            this.addonsListToolStripMenuItem.Size = new System.Drawing.Size(149, 22);
            this.addonsListToolStripMenuItem.Text = "Addons List";
            this.addonsListToolStripMenuItem.Click += new System.EventHandler(this.addonsListToolStripMenuItem_Click);
            // 
            // skillsToolStripMenuItem
            // 
            this.skillsToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.skillByClassToolStripMenuItem});
            this.skillsToolStripMenuItem.Name = "skillsToolStripMenuItem";
            this.skillsToolStripMenuItem.Size = new System.Drawing.Size(45, 20);
            this.skillsToolStripMenuItem.Text = "Skills";
            // 
            // skillByClassToolStripMenuItem
            // 
            this.skillByClassToolStripMenuItem.Name = "skillByClassToolStripMenuItem";
            this.skillByClassToolStripMenuItem.Size = new System.Drawing.Size(140, 22);
            this.skillByClassToolStripMenuItem.Text = "Skill by Class";
            this.skillByClassToolStripMenuItem.Click += new System.EventHandler(this.skillByClassToolStripMenuItem_Click);
            // 
            // Main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(905, 458);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Main";
            this.Text = "pwAdmin - Cliente";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem settingsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exitToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem toolsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem accountInfoToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem gMControlToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem mapsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem itemEditorToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem weaponEditorToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem addonsListToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem skillsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem skillByClassToolStripMenuItem;
    }
}

