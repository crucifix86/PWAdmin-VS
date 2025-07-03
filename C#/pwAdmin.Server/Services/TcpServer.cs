using System;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Extensions.Logging;
using pwAdmin.Server.Protocols;

namespace pwAdmin.Server.Services
{
    public class TcpServer
    {
        private readonly SessionConfig _config;
        private readonly ILogger _logger;
        private TcpListener _listener;
        private readonly List<TcpClient> _clients = new List<TcpClient>();
        private CancellationTokenSource _cancellationTokenSource;
        private readonly RequestProcessor _requestProcessor;

        public TcpServer(SessionConfig config, ILogger logger)
        {
            _config = config;
            _logger = logger;
            _requestProcessor = new RequestProcessor(_config, _logger);
        }

        public async Task StartAsync(CancellationToken cancellationToken)
        {
            _cancellationTokenSource = CancellationTokenSource.CreateLinkedTokenSource(cancellationToken);
            _listener = new TcpListener(IPAddress.Any, _config.Port);
            _listener.Start();
            
            _logger.LogInformation($"TCP Server listening on port {_config.Port}");

            while (!_cancellationTokenSource.Token.IsCancellationRequested)
            {
                try
                {
                    var tcpClient = await AcceptClientAsync(_cancellationTokenSource.Token);
                    if (tcpClient != null)
                    {
                        _clients.Add(tcpClient);
                        _ = Task.Run(() => HandleClientAsync(tcpClient, _cancellationTokenSource.Token));
                    }
                }
                catch (ObjectDisposedException)
                {
                    break;
                }
                catch (Exception ex)
                {
                    _logger.LogError(ex, "Error accepting client connection");
                }
            }
        }

        private async Task<TcpClient> AcceptClientAsync(CancellationToken cancellationToken)
        {
            using (cancellationToken.Register(() => _listener.Stop()))
            {
                try
                {
                    var tcpClientTask = _listener.AcceptTcpClientAsync();
                    var result = await tcpClientTask;
                    return result;
                }
                catch (ObjectDisposedException) when (cancellationToken.IsCancellationRequested)
                {
                    return null;
                }
            }
        }

        private async Task HandleClientAsync(TcpClient client, CancellationToken cancellationToken)
        {
            var clientEndpoint = client.Client.RemoteEndPoint?.ToString() ?? "Unknown";
            _logger.LogInformation($"Client connected from: {clientEndpoint}");

            try
            {
                using (var stream = client.GetStream())
                {
                    var buffer = new byte[65536];
                    
                    while (!cancellationToken.IsCancellationRequested && client.Connected)
                    {
                        var bytesRead = await stream.ReadAsync(buffer, 0, buffer.Length, cancellationToken);
                        
                        if (bytesRead == 0)
                        {
                            break; // Client disconnected
                        }

                        var requestData = new byte[bytesRead];
                        Array.Copy(buffer, requestData, bytesRead);
                        
                        _logger.LogDebug($"Received {bytesRead} bytes from {clientEndpoint}");
                        
                        // Log first few bytes for debugging
                        if (bytesRead >= 12)
                        {
                            var os = new OctetsStream(requestData);
                            try
                            {
                                var key = os.UncompactUInt32();
                                var opcode = os.UncompactUInt32();
                                var size = os.UncompactUInt32();
                                _logger.LogInformation($"Request: Key={key}, Opcode={opcode}, Size={size}");
                            }
                            catch (Exception debugEx)
                            {
                                _logger.LogWarning($"Could not parse request header: {debugEx.Message}");
                            }
                        }
                        
                        // Process request
                        var response = await _requestProcessor.ProcessRequestAsync(requestData);
                        
                        if (response != null && response.Length > 0)
                        {
                            await stream.WriteAsync(response, 0, response.Length, cancellationToken);
                            _logger.LogDebug($"Sent {response.Length} bytes to {clientEndpoint}");
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, $"Error handling client {clientEndpoint}");
            }
            finally
            {
                _clients.Remove(client);
                client.Close();
                _logger.LogInformation($"Client disconnected: {clientEndpoint}");
            }
        }

        public async Task StopAsync()
        {
            _cancellationTokenSource?.Cancel();
            _listener?.Stop();
            
            foreach (var client in _clients)
            {
                client.Close();
            }
            
            _clients.Clear();
            await Task.CompletedTask;
        }
    }
}