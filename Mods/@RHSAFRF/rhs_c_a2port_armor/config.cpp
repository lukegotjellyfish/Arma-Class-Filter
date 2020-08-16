class CfgPatches
{
	class rhs_c_a2port_armor
	{
		units[]=
		{
			"rhs_zsu234_aa",
			"rhs_btr60_vmf",
			"rhs_btr60_vdv",
			"rhs_btr60_vv",
			"rhs_btr60_msv"
		};
		weapons[]={};
		name="A2 ported armor";
	};
};
class SensorTemplatePassiveRadar;
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
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
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
		class Sounds: Sounds
		{
		class EventHandlers;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Components;
	};
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
		};
	class rhs_btr_base: Wheeled_APC_F
	{
		class AnimationSources;
		class Attributes
		{
			class ObjectTexture;
			class rhs_decalNumber_type;
			class rhs_decalNumber;
			class rhs_decalPlatoon_type;
			class rhs_decalPlatoon;
			class rhs_decalArmy_type;
			class rhs_decalArmy;
			class rhs_decalRightTurret_type;
			class rhs_decalRightTurret;
			class rhs_decalLeftTurret_type;
			class rhs_decalLeftTurret;
			class rhs_decalFront_type;
			class rhs_decalFront;
			class rhs_decalLowerFront_type;
			class rhs_decalLowerFront;
			class rhs_decalFlag_type;
			class rhs_decalFlag;
			class rhs_decalVV_type;
			class rhs_decalVV;
			class crate_l1_unhide;
			class crate_l2_unhide;
			class crate_l3_unhide;
			class crate_r1_unhide;
			class crate_r2_unhide;
			class wheel_1_unhide;
			class rhs_disableHabar;
			class driverViewHatch;
		class ViewPilot;
	};
	class rhs_btr60_base: rhs_btr_base
	{
		simulation="carx";
		normalSpeedForwardCoef=0.89999998;
		turnCoef=4.5;
		terrainCoef=1.5;
		dampersBumpCoef=6;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=83;
		fuelCapacity=22.5;
		RHS_fuelCapacity=290;
		wheelCircumference=3.6600001;
		brakeIdleSpeed=0;
		waterLeakiness=2.5;
		canFloat=1;
		waterAngularDampingCoef=10;
		waterLinearDampingCoefX=2;
		waterLinearDampingCoefY=2;
		waterPPInVehicle=0;
		waterResistanceCoef=0.178;
		engineShiftY=0.30000001;
		engineShiftZ=-3;
		rudderForceCoef=3.5;
		rudderForceCoefAtMaxSpeed=0.30000001;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.9000001,
				"N",
				0,
				"D1",
				6.48,
				"D2",
				2.5,
				"D3",
				1.4,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				8.5
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				35
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.81;
		latency=1.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.229,0.92000002},
			{0.28600001,0.94999999},
			{0.37099999,0.98000002},
			{0.45699999,1},
			{0.514,1},
			{0.68599999,0.94999999},
			{0.85699999,0.89999998},
			{1,0.81}
		};
		maxOmega=366.51999;
		enginePower=132;
		peakTorque=442;
		idleRPM=800;
		redRPM=3500;
		engineLosses=14;
		thrustDelay=0.30000001;
		engineBrakeCoef=0.30000001;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=40;
		class Wheels
		{
			class LF
			{
				width="0.32";
				steering=1;
				side="left";
				mass=160;
				MOI=15;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={-0.125,-1,0};
				maxCompression=0.12;
				maxDroop=0.11;
				sprungMass=1125.5;
				springStrength=45025;
				springDamperRate=7700;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=3.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR2: LR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR2: RR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class 3tone: standard
			{
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
		};
		class Attributes: Attributes
		{
		};
		rhs_randomizedHabar[]=
		{
			"crate_l1_unhide",
			"crate_l2_unhide",
			"crate_l3_unhide",
			"crate_r1_unhide",
			"crate_r2_unhide",
			"wheel_1_unhide"
		};
		icon="\rhsafrf\addons\rhs_a2port_armor\Data\icon_btr60_ca.paa";
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		driverForceOptics=0;
		castdrivershadow=1;
		cargoaction[]=
		{
			"RHS_BTR60_Cargo01",
			"RHS_BTR60_Cargo01",
			"RHS_BTR60_Cargo02",
			"RHS_BTR60_Cargo03",
			"RHS_BTR60_Cargo04",
			"RHS_BTR60_Cargo02",
			"RHS_BTR60_Cargo03",
			"RHS_BTR60_Cargo04"
		};
		animationSourceHatch="";
		class ViewPilot: ViewPilot
		{
			initAngleX=-10;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.30000001;
			maxFov=1;
		};
		hideProxyInCombat=0;
		viewCargoInExternal=1;
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=2.5;
				material=-1;
				name="glass1";
				passThrough=0;
				radius=0.18000001;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
			};
			class HitPeriscope1: HitGlass1
			{
				armor=0.80000001;
				name="periscope1";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope2: HitGlass1
			{
				armor=0.80000001;
				name="periscope2";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope3: HitGlass1
			{
				armor=0.80000001;
				name="periscope3";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope4: HitGlass1
			{
				armor=0.80000001;
				name="periscope4";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope5: HitGlass1
			{
				armor=0.80000001;
				name="periscope5";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope6: HitGlass1
			{
				armor=0.80000001;
				name="periscope6";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope7: HitGlass1
			{
				armor=0.80000001;
				name="periscope7";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope8: HitGlass1
			{
				armor=0.80000001;
				name="periscope8";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope9: HitGlass1
			{
				armor=0.80000001;
				name="periscope9";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope10: HitGlass1
			{
				armor=0.80000001;
				name="periscope10";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope11: HitGlass1
			{
				armor=0.80000001;
				name="periscope11";
				explosionShielding=0.5;
				radius=0.050000001;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffect";
			};
			class Exhaust2: Exhaust1
			{
				position="vyfuk2 start";
				direction="vyfuk2 konec";
				effect="ExhaustsEffect";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ejectDeadGunner=0;
				radarType=0;
				weapons[]=
				{
					"rhs_weap_kpvt",
					"rhs_weap_pkt_btr"
				};
				minElev=-5;
				maxElev=30;
				minTurn=-360;
				maxTurn=360;
				forceHideGunner=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				memoryPointGun="machinegun";
				selectionFireAnim="zasleh1";
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
					"OpticsCHAbera3"
				};
				startEngine=0;
				primaryGunner=1;
				primaryObserver=0;
				stabilizedInAxes=0;
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						passThrough=1;
						minimalHit=0.44;
						radius=0.2;
					};
					class HitGun
					{
						armor=0.40000001;
						material=-1;
						name="zbran";
						passThrough=0.1;
						minimalHit=0.44;
						radius=0.2;
					};
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.2;
					minFov=0.2;
					maxFov=0.2;
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
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						minFov=0.26923099;
						maxFov=0.26923099;
						initFov=0.26923099;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera3"
						};
						visionMode[]=
						{
							"Normal"
						};
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				dontCreateAI=1;
				animationSourceHatch="";
				primaryGunner=0;
				primaryObserver=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				startEngine=0;
				minElev=-5;
				maxElev=10;
				initElev=0;
				minTurn=-36;
				maxTurn=36;
				initTurn=0;
				commanding=2;
				radarType=0;
				hasGunner=1;
				weapons[]={};
				magazines[]={};
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
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
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
					initFov=0.14;
					minFov=0.14;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Periscope: ViewOptics
					{
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
					};
					class NVG: Wide
					{
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
						visionMode[]=
						{
							"NVG"
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=10;
				maxElev=0;
				minElev=0;
				maxTurn=0.1;
				minTurn=-0.1;
				ejectDeadGunner=1;
				enabledByAnimationSource="cargoHandler1";
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=11;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=12;
			};
			class CargoTurret_05: CargoTurret_01
			{
				proxyIndex=13;
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=14;
				maxTurn=71;
				minTurn=-75;
			};
			class CargoTurret_07: CargoTurret_01
			{
				proxyIndex=15;
			};
			class CargoTurret_08: CargoTurret_01
			{
				proxyIndex=16;
				maxElev=0;
				minElev=0;
				maxTurn=0.1;
				minTurn=0;
				ejectDeadGunner=1;
				enabledByAnimationSource="cargoHandler1";
			};
			class Commander_Out: CargoTurret
			{
				proxyType="CPCommander";
				LODTurnedIn=0;
				LODTurnedOut=0;
				proxyIndex=2;
				personTurretAction="RHS_VehicleTurnout_1";
				weapons[]=
				{
					"rhs_weap_DummyLauncher"
				};
			};
		};
		rhs_topPositions[]={9,10,11,12,13,14,15,16};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_btr_init; (_this select 0) addeventhandler ['HandleDamage',{[_this,0.5,0.002,0.9,0.2] spawn rhs_fnc_activeTirePressure; _this select 2;} ];";
				engine="_this call rhs_fnc_btr_handleHatch";
			};
			class RHS_BTR_Init
			{
				init="(_this select 0) lockTurret [[10],true];";
				getOut="(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
				getIn="(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
			};
		};
	};
	class rhs_btr60_vmf: rhs_btr60_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"
		};
	};
	class rhs_btr60_vdv: rhs_btr60_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRBackArmSymPlaces, 'Army',2]",
			"['Label', cBTRPlnSymPlaces, 'Platoon',11]"
		};
	};
	class rhs_btr60_vv: rhs_btr60_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"_gvard1",
			"_gvard2",
			"_gvard3",
			"['Label', cBTRVVLetterSymPlaces, 'Platoon',13]",
			"['Label', cBTROMONSymbolPlaces,'Army',10]"
		};
	};
	class rhs_btr60_msv: rhs_btr60_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'DefaultRed']",
			"['Label', cBTRPlnSymPlaces, 'Platoon',12]"
		};
	};
	class rhs_zsutank_base: APC_Tracked_02_base_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSZSUNumberPlaces,'Default']"
		};
		driveOnComponent[]=
		{
			"Slide"
		};
		simulation="tankX";
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		enginePower=209;
		peakTorque=1176;
		minOmega=61;
		maxOmega=209.44;
		idleRpm=600;
		redRpm=2000;
		torqueCurve[]=
		{
			{0,0},
			{0.30000001,0.75723797},
			{0.40000001,0.86859697},
			{0.60000002,0.95768398},
			{0.69999999,1},
			{0.80000001,0.74610198},
			{1,0.53452098},
			{1.5,0}
		};
		thrustDelay=0.60000002;
		clutchStrength=80;
		fuelCapacity=30;
		RHS_fuelCapacity=520;
		brakeIdleSpeed=1.78;
		latency=1.1;
		tankTurnForce=330000;
		tankTurnForceAngMinSpd=0.60000002;
		tankTurnForceAngSpd=0.91000003;
		accelAidForceYOffset=-3.5;
		accelAidForceCoef=4;
		accelAidForceSpd=1.9;
		engineLosses=25;
		transmissionLosses=15;
		normalSpeedForwardCoef=0.69999999;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.69999999,0.75,0.55000001,0.64999998,0.5,0.75,0.69999999,0.75,0.69999999,0.75,0.55000001,1,0.5};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R2",
				-7,
				"N",
				0,
				"D1",
				1.25,
				"D2",
				1.2,
				"D3",
				1.15,
				"D4",
				1.05,
				"D5",
				0.94999999
			};
			TransmissionRatios[]=
			{
				"High",
				15.8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.60000002;
		};
		class Wheels
		{
				side="left";
				steering=0;
				width=0.33000001;
				mass=150;
				MOI=10;
				maxBrakeTorque=8000;
				sprungMass=-1;
				springStrength=150000;
				springDamperRate=11000;
				dampingRate=2174;
				dampingRateInAir=2174;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				latStiffX=3.5;
				latStiffY=35;
				longitudinalStiffnessPerUnitGravity=14000;
				frictionVsSlipGraph[]=
				{
					{0,0.44999999},
					{0.18000001,1},
					{0.60000002,0.60000002}
				};
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
				suspTravelDirection[]={0.125,-1,0};
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
		accuracy=0.30000001;
		typicalCargo[]={};
		side=0;
		tracksSpeed=1;
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1.2;
		receiveRemoteTargets=1;
		cost=1500000;
		damageResistance=0.02;
		drivercompartments="Compartment1";
		driverForceOptics=1;
		LODDriverOpticsIn=0;
		LODDriverOpticsOut=0;
		LODDriverTurnedIn=0;
		LODDriverTurnedOut=0;
		commanderCanSee=31;
		threat[]={0.5,0.5,1};
		irScanGround=0;
		irScanRangeMax=19000;
		radarType=4;
		incomingMissileDetectionSystem=0;
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		armor=200;
		armorStructural=600;
		class ViewOptics: ViewOptics
		{
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.44999999;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.5;
				radius=0.25;
			};
			class HitEngine
			{
				armor=0.44999999;
				material=-1;
				name="motor";
				passThrough=0.0099999998;
				minimalHit=0.029999999;
				explosionShielding=0.050000001;
				radius=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.15000001;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.15000001;
				explosionShielding=0.5;
				radius=0.30000001;
			};
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vpvo"
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
				expression="_this setVariable ['%s', _value,true];[_this,[['Number', cRHSZSUNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSZSUNumberPlaces}else{[_this, [['Number', cRHSZSUNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
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
						LODTurnedOut=1100;
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1"
						};
						weapons[]={};
						magazines[]={};
						forceHideGunner=0;
						minElev=-10;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						class ViewOptics: ViewOptics
						{
							initFov=0.111;
							minFov=0.111;
							maxFov=0.111;
							visionMode[]=
							{
								"Normal",
								"NVG"
							};
						};
						startEngine=0;
						maxHorizontalRotSpeed=2;
						maxVerticalRotSpeed=2;
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
						class Components
						{
								speedPIDWeights[]={1.7,1.3,1.1};
								doRemapSpeed=1;
								remapSpeedRange[]={40,50};
								remapSpeedScalar[]={1,0.34999999};
								doPredictForward=1;
								predictForwardRange[]={0.1,20};
								steerAheadSaturation[]={0.0099999998,0.40000001};
								speedPredictionMethod=1;
								wheelAngleCoef=0.69999999;
								forwardAngleCoef=0.69999999;
								steeringAngleCoef=1;
								differenceAngleCoef=1;
								stuckMaxTime=3;
								allowOvertaking=1;
								allowCollisionAvoidance=1;
								allowDrifting=0;
								maxWheelAngleDiff=0.26159999;
								minSpeedToKeep=0.1;
								commandTurnFactor=1;
							};
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
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
										range[]={2000,4000,8000,14000};
										resource="RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
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
										range[]={2000,4000,8000,14000};
										resource="RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
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
								range[]={2000,4000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
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
								range[]={2000,4000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				LODTurnedOut=1100;
				weapons[]=
				{
					"RHS_weap_AZP23"
				};
				forceHideGunner=0;
				minElev=-4.5;
				maxElev=85;
				minTurn=-360;
				maxTurn=360;
				maxHorizontalRotSpeed=0.94;
				maxVerticalRotSpeed=0.60000002;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov=0.34999999;
						minFov=0.34999999;
						maxFov=0.34999999;
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
					class Auto: Wide
					{
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
						directionStabilized=1;
					};
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.2;
					minFov=0.057999998;
					maxFov=0.2;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				memoryPointGun[]=
				{
					"chase01",
					"chase02",
					"chase03",
					"chase04"
				};
				selectionFireAnim="zasleh";
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
						radius=0.2;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.2;
					};
				};
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
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						groundNoiseDistanceCoef=0.050000001;
						maxGroundNoiseDistance=60;
						minSpeedThreshold=20;
						maxSpeedThreshold=90;
						maxFogSeeThrough=1;
						aimDown=-35;
						minTrackableSpeed=25;
						maxTrackableSpeed=555;
						minTrackableATL=50;
					};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_bmp3_init";
				getOut="_this call rhs_fnc_hatchAbandon";
			};
		};
	};
};
