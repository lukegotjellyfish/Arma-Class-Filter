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
			class Camo2: Camo1
			{
			};
			class Omon1: Camo1
			{
			};
			class Omon2: Camo1
			{
			};
			class MC: Camo1
			{
			};
			class Desert: Camo1
			{
			};
			class rhs_sand
			{
			};
			class Marine: Camo1
			{
			};
		};
	};
};
