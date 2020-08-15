class CfgPatches
{
	class rhs_c_radars
	{
		units[]=
		{
			"rhs_p37",
			"rhs_prv13",
			"Land_rhs_p37",
			"Land_rhs_prv13",
			"rhs_p37_turret_vpvo",
			"rhs_prv13_turret_vpvo",
			"rhs_2P3_1",
			"rhs_2P3_2",
			"rhs_v2",
			"rhs_v3"
		};
		weapons[]={};
		name="Radars";
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class radar_engineSound
			{
				file="\rhsafrf\addons\rhs_c_radars\scripts\rhs_radar_engineSound.sqf";
			};
			class radar_enginesSoundSource
			{
				file="\rhsafrf\addons\rhs_c_radars\scripts\rhs_radar_engineSoundSource.sqf";
			};
		};
	};
};
class CfgSFX
{
	class rhs_radar_engines01
	{
		name="$STR_RHS_RADAR_SOUND1";
		sounds[]=
		{
			"engine"
		};
		engine[]=
		{
			"\rhsafrf\addons\rhs_c_radars\Sounds\Engines01.wav",
			2.818383,
			1,
			450,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class rhs_radar_engines02
	{
		name="$STR_RHS_RADAR_SOUND2";
		sounds[]=
		{
			"engine"
		};
		engine[]=
		{
			"\rhsafrf\addons\rhs_c_radars\Sounds\Engines02.wav",
			2.818383,
			1,
			450,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
};
class CfgVehicles
{
	class ThingX;
	class House;
	class House_F: House
	{
		class DestructionEffects;
		class EventHandlers;
	};
	class rhs_p37: House_F
	{
		displayName="$STR_RHS_P37";
		icon="\rhsafrf\addons\rhs_radars\data\icons\P37_icon.paa";
		mapsize=23;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_radar_init;[(_this select 0),'rhs_Sound_radar1'] spawn rhs_fnc_radar_engineSoundSource";
			};
		};
	};
	class rhs_prv13: rhs_p37
	{
		icon="\rhsafrf\addons\rhs_radars\data\icons\prv13_icon.paa";
		displayName="$STR_RHS_PRV13";
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_radar_init;[(_this select 0),'rhs_Sound_radar2'] spawn rhs_fnc_radar_engineSoundSource";
			};
		};
	};
	class Land_rhs_p37: rhs_p37
	{
	};
	class Land_rhs_prv13: rhs_prv13
	{
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class EventHandlers;
	};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class rhs_radars_turret_base: StaticCannon
	{
		isUAV=1;
		side=0;
		fuelCapacity=20;
		radarType=2;
		irTarget=1;
		irTargetSize=0.34999999;
		radarTarget=1;
		radarTargetSize=1.9;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-0.0099999998;
				maxTurn=0.0099999998;
				initTurn=0;
				minElev=-0.0099999998;
				maxElev=0.0099999998;
				initElev=0;
				turretFollowFreeLook=2;
				weapons[]={};
				magazines[]={};
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				class ViewOptics;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov="0.7/3";
						minFov="0.7/3";
						maxFov="0.7/3";
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						directionStabilized=1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2500,5000,10000,15000,20000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={2500,5000,10000,15000,20000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class Damage
		{
		};
	};
	class rhs_p37_turret_base: rhs_radars_turret_base
	{
		displayName="$STR_RHS_P37";
		icon="\rhsafrf\addons\rhs_radars\data\icons\P37_icon.paa";
		mapsize=23;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=50;
						angleRangeHorizontal=360;
						angleRangeVertical=80;
						typeRecognitionDistance=5000;
						maxFogSeeThrough=1;
						maxTrackableATL=1000;
						minTrackableSpeed=0;
						maxTrackableSpeed=230;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Sounds
		{
			class EngineLoop
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_c_radars\Sounds\Engines01.wav",
					9,
					1,
					70
				};
				frequency="1";
				volume="engineOn";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this spawn RHS_fnc_radar_engineSound";
			};
		};
	};
	class rhs_p37_turret_vpvo: rhs_p37_turret_base
	{
	};
	class rhs_prv13_turret_base: rhs_radars_turret_base
	{
		icon="\rhsafrf\addons\rhs_radars\data\icons\prv13_icon.paa";
		displayName="$STR_RHS_PRV13";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=50;
						angleRangeHorizontal=360;
						angleRangeVertical=80;
						typeRecognitionDistance=5000;
						maxFogSeeThrough=1;
						maxTrackableATL=10000;
						minTrackableSpeed=0;
						maxTrackableSpeed=230;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Sounds
		{
			class EngineLoop
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_c_radars\Sounds\Engines02.wav",
					9,
					1,
					70
				};
				frequency="1";
				volume="engineOn";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this spawn RHS_fnc_radar_engineSound";
			};
		};
	};
	class rhs_prv13_turret_vpvo: rhs_prv13_turret_base
	{
	};
	class rhs_2P3_1: ThingX
	{
		icon="\rhsafrf\addons\rhs_radars\data\icons\2P3_1_icon.paa";
		displayName="$STR_RHS_2P3_1";
		selectionDamage="damage";
		class Damage
		{
		};
	};
	class rhs_2P3_2: rhs_2P3_1
	{
		icon="\rhsafrf\addons\rhs_radars\data\icons\2P3_2_icon.paa";
		displayName="$STR_RHS_2P3_2";
	};
	class rhs_v2: rhs_2P3_1
	{
		icon="\rhsafrf\addons\rhs_radars\data\icons\2P3_2_icon.paa";
		displayName="$STR_RHS_V2";
	};
	class rhs_v3: rhs_v2
	{
		icon="\rhsafrf\addons\rhs_radars\data\icons\2P3_2_icon.paa";
		displayName="$STR_RHS_V3";
	};
	class Sound;
	class rhs_Sound_radar1: Sound
	{
		sound="rhs_radar_engines01";
		displayName="Stream";
	};
	class rhs_Sound_radar2: Sound
	{
		sound="rhs_radar_engines02";
		displayName="Alarm";
	};
	class Ruins_F;
	class Land_rhs_p37_wreck: Ruins_F
	{
	};
	class Land_rhs_prv13_wreck: Ruins_F
	{
	};
};
