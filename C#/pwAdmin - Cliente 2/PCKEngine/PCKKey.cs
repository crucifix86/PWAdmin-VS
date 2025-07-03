﻿using pwAdmin.Properties;

namespace pwAdmin.PCKEngine
{
    public class PCKKey
    {
        public int KEY_1 = string.IsNullOrEmpty(pwAdmin.Properties.Settings.Default.key1) ? 0 : int.Parse(pwAdmin.Properties.Settings.Default.key1);
        public int KEY_2 = string.IsNullOrEmpty(pwAdmin.Properties.Settings.Default.key2) ? 0 : int.Parse(pwAdmin.Properties.Settings.Default.key2);
        public int ASIG_1 = -33685778;
        public int ASIG_2 = -267534609;
        public int FSIG_1 = 1305093103;
        public int FSIG_2 = 1453361591;

        public PCKKey()
        {

        }

        public PCKKey(int key1, int key2)
        {
            KEY_1 = key1;
            KEY_2 = key2;
        }

        public PCKKey(int key1, int key2, int asig1, int asig2, int fsig1, int fsig2)
        {
            KEY_1 = key1;
            KEY_2 = key2;
            ASIG_1 = asig1;
            ASIG_2 = asig2;
            FSIG_1 = fsig1;
            FSIG_2 = fsig2;
        }
    }
}
