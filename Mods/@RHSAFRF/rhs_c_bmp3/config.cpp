class CfgPatches
{
	class rhs_c_bmp3
	{
		units[]=
		{
			"rhs_bmp3_msv",
			"rhs_bmp3_late_msv",
			"rhs_bmp3m_msv",
			"rhs_bmp3mera_msv"
		};
		weapons[]={};
		name="BMP-3 IFV";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class bmp3_init
			{
				file="\rhsafrf\addons\rhs_c_bmp3\scripts\rhs_bmp3_init.sqf";
				description="BMP3 decal init";
			};
			class bmp3_autoloader
			{
				file="\rhsafrf\addons\rhs_c_bmp3\scripts\rhs_autoloader_bmp3.sqf";
				description="Autoloader gun anim & stub ejection for BMP3";
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
	class rhs_bmp3tank_base: Tank_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSBMP3NumberPlaces,'DefaultRed']",
			"['Label',cRHSBMP3PlnSymPlaces, 'Platoon',12]"
		};
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		displayName="$STR_BMP3_Name";
		accuracy=0.30000001;
		side=0;
		class MFD
		{
			class MFD_Left
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="rhs_digital_font_var";
				class Bones
				{
				};
				class Draw
				{
					color[]={0.07,0.14,0.07};
					alpha=0.12;
					condition="on";
					class FuelNumber
					{
						type="text";
						source="fuel";
						sourceScale=677;
						scale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.205},
							1
						};
						right[]=
						{
							{0.755,0.205},
							1
						};
						down[]=
						{
							{0.65499997,0.51499999},
							1
						};
					};
				};
			};
			class MFD_Right
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="rhs_digital_font_var";
				class Bones
				{
				};
				class Draw
				{
					color[]={0.07,0.14,0.07};
					alpha=0.12;
					condition="on";
					class rpmNumber
					{
						type="text";
						source="rpm";
						sourceScale=1;
						scale=1;
						refreshRate=0.050000001;
						align="left";
						pos[]=
						{
							{0.30500001,0.205},
							1
						};
						right[]=
						{
							{0.405,0.205},
							1
						};
						down[]=
						{
							{0.30500001,0.51499999},
							1
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						scale=1;
						refreshRate=0.050000001;
						align="left";
						pos[]=
						{
							{0.79500002,0.205},
							1
						};
						right[]=
						{
							{0.89499998,0.205},
							1
						};
						down[]=
						{
							{0.79500002,0.51499999},
							1
						};
					};
				};
			};
		};
		mapsize=7.0999999;
		typicalCargo[]=
		{
			"rhs_msv_crew_commander",
			"rhs_msv_crew",
			"rhs_msv_crew",
			""
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		transportsoldier=7;
		unloadInCombat=1;
		weaponsGroup1="1 + 16";
		weaponsGroup2=128;
		weaponsGroup3=2;
		weaponsGroup4=4;
		tf_range_api=35000;
		waterPPInVehicle=0;
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
		driverForceOptics=0;
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=0;
		LODDriverOpticsOut=0;
		headGforceLeaningFactor[]={0.015,0.011,0.015};
		simulation="tankX";
		maxSpeed=70;
		normalSpeedForwardCoef=0.73000002;
		slowSpeedForwardCoef=0.34999999;
		fuelCapacity=30;
		RHS_fuelCapacity=672;
		tankTurnForce=280000;
		tankTurnForceAngMinSpd=0.60000002;
		tankTurnForceAngSpd=0.81999999;
		accelAidForceCoef=4;
		accelAidForceYOffset=-4;
		accelAidForceSpd=2.8299999;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.050000001;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=0.69999999;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		waterResistanceCoef=0.15000001;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		torqueCurve[]=
		{
			{0,0},
			{0.229167,0.648871},
			{0.40000001,0.891855},
			{0.55590302,1},
			{0.65694398,0.993155},
			{0.81388903,0.973306},
			{0.90486097,0.92334002},
			{1.05,0}
		};
		engineMOI=18;
		enginePower=368;
		peakTorque=1461;
		minOmega=84;
		maxOmega=301;
		idleRpm=800;
		redRpm=2880;
		thrustDelay=0.60000002;
		clutchStrength=30;
		brakeIdleSpeed=1.78;
		latency=0.60000002;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineLosses=25;
		transmissionLosses=15;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.347222,0.347222,0,0.9375,0.347222,0.88541698,0.65972197,0.95486099,0.65972197,1,0.65972197};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.51,
				"N",
				0,
				"D1",
				3.3099999,
				"D2",
				1.934,
				"D3",
				1.132,
				"D4",
				0.662
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				10
			};
			TransmissionRatios[]=
			{
				"High",
				19
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.30000001;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				steering=0;
				width=0.315;
				mass=120;
				MOI=7.5615001;
				maxBrakeTorque=4000;
				sprungMass=1333.33;
				springStrength=127500;
				springDamperRate=11000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				dampingRate=1034;
				dampingRateInAir=1034;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=32000;
				frictionVsSlipGraph[]=
				{
					{0,0.64999998},
					{0.18000001,1},
					{0.69999999,0.94999999}
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
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_start",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			0.63095737,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
			0.63095737,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_idle",
					0.70794576,
					1,
					200
				};
				frequency="0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.79432821,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.79432821,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.89125091,
					1,
					250
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1,
					1,
					300
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1.1220185,
					1,
					340
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1.4125376,
					1,
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_idle",
					0.89125091,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm2",
					1.2589254,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm3",
					1.4125376,
					1,
					250
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm4",
					1.5848932,
					1,
					350
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm5",
					1.7782794,
					1,
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm6",
					1.9952624,
					1,
					450
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_idle",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm1",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm4",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm5",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm6",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_idle",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm1",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm2",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm4",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm5",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm6",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.56234133,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.79432821,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
		driverCanSee="2+4+8";
		commanderCanSee="2+4+8";
		incomingMissileDetectionSystem=0;
		tracksSpeed=1.35;
		wheelCircumference=1.9220001;
		attenuationEffectType="TankAttenuation";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_APC_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_APC_p"
				};
			};
		};
		nameSound="veh_vehicle_APC_s";
		extCameraPosition[]={0,2,-9};
		HeadAimDown=0;
		cost=1500000;
		enableGPS=0;
		class ViewPilot: ViewPilot
		{
			initAngleX=-12;
			minAngleY=-110;
			maxAngleY=110;
		};
		armor=200;
		armorStructural=500;
		fuelExplosionPower=0.5;
		damageResistance=0.02;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.40000001;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.44;
				explosionShielding=0.5;
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.25;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.068999998;
				explosionShielding=0.0089999996;
				radius=0.17;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.15000001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.15000001;
				radius=0.30000001;
			};
			class HitFuel
			{
				armor=1.2;
				explosionShielding=0.001;
				material=-1;
				passThrough=0;
				name="palivo";
				radius=0.050000001;
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
						commanding=4;
						primaryObserver=1;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-5;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							3.1622777,
							1,
							30
						};
						memoryPointGun="usti hlavne3";
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
								minFov=0.14;
								maxFov=0.14;
							};
							class PZU: ViewOptics
							{
								initFov=0.175;
								minFov=0.175;
								maxFov=0.175;
							};
							class Night: Wide
							{
								initFov=0.166667;
								minFov=0.166667;
								maxFov=0.166667;
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
						LodOpticsIn=0;
						LodOpticsOut=0;
						usePiP=2;
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
								radius=0.15000001;
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
								radius=0.15000001;
								isGun=1;
							};
						};
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
					};
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				weapons[]=
				{
					"rhs_weap_2a70",
					"rhs_weap_2a72",
					"rhs_weap_pkt_bmd_coax",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				animationSourceStickX="joystick_gunner_X";
				animationSourceStickY="joystick_gunner_Y";
				maxHorizontalRotSpeed=0.55000001;
				maxVerticalRotSpeed=0.55000001;
				minElev=-5;
				maxElev=60;
				initElev=10;
				startEngine=0;
				canUseScanners=0;
				allowTabLock=0;
				class OpticsIn
				{
					class DayMain: ViewOptics
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
					class Day2: DayMain
					{
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
					};
					class Day3: DayMain
					{
						initFov=0.050000001;
						minFov=0.050000001;
						maxFov=0.050000001;
					};
					class night: DayMain
					{
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"NVG"
						};
					};
				};
				forceHideGunner=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				usePiP=2;
				headAimDown=15;
				armorLights=0.1;
				class ViewGunner
				{
					initAngleX=-15;
					minAngleX=-65;
					maxAngleX=85;
					initAngleY=-5;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				commanding=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="vez";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
						isGun=1;
					};
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
			};
			class GPMGTurret1: NewTurret
			{
				animationSourceHatch="hatchR";
				proxyIndex=8;
				selectionFireAnim="zasleh3";
				hasGunner=1;
				isPersonTurret=1;
				showAsCargo=1;
				proxyType="CPCargo";
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-100;
				maxOutTurn=120;
				initOutTurn=0;
				usePip=1;
				dontCreateAI=1;
				forceHideGunner=0;
				primaryObserver=0;
				primaryGunner=0;
				commanding=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				minElev=-24;
				maxElev=35;
				minTurn=-10;
				maxTurn=10;
				weapons[]=
				{
					"rhs_weap_pkt_bmd_bow1"
				};
				ejectDeadGunner=0;
				memoryPointGun="memoryPointGun2";
				usePreciseGetInAction=0;
				preciseGetInOut=0;
				startEngine=0;
				class Turrets
				{
				};
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
					"OpticsCHAbera3"
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					distanceZoomMin=200;
					distanceZoomMax=2000;
					initFov=0.166666;
					minFov=0.166666;
					maxFov=0.166666;
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-150},
						{45,150}
					};
					limitsArrayBottom[]=
					{
						{-24,-150},
						{-24,150}
					};
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
				class HitPoints
				{
					class HitTurret_Bow1
					{
						armor=0.5;
						material=-1;
						name="hit_obsgun2";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun_Bow1
					{
						armor=0.60000002;
						material=-1;
						name="hit_obsgun2";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
						isGun=1;
					};
				};
			};
			class GPMGTurret2: GPMGTurret1
			{
				proxyIndex=9;
				animationSourceHatch="hatchL";
				weapons[]=
				{
					"rhs_weap_pkt_bmd_bow2"
				};
				commanding=1;
				memoryPointGun="memoryPointGun3";
				selectionFireAnim="zasleh4";
				personTurretAction="vehicle_turnout_2";
				class HitPoints
				{
					class HitTurret_Bow2
					{
						armor=0.5;
						material=-1;
						name="hit_obsgun3";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun_Bow2
					{
						armor=0.60000002;
						material=-1;
						name="hit_obsgun3";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
						isGun=1;
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
			"camo5",
			"n1",
			"n2",
			"n3",
			"i1",
			"f1",
			"f2",
			"f3",
			"f4",
			"f5",
			"f6",
			"f7",
			"f8",
			"f9"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
			};
			class rhs_sand: standard
			{
				displayName="Sand";
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				displayName="Define font type of plate number";
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHSBMP3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				typeName="STRING";
				class values
				{
					class DefaultRed
					{
						name="Default (Red)";
						value="DefaultRed";
					};
					class Default
					{
						name="Default";
						value="Default";
						defaultValue="Default";
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
				displayName="Set side number";
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				typeName="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSBMP3NumberPlaces}else{[_this, [['Number', cRHSBMP3NumberPlaces, _this getVariable ['rhs_decalNumber_type','DefaultRed'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				displayName="Define platoon symbol type";
				tooltip="Decal type";
				property="rhs_decalPlatoon_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				typeName="STRING";
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
						defaultValue="Army";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
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
				displayName="Set platoon symbol";
				tooltip="Set platoon symbol located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHSBMP3PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
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
				"NVG"
			};
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaustl";
				direction="exhaustl_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position="exhaustr";
				direction="exhaustr_dir";
				effect="ExhaustEffectTankSide";
			};
		};
		armorLights=0.1;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_bmp3_init;";
				fired="_this call RHS_fnc_bmp3_autoloader;";
				hitpart="_this call rhs_fnc_hitSpall";
				engine="[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay";
				getOut="_this call rhs_fnc_hatchAbandon";
			};
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
	class rhs_bmp3_msv: rhs_bmp3tank_base
	{
		displayName="$STR_BMP3_Name";
	};
	class rhs_bmp3_late_msv: rhs_bmp3tank_base
	{
		displayName="$STR_BMP3_Late_Name";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_mod_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
		};
		class textureSources: textureSources
		{
			class standard: standard
			{
			};
			class rhs_sand: rhs_sand
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
			};
			class GPMGTurret1: GPMGTurret1
			{
			};
			class GPMGTurret2: GPMGTurret2
			{
			};
		};
	};
	class rhs_bmp3m_msv: rhs_bmp3tank_base
	{
		displayName="$STR_BMP3M_Name";
		enableGPS=1;
		reportOwnPosition=1;
		enginePower=478;
		peakTorque=1650;
		torqueCurve[]=
		{
			{0,0},
			{0.22889601,0.64909101},
			{0.40000001,0.89212102},
			{0.51915598,1},
			{0.657143,0.99272698},
			{0.81396103,0.970303},
			{0.94285703,0.95212102},
			{1.05,0}
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				dampingRate=1034;
				dampingRateInAir=1034;
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
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3m_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
		};
		class textureSources: textureSources
		{
			class standard: standard
			{
			};
			class rhs_sand: rhs_sand
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
								class MinimapDisplay
								{
									componentType="MinimapDisplayComponent";
									resource="RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
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
								class MinimapDisplay
								{
									componentType="MinimapDisplayComponent";
									resource="RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
								};
							};
						};
					};
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
						thermalMode[]={0,1};
					};
					class Medium: Wide
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow: Medium
					{
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Narrow2: Narrow
					{
						directionStabilized=1;
					};
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
			};
			class GPMGTurret1: GPMGTurret1
			{
			};
			class GPMGTurret2: GPMGTurret2
			{
			};
		};
	};
	class rhs_bmp3mera_msv: rhs_bmp3m_msv
	{
		displayName="$STR_BMP3MERA_Name";
		class HitPoints: HitPoints
		{
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
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"n1",
			"n2",
			"n3",
			"i1",
			"f1",
			"f2",
			"f3",
			"f4",
			"f5",
			"f6",
			"f7",
			"f8",
			"f9"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3mera_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_3mera_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa",
			"rhsafrf\addons\rhs_bmp3\data\3m_era_co.paa"
		};
		class textureSources: textureSources
		{
			class standard: standard
			{
			};
			class rhs_sand: rhs_sand
			{
			};
		};
	};
};
