class CfgPatches
{
	class A3_Structures_F_Mark_VR_Targets
	{
		addonRootClass="A3_Structures_F_Mark";
		units[]=
		{
			"Land_VR_Target_APC_Wheeled_01_F",
			"Land_VR_Target_Dart_01_F",
			"Land_VR_Target_MBT_01_cannon_F",
			"Land_VR_Target_MRAP_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class TargetBase;
	class ThingX;
	class TargetBaseX: ThingX
	{
		_generalMacro="TargetBaseX";
		DLC="Mark";
		icon="iconObject";
		editorCategory="EdCat_Things";
		simulation="thingX";
		animated=0;
		armor=100;
		coefInside=2;
		coefInsideHeur=2;
		coefSpeedInside=2;
		cost=1;
		side=8;
		ladders[]={};
	};
	class Land_VR_Target_Dart_01_F: TargetBase
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_VR_Target_Dart_01_F";
		DLC="Mark";
		icon="iconObject_10x1";
		accuracy=0;
		side=8;
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_emissive.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_Dart_01_blue_basic.rvmat"
		};
	};
	class Land_VR_Target_MBT_01_cannon_F: TargetBase
	{
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"turret_rot",
					0
				},
				
				{
					"gun_rot",
					0
				}
			};
			hide[]={};
			verticalOffset=2.2060001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_VR_Target_MBT_01_cannon_F";
		DLC="Mark";
		icon="iconObject_2x5";
		armor=800;
		armorStructural=6;
		animated=0;
		accuracy=1000;
		irTarget=1;
		laserTarget=1;
		nvTarget=1;
		side=8;
		threat[]={0.80000001,1,0.30000001};
		cost=2000000;
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MBT_01_cannon_BLUFOR.rvmat"
		};
		class Hitpoints
		{
			class HitHull
			{
				name="Hull";
				armor=0.60000002;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.2;
				passThrough=1;
				radius=0.25;
			};
			class HitTurret
			{
				name="Turret";
				armor=0.60000002;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.2;
				passThrough=1;
				radius=0.25;
			};
			class HitGun
			{
				name="Gun";
				armor=0.30000001;
				explosionShielding=0.40000001;
				material=-1;
				minimalHit=0.15000001;
				passThrough=0;
				radius=0.30000001;
			};
			class HitEngine
			{
				name="Engine";
				armor=0.60000002;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.2;
				passThrough=0.5;
				radius=0.25;
			};
			class HitTrack_left
			{
				name="Track_left";
				armor=0.30000001;
				explosionShielding=0.40000001;
				material=-1;
				minimalHit=0.15000001;
				passThrough=0;
				radius=0.30000001;
			};
			class HitTrack_right
			{
				name="Track_right";
				armor=0.30000001;
				explosionShielding=0.40000001;
				material=-1;
				minimalHit=0.15000001;
				passThrough=0;
				radius=0.30000001;
			};
		};
	};
	class Land_VR_Target_MRAP_01_F: TargetBase
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=1.577;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_VR_Target_MRAP_01_F";
		DLC="Mark";
		icon="iconObject_1x2";
		armor=300;
		armorStructural=2;
		animated=0;
		accuracy=1000;
		irTarget=1;
		laserTarget=1;
		nvTarget=1;
		side=8;
		threat[]={0.80000001,0.60000002,0.30000001};
		cost=500000;
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_MRAP_01_BLUFOR.rvmat"
		};
		class Hitpoints
		{
			class HitHull
			{
				name="Hull";
				armor=4;
				explosionShielding=2;
				material=-1;
				minimalHit=0.0099999998;
				passThrough=0.40000001;
				radius=0.44999999;
			};
			class HitFuel
			{
				name="Fuel";
				armor=0.5;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.25;
				passThrough=1;
				radius=0.25;
			};
			class HitEngine
			{
				name="Engine";
				armor=0.5;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.25;
				passThrough=0.2;
				radius=0.25;
			};
			class HitWheel_1_1
			{
				name="Wheel_1_1";
				armor=0.33000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_1_2
			{
				name="Wheel_1_2";
				armor=0.33000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_1
			{
				name="Wheel_2_1";
				armor=0.33000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_2
			{
				name="Wheel_2_2";
				armor=0.33000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
		};
	};
	class Land_VR_Target_APC_Wheeled_01_F: TargetBase
	{
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"turret_rot",
					0
				},
				
				{
					"gun_rot",
					0
				}
			};
			hide[]={};
			verticalOffset=1.811;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Land_VR_Target_APC_Wheeled_01_F";
		DLC="Mark";
		icon="iconObject_2x5";
		armor=250;
		armorStructural=6;
		animated=0;
		accuracy=1000;
		irTarget=1;
		laserTarget=1;
		nvTarget=1;
		side=8;
		threat[]={0.80000001,0.60000002,0.60000002};
		cost=1000000;
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat",
			"\A3\Structures_F_Mark\VR\Targets\Data\VR_Target_APC_Wheeled_01_BLUFOR.rvmat"
		};
		class Hitpoints
		{
			class HitHull
			{
				name="Hull";
				armor=1;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.2;
				passThrough=1;
				radius=0.33000001;
			};
			class HitFuel
			{
				name="Fuel";
				armor=1.5;
				explosionShielding=0.40000001;
				material=-1;
				minimalHit=0.1;
				passThrough=1;
				radius=0.25;
			};
			class HitEngine
			{
				name="Engine";
				armor=0.5;
				explosionShielding=0.2;
				material=-1;
				minimalHit=0.1;
				passThrough=0;
				radius=0.25;
			};
			class HitWheel_1_1
			{
				name="Wheel_1_1";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_1_2
			{
				name="Wheel_1_2";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_1_3
			{
				name="Wheel_1_3";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_1_4
			{
				name="Wheel_1_4";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_1
			{
				name="Wheel_2_1";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_2
			{
				name="Wheel_2_2";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_3
			{
				name="Wheel_2_3";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
			class HitWheel_2_4
			{
				name="Wheel_2_4";
				armor=0.40000001;
				explosionShielding=4;
				material=-1;
				minimalHit=0.02;
				passThrough=0.30000001;
				radius=0.33000001;
			};
		};
	};
};
