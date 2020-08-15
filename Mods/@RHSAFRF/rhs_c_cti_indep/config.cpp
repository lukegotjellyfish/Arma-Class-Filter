class CfgPatches
{
	class rhs_cti_insurgents
	{
		units[]=
		{
			"rhs_g_Soldier_F",
			"rhs_g_Soldier_lite_F",
			"rhs_g_Soldier_SL_F",
			"rhs_g_Soldier_TL_F",
			"rhs_g_Soldier_AR_F",
			"rhs_g_medic_F",
			"rhs_g_engineer_F",
			"rhs_g_Soldier_exp_F",
			"rhs_g_Soldier_GL_F",
			"rhs_g_Soldier_M_F",
			"rhs_g_Soldier_LAT_F",
			"rhs_g_Soldier_AA_F",
			"rhs_g_Soldier_AT_F",
			"rhs_g_Crew_F",
			"rhs_g_Soldier_AAR_F",
			"rhs_g_Soldier_AAT_F"
		};
		weapons[]={};
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class t72_flag_init
			{
				file="\rhsafrf\addons\rhs_c_cti_indep\scripts\rhs_t72_flag_init.sqf";
				description="Independent T-72 flag init";
			};
		};
	};
};
class DefaultEventhandlers;
class cfgWeapons
{
	class UniformItem;
	class U_I_OfficerUniform;
	class rhs_chdkz_uniform_1: U_I_OfficerUniform
	{
		displayName="Guerilla Uniform (Les)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="rhs_g_uniform1_base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_chdkz_uniform_2: U_I_OfficerUniform
	{
		displayName="Guerilla Uniform (Half-Les)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="rhs_g_uniform2_base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_chdkz_uniform_3: U_I_OfficerUniform
	{
		displayName="Guerilla Uniform (Half-Kamysh)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="rhs_g_uniform3_base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_chdkz_uniform_4: U_I_OfficerUniform
	{
		displayName="Guerilla Uniform (Half-Flora)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="rhs_g_uniform4_base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_chdkz_uniform_5: U_I_OfficerUniform
	{
		displayName="Guerilla Uniform (Flora-Les)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="rhs_g_uniform5_base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_insurgent_uniform_1: rhs_chdkz_uniform_1
	{
	};
	class rhs_insurgent_uniform_2: rhs_chdkz_uniform_2
	{
	};
	class rhs_insurgent_uniform_3: rhs_chdkz_uniform_3
	{
	};
	class rhs_insurgent_uniform_4: rhs_chdkz_uniform_4
	{
	};
	class rhs_insurgent_uniform_5: rhs_chdkz_uniform_5
	{
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class FlagCarrierCore;
	class rhs_FlagCarrier: FlagCarrierCore
	{
		displayName="";
		icon="iconObject_circle";
		cost=1000;
		keepHorizontalPlacement=1;
		accuracy=1000;
		animated=0;
		nameSound="obj_flag";
		supplyRadius=2;
		hiddenSelections[]=
		{
			"vlajka"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat"
		};
	};
	class rhs_Flag_chdkz: rhs_FlagCarrier
	{
		displayName="CHDKZ Small Flag";
		class EventHandlers
		{
			class RHS_EventHandlers
			{
				init="(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_c_cti_indep\flag_chdkz_co.paa'";
			};
		};
	};
	class rhs_Flag_Insurgents: rhs_FlagCarrier
	{
		displayName="Insurgents Small Flag";
		class EventHandlers
		{
			class RHS_EventHandlers
			{
				init="(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_c_cti_indep\flag_Insurgents_co.paa'";
			};
		};
	};
	class B_FieldPack_khk;
	class B_FieldPack_cbr;
	class B_TacticalPack_blk;
	class B_Carryall_cbr;
	class rhs_ins_pack: B_FieldPack_khk
	{
		displayName="Backpack (Ammo)";
	};
	class rhs_ins_pack_GR: B_FieldPack_cbr
	{
		displayName="Backpack (Ammo)";
	};
	class rhs_ins_packMG: B_TacticalPack_blk
	{
		displayName="Backpack (MG)";
	};
	class rhs_ins_demo: B_Carryall_cbr
	{
		displayName="$STR_RHS_UMBTSBACKPACKDEMOLITIONS_NAME";
		hiddenSelectionsTextures[]={};
	};
	class I_G_Soldier_base_F;
	class I_G_Soldier_F: I_G_Soldier_base_F
	{
		class Eventhandlers;
	};
	class rhs_ins_base: I_G_Soldier_F
	{
		displayName="$STR_RHS_INF_RIFLEMAN";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Euro",
			"rhs_scarf",
			"G_CIVIL_male"
		};
		genericNames="RussianMen";
		camouflage=1;
		sensitivity=0.60000002;
		headgearProbability=50;
		allowedHeadgear[]=
		{
			"rhs_beanie",
			"rhs_beanie_green",
			"H_Cap_blk"
		};
		allowedHeadgearB[]=
		{
			"rhs_beanie",
			"rhs_beanie_green",
			"rhs_6b26",
			"rhs_ssh68",
			"H_Cap_blk",
			"H_Cap_red",
			"rhs_6b27m_green",
			"H_Beret_blk",
			"H_Bandanna_gry",
			"H_Cap_tan"
		};
		headgearList[]={};
		uniformClass="rhs_chdkz_uniform_4";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_black"
		};
		class EventHandlers: Eventhandlers
		{
			class RHS_EventHandlers
			{
				init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
			};
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"
		};
		class Wounds
		{
		};
	};
	class rhs_g_Soldier_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_RIFLEMAN_AKM";
		uniformClass="rhs_chdkz_uniform_4";
		linkedItems[]=
		{
			"rhs_beanie_green",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beanie_green",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_g_Soldier_lite_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_RIFLEMAN_L";
		uniformClass="rhs_chdkz_uniform_5";
		headgearProbability=0;
		linkedItems[]=
		{
			"rhs_balaclava1_olive",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_balaclava1_olive",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
	};
	class rhs_g_Soldier_F2: rhs_ins_base
	{
		displayName="$STR_RHS_INF_RIFLEMAN_AK103";
		uniformClass="rhs_chdkz_uniform_2";
		linkedItems[]=
		{
			"rhs_beanie",
			"rhs_scarf",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beanie",
			"rhs_scarf",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak103_dtk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak103_dtk",
			"Throw",
			"Put"
		};
	};
	class rhs_g_Soldier_F3: rhs_ins_base
	{
		displayName="Rifleman (AK74M)";
		uniformClass="rhs_chdkz_uniform_3";
		linkedItems[]=
		{
			"rhs_beanie_green",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beanie_green",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="B_FieldPack_khk";
		weapons[]=
		{
			"rhs_weap_ak74m_plummag_dtk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_plummag_dtk",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_black"
		};
	};
	class rhs_g_Soldier_AT_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_LAT";
		uniformClass="rhs_chdkz_uniform_2";
		headgearProbability=0;
		linkedItems[]=
		{
			"H_Cap_blk",
			"rhs_balaclava",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_Cap_blk",
			"rhs_balaclava",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put",
			"rhs_weap_rpg26"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put",
			"rhs_weap_rpg26"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_rpg26_mag",
			"rhs_mag_rdg2_black"
		};
	};
	class rhs_g_Soldier_GL_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_GRENADIER";
		uniformClass="rhs_chdkz_uniform_2";
		linkedItems[]=
		{
			"rhs_beanie",
			"rhs_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beanie",
			"rhs_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akm_gp25",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm_gp25",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rdg2_black"
		};
		backpack="rhs_ins_pack_GR";
	};
	class rhs_g_Soldier_TL_F: rhs_g_Soldier_GL_F
	{
		displayName="$STR_RHSUSF_INF_SCOUT_GR";
		uniformClass="rhs_chdkz_uniform_4";
		headgearProbability=0;
		linkedItems[]=
		{
			"H_Cap_red",
			"rhs_scarf",
			"rhs_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_Cap_red",
			"rhs_scarf",
			"rhs_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akms_gp25",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms_gp25",
			"Throw",
			"Put"
		};
	};
	class rhs_g_Soldier_M_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_MARKSMAN";
		uniformClass="rhs_chdkz_uniform_5";
		headgearProbability=0;
		linkedItems[]=
		{
			"rhs_Booniehat_flora",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_Booniehat_flora",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_svdp_pso1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_svdp_pso1",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_g_Soldier_AR_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER";
		uniformClass="rhs_chdkz_uniform_4";
		headgearProbability=0;
		linkedItems[]=
		{
			"H_Bandanna_camo",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_Bandanna_camo",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_black",
			"rhs_mag_rdg2_black"
		};
		backpack="rhs_ins_packMG";
	};
	class rhs_g_Soldier_AAR_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";
		uniformClass="rhs_chdkz_uniform_1";
		linkedItems[]=
		{
			"rhs_balaclava1_olive",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_balaclava1_olive",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_sidorMG";
	};
	class rhs_g_Soldier_LAT_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG";
		uniformClass="rhs_chdkz_uniform_4";
		weapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put",
			"rhs_weap_rpg7_pgo"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put",
			"rhs_weap_rpg7_pgo"
		};
		backpack="rhs_rpg";
	};
	class rhs_g_Soldier_AAT_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG_ASSISTANT";
		uniformClass="rhs_chdkz_uniform_2";
		headgearProbability=0;
		linkedItems[]=
		{
			"rhs_balaclava",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_balaclava",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_rpg";
		secondaryAmmoCoef=0.5;
	};
	class rhs_g_Soldier_SL_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_SERGEANT";
		uniformClass="rhs_chdkz_uniform_3";
		headgearProbability=0;
		linkedItems[]=
		{
			"H_MilCap_gry",
			"rhs_6sh92_digi_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_MilCap_gry",
			"rhs_6sh92_digi_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akms",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};
		backpack="rhs_ins_pack";
	};
	class rhs_g_engineer_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_ENGINEER";
		uniformClass="rhs_chdkz_uniform_2";
		cost=220000;
		camouflage=1.6;
		sensitivity=2.5;
		canDeactivateMines=1;
		engineer=1;
		detectSkill=60;
		threat[]={1,0.5,0.1};
		icon="iconManEngineer";
		headgearProbability=0;
		linkedItems[]=
		{
			"rhs_beanie",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beanie",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
		backpack="rhs_assault_umbts_engineer";
	};
	class rhs_g_Soldier_exp_F: rhs_ins_base
	{
		displayName="Bomber";
		uniformClass="rhs_chdkz_uniform_4";
		headgearProbability=0;
		linkedItems[]=
		{
			"rhs_beanie_green",
			"rhs_scarf",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beanie_green",
			"rhs_scarf",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		icon="iconManExplosive";
		canDeactivateMines=1;
		detectSkill=80;
		threat[]={1,0.5,0.1};
		backpack="rhs_ins_demo";
	};
	class rhs_g_Soldier_AA_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_AA";
		uniformClass="rhs_chdkz_uniform_5";
		headgearProbability=0;
		linkedItems[]=
		{
			"rhs_balaclava1_olive",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_balaclava1_olive",
			"rhs_6b23_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akms",
			"rhs_weap_igla",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms",
			"rhs_weap_igla",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9k38_rocket",
			"rhs_mag_rdg2_black"
		};
	};
	class rhs_g_medic_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_MEDIC";
		uniformClass="rhs_chdkz_uniform_3";
		attendant=1;
		icon="iconManMedic";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_medic_s"
				};
				speechPlural[]=
				{
					"veh_infantry_medic_p"
				};
			};
		};
		nameSound="veh_infantry_medic_s";
		headgearProbability=0;
		linkedItems[]=
		{
			"rhs_beanie_green",
			"rhs_6b23_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beanie_green",
			"rhs_6b23_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_assault_umbts_medic";
	};
	class rhs_g_Crew_F: rhs_ins_base
	{
		displayName="$STR_RHS_INF_CREW";
		uniformClass="rhs_chdkz_uniform_1";
		headgearProbability=0;
		linkedItems[]=
		{
			"rhs_6sh46",
			"rhs_tsh4",
			"rhs_scarf",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh46",
			"rhs_tsh4",
			"rhs_scarf",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
	};
	class Man;
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierGB: CAManBase
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
	};
	class rhs_g_uniform1_base: SoldierGB
	{
		expansion=1;
		side=2;
		displayName="$STR_DN_RIFLEMAN";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Euro",
			"rhs_scarf"
		};
		faceType="Man_A3";
		genericNames="RussianMen";
		portrait="";
		icon="iconMan";
		accuracy=2.3;
		sensitivity=3;
		threat[]={1,0.1,0.1};
		camouflage=1.4;
		minFireTime=7;
		canCarryBackPack=1;
		nakedUniform="U_BasicBody";
		uniformClass="rhs_chdkz_uniform_1";
		class Wounds
		{
		};
		class HitPoints: HitPoints
		{
			class HitFace: HitFace
			{
			};
			class HitNeck: HitNeck
			{
			};
			class HitPelvis: HitPelvis
			{
				armor=1;
				passThrough=0.60000002;
			};
			class HitAbdomen: HitAbdomen
			{
			};
			class HitDiaphragm: HitDiaphragm
			{
			};
			class HitChest: HitChest
			{
			};
			class HitArms: HitArms
			{
				armor=1;
				passThrough=0.40000001;
			};
			class HitHead: HitHead
			{
				armor=1;
			};
			class HitBody: HitBody
			{
			};
			class HitHands: HitHands
			{
				armor=1;
			};
			class HitLegs: HitLegs
			{
				armor=1;
				passThrough=0.5;
			};
		};
		selectionbodywound="body_injury";
		selectionlarmwound="l_arm_injury";
		selectionlarmwound1="l_arm_injury";
		selectionlarmwound2="hl";
		selectionllegwound="l_leg_injury";
		selectionllegwound1="l_leg_injury";
		selectionllegwound2="hl";
		selectionrarmwound="r_arm_injury";
		selectionrarmwound1="r_arm_injury";
		selectionrarmwound2="hl";
		selectionrlegwound="r_leg_injury";
		selectionrlegwound1="r_leg_injury";
		selectionrlegwound2="hl";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType=602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType=604;
				};
				class Googles: UniformSlotInfo
				{
					slotType=603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType=605;
				};
			};
		};
		weapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\clothing01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"
		};
		cost=100000;
	};
	class rhs_g_uniform2_base: rhs_g_uniform1_base
	{
		uniformClass="rhs_chdkz_uniform_2";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\clothing02_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"
		};
		class Wounds
		{
		};
	};
	class rhs_g_uniform3_base: rhs_g_uniform1_base
	{
		uniformClass="rhs_chdkz_uniform_3";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\clothing03_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"
		};
		class Wounds
		{
		};
	};
	class rhs_g_uniform4_base: rhs_g_uniform1_base
	{
		uniformClass="rhs_chdkz_uniform_4";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\clothing04_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"
		};
		class Wounds
		{
		};
	};
	class rhs_g_uniform5_base: rhs_g_uniform1_base
	{
		uniformClass="rhs_chdkz_uniform_5";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\clothing05_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsafrf\addons\rhs_c_cti_indep\data\infantry\rvmats\clothing.rvmat"
		};
		class Wounds
		{
		};
	};
};
class CfgFactionClasses
{
	class rhs_faction_insurgents
	{
		displayName="Eastern Militia";
		priority=-9;
		side=2;
		icon="\rhsafrf\addons\rhs_c_cti_indep\data\insurgents_faction_icon.paa";
		flag="\rhsafrf\addons\rhs_c_cti_indep\data\map_flag_insurgents_co.paa";
		backpack_tf_faction_radio_api="tf_bussole";
	};
};
class CfgMarkers
{
	class flag_NATO;
	class rhs_flag_insurgents: flag_NATO
	{
		name="Insurgents";
		icon="\rhsafrf\addons\rhs_c_cti_indep\data\map_flag_insurgents_co.paa";
	};
};
