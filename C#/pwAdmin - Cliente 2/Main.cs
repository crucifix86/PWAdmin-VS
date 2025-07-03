using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

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
        
        public Main()
        {
            InitializeComponent();
            mainWindow = this;
        }

        public static bool isDebug() { return debugMode; }

        public static Image GetImageSkill(int skillId)
        {
            // Placeholder implementation - should be implemented based on actual requirements
            // This method should load skill images from resources or files
            return null;
        }
    }
}
