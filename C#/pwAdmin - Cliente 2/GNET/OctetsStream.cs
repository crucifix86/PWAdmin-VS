using System;
using System.IO;
using System.Text;

namespace GNET
{
    /// <summary>
    /// Binary stream for reading/writing data in Perfect World protocol format
    /// Uses big-endian byte order and variable-length integer encoding
    /// </summary>
    public class OctetsStream : Marshal
    {
        private MemoryStream stream;
        private BinaryWriter writer;
        private BinaryReader reader;

        public OctetsStream()
        {
            stream = new MemoryStream();
            writer = new BinaryWriter(stream);
            reader = new BinaryReader(stream);
        }

        public OctetsStream(byte[] data)
        {
            stream = new MemoryStream(data);
            stream.Position = 0; // Ensure we start at the beginning
            writer = new BinaryWriter(stream);
            reader = new BinaryReader(stream);
        }

        public OctetsStream(int capacity)
        {
            stream = new MemoryStream(capacity);
            writer = new BinaryWriter(stream);
            reader = new BinaryReader(stream);
        }

        public byte[] getBytes()
        {
            return stream.ToArray();
        }

        public int size()
        {
            return (int)stream.Length;
        }

        public void clear()
        {
            stream.SetLength(0);
            stream.Position = 0;
        }

        public long Remaining => stream.Length - stream.Position;

        // Marshal methods for writing data
        public OctetsStream marshal(byte b)
        {
            writer.Write(b);
            return this;
        }

        public OctetsStream marshal(bool b)
        {
            writer.Write((byte)(b ? 1 : 0));
            return this;
        }

        public OctetsStream marshal(short s)
        {
            byte[] bytes = BitConverter.GetBytes(s);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            writer.Write(bytes);
            return this;
        }

        public OctetsStream marshal(int i)
        {
            byte[] bytes = BitConverter.GetBytes(i);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            writer.Write(bytes);
            return this;
        }

        public OctetsStream marshal(long l)
        {
            byte[] bytes = BitConverter.GetBytes(l);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            writer.Write(bytes);
            return this;
        }

        public OctetsStream marshal(float f)
        {
            byte[] bytes = BitConverter.GetBytes(f);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            writer.Write(bytes);
            return this;
        }

        public OctetsStream marshal(double d)
        {
            byte[] bytes = BitConverter.GetBytes(d);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            writer.Write(bytes);
            return this;
        }

        public OctetsStream marshal(string s)
        {
            if (string.IsNullOrEmpty(s))
            {
                compact_uint32(0);
            }
            else
            {
                byte[] bytes = Encoding.UTF8.GetBytes(s);
                compact_uint32((uint)bytes.Length);
                writer.Write(bytes);
            }
            return this;
        }

        public OctetsStream marshal(Octets o)
        {
            byte[] data = o.getBytes();
            compact_uint32((uint)data.Length);
            writer.Write(data);
            return this;
        }

        public OctetsStream marshal(Marshal m)
        {
            return m.marshal(this);
        }

        // Unmarshal methods for reading data
        public byte unmarshal_byte()
        {
            return reader.ReadByte();
        }

        public bool unmarshal_bool()
        {
            return reader.ReadByte() != 0;
        }

        public short unmarshal_short()
        {
            byte[] bytes = reader.ReadBytes(2);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            return BitConverter.ToInt16(bytes, 0);
        }

        public int unmarshal_int()
        {
            byte[] bytes = reader.ReadBytes(4);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            return BitConverter.ToInt32(bytes, 0);
        }

        public long unmarshal_long()
        {
            byte[] bytes = reader.ReadBytes(8);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            return BitConverter.ToInt64(bytes, 0);
        }

        public float unmarshal_float()
        {
            byte[] bytes = reader.ReadBytes(4);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            return BitConverter.ToSingle(bytes, 0);
        }

        public double unmarshal_double()
        {
            byte[] bytes = reader.ReadBytes(8);
            if (BitConverter.IsLittleEndian)
                Array.Reverse(bytes);
            return BitConverter.ToDouble(bytes, 0);
        }

        public string unmarshal_String()
        {
            uint length = uncompact_uint32();
            if (length == 0)
                return string.Empty;
            
            byte[] bytes = reader.ReadBytes((int)length);
            return Encoding.UTF8.GetString(bytes);
        }

        public string unmarshal_String_ByteLength()
        {
            byte length = unmarshal_byte();
            if (length == 0)
                return string.Empty;
            
            byte[] bytes = reader.ReadBytes(length);
            return Encoding.UTF8.GetString(bytes);
        }

        public Octets unmarshal_Octets()
        {
            uint length = uncompact_uint32();
            byte[] data = reader.ReadBytes((int)length);
            return new Octets(data);
        }

        public OctetsStream unmarshal(Octets o)
        {
            uint length = uncompact_uint32();
            byte[] data = reader.ReadBytes((int)length);
            o.replace(data);
            return this;
        }

        // Compact integer encoding/decoding
        public OctetsStream compact_uint32(uint x)
        {
            if (x < 0x80)
            {
                writer.Write((byte)x);
            }
            else if (x < 0x4000)
            {
                writer.Write((byte)(((x >> 8) & 0x3f) | 0x80));
                writer.Write((byte)(x & 0xff));
            }
            else if (x < 0x200000)
            {
                writer.Write((byte)(((x >> 16) & 0x1f) | 0xc0));
                writer.Write((byte)((x >> 8) & 0xff));
                writer.Write((byte)(x & 0xff));
            }
            else if (x < 0x10000000)
            {
                writer.Write((byte)(((x >> 24) & 0x0f) | 0xe0));
                writer.Write((byte)((x >> 16) & 0xff));
                writer.Write((byte)((x >> 8) & 0xff));
                writer.Write((byte)(x & 0xff));
            }
            else
            {
                writer.Write((byte)0xf0);
                writer.Write((byte)((x >> 24) & 0xff));
                writer.Write((byte)((x >> 16) & 0xff));
                writer.Write((byte)((x >> 8) & 0xff));
                writer.Write((byte)(x & 0xff));
            }
            return this;
        }

        public uint uncompact_uint32()
        {
            byte b = reader.ReadByte();
            
            if ((b & 0x80) == 0)
            {
                return b;
            }
            else if ((b & 0xc0) == 0x80)
            {
                return (uint)(((b & 0x3f) << 8) | reader.ReadByte());
            }
            else if ((b & 0xe0) == 0xc0)
            {
                return (uint)(((b & 0x1f) << 16) | (reader.ReadByte() << 8) | reader.ReadByte());
            }
            else if ((b & 0xf0) == 0xe0)
            {
                return (uint)(((b & 0x0f) << 24) | (reader.ReadByte() << 16) | 
                             (reader.ReadByte() << 8) | reader.ReadByte());
            }
            else
            {
                return (uint)((reader.ReadByte() << 24) | (reader.ReadByte() << 16) | 
                             (reader.ReadByte() << 8) | reader.ReadByte());
            }
        }

        // Position management
        public long Position
        {
            get { return stream.Position; }
            set { stream.Position = value; }
        }

        public void Seek(long offset, SeekOrigin origin)
        {
            stream.Seek(offset, origin);
        }

        // Marshal interface implementation
        public OctetsStream marshal(OctetsStream os)
        {
            byte[] data = getBytes();
            os.compact_uint32((uint)data.Length);
            os.writer.Write(data);
            return os;
        }

        public OctetsStream unmarshal(OctetsStream os)
        {
            uint length = os.uncompact_uint32();
            byte[] data = os.reader.ReadBytes((int)length);
            stream = new MemoryStream(data);
            writer = new BinaryWriter(stream);
            reader = new BinaryReader(stream);
            return os;
        }

        // Conversion operators
        public static implicit operator Octets(OctetsStream os)
        {
            return new Octets(os.getBytes());
        }

        public static implicit operator OctetsStream(Octets o)
        {
            return new OctetsStream(o.getBytes());
        }
    }
}