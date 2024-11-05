namespace pwAdmin.Forms.Gerenciador
{
    partial class Mapas
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Mapas));
            this.listMaps = new System.Windows.Forms.ListView();
            this.Tag = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.Map = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.simpleButton1 = new DevExpress.XtraEditors.SimpleButton();
            this.simpleButton2 = new DevExpress.XtraEditors.SimpleButton();
            this.SuspendLayout();
            // 
            // listMaps
            // 
            this.listMaps.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(30)))), ((int)(((byte)(30)))), ((int)(((byte)(30)))));
            this.listMaps.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.listMaps.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.Map,
            this.Tag});
            this.listMaps.Font = new System.Drawing.Font("Microsoft JhengHei UI", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.listMaps.ForeColor = System.Drawing.Color.White;
            this.listMaps.FullRowSelect = true;
            this.listMaps.HeaderStyle = System.Windows.Forms.ColumnHeaderStyle.Nonclickable;
            this.listMaps.HideSelection = false;
            this.listMaps.Location = new System.Drawing.Point(11, 11);
            this.listMaps.Margin = new System.Windows.Forms.Padding(2);
            this.listMaps.Name = "listMaps";
            this.listMaps.Size = new System.Drawing.Size(400, 533);
            this.listMaps.TabIndex = 4;
            this.listMaps.UseCompatibleStateImageBehavior = false;
            this.listMaps.View = System.Windows.Forms.View.Details;
            // 
            // Tag
            // 
            this.Tag.Text = "Tag";
            this.Tag.Width = 80;
            // 
            // Map
            // 
            this.Map.Text = "Instâncias";
            this.Map.Width = 320;
            // 
            // simpleButton1
            // 
            this.simpleButton1.ImageOptions.Image = ((System.Drawing.Image)(resources.GetObject("simpleButton1.ImageOptions.Image")));
            this.simpleButton1.ImageOptions.ImageToTextAlignment = DevExpress.XtraEditors.ImageAlignToText.LeftCenter;
            this.simpleButton1.Location = new System.Drawing.Point(11, 549);
            this.simpleButton1.Name = "simpleButton1";
            this.simpleButton1.Size = new System.Drawing.Size(198, 40);
            this.simpleButton1.TabIndex = 5;
            this.simpleButton1.Text = "Iniciar";
            this.simpleButton1.Click += new System.EventHandler(this.simpleButton1_Click);
            // 
            // simpleButton2
            // 
            this.simpleButton2.ImageOptions.Image = ((System.Drawing.Image)(resources.GetObject("simpleButton2.ImageOptions.Image")));
            this.simpleButton2.ImageOptions.ImageToTextAlignment = DevExpress.XtraEditors.ImageAlignToText.LeftCenter;
            this.simpleButton2.Location = new System.Drawing.Point(213, 549);
            this.simpleButton2.Name = "simpleButton2";
            this.simpleButton2.Size = new System.Drawing.Size(198, 40);
            this.simpleButton2.TabIndex = 5;
            this.simpleButton2.Text = "Cancelar";
            this.simpleButton2.Click += new System.EventHandler(this.simpleButton2_Click);
            // 
            // Mapas
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(421, 601);
            this.Controls.Add(this.simpleButton2);
            this.Controls.Add(this.simpleButton1);
            this.Controls.Add(this.listMaps);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Mapas";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Iniciar instâncias selecionadas...";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListView listMaps;
        private System.Windows.Forms.ColumnHeader Tag;
        private System.Windows.Forms.ColumnHeader Map;
        private DevExpress.XtraEditors.SimpleButton simpleButton1;
        private DevExpress.XtraEditors.SimpleButton simpleButton2;
    }
}