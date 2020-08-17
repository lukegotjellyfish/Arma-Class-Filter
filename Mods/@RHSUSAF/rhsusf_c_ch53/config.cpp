class CfgPatches
{
	class rhsusf_c_ch53
	{
		weapons[]={};
		units[]=
		{
			"rhsusf_CH53E_USMC",
			"rhsusf_CH53E_USMC_D",
			"rhsusf_CH53E_USMC_GAU21",
			"rhsusf_CH53E_USMC_GAU21_D",
			"rhsusf_CH53e_USMC_cargo",
			"rhsusf_CH53e_USMC_D_cargo"
		};
		name="CH-53 Helicopter";
	};
};
class CfgFunctions
{
	class RHSUSF
	{
		tag="RHSUSF";
		class functions
		{
			class CH53_init
			{
				file="\rhsusf\addons\rhsusf_c_ch53\scripts\rhs_ch53_init.sqf";
				description="CH-53 Init";
			};
			class CH53_Fold
			{
				file="\rhsusf\addons\rhsusf_c_ch53\scripts\ch53_fold.sqf";
				description="CH-53 folding rotors handler";
			};
		};
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgAnimationSourceSounds
{
	class CH53_Rampsound
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_ramp",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class DoorMovementDone1
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.9,0.99])";
			sound0[]=
			{
				"A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class DoorMovementDone2
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.1,0.05])";
			sound0[]=
			{
				"A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class SlamTheDoor
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.02,0.01])";
			sound0[]=
			{
				"A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
		};
		class Eventhandlers;
		class Components;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Components;
	};
	class rhsusf_CH53E_USMC: Helicopter_Base_H
	{
		rhs_decalParameters[]=
		{
			"['Number', cCH53NumberPlaces, _typeNum,_randomNum]"
		};
		rhs_paraRamp="ramp";
		rhs_paraOff=-15;
		rhs_rampAnim="ramp_bottom";
		rhs_gearAnim="Gear_Nose_1";
		rhs_paraScript="rhs_fnc_vehPara";
		rhs_hasNoRadar=1;
		expansion=3;
		Picture="\rhsusf\addons\rhsusf_ch53\data\ui\ch53_picture_ca.paa";
		irTarget=1;
		irTargetSize=1.2;
		radarTarget=1;
		radarTargetSize=1.12;
		radarType=4;
		LockDetectionSystem="8";
		incomingMissileDetectionSystem="2 + 8 + 16";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,9.8000002,0.89999998};
		LESH_WheelOffset[]={0,-3.5999999};
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_wd_helicrew"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		maxSpeed=315;
		accuracy=0.5;
		usePreciseGetInAction=0;
		memoryPointsGetInDriverPrecise="pos driver";
		memoryPointsGetInCargoPrecise[]=
		{
			"pos cargo"
		};
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		GetInAction="GetInLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoDoors[]={};
		castCargoShadow=1;
		maximumLoad=14500;
		cargoCanEject=1;
		driverCanEject=0;
		hideWeaponsCargo=1;
		cost=10000000;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		extCameraPosition[]={0,5,-30};
		armor=40;
		armorStructural=3;
		damageResistance=0.0055499999;
		threat[]={0.30000001,0.2,0.30000001};
		maxFordingDepth=1.65;
		waterLeakiness=0.2;
		liftForceCoef=1.5;
		cyclicAsideForceCoef=0.5;
		cyclicForwardForceCoef=0.30000001;
		backRotorForceCoef=0.30000001;
		mainBladeRadius=6;
		tailBladeRadius=1;
		tailBladeCenter="mala osa";
		mainBladeCenter="velka osa";
		maxOmega=2000;
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class Wheel_1
			{
				steering=1;
				side="left";
				suspTravelDirection[]={0,-1,0};
				width=0.63700002;
				mass=15;
				MOI=0.76800001;
				dampingRate=0.25;
				dampingRateDamaged=2;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				maxCompression=1.05;
				maxDroop=0.050000001;
				sprungMass=3000;
				springStrength=12000;
				springDamperRate=1280;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class Wheel_2: Wheel_1
			{
				steering=0;
				side="left";
				maxCompression=1.05;
				maxDroop=0.050000001;
			};
			class Wheel_3: Wheel_2
			{
				side="right";
			};
		};
		gearRetracting=1;
		driveOnComponent[]=
		{
			"wheels"
		};
		gearUpTime=3;
		gearDownTime=3;
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usmc_wd",
					"rhs_faction_usmc_d"
				};
			};
		};
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		attenuationEffectType="HeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_3",
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
			"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_3",
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
			"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_water_ext_2",
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
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\open",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\close",
			1,
			1,
			50
		};
		soundDammage[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_beeps",
			10,
			1,
			20
		};
		soundEngineOnInt[]=
		{
			"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_int_start",
			2,
			1
		};
		soundEngineOnExt[]=
		{
			"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_ext_start",
			2,
			1,
			800
		};
		soundEngineOffInt[]=
		{
			"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_int_stop",
			2,
			1
		};
		soundEngineOffExt[]=
		{
			"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_ext_stop",
			2,
			1,
			800
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1,
			1.5
		};
		occludeSoundsWhenIn=0.56234133;
		obstructSoundsWhenIn=0.31622776;
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\Heli_damage_rotor_int_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\Heli_damage_rotor_ext_1",
			2.5118864,
			1,
			300
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\Heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\Heli_damage_tail",
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
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",
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
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
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
		gearUpExt[]=
		{
			"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1.4125376,
					1,
					800
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_ext_rotor",
					1,
					1,
					3500
				};
				frequency="rotorSpeed / (1-rotorThrust/5)*0.8";
				volume="camPos*((rotorSpeed-0.72)*6)";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					400
				};
				frequency=1;
				volume="camPos * (rotorThrust factor [0.7, 0.9])";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_int_engine",
					1,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					0.50118721,
					1
				};
				frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_1",
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
					"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_2",
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
					"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_1",
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
					"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",
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
					"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",
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
					"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",
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
					"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",
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
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
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
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
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
					"A3\Sounds_F\vehicles\noises\rain1_int",
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
					"A3\Sounds_F\dummysound",
					0.70794576,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
					1.1220185,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[40,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1.4125376,
						1,
						800
					};
					frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
					volume="camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_ext_rotor",
						1,
						1,
						3500
					};
					frequency="rotorSpeed / (1-rotorThrust/5)*0.8";
					volume="camPos*((rotorSpeed-0.72)*6)";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						400
					};
					frequency=1;
					volume="camPos * (rotorThrust factor [0.7, 0.9])";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_int_engine",
						1,
						1
					};
					frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
					volume="(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						0.50118721,
						1
					};
					frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_1",
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
						"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_2",
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
						"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_1",
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
						"A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",
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
						"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",
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
						"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",
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
						"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",
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
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
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
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
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
						"A3\Sounds_F\vehicles\noises\rain1_int",
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
						"A3\Sounds_F\dummysound",
						0.70794576,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
						1.1220185,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[40,80])";
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				material=-1;
				armor=1;
				name="NEtrup";
				passThrough=1;
			};
			class HitFuel: HitFuel
			{
				armor=1.4;
				name="palivo";
				passThrough=1;
			};
			class HitEngine: HitEngine
			{
				armor=0.44999999;
				name="motor";
				passThrough=1;
			};
			class HitAvionics: HitAvionics
			{
				armor=0.15000001;
				name="elektronika";
				passThrough=1;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.3;
				name="mala vrtule";
				passThrough=0;
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				name="velka vrtule";
				passThrough=0;
			};
			class HitGlass1
			{
				material=-1;
				armor=0.30000001;
				name="glass1";
				passThrough=0;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
			};
			class HitGlass10: HitGlass1
			{
				name="glass10";
			};
			class HitGlass11: HitGlass1
			{
				name="glass11";
			};
			class HitGlass12: HitGlass1
			{
				name="glass12";
			};
			class HitGlass13: HitGlass1
			{
				name="glass13";
			};
			class HitGlass14: HitGlass1
			{
				name="glass14";
			};
			class HitGlass15: HitGlass1
			{
				name="glass15";
			};
			class HitGlass16: HitGlass1
			{
				name="glass16";
			};
			class HitGlass17: HitGlass1
			{
				name="glass17";
			};
		};
		class Damage
		{
		};
		class MFD
		{
			class rhsusf_CH53_HUD_1
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class Velocity
					{
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.64999998,0.64999998};
					};
					class Velocity_slip
					{
						source="velocity";
						pos0[]={0.5,0.84500003};
						pos10[]={0.52999997,0.84500003};
					};
					class VspeedBone
					{
						source="vspeed";
						sourceScale=1;
						min=-10;
						max=10;
						minPos[]={0.93000001,0.2};
						maxPos[]={0.93000001,0.80000001};
					};
					class RadarAltitudeBone
					{
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						max=60;
						minPos[]={0.96499997,0.2};
						maxPos[]={0.96499997,0.80000001};
					};
					class HorizonBankRot
					{
						source="horizonBank";
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class ForwardVec
					{
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class Level0
					{
						pos0[]={0.5,0.5};
						pos10[]={0.77999997,0.77999997};
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP55: Level0
					{
						angle=55;
					};
					class LevelM55: Level0
					{
						angle=-55;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP65: Level0
					{
						angle=65;
					};
					class LevelM65: Level0
					{
						angle=-65;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP75: Level0
					{
						angle=75;
					};
					class LevelM75: Level0
					{
						angle=-75;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP85: Level0
					{
						angle=85;
					};
					class LevelM85: Level0
					{
						angle=-85;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class Horizont
					{
						clipTL[]={0.15000001,0.15000001};
						clipBR[]={0.85000002,0.85000002};
						class Dimmed
						{
							class Level0
							{
								points[]=
								{
									
									{
										"Level0",
										{-0.41999999,0},
										1
									},
									
									{
										"Level0",
										{-0.079999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.41999999,0},
										1
									},
									
									{
										"Level0",
										{0.079999998,0},
										1
									},
									{}
								};
							};
							class LevelM10: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{-0.2,0},
										1
									},
									
									{
										"LevelM10",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,0},
										1
									},
									
									{
										"LevelM10",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.16,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.20999999,0},
									1
								};
							};
							class VALM_2_10: VALM_1_10
							{
								align="right";
								pos[]=
								{
									"LevelM10",
									{0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.25999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.20999999,0},
									1
								};
							};
							class LevelP10: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.16,0},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.20999999,0.050000001},
									1
								};
							};
							class VALP_2_10: VALP_1_10
							{
								align="right";
								pos[]=
								{
									"LevelP10",
									{0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.25999999,0},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.20999999,0.050000001},
									1
								};
							};
							class LevelM20: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{-0.2,0},
										1
									},
									
									{
										"LevelM20",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,0},
										1
									},
									
									{
										"LevelM20",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.16,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.20999999,0},
									1
								};
							};
							class VALM_2_20: VALM_1_20
							{
								align="right";
								pos[]=
								{
									"LevelM20",
									{0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.25999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.20999999,0},
									1
								};
							};
							class LevelP20: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.16,0},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.20999999,0.050000001},
									1
								};
							};
							class VALP_2_20: VALP_1_20
							{
								align="right";
								pos[]=
								{
									"LevelP20",
									{0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.25999999,0},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.20999999,0.050000001},
									1
								};
							};
							class LevelM30: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.2,0},
										1
									},
									
									{
										"LevelM30",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,0},
										1
									},
									
									{
										"LevelM30",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.16,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.20999999,0},
									1
								};
							};
							class VALM_2_30: VALM_1_30
							{
								align="right";
								pos[]=
								{
									"LevelM30",
									{0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.25999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.20999999,0},
									1
								};
							};
							class LevelP30: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.16,0},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.20999999,0.050000001},
									1
								};
							};
							class VALP_2_30: VALP_1_30
							{
								align="right";
								pos[]=
								{
									"LevelP30",
									{0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.25999999,0},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.20999999,0.050000001},
									1
								};
							};
							class LevelM40: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{-0.2,0},
										1
									},
									
									{
										"LevelM40",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,0},
										1
									},
									
									{
										"LevelM40",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.16,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.20999999,0},
									1
								};
							};
							class VALM_2_40: VALM_1_40
							{
								align="right";
								pos[]=
								{
									"LevelM40",
									{0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.25999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.20999999,0},
									1
								};
							};
							class LevelP40: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.16,0},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.20999999,0.050000001},
									1
								};
							};
							class VALP_2_40: VALP_1_40
							{
								align="right";
								pos[]=
								{
									"LevelP40",
									{0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.25999999,0},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.20999999,0.050000001},
									1
								};
							};
							class LevelM50: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.2,0},
										1
									},
									
									{
										"LevelM50",
										{-0.15000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.15000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,0},
										1
									},
									
									{
										"LevelM50",
										{0.2,-0.029999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.16,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.20999999,0},
									1
								};
							};
							class VALM_2_50: VALM_1_50
							{
								align="right";
								pos[]=
								{
									"LevelM50",
									{0.20999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.25999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.20999999,0},
									1
								};
							};
							class LevelP50: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.16,0},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.20999999,0.050000001},
									1
								};
							};
							class VALP_2_50: VALP_1_50
							{
								align="right";
								pos[]=
								{
									"LevelP50",
									{0.20999999,0},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.25999999,0},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.20999999,0.050000001},
									1
								};
							};
						};
					};
					class StaticBank
					{
						width=3;
						points[]=
						{
							
							{
								{0.47819999,0.25099999},
								1
							},
							
							{
								{0.47729999,0.241},
								1
							},
							{},
							
							{
								{0.45660001,0.2538},
								1
							},
							
							{
								{0.4549,0.2439},
								1
							},
							{},
							
							{
								{0.43529999,0.25850001},
								1
							},
							
							{
								{0.43009999,0.2392},
								1
							},
							{},
							
							{
								{0.4145,0.2651},
								1
							},
							
							{
								{0.4111,0.25569999},
								1
							},
							{},
							
							{
								{0.39430001,0.27340001},
								1
							},
							
							{
								{0.3901,0.26440001},
								1
							},
							{},
							
							{
								{0.375,0.28349999},
								1
							},
							
							{
								{0.36500001,0.26620001},
								1
							},
							{},
							
							{
								{0.32319999,0.32319999},
								1
							},
							
							{
								{0.3091,0.3091},
								1
							},
							{},
							
							{
								{0.28349999,0.375},
								1
							},
							
							{
								{0.26620001,0.36500001},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.4782)",
									0.25099999
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.4773)",
									0.241
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.4566)",
									0.2538
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.4549)",
									0.2439
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.4353)",
									0.25850001
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.4301)",
									0.2392
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.4145)",
									0.2651
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.4111)",
									0.25569999
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.3943)",
									0.27340001
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.3901)",
									0.26440001
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.3750)",
									0.28349999
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.3650)",
									0.26620001
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.3232)",
									0.32319999
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.3091)",
									0.3091
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 + (0.5- 0.2835)",
									0.375
								},
								1
							},
							
							{
								
								{
									"0.5 + (0.5- 0.2662)",
									0.36500001
								},
								1
							},
							{},
							
							{
								
								{
									0.5,
									"0.5 - 0.25"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.5 - 0.28"
								},
								1
							}
						};
					};
					class HorizonBankRot
					{
						width=3;
						points[]=
						{
							
							{
								"HorizonBankRot",
								{0,0.25},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.23},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.23},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.25},
								1
							}
						};
					};
					class Waterline
					{
						width=7;
						points[]=
						{
							
							{
								{0.44999999,0.5},
								1
							},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.52499998},
								1
							},
							
							{
								{0.5,0.5},
								1
							},
							
							{
								{0.50999999,0.52499998},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							
							{
								{0.55000001,0.5},
								1
							}
						};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"0.5-0.018",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5-0.018",
										"0.9-0.075"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.018",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5+0.018",
										"0.9-0.075"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.2",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5-0.2",
										"0.9-0.04"
									},
									1
								}
							};
						};
						class Slip_ball
						{
							width=6;
							points[]=
							{
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"0.02 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"0.02 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"0.02 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"0.02 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"0.02 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"0.02 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"0.02 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								}
							};
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							source="static";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.055"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.055"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.095"
								},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							source="static";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.105"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.105"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.145"
								},
								1
							};
						};
					};
					class GearGroup
					{
						condition="ils";
						class GearText
						{
							source="static";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.155"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.155"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.195"
								},
								1
							};
						};
					};
					class SpeedNumber
					{
						align="right";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						pos[]=
						{
							{0.029999999,0.47499999},
							1
						};
						right[]=
						{
							{0.079999998,0.47499999},
							1
						};
						down[]=
						{
							{0.029999999,0.52499998},
							1
						};
					};
					class TorqueNumber
					{
						condition="simulRTD";
						class Torque_number
						{
							align="left";
							scale=1;
							source="rtdRotorTorque";
							sourceScale=488;
							pos[]=
							{
								{0.064999998,0.175},
								1
							};
							right[]=
							{
								{0.115,0.175},
								1
							};
							down[]=
							{
								{0.064999998,0.22499999},
								1
							};
						};
						class Torquetext
						{
							source="static";
							align="right";
							scale=1;
							pos[]=
							{
								{0.07,0.175},
								1
							};
							right[]=
							{
								{0.12,0.175},
								1
							};
							down[]=
							{
								{0.07,0.22499999},
								1
							};
						};
					};
					class AltNumber: SpeedNumber
					{
						align="right";
						source="altitudeAGL";
						sourceScale=1;
						pos[]=
						{
							{0.82999998,0.47499999},
							1
						};
						right[]=
						{
							{0.88,0.47499999},
							1
						};
						down[]=
						{
							{0.82999998,0.52499998},
							1
						};
					};
					class ASLNumber
					{
						source="altitudeASL";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.83499998,0.18000001},
							1
						};
						right[]=
						{
							{0.875,0.18000001},
							1
						};
						down[]=
						{
							{0.83499998,0.22},
							1
						};
					};
					class VspeedScalePosta
					{
						width=5;
						points[]=
						{
							
							{
								{0.98000002,0.2},
								1
							},
							
							{
								{1,0.2},
								1
							},
							{},
							
							{
								{0.93000001,0.2},
								1
							},
							
							{
								{0.94999999,0.2},
								1
							},
							{},
							
							{
								{0.98000002,0.34999999},
								1
							},
							
							{
								{1,0.34999999},
								1
							},
							{},
							
							{
								{0.93000001,0.34999999},
								1
							},
							
							{
								{0.94999999,0.34999999},
								1
							},
							{},
							
							{
								{0.94,0.38},
								1
							},
							
							{
								{0.94999999,0.38},
								1
							},
							{},
							
							{
								{0.94,0.41},
								1
							},
							
							{
								{0.94999999,0.41},
								1
							},
							{},
							
							{
								{0.94,0.44},
								1
							},
							
							{
								{0.94999999,0.44},
								1
							},
							{},
							
							{
								{0.94,0.47},
								1
							},
							
							{
								{0.94999999,0.47},
								1
							},
							{},
							
							{
								{0.98000002,0.5},
								1
							},
							
							{
								{1,0.5},
								1
							},
							{},
							
							{
								{0.93000001,0.5},
								1
							},
							
							{
								{0.94999999,0.5},
								1
							},
							{},
							
							{
								{0.94,0.52999997},
								1
							},
							
							{
								{0.94999999,0.52999997},
								1
							},
							{},
							
							{
								{0.94,0.56},
								1
							},
							
							{
								{0.94999999,0.56},
								1
							},
							{},
							
							{
								{0.94,0.58999997},
								1
							},
							
							{
								{0.94999999,0.58999997},
								1
							},
							{},
							
							{
								{0.94,0.62},
								1
							},
							
							{
								{0.94999999,0.62},
								1
							},
							{},
							
							{
								{0.98000002,0.64999998},
								1
							},
							
							{
								{1,0.64999998},
								1
							},
							{},
							
							{
								{0.93000001,0.64999998},
								1
							},
							
							{
								{0.94999999,0.64999998},
								1
							},
							{},
							
							{
								{0.99000001,0.68000001},
								1
							},
							
							{
								{0.98000002,0.68000001},
								1
							},
							{},
							
							{
								{0.99000001,0.70999998},
								1
							},
							
							{
								{0.98000002,0.70999998},
								1
							},
							{},
							
							{
								{0.99000001,0.74000001},
								1
							},
							
							{
								{0.98000002,0.74000001},
								1
							},
							{},
							
							{
								{0.99000001,0.76999998},
								1
							},
							
							{
								{0.98000002,0.76999998},
								1
							},
							{},
							
							{
								{0.98000002,0.80000001},
								1
							},
							
							{
								{1,0.80000001},
								1
							},
							{},
							
							{
								{0.93000001,0.80000001},
								1
							},
							
							{
								{0.94999999,0.80000001},
								1
							},
							{}
						};
					};
					class RadarAltitudeBand
					{
						clipTL[]={0,0.2};
						clipBR[]={1,0.80000001};
						class radarbanda
						{
							width=17;
							points[]=
							{
								
								{
									"RadarAltitudeBone",
									{0,0},
									1
								},
								
								{
									"RadarAltitudeBone",
									{0,0.60000002},
									1
								}
							};
						};
					};
					class VspeedBand
					{
						width=3;
						points[]=
						{
							
							{
								"VspeedBone",
								{-0.0099999998,0},
								1
							},
							
							{
								"VspeedBone",
								{-0.025,-0.015},
								1
							},
							
							{
								"VspeedBone",
								{-0.025,0.015},
								1
							},
							
							{
								"VspeedBone",
								{-0.0099999998,0},
								1
							},
							{}
						};
					};
					class HeadingNumber: SpeedNumber
					{
						source="heading";
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.045000002},
							1
						};
						right[]=
						{
							{0.56,0.045000002},
							1
						};
						down[]=
						{
							
							{
								0.5,
								"0.045 + 0.06"
							},
							1
						};
					};
					class Center_box
					{
						width=1.5;
						points[]=
						{
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085 - 0.06"
								},
								1
							},
							
							{
								
								{
									"0.45 + 0.10",
									"0.02 + 0.085 - 0.06"
								},
								1
							},
							
							{
								
								{
									"0.45 + 0.10",
									"0.02 + 0.085"
								},
								1
							},
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085"
								},
								1
							},
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085 - 0.06"
								},
								1
							}
						};
					};
					class HeadingArrow
					{
						width=7;
						points[]=
						{
							
							{
								
								{
									"0.5",
									"0.128 + 0.03"
								},
								1
							},
							
							{
								{0.5,0.12800001},
								1
							}
						};
					};
					class HeadingScale_LEFT
					{
						clipTL[]={0,0};
						clipBR[]={0.44999999,1};
						class Heading_group
						{
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[]={0.55000001,0};
						clipBR[]={1,1};
						class Heading_group
						{
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[]=
						{
							0.44999999,
							"0.02 + 0.085"
						};
						clipBR[]=
						{
							"0.45 + 0.10",
							1
						};
						class Heading_group
						{
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class Fuel_Text
					{
						source="static";
						align="right";
						scale=1;
						pos[]=
						{
							{0.85000002,0.86000001},
							1
						};
						right[]=
						{
							{0.88999999,0.86000001},
							1
						};
						down[]=
						{
							{0.85000002,0.89999998},
							1
						};
					};
					class Fuel_Number
					{
						source="fuel";
						sourceScale=100;
						align="right";
						scale=1;
						pos[]=
						{
							{0.92000002,0.86000001},
							1
						};
						right[]=
						{
							{0.95999998,0.86000001},
							1
						};
						down[]=
						{
							{0.92000002,0.89999998},
							1
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.039999999,0.039999999,0.1};
				helmetRight[]={0.079999998,0,0};
				helmetDown[]={0,-0.079999998,0};
			};
			class rhsusf_CH53_HUD_2
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class Velocity
					{
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.75,0.75};
					};
					class ForwardVec1
					{
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class ForwardVec
					{
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25299999,0.25299999};
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class PlaneMovementCrosshair
					{
						width=7;
						points[]=
						{
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.02,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.01732,0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.0099999998,0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,0.02},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.02,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.039999999,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.039999999,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.039999999},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							}
						};
					};
					class AC_Centerline
					{
						condition="on";
						class AC_Cross
						{
							width=4;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									
									{
										" -0.006 + 0.5",
										"0 + 0.5"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									
									{
										" 0.006 + 0.5",
										"0 + 0.5"
									},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									
									{
										" -0.0 + 0.5",
										"0.006 + 0.5"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									
									{
										" 0.0 + 0.5",
										"-0.006 + 0.5"
									},
									1
								}
							};
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.035,0.035,0.1};
				helmetRight[]={0.07,0,0};
				helmetDown[]={0,-0.07,0};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust_1_pos";
				direction="exhaust_1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position="exhaust_2_pos";
				direction="exhaust_2_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust3
			{
				position="exhaust_3_pos";
				direction="exhaust_3_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
		simulation="helicopterrtd";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="rhsusf\addons\rhsusf_c_ch53\RTD_CH53E2.xml";
			autoHoverCorrection[]={4.6999998,3.8,0};
			defaultCollective=0.66500002;
			retreatBladeStallWarningSpeed=87.455597;
			maxTorque=4900;
			stressDamagePerSec=0.0033333299;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=570000;
			maxTailRotorStress=120000;
		};
		class Eventhandlers: Eventhandlers
		{
		};
		weapons[]=
		{
			"rhsusf_weap_ANAAQ24"
		};
		magazines[]=
		{
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM",
			"rhsusf_mag_DIRCM"
		};
		numberPhysicalWheels=3;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsusf\addons\rhsusf_ch53\data\loadouts\RHS_CH53_EDEN_CA.paa";
				class pylons
				{
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHSUSF_cm_ANALE39",
							"RHSUSF_cm_ANALE39_x2"
						};
						attachment="rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						animDirection="ObsGun";
						angleRangeHorizontal=98;
						angleRangeVertical=72;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						maxFogSeeThrough=0.94999999;
						minTrackableSpeed=0;
						maxTrackableSpeed=695;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="ObsGun";
						angleRangeHorizontal=98;
						angleRangeVertical=72;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						resource="RscCustomInfoSensors";
						range[]={3000,8000,16000,35000};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						resource="RscCustomInfoSensors";
						range[]={3000,8000,16000,35000};
					};
				};
			};
			class TransportCountermeasuresComponent
			{
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				GunnerDoor="";
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				memoryPointGun="flir_end";
				stabilizedInAxes=3;
				minElev=-90;
				maxElev=38.200001;
				initElev=0;
				minTurn=-70;
				maxTurn=70;
				initTurn=0;
				isCopilot=1;
				weapons[]=
				{
					"rhs_weap_laserDesignator_AI"
				};
				magazines[]=
				{
					"rhs_LaserMag_ai"
				};
				precisegetinout=0;
				usePiP=1;
				CanEject=1;
				primaryGunner=1;
				proxyIndex=1;
				commanding=-1;
				showgunneroptics=1;
				hasGunner=1;
				hideWeaponsGunner=1;
				lockWhenDriverOut=0;
				enableManualFire=1;
				maxHorizontalRotSpeed=3.2;
				maxVerticalRotSpeed=3.2;
				showHMD=0;
				class OpticsIn
				{
					class WideNGS
					{
						initAngleX=0;
						minAngleX=-80;
						maxAngleX=20;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1;
						minFov=1;
						maxFov=1;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						directionStabilized=0;
					};
					class Wide
					{
						initAngleX=0;
						minAngleX=-80;
						maxAngleX=20;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						directionStabilized=1;
						stabilizedInAxes=3;
					};
					class WideL: Wide
					{
						initFov=0.2;
						minFov=0.2;
						maxFov=0.2;
					};
					class Medium: Wide
					{
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
					};
					class Narrow: Wide
					{
						initFov=0.02;
						minFov=0.02;
						maxFov=0.02;
					};
					class Narrower: Wide
					{
						initFov=0.0099999998;
						minFov=0.0099999998;
						maxFov=0.0099999998;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
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
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,8000,16000,25000};
								resource="RscCustomInfoSensors";
							};
							class VehicleGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
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
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,8000,16000,25000};
								resource="RscCustomInfoSensors";
							};
							class VehicleGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
						};
					};
				};
				startEngine=0;
			};
		};
		cargoCompartments[]=
		{
			"Compartment2"
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		memoryPointDriverOptics="slingCamera";
		slingLoadMaxCargoMass=14000;
		class MarkerLights
		{
			class PositionRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="PositionLight_red_1_pos";
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class PositionGreen: PositionRed
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="PositionLight_green_1_pos";
			};
			class PositionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_white_1_pos";
				drawLightSize=0.2;
			};
			class CollisionRed: PositionRed
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="CollisionLight_red_1_pos";
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
			class CollisionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="CollisionLight_white_1_pos";
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class InteriorBlue
			{
				name="light_interior_blue";
				color[]={0.07,0.99000001,0.88999999};
				ambient[]={0.0070000002,0.098999999,0.089000002};
				intensity=75;
				blinking=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=2.25;
					hardLimitEnd=3;
				};
			};
		};
		ace_cargo_hasCargo=1;
		ace_cargo_space=16;
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cCH53NumberPlaces, _value]]] call rhsusf_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class USMCGrey
					{
						name="USMC (Grey)";
						value="USMCGrey";
						defaultValue="USMCGrey";
					};
					class USMCBlackShadow
					{
						name="USMC (Black Shadow)";
						value="USMCBlackShadow";
					};
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. If 0, random number will be generated";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{[_this, [['Number', cCH53NumberPlaces, _this getVariable ['rhs_decalNumber_type','USMCGrey'], _value] ] ] call rhsusf_fnc_decalsInit};";
			};
			class rhs_openRamp
			{
				property="rhs_openRamp";
				control="slider";
				expression="_this animate ['ramp_bottom',_value];_this animate ['ramp_top',_value];";
				defaultValue="0";
			};
			class FoldHeli
			{
				control="CheckboxNumber";
				defaultValue="0";
				property="FoldHeli";
				expression="[_this,_value,true] call rhsusf_fnc_ch53_fold";
			};
			class hide_cargo: rhs_openRamp
			{
				property="hide_cargo";
				control="CheckboxNumber";
				expression="_this animate ['%s',_value,true];_this lockCargo (_value == 1)";
			};
			class rhs_attachCargo: FoldHeli
			{
				tooltip="Attaching cargo (using attachTo command) just like when you use ramp action";
				property="rhs_attachCargo";
				expression="if(_value == 1)then{[_this] spawn rhs_fnc_cargoAttach}else{{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects _this};";
			};
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VTV_limit_1",
					"VTV_limit_2"
				};
				disableHeightLimit=1;
				maxLoadMass=9000;
				cargoAlignment[]=
				{
					"front",
					"center"
				};
				cargoSpacing[]={0.075000003,0.075000003,0.075000003};
				exits[]=
				{
					"VTV_exit_1"
				};
				unloadingInterval=2;
				loadingDistance=15;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=25;
			};
		};
	};
	class rhsusf_CH53E_USMC_GAU21: rhsusf_CH53E_USMC
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class GAU21: MainTurret
			{
				usePiP=0;
				isCopilot=0;
				showAsCargo=1;
				proxyIndex=2;
				minElev=-60;
				maxElev=7;
				initElev=0;
				minTurn=90;
				maxTurn=270;
				initTurn=180;
				lodturnedout=1200;
				lodturnedin=1200;
				lodopticsout=1200;
				lodopticsin=1200;
				animationSourceHatch="";
				stabilizedInAxes="StabilizedInAxesNone";
				selectionFireAnim="zasleh_1";
				weapons[]=
				{
					"rhs_weap_gau21_1"
				};
				magazines[]=
				{
					"rhs_mag_300rnd_127x99_mag_Tracer_Red",
					"rhs_mag_300rnd_127x99_mag_Tracer_Red",
					"rhs_mag_300rnd_127x99_mag_Tracer_Red"
				};
				preciseGetInOut=0;
				commanding=-2;
				playerPosition=1;
				primaryGunner=0;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.69999999;
					maxanglex=75;
					maxangley=100;
					maxfov=1.1;
					minanglex=-75;
					minangley=-100;
					minfov=0.25;
				};
				class ViewGunner: ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.69999999;
					maxanglex=75;
					maxangley=100;
					maxfov=1.1;
					minanglex=-75;
					minangley=-100;
					minfov=0.25;
					visionMode[]={};
				};
				class OpticsIn
				{
					class ViewOptics: ViewGunner
					{
					};
				};
				memoryPointGun="muzzle_1";
				soundAttenuationTurret="HeliAttenuationGunner";
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
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
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
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
						};
					};
				};
				class Hitpoints
				{
				};
			};
		};
		class UVAnimations
		{
			class hmg_ammo_1
			{
				source="reload_hmg_1";
				sourceAddress="loop";
				section="hmg_ammo_1";
				minValue=0;
				maxValue=1;
				offset0[]={0,0};
				offset1[]={0.037999999,0};
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cCH53NumberPlaces, _value]]] call rhsusf_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class USMCGrey
					{
						name="USMC (Grey)";
						value="USMCGrey";
						defaultValue="USMCGrey";
					};
					class USMCBlackShadow
					{
						name="USMC (Black Shadow)";
						value="USMCBlackShadow";
					};
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. If 0, random number will be generated";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{[_this, [['Number', cCH53NumberPlaces, _this getVariable ['rhs_decalNumber_type','USMCGrey'], _value] ] ] call rhsusf_fnc_decalsInit};";
			};
			class rhs_openRamp
			{
				property="rhs_openRamp";
				control="slider";
				expression="_this animate ['ramp_bottom',_value];";
				defaultValue="0";
			};
			class FoldHeli
			{
				control="CheckboxNumber";
				defaultValue="0";
				property="FoldHeli";
				expression="[_this,_value,true] call rhsusf_fnc_ch53_fold";
			};
		};
	};
	class rhsusf_CH53E_USMC_D: rhsusf_CH53E_USMC
	{
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_d_helicrew"
		};
	};
	class rhsusf_CH53E_USMC_GAU21_D: rhsusf_CH53E_USMC_GAU21
	{
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_d_helicrew"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class GAU21: GAU21
			{
			};
		};
	};
	class rhsusf_CH53e_USMC_cargo: rhsusf_CH53E_USMC
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
		class VehicleTransport: VehicleTransport
		{
			class Carrier: Carrier
			{
				cargoBayDimensions[]=
				{
					"VTV_limit_1_big",
					"VTV_limit_2_big"
				};
			};
		};
	};
	class rhsusf_CH53e_USMC_D_cargo: rhsusf_CH53E_USMC_D
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
		};
		class VehicleTransport: VehicleTransport
		{
			class Carrier: Carrier
			{
				cargoBayDimensions[]=
				{
					"VTV_limit_1_big",
					"VTV_limit_2_big"
				};
			};
		};
	};
};
class CfgSounds
{
	class ch53_rampdown
	{
		name="rhsusf_ch53_rampdown";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_ramp",
			1,
			1,
			15
		};
		titles[]={};
	};
	class ch53_rampup
	{
		name="rhsusf_ch53_rampup";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_ramp",
			1,
			1,
			15
		};
		titles[]={};
	};
	class ch53_gear
	{
		name="rhsusf_ch53_gear";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_critical_hydraulicsfailure
	{
		name="rhsusf_dws_critical_hydraulicsfailure";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_critical_hydraulicsfailure",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_critical_pullup
	{
		name="rhsusf_dws_critical_pullup";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_critical_pullup",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_critical_enginefailure
	{
		name="rhsusf_dws_critical_enginefailure";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_critical_enginefailure",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_warning_engineout
	{
		name="rhsusf_dws_warning_engineout";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_engineout",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_warning_damagecritical
	{
		name="rhsusf_dws_warning_damagecritical";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_damagecritical",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_warning_fuelpressure
	{
		name="rhsusf_dws_warning_fuelpressure";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_fuelpressure",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_warning_fuelcritical
	{
		name="rhsusf_dws_warning_fuelcritical";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_fuelcritical",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_warning_sinkrate
	{
		name="rhsusf_dws_warning_sinkrate";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_sinkrate",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_critical_incomingmissile
	{
		name="rhsusf_dws_critical_incomingmissile";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_critical_incomingmissile",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_caution_rampopen
	{
		name="rhsusf_dws_caution_rampopen";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_caution_rampopen",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_caution_fuelow
	{
		name="rhsusf_dws_caution_fuelow";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_caution_fuelow",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_caution_overspeed
	{
		name="rhsusf_dws_caution_overspeed";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_caution_overspeed",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_info_geardown
	{
		name="rhsusf_dws_info_geardown";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_geardown",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_info_gearup
	{
		name="rhsusf_dws_info_gearup";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_gearup",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_info_stropsdeployed
	{
		name="rhsusf_dws_info_stropsdeployed";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_stropsdeployed",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_info_stropsretracted
	{
		name="rhsusf_dws_info_stropsretracted";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_stropsretracted",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_info_cargoattached
	{
		name="rhsusf_dws_info_cargoattached";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_cargoattached",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dws_info_cargodetached
	{
		name="rhsusf_dws_info_cargodetached";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_cargodetached",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_dummysound
	{
		name="rhsusf_dummysound";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\dummysound",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_debugbeep
	{
		name="rhsusf_debugbeep";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\debugsound",
			1,
			1,
			15
		};
		titles[]={};
	};
	class rhsusf_debugsin
	{
		name="rhsusf_debugsin";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\debugsoundst",
			1,
			1,
			15
		};
		titles[]={};
	};
	class Missile3OClockH
	{
		name="Missile3OClockH";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile03.wss",
			2,
			1,
			15
		};
		titles[]={};
	};
	class Missile6OClockH
	{
		name="Missile6OClockH";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile06.wss",
			2,
			1,
			15
		};
		titles[]={};
	};
	class Missile9OClockH
	{
		name="Missile9OClockH";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile09.wss",
			2,
			1,
			15
		};
		titles[]={};
	};
	class Missile12OClockH
	{
		name="Missile12OClockH";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile12.wss",
			2,
			1,
			15
		};
		titles[]={};
	};
	class Missile3OClockL
	{
		name="Missile3OClockL";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile03.wss",
			2,
			1,
			15
		};
		titles[]={};
	};
	class Missile6OClockL
	{
		name="Missile6OClockL";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile06.wss",
			2,
			1,
			15
		};
		titles[]={};
	};
	class Missile9OClockL
	{
		name="Missile9OClockL";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile09.wss",
			2,
			1,
			15
		};
		titles[]={};
	};
	class Missile12OClockL
	{
		name="Missile12OClockL";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile12.wss",
			2,
			1,
			15
		};
		titles[]={};
	};
};
