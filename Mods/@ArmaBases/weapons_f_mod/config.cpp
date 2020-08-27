class CfgPatches
{
	class A3_Weapons_F_Mod_SMGs_SMG_03
	{
		addonRootClass="A3_Weapons_F_Mod";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mod"
		};
		requiredVersion=0.1;
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
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_TR_BASE";
		displayName="$STR_A3_CfgWeapons_SMG_03_TR_BASE0";
		model="\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03_TR.p3d";
		modelOptics="-";
		optics=1;
		opticsZoomMin=0.34999999;
		opticsZoomMax=0.34999999;
		dlc="OfficialMod";
		magazines[]=
		{
			"50Rnd_570x28_SMG_03"
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\Anim\P90.rtm"
		};
		reloadAction="GestureReload_smg_03";
		recoil="recoil_smg_03";
		magazineReloadSwitchPhase=0.40000001;
		inertia=0.30000001;
		aimTransitionSpeed=1.3;
		dexterity=1.7;
		initSpeed=-1.1;
		maxZeroing=800;
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		descriptionShort="$STR_A3_CfgWeapons_SMG_03_TR_BASE1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_SMG_03_TR_BASE_Library0";
		};
		class OpticsModes
		{
			class Kolimator
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="opticView";
				opticsFlare=0;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
			};
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Reload",
			1,
			1,
			10
		};
		class Single: Mode_SemiAuto
		{
			multiplier=1;
			burst=1;
			reloadTime=0.0666667;
			dispersion=0.001;
			soundContinuous=0;
			autoFire=0;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=0;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"ADR_97_Shot_SoundSet",
					"ADR_97_Tail_SoundSet",
					"ADR_97_InteriorTail_SoundSet"
				};
			};
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
			soundContinuous=0;
			autoFire=1;
			aiRateOfFire=0.079999998;
			aiRateOfFireDistance=0;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"ADR_97_Shot_SoundSet",
					"ADR_97_Tail_SoundSet",
					"ADR_97_InteriorTail_SoundSet"
				};
			};
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
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.40000001,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.33000001,0.37};
				iconScale=0.25;
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"muzzle_snds_570"
				};
				iconPosition[]={0,0.5};
				iconScale=0.25;
			};
			mass=50;
		};
	};
	class SMG_03C_BASE: SMG_03_TR_BASE
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_BASE";
		maxZeroing=600;
		initSpeed=-1;
		inertia=0.2;
		aimTransitionSpeed=1.4;
		dexterity=1.8;
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
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_TR_black";
		scope=2;
		displayName="$STR_A3_CfgWeapons_SMG_03_TR_black0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_black_ca.paa";
	};
	class SMG_03_TR_camo: SMG_03_TR_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_TR_camo";
		displayName="$STR_A3_CfgWeapons_SMG_03_TR_camo0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_camo_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"
		};
	};
	class SMG_03_TR_khaki: SMG_03_TR_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_TR_khaki";
		displayName="$STR_A3_CfgWeapons_SMG_03_TR_khaki0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_khaki_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"
		};
	};
	class SMG_03_TR_hex: SMG_03_TR_BASE
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_TR_hex";
		scope=2;
		displayName="$STR_A3_CfgWeapons_SMG_03_TR_hex0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_hex_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"
		};
	};
	class SMG_03C_TR_black: SMG_03C_BASE
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_TR_black";
		displayName="$STR_A3_CfgWeapons_SMG_03C_TR_black0";
		model="\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03C_TR.p3d";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_black_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot;  //found empty after stripping
			class PointerSlot: PointerSlot;  //found empty after stripping
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.15000001,0.5};
			};
			mass=40;
		};
	};
	class SMG_03C_TR_camo: SMG_03C_TR_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_TR_camo";
		displayName="$STR_A3_CfgWeapons_SMG_03C_TR_camo0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_camo_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"
		};
	};
	class SMG_03C_TR_khaki: SMG_03C_TR_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_TR_khaki";
		displayName="$STR_A3_CfgWeapons_SMG_03C_TR_khaki0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_khaki_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"
		};
	};
	class SMG_03C_TR_hex: SMG_03C_TR_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_TR_hex";
		displayName="$STR_A3_CfgWeapons_SMG_03C_TR_hex0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_hex_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"
		};
	};
	class SMG_03_black: SMG_03_TR_BASE
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_black";
		scope=2;
		displayName="$STR_A3_CfgWeapons_SMG_03_black0";
		model="\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03.p3d";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_black_ca.paa";
		class WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"muzzle_snds_570"
				};
				iconPosition[]={0,0.5};
				iconScale=0.25;
			};
			mass=50;
		};
		class OpticsModes: OpticsModes
		{
			class Kolimator: Kolimator;  //found empty after stripping
			class IronSight: Kolimator
			{
				opticsID=2;
				opticsFlare=1;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsPPEffects[]={};
			};
		};
	};
	class SMG_03_camo: SMG_03_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_camo";
		displayName="$STR_A3_CfgWeapons_SMG_03_camo0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_camo_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"
		};
	};
	class SMG_03_khaki: SMG_03_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_khaki";
		displayName="$STR_A3_CfgWeapons_SMG_03_khaki0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_khaki_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"
		};
	};
	class SMG_03_hex: SMG_03_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03_hex";
		displayName="$STR_A3_CfgWeapons_SMG_03_hex0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_hex_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"
		};
	};
	class SMG_03C_black: SMG_03C_BASE
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_black";
		scope=2;
		displayName="$STR_A3_CfgWeapons_SMG_03C_black0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_black_ca.paa";
		model="\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03C.p3d";
		class WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"muzzle_snds_570"
				};
				iconPosition[]={0.15000001,0.5};
				iconScale=0.25;
			};
			mass=40;
		};
		class OpticsModes: OpticsModes
		{
			class Kolimator: Kolimator;  //found empty after stripping
			class IronSight: Kolimator
			{
				opticsID=2;
				opticsFlare=1;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsPPEffects[]={};
			};
		};
	};
	class SMG_03C_camo: SMG_03C_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_camo";
		displayName="$STR_A3_CfgWeapons_SMG_03C_camo0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"
		};
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_camo_ca.paa";
	};
	class SMG_03C_khaki: SMG_03C_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_khaki";
		displayName="$STR_A3_CfgWeapons_SMG_03C_khaki0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_khaki_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"
		};
	};
	class SMG_03C_hex: SMG_03C_black
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="SMG_03C_hex";
		displayName="$STR_A3_CfgWeapons_SMG_03C_hex0";
		picture="\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_hex_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"
		};
	};
};
