namespace pwAdmin
{
    partial class SettingsForm
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
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabServer = new System.Windows.Forms.TabPage();
            this.btnTestServerConnection = new System.Windows.Forms.Button();
            this.nudServerPort = new System.Windows.Forms.NumericUpDown();
            this.label2 = new System.Windows.Forms.Label();
            this.txtServerIP = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.tabDatabase = new System.Windows.Forms.TabPage();
            this.btnTestDBConnection = new System.Windows.Forms.Button();
            this.txtDBPassword = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.txtDBUser = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.txtDBName = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.nudDBPort = new System.Windows.Forms.NumericUpDown();
            this.label4 = new System.Windows.Forms.Label();
            this.txtDBHost = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.tabClient = new System.Windows.Forms.TabPage();
            this.btnBrowseElements = new System.Windows.Forms.Button();
            this.txtElementsPath = new System.Windows.Forms.TextBox();
            this.label10 = new System.Windows.Forms.Label();
            this.btnBrowseClient = new System.Windows.Forms.Button();
            this.txtClientPath = new System.Windows.Forms.TextBox();
            this.label9 = new System.Windows.Forms.Label();
            this.txtKey2 = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.txtKey1 = new System.Windows.Forms.TextBox();
            this.label11 = new System.Windows.Forms.Label();
            this.btnSave = new System.Windows.Forms.Button();
            this.btnCancel = new System.Windows.Forms.Button();
            this.tabControl1.SuspendLayout();
            this.tabServer.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.nudServerPort)).BeginInit();
            this.tabDatabase.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.nudDBPort)).BeginInit();
            this.tabClient.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabServer);
            this.tabControl1.Controls.Add(this.tabDatabase);
            this.tabControl1.Controls.Add(this.tabClient);
            this.tabControl1.Location = new System.Drawing.Point(12, 12);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(460, 287);
            this.tabControl1.TabIndex = 0;
            // 
            // tabServer
            // 
            this.tabServer.Controls.Add(this.btnTestServerConnection);
            this.tabServer.Controls.Add(this.nudServerPort);
            this.tabServer.Controls.Add(this.label2);
            this.tabServer.Controls.Add(this.txtServerIP);
            this.tabServer.Controls.Add(this.label1);
            this.tabServer.Location = new System.Drawing.Point(4, 22);
            this.tabServer.Name = "tabServer";
            this.tabServer.Padding = new System.Windows.Forms.Padding(3);
            this.tabServer.Size = new System.Drawing.Size(452, 261);
            this.tabServer.TabIndex = 0;
            this.tabServer.Text = "Server";
            this.tabServer.UseVisualStyleBackColor = true;
            // 
            // btnTestServerConnection
            // 
            this.btnTestServerConnection.Location = new System.Drawing.Point(89, 85);
            this.btnTestServerConnection.Name = "btnTestServerConnection";
            this.btnTestServerConnection.Size = new System.Drawing.Size(120, 23);
            this.btnTestServerConnection.TabIndex = 4;
            this.btnTestServerConnection.Text = "Test Connection";
            this.btnTestServerConnection.UseVisualStyleBackColor = true;
            this.btnTestServerConnection.Click += new System.EventHandler(this.btnTestServerConnection_Click);
            // 
            // nudServerPort
            // 
            this.nudServerPort.Location = new System.Drawing.Point(89, 46);
            this.nudServerPort.Maximum = new decimal(new int[] {
            65535,
            0,
            0,
            0});
            this.nudServerPort.Name = "nudServerPort";
            this.nudServerPort.Size = new System.Drawing.Size(120, 20);
            this.nudServerPort.TabIndex = 3;
            this.nudServerPort.Value = new decimal(new int[] {
            29000,
            0,
            0,
            0});
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(20, 48);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(63, 13);
            this.label2.TabIndex = 2;
            this.label2.Text = "Server Port:";
            // 
            // txtServerIP
            // 
            this.txtServerIP.Location = new System.Drawing.Point(89, 20);
            this.txtServerIP.Name = "txtServerIP";
            this.txtServerIP.Size = new System.Drawing.Size(200, 20);
            this.txtServerIP.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(29, 23);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(54, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Server IP:";
            // 
            // tabDatabase
            // 
            this.tabDatabase.Controls.Add(this.btnTestDBConnection);
            this.tabDatabase.Controls.Add(this.txtDBPassword);
            this.tabDatabase.Controls.Add(this.label7);
            this.tabDatabase.Controls.Add(this.txtDBUser);
            this.tabDatabase.Controls.Add(this.label6);
            this.tabDatabase.Controls.Add(this.txtDBName);
            this.tabDatabase.Controls.Add(this.label5);
            this.tabDatabase.Controls.Add(this.nudDBPort);
            this.tabDatabase.Controls.Add(this.label4);
            this.tabDatabase.Controls.Add(this.txtDBHost);
            this.tabDatabase.Controls.Add(this.label3);
            this.tabDatabase.Location = new System.Drawing.Point(4, 22);
            this.tabDatabase.Name = "tabDatabase";
            this.tabDatabase.Padding = new System.Windows.Forms.Padding(3);
            this.tabDatabase.Size = new System.Drawing.Size(452, 261);
            this.tabDatabase.TabIndex = 1;
            this.tabDatabase.Text = "Database";
            this.tabDatabase.UseVisualStyleBackColor = true;
            // 
            // btnTestDBConnection
            // 
            this.btnTestDBConnection.Location = new System.Drawing.Point(89, 176);
            this.btnTestDBConnection.Name = "btnTestDBConnection";
            this.btnTestDBConnection.Size = new System.Drawing.Size(120, 23);
            this.btnTestDBConnection.TabIndex = 10;
            this.btnTestDBConnection.Text = "Test Connection";
            this.btnTestDBConnection.UseVisualStyleBackColor = true;
            this.btnTestDBConnection.Click += new System.EventHandler(this.btnTestDBConnection_Click);
            // 
            // txtDBPassword
            // 
            this.txtDBPassword.Location = new System.Drawing.Point(89, 124);
            this.txtDBPassword.Name = "txtDBPassword";
            this.txtDBPassword.PasswordChar = '*';
            this.txtDBPassword.Size = new System.Drawing.Size(200, 20);
            this.txtDBPassword.TabIndex = 9;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(27, 127);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(56, 13);
            this.label7.TabIndex = 8;
            this.label7.Text = "Password:";
            // 
            // txtDBUser
            // 
            this.txtDBUser.Location = new System.Drawing.Point(89, 98);
            this.txtDBUser.Name = "txtDBUser";
            this.txtDBUser.Size = new System.Drawing.Size(200, 20);
            this.txtDBUser.TabIndex = 7;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(20, 101);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(63, 13);
            this.label6.TabIndex = 6;
            this.label6.Text = "User Name:";
            // 
            // txtDBName
            // 
            this.txtDBName.Location = new System.Drawing.Point(89, 72);
            this.txtDBName.Name = "txtDBName";
            this.txtDBName.Size = new System.Drawing.Size(200, 20);
            this.txtDBName.TabIndex = 5;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(42, 75);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(41, 13);
            this.label5.TabIndex = 4;
            this.label5.Text = "DB Name:";
            // 
            // nudDBPort
            // 
            this.nudDBPort.Location = new System.Drawing.Point(89, 46);
            this.nudDBPort.Maximum = new decimal(new int[] {
            65535,
            0,
            0,
            0});
            this.nudDBPort.Name = "nudDBPort";
            this.nudDBPort.Size = new System.Drawing.Size(120, 20);
            this.nudDBPort.TabIndex = 3;
            this.nudDBPort.Value = new decimal(new int[] {
            3306,
            0,
            0,
            0});
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(54, 48);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(29, 13);
            this.label4.TabIndex = 2;
            this.label4.Text = "Port:";
            // 
            // txtDBHost
            // 
            this.txtDBHost.Location = new System.Drawing.Point(89, 20);
            this.txtDBHost.Name = "txtDBHost";
            this.txtDBHost.Size = new System.Drawing.Size(200, 20);
            this.txtDBHost.TabIndex = 1;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(51, 23);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(32, 13);
            this.label3.TabIndex = 0;
            this.label3.Text = "Host:";
            // 
            // tabClient
            // 
            this.tabClient.Controls.Add(this.btnBrowseElements);
            this.tabClient.Controls.Add(this.txtElementsPath);
            this.tabClient.Controls.Add(this.label10);
            this.tabClient.Controls.Add(this.btnBrowseClient);
            this.tabClient.Controls.Add(this.txtClientPath);
            this.tabClient.Controls.Add(this.label9);
            this.tabClient.Controls.Add(this.txtKey2);
            this.tabClient.Controls.Add(this.label8);
            this.tabClient.Controls.Add(this.txtKey1);
            this.tabClient.Controls.Add(this.label11);
            this.tabClient.Location = new System.Drawing.Point(4, 22);
            this.tabClient.Name = "tabClient";
            this.tabClient.Size = new System.Drawing.Size(452, 261);
            this.tabClient.TabIndex = 2;
            this.tabClient.Text = "Client Files";
            this.tabClient.UseVisualStyleBackColor = true;
            // 
            // btnBrowseElements
            // 
            this.btnBrowseElements.Location = new System.Drawing.Point(355, 71);
            this.btnBrowseElements.Name = "btnBrowseElements";
            this.btnBrowseElements.Size = new System.Drawing.Size(75, 23);
            this.btnBrowseElements.TabIndex = 11;
            this.btnBrowseElements.Text = "Browse...";
            this.btnBrowseElements.UseVisualStyleBackColor = true;
            this.btnBrowseElements.Click += new System.EventHandler(this.btnBrowseElements_Click);
            // 
            // txtElementsPath
            // 
            this.txtElementsPath.Location = new System.Drawing.Point(89, 72);
            this.txtElementsPath.Name = "txtElementsPath";
            this.txtElementsPath.Size = new System.Drawing.Size(260, 20);
            this.txtElementsPath.TabIndex = 10;
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Location = new System.Drawing.Point(10, 75);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(73, 13);
            this.label10.TabIndex = 9;
            this.label10.Text = "Elements File:";
            // 
            // btnBrowseClient
            // 
            this.btnBrowseClient.Location = new System.Drawing.Point(355, 19);
            this.btnBrowseClient.Name = "btnBrowseClient";
            this.btnBrowseClient.Size = new System.Drawing.Size(75, 23);
            this.btnBrowseClient.TabIndex = 8;
            this.btnBrowseClient.Text = "Browse...";
            this.btnBrowseClient.UseVisualStyleBackColor = true;
            this.btnBrowseClient.Click += new System.EventHandler(this.btnBrowseClient_Click);
            // 
            // txtClientPath
            // 
            this.txtClientPath.Location = new System.Drawing.Point(89, 20);
            this.txtClientPath.Name = "txtClientPath";
            this.txtClientPath.Size = new System.Drawing.Size(260, 20);
            this.txtClientPath.TabIndex = 7;
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(23, 23);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(60, 13);
            this.label9.TabIndex = 6;
            this.label9.Text = "Client Path:";
            // 
            // txtKey2
            // 
            this.txtKey2.Location = new System.Drawing.Point(89, 150);
            this.txtKey2.Name = "txtKey2";
            this.txtKey2.Size = new System.Drawing.Size(200, 20);
            this.txtKey2.TabIndex = 5;
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(20, 153);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(63, 13);
            this.label8.TabIndex = 4;
            this.label8.Text = "PCK Key 2:";
            // 
            // txtKey1
            // 
            this.txtKey1.Location = new System.Drawing.Point(89, 124);
            this.txtKey1.Name = "txtKey1";
            this.txtKey1.Size = new System.Drawing.Size(200, 20);
            this.txtKey1.TabIndex = 3;
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(20, 127);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(63, 13);
            this.label11.TabIndex = 2;
            this.label11.Text = "PCK Key 1:";
            // 
            // btnSave
            // 
            this.btnSave.Location = new System.Drawing.Point(316, 305);
            this.btnSave.Name = "btnSave";
            this.btnSave.Size = new System.Drawing.Size(75, 23);
            this.btnSave.TabIndex = 1;
            this.btnSave.Text = "Save";
            this.btnSave.UseVisualStyleBackColor = true;
            this.btnSave.Click += new System.EventHandler(this.btnSave_Click);
            // 
            // btnCancel
            // 
            this.btnCancel.Location = new System.Drawing.Point(397, 305);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(75, 23);
            this.btnCancel.TabIndex = 2;
            this.btnCancel.Text = "Cancel";
            this.btnCancel.UseVisualStyleBackColor = true;
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            // 
            // SettingsForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(484, 341);
            this.Controls.Add(this.btnCancel);
            this.Controls.Add(this.btnSave);
            this.Controls.Add(this.tabControl1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "SettingsForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
            this.Text = "Settings";
            this.tabControl1.ResumeLayout(false);
            this.tabServer.ResumeLayout(false);
            this.tabServer.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.nudServerPort)).EndInit();
            this.tabDatabase.ResumeLayout(false);
            this.tabDatabase.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.nudDBPort)).EndInit();
            this.tabClient.ResumeLayout(false);
            this.tabClient.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabServer;
        private System.Windows.Forms.TabPage tabDatabase;
        private System.Windows.Forms.TabPage tabClient;
        private System.Windows.Forms.Button btnSave;
        private System.Windows.Forms.Button btnCancel;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtServerIP;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.NumericUpDown nudServerPort;
        private System.Windows.Forms.Button btnTestServerConnection;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtDBHost;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.NumericUpDown nudDBPort;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtDBName;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox txtDBUser;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox txtDBPassword;
        private System.Windows.Forms.Button btnTestDBConnection;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox txtKey1;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.TextBox txtClientPath;
        private System.Windows.Forms.Button btnBrowseClient;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.TextBox txtElementsPath;
        private System.Windows.Forms.Button btnBrowseElements;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.TextBox txtKey2;
    }
}