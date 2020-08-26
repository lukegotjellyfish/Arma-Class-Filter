class CfgPatches
{
	class rhsusf_c_commskit
	{
		units[]=
		{
			"cnr_base_obj"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_c_troops"
		};
		name="Combat Net Radio System";
		author="$STR_RHSUSF_AUTHOR_FULL";
		url="http://www.rhsmods.org/";
	};
};
class CfgVehicleClasses
{
	class CNR
	{
		displayName="Combat Net Radio";
	};
};
class CfgVehicles
{
	class Building;
	class Thing;
	class cnr_base_obj: Thing
	{
		dlc="RHS_USAF";
		author="Feint";
		scope=2;
		accuracy=0.30000001;
		vehicleClass="CNR";
		simulation="thingX";
		nameSound="";
		model="\rhsusf\addons\rhsusf_commskit\RHS_ANPRC152.p3d";
		displayName="AN/PRC-152";
		class DestructionEffects;  //found empty after stripping
		armor=450;
		cost=0;
		class EventHandlers;
	};
};
