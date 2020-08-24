class CfgPatches
{
	class rhs_c_t72
	{
		units[]=
		{
			"rhs_t72ba_tv",
			"rhs_t72bb_tv",
			"rhs_t72bc_tv",
			"rhs_t72bd_tv",
			"rhs_t72be_tv",
			"rhs_t90_tv",
			"rhs_t90a_tv",
			"rhs_t90saa_tv",
			"rhs_t90sab_tv",
			"rhs_t90am_tv",
			"rhs_t90sm_tv"
		};
		weapons[]={};
		name="T-72 Series Tanks";
	};
};
class RCWSOptics;
class DefaultEventHandlers;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class t72_init
			{
				file="\rhsafrf\addons\rhs_c_t72\scripts\rhs_t72_init.sqf";
				description="Initialization script for T-72";
			};
			class t72_autoloader
			{
				file="\rhsafrf\addons\rhs_c_t72\scripts\rhs_autoloader.sqf";
				description="Autoloader gun anim & stub ejection for T-72";
			};
			class t72_hatch
			{
				file="\rhsafrf\addons\rhs_c_t72\scripts\rhs_hatch.sqf";
				description="T72 commander hatch handler";
			};
			class turretBlow
			{
				file="\rhsafrf\addons\rhs_c_t72\scripts\rhs_turretBlow.sqf";
				description="T Tanks turret blowoff";
			};
			class hatchAbandon
			{
				file="\rhsafrf\addons\rhs_c_t72\scripts\rhs_hatchAbandon.sqf";
			};
			class TTanks_DefineLoadout
			{
				file="\rhsafrf\addons\rhs_c_t72\scripts\defineLoadout.sqf";
				description="T Tanks loadout handler";
			};
		};
	};
};
class CfgSounds
{
	class RHS_Error
	{
		name="Tank beep";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_t72\scripts\alarm_loop1.wss",
			0.3548134,
			1
		};
		titles[]={};
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
		class EventHandlers;
		class Components;
	};
	class rhs_a3t72tank_base: Tank_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHST72NumberPlaces,'Default']",
			"['Label',cRHST72PlnSymPlaces, 'Platoon',8]"
		};
		allowTabLock=0;
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		displayName="$STR_T72BA_Name";
		accuracy=0.30000001;
		supplyRadius=1;
		memoryPointSupply="pos driver";
		tf_range_api=45000;
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1.1;
		precision=1;
		typicalCargo[]={};
		side=0;
		driverCanSee="2+4+8";
		commanderCanSee="2+4+8";
		enableGPS=0;
		incomingMissileDetectionSystem=0;
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
		LODDriverTurnedIn=0;
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=0;
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
		fuelCapacity=29.5;
		RHS_fuelCapacity=1200;
		brakeIdleSpeed=1.78;
		maxSpeed=60;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		torqueCurve[]=
		{
			{0,0},
			{0.47826099,0.853329},
			{0.52173901,0.986803},
			{0.56521702,1},
			{0.60869598,1},
			{0.69565201,0.98080403},
			{0.86956501,0.88482302},
			{1.43478,0}
		};
		engineMOI=11;
		enginePower=626;
		peakTorque=3334;
		minOmega=80;
		maxOmega=240.86;
		idleRPM=800;
		redRPM=2300;
		thrustDelay=0;
		engineBrakeCoef=0.89999998;
		tankTurnForce=950000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.92000002;
		accelAidForceCoef=2.5;
		accelAidForceYOffset=-5.5;
		accelAidForceSpd=2.23;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineLosses=35;
		transmissionLosses=45;
		clutchStrength=40;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.95652199,0.43478301,0.95652199,0.78260899,0.91304302,0.78260899,0.91304302,0.78260899,0.86956501,0.73913002,0.826087,0.69565201,1,0.60869598};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-16.35,
				"N",
				0,
				"D1",
				8.1730003,
				"D2",
				4.4000001,
				"D3",
				3.4849999,
				"D4",
				2.7869999,
				"D5",
				2.027,
				"D6",
				1.467,
				"D7",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				9.0500002
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
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=0;
				width=0.45899999;
				mass=193;
				MOI=17.069;
				maxBrakeTorque=20000;
				sprungMass=3750;
				springStrength=484000;
				springDamperRate=11000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				dampingRate=3145;
				dampingRateInAir=3145;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=1;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=72000;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
				};
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
			class L7: L2;  //found empty after stripping
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
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
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
		tracksSpeed=-1;
		wheelCircumference=2.51;
		attenuationEffectType="TankAttenuation";
		extCameraPosition[]={0,2.2,-11};
		viewCargoShadow=1;
		viewCargoShadowDiff=1;
		viewCargoShadowAmb=1;
		cost=1500000;
		armor=450;
		armorStructural=220;
		explosionShielding=100;
		minTotalDamageThreshold=0.5;
		fireResistance=-1;
		class HitPoints: HitPoints
		{
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
			class Sideskirt_1_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_1";
				armorComponent="Skirt_1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_2_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_2";
				armorComponent="Skirt_2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_3_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_3";
				armorComponent="Skirt_3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_4_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_4";
				armorComponent="Skirt_4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_5_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_5";
				armorComponent="Skirt_5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_6_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_6";
				armorComponent="Skirt_6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_7_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_7";
				armorComponent="Skirt_7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_8_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_8";
				armorComponent="Skirt_8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_9_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_9";
				armorComponent="Skirt_9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class Sideskirt_10_hitpoint
			{
				simulation="RHS_Sideskirt_Rubber";
				armor=-80;
				material=-1;
				name="Skirt_10";
				armorComponent="Skirt_10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.2;
				radius=0.16;
			};
			class HitFuelTank_Left
			{
				armor=-80;
				material=-1;
				name="Hit_FuelTank_Left";
				armorComponent="Hit_FuelTank_Left";
				passThrough=0;
				minimalHit=0.30000001;
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
				name="Hit_Hull";
				armorComponent="Hit_Carousel";
				passThrough=0;
				minimalHit=0.039999999;
				explosionShielding=0.0099999998;
				radius=0.1;
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
			class Hit_Optic_Periscope
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Periscope";
				passThrough=0;
			};
			class Hit_Optic_TPD1K
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_TPD1K";
				passThrough=0;
			};
			class Hit_Optic_1K13
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_1K13";
				passThrough=0;
			};
			class Hit_Optic_TKN3
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_TKN3";
				passThrough=0;
			};
		};
		enableManualFire=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						LODTurnedOut=1200;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-5;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						weapons[]={};
						magazines[]={};
						canUseScanners=0;
						allowTabLock=0;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
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
								initFov="0.7/5";
								hitpoint="Hit_Optic_TKN3";
							};
							class Night: Wide
							{
								initFov="0.7/4.2";
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
						personTurretAction="RHS_passenger_inside_6";
						isPersonTurret=1;
						startEngine=0;
						class HitPoints
						{
							class HitTurretCom
							{
								isTurret=1;
								armor=-999;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=1;
								explosionShielding=0.60000002;
								radius=0.25;
							};
							class HitGunCom
							{
								isGun=1;
								armor=-999;
								material=-1;
								name="zbranVelitele";
								passThrough=0;
								minimalHit=1;
								explosionShielding=0.60000002;
								radius=0.25;
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
					class CommanderMG: CommanderOptics
					{
						proxyindex=2;
						dontCreateAi=1;
						cantCreateAI=1;
						memoryPointGun="mg_end";
						stabilizedInAxes=0;
						canHideGunner=0;
						isPersonTurret=0;
						soundAttenuationTurret="HeliAttenuationGunner";
						maxVerticalRotSpeed=0.34999999;
						minElev=-6;
						maxElev=45;
						initElev=44;
						initTurn=-180;
						LODOpticsOut=1200;
						LODOpticsIn=1200;
						weapons[]=
						{
							"rhs_weap_nsvt_t72"
						};
						magazines[]=
						{
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50",
							"rhs_mag_127x108mm_50"
						};
						selectionFireAnim="zasleh4";
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
								armorComponent="Hit_NSVT_Turret";
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
								armorComponent="Hit_NSVT_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
						};
					};
				};
				LODTurnedOut=0;
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zaslehCoax";
				startEngine=0;
				weapons[]=
				{
					"rhs_weap_2a46m",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm42_7",
					"rhs_mag_3bk18m_6",
					"rhs_mag_3of26_5",
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
				maxHorizontalRotSpeed=0.34999999;
				maxVerticalRotSpeed=0.07;
				minElev=-5;
				maxElev=14;
				initElev=10;
				initTurn=-13;
				canUseScanners=0;
				allowTabLock=0;
				enableManualFire=0;
				class ViewOptics;
				class OpticsIn
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
						HitPoint="Hit_Optic_TPD1K";
					};
					class 1k113: ViewOptics
					{
						camPos="view_1k13";
						initFov=0.087499999;
						visionMode[]=
						{
							"Normal"
						};
						HitPoint="Hit_Optic_1K13";
					};
					class Periscope: Day
					{
						camPos="view_periscope";
						initFov=0.46666601;
						HitPoint="Hit_Optic_Periscope";
					};
					class Night: Day
					{
						camPos="view_1k13";
						initFov=0.1;
						visionMode[]=
						{
							"NVG"
						};
						HitPoint="Hit_Optic_1K13";
					};
				};
				lockWhenDriverOut=1;
				forceHideGunner=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=-150;
						material=-1;
						name="vez";
						armorComponent="Hit_Turret";
						passThrough=0;
						minimalHit=-0.2;
						explosionShielding=0.00089999998;
						radius=0.1;
					};
					class HitGun
					{
						armor=-150;
						material=-1;
						name="zbran";
						armorComponent="Hit_Gun";
						passThrough=0;
						minimalHit=-0.2;
						explosionShielding=9.9999997e-005;
						radius=0.1;
					};
				};
				armorLights=0.1;
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
		class textureSources
		{
			class standard
			{
				displayName="Standard";
			};
			class rhs_Sand: standard
			{
				displayName="Sand";
			};
			class rhs_chdkz: rhs_Sand
			{
				displayName="CHDKZ";
			};
			class r1: standard
			{
				displayName="#1";
			};
			class r2: standard
			{
				displayName="#2";
			};
			class r3: standard
			{
				displayName="#3";
			};
			class r4: standard
			{
				displayName="#4";
			};
			class r5: standard
			{
				displayName="#5";
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
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHST72NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				displayName="Set side number";
				tooltip="Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHST72NumberPlaces}else{[_this, [['Number', cRHST72NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				displayName="Define platoon symbol type";
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
				displayName="Set platoon symbol";
				tooltip="Set platoon symbol located on turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST72PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalHonor_type: rhs_decalPlatoon_type
			{
				displayName="Define honor symbol type";
				property="rhs_decalHonor_type";
				class values: values
				{
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
					class Army: Army;  //found empty after stripping
				};
			};
			class rhs_decalHonor: rhs_decalPlatoon
			{
				displayName="Set honor symbol";
				tooltip="Define symbol located on IR Lamp ('84-'89 type tanks only). Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalHonor";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST72HnrSymPlaces,  _this getVariable ['rhs_decalHonor_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_ammoslot_1_type
			{
				displayName="Ammo slot #1 type";
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
				displayName="Ammo slot #1 count";
				tooltip="Define number of rounds stored inside of type #1. Max 22. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',22] spawn rhs_fnc_TTanks_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #2 type";
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
				displayName="Ammo slot #2 count";
				tooltip="Define number of rounds stored inside of type #2. Max 22. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #3 type";
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
				displayName="Ammo slot #3 count";
				tooltip="Define number of rounds stored inside of type #3. Max 22. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #4 type";
				tooltip="Define type of shell for #4 slot [ATGM rounds]";
				property="rhs_ammoslot4_type";
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
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				displayName="Ammo slot #4 count";
				tooltip="Define number of rounds stored inside of type #4. Max 22. Leave -1 for default loadout";
				property="rhs_ammoslot_4";
			};
			class rhs_hide_com_shield
			{
				displayName="Remove commander shield";
				property="rhs_hide_com_shield";
				control="CheckboxNumber";
				expression="_this animate ['hide_com_shield',_value,true]";
				defaultValue="0";
			};
		};
		class Damage;  //found empty after stripping
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
				init="_this call RHS_fnc_T72_init;";
				fired="_this call RHS_fnc_T72_autoloader;";
				hitpart="_this call rhs_fnc_hitSpall";
				killed="[_this select 0,'rhs_Wreck_T72_turret_F'] call rhs_fnc_turretBlow";
				getOut="_this call rhs_fnc_t72_hatch;_this call rhs_fnc_hatchAbandon";
				engine="[_this select 0,_this select 1,2.7] call rhs_fnc_engineStartupDelay";
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
	class rhs_t72ba_tv: rhs_a3t72tank_base
	{
		displayName="$STR_T72BA_Name";
	};
	class rhs_t72bb_tv: rhs_a3t72tank_base
	{
		displayName="$STR_T72BB_Name";
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
			class rhs_chdkz: rhs_Sand
			{
				displayName="CHDKZ";
			};
		};
		class HitPoints: HitPoints
		{
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
			class era_29_hitpoint
			{
				simulation="RHS_ERA_K1";
				armor=-80;
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
				simulation="RHS_ERA_K1";
				armor=-80;
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
				simulation="RHS_ERA_K1";
				armor=-80;
				material=-1;
				name="e37";
				armorComponent="e37";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
		};
	};
	class rhs_t72bc_tv: rhs_a3t72tank_base
	{
		displayName="$STR_T72BC_Name";
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
			class rhs_chdkz: rhs_chdkz
			{
				displayName="";
			};
		};
		class HitPoints: HitPoints
		{
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
		};
	};
	class rhs_t72bd_tv: rhs_a3t72tank_base
	{
		displayName="$STR_T72BD_Name";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=29.5;
		RHS_fuelCapacity=1200;
		brakeIdleSpeed=1.78;
		maxSpeed=68;
		torqueCurve[]=
		{
			{0,0},
			{0.47826099,0.853329},
			{0.52173901,0.986803},
			{0.56521702,1},
			{0.60869598,1},
			{0.69565201,0.98080403},
			{0.86956501,0.88482302},
			{1.43478,0}
		};
		engineMOI=17;
		enginePower=745;
		peakTorque=4321;
		minOmega=80;
		maxOmega=240.86;
		idleRPM=800;
		redRPM=2300;
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.95652199,0.43478301,0.95652199,0.78260899,0.91304302,0.78260899,0.91304302,0.78260899,0.86956501,0.73913002,0.826087,0.69565201,1,0.60869598};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-16.35,
				"N",
				0,
				"D1",
				8.1730003,
				"D2",
				4.4000001,
				"D3",
				3.4849999,
				"D4",
				2.7869999,
				"D5",
				2.027,
				"D6",
				1.467,
				"D7",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				9.0500002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				width=0.50400001;
				MOI=17.069;
				sprungMass=-1;
				dampingRate=3143;
				dampingRateInAir=3143;
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
			class L7: L2;  //found empty after stripping
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
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
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
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
			class rhs_chdkz: rhs_chdkz
			{
				displayName="";
			};
		};
		class Damage;  //found empty after stripping
		class HitPoints: HitPoints
		{
			class Hit_Optic_SosnaU
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ESSA";
				passThrough=0;
			};
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
		};
		enableManualFire=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						personTurretAction="passenger_inside_6";
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
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
								};
							};
						};
					};
					class CommanderMG: CommanderMG;  //found empty after stripping
				};
				maxHorizontalRotSpeed=0.88;
				weapons[]=
				{
					"rhs_weap_2a46m_5",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_8",
					"rhs_mag_3bk31_3",
					"rhs_mag_3of26_7",
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
					class Wide: ViewOptics
					{
						camPos="gunnerview2";
						hitpoint="Hit_Optic_SosnaU";
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
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type;  //found empty after stripping
			class rhs_decalNumber: rhs_decalNumber;  //found empty after stripping
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type;  //found empty after stripping
			class rhs_decalPlatoon: rhs_decalPlatoon;  //found empty after stripping
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
			class rhs_ammoslot_1: rhs_ammoslot_1;  //found empty after stripping
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
			class rhs_ammoslot_2: rhs_ammoslot_2;  //found empty after stripping
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
			class rhs_ammoslot_3: rhs_ammoslot_3;  //found empty after stripping
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
			class rhs_ammoslot_4: rhs_ammoslot_4;  //found empty after stripping
		};
	};
	class rhs_t72be_tv: rhs_t72bd_tv
	{
		displayName="$STR_T72BE_Name";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=29.5;
		RHS_fuelCapacity=1200;
		brakeIdleSpeed=1.78;
		maxSpeed=68;
		torqueCurve[]=
		{
			{0,0},
			{0.47826099,0.853329},
			{0.52173901,0.986803},
			{0.56521702,1},
			{0.60869598,1},
			{0.69565201,0.98080403},
			{0.86956501,0.88482302},
			{1.43478,0}
		};
		engineMOI=17;
		enginePower=831;
		peakTorque=4521;
		minOmega=80;
		maxOmega=240.86;
		idleRPM=800;
		redRPM=2300;
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.95652199,0.43478301,0.95652199,0.78260899,0.91304302,0.78260899,0.91304302,0.78260899,0.86956501,0.73913002,0.826087,0.69565201,1,0.60869598};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-16.35,
				"N",
				0,
				"D1",
				8.1730003,
				"D2",
				4.4000001,
				"D3",
				3.4849999,
				"D4",
				2.7869999,
				"D5",
				2.027,
				"D6",
				1.467,
				"D7",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				9.0500002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				width=0.50400001;
				MOI=17.069;
				sprungMass=-1;
				dampingRate=3143;
				dampingRateInAir=3143;
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
			class L7: L2;  //found empty after stripping
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
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
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
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
			};
			class Rear: OpticView
			{
				camPos="view_rear";
				camDir="view_rear_dir";
				hitpoint="Hit_Optic_Driver_Rear";
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau_dcam";
			};
		};
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
		};
		class Damage;  //found empty after stripping
		animationList[]=
		{
			"hide_hull_slats",
			1,
			"unhide_tank_holders",
			0
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
			class era_37_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e37";
				armorComponent="e37";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_38_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e38";
				armorComponent="e38";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_39_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e39";
				armorComponent="e39";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_40_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e40";
				armorComponent="e40";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_41_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e41";
				armorComponent="e41";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_42_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e42";
				armorComponent="e42";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_43_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e43";
				armorComponent="e43";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_44_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e44";
				armorComponent="e44";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_45_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e45";
				armorComponent="e45";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_46_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e46";
				armorComponent="e46";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_47_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e47";
				armorComponent="e47";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_48_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e48";
				armorComponent="e48";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_49_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e49";
				armorComponent="e49";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_50_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e50";
				armorComponent="e50";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_51_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e51";
				armorComponent="e51";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_52_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e52";
				armorComponent="e52";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_53_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e53";
				armorComponent="e53";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_54_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e54";
				armorComponent="e54";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_55_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e55";
				armorComponent="e55";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_56_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e56";
				armorComponent="e56";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_57_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e57";
				armorComponent="e57";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class era_58_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e58";
				armorComponent="e58";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_59_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e59";
				armorComponent="e59";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_60_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e60";
				armorComponent="e60";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_61_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e61";
				armorComponent="e61";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_62_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e62";
				armorComponent="e62";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_63_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e63";
				armorComponent="e63";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_64_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e64";
				armorComponent="e64";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_65_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e65";
				armorComponent="e65";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_66_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e66";
				armorComponent="e66";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_67_hitpoint
			{
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e67";
				armorComponent="e67";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_68_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e68";
				armorComponent="e68";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_69_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e69";
				armorComponent="e69";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_70_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e70";
				armorComponent="e70";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
		};
	};
	class rhs_t90_tv: rhs_t72bd_tv
	{
		displayName="$STR_T90_Name";
		simulation="tankX";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=29.5;
		RHS_fuelCapacity=1200;
		brakeIdleSpeed=1.78;
		maxSpeed=60;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		torqueCurve[]=
		{
			{0,0},
			{0.47826099,0.853329},
			{0.52173901,0.986803},
			{0.56521702,1},
			{0.60869598,1},
			{0.69565201,0.98080403},
			{0.86956501,0.88482302},
			{1.43478,0}
		};
		engineMOI=11;
		enginePower=626;
		peakTorque=3334;
		minOmega=80;
		maxOmega=240.86;
		idleRPM=800;
		redRPM=2300;
		thrustDelay=0;
		engineBrakeCoef=0.89999998;
		tankTurnForce=950000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.92000002;
		accelAidForceCoef=2.5;
		accelAidForceYOffset=-5.5;
		accelAidForceSpd=2.23;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineLosses=35;
		transmissionLosses=45;
		clutchStrength=40;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.95652199,0.43478301,0.95652199,0.78260899,0.91304302,0.78260899,0.91304302,0.78260899,0.86956501,0.73913002,0.826087,0.69565201,1,0.60869598};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-16.35,
				"N",
				0,
				"D1",
				8.1730003,
				"D2",
				4.4000001,
				"D3",
				3.4849999,
				"D4",
				2.7869999,
				"D5",
				2.027,
				"D6",
				1.467,
				"D7",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				9.0500002
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
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=0;
				width=0.45899999;
				mass=193;
				MOI=17.069;
				maxBrakeTorque=20000;
				sprungMass=3750;
				springStrength=484000;
				springDamperRate=11000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				dampingRate=3145;
				dampingRateInAir=3145;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=1;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=72000;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
				};
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
			class L7: L2;  //found empty after stripping
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
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
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
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
			class RHS_CDF
			{
				displayName="";
			};
		};
		rhs_aps_shtora=1;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call RHS_fnc_T72_init;";
			};
		};
		lockDetectionSystem=4;
		class Hitpoints: HitPoints
		{
			class Hit_Optic_Driver
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Driver";
				passThrough=0;
			};
			class Hit_Optic_Periscope
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Periscope";
				passThrough=0;
			};
			class Hit_Optic_1G46
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_1G46";
				passThrough=0;
			};
			class Hit_Optic_TPN4
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ESSA";
				passThrough=0;
			};
			class Hit_Optic_ESSA
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ESSA";
				passThrough=0;
			};
			class Hit_Optic_NSVT
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_NSVT";
				passThrough=0;
			};
			class Hit_Optic_TKN4S
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_TKN4S";
				passThrough=0;
			};
			class Hit_Optic_Periscope1
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Periscope1";
				passThrough=0;
			};
			class Hit_Optic_Periscope2
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Periscope2";
				passThrough=0;
			};
			class Hit_Optic_Periscope3
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Periscope3";
				passThrough=0;
			};
			class Hit_Optic_Periscope4
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Periscope4";
				passThrough=0;
			};
			class Hit_Shtora_L
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Shtora_L";
				passThrough=0;
			};
			class Hit_Shtora_R
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Shtora_R";
				passThrough=0;
			};
			class Hit_LWR_1
			{
				armor=-20;
				explosionShielding=0;
				name="";
				armorComponent="aps_s1";
				passThrough=0;
			};
			class Hit_LWR_2
			{
				armor=-20;
				explosionShielding=0;
				name="";
				armorComponent="aps_s2";
				passThrough=0;
			};
			class Hit_LWR_3
			{
				armor=-20;
				explosionShielding=0;
				name="";
				armorComponent="aps_s3";
				passThrough=0;
			};
			class Hit_LWR_4
			{
				armor=-20;
				explosionShielding=0;
				name="";
				armorComponent="aps_s4";
				passThrough=0;
			};
			class Hit_LWR_5
			{
				armor=-20;
				explosionShielding=0;
				name="";
				armorComponent="aps_s5";
				passThrough=0;
			};
			class Hit_LWR_6
			{
				armor=-20;
				explosionShielding=0;
				name="";
				armorComponent="aps_s6";
				passThrough=0;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxHorizontalRotSpeed=0.47999999;
				weapons[]=
				{
					"rhs_weap_2a46m_4",
					"rhs_weap_pkt",
					"rhs_weap_902b",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_8",
					"rhs_mag_3bk31_3",
					"rhs_mag_3of26_7",
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
				class OpticsIn
				{
					class day1
					{
						camPos="view_1g46";
						hitpoint="Hit_Optic_1G46";
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
						camPos="view_periscope";
						hitpoint="Hit_Optic_Periscope";
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
						camPos="view_tpn4";
						hitpoint="Hit_Optic_tpn4";
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
							"rhs_weap_nsvt_t72"
						};
						magazines[]=
						{
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150"
						};
						memoryPointGun="mg_end";
						minElev=-7;
						maxElev=60;
						minTurn=-180;
						maxTurn=180;
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
								camPos="commanderview_aa";
								hitpoint="Hit_Optic_NSVT";
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
								camPos="commanderview";
								hitpoint="Hit_Optic_TKN4S";
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
							class day2: day1
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
						personTurretAction="passenger_inside_6";
						selectionFireAnim="zasleh4";
						lockWhenDriverOut=0;
						maxHorizontalRotSpeed=0.89999998;
						maxVerticalRotSpeed=0.47;
					};
					delete CommanderMG;
				};
			};
		};
		class Damage;  //found empty after stripping
	};
	class rhs_t90a_tv: rhs_t90_tv
	{
		displayName="$STR_T90A_Name";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=29.5;
		RHS_fuelCapacity=1200;
		brakeIdleSpeed=1.78;
		maxSpeed=68;
		torqueCurve[]=
		{
			{0,0},
			{0.47826099,0.853329},
			{0.52173901,0.986803},
			{0.56521702,1},
			{0.60869598,1},
			{0.69565201,0.98080403},
			{0.86956501,0.88482302},
			{1.43478,0}
		};
		engineMOI=17;
		enginePower=736;
		peakTorque=3920;
		minOmega=80;
		maxOmega=240.86;
		idleRPM=800;
		redRPM=2300;
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.95652199,0.43478301,0.95652199,0.78260899,0.91304302,0.78260899,0.91304302,0.78260899,0.86956501,0.73913002,0.826087,0.69565201,1,0.60869598};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-16.35,
				"N",
				0,
				"D1",
				8.1730003,
				"D2",
				4.4000001,
				"D3",
				3.4849999,
				"D4",
				2.7869999,
				"D5",
				2.027,
				"D6",
				1.467,
				"D7",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				9.0500002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				width=0.50400001;
				MOI=17.069;
				sprungMass=-1;
				dampingRate=3143;
				dampingRateInAir=3143;
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
			class L7: L2;  //found empty after stripping
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
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
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
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
		};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		rhs_aps_shtora=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxHorizontalRotSpeed=0.88;
				weapons[]=
				{
					"rhs_weap_2a46m_5",
					"rhs_weap_pkt",
					"rhs_weap_902b",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_8",
					"rhs_mag_3bk31_3",
					"rhs_mag_3of26_7",
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
				class OpticsIn
				{
					class Periscope: ViewOptics
					{
						camPos="view_periscope";
						hitpoint="Hit_Optic_Periscope";
						minFov=0.466667;
						maxFov=0.466667;
						initFov=0.466667;
						visionMode[]=
						{
							"Normal"
						};
					};
					class day1: Periscope
					{
						camPos="view_1g46";
						hitpoint="Hit_Optic_1G46";
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
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
						camPos="gunnerview2";
						hitpoint="Hit_Optic_ESSA";
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
					delete CommanderMG;
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				killed="[_this select 0,'rhs_Wreck_T90a_turret_F'] call rhs_fnc_turretBlow";
			};
		};
	};
	class rhs_t90saa_tv: rhs_t90a_tv
	{
		displayName="$STR_T90SAA_Name";
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
		};
		class HitPoints: Hitpoints
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
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
				simulation="RHS_ERA_K5";
				armor=-100;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
		};
		class Damage;  //found empty after stripping
	};
	class rhs_t90sab_tv: rhs_t90a_tv
	{
		displayName="$STR_T90SAB_Name";
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
		};
		class Damage;  //found empty after stripping
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
			};
			class Rear: OpticView
			{
				camPos="view_rear";
				camDir="view_rear_dir";
				hitpoint="Hit_Optic_Driver_Rear";
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau_dcam";
			};
		};
		class HitPoints: Hitpoints
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e37";
				armorComponent="e37";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_38_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e38";
				armorComponent="e38";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_39_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e39";
				armorComponent="e39";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_40_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e40";
				armorComponent="e40";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_41_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e41";
				armorComponent="e41";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_42_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e42";
				armorComponent="e42";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_43_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e43";
				armorComponent="e43";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_44_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e44";
				armorComponent="e44";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_45_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e45";
				armorComponent="e45";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_46_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e46";
				armorComponent="e46";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_47_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e47";
				armorComponent="e47";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_48_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e48";
				armorComponent="e48";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_49_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e49";
				armorComponent="e49";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_50_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e50";
				armorComponent="e50";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_51_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e51";
				armorComponent="e51";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_52_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e52";
				armorComponent="e52";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_53_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e53";
				armorComponent="e53";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_54_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e54";
				armorComponent="e54";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
		};
	};
	class rhs_t90am_tv: rhs_t90_tv
	{
		displayName="$STR_T90AM_Name";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=29.5;
		RHS_fuelCapacity=1200;
		brakeIdleSpeed=1.78;
		maxSpeed=70;
		torqueCurve[]=
		{
			{0,0},
			{0.47826099,0.853329},
			{0.52173901,0.986803},
			{0.56521702,1},
			{0.60869598,1},
			{0.69565201,0.98080403},
			{0.86956501,0.88482302},
			{1.43478,0}
		};
		engineMOI=17;
		enginePower=831;
		peakTorque=4821;
		minOmega=80;
		maxOmega=240.86;
		idleRPM=800;
		redRPM=2300;
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.95652199,0.43478301,0.95652199,0.78260899,0.91304302,0.78260899,0.91304302,0.78260899,0.86956501,0.73913002,0.826087,0.69565201,1,0.60869598};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.3499999,
				"N",
				0,
				"D1",
				8.1730003,
				"D2",
				4.4000001,
				"D3",
				3.4849999,
				"D4",
				2.7869999,
				"D5",
				2.027,
				"D6",
				1.467,
				"D7",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				9.0500002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				width=0.50400001;
				MOI=17.069;
				sprungMass=-1;
				dampingRate=3143;
				dampingRateInAir=3143;
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
			class L7: L2;  //found empty after stripping
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
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
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
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
		};
		class Damage;  //found empty after stripping
		rhs_aps_shtora=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxHorizontalRotSpeed=1;
				weapons[]=
				{
					"rhs_weap_2a46m_5",
					"rhs_weap_pkt",
					"rhs_weap_902b",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_8",
					"rhs_mag_3bk31_3",
					"rhs_mag_3of26_7",
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
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="gunnerview2";
						hitpoint="Hit_Optic_SosnaU";
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
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"rhs_weap_pkt_t90m_RWS"
						};
						magazines[]=
						{
							"rhs_mag_762x54mm_250",
							"rhs_mag_762x54mm_250"
						};
						memoryPointGun="mg_end";
						minElev=-7;
						maxElev=50;
						minTurn=-180;
						maxTurn=180;
						initElev=0;
						LodTurnedOut=0;
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								camPos="commanderview";
								hitpoint="Hit_Optic_SosnaU";
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
						};
						personTurretAction="passenger_inside_6";
						selectionFireAnim="zasleh4";
						lockWhenDriverOut=0;
						maxHorizontalRotSpeed=0.89999998;
						maxVerticalRotSpeed=0.47;
					};
					delete CommanderMG;
				};
			};
		};
		class HitPoints: Hitpoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_18_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_19_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_20_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_21_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_22_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_23_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_24_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_25_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e37";
				armorComponent="e37";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_38_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e38";
				armorComponent="e38";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_39_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e39";
				armorComponent="e39";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_40_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e40";
				armorComponent="e40";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_41_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e41";
				armorComponent="e41";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_42_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e42";
				armorComponent="e42";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_43_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e43";
				armorComponent="e43";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_44_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e44";
				armorComponent="e44";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_45_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e45";
				armorComponent="e45";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_46_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e46";
				armorComponent="e46";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_47_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e47";
				armorComponent="e47";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_48_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e48";
				armorComponent="e48";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_49_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e49";
				armorComponent="e49";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_50_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e50";
				armorComponent="e50";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_51_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e51";
				armorComponent="e51";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_52_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e52";
				armorComponent="e52";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_53_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e53";
				armorComponent="e53";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_54_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e54";
				armorComponent="e54";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class era_55_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e55";
				armorComponent="e55";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_56_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e56";
				armorComponent="e56";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_57_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e57";
				armorComponent="e57";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_58_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e58";
				armorComponent="e58";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_59_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e59";
				armorComponent="e59";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_60_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e60";
				armorComponent="e60";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_61_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e61";
				armorComponent="e61";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_62_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e62";
				armorComponent="e62";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_63_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e63";
				armorComponent="e63";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_64_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e64";
				armorComponent="e64";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_65_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e65";
				armorComponent="e65";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_66_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e66";
				armorComponent="e66";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				killed="[_this select 0,'rhs_Wreck_T90am_turret_F'] call rhs_fnc_turretBlow";
			};
		};
	};
	class rhs_t90sm_tv: rhs_t90am_tv
	{
		displayName="$STR_T90SM_Name";
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_Sand: rhs_Sand;  //found empty after stripping
		};
		class Damage;  //found empty after stripping
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
			};
			class Rear: OpticView
			{
				camPos="view_rear";
				camDir="view_rear_dir";
				hitpoint="Hit_Optic_Driver_Rear";
				initFov=1;
				minFov=1;
				maxFov=1;
				visionMode[]=
				{
					"NVG",
					"Ti"
				};
				thermalMode[]={0,1};
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxHorizontalRotSpeed=1;
				weapons[]=
				{
					"rhs_weap_2a46m_5",
					"rhs_weap_pkt",
					"rhs_weap_902b",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_8",
					"rhs_mag_3bk31_3",
					"rhs_mag_3of26_7",
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
							"rhs_weap_nsvt_t90m_RWS"
						};
						magazines[]=
						{
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150"
						};
						memoryPointGun="mg_end";
						minElev=-7;
						maxElev=50;
						minTurn=-180;
						maxTurn=180;
						initElev=0;
						LodTurnedOut=0;
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								camPos="commanderview";
								hitpoint="Hit_Optic_SosnaU";
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
						};
						personTurretAction="vehicle_turnout_1";
						selectionFireAnim="zasleh4";
						lockWhenDriverOut=0;
						maxHorizontalRotSpeed=0.89999998;
						maxVerticalRotSpeed=0.47;
					};
					delete CommanderMG;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_23_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_26_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
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
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e37";
				armorComponent="e37";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_38_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e38";
				armorComponent="e38";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_39_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e39";
				armorComponent="e39";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_40_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e40";
				armorComponent="e40";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_41_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e41";
				armorComponent="e41";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_42_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e42";
				armorComponent="e42";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_43_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e43";
				armorComponent="e43";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_44_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e44";
				armorComponent="e44";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_45_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e45";
				armorComponent="e45";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_46_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e46";
				armorComponent="e46";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_47_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e47";
				armorComponent="e47";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_48_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e48";
				armorComponent="e48";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_49_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e49";
				armorComponent="e49";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class era_50_hitpoint
			{
				simulation="RHS_ERA_RELIKT";
				armor=-150;
				material=-1;
				name="e50";
				armorComponent="e50";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.16;
			};
			class SLAT_51_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e51";
				armorComponent="e51";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_52_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e52";
				armorComponent="e52";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_53_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e53";
				armorComponent="e53";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_54_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e54";
				armorComponent="e54";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_55_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e55";
				armorComponent="e55";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_56_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e56";
				armorComponent="e56";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
			class SLAT_57_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="e57";
				armorComponent="e57";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				killed="[_this select 0,'rhs_Wreck_T90am_turret_F'] call rhs_fnc_turretBlow";
			};
		};
	};
	class ThingX;
	class rhs_Wreck_T72_turret_F: ThingX
	{
		reversed=1;
		displayName="T-72B Wreck (Turret)";
		icon="iconObject_1x2";
	};
	class rhs_Wreck_T90a_turret_F: rhs_Wreck_T72_turret_F
	{
		displayName="T-90A Wreck (Turret)";
	};
	class rhs_Wreck_T90am_turret_F: rhs_Wreck_T72_turret_F
	{
		displayName="T-90A Wreck (Turret)";
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class Proxyrhs_t72b_hull_extra: ProxyRetex;  //found empty after stripping
	class Proxyrhs_t72b_hull2_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b3_hull: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_drivl: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_drivr: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_retl: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_retr: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_gun_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_comcop_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_turret_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_turret2_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_B3gun_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_B3comcop_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_B3turretextra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_latefront: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_veryearly: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_andbfront: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t90a_turretextra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t90_comm: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyturret_extra_t90: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_nsvt_handle_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_nsvt_gunmount_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_nsvt_extra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_e_hull: Proxyrhs_t72b_hull_extra;  //found empty after stripping
	class Proxyrhs_t72b_e_turretextra: Proxyrhs_t72b_hull_extra;  //found empty after stripping
};
