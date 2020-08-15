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
				displayName="Tricolor (1)";
				factions[]=
				{
					"rhs_faction_vdv"
				};
			};
			class Camo2: Camo1
			{
				displayName="Tricolor (2)";
			};
			class Camo3: Camo1
			{
				displayName="Tricolor (3)";
			};
			class Camo4: Camo1
			{
				displayName="Tricolor (4)";
			};
			class MC: Camo1
			{
				displayName="MS (Peacekeeper)";
			};
			class Desert: Camo1
			{
				displayName="Desert";
			};
		};
	};
	class rhs_bmd1_base: rhs_bmd_base
	{
		class textureSources
		{
			class Camo1
			{
				displayName="Tricolor (1)";
			};
			class MC
			{
				displayName="MS (Peacekeeper)";
			};
		};
	};
};
