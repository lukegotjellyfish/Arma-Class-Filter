class CfgPatches
{
	class A3_Modules_F_Mark_FiringDrills
	{
		addonRootClass="A3_Modules_F_Mark";
		units[]={};
		weapons[]={};
	};
};
class CfgFunctions
{
	class A3
	{
		class ModuleFiringDrills_Mark
		{
			file="A3\Modules_F_Mark\FiringDrills\functions";
			class moduleFDBalloonAirDestruction
			{
				description="Air-filled balloon destruction effect";
			};
			class moduleFDBalloonWaterDestruction
			{
				description="Water-filled balloon destruction effect";
			};
		};
	};
};
