using System;

using GNET;
namespace Protocols.Packets
{
    public class DBAutoLock : Protocol
    {
        public int timestamp;
        public int horario;
        public int periodo;

        public DBAutoLock() { }

        public override OctetsStream unmarshal(OctetsStream s)
        {
            s.unmarshal_int();
            s.unmarshal_int();
            s.unmarshal_int();
            s.unmarshal_int();
            horario = s.unmarshal_int(); // hh:mm:ss - segundos
            s.unmarshal_int();
            timestamp = s.unmarshal_int(); // data dia - timestamp
            s.unmarshal_int();
            periodo = s.unmarshal_int(); // 24h
            return s;
        }

        public override OctetsStream marshal(OctetsStream value)
        {
            return value;
        }
    }
    
    public class DBAutoLockGet : Protocol
    {
        public RoleId userid = new RoleId();

        public DBAutoLockGet() :base((int)Opcode.AutoLockGet) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            userid.marshal(os);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            userid.unmarshal(os);
            return os;
        }
    }

    public class DBAutoLockSet : Protocol
    {
        public RoleId userid = new RoleId();
        public byte count;

        public DBAutoLockSet() { }

        public override OctetsStream marshal(OctetsStream os)
        {
            userid.marshal(os);
            os.marshal(count);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            userid.unmarshal(os);
            count = os.unmarshal_byte();
            return os;
        }
    }
}
