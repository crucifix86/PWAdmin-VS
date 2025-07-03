using pwAdmin.DDSReader;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace pwAdmin.Elements
{
    public class Extensions
    {
        public static List<int> HexToDecimal(string octetsData)
        {
            List<int> final = new List<int>();
            string[] valor = Enumerable.Range(0, octetsData.Length)
                             .Where(x => x % 4 == 0)
                             .Select(x => Convert.ToString(octetsData.Substring(x, 4))).ToArray();

            foreach (var val in valor)
            {
                // Parse hex string to bytes, reverse, and convert back to hex
                byte[] bytes = Convert.FromHexString(val);
                Array.Reverse(bytes);
                string output = Convert.ToHexString(bytes);
                final.Add(Convert.ToInt32(output, 16));
            }
            return final;
        }

        public static string ByteArray_to_HexString(byte[] value)
        {
            return BitConverter.ToString(value);
        }
        public static byte[] HexString_to_ByteArray(string value)
        {
            char[] chArray = new char[]
            {
                '-'
            };
            string[] strArray = value.Split(chArray);
            byte[] numArray = new byte[strArray.Length];
            for (int index = 0; index < strArray.Length; index++)
            {
                numArray[index] = Convert.ToByte(strArray[index], 16);
            }
            return numArray;
        }

        public static string ByteArray_to_GbkString(byte[] text)
        {
            Encoding encoding = Encoding.GetEncoding("GBK");
            char[] array = new char[1];
            char[] chArray = array;
            return encoding.GetString(text).Split(chArray)[0];
        }
        public static byte[] GbkString_to_ByteArray(string text, int length)
        {
            Encoding encoding = Encoding.GetEncoding("GBK");
            byte[] numArray = new byte[length];
            byte[] bytes = encoding.GetBytes(text);
            if (numArray.Length > bytes.Length)
            {
                Array.Copy(bytes, numArray, bytes.Length);
            }
            else
            {
                byte[] numArray2 = bytes;
                byte[] numArray3 = numArray;
                int length2 = numArray3.Length;
                Array.Copy(numArray2, numArray3, length2);
            }
            return numArray;
        }
        public static byte[] GbkString_to_ByteArray2(string text, int length)
        {
            Encoding enc = Encoding.GetEncoding("GBK");
            byte[] target = new byte[length];
            byte[] source = enc.GetBytes(text);
            if (target.Length > source.Length)
            {
                Array.Copy(source, target, source.Length);
            }
            else
            {
                Array.Copy(source, target, target.Length);
            }
            return target;
        }

        public static string ByteArray_to_UnicodeString(byte[] text)
        {
            Encoding encoding = Encoding.GetEncoding("Unicode");
            char[] array = new char[1];
            char[] chArray = array;
            return encoding.GetString(text).Split(chArray)[0];
        }
        public static byte[] UnicodeString_to_ByteArray(string text, int length)
        {
            Encoding encoding = Encoding.GetEncoding("Unicode");
            byte[] numArray = new byte[length];
            byte[] bytes = encoding.GetBytes(text);
            if (numArray.Length > bytes.Length)
            {
                Array.Copy(bytes, numArray, bytes.Length);
            }
            else
            {
                byte[] numArray2 = bytes;
                byte[] numArray3 = numArray;
                int length2 = numArray3.Length;
                Array.Copy(numArray2, numArray3, length2);
            }
            return numArray;
        }
        public static byte[] UnicodeString_to_ByteArray2(string text, int length)
        {
            Encoding enc = Encoding.GetEncoding("Unicode");
            byte[] target = new byte[length];
            byte[] source = enc.GetBytes(text);
            if (target.Length > source.Length)
            {
                Array.Copy(source, target, source.Length);
            }
            else
            {
                Array.Copy(source, target, target.Length);
            }
            return target;
        }

        public static string ItemPropsSecondsToString(uint time)
        {
            string result = "";
            uint time1 = time;
            uint days = time / 86400;
            time = time - (days * 86400);
            uint hours = time / 3600;
            time = time - (hours * 3600);
            uint minutes = time / 60;
            uint seconds = time - (minutes * 60);
            if (time1 == 60) seconds = 60;
            if (time1 == 3600) minutes = 60;
            if (time1 == 86400) hours = 60;
            if (time1 <= 60) result = seconds.ToString() + "segundos";
            if (time1 > 60 && time1 <= 3600) result = minutes.ToString() + "minutos" + " " + seconds.ToString() + "segundos";
            if (time1 > 3600 && time1 <= 86400) result = hours.ToString() + "horas" + " " + minutes.ToString() + "minutos";
            if (time1 > 86400) result = days.ToString() + "dias" + " " + hours.ToString() + "horas";
            return result;
        }

        public static string ItemPropsSecondsToString2(uint time)
        {
            string result = "";
            uint time1 = time;
            uint days = time / 86400;
            time = time - (days * 86400);
            uint hours = time / 3600;
            time = time - (hours * 3600);
            uint minutes = time / 60;
            uint seconds = time - (minutes * 60);
            if (time1 == 60) seconds = 60;
            if (time1 == 3600) minutes = 60;
            if (time1 == 86400) hours = 60;
            if (time1 <= 60) result = seconds.ToString() + "segundos";
            if (time1 > 60 && time1 <= 3600) result = minutes.ToString() + "minutos" + " " + seconds.ToString() + "segundos";
            if (time1 > 3600 && time1 <= 86400) result = hours.ToString() + "horas" + " " + minutes.ToString() + "minutos";
            if (time1 > 86400) result = days.ToString() + "dias" + " " + hours.ToString() + "horas";
            return result;
        }

        public static string SecondsToString(uint time)
        {
            uint days = time / 86400;
            time = time - (days * 86400);
            uint hours = time / 3600;
            time = time - (hours * 3600);
            uint minutes = time / 60;
            uint seconds = time - (minutes * 60);
            return (days.ToString("D2") + "-" + hours.ToString("D2") + ":" + minutes.ToString("D2") + ":" + seconds.ToString("D2"));
        }
        public static uint StringToSecond(string time)
        {
            char[] chArray = new char[]
            {
                '-', ':'
            };
            string[] times = time.Split(chArray);
            return (86400 * Convert.ToUInt32(times[0])) + (3600 * Convert.ToUInt32(times[1])) + (60 * Convert.ToUInt32(times[2])) + Convert.ToUInt32(times[3]);
        }

        public static string ConvertToClientX(float x)
        {
            double cx = 400 + Math.Truncate(x * 0.1);
            return cx.ToString();
        }
        public static string ConvertToClientY(float y)
        {
            double cy = Math.Truncate(y * 0.1);
            return cy.ToString();
        }
        public static string ConvertToClientZ(float z)
        {
            double cz = 550 + Math.Truncate(z * 0.1);
            return cz.ToString();
        }

        public static int DigitNumberToInt32(object value)
        {
            string result = Convert.ToString(value).Replace("" + (char)160, "").Replace("" + (char)32, "");
            return Convert.ToInt32(result);
        }

        public static float PercentNumberToSingle(object value, bool EnableShowPercents)
        {
            if (EnableShowPercents == true)
            {
                float result = Convert.ToSingle(Convert.ToString(value).Replace("%", ""));
                return Convert.ToSingle(result * 0.01);
            }
            else
            {
                float result = Convert.ToSingle(value);
                return result;
            }
        }

        public static string ColorClean(string line)
        {
            if (line == "" || line.Length <= 1) { return ""; }
            string[] blocks = line.Split(new char[] { '^' });
            if (blocks.Length > 1)
            {
                string result = "";

                if (blocks[0] != "")
                {
                    result += blocks[0];
                }
                for (int i = 1; i < blocks.Length; i++)
                {
                    if (blocks[i] != "")
                    {
                        result += blocks[i].Substring(6);
                    }
                }

                return result;
            }
            else
            {
                return line;
            }
        }

        public static string ItemDesc(int id, string[] itemDesc)
        {
            string result;
            if (id != 0)
            {
                try
                {
                    int index = -1;
                    for (int num25 = 0; num25 < itemDesc.Length - 1; num25 += 2)
                    {
                        if (Convert.ToInt32(itemDesc[num25 + 0]) == id)
                        {
                            index = num25 + 1;
                            break;
                        }
                    }
                    if (itemDesc.Length > index && index != -1)
                    {
                        result = itemDesc[index];
                    }
                    else
                    {
                        result = "";
                    }
                }
                catch
                {
                    result = "";
                }
            }
            else
            {
                result = "";
            }

            return result.Replace("\\r", Environment.NewLine).Replace("\\t", "" + (char)9);
        }


        public static string SkillName(int id, string[] skillstr)
        {
            string result;
            string nameid = id.ToString() + "0";
            try
            {
                int index = -1;
                for (int num25 = 0; num25 < skillstr.Length - 1; num25 += 4)
                {
                    if (Convert.ToInt32(skillstr[num25 + 0]) == Convert.ToInt32(nameid))
                    {
                        index = num25 + 1;
                        break;
                    }
                }
                result = skillstr[index];
            }
            catch
            {
                result = "";
            }

            return result/*.Replace("\\n", Environment.NewLine).Replace("\\t", "" + (char)9)*/;
        }

        public static string SkillDesc(int id, string[] skillstr)
        {
            string result;
            string descid = id.ToString() + "1";
            try
            {
                int index = -1;
                for (int num25 = 0; num25 < skillstr.Length - 1; num25 += 4)
                {
                    if (Convert.ToInt32(skillstr[num25 + 2]) == Convert.ToInt32(descid))
                    {
                        index = num25 + 3;
                        break;
                    }
                }
                result = skillstr[index];
            }
            catch
            {
                result = "";
            }

            return result.Replace("%%", "%")/*.Replace("\\n", Environment.NewLine).Replace("\\t", "" + (char)9)*/;
        }

        public static string SkillText(int id, string[] skillname, string[] skilldesc)
        {
            string result;
            if (id != 0)
            {
                try
                {
                    string name = Extensions.SkillName(id, skillname);
                    string desc = Extensions.SkillDesc(id, skilldesc);
                    if (name != "" && desc != "")
                    {
                        if (name != "")
                        {
                            if (desc != "")
                            {
                                result = name + "\n\n" + ColorClean(desc);
                            }
                            else
                            {
                                result = name;
                            }
                        }
                        else
                        {
                            result = ColorClean(desc);
                        }
                    }
                    else
                    {
                        result = "";
                    }
                }
                catch
                {
                    result = "";
                }
            }
            else
            {
                result = "";
            }

            return result.Replace("\\n", Environment.NewLine).Replace("\\t", "" + (char)9);
        }

        

    }
}
