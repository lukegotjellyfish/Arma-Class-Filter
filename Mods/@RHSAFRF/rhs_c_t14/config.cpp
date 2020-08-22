class CfgPatches
{
	class rhs_c_t14
	{
		units[]=
		{
			"rhs_t14_tv"
		};
		weapons[]={};
		name="T-14 Armata Series Tanks";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class t14_init
			{
				file="rhsafrf\addons\rhs_c_t14\scripts\rhs_fnc_t14_init.sqf";
			};
			class t14_deleted
			{
				file="rhsafrf\addons\rhs_c_t14\scripts\rhs_fnc_t14_deleted.sqf";
			};
			class t14_destroyed
			{
				file="rhsafrf\addons\rhs_c_t14\scripts\rhs_fnc_t14_destroyed.sqf";
			};
		};
	};
};
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
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
		class EventHandlers;
	};
	class rhs_t14_base: Tank_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHST14NumberPlaces,'Default']"
		};
		tf_range_api=45000;
		typicalCargo[]={};
		driverCanSee="2+4+8";
		commanderCanSee="2+4+8";
		enableGPS=1;
		driverForceOptics=1;
		viewdriverinExternal=1;
		LODDriverTurnedIn=0;
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=0;
		extCameraPosition[]={0,2.25,-7};
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectTankBack";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustEffectTankBack";
			};
		};
		cost=1500000;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		attenuationEffectType="TankAttenuation";
		simulation="tankX";
		brakeIdleSpeed=0.1;
		maxSpeed=70;
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		waterResistanceCoef=0.25;
		enginePower=1120;
		maxOmega=251.327;
		minOmega=104.72;
		redRpm=2400;
		idleRpm=1000;
		peakTorque=5500;
		torqueCurve[]=
		{
			{0.41666701,0.76363599},
			{0.5,0.89090902},
			{0.58333302,0.91818202},
			{0.66666698,0.98181802},
			{0.75,1},
			{0.83333302,0.96363598},
			{0.91666698,0.86363602},
			{1,0.65454501}
		};
		thrustDelay=0.5;
		engineMOI=20;
		dampingRateFullThrottle=2.5;
		dampingRateZeroThrottleClutchEngaged=8;
		dampingRateZeroThrottleClutchDisengaged=2;
		clutchStrength=60;
		latency=0.5;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.58333302,0.41666701,0.41666701,0.95833302,0.41666701,0.9375,0.72916698,0.91666698,0.70833302,0.91666698,0.70833302,0.91666698,0.70833302,0.91666698,0.66666698,1,0.625};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.5,
				"N",
				0,
				"D1",
				7.8000002,
				"D2",
				5.5999999,
				"D3",
				4,
				"D4",
				2.9000001,
				"D5",
				2.0999999,
				"D6",
				1.5,
				"D7",
				1.1
			};
			transmissionRatios[]=
			{
				"High",
				5.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		tankTurnForce=1300000;
		tankTurnForceAngMinSpd=0.78539801;
		tankTurnForceAngSpd=0.837758;
		accelAidForceCoef=2.5;
		accelAidForceYOffset=-2;
		accelAidForceSpd=1.4;
		class Wheels
		{
			class L2
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=0;
				width=0.5;
				mass=160;
				MOI=11.552;
				dampingRate=1300;
				dampingRateInAir=1300;
				dampingRateDestroyed=3000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				sprungMass=3668;
				springStrength=300000;
				springDamperRate=45000;
				maxBrakeTorque=45000;
				latStiffX=1.5;
				latStiffY=60;
				longitudinalStiffnessPerUnitGravity=13000;
				frictionVsSlipGraph[]=
				{
					{0,0.55000001},
					{0.1,1.55},
					{0.60000002,0.89999998}
				};
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L4;  //found empty after stripping
			class L6: L4;  //found empty after stripping
			class L7: L2;  //found empty after stripping
			class L8: L2;  //found empty after stripping
			class L9: L2
			{
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class L1: L2
			{
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
			class R8: R2;  //found empty after stripping
			class R9: R2
			{
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class R1: R2
			{
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
		};
		armor=500;
		armorStructural=200;
		damageResistance=0.0038900001;
		epeImpulseDamageCoef=18;
		class HitPoints: HitPoints
		{
			class HitFuelTank_Left
			{
				armor=-80;
				material=-1;
				name="Hit_Fuel_L";
				armorComponent="Hit_Fuel_L";
				passThrough=0;
				minimalHit=0.30000001;
				explosionShielding=0;
				radius=0.1;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name="Hit_Fuel_R";
				armorComponent="Hit_Fuel_R";
			};
			class HitFuel
			{
				armor=999;
				name="Hit_Fuel";
				armorComponent="Hit_Fuel";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.0099999998;
				depends="(HitFuelTank_Left+HitFuelTank_Right)*0.5";
			};
			class HitHull: HitHull
			{
				armor=-100;
				material=-1;
				name="Hit_Ammo";
				armorComponent="Hit_Ammo";
				passThrough=0;
				minimalHit=-0.16;
				explosionShielding=0.0099999998;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=-150;
				material=-1;
				name="Hit_Engine";
				armorComponent="Hit_Engine";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0089999996;
				radius=0.18000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				armorComponent="Hit_Track_L";
				name="Hit_Track_L";
				passThrough=0;
				material=-1;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				armorComponent="Hit_Track_R";
				name="Hit_Track_R";
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
			class era_1_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
				material=-1;
				name="e36";
				armorComponent="e36";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_37_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-150;
				material=-1;
				name="e37";
				armorComponent="e37";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_38_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e38";
				armorComponent="e38";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_39_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e39";
				armorComponent="e39";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_40_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e40";
				armorComponent="e40";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_41_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e41";
				armorComponent="e41";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
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
						memoryPointGun="usti hlavne2";
						minElev=-15;
						maxElev=50;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.9;
						maxVerticalRotSpeed=1.9;
						weapons[]=
						{
							"rhs_weap_pktm_t14_RWS",
							"rhs_weap_afganit_1",
							"rhs_weap_afganit_2",
							"rhs_weap_afganit_3",
							"rhs_weap_afganit_4",
							"rhs_weap_afganit_5",
							"rhs_weap_afganit_6",
							"rhs_weap_afganit_7",
							"rhs_weap_afganit_8",
							"rhs_weap_afganit_9",
							"rhs_weap_afganit_10",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"rhs_mag_762x54mm_2000",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"SmokeLauncherMag"
						};
						isPersonTurret=0;
						personTurretAction="vehicle_turnout_2";
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=40;
						initOutTurn=0;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={4,5};
						};
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide;  //found empty after stripping
							class Medium: Medium;  //found empty after stripping
							class Narrow: Narrow;  //found empty after stripping
						};
						startEngine=0;
						class HitPoints
						{
							class HitTurretCom
							{
								isTurret=1;
								armor=0.1;
								material=-1;
								name="Hit_Commander_Gun";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.2;
							};
							class HitGunCom
							{
								isGun=1;
								armor=0.1;
								material=-1;
								name="Hit_Commander_Turret";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.2;
							};
						};
						selectionFireAnim="zasleh2";
					};
				};
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh";
				weapons[]=
				{
					"rhs_weap_2a82_1m",
					"rhs_weap_pktm_t14_RWS"
				};
				magazines[]=
				{
					"rhs_mag_3bm69_17",
					"rhs_mag_3of26_7",
					"rhs_mag_3bk31_6",
					"rhs_mag_9m119m_4",
					"rhs_mag_762x54mm_1000",
					"rhs_mag_762x54mm_1000"
				};
				forceHideGunner=1;
				minElev=-5;
				maxElev=20;
				initElev=10;
				maxHorizontalRotSpeed=1.9;
				maxVerticalRotSpeed=1.9;
				lockWhenDriverOut=1;
				class OpticsIn: Optics_Gunner_MBT_02
				{
					class Wide: Wide;  //found empty after stripping
					class Medium: Medium;  //found empty after stripping
					class Narrow: Narrow;  //found empty after stripping
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=-200;
						material=-1;
						name="Hit_Turret";
						armorComponent="Hit_Turret";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.30000001;
					};
					class HitGun
					{
						armor=-200;
						material=-1;
						name="Hit_Gun";
						armorComponent="Hit_Gun";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.15000001;
					};
				};
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHST14NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHST14NumberPlaces}else{[_this, [['Number', cRHST14NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
		};
		class Damage;  //found empty after stripping
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_t14_init";
				deleted="_this call rhs_fnc_t14_deleted";
				killed="_this call rhs_fnc_t14_destroyed";
			};
		};
	};
	class rhs_t14_tv: rhs_t14_base
	{
		side=0;
	};
};
