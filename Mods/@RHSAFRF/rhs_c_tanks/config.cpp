class CfgPatches
{
	class rhs_c_tanks
	{
		units[]=
		{
			"rhs_t80",
			"rhs_t80b",
			"rhs_t80bk",
			"rhs_t80bv",
			"rhs_t80bvk",
			"rhs_t80a",
			"rhs_t80u",
			"rhs_t80uk",
			"rhs_t80ue1",
			"rhs_t80um",
			"rhs_t80u45m"
		};
		weapons[]={};
		name="T-80 Series Tanks";
	};
};
class DefaultEventHandlers;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class t80_init
			{
				file="\rhsafrf\addons\rhs_c_tanks\scripts\rhs_tank_init.sqf";
				description="Initialization script for T-80";
			};
			class t80_autoloader
			{
				file="\rhsafrf\addons\rhs_c_tanks\scripts\rhs_autoloader.sqf";
				description="Autoloader gun anim for T-80";
			};
			class t80_habar
			{
				file="\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_habar.sqf";
				description="Habar manager for T-80";
			};
			class t80_mp
			{
				file="\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_mp.sqf";
				description="Snorkel manager for T-80";
			};
			class t80_snorkel_eh
			{
				file="\rhsafrf\addons\rhs_c_tanks\scripts\bgr_t80_snorkel_eh.sqf";
				description="Snorkel engine event handler";
			};
			class t80_searchlightTexture
			{
				file="\rhsafrf\addons\rhs_c_tanks\scripts\rhs_searchlight.sqf";
				description="Open/close searchlight";
			};
			class engineStartupDelay
			{
				file="\rhsafrf\addons\rhs_c_tanks\scripts\rhs_engineStart.sqf";
				description="Engine startup delay";
			};
		};
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
		class EventHandlers;
		class Components;
	};
	class rhs_tank_base: Tank_F
	{
		rhs_hasSnorkel=1;
		rhs_habarType=2;
		rhs_decalParameters[]=
		{
			"['Number',cRHST80NumberPlaces,'Default']",
			"['Label',cRHST80PlnSymPlaces, 'Platoon',8]"
		};
		allowTabLock=0;
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		side=0;
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		simulation="tankX";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=19.5;
		RHS_fuelCapacity=1540;
		brakeIdleSpeed=1.78;
		maxSpeed=65;
		engineMOI=20;
		enginePower=809;
		peakTorque=4393;
		minOmega=114.72;
		maxOmega=350.85999;
		idleRPM=1200;
		redRPM=3255;
		torqueCurve[]=
		{
			{0.30722001,0},
			{0.44761899,0.94855499},
			{0.52657402,0.89710897},
			{0.60553002,0.84566402},
			{0.68448502,0.794218},
			{0.76344103,0.742773},
			{0.84239602,0.69132698},
			{1.90292,0}
		};
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineBrakeCoef=0;
		tracksSpeed=1.4;
		tankTurnForce=850000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=3.3;
		accelAidForceYOffset=-4;
		accelAidForceSpd=2.53;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=30;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.33333299,0.33333299,0,0.95999998,0.33333299,0.98333299,0.69999999,0.98333299,0.73333299,0.98333299,0.73333299};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-9.3599997,
				"N",
				0,
				"D1",
				4.3800001,
				"D2",
				2.1600001,
				"D3",
				1.46,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				12.85
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.89999998;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				steering=0;
				width=0.36000001;
				mass=188;
				MOI=14.0783;
				maxBrakeTorque=10000;
				sprungMass=3416.6699;
				springStrength=354000;
				springDamperRate=11000;
				maxDroop=0.14;
				maxCompression=0.14;
				dampingRate=1382;
				dampingRateInAir=1382;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=72000;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
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
		attenuationEffectType="TankAttenuation";
		soundEngineOnExt[]=
		{
			"rhsafrf\addons\rhs_t80\Sound\t80_engineStart.wav",
			0.56234133,
			1,
			200
		};
		soundEngineOnInt[]=
		{
			"rhsafrf\addons\rhs_t80\Sound\t80_engineStart.wav",
			0.56234133,
			1,
			200
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					0.79432821,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
				volume="engineOn*camPos*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
			};
			class Engine
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					0.89125091,
					1,
					240
				};
				frequency="0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.2589254,
					1,
					320
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.4125376,
					1,
					360
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.5848932,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\t80turbine",
					1.7782794,
					1,
					440
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
				volume="engineOn*camPos*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.89125091,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\T80-Treads",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01",
					0.25118864,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02",
					0.2818383,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
		};
		accuracy=0.2;
		cost=1500000;
		tf_range_api=45000;
		enableGPS=0;
		incomingMissileDetectionSystem=0;
		driverCanSee="2+4+8";
		commanderCanSee="2+4+8";
		viewCargoShadow=1;
		viewCargoShadowDiff=1;
		viewCargoShadowAmb=1;
		viewDriverShadow=1;
		driverForceOptics=1;
		driverOutForceOptics=1;
		memoryPointDriverOutOptics="Driver_out_view";
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
		LODDriverTurnedIn=0;
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=0;
		extCameraPosition[]={0,2.25,-10};
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
			};
		};
		class textureSources
		{
			class standard
			{
			};
			class r1: standard
			{
			};
			class r2: standard
			{
			};
			class r3: standard
			{
			};
			class r4: standard
			{
			};
			class r5: standard
			{
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHST80NumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class Default
					{
						name="Default";
						value="Default";
						defaultValue="Default";
					};
					class DefaultRed
					{
						name="Default (Red)";
						value="DefaultRed";
					};
					class BoldRed
					{
						name="Bold Red";
						value="BoldRed";
					};
					class CDF
					{
						name="CDF";
						value="CDF";
					};
					class Handpaint
					{
						name="Handpaint";
						value="Handpaint";
					};
					class HandpaintBlack
					{
						name="Handpaint Black";
						value="HandpaintBlack";
					};
					class Iraqi
					{
						name="Iraqi";
						value="Iraqi";
					};
					class LicensePlate
					{
						name="License Plate";
						value="LicensePlate";
					};
				};
			};
			class rhs_decalNumber
			{
				collapsed=1;
				tooltip="Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHST80NumberPlaces}else{[_this, [['Number', cRHST80NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				tooltip="Decal type";
				property="rhs_decalPlatoon_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				class values
				{
					class Platoon
					{
						name="Platoon";
						value="Platoon";
					};
					class PlatoonGDR
					{
						name="Platoon GDR";
						value="PlatoonGDR";
					};
					class PlatoonVDV
					{
						name="Platoon VDV";
						value="PlatoonVDV";
					};
					class Army
					{
						name="Army";
						value="Army";
						defaultValue="1";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
						defaultValue="0";
					};
					class HonorGDR
					{
						name="Honor GDR";
						value="HonorGDR";
					};
				};
			};
			class rhs_decalPlatoon
			{
				tooltip="Set platoon symbol located on turret front. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST80PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type: rhs_decalPlatoon_type
			{
				property="rhs_decalArmy_type";
				class values: values
				{
					class Army: Army
					{
					};
					class Platoon: Platoon
					{
					};
					class PlatoonGDR: PlatoonGDR
					{
					};
					class PlatoonVDV: PlatoonVDV
					{
					};
					class Honor: Honor
					{
					};
					class HonorGDR: HonorGDR
					{
					};
				};
			};
			class rhs_decalArmy: rhs_decalPlatoon
			{
				tooltip="Define symbol located on gunner hatch. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST80ArmSymPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalHonor_type: rhs_decalPlatoon_type
			{
				property="rhs_decalHonor_type";
				class values: values
				{
					class Honor: Honor
					{
					};
					class HonorGDR: HonorGDR
					{
					};
					class Platoon: Platoon
					{
					};
					class PlatoonGDR: PlatoonGDR
					{
					};
					class PlatoonVDV: PlatoonVDV
					{
					};
					class Army: Army
					{
					};
				};
			};
			class rhs_decalHonor: rhs_decalPlatoon
			{
				tooltip="Define symbol located on IR Lamp. Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalHonor";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST80HnrSymPlaces,  _this getVariable ['rhs_decalHonor_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #1 slot [AP rounds]";
				property="rhs_ammoslot_1_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				class values
				{
					class rhs_mag_3bm42_10
					{
						name="$STR_rhs_mag_3bm42";
						value="rhs_mag_3bm42";
						defaultValue="rhs_mag_3bm42";
					};
					class rhs_mag_3bm9_10
					{
						name="$STR_rhs_mag_3bm9";
						value="rhs_mag_3bm9";
						defaultValue="rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name="$STR_rhs_mag_3bm12";
						value="rhs_mag_3bm12";
						defaultValue="rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name="$STR_rhs_mag_3bm15";
						value="rhs_mag_3bm15";
						defaultValue="rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name="$STR_rhs_mag_3bm17";
						value="rhs_mag_3bm17";
						defaultValue="rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name="$STR_rhs_mag_3bm22";
						value="rhs_mag_3bm22";
						defaultValue="rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name="$STR_rhs_mag_3bm29";
						value="rhs_mag_3bm29";
						defaultValue="rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name="$STR_rhs_mag_3bm26";
						value="rhs_mag_3bm26";
						defaultValue="rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name="$STR_rhs_mag_3bm32";
						value="rhs_mag_3bm32";
						defaultValue="rhs_mag_3bm32";
					};
					class rhs_mag_3bm42m_10
					{
						name="$STR_rhs_mag_3bm42m";
						value="rhs_mag_3bm42m";
						defaultValue="rhs_mag_3bm42m";
					};
					class rhs_mag_3bm46_10
					{
						name="$STR_rhs_mag_3bm46";
						value="rhs_mag_3bm46";
						defaultValue="rhs_mag_3bm46";
					};
				};
			};
			class rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #1. Max 28. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',28] spawn rhs_fnc_TTanks_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #2 slot [HEAT rounds]";
				property="rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_3bk21_8
					{
						name="$STR_rhs_mag_3bk21";
						value="rhs_mag_3bk21";
						defaultValue="rhs_mag_3bk21";
					};
					class rhs_mag_3bk12_8
					{
						name="$STR_rhs_mag_3bk12";
						value="rhs_mag_3bk12";
						defaultValue="rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name="$STR_rhs_mag_3bk14";
						value="rhs_mag_3bk14";
						defaultValue="rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name="$STR_rhs_mag_3bk18";
						value="rhs_mag_3bk18";
						defaultValue="rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name="$STR_rhs_mag_3bk18m";
						value="rhs_mag_3bk18m";
						defaultValue="rhs_mag_3bk18m";
					};
					class rhs_mag_3bk29_8
					{
						name="$STR_rhs_mag_3bk29";
						value="rhs_mag_3bk29";
						defaultValue="rhs_mag_3bk29";
					};
					class rhs_mag_3bk31_8
					{
						name="$STR_rhs_mag_3bk31";
						value="rhs_mag_3bk31";
						defaultValue="rhs_mag_3bk31";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #2. Max 28. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #3 slot [HE rounds]";
				property="rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_3of26_6
					{
						name="$STR_rhs_mag_3of26";
						value="rhs_mag_3of26";
						defaultValue="rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name="$STR_rhs_mag_3of11";
						value="rhs_mag_3of11";
						defaultValue="rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #3. Max 28. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #4 slot [ATGM rounds]";
				property="rhs_ammoslot4_type";
				class values
				{
					class rhs_mag_9m112m_6
					{
						name="$STR_rhs_mag_9m112m";
						value="rhs_mag_9m112m";
						defaultValue="rhs_mag_9m112m";
					};
					class rhs_mag_9m112_6
					{
						name="$STR_rhs_mag_9m112";
						value="rhs_mag_9m112";
						defaultValue="rhs_mag_9m112";
					};
					class rhs_mag_9m112m2_6
					{
						name="$STR_rhs_mag_9m112m2";
						value="rhs_mag_9m112m2";
						defaultValue="rhs_mag_9m112m2";
					};
					class rhs_mag_9m124_6
					{
						name="$STR_rhs_mag_9m124";
						value="rhs_mag_9m124";
						defaultValue="rhs_mag_9m124";
					};
					class rhs_mag_9m128_6
					{
						name="$STR_rhs_mag_9m128";
						value="rhs_mag_9m128";
						defaultValue="rhs_mag_9m128";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #4. Max 28. Leave -1 for default loadout";
				property="rhs_ammoslot_4";
			};
			class sideskirt_unhide
			{
				property="sideskirt_unhide";
				control="CheckboxNumber";
				expression="[_this,_value,'%s'] call rhs_fnc_setHabarEden";
				defaultValue="-1";
			};
			class fbskirt_unhide: sideskirt_unhide
			{
				property="fbskirt_unhide";
			};
			class ftskirt_unhide: sideskirt_unhide
			{
				property="ftskirt_unhide";
			};
			class log_unhide: sideskirt_unhide
			{
				property="log_unhide";
			};
			class rhs_disableHabar: sideskirt_unhide
			{
				property="rhs_disableHabar";
				expression="[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
				defaultValue="0";
			};
			class rhs_snorkel: rhs_disableHabar
			{
				property="rhs_snorkel";
				expression="_this  animate ['snorkel_unhide',_value];_this  animate ['snorkel_unhide2',_value];_this animate ['snorkel_hide',1-_value];";
			};
			class rhs_searchlight: rhs_disableHabar
			{
				property="rhs_searchlight";
				control="Checkbox";
				expression="[_this,_value] call rhs_fnc_t80_searchlightTexture ";
			};
		};
		rhs_randomizedHabar[]=
		{
			"log_unhide",
			"sideskirt_unhide",
			"fbskirt_unhide",
			"ftskirt_unhide"
		};
		wheelCircumference=2.312;
		damageResistance=0.02;
		threat[]={0.89999998,0.80000001,0.2};
		driveOnComponent[]=
		{
			"Slide"
		};
		armor=500;
		armorStructural=220;
		explosionShielding=100;
		minTotalDamageThreshold=0.5;
		fireResistance=-1;
		class ViewOptics: ViewOptics
		{
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class HitPoints: HitPoints
		{
			class Armor_Composite_65
			{
				armor=999;
				material=-1;
				name="Armor_CE_65_Hit";
				armorComponent="Armor_CE_65";
				simulation="RHS_Composite_65";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class Armor_Composite_70
			{
				armor=999;
				material=-1;
				name="Armor_CE_70_Hit";
				armorComponent="Armor_CE_70";
				simulation="RHS_Composite_70";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class Armor_Composite_75
			{
				armor=999;
				material=-1;
				name="Armor_CE_75_Hit";
				armorComponent="Armor_CE_75";
				simulation="RHS_Composite_75";
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
			class Armor_Composite_95
			{
				armor=999;
				material=-1;
				name="Armor_CE_95_Hit";
				armorComponent="Armor_CE_95";
				simulation="RHS_Composite_95";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class HitHull: HitHull
			{
				armor=-100;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.13;
			};
			class HitEngine: HitEngine
			{
				armor=-150;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0099999998;
				radius=0.23;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
		};
		armorLights=0.1;
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="RHS_ExhaustEffectTankGasBack";
			};
			class Exhaust2
			{
				position="vyfuk start 2";
				direction="vyfuk konec 2";
				effect="RHS_ExhaustEffectTankGasBack";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ejectDeadGunner=0;
				startEngine=0;
				armorStructural=60;
				class HitPoints
				{
					class HitTurret
					{
						armor=-100;
						material=-1;
						name="vez";
						passThrough=0;
						minimalHit=0.0099999998;
						explosionShielding=0.0089999996;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=-150;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=-0.2;
						explosionShielding=0.001;
						radius=0.12;
					};
				};
				weapons[]=
				{
					"rhs_weap_2a46_2",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm22_10",
					"rhs_mag_3bk18m_8",
					"rhs_mag_3of26_6",
					"rhs_mag_9m112m_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				memoryPointGun="Mgun";
				selectionFireAnim="zasleh1";
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"OpticsBlur2",
					"OpticsCHAbera3"
				};
				nightVision=1;
				class OpticsIn
				{
					class day1: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.179487;
						minFov=0.179487;
						maxFov=0.179487;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
					class day2: day1
					{
						initFov=0.077777803;
						minFov=0.077777803;
						maxFov=0.077777803;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
					class Periscope: day1
					{
						initFov=0.466667;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera2"
						};
					};
					class night3: day1
					{
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						visionMode[]=
						{
							"NVG"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
				};
				minElev=-4;
				maxElev=18;
				minTurn=-360;
				maxTurn=360;
				initElev=5;
				initTurn=13;
				lockWhenDriverOut=1;
				maxHorizontalRotSpeed=0.40000001;
				maxVerticalRotSpeed=0.07;
				radarType=0;
				canUseScanners=0;
				allowTabLock=0;
				stabilizedInAxes=3;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-65;
					maxAngleX=85;
					initAngleY=0;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
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
					class VehicleSystemsDisplayManagerComponentRight
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
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]={};
						magazines[]={};
						ejectDeadGunner=0;
						minElev=-15;
						maxElev=80;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						lockWhenDriverOut=0;
						LodTurnedOut=1200;
						LodOpticsOut=1200;
						animationSourceHatch="HatchCommander";
						nightVision=1;
						stabilizedInAxes=3;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
						canUseScanners=0;
						allowTabLock=0;
						class ViewGunner
						{
							initAngleX=5;
							minAngleX=-65;
							maxAngleX=85;
							initAngleY=0;
							minAngleY=-150;
							maxAngleY=150;
							initFov=0.69999999;
							minFov=0.25;
							maxFov=1.1;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.101;
							minFov=0.102;
							maxFov=0.102;
							visionMode[]=
							{
								"Normal"
							};
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initFov=0.14;
							};
							class Night: Wide
							{
								initFov=0.166667;
								visionMode[]=
								{
									"NVG"
								};
							};
							class Periscope: ViewOptics
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.25999999;
								minFov=0.25999999;
								maxFov=0.25999999;
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
							};
						};
						startEngine=0;
						selectionFireAnim="";
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
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
							class VehicleSystemsDisplayManagerComponentRight
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
						class HitPoints
						{
							class HitTurretCom
							{
								isTurret=1;
								armor=0.30000001;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
							class HitGunCom
							{
								isGun=1;
								armor=0.30000001;
								material=-1;
								name="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
						};
					};
					class CommanderMG: CommanderOptics
					{
						proxyindex=2;
						dontCreateAi=1;
						cantCreateAI=1;
						stabilizedInAxes=0;
						canHideGunner=0;
						viewGunnerShadow=0;
						LodTurnedOut=1200;
						canUseScanners=0;
						allowTabLock=0;
						soundAttenuationTurret="HeliAttenuationGunner";
						maxVerticalRotSpeed=0.34999999;
						minElev=-5;
						maxElev=45;
						initElev=0;
						initTurn=0;
						LODOpticsOut=1200;
						LODOpticsIn=1200;
						weapons[]=
						{
							"rhs_weap_nsvt_t80"
						};
						magazines[]=
						{
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50"
						};
						selectionFireAnim="zasleh3";
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.58333302;
								minFov=0.58333302;
								maxFov=0.58333302;
							};
						};
						class HitPoints
						{
							class HitTurretNSVT
							{
								isTurret=1;
								armor=0.30000001;
								material=-1;
								name="nsvt_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
							class HitGunNSVT
							{
								isGun=1;
								armor=0.30000001;
								material=-1;
								name="nsvt_gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
						};
					};
				};
			};
		};
		selectionLeftOffset="pasanimL";
		selectionRightOffset="pasanimP";
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call RHS_fnc_t80_init;";
				fired="_this call RHS_fnc_t80_autoloader;";
				killed="[_this select 0,'rhs_Wreck_T80_turret_F'] call rhs_fnc_turretBlow";
				engine="[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay";
				getOut="_this call rhs_fnc_t72_hatch;_this call rhs_fnc_hatchAbandon";
			};
			class RHS_HitSpall
			{
				hitpart="_this call rhs_fnc_hitSpall";
			};
		};
		class Damage
		{
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft
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
			class VehicleSystemsDisplayManagerComponentRight
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
	class rhs_t80b: rhs_tank_base
	{
		typicalCargo[]=
		{
			"rhs_msv_crew",
			"rhs_msv_crew",
			"rhs_msv_crew"
		};
		smokeLauncherGrenadeCount=6;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=60;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initTurn=-13;
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type
			{
			};
			class rhs_decalPlatoon: rhs_decalPlatoon
			{
			};
			class rhs_decalArmy_type: rhs_decalArmy_type
			{
			};
			class rhs_decalArmy: rhs_decalArmy
			{
			};
			class rhs_decalHonor_type: rhs_decalHonor_type
			{
			};
			class rhs_decalHonor: rhs_decalHonor
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
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
			};
			class rhs_ammoslot_4: rhs_ammoslot_4
			{
			};
			class sideskirt_unhide: sideskirt_unhide
			{
			};
			class fbskirt_unhide: fbskirt_unhide
			{
			};
			class ftskirt_unhide: ftskirt_unhide
			{
			};
			class log_unhide: log_unhide
			{
			};
			class kshield_unhide: sideskirt_unhide
			{
				expression="[_this,1-_value,'%s'] call rhs_fnc_setHabarEden";
				property="kshield_unhide";
			};
			class rhs_disableHabar: rhs_disableHabar
			{
			};
			class rhs_snorkel: rhs_snorkel
			{
			};
			class rhs_searchlight: rhs_searchlight
			{
			};
		};
	};
	class rhs_t80bk: rhs_t80b
	{
		hiddenSelectionsMaterials[]=
		{
			"rhsafrf\addons\rhs_t80\data\materials\hull_g.rvmat",
			"rhsafrf\addons\rhs_t80\data\materials\turret_bk.rvmat",
			"",
			"rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_3bm22_14",
					"rhs_mag_3bk18m_8",
					"rhs_mag_3of26_6",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
					class CommanderMG: CommanderMG
					{
						maxElev=25;
					};
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type
			{
			};
			class rhs_decalPlatoon: rhs_decalPlatoon
			{
			};
			class rhs_decalArmy_type: rhs_decalArmy_type
			{
			};
			class rhs_decalArmy: rhs_decalArmy
			{
			};
			class rhs_decalHonor_type: rhs_decalHonor_type
			{
			};
			class rhs_decalHonor: rhs_decalHonor
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
			class sideskirt_unhide: sideskirt_unhide
			{
			};
			class fbskirt_unhide: fbskirt_unhide
			{
			};
			class ftskirt_unhide: ftskirt_unhide
			{
			};
			class log_unhide: log_unhide
			{
			};
			class kshield_unhide: sideskirt_unhide
			{
				expression="[_this,_value,'%s'] call rhs_fnc_setHabarEden";
				property="kshield_unhide";
			};
			class rhs_disableHabar: rhs_disableHabar
			{
			};
			class rhs_snorkel: rhs_snorkel
			{
			};
			class rhs_searchlight: rhs_searchlight
			{
			};
		};
	};
	class rhs_t80bv: rhs_t80b
	{
		armor=550;
		smokeLauncherGrenadeCount=6;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=60;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_3bm22_10",
					"rhs_mag_3bk18m_8",
					"rhs_mag_3of26_6",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_9m112m_4",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				armorLights=0.1;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]={};
						magazines[]={};
						ejectDeadGunner=0;
						minElev=-15;
						maxElev=80;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						lockWhenDriverOut=0;
						LodTurnedOut=1200;
						animationSourceHatch="HatchCommander";
						nightVision=1;
						stabilizedInAxes=3;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
						class ViewGunner
						{
							initAngleX=5;
							minAngleX=-65;
							maxAngleX=85;
							initAngleY=0;
							minAngleY=-150;
							maxAngleY=150;
							initFov=0.69999999;
							minFov=0.25;
							maxFov=1.1;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.101;
							minFov=0.102;
							maxFov=0.102;
							visionMode[]=
							{
								"Normal"
							};
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initFov=0.14;
							};
							class Night: Wide
							{
								initFov=0.166667;
								visionMode[]=
								{
									"NVG"
								};
							};
							class Periscope: ViewOptics
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.25999999;
								minFov=0.25999999;
								maxFov=0.25999999;
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
							};
						};
						startEngine=0;
						selectionFireAnim="";
					};
					class CommanderMG: CommanderOptics
					{
						proxyindex=2;
						dontCreateAi=1;
						cantCreateAI=1;
						stabilizedInAxes=0;
						canHideGunner=0;
						viewGunnerShadow=0;
						LodTurnedOut=1200;
						maxVerticalRotSpeed=0.34999999;
						minElev=-5;
						maxElev=45;
						initElev=0;
						initTurn=0;
						weapons[]=
						{
							"rhs_weap_nsvt_t80"
						};
						magazines[]=
						{
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50"
						};
						selectionFireAnim="zasleh3";
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.58333302;
								minFov=0.58333302;
								maxFov=0.58333302;
							};
						};
					};
				};
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_2_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_3_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_4_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_5_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_6_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_7_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_8_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_9_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_10_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_11_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_12_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_13_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_14_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_15_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_16_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_17_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_18_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_19_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_20_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_21_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_22_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_23_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_25_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e27";
				armorComponent="e27";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e28";
				armorComponent="e28";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_decalArmy_type: rhs_decalArmy_type
			{
			};
			class rhs_decalArmy: rhs_decalArmy
			{
			};
			class rhs_decalHonor_type: rhs_decalHonor_type
			{
			};
			class rhs_decalHonor: rhs_decalHonor
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
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
			};
			class rhs_ammoslot_4: rhs_ammoslot_4
			{
			};
			class sideskirt_unhide: sideskirt_unhide
			{
			};
			class fbskirt_unhide: fbskirt_unhide
			{
			};
			class ftskirt_unhide: ftskirt_unhide
			{
			};
			class log_unhide: log_unhide
			{
			};
			class kshield_unhide: sideskirt_unhide
			{
				expression="[_this,1-_value,'%s'] call rhs_fnc_setHabarEden";
				property="kshield_unhide";
			};
			class rhs_disableHabar: rhs_disableHabar
			{
			};
			class rhs_snorkel: rhs_snorkel
			{
			};
			class rhs_searchlight: rhs_searchlight
			{
			};
		};
	};
	class rhs_t80bvk: rhs_t80bv
	{
		hiddenSelectionsMaterials[]=
		{
			"rhsafrf\addons\rhs_t80\data\materials\hull_g.rvmat",
			"rhsafrf\addons\rhs_t80\data\materials\turret_bk.rvmat",
			"",
			"rhsafrf\addons\rhs_t80\data\materials\searchlight.rvmat"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_3bm22_14",
					"rhs_mag_3bk18m_8",
					"rhs_mag_3of26_6",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						LodTurnedOut=1200;
					};
					class CommanderMG: CommanderMG
					{
						LodTurnedOut=1200;
						maxElev=25;
					};
				};
			};
		};
		smokeLauncherGrenadeCount=6;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=60;
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_decalArmy_type: rhs_decalArmy_type
			{
			};
			class rhs_decalArmy: rhs_decalArmy
			{
			};
			class rhs_decalHonor_type: rhs_decalHonor_type
			{
			};
			class rhs_decalHonor: rhs_decalHonor
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
			class sideskirt_unhide: sideskirt_unhide
			{
			};
			class fbskirt_unhide: fbskirt_unhide
			{
			};
			class ftskirt_unhide: ftskirt_unhide
			{
			};
			class log_unhide: log_unhide
			{
			};
			class kshield_unhide: sideskirt_unhide
			{
				expression="[_this,_value,'%s'] call rhs_fnc_setHabarEden";
				property="kshield_unhide";
			};
			class rhs_disableHabar: rhs_disableHabar
			{
			};
			class rhs_snorkel: rhs_snorkel
			{
			};
			class rhs_searchlight: rhs_searchlight
			{
			};
		};
	};
	class rhs_t80: rhs_t80b
	{
		armor=500;
		class textureSources: textureSources
		{
			class standard
			{
			};
		};
		class Damage
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a26",
					"rhs_weap_pkt",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm17_14",
					"rhs_mag_3bk14_8",
					"rhs_mag_3of26_6",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				class OpticsIn: OpticsIn
				{
					class Day: ViewOptics
					{
						minFov=0.077777803;
						maxFov=0.077777803;
						initFov=0.077777803;
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
					};
					class Periscope: Day
					{
						initFov=0.46666601;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera2"
						};
					};
					class Night: Day
					{
						initFov=0.1;
						visionMode[]=
						{
							"NVG"
						};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]={};
						magazines[]={};
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						LodTurnedOut=0;
						LODOpticsIn=0;
						lockWhenDriverOut=1;
					};
					delete CommanderMG;
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_decalArmy_type: rhs_decalArmy_type
			{
			};
			class rhs_decalArmy: rhs_decalArmy
			{
			};
			class rhs_decalHonor_type: rhs_decalHonor_type
			{
			};
			class rhs_decalHonor: rhs_decalHonor
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
				class values
				{
					class rhs_mag_3bm17_10
					{
						name="$STR_rhs_mag_3bm17";
						value="rhs_mag_3bm17";
						defaultValue="rhs_mag_3bm17";
					};
					class rhs_mag_3bm9_10
					{
						name="$STR_rhs_mag_3bm9";
						value="rhs_mag_3bm9";
						defaultValue="rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name="$STR_rhs_mag_3bm12";
						value="rhs_mag_3bm12";
						defaultValue="rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name="$STR_rhs_mag_3bm15";
						value="rhs_mag_3bm15";
						defaultValue="rhs_mag_3bm15";
					};
					class rhs_mag_3bm22_10
					{
						name="$STR_rhs_mag_3bm22";
						value="rhs_mag_3bm22";
						defaultValue="rhs_mag_3bm22";
					};
					class rhs_mag_3bm26_10
					{
						name="$STR_rhs_mag_3bm26";
						value="rhs_mag_3bm26";
						defaultValue="rhs_mag_3bm26";
					};
				};
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
				class values
				{
					class rhs_mag_3bk14_8
					{
						name="$STR_rhs_mag_3bk14";
						value="rhs_mag_3bk14";
						defaultValue="rhs_mag_3bk14";
					};
					class rhs_mag_3bk12_8
					{
						name="$STR_rhs_mag_3bk12";
						value="rhs_mag_3bk12";
						defaultValue="rhs_mag_3bk12";
					};
					class rhs_mag_3bk18_8
					{
						name="$STR_rhs_mag_3bk18";
						value="rhs_mag_3bk18";
						defaultValue="rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name="$STR_rhs_mag_3bk18m";
						value="rhs_mag_3bk18m";
						defaultValue="rhs_mag_3bk18m";
					};
				};
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
			class sideskirt_unhide: sideskirt_unhide
			{
			};
			class fbskirt_unhide: fbskirt_unhide
			{
			};
			class ftskirt_unhide: ftskirt_unhide
			{
			};
			class log_unhide: log_unhide
			{
			};
			class kshield_unhide: sideskirt_unhide
			{
				expression="[_this,_value,'%s'] call rhs_fnc_setHabarEden";
				property="kshield_unhide";
			};
			class rhs_disableHabar: rhs_disableHabar
			{
			};
			class rhs_snorkel: rhs_snorkel
			{
			};
			class rhs_searchlight: rhs_searchlight
			{
			};
		};
	};
	class rhs_t80a: rhs_t80bv
	{
		accuracy=0.80000001;
		armor=600;
		simulation="tankX";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=19.5;
		RHS_fuelCapacity=1540;
		brakeIdleSpeed=1.78;
		maxSpeed=65;
		engineMOI=20;
		enginePower=895;
		peakTorque=4393;
		minOmega=114.72;
		maxOmega=350.85999;
		idleRPM=1200;
		redRPM=3255;
		torqueCurve[]=
		{
			{0.30722001,0},
			{0.44761899,0.94855499},
			{0.52657402,0.89710897},
			{0.60553002,0.84566402},
			{0.68448502,0.794218},
			{0.76344103,0.742773},
			{0.84239602,0.69132698},
			{1.90292,0}
		};
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineBrakeCoef=0;
		tracksSpeed=1.4;
		tankTurnForce=850000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=3.3;
		accelAidForceYOffset=-4;
		accelAidForceSpd=2.8299999;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=30;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.33333299,0.33333299,0,0.95999998,0.33333299,0.98333299,0.69999999,0.98333299,0.73333299,0.98333299,0.73333299};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-9.3599997,
				"N",
				0,
				"D1",
				4.3800001,
				"D2",
				2.1600001,
				"D3",
				1.46,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				12.85
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.89999998;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				steering=0;
				width=0.36000001;
				mass=188;
				MOI=14.0783;
				maxBrakeTorque=10000;
				sprungMass=3500;
				springStrength=354000;
				springDamperRate=11000;
				maxDroop=0.14;
				maxCompression=0.14;
				dampingRate=1385;
				dampingRateInAir=1385;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=72000;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
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
		class textureSources: textureSources
		{
			class standard
			{
			};
		};
		class Damage
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a46m_2",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm42_10",
					"rhs_mag_3bk21_8",
					"rhs_mag_3of26_6",
					"rhs_mag_9m119_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				class OpticsIn
				{
					class day1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.179487;
						minFov=0.179487;
						maxFov=0.179487;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
					class day2: day1
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Periscope: day1
					{
						initFov=0.466667;
						minFov=0.466667;
						maxFov=0.466667;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera2"
						};
					};
					class night3: day1
					{
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						visionMode[]=
						{
							"NVG"
						};
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"rhs_weap_nsvt_t80"
						};
						magazines[]=
						{
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50"
						};
						minElev=-25;
						maxElev=60;
						initElev=0;
						LodTurnedOut=0;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"BWTV",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
						class OpticsIn
						{
							class day1aa
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.29166701;
								minFov=0.29166701;
								maxFov=0.29166701;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsEffect[]=
								{
									"OpticsBlur2",
									"OpticsCHAbera3"
								};
							};
							class day1: day1aa
							{
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
									"BWTV",
									"OpticsBlur2",
									"OpticsCHAbera3"
								};
							};
							class day2: day1aa
							{
								initFov=0.087499999;
								minFov=0.087499999;
								maxFov=0.087499999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera3"
								};
							};
							class night3: day1
							{
								initFov=0.1;
								minFov=0.1;
								maxFov=0.1;
								visionMode[]=
								{
									"NVG"
								};
								gunnerOpticsEffect[]=
								{
									"TankCommanderOptics1",
									"OpticsBlur2",
									"OpticsCHAbera3"
								};
							};
						};
						personTurretAction="RHS_passenger_inside_6";
						isPersonTurret=1;
						selectionFireAnim="zasleh3";
						lockWhenDriverOut=1;
						maxHorizontalRotSpeed=0.89999998;
						maxVerticalRotSpeed=0.47;
					};
					delete CommanderMG;
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_decalArmy_type: rhs_decalArmy_type
			{
			};
			class rhs_decalArmy: rhs_decalArmy
			{
			};
			class rhs_decalHonor_type: rhs_decalHonor_type
			{
			};
			class rhs_decalHonor: rhs_decalHonor
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
				class values
				{
					class rhs_mag_3bm42_10
					{
						name="$STR_rhs_mag_3bm42";
						value="rhs_mag_3bm42";
						defaultValue="rhs_mag_3bm42";
					};
					class rhs_mag_3bm9_10
					{
						name="$STR_rhs_mag_3bm9";
						value="rhs_mag_3bm9";
						defaultValue="rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name="$STR_rhs_mag_3bm12";
						value="rhs_mag_3bm12";
						defaultValue="rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name="$STR_rhs_mag_3bm15";
						value="rhs_mag_3bm15";
						defaultValue="rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name="$STR_rhs_mag_3bm17";
						value="rhs_mag_3bm17";
						defaultValue="rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name="$STR_rhs_mag_3bm22";
						value="rhs_mag_3bm22";
						defaultValue="rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name="$STR_rhs_mag_3bm29";
						value="rhs_mag_3bm29";
						defaultValue="rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name="$STR_rhs_mag_3bm26";
						value="rhs_mag_3bm26";
						defaultValue="rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name="$STR_rhs_mag_3bm32";
						value="rhs_mag_3bm32";
						defaultValue="rhs_mag_3bm32";
					};
					class rhs_mag_3bm42m_10
					{
						name="$STR_rhs_mag_3bm42m";
						value="rhs_mag_3bm42m";
						defaultValue="rhs_mag_3bm42m";
					};
					class rhs_mag_3bm46_10
					{
						name="$STR_rhs_mag_3bm46";
						value="rhs_mag_3bm46";
						defaultValue="rhs_mag_3bm46";
					};
				};
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
				class values
				{
					class rhs_mag_3bk21_8
					{
						name="$STR_rhs_mag_3bk21";
						value="rhs_mag_3bk21";
						defaultValue="rhs_mag_3bk21";
					};
					class rhs_mag_3bk12_8
					{
						name="$STR_rhs_mag_3bk12";
						value="rhs_mag_3bk12";
						defaultValue="rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name="$STR_rhs_mag_3bk14";
						value="rhs_mag_3bk14";
						defaultValue="rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name="$STR_rhs_mag_3bk18";
						value="rhs_mag_3bk18";
						defaultValue="rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name="$STR_rhs_mag_3bk18m";
						value="rhs_mag_3bk18m";
						defaultValue="rhs_mag_3bk18m";
					};
					class rhs_mag_3bk29_8
					{
						name="$STR_rhs_mag_3bk29";
						value="rhs_mag_3bk29";
						defaultValue="rhs_mag_3bk29";
					};
					class rhs_mag_3bk31_8
					{
						name="$STR_rhs_mag_3bk31";
						value="rhs_mag_3bk31";
						defaultValue="rhs_mag_3bk31";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_2
			{
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
				class values
				{
					class rhs_mag_3of26_6
					{
						name="$STR_rhs_mag_3of26";
						value="rhs_mag_3of26";
						defaultValue="rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name="$STR_rhs_mag_3of11";
						value="rhs_mag_3of11";
						defaultValue="rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_3
			{
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
				class values
				{
					class rhs_mag_9m119_6
					{
						name="$STR_rhs_mag_9m119";
						value="rhs_mag_9m119";
						defaultValue="rhs_mag_9m119";
					};
					class rhs_mag_9m119m_6
					{
						name="$STR_rhs_mag_9m119m";
						value="rhs_mag_9m119m";
						defaultValue="rhs_mag_9m119m";
					};
					class rhs_mag_9m119f_6
					{
						name="$STR_rhs_mag_9m119f";
						value="rhs_mag_9m119f";
						defaultValue="rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_4
			{
			};
			class sideskirt_unhide: sideskirt_unhide
			{
			};
			class fbskirt_unhide: fbskirt_unhide
			{
			};
			class ftskirt_unhide: ftskirt_unhide
			{
			};
			class log_unhide: log_unhide
			{
			};
			class rhs_disableHabar: rhs_disableHabar
			{
			};
			class rhs_snorkel: rhs_snorkel
			{
			};
			class rhs_searchlight: rhs_searchlight
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call RHS_fnc_t80_init;";
				fired="_this call RHS_fnc_t80_autoloader;";
				killed="[_this select 0,'rhs_Wreck_T80_turret_F'] call rhs_fnc_turretBlow";
				engine="_this spawn rhs_fnc_t80_snorkel_eh;[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay";
				getOut="_this call rhs_fnc_hatchAbandon";
			};
		};
	};
	class rhs_t80u: rhs_t80a
	{
		rhs_hasSnorkel=0;
		simulation="tankX";
		normalSpeedForwardCoef=0.5;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=19.5;
		RHS_fuelCapacity=1540;
		brakeIdleSpeed=1.78;
		maxSpeed=70;
		engineMOI=20;
		enginePower=932;
		peakTorque=4393;
		minOmega=114.72;
		maxOmega=350.85999;
		idleRPM=1200;
		redRPM=3255;
		torqueCurve[]=
		{
			{0.30722001,0},
			{0.44761899,0.94855499},
			{0.52657402,0.89710897},
			{0.60553002,0.84566402},
			{0.68448502,0.794218},
			{0.76344103,0.742773},
			{0.84239602,0.69132698},
			{1.90292,0}
		};
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineBrakeCoef=0;
		tracksSpeed=1.4;
		tankTurnForce=650000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=3.3;
		accelAidForceYOffset=-4;
		accelAidForceSpd=2.8299999;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=30;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.33333299,0.33333299,0,0.95999998,0.33333299,0.98333299,0.69999999,0.98333299,0.73333299,0.98333299,0.73333299};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-10.36,
				"N",
				0,
				"D1",
				4.3800001,
				"D2",
				2.1600001,
				"D3",
				1.46,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				11.55
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.89999998;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				steering=0;
				width=0.396;
				mass=188;
				MOI=14.0783;
				maxBrakeTorque=10000;
				sprungMass=3833.3301;
				springStrength=254000;
				springDamperRate=11000;
				maxDroop=0.14;
				maxCompression=0.14;
				dampingRate=1364;
				dampingRateInAir=1364;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=72000;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
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
		enableGPS=1;
		reportOwnPosition=1;
		class textureSources: textureSources
		{
			class standard
			{
			};
			class tricolor: standard
			{
			};
			class r1: standard
			{
			};
			class r2: standard
			{
			};
			class r3: standard
			{
			};
			class r4: standard
			{
			};
			class r5: standard
			{
			};
		};
		class Damage
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						personTurretAction="RHS_passenger_inside_6";
						isPersonTurret=1;
						weapons[]={};
						LodTurnedOut=0;
						class OpticsIn
						{
							class day1
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal"
								};
							};
							class day2: day1
							{
								initFov=0.087499999;
								minFov=0.087499999;
								maxFov=0.087499999;
								visionMode[]=
								{
									"Normal"
								};
							};
							class night3: day1
							{
								initFov=0.1;
								minFov=0.1;
								maxFov=0.1;
								visionMode[]=
								{
									"NVG"
								};
							};
						};
					};
				};
				weapons[]=
				{
					"rhs_weap_2a46m_4",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_10",
					"rhs_mag_3bk31_8",
					"rhs_mag_3of26_6",
					"rhs_mag_9m119_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				armorLights=0.1;
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_2_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_3_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_4_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_5_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_6_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_7_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_8_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_9_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_10_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_11_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_12_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_13_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_14_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_15_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_16_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_17_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_18_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_19_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_20_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_21_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_22_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_23_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_25_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e27";
				armorComponent="e27";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e28";
				armorComponent="e28";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_29_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e29";
				armorComponent="e29";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_30_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e30";
				armorComponent="e30";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_31_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e31";
				armorComponent="e31";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_32_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_33_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e33";
				armorComponent="e33";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_34_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e34";
				armorComponent="e34";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_35_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e35";
				armorComponent="e35";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class smoketube_4_hitpoint
			{
				armor=1.2;
				material=-1;
				name="smoketube4";
				passThrough=0;
				explosionShielding=0.0070000002;
				minimalHit=0.079999998;
				depends="era_23_hitpoint";
			};
			class smoketube_3_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube3";
				depends="era_23_hitpoint + smoketube_4_hitpoint";
			};
			class smoketube_2_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube2";
				depends="era_22_hitpoint + smoketube_3_hitpoint";
			};
			class smoketube_1_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube1";
				depends="era_22_hitpoint + smoketube_2_hitpoint";
			};
			class smoketube_8_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube8";
				depends="era_28_hitpoint";
			};
			class smoketube_7_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube7";
				depends="era_28_hitpoint + smoketube_8_hitpoint";
			};
			class smoketube_6_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube6";
				depends="era_27_hitpoint + smoketube_7_hitpoint";
			};
			class smoketube_5_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube5";
				depends="era_27_hitpoint + smoketube_6_hitpoint";
			};
			class mud_1_hitpoint
			{
				armor=0.69999999;
				material=-1;
				name="mud1";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=0.0070000002;
				depends="era_21_hitpoint";
			};
			class mud_2_hitpoint: mud_1_hitpoint
			{
				name="mud2";
				depends="era_22_hitpoint";
			};
			class mud_3_hitpoint: mud_1_hitpoint
			{
				name="mud3";
				depends="era_23_hitpoint";
			};
			class mud_4_hitpoint: mud_3_hitpoint
			{
				name="mud4";
				depends="era_24_hitpoint";
			};
			class mud_5_hitpoint: mud_1_hitpoint
			{
				name="mud5";
				depends="era_26_hitpoint";
			};
			class mud_6_hitpoint: mud_5_hitpoint
			{
				name="mud6";
				depends="era_27_hitpoint";
			};
			class mud_7_hitpoint: mud_1_hitpoint
			{
				name="mud7";
				depends="era_28_hitpoint";
			};
			class mud_8_hitpoint: mud_7_hitpoint
			{
				name="mud8";
				depends="era_29_hitpoint";
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_decalHonor_type: rhs_decalHonor_type
			{
			};
			class rhs_decalHonor: rhs_decalHonor
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
				class values
				{
					class rhs_mag_3bm46_10
					{
						name="$STR_rhs_mag_3bm46";
						value="rhs_mag_3bm46";
						defaultValue="rhs_mag_3bm46";
					};
					class rhs_mag_3bm9_10
					{
						name="$STR_rhs_mag_3bm9";
						value="rhs_mag_3bm9";
						defaultValue="rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name="$STR_rhs_mag_3bm12";
						value="rhs_mag_3bm12";
						defaultValue="rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name="$STR_rhs_mag_3bm15";
						value="rhs_mag_3bm15";
						defaultValue="rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name="$STR_rhs_mag_3bm17";
						value="rhs_mag_3bm17";
						defaultValue="rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name="$STR_rhs_mag_3bm22";
						value="rhs_mag_3bm22";
						defaultValue="rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name="$STR_rhs_mag_3bm29";
						value="rhs_mag_3bm29";
						defaultValue="rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name="$STR_rhs_mag_3bm26";
						value="rhs_mag_3bm26";
						defaultValue="rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name="$STR_rhs_mag_3bm32";
						value="rhs_mag_3bm32";
						defaultValue="rhs_mag_3bm32";
					};
					class rhs_mag_3bm42_10
					{
						name="$STR_rhs_mag_3bm42";
						value="rhs_mag_3bm42";
						defaultValue="rhs_mag_3bm42";
					};
					class rhs_mag_3bm42m_10
					{
						name="$STR_rhs_mag_3bm42m";
						value="rhs_mag_3bm42m";
						defaultValue="rhs_mag_3bm42m";
					};
				};
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
				class values
				{
					class rhs_mag_3bk31_8
					{
						name="$STR_rhs_mag_3bk31";
						value="rhs_mag_3bk31";
						defaultValue="rhs_mag_3bk31";
					};
					class rhs_mag_3bk12_8
					{
						name="$STR_rhs_mag_3bk12";
						value="rhs_mag_3bk12";
						defaultValue="rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name="$STR_rhs_mag_3bk14";
						value="rhs_mag_3bk14";
						defaultValue="rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name="$STR_rhs_mag_3bk18";
						value="rhs_mag_3bk18";
						defaultValue="rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name="$STR_rhs_mag_3bk18m";
						value="rhs_mag_3bk18m";
						defaultValue="rhs_mag_3bk18m";
					};
					class rhs_mag_3bk21_8
					{
						name="$STR_rhs_mag_3bk21";
						value="rhs_mag_3bk21";
						defaultValue="rhs_mag_3bk21";
					};
					class rhs_mag_3bk29_8
					{
						name="$STR_rhs_mag_3bk29";
						value="rhs_mag_3bk29";
						defaultValue="rhs_mag_3bk29";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_2
			{
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
				class values
				{
					class rhs_mag_3of26_6
					{
						name="$STR_rhs_mag_3of26";
						value="rhs_mag_3of26";
						defaultValue="rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name="$STR_rhs_mag_3of11";
						value="rhs_mag_3of11";
						defaultValue="rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_3
			{
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
				class values
				{
					class rhs_mag_9m119m_6
					{
						name="$STR_rhs_mag_9m119m";
						value="rhs_mag_9m119m";
						defaultValue="rhs_mag_9m119m";
					};
					class rhs_mag_9m119_6
					{
						name="$STR_rhs_mag_9m119";
						value="rhs_mag_9m119";
						defaultValue="rhs_mag_9m119";
					};
					class rhs_mag_9m119f_6
					{
						name="$STR_rhs_mag_9m119f";
						value="rhs_mag_9m119f";
						defaultValue="rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_4
			{
			};
			class rhs_searchlight: rhs_searchlight
			{
			};
			class rhs_hideNSVT
			{
				property="rhs_hideNSVT";
				control="CheckboxNumber";
				expression="_this animate ['nsvtHide',_value,true]";
				defaultValue="0";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call RHS_fnc_t80_init;";
				fired="_this call RHS_fnc_t80_autoloader;";
				killed="[_this select 0,'rhs_Wreck_T80u_turret_F'] call rhs_fnc_turretBlow";
				engine="[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay";
				getOut="_this call rhs_fnc_hatchAbandon";
			};
		};
	};
	class rhs_t80uk: rhs_t80u
	{
		rhs_aps_shtora=1;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call RHS_fnc_t80_init; _this spawn RHS_fnc_shtoraInit;";
				incomingmissile="_this call RHS_fnc_shtoraIncomingMissileEH;";
			};
		};
		lockDetectionSystem=4;
		class textureSources: textureSources
		{
			class standard
			{
			};
			class tricolor: standard
			{
			};
			class r1: standard
			{
			};
			class r2: standard
			{
			};
			class r3: standard
			{
			};
			class r4: standard
			{
			};
			class r5: standard
			{
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_2_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_3_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_4_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_5_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_6_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_7_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_8_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_9_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_10_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_11_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_12_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_13_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_14_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_15_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_16_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_17_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_18_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_19_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_20_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_21_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_22_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_23_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_25_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e27";
				armorComponent="e27";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e28";
				armorComponent="e28";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_29_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e29";
				armorComponent="e29";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_30_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e30";
				armorComponent="e30";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_31_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e31";
				armorComponent="e31";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_32_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_33_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e33";
				armorComponent="e33";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_34_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e34";
				armorComponent="e34";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_35_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e35";
				armorComponent="e35";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_36_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e36";
				armorComponent="e36";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class smoketube_12_hitpoint
			{
				armor=1.2;
				material=-1;
				name="smoketube12";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=0.0070000002;
				depends="era_29_hitpoint";
			};
			class smoketube_9_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube2";
				depends="era_22_hitpoint";
			};
			class smoketube_5_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube1";
				depends="era_21_hitpoint + smoketube_9_hitpoint";
			};
			class smoketube_11_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube11";
				depends="era_21_hitpoint + smoketube_5_hitpoint";
			};
			class smoketube_3_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube3";
				depends="era_22_hitpoint + smoketube_9_hitpoint";
			};
			class smoketube_7_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube7";
				depends="era_23_hitpoint + smoketube_3_hitpoint";
			};
			class smoketube_1_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube7";
				depends="era_23_hitpoint + smoketube_7_hitpoint";
			};
			class smoketube_6_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube6";
				depends="era_29_hitpoint + smoketube_12_hitpoint";
			};
			class smoketube_10_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube10";
				depends="era_28_hitpoint + smoketube_6_hitpoint";
			};
			class smoketube_4_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube4";
				depends="era_28_hitpoint + smoketube_10_hitpoint";
			};
			class smoketube_8_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube8";
				depends="era_27_hitpoint + smoketube_4_hitpoint";
			};
			class smoketube_2_hitpoint: smoketube_1_hitpoint
			{
				name="smoketube8";
				depends="era_27_hitpoint + smoketube_8_hitpoint";
			};
		};
		class Damage
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a46m_4",
					"rhs_weap_pkt",
					"rhs_weap_902b",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_10",
					"rhs_mag_3bk31_8",
					"rhs_mag_3of26_6",
					"rhs_mag_9m119_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17_12",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"rhs_weap_dazzler"
						};
						magazines[]=
						{
							"rhs_mag_dazzler"
						};
					};
				};
				class OpticsIn
				{
					class Periscope: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.466667;
						maxFov=0.466667;
						initFov=0.466667;
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
					};
					class day1: Periscope
					{
						initFov=0.179487;
					};
					class day2: day1
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
						visionMode[]=
						{
							"Normal"
						};
					};
					class thermal1: day1
					{
						initFov=0.466667;
						minFov=0.466667;
						maxFov=0.466667;
						visionMode[]=
						{
							"Ti"
						};
						thermalMode[]={0,1};
					};
					class thermal2: thermal1
					{
						initFov=0.15555599;
						minFov=0.15555599;
						maxFov=0.15555599;
					};
					class thermal3: thermal2
					{
						initFov=0.038888901;
						minFov=0.038888901;
						maxFov=0.038888901;
					};
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
				class values
				{
					class rhs_mag_3bm46_10
					{
						name="$STR_rhs_mag_3bm46";
						value="rhs_mag_3bm46";
						defaultValue="rhs_mag_3bm46";
					};
					class rhs_mag_3bm9_10
					{
						name="$STR_rhs_mag_3bm9";
						value="rhs_mag_3bm9";
						defaultValue="rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name="$STR_rhs_mag_3bm12";
						value="rhs_mag_3bm12";
						defaultValue="rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name="$STR_rhs_mag_3bm15";
						value="rhs_mag_3bm15";
						defaultValue="rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name="$STR_rhs_mag_3bm17";
						value="rhs_mag_3bm17";
						defaultValue="rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name="$STR_rhs_mag_3bm22";
						value="rhs_mag_3bm22";
						defaultValue="rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name="$STR_rhs_mag_3bm29";
						value="rhs_mag_3bm29";
						defaultValue="rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name="$STR_rhs_mag_3bm26";
						value="rhs_mag_3bm26";
						defaultValue="rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name="$STR_rhs_mag_3bm32";
						value="rhs_mag_3bm32";
						defaultValue="rhs_mag_3bm32";
					};
					class rhs_mag_3bm42_10
					{
						name="$STR_rhs_mag_3bm42";
						value="rhs_mag_3bm42";
						defaultValue="rhs_mag_3bm42";
					};
					class rhs_mag_3bm42m_10
					{
						name="$STR_rhs_mag_3bm42m";
						value="rhs_mag_3bm42m";
						defaultValue="rhs_mag_3bm42m";
					};
				};
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
				class values
				{
					class rhs_mag_3bk31_8
					{
						name="$STR_rhs_mag_3bk31";
						value="rhs_mag_3bk31";
						defaultValue="rhs_mag_3bk31";
					};
					class rhs_mag_3bk12_8
					{
						name="$STR_rhs_mag_3bk12";
						value="rhs_mag_3bk12";
						defaultValue="rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name="$STR_rhs_mag_3bk14";
						value="rhs_mag_3bk14";
						defaultValue="rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name="$STR_rhs_mag_3bk18";
						value="rhs_mag_3bk18";
						defaultValue="rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name="$STR_rhs_mag_3bk18m";
						value="rhs_mag_3bk18m";
						defaultValue="rhs_mag_3bk18m";
					};
					class rhs_mag_3bk21_8
					{
						name="$STR_rhs_mag_3bk21";
						value="rhs_mag_3bk21";
						defaultValue="rhs_mag_3bk21";
					};
					class rhs_mag_3bk29_8
					{
						name="$STR_rhs_mag_3bk29";
						value="rhs_mag_3bk29";
						defaultValue="rhs_mag_3bk29";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_2
			{
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
				class values
				{
					class rhs_mag_3of26_6
					{
						name="$STR_rhs_mag_3of26";
						value="rhs_mag_3of26";
						defaultValue="rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name="$STR_rhs_mag_3of11";
						value="rhs_mag_3of11";
						defaultValue="rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_3
			{
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
				class values
				{
					class rhs_mag_9m119m_6
					{
						name="$STR_rhs_mag_9m119m";
						value="rhs_mag_9m119m";
						defaultValue="rhs_mag_9m119m";
					};
					class rhs_mag_9m119_6
					{
						name="$STR_rhs_mag_9m119";
						value="rhs_mag_9m119";
						defaultValue="rhs_mag_9m119";
					};
					class rhs_mag_9m119f_6
					{
						name="$STR_rhs_mag_9m119f";
						value="rhs_mag_9m119f";
						defaultValue="rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_4
			{
			};
			class rhs_hideNSVT: rhs_hideNSVT
			{
			};
		};
	};
	class rhs_t80u45m: rhs_t80u
	{
	};
	class rhs_t80ue1: rhs_t80a
	{
		rhs_hasSnorkel=0;
		enableGPS=1;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		simulation="tankX";
		normalSpeedForwardCoef=0.5;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=19.5;
		RHS_fuelCapacity=1540;
		brakeIdleSpeed=1.78;
		maxSpeed=70;
		engineMOI=20;
		enginePower=932;
		peakTorque=4393;
		minOmega=114.72;
		maxOmega=350.85999;
		idleRPM=1200;
		redRPM=3255;
		torqueCurve[]=
		{
			{0.30722001,0},
			{0.44761899,0.94855499},
			{0.52657402,0.89710897},
			{0.60553002,0.84566402},
			{0.68448502,0.794218},
			{0.76344103,0.742773},
			{0.84239602,0.69132698},
			{1.90292,0}
		};
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineBrakeCoef=0;
		tracksSpeed=1.4;
		tankTurnForce=650000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=3.3;
		accelAidForceYOffset=-4;
		accelAidForceSpd=2.8299999;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=30;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.33333299,0.33333299,0,0.95999998,0.33333299,0.98333299,0.69999999,0.98333299,0.73333299,0.98333299,0.73333299};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-10.36,
				"N",
				0,
				"D1",
				4.3800001,
				"D2",
				2.1600001,
				"D3",
				1.46,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				11.55
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.89999998;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				steering=0;
				width=0.396;
				mass=188;
				MOI=14.0783;
				maxBrakeTorque=10000;
				sprungMass=3833.3301;
				springStrength=254000;
				springDamperRate=11000;
				maxDroop=0.14;
				maxCompression=0.14;
				dampingRate=1364;
				dampingRateInAir=1364;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=72000;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
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
		class textureSources: textureSources
		{
			class standard
			{
			};
			class tricolor: standard
			{
			};
			class r1: standard
			{
			};
			class r2: standard
			{
			};
			class r3: standard
			{
			};
			class r4: standard
			{
			};
			class r5: standard
			{
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
					};
				};
				weapons[]=
				{
					"rhs_weap_2a46m_4",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_10",
					"rhs_mag_3bk31_8",
					"rhs_mag_3of26_6",
					"rhs_mag_9m119_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				class OpticsIn
				{
					class Periscope
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.466667;
						maxFov=0.466667;
						initFov=0.466667;
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
					};
					class day1: Periscope
					{
						initFov=0.179487;
					};
					class day2: day1
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
						visionMode[]=
						{
							"Normal"
						};
					};
					class thermal1: day1
					{
						initFov=0.466667;
						minFov=0.466667;
						maxFov=0.466667;
						visionMode[]=
						{
							"Ti"
						};
						thermalMode[]={0,1};
					};
					class thermal2: thermal1
					{
						initFov=0.15555599;
						minFov=0.15555599;
						maxFov=0.15555599;
					};
					class thermal3: thermal2
					{
						initFov=0.038888901;
						minFov=0.038888901;
						maxFov=0.038888901;
					};
					class thermal4: thermal3
					{
						directionStabilized=1;
					};
				};
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_2_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_3_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_4_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_5_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_6_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_7_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_8_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_9_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_10_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_11_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_12_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_13_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_14_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_15_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_16_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_17_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_18_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_19_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_20_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_21_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_22_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_23_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_25_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e27";
				armorComponent="e27";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e28";
				armorComponent="e28";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_29_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e29";
				armorComponent="e29";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_30_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e30";
				armorComponent="e30";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_31_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e31";
				armorComponent="e31";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_32_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_33_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e33";
				armorComponent="e33";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_34_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e34";
				armorComponent="e34";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_35_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e35";
				armorComponent="e35";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_36_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e36";
				armorComponent="e36";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class smoketube_4_hitpoint
			{
				armor=1.2;
				material=-1;
				name="smoketube4";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=0.0070000002;
				depends="era_23_hitpoint";
			};
			class smoketube_3_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube3";
				depends="era_23_hitpoint + smoketube_4_hitpoint";
			};
			class smoketube_2_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube2";
				depends="era_22_hitpoint + smoketube_3_hitpoint";
			};
			class smoketube_1_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube1";
				depends="era_22_hitpoint + smoketube_2_hitpoint";
			};
			class smoketube_8_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube8";
				depends="era_28_hitpoint";
			};
			class smoketube_7_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube7";
				depends="era_28_hitpoint + smoketube_8_hitpoint";
			};
			class smoketube_6_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube6";
				depends="era_27_hitpoint + smoketube_7_hitpoint";
			};
			class smoketube_5_hitpoint: smoketube_4_hitpoint
			{
				name="smoketube5";
				depends="era_27_hitpoint + smoketube_6_hitpoint";
			};
			class mud_1_hitpoint
			{
				armor=0.80000001;
				material=-1;
				name="mud1";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=0.0070000002;
				depends="era_21_hitpoint";
			};
			class mud_2_hitpoint: mud_1_hitpoint
			{
				name="mud2";
				depends="era_22_hitpoint";
			};
			class mud_3_hitpoint: mud_1_hitpoint
			{
				name="mud3";
				depends="era_23_hitpoint";
			};
			class mud_4_hitpoint: mud_3_hitpoint
			{
				name="mud4";
				depends="era_24_hitpoint";
			};
			class mud_5_hitpoint: mud_1_hitpoint
			{
				name="mud5";
				depends="era_26_hitpoint";
			};
			class mud_6_hitpoint: mud_5_hitpoint
			{
				name="mud6";
				depends="era_27_hitpoint";
			};
			class mud_7_hitpoint: mud_1_hitpoint
			{
				name="mud7";
				depends="era_28_hitpoint";
			};
			class mud_8_hitpoint: mud_7_hitpoint
			{
				name="mud8";
				depends="era_29_hitpoint";
			};
		};
		class Damage
		{
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
				class values
				{
					class rhs_mag_3bm46_10
					{
						name="$STR_rhs_mag_3bm46";
						value="rhs_mag_3bm46";
						defaultValue="rhs_mag_3bm46";
					};
					class rhs_mag_3bm9_10
					{
						name="$STR_rhs_mag_3bm9";
						value="rhs_mag_3bm9";
						defaultValue="rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name="$STR_rhs_mag_3bm12";
						value="rhs_mag_3bm12";
						defaultValue="rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name="$STR_rhs_mag_3bm15";
						value="rhs_mag_3bm15";
						defaultValue="rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name="$STR_rhs_mag_3bm17";
						value="rhs_mag_3bm17";
						defaultValue="rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name="$STR_rhs_mag_3bm22";
						value="rhs_mag_3bm22";
						defaultValue="rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name="$STR_rhs_mag_3bm29";
						value="rhs_mag_3bm29";
						defaultValue="rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name="$STR_rhs_mag_3bm26";
						value="rhs_mag_3bm26";
						defaultValue="rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name="$STR_rhs_mag_3bm32";
						value="rhs_mag_3bm32";
						defaultValue="rhs_mag_3bm32";
					};
					class rhs_mag_3bm42_10
					{
						name="$STR_rhs_mag_3bm42";
						value="rhs_mag_3bm42";
						defaultValue="rhs_mag_3bm42";
					};
					class rhs_mag_3bm42m_10
					{
						name="$STR_rhs_mag_3bm42m";
						value="rhs_mag_3bm42m";
						defaultValue="rhs_mag_3bm42m";
					};
				};
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
				class values
				{
					class rhs_mag_3bk31_8
					{
						name="$STR_rhs_mag_3bk31";
						value="rhs_mag_3bk31";
						defaultValue="rhs_mag_3bk31";
					};
					class rhs_mag_3bk12_8
					{
						name="$STR_rhs_mag_3bk12";
						value="rhs_mag_3bk12";
						defaultValue="rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name="$STR_rhs_mag_3bk14";
						value="rhs_mag_3bk14";
						defaultValue="rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name="$STR_rhs_mag_3bk18";
						value="rhs_mag_3bk18";
						defaultValue="rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name="$STR_rhs_mag_3bk18m";
						value="rhs_mag_3bk18m";
						defaultValue="rhs_mag_3bk18m";
					};
					class rhs_mag_3bk21_8
					{
						name="$STR_rhs_mag_3bk21";
						value="rhs_mag_3bk21";
						defaultValue="rhs_mag_3bk21";
					};
					class rhs_mag_3bk29_8
					{
						name="$STR_rhs_mag_3bk29";
						value="rhs_mag_3bk29";
						defaultValue="rhs_mag_3bk29";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_2
			{
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
				class values
				{
					class rhs_mag_3of26_6
					{
						name="$STR_rhs_mag_3of26";
						value="rhs_mag_3of26";
						defaultValue="rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name="$STR_rhs_mag_3of11";
						value="rhs_mag_3of11";
						defaultValue="rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_3
			{
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
				class values
				{
					class rhs_mag_9m119m_6
					{
						name="$STR_rhs_mag_9m119m";
						value="rhs_mag_9m119m";
						defaultValue="rhs_mag_9m119m";
					};
					class rhs_mag_9m119_6
					{
						name="$STR_rhs_mag_9m119";
						value="rhs_mag_9m119";
						defaultValue="rhs_mag_9m119";
					};
					class rhs_mag_9m119f_6
					{
						name="$STR_rhs_mag_9m119f";
						value="rhs_mag_9m119f";
						defaultValue="rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_4
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call RHS_fnc_t80_init;";
				fired="_this call RHS_fnc_t80_autoloader;";
				killed="[_this select 0,'rhs_Wreck_T80U_turret_F'] call rhs_fnc_turretBlow";
				engine="[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay";
				getOut="_this call rhs_fnc_hatchAbandon";
			};
		};
	};
	class rhs_t80um: rhs_t80u
	{
		class textureSources: textureSources
		{
			class standard
			{
			};
			class tricolor: standard
			{
			};
			class r1: standard
			{
			};
			class r2: standard
			{
			};
			class r3: standard
			{
			};
			class r4: standard
			{
			};
			class r5: standard
			{
			};
		};
		class HitPoints: HitPoints
		{
			class era_36_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e36";
				armorComponent="e36";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
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
					};
				};
				class OpticsIn
				{
					class Periscope
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.466667;
						maxFov=0.466667;
						initFov=0.466667;
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
					};
					class day1: Periscope
					{
						initFov=0.179487;
					};
					class day2: day1
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
						visionMode[]=
						{
							"Normal"
						};
					};
					class thermal1: day1
					{
						initFov=0.466667;
						minFov=0.466667;
						maxFov=0.466667;
						visionMode[]=
						{
							"Ti"
						};
						thermalMode[]={0,1};
					};
					class thermal2: thermal1
					{
						initFov=0.15555599;
						minFov=0.15555599;
						maxFov=0.15555599;
					};
					class thermal3: thermal2
					{
						initFov=0.038888901;
						minFov=0.038888901;
						maxFov=0.038888901;
					};
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
				class values
				{
					class rhs_mag_3bm46_10
					{
						name="$STR_rhs_mag_3bm46";
						value="rhs_mag_3bm46";
						defaultValue="rhs_mag_3bm46";
					};
					class rhs_mag_3bm9_10
					{
						name="$STR_rhs_mag_3bm9";
						value="rhs_mag_3bm9";
						defaultValue="rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name="$STR_rhs_mag_3bm12";
						value="rhs_mag_3bm12";
						defaultValue="rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name="$STR_rhs_mag_3bm15";
						value="rhs_mag_3bm15";
						defaultValue="rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name="$STR_rhs_mag_3bm17";
						value="rhs_mag_3bm17";
						defaultValue="rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name="$STR_rhs_mag_3bm22";
						value="rhs_mag_3bm22";
						defaultValue="rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name="$STR_rhs_mag_3bm29";
						value="rhs_mag_3bm29";
						defaultValue="rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name="$STR_rhs_mag_3bm26";
						value="rhs_mag_3bm26";
						defaultValue="rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name="$STR_rhs_mag_3bm32";
						value="rhs_mag_3bm32";
						defaultValue="rhs_mag_3bm32";
					};
					class rhs_mag_3bm42_10
					{
						name="$STR_rhs_mag_3bm42";
						value="rhs_mag_3bm42";
						defaultValue="rhs_mag_3bm42";
					};
					class rhs_mag_3bm42m_10
					{
						name="$STR_rhs_mag_3bm42m";
						value="rhs_mag_3bm42m";
						defaultValue="rhs_mag_3bm42m";
					};
				};
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
				class values
				{
					class rhs_mag_3bk31_8
					{
						name="$STR_rhs_mag_3bk31";
						value="rhs_mag_3bk31";
						defaultValue="rhs_mag_3bk31";
					};
					class rhs_mag_3bk12_8
					{
						name="$STR_rhs_mag_3bk12";
						value="rhs_mag_3bk12";
						defaultValue="rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name="$STR_rhs_mag_3bk14";
						value="rhs_mag_3bk14";
						defaultValue="rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name="$STR_rhs_mag_3bk18";
						value="rhs_mag_3bk18";
						defaultValue="rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name="$STR_rhs_mag_3bk18m";
						value="rhs_mag_3bk18m";
						defaultValue="rhs_mag_3bk18m";
					};
					class rhs_mag_3bk21_8
					{
						name="$STR_rhs_mag_3bk21";
						value="rhs_mag_3bk21";
						defaultValue="rhs_mag_3bk21";
					};
					class rhs_mag_3bk29_8
					{
						name="$STR_rhs_mag_3bk29";
						value="rhs_mag_3bk29";
						defaultValue="rhs_mag_3bk29";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_2
			{
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
				class values
				{
					class rhs_mag_3of26_6
					{
						name="$STR_rhs_mag_3of26";
						value="rhs_mag_3of26";
						defaultValue="rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name="$STR_rhs_mag_3of11";
						value="rhs_mag_3of11";
						defaultValue="rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_3
			{
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
				class values
				{
					class rhs_mag_9m119m_6
					{
						name="$STR_rhs_mag_9m119m";
						value="rhs_mag_9m119m";
						defaultValue="rhs_mag_9m119m";
					};
					class rhs_mag_9m119_6
					{
						name="$STR_rhs_mag_9m119";
						value="rhs_mag_9m119";
						defaultValue="rhs_mag_9m119";
					};
					class rhs_mag_9m119f_6
					{
						name="$STR_rhs_mag_9m119f";
						value="rhs_mag_9m119f";
						defaultValue="rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_4
			{
			};
			class rhs_hideNSVT: rhs_hideNSVT
			{
			};
		};
	};
	class ThingX;
	class rhs_Wreck_T80_turret_F: ThingX
	{
		reversed=1;
		icon="iconObject_1x2";
	};
	class rhs_Wreck_T80u_turret_F: rhs_Wreck_T80_turret_F
	{
	};
};
