class CfgPatches
{
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
		};
	};
};
