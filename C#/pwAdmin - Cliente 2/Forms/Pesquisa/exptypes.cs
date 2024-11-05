using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pwAdmin
{
    public class exptypes
    {
		public struct STONE_ESSENCE
		{
			int id;                            // (类型)ID
			int id_sub_type;               // 宝石小类别ID
			string name;                  // 名称, 最多15个汉字

			string file_matter;          // 掉在地上的模型路径名
			string file_icon;                // 图标路径名

			int level;                      // 级别
			int color;                      // 颜色 (0-7)

			int price;                      // 卖店价
			int shop_price;                 // 店卖价

			int install_price;              // 镶嵌价格
			int uninstall_price;            // 拆除价格

			int id_addon_damage;           // 攻击属性描述id
			int id_addon_defence;          // 防御属性描述id

			string weapon_desc;           // 镶在武器上的描述
			string armor_desc;                // 镶在防具上的描述

			// 堆叠信息
			int pile_num_max;               // 堆叠上限
											// GUID信息
			int has_guid;                  // 是否为其产生全局唯一ID，以用于Trace。0-否，1-是
													// 处理方式
			int proc_type;                 // 是以下几种方式的组合: 死亡时是否掉落，是否可以扔在地上，是否可以卖给NPC，是人民币物品，是否可以玩家间交易，是否任务相关物品，装备后绑定，是否可解绑，离开场景消失

			// 宝石没有显式制定其装备规则，因为所有的宝石只能用于镶嵌，Mask必须为0x8000
		};
	}
}
