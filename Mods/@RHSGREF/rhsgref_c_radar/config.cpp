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
		displayName="SERHAT Radar (Woodland)";
		icon="iconObject_5x2";
		editorCategory="EdCat_Things";
	};
	class rhsgref_serhat_radar_d: rhsgref_serhat_radar
	{
		displayName="SERHAT Radar (Desert)";
	};
};
