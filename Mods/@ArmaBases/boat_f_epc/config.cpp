class CfgPatches
{
	class A3_Boat_F_EPC_Submarine_01
	{
		addonRootClass="A3_Boat_F_EPC";
		requiredAddons[]=
		{
			"A3_Boat_F_EPC",
			"A3_Structures_F"
		};
		requiredVersion=0.1;
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
		author="$STR_A3_Bohemia_Interactive";
		mapSize=98.82;
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
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Submarine_01_F.jpg";
		_generalMacro="Submarine_01_F";
		features="Randomization: No										<br />Camo selections: None										<br />Script door sources: None										<br />Script animations: None										<br />Executed scripts: None										<br />Firing from vehicles: No										<br />Slingload: No										<br />Cargo proxy indexes: None";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CFGVEHICLES_PROTEUS";
		model="\A3\Boat_F_EPC\Submarine_01\Submarine_01_F.p3d";
		icon="iconObject_1x5";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_StaticShips";
		vehicleClass="Submerged";
		destrType="DestructNo";
		memoryPointTaskMarker="TaskMarker_1_pos";
		featureSize=98.5;
	};
};
