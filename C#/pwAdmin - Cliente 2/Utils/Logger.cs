using System;
using System.IO;
using System.Text;

namespace pwAdmin.Utils
{
    public static class Logger
    {
        private static readonly object _lock = new object();
        private static string _logPath;
        
        static Logger()
        {
            // Create logs directory in application folder
            var appDir = AppDomain.CurrentDomain.BaseDirectory;
            var logsDir = Path.Combine(appDir, "logs");
            Directory.CreateDirectory(logsDir);
            
            // Create log file with timestamp
            var timestamp = DateTime.Now.ToString("yyyy-MM-dd");
            _logPath = Path.Combine(logsDir, $"pwadmin_{timestamp}.log");
        }
        
        public static void Log(string message)
        {
            lock (_lock)
            {
                try
                {
                    var timestamp = DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff");
                    var logEntry = $"[{timestamp}] {message}{Environment.NewLine}";
                    File.AppendAllText(_logPath, logEntry);
                }
                catch
                {
                    // Ignore logging errors
                }
            }
        }
        
        public static void LogError(string message, Exception ex = null)
        {
            var errorMsg = new StringBuilder();
            errorMsg.AppendLine($"ERROR: {message}");
            
            if (ex != null)
            {
                errorMsg.AppendLine($"Exception: {ex.GetType().Name}");
                errorMsg.AppendLine($"Message: {ex.Message}");
                errorMsg.AppendLine($"StackTrace: {ex.StackTrace}");
                
                if (ex.InnerException != null)
                {
                    errorMsg.AppendLine($"Inner Exception: {ex.InnerException.Message}");
                }
            }
            
            Log(errorMsg.ToString());
        }
        
        public static void LogData(string label, byte[] data, int maxBytes = 100)
        {
            if (data == null)
            {
                Log($"{label}: null");
                return;
            }
            
            var bytesToLog = Math.Min(data.Length, maxBytes);
            var hex = BitConverter.ToString(data, 0, bytesToLog);
            
            if (data.Length > maxBytes)
            {
                Log($"{label} ({data.Length} bytes, showing first {maxBytes}): {hex}...");
            }
            else
            {
                Log($"{label} ({data.Length} bytes): {hex}");
            }
        }
        
        public static string GetLogPath()
        {
            return _logPath;
        }
    }
}