using System;
using System.Linq;
using System.Net.Sockets;
using System.Threading;
using GNET;

namespace GNET
{
    public class Packet
    {
        public static NetworkStream SendPacket(String hostname, int port, OctetsStream data)
        {
            try
            {
                Console.WriteLine($"Connecting to {hostname}:{port}...");
                TcpClient tc = new TcpClient();
                tc.Connect(hostname, port);
                Console.WriteLine($"Connected! Sending {data.size()} bytes...");
                
                NetworkStream ns = tc.GetStream();
                var bytes = data.getBytes();
                ns.Write(bytes, 0, data.size());
                
                // Log first few bytes for debugging
                Console.WriteLine($"Sent data: {BitConverter.ToString(bytes.Take(Math.Min(20, bytes.Length)).ToArray())}");
                
                return ns;
            }
            catch (Exception e)
            {
                Console.WriteLine($"Connection error: {e.GetType().Name}: {e.Message}");
                if (e.InnerException != null)
                {
                    Console.WriteLine($"Inner: {e.InnerException.Message}");
                }
                throw; // Re-throw to let caller handle
            }
        }

        public static void Compact(OctetsStream os, Protocol protocol, int opcode)
        {
            // Add key, opcode, and size header that server expects
            var data = new OctetsStream();
            data.marshal((Marshal)protocol);
            
            os.compact_uint32(501350); // Key
            os.compact_uint32((uint)opcode); // Opcode
            os.compact_uint32((uint)data.size()); // Size
            os.marshal((Octets)data); // Data
        }

        public static void Compact(OctetsStream os, Rpc.Data protocol, int opcode)
        {
            // Add key, opcode, and size header that server expects
            var data = new OctetsStream();
            data.marshal((Marshal)protocol);
            
            os.compact_uint32(501350); // Key
            os.compact_uint32((uint)opcode); // Opcode
            os.compact_uint32((uint)data.size()); // Size
            os.marshal((Octets)data); // Data
        }

        public static OctetsStream SendPacket(string hostname, int port, Protocol data, int Opcode, bool read = true, bool compareOpcode = true, bool removeHeaders = true)
        {
            Console.WriteLine($"SendPacket: Opcode={Opcode}, Read={read}");
            OctetsStream os = new OctetsStream();
            Compact(os, data, (int)Opcode);
            NetworkStream ns = SendPacket(hostname, port, os);
            
            if (ns == null)
            {
                Console.WriteLine("NetworkStream is null, connection failed");
                return null;
            }
            
            if (read)
            {
                Console.WriteLine("Waiting for response...");
                int waitTime = 0;
                while (!ns.DataAvailable && waitTime < 5000) // 5 second timeout
                {
                    Thread.Sleep(20);
                    waitTime += 20;
                }
                
                if (!ns.DataAvailable)
                {
                    Console.WriteLine("No response received within 5 seconds");
                    return null;
                }
                
                byte[] myReadBuffer = new byte[16384];
                int tamanho = 0;
                do
                {
                    tamanho = ns.Read(myReadBuffer, 0, myReadBuffer.Length);
                    Octets octets = new Octets(myReadBuffer);
                    if (compareOpcode)
                    {
                        if ((os = new OctetsStream(octets.getBytes())).uncompact_uint32() == (int)Opcode)
                        {
                            if (removeHeaders)
                            {
                                os.uncompact_uint32();
                                os.unmarshal_int();
                                os.unmarshal_int();
                            }
                        }
                    }
                    else
                    {
                        if (removeHeaders)
                        {
                            os.uncompact_uint32();
                            os.unmarshal_int();
                            os.unmarshal_int();
                        }
                    }
                }
                while (ns.DataAvailable);
            }
            ns.Close();
            return os;
        }

        public static OctetsStream SendPacket(string hostname, int port, Rpc.Data data, int Opcode, bool read = true, bool compareOpcode = true, bool removeHeaders = true)
        {
            OctetsStream os = new OctetsStream();
            Compact(os, data, (int)Opcode);
            NetworkStream ns = SendPacket(hostname, port, os);
            if (read)
            {
                if (ns == null) return null;
                while (!ns.DataAvailable)
                {
                    Thread.Sleep(20);
                }
                byte[] myReadBuffer = new byte[16384];
                int tamanho = 0;
                do
                {
                    tamanho = ns.Read(myReadBuffer, 0, myReadBuffer.Length);
                    Octets octets = new Octets(myReadBuffer);
                    if (compareOpcode)
                    {
                        if ((os = new OctetsStream(octets.getBytes())).uncompact_uint32() == (int)Opcode)
                        {
                            if (removeHeaders)
                            {
                                os.uncompact_uint32();
                                os.unmarshal_int();
                                os.unmarshal_int();
                            }
                        }
                    }
                    else
                    {
                        if (removeHeaders)
                        {
                            os.uncompact_uint32();
                            os.unmarshal_int();
                            os.unmarshal_int();
                        }
                    }
                }
                while (ns.DataAvailable);
                ns.Close();
            }
            return os;
        }
    }
}
