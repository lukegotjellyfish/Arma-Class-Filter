class CfgPatches
{
	class rhs_c_bmd_camo
	{
		units[]={};
		weapons[]={};
		version="0.1.1.1";
	};
};
class CfgVehicles
{
	class rhs_bmd_base;
	class rhs_bmd2_base: rhs_bmd_base
	{
		class textureSources
		{
			class Camo1
			{
				factions[]=
				{
					"rhs_faction_vdv"
				};
			};
			class Camo2: Camo1;  //found empty after stripping
			class Camo3: Camo1;  //found empty after stripping
			class Camo4: Camo1;  //found empty after stripping
			class MC: Camo1;  //found empty after stripping
			class Desert: Camo1;  //found empty after stripping
		};
	};
	class rhs_bmd1_base: rhs_bmd_base
	{
		class textureSources
		{
			class Camo1;  //found empty after stripping
			class MC;  //found empty after stripping
		};
	};
};
