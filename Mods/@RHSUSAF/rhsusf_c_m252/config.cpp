class CfgPatches
{
	class rhsusf_c_m252
	{
		units[]={};
		weapons[]={};
	};
};
class DefaultEventhandlers;
class Mode_SemiAuto;
class Mode_Burst;
class CfgVehicles
{
	class ThingX;
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class B_Mortar_01_F: Mortar_01_base_F
	{
	};
	class Arty_Optic_Base: ThingX
	{
	};
	class ammocase_Base: ThingX
	{
	};
	class 81mm_mortar_case_single: ammocase_Base
	{
	};
	class 81mm_mortar_case_quad: ammocase_Base
	{
	};
	class rhs_mortar_M67: Arty_Optic_Base
	{
	};
	class rhs_mortar_M821_inv: ammocase_Base
	{
	};
};
