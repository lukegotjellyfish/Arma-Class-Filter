class CfgPatches
{
	class A3_Air_F_Beta_Parachute_02
	{
		addonRootClass="A3_Air_F_Beta";
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
		_generalMacro="Parachute_02_base_F";
		animated=1;
		accuracy=1000;
		displayName="$STR_A3_CfgVehicles_ParachuteCargo_Base0";
		animationOpen="A3\Air_F_Beta\Parachute_02\Data\Anim\Para_Medium_Start.rtm";
		animationDrop="A3\Air_F_Beta\Parachute_02\Data\Anim\Para_Medium_Landing.rtm";
	};
	class B_Parachute_02_F: Parachute_02_base_F
	{
		_generalMacro="B_Parachute_02_F";
		animated=1;
		side=1;
	};
	class O_Parachute_02_F: Parachute_02_base_F
	{
		_generalMacro="O_Parachute_02_F";
		animated=1;
		side=0;
	};
	class I_Parachute_02_F: Parachute_02_base_F
	{
		_generalMacro="I_Parachute_02_F";
		animated=1;
		side=2;
	};
	class B_Parachute;
	class B_B_Parachute_02_F: B_Parachute
	{
		_generalMacro="B_B_Parachute_02_F";
		ParachuteClass="B_Parachute_02_F";
	};
	class B_O_Parachute_02_F: B_Parachute
	{
		_generalMacro="B_O_Parachute_02_F";
		ParachuteClass="O_Parachute_02_F";
	};
	class B_I_Parachute_02_F: B_Parachute
	{
		_generalMacro="B_I_Parachute_02_F";
		ParachuteClass="I_Parachute_02_F";
	};
};
