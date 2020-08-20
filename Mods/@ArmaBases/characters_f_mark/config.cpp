class CfgPatches
{
	class A3_Characters_F_Mark
	{
		name="Arma 3 Marksmen - Characters and Clothing";
		units[]=
		{
			"Item_U_B_FullGhillie_ard",
			"Item_U_B_FullGhillie_lsh",
			"Item_U_B_FullGhillie_sard",
			"Item_U_I_FullGhillie_ard",
			"Item_U_I_FullGhillie_lsh",
			"Item_U_I_FullGhillie_sard",
			"Item_U_O_FullGhillie_ard",
			"Item_U_O_FullGhillie_lsh",
			"Item_U_O_FullGhillie_sard",
			"Vest_V_PlateCarrierGL_blk",
			"Vest_V_PlateCarrierGL_mtp",
			"Vest_V_PlateCarrierGL_rgr",
			"Vest_V_PlateCarrierIAGL_dgtl",
			"Vest_V_PlateCarrierIAGL_oli",
			"Vest_V_PlateCarrierSpec_blk",
			"Vest_V_PlateCarrierSpec_mtp",
			"Vest_V_PlateCarrierSpec_rgr"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_sniper_base_F;
	class B_ghillie_base_F: B_Soldier_sniper_base_F
	{
		DLC="Mark";
	};
	class B_ghillie_lsh_F: B_ghillie_base_F
	{
		DLC="Mark";
	};
	class B_ghillie_sard_F: B_ghillie_base_F
	{
		DLC="Mark";
	};
	class B_ghillie_ard_F: B_ghillie_base_F
	{
		DLC="Mark";
	};
	class O_Soldier_sniper_base_F;
	class O_ghillie_base_F: O_Soldier_sniper_base_F
	{
		DLC="Mark";
	};
	class O_ghillie_lsh_F: O_ghillie_base_F
	{
		DLC="Mark";
	};
	class O_ghillie_sard_F: O_ghillie_base_F
	{
		DLC="Mark";
	};
	class O_ghillie_ard_F: O_ghillie_base_F
	{
		DLC="Mark";
	};
	class I_Soldier_sniper_base_F;
	class I_ghillie_base_F: I_Soldier_sniper_base_F
	{
		DLC="Mark";
	};
	class I_ghillie_lsh_F: I_ghillie_base_F
	{
		DLC="Mark";
	};
	class I_ghillie_sard_F: I_ghillie_base_F
	{
		DLC="Mark";
	};
	class I_ghillie_ard_F: I_ghillie_base_F
	{
		DLC="Mark";
	};
	class B_Soldier_base_F;
	class B_Sharpshooter_F: B_Soldier_base_F
	{
		DLC="Mark";
	};
	class B_Soldier_recon_base;
	class B_Recon_Sharpshooter_F: B_Soldier_recon_base
	{
		DLC="Mark";
	};
	class B_CTRG_Sharphooter_F: B_Soldier_base_F
	{
		DLC="Mark";
	};
	class B_HeavyGunner_F: B_Soldier_base_F
	{
		DLC="Mark";
	};
	class O_Soldier_base_F;
	class O_Sharpshooter_F: O_Soldier_base_F
	{
		DLC="Mark";
	};
	class O_Soldier_Urban_base;
	class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
	{
		DLC="Mark";
	};
	class O_Soldier_recon_base;
	class O_Pathfinder_F: O_Soldier_recon_base
	{
		DLC="Mark";
	};
	class O_HeavyGunner_F: O_Soldier_base_F
	{
		DLC="Mark";
	};
	class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
	{
		DLC="Mark";
	};
	class I_G_Soldier_base_F;
	class I_G_Sharpshooter_F: I_G_Soldier_base_F
	{
		DLC="Mark";
	};
	class B_G_Sharpshooter_F: I_G_Sharpshooter_F
	{
		DLC="Mark";
	};
	class O_G_Sharpshooter_F: I_G_Sharpshooter_F
	{
		DLC="Mark";
	};
	class Item_Base_F;
	class Vest_Base_F;
	class Item_U_B_FullGhillie_lsh: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Item_U_B_FullGhillie_sard: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Item_U_B_FullGhillie_ard: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Item_U_O_FullGhillie_lsh: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Item_U_O_FullGhillie_sard: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Item_U_O_FullGhillie_ard: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Item_U_I_FullGhillie_lsh: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Item_U_I_FullGhillie_sard: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Item_U_I_FullGhillie_ard: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Vest_V_PlateCarrierGL_rgr: Vest_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Vest_V_PlateCarrierGL_blk: Vest_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Vest_V_PlateCarrierGL_mtp: Vest_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Vest_V_PlateCarrierSpec_rgr: Vest_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Vest_V_PlateCarrierSpec_blk: Vest_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Vest_V_PlateCarrierSpec_mtp: Vest_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Vest_V_PlateCarrierIAGL_dgtl: Vest_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
	class Vest_V_PlateCarrierIAGL_oli: Vest_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F;  //found empty after stripping
	class Uniform_Base: ItemCore
	{
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Soldier_F";
			containerClass="Supply0";
			mass=0;
		};
	};
	class U_B_FullGhillie_lsh: Uniform_Base
	{
		DLC="Mark";
	};
	class U_B_FullGhillie_sard: Uniform_Base
	{
		DLC="Mark";
	};
	class U_B_FullGhillie_ard: Uniform_Base
	{
		DLC="Mark";
	};
	class U_O_FullGhillie_lsh: Uniform_Base
	{
		DLC="Mark";
	};
	class U_O_FullGhillie_sard: Uniform_Base
	{
		DLC="Mark";
	};
	class U_O_FullGhillie_ard: Uniform_Base
	{
		DLC="Mark";
	};
	class U_I_FullGhillie_lsh: Uniform_Base
	{
		DLC="Mark";
	};
	class U_I_FullGhillie_sard: Uniform_Base
	{
		DLC="Mark";
	};
	class U_I_FullGhillie_ard: Uniform_Base
	{
		DLC="Mark";
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_PlateCarrierGL_rgr: Vest_NoCamo_Base
	{
		DLC="Mark";
	};
	class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr
	{
		DLC="Mark";
	};
	class V_PlateCarrierGL_mtp: V_PlateCarrierGL_rgr
	{
		DLC="Mark";
	};
	class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base
	{
		DLC="Mark";
	};
	class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr
	{
		DLC="Mark";
	};
	class V_PlateCarrierSpec_mtp: V_PlateCarrierSpec_rgr
	{
		DLC="Mark";
	};
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
	{
		class ItemInfo;
	};
	class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl
	{
		DLC="Mark";
	};
	class V_PlateCarrierIAGL_oli: V_PlateCarrierIAGL_dgtl
	{
		DLC="Mark";
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class WhiteHead_01;
		class CamoHead_White_01_F: WhiteHead_01
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_01.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_02;
		class CamoHead_White_02_F: WhiteHead_02
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_02.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_03;
		class CamoHead_White_03_F: WhiteHead_03
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_03.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_04;
		class CamoHead_White_04_F: WhiteHead_04
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_04.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_05;
		class CamoHead_White_05_F: WhiteHead_05
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_05.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_06;
		class CamoHead_White_06_F: WhiteHead_06
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_06.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_06_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_06_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_07;
		class CamoHead_White_07_F: WhiteHead_07
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_07.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_07_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_07_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_08;
		class CamoHead_White_08_F: WhiteHead_08
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_08.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_08_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_08_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_09;
		class CamoHead_White_09_F: WhiteHead_09
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_09.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_09_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_09_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_10;
		class CamoHead_White_10_F: WhiteHead_10
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_10.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_10_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_10_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_11;
		class CamoHead_White_11_F: WhiteHead_11
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_11.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_11_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_11_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_12;
		class CamoHead_White_12_F: WhiteHead_12
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_12.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_12_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_12_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_13;
		class CamoHead_White_13_F: WhiteHead_13
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_13.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_13_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_13_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_14;
		class CamoHead_White_14_F: WhiteHead_14
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_14.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_14_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_14_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_15;
		class CamoHead_White_15_F: WhiteHead_15
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_15.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_15_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_15_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_16;
		class CamoHead_White_16_F: WhiteHead_16
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_16.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_16_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_16_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_17;
		class CamoHead_White_17_F: WhiteHead_17
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_17.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_17_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_17_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_18;
		class CamoHead_White_18_F: WhiteHead_18
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_18.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_18_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_18_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_19;
		class CamoHead_White_19_F: WhiteHead_19
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_19.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_19_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_19_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_20;
		class CamoHead_White_20_F: WhiteHead_20
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_20.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_20_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_20_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_21;
		class CamoHead_White_21_F: WhiteHead_21
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_21.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_21_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_21_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class AfricanHead_01;
		class CamoHead_African_01_F: AfricanHead_01
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_African_01.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_African_01_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_African_01_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class AfricanHead_02;
		class CamoHead_African_02_F: AfricanHead_02
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_African_02.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_African_02_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_African_02_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class AfricanHead_03;
		class CamoHead_African_03_F: AfricanHead_03
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_African_03.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_African_03_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_African_03_injury.rvmat";
			identityTypes[]=
			{
				"Head_NATO_camo_lush",
				"Head_NATO_camo_arid",
				"Head_NATO_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_01;
		class CamoHead_Greek_01_F: GreekHead_A3_01
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Greek_01_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_02;
		class CamoHead_Greek_02_F: GreekHead_A3_02
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Greek_02_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_03;
		class CamoHead_Greek_03_F: GreekHead_A3_03
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Greek_03_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_04;
		class CamoHead_Greek_04_F: GreekHead_A3_04
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Greek_04_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_05;
		class CamoHead_Greek_05_F: GreekHead_A3_05
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_01.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_01_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_06;
		class CamoHead_Greek_06_F: GreekHead_A3_06
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_02.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_02_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_07;
		class CamoHead_Greek_07_F: GreekHead_A3_07
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_03.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_03_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_08;
		class CamoHead_Greek_08_F: GreekHead_A3_08
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_04.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_04_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class GreekHead_A3_09;
		class CamoHead_Greek_09_F: GreekHead_A3_09
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_White_05.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_White_05_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class AsianHead_A3_01;
		class CamoHead_Asian_01_F: AsianHead_A3_01
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Asian_01_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class AsianHead_A3_02;
		class CamoHead_Asian_02_F: AsianHead_A3_02
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Asian_02_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class AsianHead_A3_03;
		class CamoHead_Asian_03_F: AsianHead_A3_03
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Asian_03_injury.rvmat";
			identityTypes[]=
			{
				"Head_Greek_camo_lush",
				"Head_Greek_camo_arid",
				"Head_Greek_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class PersianHead_A3_01;
		class CamoHead_Persian_01_F: PersianHead_A3_01
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Persian_01_injury.rvmat";
			identityTypes[]=
			{
				"Head_TK_camo_lush",
				"Head_TK_camo_arid",
				"Head_TK_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class PersianHead_A3_02;
		class CamoHead_Persian_02_F: PersianHead_A3_02
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Persian_02_injury.rvmat";
			identityTypes[]=
			{
				"Head_TK_camo_lush",
				"Head_TK_camo_arid",
				"Head_TK_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class PersianHead_A3_03;
		class CamoHead_Persian_03_F: PersianHead_A3_03
		{
			material="\A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03.rvmat";
			materialWounded1="A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03_injury.rvmat";
			materialWounded2="A3\Characters_F_Mark\Heads\Data\m_camo_Persian_03_injury.rvmat";
			identityTypes[]=
			{
				"Head_TK_camo_lush",
				"Head_TK_camo_arid",
				"Head_TK_camo_semiarid"
			};
			disabled=1;
			DLC="Mark";
		};
		class WhiteHead_22_a: WhiteHead_01
		{
			DLC="Mark";
		};
		class WhiteHead_22_l: WhiteHead_22_a
		{
			DLC="Mark";
		};
		class WhiteHead_22_sa: WhiteHead_22_a
		{
			DLC="Mark";
		};
		class PersianHead_A3_04_a: PersianHead_A3_01
		{
			DLC="Mark";
		};
		class PersianHead_A3_04_l: PersianHead_A3_04_a
		{
			DLC="Mark";
		};
		class PersianHead_A3_04_sa: PersianHead_A3_04_a
		{
			DLC="Mark";
		};
		class GreekHead_A3_10_a: GreekHead_A3_01
		{
			DLC="Mark";
		};
		class GreekHead_A3_10_l: GreekHead_A3_10_a
		{
			DLC="Mark";
		};
		class GreekHead_A3_10_sa: GreekHead_A3_10_a
		{
			DLC="Mark";
		};
	};
};
