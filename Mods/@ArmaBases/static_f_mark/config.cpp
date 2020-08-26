class CfgPatches
{
	class A3_Static_F_Mark_Designator_02
	{
		addonRootClass="A3_Static_F_Mark";
		requiredAddons[]=
		{
			"A3_Static_F_Mark"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_Static_Designator_02_F",
			"O_Static_Designator_02_weapon_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class viewOptics;
			};
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Static_Designator_02_base_F: StaticWeapon
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.56999999;
		_generalMacro="Static_Designator_02_base_F";
		features="Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the designator						<br />Slingload: No						<br />Cargo proxy indexes: None";
		scope=0;
		DLC="Mark";
		displayname="$STR_A3_CfgVehicles_Static_Designator_02_base_F0";
		transportSoldier=0;
		cargoAction[]=
		{
			"Mortar_Gunner"
		};
		getInAction="GetInMortar";
		getOutAction="GetOutLow";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_F_Mark\Designator_02\Data\UI\Designator_02_CA.paa";
		icon="\A3\Static_F_Mark\Designator_02\Data\UI\map_Designator_02_CA.paa";
		cost=200000;
		accuracy=0.25;
		threat[]={1,0.30000001,0.1};
		isUav=1;
		getInRadius=0;
		uavCameraGunnerPos="eye";
		uavCameraGunnerDir="look";
		selectionDamage="DamT_1";
		epeImpulseDamageCoef=55;
		extCameraPosition[]={0,0.5,-3};
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F_Mark\Designator_02\Data\LD02_remote.rvmat",
				"A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat",
				"A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat",
				"A3\Weapons_F_Mark\Binocular\Data\LD02_body.rvmat",
				"A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat",
				"A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				soundElevation[]=
				{
					"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_CSAT",
					1,
					1,
					10
				};
				soundServo[]=
				{
					"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_servo_CSAT",
					0.39810717,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_servo_vertical_CSAT",
					0.56234133,
					1,
					10
				};
				gunnergetInAction="";
				gunnergetOutAction="";
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				animationSourceElevation="MainElevation";
				gunBeg="look";
				gunEnd="eye";
				maxHorizontalRotSpeed=2.5999999;
				maxVerticalRotSpeed=2.5999999;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				cameraDir="look";
				gunnerForceOptics=1;
				memoryPointGunnerOptics="eye";
				gunnerOpticsModel="\A3\Weapons_F_Mark\Reticle\optics_laserDesignator_02.p3d";
				turretInfoType="RscOptics_LaserDesignator_02";
				class ViewOptics: viewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.09375;
					minFov=0.017859999;
					maxFov=0.09375;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={2};
				};
			};
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		class DestructionEffects
		{
			class Smoke
			{
				simulation="particles";
				type="WeaponWreckSmoke";
				position="destructionEffect";
				intensity=1;
				interval=1;
				lifeTime=5;
			};
		};
		model="\A3\Static_F_Mark\Designator_02\Designator_02_F";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"O_Static_Designator_02_weapon_F"
			};
			displayName="";
		};
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\A3\Static_F_Mark\Designator_02\Scripts\init.sqf""";
		};
		class AnimationSources: AnimationSources
		{
			class Init
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class InitPiston
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class O_Static_Designator_02_F: Static_Designator_02_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0
				},
				
				{
					"mainelevation_01",
					0
				},
				
				{
					"mainelevation_02",
					0
				},
				
				{
					"mainelevation_03",
					0
				},
				
				{
					"mainelevation_04",
					0
				},
				
				{
					"mainelevation_05",
					0
				},
				
				{
					"initturret",
					0
				},
				
				{
					"initgun",
					0
				},
				
				{
					"initelevation_01",
					0
				},
				
				{
					"initelevation_02",
					0
				},
				
				{
					"initelevation_03",
					0
				},
				
				{
					"initelevation_04",
					0
				},
				
				{
					"initelevation_05",
					0
				}
			};
			hide[]=
			{
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.47299999;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Static_Designator_02_F.jpg";
		_generalMacro="O_Static_Designator_02_F";
		scope=2;
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;  //found empty after stripping
	};
	class O_Static_Designator_02_weapon_F: Weapon_Bag_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.44999999;
		_generalMacro="O_Static_Designator_02_weapon_F";
		faction="OPF_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_O_Static_Designator_02_weapon_F0";
		model="\A3\Supplies_F_Mark\Bags\Backpack_Compact.p3d";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_DismantledWeapons";
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_ocamo_co.paa"
		};
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_ocamo_ca.paa";
		mass=180;
		DLC="Mark";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_A3_CfgVehicles_Static_Designator_02_base_F0";
			assembleTo="O_Static_Designator_02_F";
			base[]=
			{
				""
			};
		};
	};
};
