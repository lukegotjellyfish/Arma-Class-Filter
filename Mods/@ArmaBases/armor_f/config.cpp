class CfgPatches
{
	class A3_Armor_F
	{
		name="Arma 3 Alpha - Armored Land Vehicles";
		units[]={};
		weapons[]={};
	};
};
class CfgArmorSimulations
{
	class Default
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={1};
			speed[]={0.89999998,1};
		};
		class HE
		{
			hit[]={1};
			speed[]={0.5,1};
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.80000001,1};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.89999998,1};
		};
	};
	class Armor_ERA_Light: Default
	{
		class AP: AP
		{
			speed[]={0.89999998,1};
		};
		class HE: HE
		{
			hit[]={0.1,1};
			speed[]={1};
		};
		class HEAT: HEAT
		{
			speed[]={0.050000001,1};
		};
		class TandemHEAT: TandemHEAT
		{
			speed[]={0.89999998,1};
		};
	};
	class Armor_ERA_Heavy: Default
	{
		class AP: AP
		{
			speed[]={0.64999998,1};
		};
		class HE: HE
		{
			hit[]={0.1,1};
			speed[]={1};
		};
		class HEAT: HEAT
		{
			speed[]={0.0099999998,1};
		};
		class TandemHEAT: TandemHEAT
		{
			speed[]={0.64999998,1};
		};
	};
	class Armor_SLAT: Default
	{
		class AP: AP
		{
			hit[]={0};
			speed[]={0.94999999,1};
		};
		class HE: HE
		{
			hit[]={0.25,1};
			speed[]={1};
		};
		class HEAT: HEAT
		{
			speed[]={0.050000001,1};
		};
		class TandemHEAT: TandemHEAT
		{
			speed[]={0.64999998,1};
		};
	};
};
class CfgDestroy
{
	access=1;
	class EngineHit
	{
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622776,
			1
		};
	};
};
