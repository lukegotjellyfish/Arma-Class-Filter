class CfgPatches
{
	class rhsusf_c_melb
	{
		units[]=
		{
			"RHS_MELB_H6M",
			"RHS_MELB_AH6M",
			"RHS_MELB_AH6M_L",
			"RHS_MELB_AH6M_M",
			"RHS_MELB_AH6M_H",
			"RHS_MELB_MH6M"
		};
		weapons[]={};
		magazines[]={};
		name="MELB";
	};
		weapons[]={};
		requiredAddons[]={};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateLaser;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgAmmo
{
	class Bulletbase;
};
class cfgMagazines
{
	class CA_Magazine;
	class 5000Rnd_762x51_Belt;
	class RHS_FakeMagazine_MELB: 5000Rnd_762x51_Belt
	{
		count=0;
		displaynameshort="-";
		tracersEvery=0;
		weight=0;
	};
};
class cfgWeapons
{
	class MGun;
	class Laserdesignator_mounted;
	class RHS_Laserdesignator_MELB: Laserdesignator_mounted
	{
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		nameSound="laserdesignator";
	};
};
class CfgFunctions
{
	class RHS_MELB
	{
		recompile=1;
		tag="RHS_MELB";
		class functions
		{
			recompile=1;
			class MFD_toggle
			{
				file="rhsusf\addons\rhsusf_c_melb\Scripts\MELB_toggleFLIR.sqf";
				description="MELB MFD Toggle";
			};
			class Handler
			{
				file="rhsusf\addons\rhsusf_c_melb\Scripts\MELB_Handler.sqf";
				description="MELB Handler";
			};
			class FLIRHandler
			{
				file="rhsusf\addons\rhsusf_c_melb\Scripts\MELB_FLIRHandler.sqf";
				description="MELB FLIR Handler";
			};
			class tailNumber
			{
				file="rhsusf\addons\rhsusf_c_melb\Scripts\MELB_tailNumber.sqf";
				description="Tail number handler for MELB";
			};
		};
	};
};
class RscControlsGroup;
class RscText;
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscControlsGroupNoScrollbars;
class RscIGUIValue;
class RscIGUIText;
class RscVehicleToggles;
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class EventHandlers;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		class CargoTurret;
		class AnimationSources;
		class ViewOptics;
	class RHS_MELB_base: Helicopter_Base_H
	{
		side=1;
		icon="rhsusf\addons\rhsusf_melb\Data\ui\map_melb_h_6m_ca.paa";
		accuracy=0.5;
		nameSound="veh_helicopter";
		memoryPointsGetInDriver="pos pilot";
		memoryPointsGetInDriverDir="pos pilot dir";
		memoryPointsGetInDriverPrecise="pos pilot";
		memoryPointsGetInCargoPrecise[]=
		{
			"pos cargo"
		};
		usePreciseGetInAction=1;
		getInRadius=1.5;
		cargoCompartments[]=
		{
			"compartment3"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		preciseGetInOut=0;
		castCargoShadow=1;
		extCameraPosition[]={0,0.75,-10};
		driverCanSee=31;
		hideWeaponsDriver=1;
		hideWeaponsGunner=1;
		hideWeaponsCargo=1;
		threat[]={0,0,0};
		radarType=0;
		irTarget=1;
		irTargetSize=0.69999999;
		radarTarget=1;
		radarTargetSize=0.80000001;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		LockDetectionSystem="4 + 8";
		incomingMissileDetectionSystem=16;
		weapons[]=
		{
			"rhsusf_weap_LWIRCM"
		};
		class ViewOptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-86;
			maxAngleY=86;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
		};
		memorypointcm[]=
		{
			"flare_launcher1"
		};
		memorypointcmdir[]=
		{
			"flare_launcher1_dir"
		};
		driveOnComponent[]=
		{
			"Skids"
		};
		fuelCapacity=236;
		fuelConsumptionRate=0.059999999;
		maxFordingDepth=0.64999998;
		mainBladeRadius=4.3200002;
		tailBladeRadius=0.76999998;
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="rhsusf\addons\rhsusf_c_melb\RTD_MELB.xml";
			autoHoverCorrection[]={0.28,2.8800001,0};
			defaultCollective=0.5;
			throttleOffToIdle=8;
			throttleIdleToOff=6;
			throttleIdleToFull=12;
			throttleFullToIdle=6;
			maxTorque=1200;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=45000;
			maxTailRotorStress=20200;
			retreatBladeStallWarningSpeed=77.222;
			rtd_center="rtd_center";
		};
		startDuration=10;
		washDownStrength="0.7f";
		maxSpeed=200;
		slingLoadMemoryPoint="slingLoad0";
		slingLoadMaxCargoMass=900;
		liftForceCoef=1;
		cyclicAsideForceCoef=1.65;
		cyclicForwardForceCoef=0.40000001;
		backrotorforcecoef=0.89999998;
		sensitivity=2.5;
		maximumLoad=1000;
		cost=4000000;
		memoryPointSupply="memsupply";
		supplyradius=4;
		occludeSoundsWhenIn=0.76234102;
		obstructSoundsWhenIn=0.61622798;
		attenuationEffectType="OpenHeliAttenuation";
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_get_in2",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_get_out2",
			0.79432821,
			1,
			20
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_ext_1",
			3.1622777,
			1
		};
		soundEngineOnInt[]=
		{
			"rhsusf\addons\rhsusf_melb\Sound\Int_Start",
			0.40000001,
			1
		};
		soundEngineOnExt[]=
		{
			"rhsusf\addons\rhsusf_melb\Sound\Ext_Start",
			0.79432821,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"rhsusf\addons\rhsusf_melb\Sound\Int_Off",
			0.40000001,
			1
		};
		soundEngineOffExt[]=
		{
			"rhsusf\addons\rhsusf_melb\Sound\Ext_Off",
			0.79432821,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			0.69999999,
			1
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			150
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Ext_Idle",
					1.2889254,
					1,
					400
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.9";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Ext_Low",
					1.2589254,
					1,
					500
				};
				frequency="1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorSwist
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Close",
					1.2,
					1,
					600
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.9";
				volume="camPos * (gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]) * (rotorThrust factor [0.7, 0.9])";
			};
			class EngineInt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Int_Idle",
					1,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.9";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Int_Low",
					0.50118703,
					1
				};
				frequency="1*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
			};
			class RotorBench
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Ext_Low",
					1.2589254,
					1,
					500
				};
				frequency="1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
				volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class EngineBench
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Ext_Idle",
					1.2818383,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.9";
				volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
			};
			class WindBench
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_open_out",
					0.56234133,
					1,
					50
				};
				frequency=1;
				volume="4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Rotor_Fast",
					1.2818383,
					1,
					200
				};
				frequency=1.5;
				volume="(camPos*(rotorSpeed factor [0.6, 0.85]))";
				cone[]={1.6,3.1400001,2,0.94999999};
			};
			class FarDistance
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\Distance",
					2.0918384,
					1.1,
					1100
				};
				frequency="rotorSpeed";
				volume="2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class FarDistanceRotor
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\tail_rotor",
					2.0918384,
					1,
					1000
				};
				frequency="rotorSpeed";
				volume="2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
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
					"A3\Sounds_F\vehicles\noises\rain1_int_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_open_int",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class WindLateralMovementInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.11622776,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Ext_Idle",
						1.2889254,
						1,
						400
					};
					frequency="1.3*rotorSpeed";
					volume="2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Ext_Low",
						1.2589254,
						1,
						500
					};
					frequency="1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume="camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
				};
				class RotorSwist
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Close",
						1.2,
						1,
						600
					};
					frequency="1.3*rotorspeed";
					volume="camPos * (gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]) * (rotorThrust factor [0.7, 0.9])";
				};
				class EngineInt
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Int_Idle",
						1,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*2*(0 max (rotorSpeed-0.4))";
				};
				class RotorInt
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Int_Low",
						1.2818383,
						1
					};
					frequency="(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume="(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
				};
				class RotorBench
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Ext_Low",
						1.2589254,
						1,
						500
					};
					frequency="1.3*(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
					volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class EngineBench
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Ext_Idle",
						1.2818383,
						1
					};
					frequency="1.3*rotorSpeed";
					volume="(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
				};
				class WindBench
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_open_out",
						0.56234133,
						1,
						50
					};
					frequency=1;
					volume="4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Rotor_Fast",
						1.2818383,
						1,
						200
					};
					frequency=1;
					volume="(camPos*(rotorSpeed factor [0.6, 0.85]))";
					cone[]={1.6,3.1400001,2,0.94999999};
				};
				class FarDistance
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\Distance",
						2.0918384,
						1.1,
						1100
					};
					frequency="rotorSpeed";
					volume="2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class FarDistanceRotor
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_melb\Sound\tail_rotor",
						2.0918384,
						1,
						1000
					};
					frequency="rotorSpeed";
					volume="2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.2238721,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.2238721,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
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
						"A3\Sounds_F\vehicles\noises\rain1_int_open",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_open_int",
						1.1220185,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class WindLateralMovementInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",
						1.9952624,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
						0.11622776,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		class Exhausts
		{
			class Exhaust01
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
			};
		};
		armor=35;
		armorStructural=5;
		epeImpulseDamageCoef=20;
		damageResistance=0.01039;
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor=2;
				name="fuel_hit";
				radius=0.125;
				minimalhit=0.2;
				explosionShielding=0.5;
				passThrough=0;
			};
			class HitHull: HitHull
			{
				name="hull_hit";
				armor=6;
				radius=0.050000001;
			};
			class HitEngine: HitEngine
			{
				name="engine_hit";
				armor=1.5;
				radius=0.15000001;
				explosionShielding=0.85000002;
				minimalhit=0.050000001;
				passThrough=0.30000001;
			};
			class HitAvionics: HitAvionics
			{
				name="avionics_hit";
				armor=2;
				radius=0.050000001;
				explosionShielding=0.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1;
				radius=0.050000001;
				explosionShielding=0.80000001;
			};
			class HitHRotor: HitHRotor
			{
				armor=3;
				radius=0.2;
				explosionShielding=0.5;
			};
			class HitGlass1: HitGlass1
			{
				armor=2;
				radius=0.15000001;
				explosionShielding=2;
			};
			class HitGlass2: HitGlass2
			{
				armor=2;
				radius=0.15000001;
				explosionShielding=2;
			};
			class HitGlass3: HitGlass3
			{
				armor=2;
				radius=0.15000001;
				explosionShielding=2;
			};
			class HitGlass4: HitGlass4
			{
				armor=2;
				radius=0.15000001;
				explosionShielding=2;
			};
			class HitPylon1
			{
				armor=-30;
				material=-1;
				name="hit_pylon_1";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon2
			{
				armor=-30;
				material=-1;
				name="hit_pylon_2";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon3
			{
				armor=-30;
				material=-1;
				name="hit_pylon_3";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon4
			{
				armor=-30;
				material=-1;
				name="hit_pylon_4";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
		};
		class Attributes
		{
			class rhs_MELB_TailNumber
			{
				tooltip="Select tail number specific to this helicopter.";
				property="rhs_MELB_TailNumber";
				control="Combo";
				expression="if(_value != 'NoChange')then{ [_this,'d_SN',_value] call RHS_MELB_fnc_tailNumber}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default defined";
						value="NoChange";
					};
					class blank_ca
					{
						name="Empty";
						value="blank_ca";
					};
					class MELB_SN_25385_ca
					{
						name="25385";
						value="MELB_SN_25385_ca";
					};
					class MELB_SN_25381_ca
					{
						name="25381";
						value="MELB_SN_25381_ca";
					};
					class MELB_SN_25378_ca
					{
						name="25378";
						value="MELB_SN_25378_ca";
					};
					class MELB_SN_25376_ca
					{
						name="25376";
						value="MELB_SN_25376_ca";
					};
					class MELB_SN_25374_ca
					{
						name="25374";
						value="MELB_SN_25374_ca";
					};
					class MELB_SN_25372_ca
					{
						name="25372";
						value="MELB_SN_25372_ca";
					};
					class MELB_SN_25366_ca
					{
						name="25366";
						value="MELB_SN_25366_ca";
					};
					class MELB_SN_25363_ca
					{
						name="25363";
						value="MELB_SN_25363_ca";
					};
					class MELB_SN_25361_ca
					{
						name="25361";
						value="MELB_SN_25361_ca";
					};
					class MELB_SN_25358_ca
					{
						name="25358";
						value="MELB_SN_25358_ca";
					};
					class MELB_SN_25355_ca
					{
						name="25355";
						value="MELB_SN_25355_ca";
					};
					class MELB_SN_25350_ca
					{
						name="25350";
						value="MELB_SN_25350_ca";
					};
					class MELB_SN_25349_ca
					{
						name="25349";
						value="MELB_SN_25349_ca";
					};
					class MELB_SN_25348_ca
					{
						name="25348";
						value="MELB_SN_25348_ca";
					};
					class MELB_SN_25346_ca
					{
						name="25346";
						value="MELB_SN_25346_ca";
					};
					class MELB_SN_24683_ca
					{
						name="24683";
						value="MELB_SN_24683_ca";
					};
					class MELB_SN_23654_ca
					{
						name="23654";
						value="MELB_SN_23654_ca";
					};
					class MELB_SN_23653_ca
					{
						name="23653";
						value="MELB_SN_23653_ca";
					};
					class MELB_SN_23652_ca
					{
						name="23652";
						value="MELB_SN_23652_ca";
					};
					class MELB_SN_23649_ca
					{
						name="23649";
						value="MELB_SN_23649_ca";
					};
					class MELB_SN_23636_ca
					{
						name="23636";
						value="MELB_SN_23636_ca";
					};
					class MELB_SN_23635_ca
					{
						name="23635";
						value="MELB_SN_23635_ca";
					};
					class MELB_SN_23632_ca
					{
						name="23632";
						value="MELB_SN_23632_ca";
					};
					class MELB_SN_23631_ca
					{
						name="23631";
						value="MELB_SN_23631_ca";
					};
				};
			};
			class rhs_MELB_NoFear
			{
				property="MELB_NoFear";
				control="CheckboxNumber";
				expression="_this animate ['hide_NoFear',_value,true]";
				defaultValue=0;
			};
			class rhs_MELB_SGDM: rhs_MELB_NoFear
			{
				property="MELB_SGDM";
				expression="_this animate ['hide_SGDM',_value,true]";
			};
			class rhs_MELB_SN_Nose: rhs_MELB_NoFear
			{
				property="MELB_SN_Nose";
				expression="_this animate ['hide_SN_nose',_value,true]";
			};
			class rhs_MELB_clan: rhs_MELB_NoFear
			{
				property="MELB_clan";
				expression="_this animate ['hide_clan',_value,true]";
			};
			class MELB_ToggleBoy: rhs_MELB_NoFear
			{
				property="MELB_ToggleBoy";
				expression="_this animate ['AddBobhead',_value,true]";
			};
		};
		class NVGMarkers
		{
				ambient[]={0.0099999998,0.0099999998,0.0099999998};
				brightness=0.15000001;
				name="IR_Position";
				drawLight=1;
				drawLightSize=0.0099999998;
				drawLightCenterSize=0.0049999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				onlyInNvg=1;
				useFlare=0;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				stabilizedInAxes=3;
				minElev=-180;
				maxElev=180;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				minFov=0.25;
				maxFov=0.89999998;
				initFov=0.75;
				lodTurned=1100;
				memoryPointGun="commanderview";
				discretedistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discretedistanceinitindex=3;
				weapons[]=
				{
					"rhs_weap_laserDesignator_AI",
					"rhs_weap_fcs_ah64",
					"rhsusf_weap_LWIRCM"
				};
				primaryGunner=1;
				usePreciseGetInAction=1;
				precisegetinout=0;
				TurretCanSee="1+2+4+8";
				showAllTargets=1;
				usepip=1;
				canUseScanners=1;
				allowTabLock=0;
				class ViewGunner
				{
					minAngleX=-65;
					maxAngleX=85;
					initAngleX=0;
					minAngleY=-150;
					maxAngleY=150;
					initAngleY=0;
					minFov=0.25;
					maxFov=0.89999998;
					initFov=0.75;
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-360;
						maxAngleX=360;
						initAngleY=0;
						minAngleY=-15;
						maxAngleY=85;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0};
						directionStabilized=1;
						horizontallyStabilized=1;
						opticsPPEffects[]=
						{
							"OpticsCHAbera3",
							"OpticsBlur3"
						};
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics2"
						};
					};
					class WideT: Wide
					{
						initFov=0.2;
						minFov=0.2;
						maxFov=0.2;
					};
					class MediumT: WideT
					{
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
					};
					class NarrowT: WideT
					{
						initFov=0.022;
						minFov=0.022;
						maxFov=0.022;
					};
					class NarrowT2: WideT
					{
						initFov=0.0092000002;
						minFov=0.0092000002;
						maxFov=0.0092000002;
					};
				};
				class Components
				{
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_MELB_EH
			{
				handleDamage="_this call RHS_MELB_fnc_fallDamage";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
	};
	class RHS_MELB_H6M: RHS_MELB_base
	{
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		threat[]={0.60000002,0.40000001,0.1};
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=2;
				maxTurn=60;
				minTurn=-60;
			};
		};
		class Attributes: Attributes
		{
		};
	};
	class RHS_MELB_AH6M: RHS_MELB_base
	{
		forceInGarage=1;
		icon="rhsusf\addons\rhsusf_melb\Data\ui\map_melb_ah_6m_l_ca.paa";
		slingLoadMaxCargoMass=0;
		fuelCapacity=436;
		fuelConsumptionRate=0.079999998;
		hideWeaponsCargo=0;
		ejectDeadCargo=1;
		cargoGetInAction[]=
		{
			"MELB_L_Rack_in"
		};
		memoryPointsGetInCargoPrecise[]=
		{
			"pos rack"
		};
		usePreciseGetInAction=1;
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"rhsusf_weap_LWIRCM"
		};
		threat[]={0.60000002,0.40000001,0.1};
		cost=1000000;
		class Turrets: Turrets
		{
		};
		class Attributes: Attributes
		{
			class rhs_ExtLongL
			{
				tooltip="Extended weapon pylon on the port side \nSome clipping occurs with GAU-19";
				property="ExtLongL";
				control="CheckboxNumber";
				expression="_this animateSource ['ExtLongL',_value,true]";
				defaultValue="0";
			};
			class rhs_ExtLongR
			{
				tooltip="Extended weapon pylon on the starboard side";
				property="ExtLongR";
				control="CheckboxNumber";
				expression="_this animateSource ['ExtLongR',_value,true]";
				defaultValue="0";
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsusf\addons\rhsusf_melb\data\loadouts\RHS_AH6M_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_MELB",
							"RHS_HP_MELB_L"
						};
						attachment="rhs_mag_M151_7";
						maxweight=1200;
						UIposition[]={0.625,0.2};
						bay=-1;
						turret[]={};
						hitpoint="HitPylon1";
					};
					class pylon2: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_MELB_M134"
						};
						UIposition[]={0.56199998,0.30000001};
						attachment="rhs_mag_m134_pylon_3000";
						turret[]={};
						hitpoint="HitPylon2";
					};
						mirroredMissilePos=2;
						attachment="rhs_mag_m134_pylon_3000";
						turret[]={};
						hitpoint="HitPylon3";
					};
					class pylon4: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_MELB",
							"RHS_HP_MELB_R"
						};
						UIposition[]={0.039999999,0.2};
						mirroredMissilePos=1;
						turret[]={};
						hitpoint="HitPylon4";
					};
				};
				class Presets
				{
					class Light
					{
						attachment[]=
						{
							"rhs_mag_M151_7",
							"rhs_mag_m134_pylon_3000",
							"rhs_mag_m134_pylon_3000",
							"rhs_mag_M151_7"
						};
						displayname="Light";
					};
					class Medium
					{
						attachment[]=
						{
							"rhsusf_mag_gau19_melb_left",
							"",
							"",
							"rhs_mag_M151_19"
						};
						displayname="Medium";
					};
					class Heavy
					{
						attachment[]=
						{
							"rhsusf_mag_gau19_melb_left",
							"",
							"",
							"rhs_mag_AGM114K_2"
						};
						displayname="Heavy";
					};
				};
			};
		};
	};
	class RHS_MELB_AH6M_L: RHS_MELB_AH6M
	{
		class components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_M151_7";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_m134_pylon_3000";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_m134_pylon_3000";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_M151_7";
					};
				};
			};
		};
	};
	class RHS_MELB_AH6M_M: RHS_MELB_AH6M
	{
		class components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhsusf_mag_gau19_melb_left";
					};
					class pylon2: pylon2
					{
						attachment="";
					};
					class pylon3: pylon3
					{
						attachment="";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_M151_19";
					};
				};
			};
		};
	};
	class RHS_MELB_AH6M_H: RHS_MELB_AH6M
	{
		class components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhsusf_mag_gau19_melb_left";
					};
					class pylon2: pylon2
					{
						attachment="";
					};
					class pylon3: pylon3
					{
						attachment="";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_AGM114K_2";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_MELB_MH6M: RHS_MELB_base
	{
		forceInGarage=1;
		icon="rhsusf\addons\rhsusf_melb\Data\ui\map_melb_mh_6m_ca.paa";
		fuelCapacity=436;
		fuelConsumptionRate=0.079999998;
		ejectDeadCargo=0;
		transportsoldier=1;
		threat[]={0.60000002,0.40000001,0.1};
		cost=7000000;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		class Turrets: Turrets
		{
			class CargoTurret_03: CargoTurret
			{
				proxyIndex=3;
				maxElev=45;
				minElev=-60;
				maxTurn=95;
				minTurn=-15;
				isPersonTurret=1;
				ejectDeadGunner=0;
				playerPosition=4;
				soundAttenuationTurret="";
			};
			class CargoTurret_04: CargoTurret_03
			{
				proxyIndex=4;
				maxTurn=15;
				minTurn=-95;
			};
			class CargoTurret_05: CargoTurret_04
			{
				proxyIndex=5;
				maxElev=45;
				minElev=-45;
				maxTurn=95;
				minTurn=-95;
					CargoTurret_07[]={-95,50};
				};
			};
			class CargoTurret_06: CargoTurret_05
			{
				proxyIndex=6;
					CargoTurret_08[]={-50,95};
				};
			};
			class CargoTurret_07: CargoTurret_06
			{
				proxyIndex=7;
				};
			};
			class CargoTurret_08: CargoTurret_07
			{
				proxyIndex=8;
				};
			};
		};
		class Attributes: Attributes
		{
		};
	};
};
