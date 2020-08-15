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
				displayName="3-Color Camo (1)";
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
				displayName="3-Color Camo (2)";
			};
			class Omon1: Camo1
			{
				displayName="Omon (1)";
			};
			class Omon2: Camo1
			{
				displayName="Omon (2)";
			};
			class MC: Camo1
			{
				displayName="MS (Peacekeeper)";
			};
			class Desert: Camo1
			{
				displayName="Desert";
			};
			class rhs_sand
			{
				displayName="Sand";
			};
			class Marine: Camo1
			{
				displayName="Marine";
			};
		};
	};
};
