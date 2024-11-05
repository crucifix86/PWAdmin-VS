using System;
using System.Net.Sockets;
using System.Threading;

namespace GNET
{
    public class Packet
    {
        public static NetworkStream SendPacket(String hostname, int port, OctetsStream data)
        {
            try
            {
                TcpClient tc = new TcpClient(hostname, port);
                NetworkStream ns = tc.GetStream();
                ns.Write(data.getBytes(), 0, data.size());
                return ns;
            }
            catch (Exception e)
            {
                Console.WriteLine("Erro: Não foi possível conectar ao servidor. Favor, verificar se o servidor está ativo e a porta liberada.");
            }
            return null;
        }

        public static void Compact(OctetsStream os, Protocol protocol, int opcode)
        {
            os.compact_uint32(opcode).marshal((Octets)(new OctetsStream()).marshal((Marshal)protocol));
        }

        public static void Compact(OctetsStream os, Rpc.Data protocol, int opcode)
        {
            os.compact_uint32(opcode).marshal((Octets)(new OctetsStream()).marshal((Marshal)protocol));
        }

        public static OctetsStream SendPacket(string hostname, int port, Protocol data, int Opcode, bool read = true, bool compareOpcode = true, bool removeHeaders = true)
        {
            OctetsStream os = new OctetsStream();
            Compact(os, data, (int)Opcode);
            NetworkStream ns = SendPacket(hostname, port, os);
            if (read)
            {
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
                        if ((os = new OctetsStream(octets)).uncompact_uint32() == (int)Opcode)
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
                        if ((os = new OctetsStream(octets)).uncompact_uint32() == (int)Opcode)
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
