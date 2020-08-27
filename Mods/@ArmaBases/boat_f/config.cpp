class CfgPatches
{
	class A3_Boat_F_Boat_Transport_01
	{
		addonRootClass="A3_Boat_F";
		requiredAddons[]=
		{
			"A3_Boat_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_Boat_Transport_01_F",
			"B_Lifeboat",
			"C_Rubberboat",
			"O_Boat_Transport_01_F",
			"O_Lifeboat"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class EventHandlers;
	};
	class Rubber_duck_base_F: Boat_F
	{
		features="Randomization: No						<br />Camo selections: 1 - main body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Positions 1 to 4						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 to 4";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Rubber_duck_base_F";
		displayName="$STR_A3_CfgVehicles_Rubber_duck_base0";
		accuracy=0.5;
		model="\A3\boat_f\Boat_Transport_01\Boat_Transport_01_F.p3d";
		editorSubcategory="EdSubcat_Boats";
		picture="\A3\boat_F\Boat_Transport_01\data\UI\Boat_Transport_01_CA.paa";
		Icon="\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa";
		unitInfoType="RscUnitInfoNoWeapon";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"
		};
		memoryPointTaskMarker="TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		leftEngineEffect="LEngEffectsSmall";
		rightEngineEffect="REngEffectsSmall";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		armor=10;
		crewExplosionProtection=0;
		class HitPoints
		{
			class HitBody
			{
				armor=0.60000002;
				material=50;
				name="hull";
				visual="zbytek";
				passThrough=1;
			};
			class HitEngine
			{
				armor=1.2;
				material=-1;
				name="Engine";
				visual="";
				passThrough=1;
			};
		};
		attenuationEffectType="OpenCarAttenuation";
		insideSoundCoef=0.5;
		soundGeneralCollision2[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_02",
			1.7782794,
			1,
			200
		};
		soundGeneralCollision3[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Rubber_boat_crash_armor_03",
			1.7782794,
			1,
			200
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.34
		};
		class Sounds
		{
			class IdleOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_idle_1",
					0.44668359,
					1,
					150
				};
				frequency="0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume="engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_low2",
					0.63095737,
					1.2,
					300
				};
				frequency="0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume="engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_mid2",
					0.89125091,
					0.60000002,
					400
				};
				frequency="0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume="engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
			class EngineMaxOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Transport_01\Boat_Transport_01_high2",
					1.2589254,
					1,
					500
				};
				frequency="0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
				volume="engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					1,
					1,
					150
				};
				frequency="1";
				volume="((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					1,
					1,
					300
				};
				frequency="1";
				volume="(speed factor[3, 9])";
			};
			class WaternoiseOutW3
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					1,
					0.89999998,
					150
				};
				frequency="1";
				volume="((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					1,
					0.89999998,
					300
				};
				frequency="1";
				volume="(speed factor[-3, -9])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",
					1.7782794,
					1,
					100
				};
				frequency=1;
				volume="(scrubLand factor[0.01, 0.20])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		driverLeftHandAnimName="DrivingWheel";
		driverAction="Zodiac_Driver";
		driverCompartments="Compartment1";
		cargoAction[]=
		{
			"Zodiac_Cargo01",
			"Zodiac_Cargo02",
			"Zodiac_Cargo03",
			"Zodiac_Cargo04"
		};
		getInAction="GetInLow";
		getOutAction="GetOutBoat";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutBoat"
		};
		castDriverShadow=1;
		castCargoShadow=1;
		ejectDeadDriver=0;
		ejectDeadCargo=0;
		maxSpeed=45;
		simulation="shipX";
		overSpeedBrakeCoef=0.80000001;
		enginePower=18.5;
		engineShiftY=0;
		waterLeakiness=0.5;
		waterResistanceCoef=0.0099999998;
		thrustDelay=2;
		waterLinearDampingCoefY=5;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		rudderForceCoef=0.079999998;
		rudderForceCoefAtMaxSpeed=0.001;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		transportSoldier=0;
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_boat_1";
				gunnerCompartments="Compartment1";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				gunnerGetOutAction="GetOutBoat";
				proxyIndex=1;
				maxElev=45;
				minElev=-15;
				maxTurn=30;
				minTurn=-60;
				isPersonTurret=1;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-60,10};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_boat_2";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				proxyIndex=2;
				maxTurn=80;
				minTurn=-45;
				minElev=-7;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-5,80};
					CargoTurret_04[]={3,80};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_boat_3";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_F";
				memoryPointsGetInGunner="pos cargo RF";
				memoryPointsGetInGunnerDir="pos cargo RF dir";
				proxyIndex=3;
				minElev=-10;
				maxTurn=95;
				minTurn=-95;
				class dynamicViewLimits;  //found empty after stripping
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction="passenger_boat_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_M";
				memoryPointsGetInGunner="pos cargo LF";
				memoryPointsGetInGunnerDir="pos cargo LF dir";
				proxyIndex=4;
				maxTurn=80;
				minTurn=-45;
				class dynamicViewLimits
				{
					CargoTurret_03[]={20,80};
				};
			};
		};
		supplyRadius=3;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
		};
		fuelExplosionPower=0;
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_Rubber_duck_base_Library0";
		};
		extCameraPosition[]={0,2,-7};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\boat_f\Boat_Transport_01\data\Boat_Transport_01.rvmat",
				"A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat",
				"A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_damage.rvmat"
			};
		};
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Rescue
			{
				displayName="$STR_A3_TEXTURESOURCES_RESCUE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"CIV_F"
				};
			};
			class Civilian
			{
				displayName="$STR_A3_TEXTURESOURCES_CIV0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Digital
			{
				displayName="$STR_A3_TEXTURESOURCES_DIGITAL0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Hex",
			0,
			"Rescue",
			0,
			"Civilian",
			0,
			"Digital",
			0
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class B_Boat_Transport_01_F: Rubber_duck_base_F
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
				},
				
				{
					"vehicletransported_engine",
					0
				},
				
				{
					"vehicletransported_drivingwheel",
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
			verticalOffset=1.2359999;
			verticalOffsetWorld=-0.02;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Boat_Transport_01_F.jpg";
		_generalMacro="B_Boat_Transport_01_F";
		scope=2;
		crew="B_Soldier_F";
		faction="BLU_F";
		side=1;
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class O_Boat_Transport_01_F: Rubber_duck_base_F
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
				},
				
				{
					"vehicletransported_engine",
					0
				},
				
				{
					"vehicletransported_drivingwheel",
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
			verticalOffset=1.2359999;
			verticalOffsetWorld=-0.02;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Boat_Transport_01_F.jpg";
		_generalMacro="O_Boat_Transport_01_F";
		scope=2;
		crew="O_Soldier_F";
		faction="OPF_F";
		side=0;
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"
		};
		textureList[]=
		{
			"Hex",
			1
		};
	};
	class Rescue_duck_base_F: Rubber_duck_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Rescue_duck_base_F";
		displayName="$STR_A3_CfgVehicles_Rescue_duck_base0";
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"
		};
		textureList[]=
		{
			"Rescue",
			1
		};
	};
	class B_Lifeboat: Rescue_duck_base_F
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
				},
				
				{
					"vehicletransported_engine",
					0
				},
				
				{
					"vehicletransported_drivingwheel",
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
			verticalOffset=1.2359999;
			verticalOffsetWorld=-0.02;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Lifeboat.jpg";
		_generalMacro="B_Lifeboat";
		scope=2;
		crew="B_Soldier_F";
		faction="BLU_F";
		side=1;
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
		forceInGarage=0;
	};
	class O_Lifeboat: Rescue_duck_base_F
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
				},
				
				{
					"vehicletransported_engine",
					0
				},
				
				{
					"vehicletransported_drivingwheel",
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
			verticalOffset=1.2359999;
			verticalOffsetWorld=-0.02;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Lifeboat.jpg";
		_generalMacro="O_Lifeboat";
		scope=2;
		crew="O_Soldier_F";
		faction="OPF_F";
		side=0;
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F"
		};
	};
	class C_Rubberboat: Rescue_duck_base_F
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
				},
				
				{
					"vehicletransported_engine",
					0
				},
				
				{
					"vehicletransported_drivingwheel",
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
			verticalOffset=1.2359999;
			verticalOffsetWorld=-0.02;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Rubberboat.jpg";
		_generalMacro="C_Rubberboat";
		scope=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		typicalCargo[]=
		{
			"C_man_2_F",
			"C_man_3_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"
		};
		textureList[]=
		{
			"Civilian",
			1
		};
	};
};
