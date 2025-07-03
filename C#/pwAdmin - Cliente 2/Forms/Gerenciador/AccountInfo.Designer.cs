namespace pwAdmin
{
    partial class AccountInfo
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(AccountInfo));
            this.labelControl1 = new System.Windows.Forms.Label();
            this.tbID = new System.Windows.Forms.TextBox();
            this.labelControl2 = new System.Windows.Forms.Label();
            this.tbUser = new System.Windows.Forms.TextBox();
            this.labelControl3 = new System.Windows.Forms.Label();
            this.tbName = new System.Windows.Forms.TextBox();
            this.labelControl4 = new System.Windows.Forms.Label();
            this.tbPasswd = new System.Windows.Forms.TextBox();
            this.labelControl5 = new System.Windows.Forms.Label();
            this.tbEmail = new System.Windows.Forms.TextBox();
            this.btnCancel = new System.Windows.Forms.Button();
            this.btnOk = new System.Windows.Forms.Button();
            // Removed .Properties references for standard TextBox controls
            this.SuspendLayout();
            // 
            // labelControl1
            // 
            this.labelControl1.Location = new System.Drawing.Point(43, 14);
            this.labelControl1.Name = "labelControl1";
            this.labelControl1.Size = new System.Drawing.Size(12, 15);
            this.labelControl1.TabIndex = 0;
            this.labelControl1.Text = "ID";
            // 
            // tbID
            // 
            this.tbID.Location = new System.Drawing.Point(61, 11);
            this.tbID.Name = "tbID";
            this.tbID.Size = new System.Drawing.Size(211, 22);
            this.tbID.TabIndex = 1;
            // 
            // labelControl2
            // 
            this.labelControl2.Location = new System.Drawing.Point(12, 42);
            this.labelControl2.Name = "labelControl2";
            this.labelControl2.Size = new System.Drawing.Size(43, 15);
            this.labelControl2.TabIndex = 0;
            this.labelControl2.Text = "Usuario";
            // 
            // tbUser
            // 
            this.tbUser.Location = new System.Drawing.Point(61, 39);
            this.tbUser.Name = "tbUser";
            this.tbUser.Size = new System.Drawing.Size(211, 22);
            this.tbUser.TabIndex = 1;
            // 
            // labelControl3
            // 
            this.labelControl3.Location = new System.Drawing.Point(19, 70);
            this.labelControl3.Name = "labelControl3";
            this.labelControl3.Size = new System.Drawing.Size(36, 15);
            this.labelControl3.TabIndex = 0;
            this.labelControl3.Text = "Nome";
            // 
            // tbName
            // 
            this.tbName.Location = new System.Drawing.Point(61, 67);
            this.tbName.Name = "tbName";
            this.tbName.Size = new System.Drawing.Size(211, 22);
            this.tbName.TabIndex = 1;
            // 
            // labelControl4
            // 
            this.labelControl4.Location = new System.Drawing.Point(20, 98);
            this.labelControl4.Name = "labelControl4";
            this.labelControl4.Size = new System.Drawing.Size(35, 15);
            this.labelControl4.TabIndex = 0;
            this.labelControl4.Text = "Senha";
            // 
            // tbPasswd
            // 
            this.tbPasswd.Location = new System.Drawing.Point(61, 95);
            this.tbPasswd.Name = "tbPasswd";
            this.tbPasswd.Size = new System.Drawing.Size(211, 22);
            this.tbPasswd.TabIndex = 1;
            // 
            // labelControl5
            // 
            this.labelControl5.Location = new System.Drawing.Point(18, 126);
            this.labelControl5.Name = "labelControl5";
            this.labelControl5.Size = new System.Drawing.Size(37, 15);
            this.labelControl5.TabIndex = 0;
            this.labelControl5.Text = "E-Mail";
            // 
            // tbEmail
            // 
            this.tbEmail.Location = new System.Drawing.Point(61, 123);
            this.tbEmail.Name = "tbEmail";
            this.tbEmail.Size = new System.Drawing.Size(211, 22);
            this.tbEmail.TabIndex = 1;
            // 
            // btnCancel
            // 
            this.btnCancel.Location = new System.Drawing.Point(168, 153);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(104, 40);
            this.btnCancel.TabIndex = 112;
            this.btnCancel.Text = "Cancelar";
            // 
            // btnOk
            // 
            this.btnOk.Location = new System.Drawing.Point(61, 153);
            this.btnOk.Name = "btnOk";
            this.btnOk.Size = new System.Drawing.Size(104, 40);
            this.btnOk.TabIndex = 113;
            this.btnOk.Text = "Confirmar";
            // 
            // AccountInfo
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(316, 205);
            this.Controls.Add(this.btnCancel);
            this.Controls.Add(this.btnOk);
            this.Controls.Add(this.tbPasswd);
            this.Controls.Add(this.labelControl4);
            this.Controls.Add(this.tbName);
            this.Controls.Add(this.labelControl3);
            this.Controls.Add(this.tbUser);
            this.Controls.Add(this.labelControl2);
            this.Controls.Add(this.tbEmail);
            this.Controls.Add(this.labelControl5);
            this.Controls.Add(this.tbID);
            this.Controls.Add(this.labelControl1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "AccountInfo";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Informações da Conta";
            // Removed .Properties references for standard TextBox controls
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labelControl1;
        private System.Windows.Forms.TextBox tbID;
        private System.Windows.Forms.Label labelControl2;
        private System.Windows.Forms.TextBox tbUser;
        private System.Windows.Forms.Label labelControl3;
        private System.Windows.Forms.TextBox tbName;
        private System.Windows.Forms.Label labelControl4;
        private System.Windows.Forms.TextBox tbPasswd;
        private System.Windows.Forms.Label labelControl5;
        private System.Windows.Forms.TextBox tbEmail;
        private System.Windows.Forms.Button btnCancel;
        private System.Windows.Forms.Button btnOk;
    }
}