class CfgPatches
{
	class A3_Weapons_F_SMGs_SMG_02
	{
		addonRootClass="A3_Weapons_F";
		units[]={};
		weapons[]=
		{
			"SMG_02_ACO_F",
			"SMG_02_ARCO_pointg_F",
			"SMG_02_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		_generalMacro="SMG_02_base_F";
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag"
		};
		recoil="recoil_smg_02";
		maxZeroing=600;
		cursor="smg";
		class WeaponSlotsInfo: WeaponSlotsInfo;  //found empty after stripping
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",
					1,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",
					0.89125091,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",
					0.89125091,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",
					0.89125091,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.054499999;
			dispersion=0.00116;
			recoil="recoil_single_smg_02";
			recoilProne="recoil_single_prone_smg_02";
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",
					1,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",
					0.89125091,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",
					0.89125091,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",
					0.89125091,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			burst=3;
			reloadTime=0.054499999;
			dispersion=0.00116;
			recoil="recoil_burst_smg_02";
			recoilProne="recoil_burst_prone_smg_02";
		};
		class UGL_F: UGL_F;  //found empty after stripping
	};
	class SMG_02_F: SMG_02_base_F
	{
		_generalMacro="SMG_02_F";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
		};
		initSpeed=370;
	};
	class SMG_02_ACO_F: SMG_02_F
	{
		_generalMacro="SMG_02_ACO_F";
	};
	class SMG_02_ARCO_pointg_F: SMG_02_F
	{
		_generalMacro="SMG_02_ARCO_pointg_F";
	};
};
