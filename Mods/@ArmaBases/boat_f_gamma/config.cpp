class CfgPatches
{
	class A3_Boat_F_Gamma_Boat_Transport_01
	{
		addonRootClass="A3_Boat_F_Gamma";
		requiredAddons[]=
		{
			"A3_Boat_F_Beta_Boat_Transport_01",
			"A3_Boat_F_Gamma"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_G_Boat_Transport_01_F",
			"I_G_Boat_Transport_01_F",
			"O_G_Boat_Transport_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Rubber_duck_base_F;
	class I_G_Boat_Transport_01_F: Rubber_duck_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehide_zbytek",
					0
				},
				
				{
					"damage_unhide",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"propeller",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.242;
			verticalOffsetWorld=-0.043000001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Boat_Transport_01_F.jpg";
		_generalMacro="I_G_Boat_Transport_01_F";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="IND_G_F";
		crew="I_G_Soldier_F";
		typicalCargo[]=
		{
			"I_G_Soldier_F",
			"I_G_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class B_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehide_zbytek",
					0
				},
				
				{
					"damage_unhide",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"propeller",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.24;
			verticalOffsetWorld=-0.167;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Boat_Transport_01_F.jpg";
		_generalMacro="B_G_Boat_Transport_01_F";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_G_F";
		crew="B_G_Soldier_F";
		typicalCargo[]=
		{
			"B_G_Soldier_F",
			"B_G_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class O_G_Boat_Transport_01_F: I_G_Boat_Transport_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehide_zbytek",
					0
				},
				
				{
					"damage_unhide",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"propeller",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.2410001;
			verticalOffsetWorld=0.063000001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Boat_Transport_01_F.jpg";
		_generalMacro="O_G_Boat_Transport_01_F";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_G_F";
		crew="O_G_Soldier_F";
		typicalCargo[]=
		{
			"O_G_Soldier_F",
			"O_G_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
};
