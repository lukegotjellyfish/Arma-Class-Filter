class CfgPatches
{
	class A3_Weapons_F_Mod_SMGs_SMG_03
	{
		addonRootClass="A3_Weapons_F_Mod";
		units[]={};
		weapons[]=
		{
			"SMG_03_black",
			"SMG_03_camo",
			"SMG_03_hex",
			"SMG_03_khaki",
			"SMG_03_TR_black",
			"SMG_03_TR_camo",
			"SMG_03_TR_hex",
			"SMG_03_TR_khaki",
			"SMG_03C_black",
			"SMG_03C_camo",
			"SMG_03C_hex",
			"SMG_03C_khaki",
			"SMG_03C_TR_black",
			"SMG_03C_TR_camo",
			"SMG_03C_TR_hex",
			"SMG_03C_TR_khaki"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class PointerSlot;
class SlotInfo;
class MuzzleSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class SMG_03_TR_BASE: Rifle_Base_F
	{
		_generalMacro="SMG_03_TR_BASE";
		magazines[]=
		{
			"50Rnd_570x28_SMG_03"
		};
		recoil="recoil_smg_03";
		initSpeed=-1.1;
		maxZeroing=800;
		class Single: Mode_SemiAuto
		{
			multiplier=1;
			burst=1;
			reloadTime=0.0666667;
			dispersion=0.001;
			autoFire=0;
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"ADR_97_silencerShot_SoundSet",
					"ADR_97_silencerTail_SoundSet",
					"ADR_97_silencerInteriorTail_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			multiplier=1;
			burst=1;
			reloadTime=0.0666667;
			dispersion=0.001;
			autoFire=1;
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"ADR_97_silencerShot_SoundSet",
					"ADR_97_silencerTail_SoundSet",
					"ADR_97_silencerInteriorTail_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo
		{
			mass=50;
		};
	};
	class SMG_03C_BASE: SMG_03_TR_BASE
	{
		_generalMacro="SMG_03C_BASE";
		maxZeroing=600;
		initSpeed=-1;
		class Single: Single
		{
			dispersion=0.0012000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.0012000001;
		};
	};
	class SMG_03_TR_black: SMG_03_TR_BASE
	{
		_generalMacro="SMG_03_TR_black";
	};
	class SMG_03_TR_camo: SMG_03_TR_black
	{
		_generalMacro="SMG_03_TR_camo";
	};
	class SMG_03_TR_khaki: SMG_03_TR_black
	{
		_generalMacro="SMG_03_TR_khaki";
	};
	class SMG_03_TR_hex: SMG_03_TR_BASE
	{
		_generalMacro="SMG_03_TR_hex";
	};
	class SMG_03C_TR_black: SMG_03C_BASE
	{
		_generalMacro="SMG_03C_TR_black";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=40;
		};
	};
	class SMG_03C_TR_camo: SMG_03C_TR_black
	{
		_generalMacro="SMG_03C_TR_camo";
	};
	class SMG_03C_TR_khaki: SMG_03C_TR_black
	{
		_generalMacro="SMG_03C_TR_khaki";
	};
	class SMG_03C_TR_hex: SMG_03C_TR_black
	{
		_generalMacro="SMG_03C_TR_hex";
	};
	class SMG_03_black: SMG_03_TR_BASE
	{
		_generalMacro="SMG_03_black";
		class WeaponSlotsInfo
		{
			mass=50;
		};
	};
	class SMG_03_camo: SMG_03_black
	{
		_generalMacro="SMG_03_camo";
	};
	class SMG_03_khaki: SMG_03_black
	{
		_generalMacro="SMG_03_khaki";
	};
	class SMG_03_hex: SMG_03_black
	{
		_generalMacro="SMG_03_hex";
	};
	class SMG_03C_black: SMG_03C_BASE
	{
		_generalMacro="SMG_03C_black";
		class WeaponSlotsInfo
		{
			mass=40;
		};
	};
	class SMG_03C_camo: SMG_03C_black
	{
		_generalMacro="SMG_03C_camo";
	};
	class SMG_03C_khaki: SMG_03C_black
	{
		_generalMacro="SMG_03C_khaki";
	};
	class SMG_03C_hex: SMG_03C_black
	{
		_generalMacro="SMG_03C_hex";
	};
};
