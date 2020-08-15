class CfgPatches
{
	class rhs_c_bmp
	{
		units[]=
		{
			"rhs_bmp1_vdv",
			"rhs_bmp1p_vdv",
			"rhs_bmp1k_vdv",
			"rhs_bmp1d_vdv",
			"rhs_bmp1_msv",
			"rhs_bmp1p_msv",
			"rhs_bmp1k_msv",
			"rhs_bmp1d_msv",
			"rhs_bmp1_tv",
			"rhs_bmp1p_tv",
			"rhs_bmp1k_tv",
			"rhs_bmp1d_tv",
			"rhs_bmp1_vv",
			"rhs_bmp1p_vv",
			"rhs_bmp1k_vv",
			"rhs_bmp1d_vv",
			"rhs_bmp1_vmf",
			"rhs_bmp1p_vmf",
			"rhs_bmp1k_vmf",
			"rhs_bmp1d_vmf",
			"rhs_brm1k_vdv",
			"rhs_brm1k_msv",
			"rhs_brm1k_tv",
			"rhs_brm1k_vv",
			"rhs_prp3_msv",
			"rhs_prp3_vdv",
			"rhs_prp3_tv",
			"rhs_prp3_vv",
			"rhs_bmp2_vmf",
			"rhs_bmp2e_vmf",
			"rhs_bmp2k_vmf",
			"rhs_bmp2d_vmf",
			"rhs_bmp2_msv",
			"rhs_bmp2e_msv",
			"rhs_bmp2k_msv",
			"rhs_bmp2d_msv",
			"rhs_bmp2_tv",
			"rhs_bmp2e_tv",
			"rhs_bmp2k_tv",
			"rhs_bmp2d_tv",
			"rhs_bmp2_vdv",
			"rhs_bmp2e_vdv",
			"rhs_bmp2k_vdv",
			"rhs_bmp2d_vdv",
			"rhs_bmp2_vv",
			"rhs_bmp2e_vv",
			"rhs_bmp2k_vv",
			"rhs_bmp2d_vv",
			"rhs_Ob_681_2"
		};
		weapons[]={};
		name="BMP-1 & 2 IFV";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class bmp_init
			{
				file="\rhsafrf\addons\rhs_c_bmp\scripts\rhs_bmp_init.sqf";
				description="Init for BMP-1/2 vehicles";
			};
			class bmp_doors
			{
				file="\rhsafrf\addons\rhs_c_bmp\scripts\rhs_bmp_doors.sqf";
				description="Door handler for BMP-1/2 vehicles";
			};
			class bmp_konkurs_reload
			{
				file="\rhsafrf\addons\rhs_c_bmp\scripts\rhs_konkurs_reload.sqf";
				description="BMP-2 Konkurs reload";
			};
			class prp3_autoloader
			{
				file="\rhsafrf\addons\rhs_c_bmp\scripts\rhs_prp3_load.sqf";
				description="Autoloader gun anim for PRP-3";
			};
			class psnr5k_init
			{
				file="\rhsafrf\addons\rhs_c_bmp\scripts\rhs_psnr5k_init.sqf";
				description="PSNR-5K Radar init";
			};
			class psnr5k_deploy
			{
				file="\rhsafrf\addons\rhs_c_bmp\scripts\rhs_psnr5k_deploy.sqf";
				description="PSNR-5K Radar deploy";
			};
			class lockTop
			{
				file="\rhsafrf\addons\rhs_c_bmp\scripts\rhs_lockTop.sqf";
				description="Disable all top (external) positions on designated vehicle";
			};
			class 9p135_hatch
			{
				file="\rhsafrf\addons\rhs_c_bmp\scripts\rhs_9p135_hatch.sqf";
				description="9P135 top hatch handler";
			};
		};
	};
};
class CfgAnimationSourceSounds
{
	class RHS_PSzNR5
	{
		class Deploy_Radar
		{
			loop=0;
			terminate=0;
			trigger="direction";
			sound0[]=
			{
				"rhsafrf\addons\rhs_bmp\sounds\TallMike_deploy.wav",
				1,
				1,
				25
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class Retract_Radar
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction)";
			sound0[]=
			{
				"rhsafrf\addons\rhs_bmp\sounds\TallMike_hide.wav",
				1,
				1,
				25
			};
			sound[]=
			{
				"sound0",
				1
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
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
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
				class ViewGunner;
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
	class rhs_bmp1tank_base: Tank_F
	{
		rhs_habarType=2;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		displayName="$STR_BMP1_Name";
		accuracy=0.30000001;
		viewCargoShadow=1;
		tf_range_api=17000;
		enableGPS=0;
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				hitpoint="HitPeriscope13";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
			};
		};
		typicalCargo[]={};
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',11]",
			"['Label', cBMPLeftBack, 'Army', 2]"
		};
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
		cargoGetInAction[]=
		{
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInMedium"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutMedium"
		};
		LODDriverTurnedOut=0;
		simulation="tankX";
		maxSpeed=60;
		normalSpeedForwardCoef=0.73000002;
		slowSpeedForwardCoef=0.34999999;
		brakeIdleSpeed=0;
		fuelCapacity=29.5;
		RHS_fuelCapacity=462;
		tankTurnForce=450000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.92000002;
		accelAidForceCoef=4.3000002;
		accelAidForceYOffset=-3.9000001;
		accelAidForceSpd=2.23;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.050000001;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=-0.80000001;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=3.2;
		waterResistanceCoef=0.015;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		torqueCurve[]=
		{
			{0.035087701,0},
			{0.31578901,0.95310903},
			{0.52631599,1},
			{0.56140399,1},
			{0.63157898,0.95310903},
			{0.77192998,0.897044},
			{0.91228098,0.82670701},
			{1.08807,0}
		};
		engineMOI=8;
		enginePower=224;
		peakTorque=981;
		minOmega=75;
		maxOmega=298.45001;
		idleRPM=700;
		redRPM=2850;
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		engineLosses=25;
		transmissionLosses=15;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		clutchStrength=20;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.35087699,0.35087699,0,0.83508801,0.35087699,0.89473701,0.66666698,0.91228098,0.66666698,0.91228098,0.66666698,1,0.66666698};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.25,
				"N",
				0,
				"D1",
				5.25,
				"D2",
				2.842,
				"D3",
				1.9119999,
				"D4",
				1.28,
				"D5",
				0.85799998
			};
			AmphibiousRatios[]=
			{
				"R1",
				-14.5,
				"N",
				0,
				"D1",
				14.5
			};
			TransmissionRatios[]=
			{
				"High",
				12.6
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
				steering=0;
				width=0.28799999;
				mass=120;
				MOI=7.5615001;
				maxBrakeTorque=2000;
				sprungMass=1208.33;
				springStrength=127500;
				springDamperRate=7000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				dampingRate=344;
				dampingRateInAir=344;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=2;
				latStiffY=30;
				longitudinalStiffnessPerUnitGravity=32000;
				frictionVsSlipGraph[]=
				{
					{0,0.80000001},
					{0.38,1},
					{0.69999999,0.64999998}
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
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7879457,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7309573,
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",
			0.78794575,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
			0.73095739,
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
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_alap",
					8.9125099,
					1,
					400
				};
				frequency="0.95	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="(thrust factor [0.1,0])*engineOn*camPos*(rpm interpolate [700,900,1,0])";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.2,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(600/	2850),(1000/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine1_ext_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.9943281,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine1_ext_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					2.3943281,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.1912509,
					1,
					850
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.2,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.4220185,
					1,
					840
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.6125376,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*camPos*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.5912509,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.4220185,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					1.5589254,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					1.7125376,
					1,
					850
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					1.8848932,
					1,
					950
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					1.9782794,
					1,
					1000
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					3.1952624,
					1,
					1050
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.81622773,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.55481339,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_int_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					1.3943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.59810716,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.64668357,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.70118719,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.76234132,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.83095735,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.65481335,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					0.69810718,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					0.7466836,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.7466836,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.80118722,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					0.86234134,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					1.1,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
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
					0.19810717,
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
					0.1466836,
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
					0.1011872,
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
					0.16234133,
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
					0.26234132,
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
					0.11622776,
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
					0.15481336,
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
					0.19810717,
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
					0.1466836,
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
					0.20118719,
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
		tracksSpeed=1.35;
		wheelCircumference=1.9220001;
		attenuationEffectType="TankAttenuation";
		extCameraPosition[]={0,2,-8};
		cost=1500000;
		damageResistance=0.02;
		unloadInCombat=1;
		enableManualFire=0;
		incomingMissileDetectionSystem=0;
		armor=200;
		armorStructural=600;
		class HitPoints: HitPoints
		{
			class Hit_Ammo
			{
				armor=-80;
				minimalHit="- 0.4";
				explosionShielding=0;
				name="Hit_Ammo";
				armorComponent="Hit_Ammo";
				passThrough=0;
			};
			class HitHull: HitHull
			{
				armor=0.40000001;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.54000002;
				explosionShielding=0.15000001;
				radius=0.15000001;
				depends="Hit_Ammo factor [0.5,1]";
			};
			class HitEngine: HitEngine
			{
				armor=0.44999999;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.139;
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
				armor=1;
				explosionShielding=1;
				material=-1;
				passThrough=1;
				name="palivo";
				radius=0.11;
			};
			class HitPeriscope1
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope1";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope2
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope2";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope3
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope3";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope4
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope4";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope5
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope5";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope6
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope6";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope7
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope7";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope8
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope8";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope9
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope9";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope10
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope10";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope11
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope11";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope12
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope12";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope13
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope13";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope14
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscope14";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscopeCom1
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscopeCom1";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscopeCom2
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscopeCom2";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscopeGun1
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscopeGun1";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscopeGun2
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscopeGun2";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscopeGun3
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscopeGun3";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscopeGun4
			{
				armor=-20;
				material=-1;
				passThrough=0;
				name="periscopeGun4";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitMainSight: HitPeriscope1
			{
				armor=-40;
				minimalHit=-0.1;
				explosionShielding=0.30000001;
				name="mainSight";
				radius=0.050000001;
			};
			class HitComSight: HitMainSight
			{
				name="comSight";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isPersonTurret=1;
				personTurretAction="RHS_passenger_inside_6";
				weapons[]=
				{
					"rhs_weap_2a28",
					"rhs_weap_pkt",
					"rhs_weap_9k11"
				};
				hasGunner=1;
				forcehidegunner=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				nightVision=1;
				canUseScanners=0;
				allowTabLock=0;
				animationSourceHatch="HatchGunner";
				memoryPointGun="machinegun";
				selectionFireAnim="zasleh_1";
				lockWhenDriverOut=1;
				primaryGunner=1;
				primaryObserver=0;
				minElev=-24;
				maxElev=35;
				initElev=0;
				minOutElev=-45;
				maxOutElev=45;
				startEngine=0;
				stabilizedInAxes=0;
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				maxHorizontalRotSpeed=0.54000002;
				maxVerticalRotSpeed=0.23999999;
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
						radius=0.15000001;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.15000001;
					};
				};
				class Turrets
				{
				};
				class OpticsIn
				{
					class Periscope
					{
						hitpoint="HitPeriscopeGun3";
						camPos="view_periscope";
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.47;
						minFov=0.47;
						maxFov=0.47;
						visionMode[]=
						{
							"Normal"
						};
					};
					class pn22m1
					{
						hitpoint="HitMainSight";
						camPos="gunnerview";
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal"
						};
					};
					class pn22m1n
					{
						hitpoint="HitMainSight";
						camPos="gunnerview";
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"NVG"
						};
					};
				};
				armorLights=0.1;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-170},
						{45,170}
					};
					limitsArrayBottom[]=
					{
						{-24,-170},
						{-24,170}
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
			class Com_BMP1: NewTurret
			{
				dontCreateAI=1;
				LodOpticsIn=0;
				LodOpticsOut=0;
				weapons[]={};
				magazines[]={};
				animationSourceHatch="HatchCommander";
				proxyType="CPCommander";
				proxyIndex=1;
				lockWhenDriverOut=0;
				primaryGunner=0;
				primaryObserver=0;
				hasCommander=0;
				isPersonTurret=1;
				personTurretAction="RHS_VehicleTurnout_BMP1_1";
				stabilizedInAxes=3;
				minElev=-4;
				maxElev=12;
				initElev=0;
				minTurn=-135;
				maxTurn=135;
				initTurn=0;
				soundServo[]={};
				startEngine=0;
				canUseScanners=0;
				allowTabLock=0;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						hitpoint="HitComSight";
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
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
				class Hitpoints
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=9;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=10;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=11;
			};
			class CargoTurret_05: CargoTurret_01
			{
				maxElev=45;
				minElev=-15;
				maxTurn=81;
				minTurn=-25;
				proxyIndex=12;
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=13;
				ejectDeadGunner=1;
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
				enabledByAnimationSource="cargoHandler1";
			};
			class CargoTurret_07: CargoTurret_06
			{
				proxyIndex=18;
			};
			class CargoTurret_08: CargoTurret_06
			{
				proxyIndex=15;
			};
			class CargoTurret_09: CargoTurret_06
			{
				proxyIndex=16;
			};
			class CargoTurret_10: CargoTurret_01
			{
				proxyIndex=17;
			};
		};
		rhs_topPositions[]={9,10,11,12,13,14,15,16,17,18};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"i3",
			"i4",
			"i5"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv",
					"rhs_faction_tv"
				};
			};
			class chedaki
			{
				displayName="Chedaki";
				factions[]=
				{
					"rhs_faction_insurgents"
				};
			};
			class rhs_sand
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
				expression="_this setVariable ['%s', _value];[_this,[['Number', cBMP3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				typeName="STRING";
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
				displayName="Set side number";
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				typeName="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBMP3NumberPlaces}else{[_this, [['Number', cBMP3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
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
				displayName="Set platoon symbol";
				tooltip="Set platoon symbol located on right & rear of vehicles. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPPlatoon,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type: rhs_decalPlatoon_type
			{
				displayName="Define left back symbol type";
				property="rhs_decalArmy_type";
				class values: values
				{
					class Army: Army
					{
					};
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
				};
			};
			class rhs_decalArmy: rhs_decalPlatoon
			{
				displayName="Set left back symbol";
				tooltip="Define symbol located on left back side of vehicle. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPLeftBack,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalRightTurret_type: rhs_decalArmy_type
			{
				displayName="Define right turret symbol type";
				property="rhs_decalRightTurret_type";
			};
			class rhs_decalRightTurret: rhs_decalPlatoon
			{
				displayName="Set right turret symbol";
				tooltip="Define symbol located on right side of vehicle turret. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalRightTurret";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPRightTurret,  _this getVariable ['rhs_decalRightTurret_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalLeftTurret_type: rhs_decalArmy_type
			{
				displayName="Define left turret symbol type";
				property="rhs_decalLeftTurret_type";
			};
			class rhs_decalLeftTurret: rhs_decalPlatoon
			{
				displayName="Set left turret symbol";
				tooltip="Define symbol located on left side of vehicle turret. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalLeftTurret";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPLeftTurret,  _this getVariable ['rhs_decalLeftTurret_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalFront_type: rhs_decalArmy_type
			{
				displayName="Define front symbol type";
				property="rhs_decalFront_type";
			};
			class rhs_decalFront: rhs_decalPlatoon
			{
				displayName="Set front symbol";
				tooltip="Define symbol located on front of vehicle hull. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalFront";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMPFront,  _this getVariable ['rhs_decalFront_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class crate_l1_unhide
			{
				displayName="hide l1 crate";
				property="crate_l1_unhide";
				control="CheckboxNumber";
				expression="[_this,_value,'%s'] call rhs_fnc_setHabarEden";
				defaultValue="-1";
			};
			class crate_l2_unhide: crate_l1_unhide
			{
				displayName="Hide l2 crate";
				property="crate_l2_unhide";
			};
			class crate_l3_unhide: crate_l1_unhide
			{
				displayName="Hide l3 crate";
				property="crate_l3_unhide";
			};
			class crate_r1_unhide: crate_l1_unhide
			{
				displayName="Hide r1 crate";
				property="crate_r1_unhide";
			};
			class crate_r2_unhide: crate_l1_unhide
			{
				displayName="Hide r2 crate";
				property="crate_r2_unhide";
			};
			class crate_r3_unhide: crate_l1_unhide
			{
				displayName="Hide r3 crate";
				property="crate_r3_unhide";
			};
			class wood_1_unhide: crate_l1_unhide
			{
				displayName="Hide wood log 1";
				property="wood_1_unhide";
			};
			class wood_2_unhide: crate_l1_unhide
			{
				displayName="Hide wood log 2";
				property="wood_2_unhide";
			};
			class rhs_disableHabar: crate_l1_unhide
			{
				displayName="Disable habar";
				property="rhs_disableHabar";
				expression="[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
				defaultValue="0";
			};
			class rhs_snorkel: rhs_disableHabar
			{
				displayName="Rise Snorkel";
				property="rhs_snorkel";
				expression="_this animateSource ['Snorkel',_value,true]";
			};
			class rhs_externalMount: rhs_disableHabar
			{
				displayName="Disable external mount";
				property="rhs_externalMount";
				control="Checkbox";
				expression="[_this,_value] call rhs_fnc_lockTop";
			};
		};
		rhs_randomizedHabar[]=
		{
			"crate_l1_unhide",
			"crate_l2_unhide",
			"crate_l3_unhide",
			"crate_r1_unhide",
			"crate_r2_unhide",
			"crate_r3_unhide",
			"wood_1_unhide",
			"wood_2_unhide"
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
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectTankSide";
			};
		};
		armorLights=0.1;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_bmp_init;";
				fired="_this call rhs_fnc_9m14_fired;";
				reloaded="_this call rhs_fnc_9m14_reload;";
				getout="_this call rhs_fnc_bmp_doors;_this call rhs_fnc_hatchAbandon";
				engine="[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay";
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
	class rhs_bmp_base: rhs_bmp1tank_base
	{
	};
	class rhs_bmp1_vdv: rhs_bmp_base
	{
		mapsize=6.6999998;
	};
	class rhs_bmp1_tv: rhs_bmp1_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_bmp1_msv: rhs_bmp1_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_bmp1_vmf: rhs_bmp1_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_bmp1_vv: rhs_bmp1_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_bmp1p_vdv: rhs_bmp1_vdv
	{
		displayName="$STR_BMP1P_Name";
		forceIngarage=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a28",
					"rhs_weap_pkt",
					"rhs_weap_902a"
				};
				LODTurnedIn=1200;
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						proxyType="CPGunner";
						primaryObserver=0;
						proxyindex=2;
						dontCreateAi=1;
						cantCreateAI=1;
						animationSourceHatch="";
						memoryPointGun="konec rakety";
						stabilizedInAxes=0;
						canHideGunner=0;
						isPersonTurret=0;
						startEngine=0;
						LODTurnedOut=0;
						LODTurnedIn=0;
						gunnerOpticsEffect[]=
						{
							"OpticsCHAbera1",
							"OpticsBlur2"
						};
						soundAttenuationTurret="HeliAttenuationGunner";
						maxHorizontalRotSpeed=0.34999999;
						maxVerticalRotSpeed=0.15000001;
						minElev=-5;
						maxElev=20;
						minTurn=-60;
						maxTurn=12;
						initElev=0;
						initTurn=-15;
						canUseScanners=0;
						allowTabLock=0;
						weapons[]=
						{
							"rhs_weap_9m111"
						};
						selectionFireAnim="zasleh4";
						class OpticsIn
						{
							class 9Sh119m1
							{
								hitpoint="HitAtgmSight";
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.07;
								minFov=0.07;
								maxFov=0.07;
								visionMode[]=
								{
									"Normal"
								};
							};
						};
						class OpticsOut
						{
							class Out
							{
								hitpoint="HitAtgmSight";
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								minFov=0.25;
								maxFov=1.25;
								initFov=0.75;
								visionMode[]=
								{
									"Normal"
								};
							};
						};
						class HitPoints
						{
							class HitTurretLauncher
							{
								isTurret=1;
								armor=0.5;
								material=-1;
								name="launcher_base_hit";
								passThrough=0;
								minimalHit=0.14;
								explosionShielding=0.001;
								radius=0.25;
							};
							class HitGunLauncher
							{
								isGun=1;
								armor=0.60000002;
								material=-1;
								name="launcher_hit";
								passThrough=0;
								minimalHit=0.13;
								explosionShielding=0.001;
								radius=0.25;
							};
						};
					};
				};
			};
			class Com_BMP1: Com_BMP1
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
			class CargoTurret_07: CargoTurret_07
			{
			};
			class CargoTurret_08: CargoTurret_08
			{
			};
			class CargoTurret_09: CargoTurret_09
			{
			};
			class CargoTurret_10: CargoTurret_10
			{
			};
		};
		class HitPoints: HitPoints
		{
			class HitAtgmSight: HitMainSight
			{
				name="atgmSight";
			};
		};
		class Damage
		{
		};
		class Library
		{
			libTextDesc="Improved variant of the BMP-1. Weight: 13,4t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				fired="_this call rhs_fnc_at14_fired;";
				getOut="if((_this select 3) isEqualTo [0,0])then{[(_this select 0),[[0],false]] remoteExecCall ['lockTurret']}";
				reloaded="[_this select 0,_this select 1,_this select 4,'rhs_weap_9m111','rhs_weap_9m113_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
			};
			class RHS_BMP1P_Lock
			{
				init="(_this select 0) lockTurret [[0,0],true]";
			};
		};
	};
	class rhs_bmp1p_tv: rhs_bmp1p_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_bmp1p_msv: rhs_bmp1p_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_bmp1p_vmf: rhs_bmp1p_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_bmp1p_vv: rhs_bmp1p_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_bmp1k_vdv: rhs_bmp1_vdv
	{
		displayName="$STR_BMP1K_Name";
		transportsoldier=3;
		tf_range_api=35000;
		typicalCargo[]=
		{
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew"
		};
		class Library
		{
			libTextDesc="Command variant of the BMP-1. Weight: 13,2t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M14M Maljutka-M ATGM  400mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
	};
	class rhs_bmp1k_tv: rhs_bmp1k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_bmp1k_msv: rhs_bmp1k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_bmp1k_vmf: rhs_bmp1k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_bmp1k_vv: rhs_bmp1k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_bmp1d_vdv: rhs_bmp1_vdv
	{
		displayName="$STR_BMP1D_Name";
		armor=300;
		canFloat=0;
		class Library
		{
			libTextDesc="Uparmored variant of the BMP-1. Weight: 13,5t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18+10mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M14M Maljutka-M ATGM  400mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
	};
	class rhs_bmp1d_tv: rhs_bmp1d_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_bmp1d_msv: rhs_bmp1d_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_bmp1d_vmf: rhs_bmp1d_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_bmp1d_vv: rhs_bmp1d_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_prp3_vdv: rhs_bmp1_vdv
	{
		class Wheels: Wheels
		{
			class L2: L2
			{
				dampingRate=328;
				dampingRateInAir=328;
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
		displayName="$STR_PRP3_Name";
		typicalCargo[]=
		{
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew"
		};
		animationSourceHatch="Hatchdriver";
		class Library
		{
			libTextDesc="Artillery reconnaissance vehicle. Equipment consists of an 1RL126 counterbattery/surveillance radar, 1V44/1G13M/1G25-1 navigational systems, a 1D6M1 laser rangefinder, a 1PN29 night vision device and a 90 mm 2P130-1 launcher with 20 9M41 illumination missiles.  Weight: 13,2t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 7.62 mm PKT coaxial general purpose machine gun (1000 rounds)";
		};
		artilleryScanner=1;
		class Turrets: Turrets
		{
			class reconTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_pkt"
				};
				hasGunner=1;
				nightVision=1;
				animationSourceHatch="hatchgunner";
				memoryPointGun="machinegun";
				selectionFireAnim="zasleh_1";
				lockWhenDriverOut=1;
				maxHorizontalRotSpeed=0.54000002;
				maxVerticalRotSpeed=0.23999999;
				commanding=4;
				primaryGunner=0;
				primaryObserver=0;
				minElev=-5;
				maxElev=15;
				initElev=0;
				startEngine=0;
				stabilizedInAxes=3;
				forceHidegunner=0;
				class OpticsIn
				{
					class bpk142
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
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
					class bpk142n
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
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
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret
					{
						weapons[]={};
						magazines[]={};
						animationSourceHatch="hatch_commander_prp";
						nightVision=1;
						proxyType="CPCommander";
						proxyIndex=1;
						lockWhenDriverOut=0;
						primaryGunner=0;
						primaryObserver=1;
						hasCommander=1;
						commanding=6;
						stabilizedInAxes=3;
						minElev=-4;
						maxElev=10;
						initElev=0;
						minTurn=-10;
						maxTurn=10;
						initTurn=0;
						soundServo[]={};
						startEngine=0;
						class Hitpoints
						{
						};
					};
				};
			};
			class operatorCalculatorTurret: Com_BMP1
			{
				proxyType="CPGunner";
				proxyIndex=2;
				primaryGunner=0;
				primaryObserver=0;
				hasGunner=1;
				commanding=5;
				animationSourceHatch="hatch_calc_prp";
				class Hitpoints
				{
				};
			};
			class radioOperatorTurret: NewTurret
			{
				class ViewGunner;
				proxyType="CPGunner";
				proxyIndex=3;
				animationSourceHatch="";
				nightVision=1;
				forceHidegunner=1;
				lockWhenDriverOut=1;
				primaryGunner=1;
				primaryObserver=0;
				hasGunner=1;
				commanding=3;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-110;
					maxAngleX=110;
					initAngleY=0;
					minAngleY=-110;
					maxAngleY=110;
					distanceZoomMin=20;
					distanceZoomMax=2000;
					initFov=0.69999999;
					minFov=0.69999999;
					maxFov=0.69999999;
				};
				soundServo[]={};
				startEngine=0;
				weapons[]=
				{
					"rhs_weap_2p130"
				};
				lockWhenVehicleSpeed=1;
				cameraDir="lseat_view_dir";
				elevationMode=1;
				initCamElev=0;
				minCamElev=0;
				maxCamElev=75;
				initElev=35;
				initTurn=-90;
				minElev=35;
				maxElev=80;
				minTurn=-180;
				maxTurn=180;
				class Hitpoints
				{
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_bmp_init; _this spawn rhs_fnc_psnr5k_init;";
				fired="_this call rhs_fnc_prp3_autoloader;";
				reloaded="";
			};
		};
	};
	class rhs_prp3_tv: rhs_prp3_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_prp3_msv: rhs_prp3_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_prp3_vmf: rhs_prp3_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_prp3_vv: rhs_prp3_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_bmp2e_vdv: rhs_bmp1_vdv
	{
		class Wheels: Wheels
		{
			class L2: L2
			{
				dampingRate=328;
				dampingRateInAir=328;
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
		displayName="$STR_BMP2e_Name";
		weaponsGroup1=128;
		weaponsGroup4=64;
		driverCanSee="2+4+8";
		commanderCanSee="2+4+8";
		enableManualFire=1;
		typicalCargo[]=
		{
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew"
		};
		armor=260;
		cost=10000;
		cargoGetInAction[]=
		{
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInMedium"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutMedium"
		};
		class HitPoints: HitPoints
		{
			class HitAtgmSight: HitMainSight
			{
				name="atgmSight";
			};
			class HitAASight: HitMainSight
			{
				name="AASight";
				armorComponent="HitAASight";
			};
		};
		class Library
		{
			libTextDesc="The BMP-2 is a second-generation, amphibious infantry fighting vehicle introduced in the 1980s in the Soviet Union, following the BMP-1 of the 1960s. Weight: 14,3t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 30 mm Shipunov 2A42 Autocannon (500 rounds) penetration:	3UBR6 APBC	18mm RHA @60 degrees @1500m, 3UBR8 APDS	25mm RHA @60 degrees @1500m, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				LodOpticsIn=0;
				LodOpticsOut=0;
				weapons[]=
				{
					"rhs_weap_2a42",
					"rhs_weap_pkt",
					"rhs_weap_9m113",
					"rhs_weap_902a"
				};
				hasGunner=1;
				forcehidegunner=0;
				nightVision=1;
				animationSourceHatch="HatchGunner";
				memoryPointGun="machinegun";
				selectionFireAnim="zasleh_1";
				lockWhenDriverOut=1;
				primaryGunner=1;
				primaryObserver=0;
				minElev=-5;
				maxElev=74;
				initElev=0;
				startEngine=0;
				stabilizedInAxes=3;
				maxhorizontalrotspeed=0.61000001;
				maxverticalrotspeed=0.104;
				canUseScanners=0;
				allowTabLock=0;
				class OpticsIn
				{
					class bpk142
					{
						hitpoint="HitMainSight";
						camPos="view_bpk42";
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.125;
						minFov=0.125;
						maxFov=0.125;
						visionMode[]=
						{
							"Normal"
						};
					};
					class 9sh119m1: bpk142
					{
						hitpoint="HitAtgmSight";
						camPos="view_sh119m1";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
						visionMode[]=
						{
							"Normal"
						};
					};
					class bpk142n
					{
						hitpoint="HitMainSight";
						camPos="view_bpk42";
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"NVG"
						};
					};
				};
				armorLights=0.1;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						dontCreateAI=1;
						weapons[]={};
						magazines[]={};
						animationSourceHatch="HatchCommander_BMP2";
						proxyType="CPCommander";
						proxyIndex=1;
						lockWhenDriverOut=0;
						primaryGunner=0;
						primaryObserver=0;
						hasCommander=1;
						LodOpticsIn=0;
						LodOpticsOut=0;
						isPersonTurret=1;
						personTurretAction="RHS_passenger_inside_6";
						stabilizedInAxes=3;
						selectionFireAnim="";
						minElev=-4;
						maxElev=60;
						initElev=0;
						minTurn=-135;
						maxTurn=135;
						initTurn=0;
						class OpticsIn
						{
							class AA1
							{
								hitpoint="HitAASight";
								camPos="view_1pz3";
								camDir="view_1pz3_dir";
								initAngleX=0;
								minAngleX=-110;
								maxAngleX=110;
								initAngleY=0;
								minAngleY=-110;
								maxAngleY=110;
								distanceZoomMin=200;
								distanceZoomMax=2000;
								initFov=0.58333302;
								minFov=0.58333302;
								maxFov=0.58333302;
								visionMode[]=
								{
									"Normal"
								};
							};
							class AA2: AA1
							{
								initFov=0.175;
								minFov=0.175;
								maxFov=0.175;
							};
							class DAY
							{
								hitpoint="HitComSight";
								camPos="view_tkn3";
								initAngleX=0;
								minAngleX=-110;
								maxAngleX=110;
								initAngleY=0;
								minAngleY=-110;
								maxAngleY=110;
								distanceZoomMin=200;
								distanceZoomMax=2000;
								initFov=0.14;
								minFov=0.14;
								maxFov=0.14;
								visionMode[]=
								{
									"Normal"
								};
							};
							class NIGHT: DAY
							{
								initFov=0.166667;
								minFov=0.166667;
								maxFov=0.166667;
								visionMode[]=
								{
									"NVG"
								};
							};
						};
						soundServo[]={};
						startEngine=0;
						canUseScanners=0;
						allowTabLock=0;
						class Hitpoints
						{
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=9;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=10;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=11;
			};
			class CargoTurret_05: CargoTurret_01
			{
				maxElev=45;
				minElev=-15;
				maxTurn=81;
				minTurn=-25;
				proxyIndex=12;
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=13;
				ejectDeadGunner=1;
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
				enabledByAnimationSource="cargoHandler1";
			};
			class CargoTurret_07: CargoTurret_06
			{
				proxyIndex=14;
			};
			class CargoTurret_08: CargoTurret_06
			{
				proxyIndex=15;
			};
			class CargoTurret_09: CargoTurret_06
			{
				proxyIndex=16;
			};
			class CargoTurret_10: CargoTurret_01
			{
				proxyIndex=17;
			};
		};
		rhs_topPositions[]={8,9,10,11,12,13,14,15,16,17};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				fired="_this call rhs_fnc_at14_fired;";
				reloaded="_this call rhs_fnc_bmp_konkurs_reload";
			};
		};
	};
	class rhs_bmp2e_tv: rhs_bmp2e_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_bmp2e_msv: rhs_bmp2e_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_bmp2e_vmf: rhs_bmp2e_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_bmp2e_vv: rhs_bmp2e_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_bmp2_vdv: rhs_bmp2e_vdv
	{
		displayName="$STR_BMP2_Name";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
			class CargoTurret_07: CargoTurret_07
			{
			};
			class CargoTurret_08: CargoTurret_08
			{
			};
			class CargoTurret_09: CargoTurret_09
			{
			};
			class CargoTurret_10: CargoTurret_10
			{
			};
		};
	};
	class rhs_bmp2_tv: rhs_bmp2_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_bmp2_msv: rhs_bmp2_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_bmp2_vmf: rhs_bmp2_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_bmp2_vv: rhs_bmp2_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_bmp2k_vdv: rhs_bmp2_vdv
	{
		displayName="$STR_BMP2K_Name";
		transportsoldier=3;
		typicalCargo[]=
		{
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew"
		};
		tf_range_api=35000;
		class Library
		{
			libTextDesc="Command variant of the BMP-2. Weight: 14,3t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 30 mm Shipunov 2A42 Autocannon (500 rounds) penetration:	3UBR6 APBC	18mm RHA @60 degrees @1500m, 3UBR8 APDS	25mm RHA @60 degrees @1500m, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						dontCreateAI=0;
						primaryObserver=1;
					};
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
			class CargoTurret_07: CargoTurret_07
			{
			};
			class CargoTurret_08: CargoTurret_08
			{
			};
			class CargoTurret_09: CargoTurret_09
			{
			};
			class CargoTurret_10: CargoTurret_10
			{
			};
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmp\textures\bmp_1k_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_4k_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv",
					"rhs_faction_tv"
				};
			};
		};
		cargoGetInAction[]=
		{
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInMedium"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutLow",
			"GetOutMedium"
		};
	};
	class rhs_bmp2k_tv: rhs_bmp2k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_bmp2k_msv: rhs_bmp2k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_bmp2k_vmf: rhs_bmp2k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_bmp2k_vv: rhs_bmp2k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_bmp2d_vdv: rhs_bmp2_vdv
	{
		displayName="$STR_BMP2D_Name";
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',11]",
			"['Label', cBMPLeftBack, 'Army', 2]"
		};
		armor=300;
		canFloat=0;
		class Library
		{
			libTextDesc="Uparmored variant of the BMP-2. Weight: 14,5t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13+10mm rear Hull:  7-19mm front, 16-18+10mm sides, 16mm rear Primary armament: 30 mm Shipunov 2A42 Autocannon (500 rounds) penetration:	3UBR6 APBC	18mm RHA @60 degrees @1500m, 3UBR8 APDS	25mm RHA @60 degrees @1500m, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
	};
	class rhs_bmp2d_tv: rhs_bmp2d_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_bmp2d_msv: rhs_bmp2d_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_bmp2d_vmf: rhs_bmp2d_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_bmp2d_vv: rhs_bmp2d_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
	class rhs_Ob_681_2: rhs_bmp2e_msv
	{
		displayName="Obyekt-681-2";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a41",
					"rhs_weap_pkt",
					"rhs_weap_nsvt_obj681",
					"rhs_weap_9m113"
				};
				minElev=-5;
				maxElev=15;
				initElev=0;
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"OpticsBlur2",
					"OpticsCHAbera3"
				};
				LodOpticsIn=0;
				LodOpticsOut=0;
				class OpticsIn
				{
					class pn22m1
					{
						hitpoint="HitMainSight";
						camPos="gunnerview";
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal"
						};
					};
					class 9sh119m1: pn22m1
					{
						hitpoint="HitAtgmSight";
						camPos="view_sh119m1";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
						visionMode[]=
						{
							"Normal"
						};
					};
					class pn22m1n: pn22m1
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
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class OpticsIn
						{
							class DAY
							{
								hitpoint="HitComSight";
								camPos="view_tkn3";
								initAngleX=0;
								minAngleX=-110;
								maxAngleX=110;
								initAngleY=0;
								minAngleY=-110;
								maxAngleY=110;
								distanceZoomMin=200;
								distanceZoomMax=2000;
								initFov=0.14;
								minFov=0.14;
								maxFov=0.14;
								visionMode[]=
								{
									"Normal"
								};
							};
							class NIGHT: DAY
							{
								initFov=0.166667;
								minFov=0.166667;
								maxFov=0.166667;
								visionMode[]=
								{
									"NVG"
								};
							};
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
			class CargoTurret_07: CargoTurret_07
			{
			};
			class CargoTurret_08: CargoTurret_08
			{
			};
			class CargoTurret_09: CargoTurret_09
			{
			};
			class CargoTurret_10: CargoTurret_10
			{
			};
		};
		class Library
		{
			libTextDesc="Experimental IFV. Weight: 13,6t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 33mm front, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm Zarnitsa low-pressure smoothbore gun (40 rounds) penetration:	PG-15V HEAT	350mm RHA, 9M113 Konkurs ATGM  600mm RHA, Secondary armament: 12.7mm NSVT coaxial heavy machine gun (500 rounds), 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
	};
	class rhs_brm1k_base: rhs_bmp2e_vdv
	{
		displayName="$STR_BRM1K_Name";
		armor=160;
		cost=10000;
		class Library
		{
			libTextDesc="Reconnaissance vehicle, based on BMP-1. Weight: 13,3t Engine: UTD-20 V6-cylinder 4-stroke one-chamber 15.8 liter water-cooled diesel, 300hp, ~1000Nm torque. Speed: 65 km/h (road) 45 km/h (cross country) Fuel capacity: 462l Range: 600 km Armour: Turret: 23mm front, 26-33mm mantlet, 19mm sides, 13mm rear Hull:  7-19mm front, 16-18mm sides, 16mm rear Primary armament: 73 mm 2A28 Grom low-pressure smoothbore gun  (20 rounds) penetration:	PG-15V HEAT	350mm RHA, Secondary armament: 7.62 mm PKT coaxial general purpose machine gun (2000 rounds)";
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection="RHS_BMP1_MainTurret";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal=60;
						angleRangeVertical=50;
						typeRecognitionDistance=500;
						maxFogSeeThrough=1;
						maxTrackableATL=100;
						minTrackableSpeed=2;
						maxTrackableSpeed=30;
					};
					class ManSensorComponent: SensorTemplateMan
					{
						class AirTarget
						{
							minRange=2000;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=2000;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						animDirection="RHS_BMP1_MainTurret";
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal=60;
						angleRangeVertical=50;
						typeRecognitionDistance=1;
						maxFogSeeThrough=1;
						maxTrackableATL=100;
						minTrackableSpeed=1;
						maxTrackableSpeed=30;
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-4;
				maxElev=15;
				initElev=0;
				startEngine=0;
				stabilizedInAxes=0;
				weapons[]=
				{
					"rhs_weap_2a28",
					"rhs_weap_pkt",
					"rhs_weap_902a"
				};
				maxHorizontalRotSpeed=0.54000002;
				maxVerticalRotSpeed=0.23999999;
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
					};
				};
				class OpticsIn
				{
					class pn22m1
					{
						hitpoint="HitMainSight";
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal"
						};
					};
					class pn22m1n: pn22m1
					{
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
						animationSourceHatch="HatchCommander_BMP2";
						nightVision=1;
						proxyType="CPCommander";
						proxyIndex=1;
						lockWhenDriverOut=0;
						primaryGunner=0;
						primaryObserver=1;
						hasCommander=1;
						stabilizedInAxes=3;
						minElev=-4;
						maxElev=12;
						initElev=0;
						minTurn=-135;
						maxTurn=135;
						initTurn=0;
						soundServo[]={};
						startEngine=0;
						class OpticsIn
						{
							class DAY
							{
								hitpoint="HitComSight";
								initAngleX=0;
								minAngleX=-110;
								maxAngleX=110;
								initAngleY=0;
								minAngleY=-110;
								maxAngleY=110;
								distanceZoomMin=200;
								distanceZoomMax=2000;
								initFov=0.14;
								minFov=0.14;
								maxFov=0.14;
								visionMode[]=
								{
									"Normal"
								};
							};
							class NIGHT: DAY
							{
								initFov=0.166667;
								minFov=0.166667;
								maxFov=0.166667;
								visionMode[]=
								{
									"NVG"
								};
							};
						};
						armorLights=0.1;
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
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={1000,3500,7000};
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
									class CrewDisplay
									{
										componentType="CrewDisplayComponent";
										resource="RscCustomInfoCrew";
									};
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={1000,3500,7000};
										resource="RscCustomInfoSensors";
									};
								};
							};
						};
						class Hitpoints
						{
						};
					};
				};
			};
			class NavTurret: NewTurret
			{
				class ViewGunner;
				weapons[]={};
				magazines[]={};
				animationSourceHatch="Hatch_nav";
				nightVision=1;
				proxyType="CPGunner";
				proxyIndex=2;
				lockWhenDriverOut=0;
				primaryGunner=0;
				primaryObserver=0;
				hasCommander=1;
				stabilizedInAxes=0;
				minElev=-4;
				maxElev=12;
				initElev=0;
				minTurn=-85;
				maxTurn=85;
				initTurn=0;
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
				class OpticsIn
				{
					class DAY
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov="0.7/1";
						minFov="0.7/1";
						maxFov="0.7/1";
						visionMode[]=
						{
							"Normal"
						};
					};
					class NIGHT: DAY
					{
						initFov="0.7/8";
						minFov="0.7/8";
						maxFov="0.7/8";
					};
				};
				soundServo[]={};
				startEngine=0;
				class Hitpoints
				{
				};
			};
			class LeftBack: NewTurret
			{
				animationSourceHatch="";
				selectionFireAnim="";
				minElev=-5;
				maxElev=5;
				initTurn=120;
				minTurn=0;
				maxTurn=240;
				maxHorizontalRotSpeed=0.55000001;
				maxVerticalRotSpeed=0.25;
				commanding=3;
				memoryPointGun="";
				weapons[]={};
				magazines[]={};
				forceHideGunner=1;
				hasGunner=0;
				primaryGunner=0;
				primaryObserver=0;
				startEngine=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-110;
					maxAngleX=110;
					initAngleY=0;
					minAngleY=-110;
					maxAngleY=110;
					distanceZoomMin=20;
					distanceZoomMax=2000;
					initFov=0.69999999;
					minFov=0.69999999;
					maxFov=0.69999999;
				};
				class Hitpoints
				{
				};
			};
			class RightBack: LeftBack
			{
				initTurn=-120;
				minTurn=-240;
				maxTurn=0;
				hasGunner=0;
				commanding=2;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_bmp_init; _this call rhs_fnc_psnr5k_init;";
				fired="";
				reloaded="";
			};
		};
	};
	class rhs_brm1k_vdv: rhs_brm1k_base
	{
	};
	class rhs_brm1k_tv: rhs_brm1k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',8]"
		};
	};
	class rhs_brm1k_msv: rhs_brm1k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'DefaultRed']",
			"['Label', cBMPPlatoon, 'Platoon',12]"
		};
	};
	class rhs_brm1k_vmf: rhs_brm1k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Army',[3,1]]",
			"['Label', cBMPLeftBack, 'Army', [3,1]]"
		};
	};
	class rhs_brm1k_vv: rhs_brm1k_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBMP3NumberPlaces, 'Default']",
			"['Label', cBMPPlatoon, 'Platoon',13]",
			"['Label', cBMPLeftBack, 'Army',[6,1]]",
			"['Label', cBMPFront, 'Army',10]"
		};
	};
};
