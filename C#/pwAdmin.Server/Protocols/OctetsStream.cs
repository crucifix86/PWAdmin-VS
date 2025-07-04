using System;
using System.Collections.Generic;
using System.Text;

namespace pwAdmin.Server.Protocols
{
    public class OctetsStream
    {
        private List<byte> _data;
        private int _position;

        public OctetsStream()
        {
            _data = new List<byte>();
            _position = 0;
        }

        public OctetsStream(byte[] data)
        {
            _data = new List<byte>(data);
            _position = 0;
        }

        public byte[] GetData()
        {
            return _data.ToArray();
        }

        public void WriteByte(byte value)
        {
            _data.Add(value);
        }

        public void WriteInt16(short value)
        {
            _data.AddRange(BitConverter.GetBytes(value));
        }

        public void WriteInt32(int value)
        {
            _data.AddRange(BitConverter.GetBytes(value));
        }

        public void WriteInt64(long value)
        {
            _data.AddRange(BitConverter.GetBytes(value));
        }

        public void WriteDouble(double value)
        {
            _data.AddRange(BitConverter.GetBytes(value));
        }

        public void WriteString(string value)
        {
            var bytes = Encoding.UTF8.GetBytes(value);
            CompactUInt32((uint)bytes.Length);
            _data.AddRange(bytes);
        }

        public void WriteBytes(byte[] value)
        {
            _data.AddRange(value);
        }

        public byte ReadByte()
        {
            if (_position >= _data.Count)
                throw new InvalidOperationException("End of stream");
            
            return _data[_position++];
        }

        public short ReadInt16()
        {
            if (_position + 2 > _data.Count)
                throw new InvalidOperationException("End of stream");
            
            var value = BitConverter.ToInt16(_data.ToArray(), _position);
            _position += 2;
            return value;
        }

        public int ReadInt32()
        {
            if (_position + 4 > _data.Count)
                throw new InvalidOperationException("End of stream");
            
            var value = BitConverter.ToInt32(_data.ToArray(), _position);
            _position += 4;
            return value;
        }

        public long ReadInt64()
        {
            if (_position + 8 > _data.Count)
                throw new InvalidOperationException("End of stream");
            
            var value = BitConverter.ToInt64(_data.ToArray(), _position);
            _position += 8;
            return value;
        }

        public string ReadString()
        {
            var length = UncompactUInt32();
            if (_position + length > _data.Count)
                throw new InvalidOperationException("End of stream");
            
            var bytes = new byte[length];
            _data.CopyTo((int)_position, bytes, 0, (int)length);
            _position += (int)length;
            
            return Encoding.UTF8.GetString(bytes);
        }

        public byte[] ReadBytes(int offset, int length)
        {
            if (_position + length > _data.Count)
                length = _data.Count - _position;
            
            var bytes = new byte[length];
            _data.CopyTo(_position, bytes, 0, length);
            _position += length;
            
            return bytes;
        }

        public void CompactUInt32(uint value)
        {
            if (value < 0x80)
            {
                WriteByte((byte)value);
            }
            else if (value < 0x4000)
            {
                WriteByte((byte)(0x80 | (value >> 8)));
                WriteByte((byte)(value & 0xFF));
            }
            else if (value < 0x200000)
            {
                WriteByte((byte)(0xC0 | (value >> 16)));
                WriteByte((byte)((value >> 8) & 0xFF));
                WriteByte((byte)(value & 0xFF));
            }
            else if (value < 0x10000000)
            {
                WriteByte((byte)(0xE0 | (value >> 24)));
                WriteByte((byte)((value >> 16) & 0xFF));
                WriteByte((byte)((value >> 8) & 0xFF));
                WriteByte((byte)(value & 0xFF));
            }
            else
            {
                WriteByte(0xF0);
                WriteInt32((int)value);
            }
        }

        public uint UncompactUInt32()
        {
            var b = ReadByte();
            
            if ((b & 0x80) == 0)
            {
                return b;
            }
            else if ((b & 0x40) == 0)
            {
                return (uint)(((b & 0x3F) << 8) | ReadByte());
            }
            else if ((b & 0x20) == 0)
            {
                return (uint)(((b & 0x1F) << 16) | (ReadByte() << 8) | ReadByte());
            }
            else if ((b & 0x10) == 0)
            {
                return (uint)(((b & 0x0F) << 24) | (ReadByte() << 16) | (ReadByte() << 8) | ReadByte());
            }
            else
            {
                return (uint)ReadInt32();
            }
        }

        public void Encode(int opcode)
        {
            var temp = new List<byte>();
            
            // Add key
            var keyStream = new OctetsStream();
            keyStream.CompactUInt32(501350);
            temp.AddRange(keyStream.GetData());
            
            // Add opcode
            var opcodeStream = new OctetsStream();
            opcodeStream.CompactUInt32((uint)opcode);
            temp.AddRange(opcodeStream.GetData());
            
            // Add size
            var sizeStream = new OctetsStream();
            sizeStream.CompactUInt32((uint)_data.Count);
            temp.AddRange(sizeStream.GetData());
            
            // Add data
            temp.AddRange(_data);
            
            _data = temp;
        }
    }
}