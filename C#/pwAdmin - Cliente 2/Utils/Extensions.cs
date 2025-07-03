using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using System.Text;

namespace pwAdmin
{
    public class Extensions
    {
        public static string[] HexToDecimal2(string octetsData)
        {
            List<string> final = new List<string>();
            var valor = Enumerable.Range(0, octetsData.Length / 8)
        .Select(i => octetsData.Substring(i * 8, 8)).ToArray();

            foreach (var val in valor)
            {
                // Parse hex string to bytes, reverse, and convert back to hex
                byte[] bytes = Convert.FromHexString(val);
                Array.Reverse(bytes);
                string output = Convert.ToHexString(bytes);
                final.Add(output);
            }

            return final.ToArray();
        }
        public static string[] DivideEm2(string divide)
        {
            return Enumerable.Range(0, divide.Length / 2)
        .Select(i => divide.Substring(i * 2, 2)).ToArray();
        }
        public static byte[] DivideEm2Byte(string divide)
        {
            return Enumerable.Range(0, divide.Length / 2)
        .Select(i => Convert.ToByte(divide.Substring(i * 2, 2), 16)).ToArray();
        }
        public static string[] DivideEm4(string divide)
        {
            return Enumerable.Range(0, divide.Length / 4)
        .Select(i => divide.Substring(i * 4, 4)).Reverse().ToArray();
        }

        public static string[] DivideEm8(string divide)
        {
            return Enumerable.Range(0, divide.Length / 8)
        .Select(i => divide.Substring(i * 8, 8)).ToArray();
        }

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

        public static byte[] StringToByteArray(string hex)
        {
            return Enumerable.Range(0, hex.Length)
                             .Where(x => x % 2 == 0)
                             .Select(x => Convert.ToByte(hex.Substring(x, 2), 16))
                             .ToArray();
        }

        public static byte[] StringToByteArrayReverse(string hex)
        {
            return Enumerable.Range(0, hex.Length)
                             .Where(x => x % 2 == 0)
                             .Select(x => Convert.ToByte(hex.Substring(x, 2), 16))
                             .Reverse()
                             .ToArray();
        }

        public static string ByteArray_to_HexString(byte[] value)
        {
            return BitConverter.ToString(value);
        }

        public static string OctetsToHex(Octets value)
        {
            return BitConverter.ToString(value.getBytes()).Replace("-", "").ToLower();
        }
        public static string OctetsToReverseHex(Octets value)
        {
            return BitConverter.ToString(value.getBytes().Reverse().ToArray()).Replace("-", "").ToLower();
        }

        public static string HexStringToFloat(string hexString)
        {
            byte[] s = StringToByteArray(hexString);
            Array.Reverse(s);
            return BitConverter.ToSingle(s, 0).ToString("f6");
        }

        public static int HexStringToInt32(string hexString)
        {
            return Convert.ToInt32(hexString, 16);
        }

        public static int HexStringToInt16(string hexString)
        {
            return Convert.ToInt16(hexString, 8);
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

        public static string ByteArray_to_UTF8String(byte[] text)
        {
            Encoding encoding = Encoding.UTF8;
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

        public static string UnixTimeStampToDateTime(uint unixTimeStamp)
        {
            if (unixTimeStamp == 0) return null;
            System.DateTime dtDateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, System.DateTimeKind.Utc);
            dtDateTime = dtDateTime.AddSeconds(unixTimeStamp).ToLocalTime();
            return dtDateTime.ToString();
        }

        // Formato mm/dd/aaaa hh:mm:ss
        public static long StringDateTimeToUnixTimeStamp(string data)
        {
            DateTime foo = Convert.ToDateTime(data);
            long unixTime = ((DateTimeOffset)foo).ToUnixTimeSeconds();
            return unixTime;
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

        public static Dictionary<int, string> ListItemDesc(string[] itemDesc)
        {
            Dictionary<int, string> lista = new Dictionary<int, string>();
            string result;
            string id;
            try
            {
                int index = -1;

                for (int num25 = 0; num25 < itemDesc.Length - 1; num25 += 2)
                {

                    index = num25 + 1;

                    if (itemDesc.Length > index && index != -1)
                    {

                        result = itemDesc[index];
                        result.Replace("\\r", Environment.NewLine).Replace("\\t", "" + (char)9);
                        id = itemDesc[num25];
                        lista.Add(Convert.ToInt32(id), result);
                    }
                }
            }
            catch
            {
                result = "";
            }

            return lista;
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

        public static List<KeyValuePair<int, string>> SkillNameToList(string[] skillstr)
        {
            List<KeyValuePair<int, string>> result = new List<KeyValuePair<int, string>>();
            for (int id = 1; id <= 2865; ++id)
            {
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
                    result.Add(new KeyValuePair<int, string>(id, skillstr[index]));
                }
                catch (Exception e)
                {
                }
            }
            return result;
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

        public static Dictionary<int, string> ListSkillDesc(string[] skillstr)
        {
            Dictionary<int, string> result = new Dictionary<int, string>();
            for (int id = 1; id <= 2865; ++id)
            {
                string nameid = id.ToString() + "1";
                try
                {
                    int index = -1;
                    for (int num25 = 0; num25 < skillstr.Length - 1; num25 += 4)
                    {
                        if (Convert.ToInt32(skillstr[num25 + 2]) == Convert.ToInt32(nameid))
                        {
                            index = num25 + 3;
                            break;
                        }

                    }
                    result.Add(id, skillstr[index]);
                }
                catch (Exception e)
                {
                }
            }
            return result;
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

        public static Bitmap GetItemImage(int id)
        {
            for (int l = 0; l < Main.eLC.Lists.Length; l++)
            {
                if (l != Main.eLC.ConversationListIndex)
                {
                    if (!Main.eLC.Lists[l].listName.Contains("_ESSENCE"))
                        continue;
                    int pos2 = -1;
                    for (int i = 0; i < Main.eLC.Lists[l].elementFields.Length; i++)
                    {
                        if (Main.eLC.Lists[l].elementFields[i] == "file_icon" || Main.eLC.Lists[l].elementFields[i] == "file_icon1")
                        {
                            pos2 = i;
                        }
                        if (pos2 != -1) { break; }
                    }

                    for (int e = 0; e < Main.eLC.Lists[l].elementValues.Length; e++)
                    {
                        if (Main.eLC.Lists[l].elementFields[0] == "ID")
                        {
                            if (Main.eLC.GetValue(l, e, 0) == id.ToString())
                            {
                                Bitmap img = Properties.Resources.blank;
                                string path = Path.GetFileName(Main.eLC.GetValue(l, e, pos2));
                                img = Main.images(path);
                                return img;
                            }
                        }
                        else
                        {
                            return Properties.Resources._0;
                        }
                    }
                }
            }
            return Properties.Resources._0;
        }

        public static List<int> GetPetEvolutionMaxAttr(int idPet)
        {
            int l = -1;
            List<int> evomax = new List<int>();
            for (int i = 0; i < Main.eLC.Lists.Length; i++)
            {
                if (Main.eLC.Lists[i].listName.Contains("PET_ESSENCE"))
                    l = i;
            }

            for (int e = 0; e < Main.eLC.Lists[l].elementValues.Length; e++)
            {
                if (Main.eLC.Lists[l].elementFields[0] == "ID")
                {
                    if (Main.eLC.GetValue(l, e, 0) == idPet.ToString())
                    {
                        evomax.Add(int.Parse(Main.eLC.GetValue(l, e, 55)));
                        evomax.Add(int.Parse(Main.eLC.GetValue(l, e, 56)));
                        evomax.Add(int.Parse(Main.eLC.GetValue(l, e, 54)));
                        evomax.Add(int.Parse(Main.eLC.GetValue(l, e, 57)));
                        evomax.Add(int.Parse(Main.eLC.GetValue(l, e, 58)));
                        return evomax;
                    }
                }
                else
                {
                    return null;
                }
            }
            return null;
        }

        public static string GetItemName(int id)
        {
            for (int l = 0; l < Main.eLC.Lists.Length; l++)
            {
                if (l != Main.eLC.ConversationListIndex)
                {
                    if (!Main.eLC.Lists[l].listName.Contains("_ESSENCE"))
                        continue;
                    // Find Position for Name
                    int pos = -1;
                    int pos2 = -1;
                    for (int i = 0; i < Main.eLC.Lists[l].elementFields.Length; i++)
                    {
                        if (Main.eLC.Lists[l].elementFields[i] == "Name")
                        {
                            pos = i;
                        }
                        if (pos != -1) { break; }
                    }

                    for (int e = 0; e < Main.eLC.Lists[l].elementValues.Length; e++)
                    {
                        if (Main.eLC.Lists[l].elementFields[0] == "ID")
                        {
                            if (Main.eLC.GetValue(l, e, 0) == id.ToString())
                                return Main.eLC.GetValue(l, e, pos);
                        }
                        else

                        {
                            return "";
                        }
                    }
                }
            }
            return "";
        }

        public static string GetPetNatureName(int id)
        {
            for (int l = 0; l < Main.eLC.Lists.Length; l++)
            {
                if (l != Main.eLC.ConversationListIndex)
                {
                    if (!Main.eLC.Lists[l].listName.Contains("PET_EVOLVED"))
                        continue;
                    // Find Position for Name
                    int pos = -1;
                    int pos2 = -1;
                    for (int i = 0; i < Main.eLC.Lists[l].elementFields.Length; i++)
                    {
                        if (Main.eLC.Lists[l].elementFields[i] == "Name")
                        {
                            pos = i;
                        }
                        if (pos != -1) { break; }
                    }

                    for (int e = 0; e < Main.eLC.Lists[l].elementValues.Length; e++)
                    {
                        if (Main.eLC.Lists[l].elementFields[0] == "ID")
                        {
                            if (Main.eLC.GetValue(l, e, 0) == id.ToString())
                                return Main.eLC.GetValue(l, e, pos);
                        }
                        else

                        {
                            return "";
                        }
                    }
                }
            }
            return "";
        }

        public static Bitmap ResizeImage(Image image, int width, int height)
        {
            var destRect = new Rectangle(0, 0, width, height);
            var destImage = new Bitmap(width, height);
            try
            {

                destImage.SetResolution(image.HorizontalResolution, image.VerticalResolution);

                using (var graphics = Graphics.FromImage(destImage))
                {
                    graphics.CompositingMode = CompositingMode.SourceCopy;
                    graphics.CompositingQuality = CompositingQuality.HighQuality;
                    graphics.InterpolationMode = InterpolationMode.HighQualityBicubic;
                    graphics.SmoothingMode = SmoothingMode.HighQuality;
                    graphics.PixelOffsetMode = PixelOffsetMode.HighQuality;

                    using (var wrapMode = new ImageAttributes())
                    {
                        wrapMode.SetWrapMode(WrapMode.TileFlipXY);

                        graphics.DrawImage(image, destRect, 0, 0, image.Width, image.Height, GraphicsUnit.Pixel, wrapMode);
                    }
                }

                return destImage;
            }
            catch (Exception)
            {


            }
            return destImage;
        }

    }
}
