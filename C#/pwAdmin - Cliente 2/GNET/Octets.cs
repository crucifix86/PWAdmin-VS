using System;
using System.Text;

namespace GNET
{
    /// <summary>
    /// Wrapper for raw byte arrays with string conversion utilities
    /// </summary>
    public class Octets : ICloneable
    {
        private byte[] buffer;
        private int count;

        public Octets()
        {
            buffer = Array.Empty<byte>();
            count = 0;
        }

        public Octets(byte[] data)
        {
            buffer = data ?? Array.Empty<byte>();
            count = buffer.Length;
        }

        public Octets(int size)
        {
            buffer = new byte[size];
            count = 0;
        }

        public void replace(byte[] data)
        {
            buffer = data ?? Array.Empty<byte>();
            count = buffer.Length;
        }

        public void setString(string str)
        {
            if (string.IsNullOrEmpty(str))
            {
                buffer = Array.Empty<byte>();
                count = 0;
            }
            else
            {
                buffer = Encoding.Unicode.GetBytes(str);
                count = buffer.Length;
            }
        }

        public string getString()
        {
            if (count == 0 || buffer.Length == 0)
                return string.Empty;
            
            return Encoding.Unicode.GetString(buffer, 0, count);
        }

        public byte[] getBytes()
        {
            if (count == buffer.Length)
                return buffer;
            
            byte[] result = new byte[count];
            Array.Copy(buffer, 0, result, 0, count);
            return result;
        }

        public int size()
        {
            return count;
        }

        public void resize(int size)
        {
            if (size > buffer.Length)
            {
                byte[] newBuffer = new byte[size];
                Array.Copy(buffer, 0, newBuffer, 0, count);
                buffer = newBuffer;
            }
            count = Math.Min(size, buffer.Length);
        }

        public object Clone()
        {
            return new Octets(getBytes());
        }
    }
}