class CfgPatches
{
	class A3_Boat_F_Gamma_Boat_Transport_01
	{
		addonRootClass="A3_Boat_F_Gamma";
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
		_generalMacro="I_G_Boat_Transport_01_F";
		side=2;
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
		_generalMacro="B_G_Boat_Transport_01_F";
		side=1;
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
		_generalMacro="O_G_Boat_Transport_01_F";
		side=0;
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
