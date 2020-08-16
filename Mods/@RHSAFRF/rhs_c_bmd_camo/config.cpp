class CfgPatches
{
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
		};
	};
	class rhs_bmd1_base: rhs_bmd_base
	{
		class textureSources
		{
		};
	};
};
