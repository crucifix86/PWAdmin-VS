using GNET;

namespace Protocols.Packets
{
    public class ListFaction
    {
        public string name;
        public int level;
        public int masterid;
        public int masterrole;
        public int member_size;

        public ListFaction(string name, int level, int masterid, int masterrole, int member_size)
        {
            this.name = name;
            this.level = level;
            this.masterid = masterid;
            this.masterrole = masterrole;
            this.member_size = member_size;
        }
    }
}
