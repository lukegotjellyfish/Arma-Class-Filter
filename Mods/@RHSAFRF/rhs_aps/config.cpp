class CfgPatches
{
	class rhs_aps
	{
		units[]={};
		weapons[]={};
		versionDesc="RHS";
	};
};
class CfgVehicles
{
	class Lamps_base_F;
	class RHS_Dazzler: Lamps_base_F
	{
		timeToLive=30;
		gravityFactor=0;
		armor=5000;
		armorLights=0.050000001;
	};
	class All;  //found empty after stripping
	class LaserTarget: All
	{
		class EventHandlers
		{
			class RHS_APS_EH
			{
				init="";
			};
		};
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class SHTORA;  //found empty after stripping
		class Afganit
		{
			class aps_missileFired
			{
				file="rhsafrf\addons\rhs_aps\scripts\rhs_fnc_aps_missileFired.sqf";
			};
		};
	};
};
class CfgAmmo
{
	class Default
	{
		class EventHandlers;
	};
	class MissileCore: Default;  //found empty after stripping
	class MissileBase: MissileCore
	{
		class EventHandlers: EventHandlers
		{
			class RHS_APS_FiredEH
			{
				fired="_this spawn rhs_fnc_aps_missileFired";
			};
		};
	};
	class RocketCore: Default;  //found empty after stripping
	class RocketBase: RocketCore
	{
		class EventHandlers: EventHandlers
		{
			class RHS_APS_FiredEH
			{
				fired="_this spawn rhs_fnc_aps_missileFired";
			};
		};
	};
};
class CfgSounds
{
	class RHS_APS_Warning
	{
		name="APS_warning";
		sound[]=
		{
			"\rhsafrf\addons\rhs_aps\sound\warning.wav",
			1,
			1
		};
		titles[]={};
	};
};
