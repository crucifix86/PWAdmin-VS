using System.Collections.Generic;

namespace Protocols.Structs
{
    public class skill_data
    {
        public int count;
        public int id;
        public int progress;
        public int level;

        public List<skill_data> listData = new List<skill_data>();

        public pwAdmin.Outro.OctetsStream unmarshal(pwAdmin.Outro.OctetsStream os)
        {
            count = os.ReadInt32();
            for (int i = 0; i < count; i++)
            {
                skill_data data = new skill_data();
                data.id = os.ReadInt32();
                data.progress = os.ReadInt32();
                data.level = os.ReadInt32();
                listData.Add(data);
            }
            return os;
        }

        public pwAdmin.Outro.OctetsStream marshal(pwAdmin.Outro.OctetsStream os)
        {
            os.WriteInt32(listData.Count);
            for (int i = 0; i < listData.Count; ++i)
            {
                os.WriteInt32(listData[i].id);
                os.WriteInt32(listData[i].progress);
                os.WriteInt32(listData[i].level);
            }
            return os;
        }
    }
}
