using System;
using pwAdmin.Server.Protocols;

namespace pwAdmin.Server.Models
{
    public class MemoryInfo
    {
        public long MemTotal { get; set; }
        public long MemUsed { get; set; }
        public long MemFree { get; set; }
        public long SwapTotal { get; set; }
        public long SwapUsed { get; set; }
        public long SwapFree { get; set; }

        public void Marshal(OctetsStream os)
        {
            os.WriteInt64(MemTotal);
            os.WriteInt64(MemUsed);
            os.WriteInt64(MemFree);
            os.WriteInt64(SwapTotal);
            os.WriteInt64(SwapUsed);
            os.WriteInt64(SwapFree);
        }
    }

    public class ProcessInfo
    {
        public string Name { get; set; }
        public string Path { get; set; }
        public int Pid { get; set; }
        public double MemoryPercent { get; set; }
        public double CpuPercent { get; set; }

        public void Marshal(OctetsStream os)
        {
            os.WriteString(Name);
            os.WriteString(Path);
            os.WriteInt32(Pid);
            os.WriteInt32((int)(MemoryPercent * 100)); // Convert to integer representation
            os.WriteInt32((int)(CpuPercent * 100));
        }
    }

    public class InstanceInfo
    {
        public string Tag { get; set; }
        public int InstanceId { get; set; }

        public void Marshal(OctetsStream os)
        {
            os.WriteString(Tag);
            os.WriteInt32(InstanceId);
        }
    }

    public class GMAccount
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public int Rules { get; set; }
    }

    public class UserInfo
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Email { get; set; }
        public string TrueName { get; set; }
        public string IdNumber { get; set; }
        public string Question { get; set; }
        public string Answer { get; set; }
        public DateTime CreateTime { get; set; }
        public string Ip { get; set; } = "";

        public void Marshal(OctetsStream os)
        {
            os.WriteInt32(Id);
            os.WriteString(Name);
            os.WriteString(Email);
            os.WriteString(TrueName);
            os.WriteString(IdNumber);
            os.WriteString(Question);
            os.WriteString(Answer);
            os.WriteInt64(((DateTimeOffset)CreateTime).ToUnixTimeSeconds());
            os.WriteString(Ip);
        }
    }
}