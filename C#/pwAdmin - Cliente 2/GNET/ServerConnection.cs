using System;
using System.Net.Sockets;
using System.Threading.Tasks;
using GNET;

namespace pwAdmin.GNET
{
    public class ServerConnection
    {
        private TcpClient _client;
        private NetworkStream _stream;
        private string _serverIp;
        private int _serverPort;
        private bool _isConnected;

        public bool IsConnected => _isConnected && _client != null && _client.Connected;

        public ServerConnection(string serverIp, int serverPort)
        {
            _serverIp = serverIp;
            _serverPort = serverPort;
        }

        public async Task<bool> ConnectAsync()
        {
            try
            {
                _client = new TcpClient();
                await _client.ConnectAsync(_serverIp, _serverPort);
                _stream = _client.GetStream();
                _isConnected = true;
                return true;
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Connection error: {ex.Message}");
                _isConnected = false;
                return false;
            }
        }

        public void Disconnect()
        {
            _isConnected = false;
            _stream?.Close();
            _client?.Close();
            _stream = null;
            _client = null;
        }

        public async Task<OctetsStream> SendRequestAsync(OctetsStream request, bool expectResponse = true)
        {
            if (!IsConnected)
                throw new InvalidOperationException("Not connected to server");

            try
            {
                var data = request.getBytes();
                await _stream.WriteAsync(data, 0, data.Length);

                if (!expectResponse)
                    return null;

                // Read response
                var buffer = new byte[65536];
                var bytesRead = await _stream.ReadAsync(buffer, 0, buffer.Length);

                if (bytesRead > 0)
                {
                    var responseData = new byte[bytesRead];
                    Array.Copy(buffer, responseData, bytesRead);
                    return new OctetsStream(responseData);
                }

                return new OctetsStream();
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Send request error: {ex.Message}");
                _isConnected = false;
                throw;
            }
        }

        public static async Task<OctetsStream> SendOneShotRequestAsync(string serverIp, int serverPort, OctetsStream request, bool expectResponse = true)
        {
            using (var client = new TcpClient())
            {
                await client.ConnectAsync(serverIp, serverPort);
                using (var stream = client.GetStream())
                {
                    var data = request.getBytes();
                    await stream.WriteAsync(data, 0, data.Length);

                    if (!expectResponse)
                        return null;

                    var buffer = new byte[65536];
                    var bytesRead = await stream.ReadAsync(buffer, 0, buffer.Length);

                    if (bytesRead > 0)
                    {
                        var responseData = new byte[bytesRead];
                        Array.Copy(buffer, responseData, bytesRead);
                        return new OctetsStream(responseData);
                    }

                    return new OctetsStream();
                }
            }
        }
    }
}