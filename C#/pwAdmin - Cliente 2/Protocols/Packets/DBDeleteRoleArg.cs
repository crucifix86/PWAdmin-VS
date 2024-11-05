namespace Protocols.Packets
{
    internal class DBDeleteRoleArg : Protocol
    {
        public RoleId roleid = new RoleId();
        public int create_roolback;

        public DBDeleteRoleArg() : base((int)Opcode.DeleteRole) { }

        public override OctetsStream marshal(OctetsStream os)
        {
            os.marshal(roleid);
            os.marshal(create_roolback);
            return os;
        }

        public override OctetsStream unmarshal(OctetsStream os)
        {
            os.unmarshal(roleid);
            create_roolback = os.unmarshal_int();
            return os;
        }
    }
}
