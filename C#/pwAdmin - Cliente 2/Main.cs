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
        public Main()
        {
            InitializeComponent();
        }

        public static bool isDebug() { return debugMode; }
    }
}
