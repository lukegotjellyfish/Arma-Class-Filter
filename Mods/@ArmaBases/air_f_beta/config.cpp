class CfgPatches
{
	class A3_Air_F_Beta_Parachute_02
	{
		addonRootClass="A3_Air_F_Beta";
		requiredAddons[]=
		{
			"A3_Air_F_Beta",
			"A3_Weapons_F_Ammoboxes"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_B_Parachute_02_F",
			"B_I_Parachute_02_F",
			"B_O_Parachute_02_F",
			"B_Parachute_02_F",
			"I_Parachute_02_F",
			"O_Parachute_02_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class parachuteBase;
	class Parachute_02_base_F: parachuteBase
	{
		features="Randomization: No						<br />Camo selections: 1 - main body						<br />Script door sources: None						<br />Script animations:  None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Parachute_02_base_F";
		scope=0;
		animated=1;
		accuracy=1000;
		displayName="$STR_A3_CfgVehicles_ParachuteCargo_Base0";
		model="\A3\Air_F_Beta\Parachute_02\Parachute_02_F.p3d";
		animationOpen="A3\Air_F_Beta\Parachute_02\Data\Anim\Para_Medium_Start.rtm";
		animationDrop="A3\Air_F_Beta\Parachute_02\Data\Anim\Para_Medium_Landing.rtm";
	};
	class B_Parachute_02_F: Parachute_02_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_Parachute_02_F";
		scope=1;
		animated=1;
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
	};
	class O_Parachute_02_F: Parachute_02_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="O_Parachute_02_F";
		scope=1;
		animated=1;
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\ammoboxes\data\supplydrop_OPFOR_co.paa"
		};
	};
	class I_Parachute_02_F: Parachute_02_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="I_Parachute_02_F";
		scope=1;
		animated=1;
		side=2;
		faction="IND_F";
		crew="B_UAV_AI";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\ammoboxes\data\supplydrop_OPFOR_co.paa"
		};
	};
	class B_Parachute;
	class B_B_Parachute_02_F: B_Parachute
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_B_Parachute_02_F";
		scope=1;
		ParachuteClass="B_Parachute_02_F";
	};
	class B_O_Parachute_02_F: B_Parachute
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_O_Parachute_02_F";
		scope=1;
		ParachuteClass="O_Parachute_02_F";
	};
	class B_I_Parachute_02_F: B_Parachute
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_I_Parachute_02_F";
		scope=1;
		ParachuteClass="I_Parachute_02_F";
	};
};
