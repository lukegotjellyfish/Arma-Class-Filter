class CfgPatches
{
	class rhsgref_sounds
	{
		units[]={};
		weapons[]={};
		version="0.1";
		name="GREF Sounds";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
	};
	class Rifle_Long_Base_F;
	class UGL_F;
	class srifle_EBR_F;
	class LMG_Mk200_F;
	class LMG_M200;
	class MGun;
	class rhs_weap_m70_base: Rifle_Base_F
	{
	};
	class rhs_weap_m21_base: rhs_weap_m70_base
	{
	};
	class rhs_weap_m76: rhs_weap_m70_base
	{
	};
	class rhs_weap_m38_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHSUSF_sd_xm2010_Shot_SoundSet",
					"RHS_sd_mmg1_Tail_SoundSet"
				};
			};
		};
	};
	class rhs_weap_kar98k_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
		};
	};
	class rhs_weap_savz58_base: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHS_akm_Closure_SoundSet",
					"RHS_akm_ShotSD_SoundSet",
					"RHS_Rifle1_SD_Tail_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHS_akm_Closure_SoundSet",
					"RHS_akm_ShotSD_SoundSet",
					"RHS_Rifle1_SD_Tail_SoundSet"
				};
			};
		};
	};
	class rhs_weap_stgw57_base: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHS_akm_Closure_SoundSet",
					"RHS_akm_ShotSD_SoundSet",
					"RHS_Rifle1_SD_Tail_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHS_akm_Closure_SoundSet",
					"RHS_akm_ShotSD_SoundSet",
					"RHS_Rifle1_SD_Tail_SoundSet"
				};
			};
		};
	};
	class MissileLauncher;
	class Missile_AGM_02_Plane_CAS_01_F;
	class rhs_weap_zt3_launcher: MissileLauncher
	{
	};
	class rhs_weap_zt6_Launcher: Missile_AGM_02_Plane_CAS_01_F
	{
	};
};
