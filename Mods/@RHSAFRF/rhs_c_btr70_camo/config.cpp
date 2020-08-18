class CfgPatches
{
	class rhs_c_btr70_camo
	{
		units[]={};
		weapons[]={};
		version="0.1.1.1";
	};
};
class CfgVehicles
{
	class rhs_btr_base;
	class rhs_btr70_vmf: rhs_btr_base
	{
		class textureSources
		{
			class Camo1
			{
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo2: Camo1;  //found empty after stripping
			class Omon1: Camo1;  //found empty after stripping
			class Omon2: Camo1;  //found empty after stripping
			class MC: Camo1;  //found empty after stripping
			class Desert: Camo1;  //found empty after stripping
			class rhs_sand;  //found empty after stripping
			class Marine: Camo1;  //found empty after stripping
		};
	};
};
