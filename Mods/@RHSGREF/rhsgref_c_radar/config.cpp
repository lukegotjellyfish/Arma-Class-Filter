class DefaultEventhandlers;
class CfgPatches
{
	class rhsgref_c_radar
	{
		units[]=
		{
			"rhsgref_serhat_radar",
			"rhsgref_serhat_radar_d"
		};
		weapons[]={};
		name="RHS GREF Radar";
	};
};
class CfgVehicles
{
	class NonStrategic;
	class rhsgref_serhat_radar: NonStrategic
	{
		icon="iconObject_5x2";
		editorCategory="EdCat_Things";
	};
};
