using GNET;
using GNET.Rpc;

namespace Protocols.Packets
{
    public class Processes : GNET.Rpc.Data
    {
        public int pid = 0;
        public int processCount = 0;
        public string processName = "";
        public string processDir = "";
        public string processFileName = "";
        public string processParams = "";
        public string processStart = "";
        public string processKill = "";
        public int serverProcess = 0;
        public int startSleep = 0;
        public int stopSleep = 0;
        public double mem = 0.0;
        public double cpu = 0.0;

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(pid);
            os.marshal(processCount);
            os.marshal(processName);
            os.marshal(processDir);
            os.marshal(processFileName);
            os.marshal(processParams);
            os.marshal(processStart);
            os.marshal(processKill);
            os.marshal(serverProcess);
            os.marshal(startSleep);
            os.marshal(stopSleep);
            os.marshal(mem);
            os.marshal(cpu);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            pid = os.unmarshal_int();
            processCount = os.unmarshal_int();
            processName = os.unmarshal_String();
            processDir = os.unmarshal_String();
            processFileName = os.unmarshal_String();
            processParams = os.unmarshal_String();
            processStart = os.unmarshal_String();
            processKill = os.unmarshal_String();
            serverProcess = os.unmarshal_int();
            startSleep = os.unmarshal_int();
            stopSleep = os.unmarshal_int();
            mem = os.unmarshal_double();
            cpu = os.unmarshal_double();
            return os;
        }
    }
}
