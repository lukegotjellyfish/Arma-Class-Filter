class CfgPatches
{
	class A3_Boat_F_EPC_Submarine_01
	{
		addonRootClass="A3_Boat_F_EPC";
		units[]=
		{
			"Submarine_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class FloatingStructure_F;
	class Submarine_01_F: FloatingStructure_F
	{
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=3.2939999;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Submarine_01_F";
		features="Randomization: No										<br />Camo selections: None										<br />Script door sources: None										<br />Script animations: None										<br />Executed scripts: None										<br />Firing from vehicles: No										<br />Slingload: No										<br />Cargo proxy indexes: None";
		icon="iconObject_1x5";
		editorCategory="EdCat_Structures_Altis";
		memoryPointTaskMarker="TaskMarker_1_pos";
		featureSize=98.5;
	};
};
