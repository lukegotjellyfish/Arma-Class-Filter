class CfgPatches
{
	class rhsusf_c_commskit
	{
		units[]=
		{
			"cnr_base_obj"
		};
		weapons[]={};
		name="Combat Net Radio System";
	};
};
class CfgVehicleClasses
{
	class CNR
	{
	};
};
class CfgVehicles
{
	class Building;
	class Thing;
	class cnr_base_obj: Thing
	{
		accuracy=0.30000001;
		simulation="thingX";
		nameSound="";
		armor=450;
		cost=0;
		class EventHandlers;
	};
};
