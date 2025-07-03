using System;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Extensions.Hosting;
using Microsoft.Extensions.Logging;

namespace pwAdmin.Server.Services
{
    public class PwAdminService : BackgroundService
    {
        private readonly ILogger<PwAdminService> _logger;
        private readonly SessionConfig _config;
        private TcpServer _tcpServer;

        public PwAdminService(ILogger<PwAdminService> logger, SessionConfig config)
        {
            _logger = logger;
            _config = config;
        }

        protected override async Task ExecuteAsync(CancellationToken stoppingToken)
        {
            _logger.LogInformation("pwAdmin Server starting...");

            if (!_config.IsConfigValid)
            {
                _logger.LogError("Configuration is not valid. Please check pwadmin.conf and restart the service.");
                Environment.Exit(1);
                return;
            }

            try
            {
                _tcpServer = new TcpServer(_config, _logger);
                await _tcpServer.StartAsync(stoppingToken);
            }
            catch (Exception ex)
            {
                _logger.LogError(ex, "Error starting TCP server");
                throw;
            }
        }

        public override async Task StopAsync(CancellationToken cancellationToken)
        {
            _logger.LogInformation("pwAdmin Server stopping...");
            if (_tcpServer != null)
            {
                await _tcpServer.StopAsync();
            }
            await base.StopAsync(cancellationToken);
        }
    }
}