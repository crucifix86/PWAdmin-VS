namespace pwAdmin
{
    partial class MainForm
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
            this.leftPanel = new System.Windows.Forms.Panel();
            this.rightPanel = new System.Windows.Forms.Panel();
            this.SuspendLayout();
            // 
            // leftPanel
            // 
            this.leftPanel.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(37)))), ((int)(((byte)(37)))), ((int)(((byte)(38)))));
            this.leftPanel.Dock = System.Windows.Forms.DockStyle.Left;
            this.leftPanel.Location = new System.Drawing.Point(0, 0);
            this.leftPanel.Name = "leftPanel";
            this.leftPanel.Size = new System.Drawing.Size(180, 598);
            this.leftPanel.TabIndex = 0;
            // 
            // rightPanel
            // 
            this.rightPanel.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(45)))), ((int)(((byte)(45)))), ((int)(((byte)(45)))));
            this.rightPanel.Dock = System.Windows.Forms.DockStyle.Fill;
            this.rightPanel.Location = new System.Drawing.Point(180, 0);
            this.rightPanel.Name = "rightPanel";
            this.rightPanel.Size = new System.Drawing.Size(825, 598);
            this.rightPanel.TabIndex = 1;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.ClientSize = new System.Drawing.Size(1005, 598);
            this.Controls.Add(this.rightPanel);
            this.Controls.Add(this.leftPanel);
            this.Name = "MainForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "PWAdmin";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.ResumeLayout(false);
            
            // Create navigation buttons
            CreateNavigationButtons();
        }

        private void CreateNavigationButtons()
        {
            navButtons = new System.Windows.Forms.Button[3];
            
            // Server Management button
            navButtons[0] = new System.Windows.Forms.Button();
            navButtons[0].Text = "📊 Server Management";
            navButtons[0].Location = new System.Drawing.Point(0, 10);
            navButtons[0].Size = new System.Drawing.Size(180, 50);
            navButtons[0].FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            navButtons[0].FlatAppearance.BorderSize = 0;
            navButtons[0].BackColor = System.Drawing.Color.FromArgb(45, 45, 45);
            navButtons[0].ForeColor = System.Drawing.Color.White;
            navButtons[0].Font = new System.Drawing.Font("Segoe UI", 10F, System.Drawing.FontStyle.Regular);
            navButtons[0].TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            navButtons[0].Padding = new System.Windows.Forms.Padding(10, 0, 0, 0);
            navButtons[0].Tag = 0;
            navButtons[0].Click += NavButton_Click;
            leftPanel.Controls.Add(navButtons[0]);
            
            // Account Management button
            navButtons[1] = new System.Windows.Forms.Button();
            navButtons[1].Text = "👥 Account Management";
            navButtons[1].Location = new System.Drawing.Point(0, 65);
            navButtons[1].Size = new System.Drawing.Size(180, 50);
            navButtons[1].FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            navButtons[1].FlatAppearance.BorderSize = 0;
            navButtons[1].BackColor = System.Drawing.Color.FromArgb(45, 45, 45);
            navButtons[1].ForeColor = System.Drawing.Color.White;
            navButtons[1].Font = new System.Drawing.Font("Segoe UI", 10F, System.Drawing.FontStyle.Regular);
            navButtons[1].TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            navButtons[1].Padding = new System.Windows.Forms.Padding(10, 0, 0, 0);
            navButtons[1].Tag = 1;
            navButtons[1].Click += NavButton_Click;
            leftPanel.Controls.Add(navButtons[1]);
            
            // Settings button
            navButtons[2] = new System.Windows.Forms.Button();
            navButtons[2].Text = "⚙️ Settings";
            navButtons[2].Location = new System.Drawing.Point(0, 120);
            navButtons[2].Size = new System.Drawing.Size(180, 50);
            navButtons[2].FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            navButtons[2].FlatAppearance.BorderSize = 0;
            navButtons[2].BackColor = System.Drawing.Color.FromArgb(45, 45, 45);
            navButtons[2].ForeColor = System.Drawing.Color.White;
            navButtons[2].Font = new System.Drawing.Font("Segoe UI", 10F, System.Drawing.FontStyle.Regular);
            navButtons[2].TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            navButtons[2].Padding = new System.Windows.Forms.Padding(10, 0, 0, 0);
            navButtons[2].Tag = 2;
            navButtons[2].Click += NavButton_Click;
            leftPanel.Controls.Add(navButtons[2]);
            
            // Add mouse hover effects
            foreach (var btn in navButtons)
            {
                btn.MouseEnter += (s, e) => {
                    if (btn.BackColor != System.Drawing.Color.FromArgb(0, 122, 204))
                        btn.BackColor = System.Drawing.Color.FromArgb(60, 60, 60);
                };
                btn.MouseLeave += (s, e) => {
                    if (btn.BackColor != System.Drawing.Color.FromArgb(0, 122, 204))
                        btn.BackColor = System.Drawing.Color.FromArgb(45, 45, 45);
                };
            }
        }

        private void MainForm_Load(object sender, System.EventArgs e)
        {
            // Any initialization code
        }

        #endregion
    }
}