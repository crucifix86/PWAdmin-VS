using System;
using System.Diagnostics;
using System.IO;

namespace pwAdmin.Server.Services
{
    public class PidManager
    {
        private readonly string _pidFile = "/var/run/pwadmin.pid";

        public PidManager()
        {
            var config = new SessionConfig();
            _pidFile = config.PidFile;
        }

        public bool IsRunning()
        {
            if (!File.Exists(_pidFile))
                return false;

            try
            {
                var pidStr = File.ReadAllText(_pidFile).Trim();
                if (int.TryParse(pidStr, out int pid))
                {
                    // Check if process is running
                    try
                    {
                        var process = Process.GetProcessById(pid);
                        return !process.HasExited;
                    }
                    catch (ArgumentException)
                    {
                        // Process doesn't exist
                        File.Delete(_pidFile);
                        return false;
                    }
                }
            }
            catch
            {
                // Ignore errors
            }

            return false;
        }

        public void WritePid()
        {
            try
            {
                var pid = Process.GetCurrentProcess().Id;
                File.WriteAllText(_pidFile, pid.ToString());
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Warning: Could not write PID file: {ex.Message}");
            }
        }

        public void StopProcess()
        {
            if (!File.Exists(_pidFile))
                return;

            try
            {
                var pidStr = File.ReadAllText(_pidFile).Trim();
                if (int.TryParse(pidStr, out int pid))
                {
                    var process = Process.GetProcessById(pid);
                    process.Kill();
                    process.WaitForExit(5000);
                }
                
                File.Delete(_pidFile);
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Error stopping process: {ex.Message}");
            }
        }
    }
}