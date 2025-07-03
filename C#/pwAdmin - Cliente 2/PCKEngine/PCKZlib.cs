using System;
using System.IO;
using System.IO.Compression;
using Ionic.Zlib;

namespace pwAdmin.PCKEngine
{
    public static class PCKZlib
    {
        public static byte[] Decompress(byte[] bytes, int size)
        {
            try
            {
                using (var ms = new MemoryStream(bytes))
                using (var zs = new ZlibStream(ms, CompressionMode.Decompress))
                {
                    byte[] output = new byte[size];
                    zs.Read(output, 0, size);
                    return output;
                }
            }
            catch
            {
                Console.WriteLine("Bad zlib data");
                return new byte[size];
            }
        }

        public static byte[] Compress(byte[] bytes, int CompressionLevel)
        {
            using (var ms = new MemoryStream())
            {
                using (var zs = new ZlibStream(ms, CompressionMode.Compress, CompressionLevel))
                {
                    zs.Write(bytes, 0, bytes.Length);
                }
                var compressed = ms.ToArray();
                return compressed.Length < bytes.Length ? compressed : bytes;
            }
        }

        public static void CopyStream(Stream input, Stream output, int Size)
        {
            byte[] buffer = new byte[Size];
            int len;
            while ((len = input.Read(buffer, 0, Size)) > 0)
            {
                output.Write(buffer, 0, len);
            }
            output.Flush();
        }
    }
}
