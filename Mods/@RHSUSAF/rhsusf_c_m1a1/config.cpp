class CfgPatches
{
	class rhsusf_c_m1a1
	{
		units[]=
		{
			"rhsusf_m1a1aimwd_usarmy",
			"rhsusf_m1a1aimd_usarmy",
			"rhsusf_m1a1aim_tuski_wd",
			"rhsusf_m1a1aim_tuski_d",
			"rhsusf_m1a1hc_wd",
			"rhsusf_m1a1fep_wd",
			"rhsusf_m1a1fep_d",
			"rhsusf_m1a1fep_od"
		};
		weapons[]={};
		name="M1A1 Tanks";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class M1_comm
			{
				file="\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_comm.sqf";
				description="Commander M2 Script for M1 Abrams series";
			};
			class M1_init
			{
				file="\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_init.sqf";
				description="M1 Abrams Init";
			};
			class M1_damage
			{
				file="\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_m1_damage.sqf";
				description="M1 Abrams Damage workaround";
			};
			class M1_defineLoadout
			{
				file="\rhsusf\addons\rhsusf_c_m1a1\scripts\defineLoadout.sqf";
				description="M1 Abrams Init";
			};
			class engineStartupDelay
			{
				file="\rhsusf\addons\rhsusf_c_m1a1\scripts\rhs_engineStart.sqf";
				description="Engine startup delay";
			};
		};
	};
};
class CfgSounds
{
	class RHSUSF_Error
	{
		name="Tank beep";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_c_m1a1\scripts\alarm_loop1.wss",
			0.3548134,
			1
		};
		titles[]={};
	};
};
class CfgSoundSets
{
	class RHSUSF_M1_Engine_RMP0_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP0_EXT_SoundShader"
		};
		volumeFactor=3.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_Engine_RMP1_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP1_EXT_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_Engine_RMP2_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP2_EXT_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_Engine_RMP3_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP3_EXT_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_Engine_RMP4_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP4_EXT_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_EngineBurst_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_EngineBurst_EXT_SoundShader"
		};
		volumeFactor=1;
		playTrigger="thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
		spatial=1;
		loop=0;
	};
};
class cfgSoundShaders
{
	class RHSUSF_M1_Engine_RMP0_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\m1eng_high",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1300,	3300]) - 0))";
		volume="engineOn * 1.7 * (rpm factor [600,	1200])* (rpm interpolate [1600,2500,1,0.3])";
		range=100;
	};
	class RHSUSF_M1_Engine_RMP1_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1200,	3300]) - (1800 - 1100)/(3300 - 1100)))";
		volume="engineOn * 2 * (((rpm factor [1200,	3300]) factor[ 0 + (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2, (1800 - 1100)/(3300 - 1100) - (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2]) * ((rpm factor [1200,	3300]) factor[ (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]))";
		range=300;
	};
	class RHSUSF_M1_Engine_RMP2_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1200,	3300]) - (2200 - 1100)/(3300 - 1100)))";
		volume="engineOn * 2 * (((rpm factor [1200,	3300]) factor[ (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200,	3300]) factor[ (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]))";
		range=325;
	};
	class RHSUSF_M1_Engine_RMP3_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1200,	3300]) - (3000 - 1100)/(3300 - 1100)))";
		volume="engineOn * 2 * (((rpm factor [1200,	3300]) factor[ (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200,	3300]) factor[ 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2]))";
		range=325;
	};
	class RHSUSF_M1_Engine_RMP4_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1200,	3300]) - 1))";
		volume="engineOn * 2 * ((rpm factor [1200,	3300]) factor[ (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2])";
		range=350;
	};
	class RHSUSF_M1_EngineBurst_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1",
				1
			}
		};
		frequency=1;
		volume=1;
		range=250;
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class MBT_01_base_F: Tank_F
	{
		class EventHandlers;
	};
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		displayName="$STR_M1A1SAwd_Name";
		accuracy=0.30000001;
		typicalCargo[]={};
		side=1;
		driverOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_m1_triplex";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		simulation="tankX";
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		fuelCapacity=20;
		maxSpeed=66;
		tankTurnForce=750000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=3.5;
		accelAidForceYOffset=-3;
		accelAidForceSpd=2.8299999;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		torqueCurve[]=
		{
			{0.33333299,1},
			{1,0.70102698}
		};
		engineMOI=15;
		enginePower=1120;
		peakTorque=5355;
		minOmega=100;
		maxOmega=314.16;
		idleRPM=1000;
		redRPM=3000;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		thrustDelay=0;
		clutchStrength=35;
		engineLosses=25;
		transmissionLosses=15;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.33333299,0.33333299,0,0.99333298,0.33333299,0.99333298,0.63333303,0.98333299,0.73333299,0.98333299,0.76666701,0.98333299,0.73333299};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-1.67,
				"N",
				0,
				"D1",
				4.8499999,
				"D2",
				2.6500001,
				"D3",
				1.48,
				"D4",
				1,
				"D5",
				0.79000002
			};
			TransmissionRatios[]=
			{
				"High",
				12
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				steering=0;
				width=0.477;
				mass=150;
				MOI=10.83;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				maxBrakeTorque=9000;
				sprungMass=4642.8599;
				springStrength=584000;
				springDamperRate=15000;
				dampingRate=205;
				dampingRateInAir=205;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=60000;
				frictionVsSlipGraph[]=
				{
					{0,0.75},
					{0.18000001,1},
					{0.69999999,0.5}
				};
			};
			class L3: L2
			{
			};
			class L4: L2
			{
			};
			class L5: L2
			{
			};
			class L6: L2
			{
			};
			class L7: L2
			{
			};
			class L8: L2
			{
			};
			class L9: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				suspTravelDirection[]={0.125,-1,0};
				side="right";
			};
			class R3: R2
			{
			};
			class R4: R2
			{
			};
			class R5: R2
			{
			};
			class R6: R2
			{
			};
			class R7: R2
			{
			};
			class R8: R2
			{
			};
			class R9: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
		};
		soundEngineOnInt[]=
		{
			"rhsusf\addons\rhsusf_m1a1\sounds\m1start",
			1.4125376,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_stop",
			1.4125376,
			1,
			200
		};
		soundEngineOnExt[]=
		{
			"rhsusf\addons\rhsusf_m1a1\sounds\m1start",
			3.1622777,
			1,
			200
		};
		soundEngineOffExt[]=
		{
			"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_ext_stop",
			3.1622777,
			1,
			200
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_ext_rpm1",
					2.818383,
					1,
					150
				};
				frequency="0.9	+	((rpm/	3000) factor[(850/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(750/	3000),(990/	3000)])	*	((rpm/	3000) factor[(1100/	3000),(1000/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",
					3.5481339,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(970/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1450/	3000),(1300/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm3",
					2.818383,
					1,
					240
				};
				frequency="0.8	+		((rpm/	3000) factor[(1300/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1350/	3000),(1550/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1750/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm4",
					2.5118864,
					1,
					280
				};
				frequency="0.8	+	((rpm/	3000) factor[(1400/	3000),(1900/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1750/	3000),(2050/	3000)])	*	((rpm/	3000) factor[(2450/	3000),(2300/	3000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm5",
					2.2387211,
					1,
					320
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(2700/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(2350/	3000),(2550/	3000)])	*	((rpm/	3000) factor[(2770/	3000),(2600/	3000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm6",
					1.9952624,
					1,
					360
				};
				frequency="0.8	+	((rpm/	3000) factor[(2600/	3000),(3000/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(2550/	3000),(2800/	3000)])	*	((rpm/	3000) factor[(3050/	3000),(2950/	3000)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm7",
					1.7782794,
					1,
					420
				};
				frequency="0.95	+	((rpm/	3000) factor[(2900/	3000),(3100/	3000)])*0.15";
				volume="engineOn*camPos*((rpm/	3000) factor[(2850/	3000),(3100/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1",
					1.9952624,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(850/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(750/	3000),(990/	3000)])	*	((rpm/	3000) factor[(1100/	3000),(1000/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm2",
					1.7782794,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(970/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1450/	3000),(1300/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm3",
					1.5848932,
					1,
					280
				};
				frequency="0.8	+		((rpm/	3000) factor[(1300/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1350/	3000),(1550/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1750/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm4",
					1.4125376,
					1,
					320
				};
				frequency="0.8	+	((rpm/	3000) factor[(1400/	3000),(1900/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1750/	3000),(2050/	3000)])	*	((rpm/	3000) factor[(2450/	3000),(2300/	3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm5",
					1.2589254,
					1,
					360
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(2700/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2350/	3000),(2550/	3000)])	*	((rpm/	3000) factor[(2770/	3000),(2600/	3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm6",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	3000) factor[(2600/	3000),(3000/	3000)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2550/	3000),(2800/	3000)])	*	((rpm/	3000) factor[(3050/	3000),(2950/	3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm7",
					1.2589254,
					1,
					450
				};
				frequency="0.9	+	((rpm/	3000) factor[(2900/	3000),(3100/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2850/	3000),(3100/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",
					2.818383,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(850/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(750/	3000),(990/	3000)])	*	((rpm/	3000) factor[(1100/	3000),(1000/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",
					2.5118864,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(970/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1450/	3000),(1300/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",
					2.5118864,
					1
				};
				frequency="0.8	+		((rpm/	3000) factor[(1300/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1350/	3000),(1550/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1750/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",
					2.2387211,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1400/	3000),(1900/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1750/	3000),(2050/	3000)])	*	((rpm/	3000) factor[(2450/	3000),(2300/	3000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",
					1.9952624,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(2700/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(2350/	3000),(2550/	3000)])	*	((rpm/	3000) factor[(2770/	3000),(2600/	3000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm2",
					1.7782794,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2600/	3000),(3000/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(2550/	3000),(2800/	3000)])	*	((rpm/	3000) factor[(3050/	3000),(2950/	3000)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_engine_int_rpm3",
					1.7782794,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2900/	3000),(3100/	3000)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2850/	3000),(3100/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm1",
					1.9952624,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(850/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(750/	3000),(990/	3000)])	*	((rpm/	3000) factor[(1100/	3000),(1000/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm2",
					1.9952624,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1400/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(970/	3000),(1200/	3000)])	*	((rpm/	3000) factor[(1450/	3000),(1300/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm3",
					1.7782794,
					1
				};
				frequency="0.8	+		((rpm/	3000) factor[(1300/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1350/	3000),(1550/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1750/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm4",
					1.5848932,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1400/	3000),(1900/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1750/	3000),(2050/	3000)])	*	((rpm/	3000) factor[(2450/	3000),(2300/	3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm5",
					1.4125376,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(2700/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2350/	3000),(2550/	3000)])	*	((rpm/	3000) factor[(2770/	3000),(2600/	3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm6",
					1.4125376,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2600/	3000),(3000/	3000)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2550/	3000),(2800/	3000)])	*	((rpm/	3000) factor[(3050/	3000),(2950/	3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_int_rpm7",
					1.4125376,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(2900/	3000),(3100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2850/	3000),(3100/	3000)])";
			};
			soundSetsExt[]=
			{
				"RHSUSF_M1_Engine_RMP0_EXT_SoundSet",
				"RHSUSF_M1_Engine_RMP1_EXT_SoundSet",
				"RHSUSF_M1_Engine_RMP2_EXT_SoundSet",
				"RHSUSF_M1_Engine_RMP3_EXT_SoundSet",
				"RHSUSF_M1_Engine_RMP4_EXT_SoundSet",
				"Tank_Tracks1_01_EXT_SoundSet",
				"Tank_Tracks1_02_EXT_SoundSet",
				"Tank_Tracks1_03_EXT_SoundSet",
				"Tank_Tracks1_04_EXT_SoundSet",
				"Tank_Tracks1_05_EXT_SoundSet",
				"Tank_Hard_Scrape_EXT_SoundSet",
				"Tank_Hard_Slip_EXT_SoundSet"
			};
			soundSetsInt[]=
			{
				"RHSUSF_M1_Engine_RMP0_EXT_SoundSet",
				"MBT_03_Engine_RMP1_INT_SoundSet",
				"MBT_03_Engine_RMP2_INT_SoundSet",
				"MBT_03_Engine_RMP3_INT_SoundSet",
				"MBT_03_Engine_RMP4_INT_SoundSet",
				"Tank_Tracks1_01_INT_SoundSet",
				"Tank_Tracks1_02_INT_SoundSet",
				"Tank_Tracks1_03_INT_SoundSet",
				"Tank_Tracks1_04_INT_SoundSet",
				"Tank_Tracks1_05_INT_SoundSet",
				"Tank_GenericRumble_INT_SoundSet",
				"Tank_GenericToneOn_INT_SoundSet",
				"Tank_GenericToneOff_INT_SoundSet",
				"Tank_Hard_Scrape_INT_SoundSet"
			};
		};
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"slide"
		};
		tracksSpeed=-1.35;
		wheelCircumference=2.375;
		attenuationEffectType="TankAttenuation";
		extCameraPosition[]={0,2,-11};
		reportOwnPosition=1;
		cost=1500000;
		damageResistance=0.02;
		incomingMissileDetectionSystem=0;
		driverForceOptics=1;
		LODDriverTurnedIn=0;
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=0;
		viewCargoShadow=1;
		viewCargoShadowDiff=1;
		viewCargoShadowAmb=1;
		armor=600;
		armorStructural=400;
		explosionShielding=150;
		minTotalDamageThreshold=0.5;
		class HitPoints: HitPoints
		{
			class Armor_Composite_40
			{
				armor=999;
				material=-1;
				name="Armor_CE_40_Hit";
				armorComponent="Armor_CE_40";
				simulation="RHS_Composite_40";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class Armor_Composite_50
			{
				armor=999;
				material=-1;
				name="Armor_CE_50_Hit";
				armorComponent="Armor_CE_50";
				simulation="RHS_Composite_50";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class Armor_Composite_60
			{
				armor=999;
				material=-1;
				name="Armor_CE_60_Hit";
				armorComponent="Armor_CE_60";
				simulation="RHS_Composite_60";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class Armor_Composite_80
			{
				armor=999;
				material=-1;
				name="Armor_CE_80_Hit";
				armorComponent="Armor_CE_80";
				simulation="RHS_Composite_80";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class Armor_Composite_85
			{
				armor=999;
				material=-1;
				name="Armor_CE_85_Hit";
				armorComponent="Armor_CE_85";
				simulation="RHS_Composite_85";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class HitFuelTank_Left
			{
				armor=-80;
				material=-1;
				name="Hit_FuelTank_Left";
				armorComponent="Hit_FuelTank_Left";
				passThrough=0;
				minimalHit=-0.2;
				explosionShielding=0;
				radius=0.1;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name="Hit_FuelTank_Right";
				armorComponent="Hit_FuelTank_Right";
			};
			class HitFuel
			{
				armor=999;
				material=-1;
				name="Hit_Fuel";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.0099999998;
				depends="(HitFuelTank_Left+HitFuelTank_Right)*0.5";
			};
			class HitAmmoHull
			{
				name="Hit_AmmoHull";
				armorComponent="Hit_AmmoHull";
				armor=-100;
				material=-1;
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0;
				radius=0.15000001;
			};
			class HitAmmo
			{
				name="Hit_Ammo";
				armorComponent="Hit_AmmoTurret";
				armor=-100;
				material=-1;
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0;
				radius=0.15000001;
			};
			class HitHull: HitHull
			{
				armor=0.80000001;
				material=-1;
				name="Hit_Hull";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0;
				radius=0.20999999;
				depends="(HitAmmo factor [0.9,1])+(HitAmmoHull factor [0.9,1])";
			};
			class HitEngine: HitEngine
			{
				armor=-100;
				material=-1;
				name="Hit_Engine";
				armorComponent="Hit_Engine";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0099999998;
				radius=0.18000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				armorComponent="Hit_TrackL";
				name="Hit_TrackL";
				passThrough=0;
				material=-1;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				armorComponent="Hit_TrackR";
				name="Hit_TrackR";
				material=-1;
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class Hit_Optic_Driver
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Driver";
				passThrough=0;
			};
			class Hit_Optic_DVEA: Hit_Optic_Driver
			{
				armorComponent="Hit_Optic_DVEA";
			};
			class Hit_Optic_Driver_Rear: Hit_Optic_Driver
			{
				armorComponent="Hit_Optic_Driver_Rear";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=0.18000001;
						stabilizedInAxes=3;
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							1,
							1,
							30
						};
						minElev=-10;
						maxElev=45;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						weapons[]=
						{
							"RHS_M2_Abrams_Commander",
							"rhsusf_weap_M250"
						};
						canUseScanners=0;
						showCrewAim=0;
						allowTabLock=0;
						class ViewOptics: ViewOptics
						{
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG"
							};
						};
						LodTurnedOut=0;
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initFov=0.23333301;
								minFov=0.23333301;
								maxFov=0.23333301;
								hitpoint="Hit_Optic_ComM2";
							};
							class Periscope: ViewOptics
							{
								camPos="commanderview2";
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera2"
								};
								hitpoint="Hit_Optic_ComPeriscope";
							};
						};
						startEngine=0;
						class HitPoints
						{
							class HitTurretCom
							{
								armor=0.30000001;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isTurret=1;
							};
							class HitGunCom
							{
								armor=0.30000001;
								material=-1;
								name="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isGun=1;
							};
							class Hit_Optic_ComPeriscope
							{
								armor=-40;
								explosionShielding=0;
								name="";
								armorComponent="Hit_Optic_ComPeriscope";
								passThrough=0;
							};
							class Hit_Optic_ComM2: Hit_Optic_ComPeriscope
							{
								armorComponent="Hit_Optic_ComM2";
							};
							class Hit_Optic_ComCWSS: Hit_Optic_ComPeriscope
							{
								armorComponent="Hit_Optic_ComCWSS";
							};
						};
						selectionFireAnim="zasleh3";
					};
					class Loader: CommanderOptics
					{
						class HitPoints
						{
							class Hit_Optic_LoaderPeriscope
							{
								armor=-40;
								explosionShielding=0;
								name="";
								armorComponent="Hit_Optic_LoaderPeriscope";
								passThrough=0;
							};
						};
						isPersonTurret=0;
						lockWhenDriverOut=0;
						minTurn=-34;
						maxTurn=140;
						weapons[]=
						{
							"rhs_weap_m240_abrams"
						};
						stabilizedInAxes=0;
						memoryPointGun="usti hlavne5";
						selectionFireAnim="zasleh5";
						soundAttenuationTurret="HeliAttenuationGunner";
						animationSourceHatch="HatchGunner";
						commanding=-3;
						primaryObserver=0;
						proxyindex=2;
						class OpticsIn
						{
							class Periscope: ViewOptics
							{
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal"
								};
								hitpoint="Hit_Optic_LoaderPeriscope";
							};
						};
					};
				};
				lockWhenDriverOut=1;
				animationSourceHatch="";
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zaslehCoax";
				weapons[]=
				{
					"rhs_weap_m256",
					"rhs_weap_m240_abrams_coax",
					"rhs_weap_fcs"
				};
				minElev=-10;
				maxElev=22;
				initElev=5;
				maxhorizontalrotspeed=0.69999999;
				maxverticalrotspeed=0.44;
				canUseScanners=0;
				showCrewAim=0;
				allowTabLock=0;
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
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal"
						};
						thermalMode[]={2,3};
						hitpoint="Hit_Optic_GPS";
					};
					class Medium: Wide
					{
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Wide_TI: Wide
					{
						visionMode[]=
						{
							"Ti"
						};
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						hitpoint="Hit_Optic_GPS_TI";
					};
					class Wide2_TI: Wide_TI
					{
						initFov=0.116667;
						minFov=0.116667;
						maxFov=0.116667;
					};
					class Medium_TI: Wide_TI
					{
						initFov=0.053846199;
						minFov=0.053846199;
						maxFov=0.053846199;
					};
					class Medium2_TI: Wide_TI
					{
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
					class Narrow_TI: Wide_TI
					{
						initFov=0.014;
						minFov=0.014;
						maxFov=0.014;
					};
				};
				forceHideGunner=1;
				startEngine=0;
				LodTurnedOut=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=-160;
						name="vez";
						armorComponent="Hit_Turret";
						passThrough=0;
						minimalHit=-0.23999999;
						explosionShielding=0.001;
						radius=0.18000001;
						isTurret=1;
					};
					class HitGun
					{
						armor=-160;
						name="zbran";
						armorComponent="Hit_Gun";
						passThrough=0;
						minimalHit=-0.15000001;
						explosionShielding=0;
						radius=0.12;
						isGun=1;
					};
					class Hit_GPS_HeadMirror
					{
						armor=-40;
						explosionShielding=0;
						name="";
						armorComponent="Hit_HeadMirror";
						passThrough=0;
					};
					class Hit_GPS_Optical: Hit_GPS_HeadMirror
					{
						armorComponent="Hit_Optic_GPS";
					};
					class Hit_GPS_TIS: Hit_GPS_HeadMirror
					{
						armorComponent="Hit_Optic_GPS_TI";
					};
					class Hit_Optic_GPS: Hit_GPS_Optical
					{
						armorComponent="-";
						depends="Hit_GPS_HeadMirror max Hit_GPS_Optical";
					};
					class Hit_Optic_GPS_TI: Hit_GPS_TIS
					{
						armorComponent="-";
						depends="Hit_GPS_HeadMirror max Hit_GPS_TIS";
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"",
			"",
			"",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"i3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
		};
		class textureSources
		{
			class woodland
			{
				displayName="Woodland";
			};
			class desert: woodland
			{
				displayName="Desert";
			};
		};
		class Damage
		{
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"TI"
			};
			thermalMode[]={2,3};
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos="view_driver";
				visionMode[]=
				{
					"Normal"
				};
				hitpoint="Hit_Optic_Driver";
			};
			class DVE_Wide: Wide
			{
				visionMode[]=
				{
					"TI"
				};
				initFov=1.07692;
				minFov=1.07692;
				maxFov=1.07692;
				hitpoint="Hit_Optic_DVEA";
			};
			class DVS_Rear: DVE_Wide
			{
				camPos="view_rear";
				camDir="view_rear_dir";
				hitpoint="Hit_Optic_Driver_Rear";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaustL1";
				direction="exhaustL_Dir";
				effect="RHS_ExhaustEffectTankGasBack";
			};
			class Exhaust1L
			{
				position="exhaustL2";
				direction="exhaustL_Dir";
				effect="RHS_ExhaustEffectTankGasBack";
			};
			class Exhaust2
			{
				position="exhaustR1";
				direction="exhaustR_Dir";
				effect="RHS_ExhaustEffectTankGasBack";
			};
			class Exhaust2R
			{
				position="exhaustR2";
				direction="exhaustR_Dir";
				effect="RHS_ExhaustEffectTankGasBack";
			};
		};
		armorLights=0.0099999998;
		class Attributes
		{
			class rhs_hideIFFPanel
			{
				displayName="Hide IFF Panel";
				property="rhs_hideIFFPanel";
				control="CheckboxNumber";
				expression="_this animate ['IFF_Panels_Hide',_value,true]";
				defaultValue="0";
			};
			class rhs_hideMiles
			{
				displayName="Hide Miles Panel";
				property="rhs_hideMiles";
				control="CheckboxNumber";
				expression="_this animate ['Miles_Hide',_value,true]";
				defaultValue="0";
			};
			class rhs_decalBarrel_type
			{
				displayName="Define type of barrel art";
				tooltip="Define type of barrel art. You can choose between desert & Woodland variants";
				property="rhs_decalBarrel_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				typeName="STRING";
				class values
				{
					class BarrelArt_Abrams_D
					{
						name="Desert";
						value="BarrelArt_Abrams_D";
						defaultValue="BarrelArt_Abrams_D";
					};
					class BarrelArt_Abrams_WD
					{
						name="Woodland";
						value="BarrelArt_Abrams_WD";
					};
				};
			};
			class rhs_decalBarrel
			{
				displayName="Define barrel art";
				tooltip="Define barrel art. Available numbers from 0 to 55, type number above 55 to clear that place";
				property="rhs_decalBarrel";
				control="Edit";
				expression="if(_value >= 0)then{ [_this, [ [ 'Label', cM1BarrelSymPlaces,  _this getVariable ['rhs_decalBarrel_type','BarrelArt_Abrams_WD'],_value] ] ] call rhsusf_fnc_decalsInit;};";
				defaultValue="-1";
				validate="NUMBER";
				typeName="NUMBER";
			};
			class rhs_decalPlatoon_type
			{
				displayName="Define type of platoon symbol";
				tooltip="Define type of platoon symbol. You can choose between desert & Woodland variants";
				property="rhs_decalPlatoon_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				typeName="STRING";
				class values
				{
					class ArmyPlt_Abrams_D
					{
						name="Desert";
						value="ArmyPlt_Abrams_D";
						defaultValue="ArmyPlt_Abrams_D";
					};
					class ArmyPlt_Abrams_WD
					{
						name="Woodland";
						value="ArmyPlt_Abrams_WD";
					};
				};
			};
			class rhs_decalPlatoon
			{
				displayName="Define platoon symbol";
				tooltip="Define platoon symbol";
				property="rhs_decalPlatoon";
				control="Combo";
				expression="if(_value >= 0)then{ [_this, [ [ 'Label', cM1PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','ArmyPlt_Abrams_D'],_value] ] ] call rhsusf_fnc_decalsInit};";
				defaultValue="-1";
				typeName="Number";
				class values
				{
					class Random
					{
						name="Random";
						value=-1;
						defaultValue=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
						defaultValue=0;
					};
					class Setting1
					{
						name="1st Platoon, 1st Vehicle";
						value=1;
						defaultValue=1;
					};
					class Setting2
					{
						name="1st Platoon, 2nd Vehicle";
						value=2;
						defaultValue=2;
					};
					class Setting3
					{
						name="1st Platoon, 3rd Vehicle";
						value=3;
						defaultValue=3;
					};
					class Setting4
					{
						name="1st Platoon, 4th Vehicle";
						value=4;
						defaultValue=4;
					};
					class Setting5
					{
						name="2nd Platoon, 1st Vehicle";
						value=5;
						defaultValue=5;
					};
					class Setting6
					{
						name="2nd Platoon, 2nd Vehicle";
						value=6;
						defaultValue=6;
					};
					class Setting7
					{
						name="2nd Platoon, 3rd Vehicle";
						value=7;
						defaultValue=7;
					};
					class Setting8
					{
						name="2nd Platoon, 4th Vehicle";
						value=8;
						defaultValue=8;
					};
					class Setting9
					{
						name="3rd Platoon, 1st Vehicle";
						value=9;
						defaultValue=9;
					};
					class Setting10
					{
						name="3rd Platoon, 2nd Vehicle";
						value=10;
						defaultValue=10;
					};
					class Setting11
					{
						name="3rd Platoon, 3rd Vehicle";
						value=11;
						defaultValue=11;
					};
					class Setting12
					{
						name="3rd Platoon, 4th Vehicle";
						value=12;
						defaultValue=12;
					};
				};
			};
			class rhs_ammoslot_1_type
			{
				displayName="Ammo slot #1 type";
				tooltip="Define type of shell for #1 slot";
				property="rhs_ammoslot_1_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				typeName="STRING";
				class values
				{
					class rhs_mag_M829A3
					{
						name="M829A3 APFSDS-T";
						value="rhs_mag_M829A3";
						defaultValue="rhs_mag_M829A3";
					};
					class rhs_mag_M829A2
					{
						name="M829A2 APFSDS-T";
						value="rhs_mag_M829A2";
					};
					class rhs_mag_M829A1
					{
						name="M829A1 APFSDS-T";
						value="rhs_mag_M829A1";
					};
					class rhs_mag_M829
					{
						name="M829 APFSDS-T";
						value="rhs_mag_M829";
					};
					class rhs_mag_M830
					{
						name="M830 HEAT-FS";
						value="rhs_mag_M830";
					};
					class rhs_mag_M830A1
					{
						name="M830A1 MPAT";
						value="rhs_mag_M830A1";
					};
					class rhs_mag_M1028
					{
						name="M1028 Canister";
						value="rhs_mag_M1028";
					};
					class rhs_mag_M1147
					{
						name="M1147 HE-FRAG";
						value="rhs_mag_M1147";
					};
				};
			};
			class rhs_ammoslot_1
			{
				displayName="Ammo slot #1 count";
				tooltip="Define number of rounds stored inside of type #1. Max 36. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s'] spawn rhs_fnc_m1_defineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
				typeName="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #2 type";
				tooltip="Define type of shell for #2 slot";
				property="rhs_ammoslot_2_type";
				defaultValue="0";
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				displayName="Ammo slot #2 count";
				tooltip="Define number of rounds stored inside of type #2. Max 36. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #3 type";
				tooltip="Define type of shell for #3 slot";
				property="rhs_ammoslot_3_type";
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				displayName="Ammo slot #3 count";
				tooltip="Define number of rounds stored inside of type #3. Max 36. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
		};
		class EventHandlers: EventHandlers
		{
		};
	};
	class rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1tank_base
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		displayName="$STR_M1A1SAwd_Name";
	};
	class rhsusf_m1a1aimd_usarmy: rhsusf_m1a1tank_base
	{
		displayName="$STR_M1A1SAwd_Name";
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"
		};
		hiddenSelectionstextures[]=
		{
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa"
		};
	};
	class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base
	{
		displayName="$STR_M1A1SATUSKIwd_Name";
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"i3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_01_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"
		};
		class textureSources
		{
			class woodland
			{
				displayName="Woodland";
			};
			class desert: woodland
			{
				displayName="Desert";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class OpticsIn
						{
							class CWSS: ViewOptics
							{
								camPos="commanderview_cwss";
								initFov=0.23333301;
								minFov=0.23333301;
								maxFov=0.23333301;
								visionMode[]=
								{
									"Normal",
									"TI"
								};
								thermalMode[]={2,3};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera2"
								};
								hitpoint="Hit_Optic_ComCWSS";
							};
							class CWSS_2x: CWSS
							{
								initFov=0.116667;
								minFov=0.116667;
								maxFov=0.116667;
							};
							class CWSS_3x: CWSS
							{
								initFov=0.077777803;
								minFov=0.077777803;
								maxFov=0.077777803;
							};
							class Periscope: ViewOptics
							{
								camPos="commanderview2";
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera2"
								};
								hitpoint="Hit_Optic_ComPeriscope";
							};
							class CWS: CWSS
							{
								camPos="commanderview";
								visionMode[]=
								{
									"Normal",
									"NVG"
								};
								hitpoint="Hit_Optic_ComM2";
							};
						};
						minOutTurn=-30;
						maxOutTurn=65;
					};
					class Loader: Loader
					{
						minTurn=9;
						maxTurn=117;
					};
				};
				weapons[]=
				{
					"rhs_weap_m256",
					"RHS_M2_Abrams_Gunner",
					"rhs_weap_m240_abrams_coax",
					"rhs_weap_fcs"
				};
				armorLights=0.0099999998;
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_2_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_3_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_4_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_5_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_6_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_7_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_8_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_9_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_10_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_11_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_12_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_13_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_14_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_15_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_16_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_17_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_18_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_19_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_20_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_21_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_22_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_23_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_25_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e27";
				armorComponent="e27";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e28";
				armorComponent="e28";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_29_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e29";
				armorComponent="e29";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_30_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e30";
				armorComponent="e30";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_31_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e31";
				armorComponent="e31";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_32_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_33_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e33";
				armorComponent="e33";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_34_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e34";
				armorComponent="e34";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class SLAT_1_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="SLAT_1";
				armorComponent="SLAT_1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
		};
	};
	class rhsusf_m1a1aim_tuski_d: rhsusf_m1a1aim_tuski_wd
	{
		displayName="$STR_M1A1SATUSKIwd_Name";
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_01_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_d_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_d_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa"
		};
	};
	class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base
	{
		displayName="$STR_M1A1FEPd_Name";
		rhs_duke_type="rhsusf_duke_m1a2";
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"duke_tex",
			"",
			"",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"i3"
		};
		hiddenSelectionstextures[]=
		{
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_01_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
		};
		class textureSources
		{
			class woodland
			{
				displayName="Woodland";
			};
			class desert: woodland
			{
				displayName="Desert";
			};
			class OD: woodland
			{
				displayName="Olive Drab";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_m256",
					"rhs_weap_m240_abrams_coax",
					"rhs_weap_fcs"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"RHS_M2_Abrams_Commander",
							"rhsusf_weap_M257",
							"rhsusf_weap_duke"
						};
						class OpticsIn
						{
							class CWSS: ViewOptics
							{
								camPos="commanderview_cwss";
								initFov=0.23333301;
								minFov=0.23333301;
								maxFov=0.23333301;
								visionMode[]=
								{
									"Normal",
									"TI"
								};
								thermalMode[]={2,3};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera2"
								};
								hitpoint="Hit_Optic_ComCWSS";
							};
							class CWSS_2x: CWSS
							{
								initFov=0.116667;
								minFov=0.116667;
								maxFov=0.116667;
							};
							class CWSS_3x: CWSS
							{
								initFov=0.077777803;
								minFov=0.077777803;
								maxFov=0.077777803;
							};
							class Periscope: ViewOptics
							{
								camPos="commanderview2";
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera2"
								};
								hitpoint="Hit_Optic_ComPeriscope";
							};
							class CWS: CWSS
							{
								camPos="commanderview";
								visionMode[]=
								{
									"Normal",
									"NVG"
								};
								hitpoint="Hit_Optic_ComM2";
							};
						};
					};
					class Loader: Loader
					{
					};
				};
			};
		};
		class Damage
		{
		};
		class HitPoints: HitPoints
		{
			class HitDuke1
			{
				armor=0.75;
				material=-1;
				name="duke1";
				passThrough=0;
				MinimalHit=0.050000001;
				explosionShielding=0.0099999998;
				radius=0.15000001;
			};
			class HitDuke2: HitDuke1
			{
				name="duke2";
			};
		};
		class Attributes: Attributes
		{
			class rhs_hideIFFPanel: rhs_hideIFFPanel
			{
			};
			class rhs_hideDUKE: rhs_hideMiles
			{
				displayName="hide DUKE antennas";
				property="rhs_hideDUKE";
				expression="_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[0,0]]}";
			};
			class rhs_decalBarrel_type: rhs_decalBarrel_type
			{
			};
			class rhs_decalBarrel: rhs_decalBarrel
			{
			};
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type
			{
			};
			class rhs_decalPlatoon: rhs_decalPlatoon
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
			};
			class rhs_ammoslot_2: rhs_ammoslot_2
			{
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
			};
			class rhs_ammoslot_3: rhs_ammoslot_3
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class rhs_duke
			{
				handleDamage="_this call rhs_fnc_duke_destruction";
			};
		};
	};
	class rhsusf_m1a1fep_wd: rhsusf_m1a1fep_d
	{
		displayName="$STR_M1A1FEPd_Name";
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
		class Attributes: Attributes
		{
			class rhs_hideIFFPanel: rhs_hideIFFPanel
			{
			};
			class rhs_hideDUKE: rhs_hideDUKE
			{
				defaultValue=1;
			};
			class rhs_decalBarrel_type: rhs_decalBarrel_type
			{
			};
			class rhs_decalBarrel: rhs_decalBarrel
			{
			};
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type
			{
			};
			class rhs_decalPlatoon: rhs_decalPlatoon
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
			};
			class rhs_ammoslot_2: rhs_ammoslot_2
			{
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
			};
			class rhs_ammoslot_3: rhs_ammoslot_3
			{
			};
		};
	};
	class rhsusf_m1a1fep_od: rhsusf_m1a1fep_wd
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		displayName="$STR_M1A1FEPod_Name";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
	};
	class rhsusf_m1a1hc_wd: rhsusf_m1a1tank_base
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		displayName="$STR_M1A1hcd_Name";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"",
			"",
			"",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"i3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
		};
		class textureSources
		{
			class woodland
			{
				displayName="Woodland";
			};
			class desert: woodland
			{
				displayName="Desert";
			};
			class OD: woodland
			{
				displayName="Olive Drab";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_m256",
					"rhs_weap_m240_abrams_coax",
					"rhs_weap_fcs"
				};
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
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={2,3};
						hitpoint="Hit_Optic_GPS";
					};
					class Medium: Wide
					{
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"RHS_M2_Abrams_Commander",
							"rhsusf_weap_M257"
						};
					};
					class Loader: Loader
					{
					};
				};
			};
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				visionMode[]=
				{
					"Normal"
				};
				hitpoint="Hit_Optic_Driver";
			};
		};
		class Damage
		{
		};
		class EventHandlers: EventHandlers
		{
			class rhs_duke
			{
			};
		};
	};
};
