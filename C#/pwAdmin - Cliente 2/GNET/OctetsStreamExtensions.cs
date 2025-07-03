using System;
using System.Text;

namespace GNET
{
    public static class OctetsStreamExtensions
    {
        public static byte[] GetData(this OctetsStream stream)
        {
            return stream.getBytes();
        }

        public static void WriteInt32(this OctetsStream stream, int value)
        {
            stream.marshal(value);
        }

        public static void WriteString(this OctetsStream stream, string value)
        {
            stream.marshal(new Octets(Encoding.UTF8.GetBytes(value)));
        }

        public static int ReadInt32(this OctetsStream stream)
        {
            return stream.unmarshal_int();
        }

        public static string ReadString(this OctetsStream stream)
        {
            var octets = new Octets();
            stream.unmarshal(octets);
            return Encoding.UTF8.GetString(octets.buffer());
        }

        public static uint UncompactUInt32(this OctetsStream stream)
        {
            return (uint)stream.uncompact_uint32();
        }
    }
}