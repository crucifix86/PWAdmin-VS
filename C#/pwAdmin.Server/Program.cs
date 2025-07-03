using System;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Extensions.DependencyInjection;
using Microsoft.Extensions.Hosting;
using Microsoft.Extensions.Logging;
using pwAdmin.Server.Services;

namespace pwAdmin.Server
{
    class Program
    {
        static async Task Main(string[] args)
        {
            if (args.Length != 1)
            {
                Console.WriteLine($"Usage: {AppDomain.CurrentDomain.FriendlyName} <start|stop|status>");
                return;
            }

            string command = args[0].ToLower();

            switch (command)
            {
                case "start":
                    await StartDaemon();
                    break;
                case "stop":
                    StopDaemon();
                    break;
                case "status":
                    CheckStatus();
                    break;
                default:
                    Console.WriteLine("Invalid command. Use: start, stop, or status");
                    break;
            }
        }

        static async Task StartDaemon()
        {
            var pidManager = new PidManager();
            if (pidManager.IsRunning())
            {
                Console.WriteLine("pwAdmin server is already running.");
                return;
            }

            var host = Host.CreateDefaultBuilder()
                .UseSystemd()
                .ConfigureServices((hostContext, services) =>
                {
                    services.AddSingleton<SessionConfig>();
                    services.AddSingleton<PidManager>();
                    services.AddHostedService<PwAdminService>();
                })
                .ConfigureLogging(logging =>
                {
                    logging.ClearProviders();
                    logging.AddConsole();
                    logging.AddFile("pwadmin.log");
                })
                .Build();

            // Load config to check if it's valid before starting
            var config = new SessionConfig();
            if (!config.IsConfigValid)
            {
                Console.WriteLine("Error: Configuration is not valid. The service will exit.");
                return;
            }
            
            pidManager.WritePid();
            Console.WriteLine("Starting pwAdmin server...");
            Console.WriteLine($"Server Name: {config.ServName}");
            Console.WriteLine($"Port: {config.Port}");
            Console.WriteLine($"Home Path: {config.HomePath}");
            
            await host.RunAsync();
        }

        static void StopDaemon()
        {
            var pidManager = new PidManager();
            if (!pidManager.IsRunning())
            {
                Console.WriteLine("pwAdmin server is not running.");
                return;
            }

            pidManager.StopProcess();
            Console.WriteLine("pwAdmin server stopped successfully!");
        }

        static void CheckStatus()
        {
            var pidManager = new PidManager();
            if (pidManager.IsRunning())
            {
                Console.WriteLine("pwAdmin server is running.");
                var config = new SessionConfig();
                if (config.IsConfigValid)
                {
                    Console.WriteLine($"Server Name: {config.ServName}");
                    Console.WriteLine($"Port: {config.Port}");
                }
            }
            else
            {
                Console.WriteLine("pwAdmin server is not running.");
            }
        }
    }
}