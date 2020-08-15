class CfgPatches
{
	class rhsusf_c_himars
	{
		units[]=
		{
			"rhsusf_M142_usarmy_WD",
			"rhsusf_M142_usarmy_D",
			"rhsusf_M142_usmc_WD"
		};
		weapons[]={};
		name="M142 HIMARS";
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class HitPoints;
		class EventHandlers;
	};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
	};
	class Truck_01_base_F: Truck_F
	{
		class Components;
	};
	class rhsusf_himars_base: Truck_01_base_F
	{
		side=1;
		headAimDown=5;
		driverRightLegAnimName="pedal_r";
		supplyRadius=4.5;
		extCameraPosition[]={0.5,2,-8};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		availableforsupporttypes[]=
		{
			"Artillery"
		};
		artilleryscanner=1;
		hideProxyInCombat=1;
		canHideDriver=0;
		class DriverOpticsIn
		{
			class DVE_Wide: ViewOptics
			{
				camPos="dve_view_pos";
				visionMode[]=
				{
					"TI"
				};
				thermalMode[]={0,1};
				initFov=0.60000002;
				minFov=0.60000002;
				maxFov=0.60000002;
				hitpoint="Hit_Optic_DVEA";
			};
			class DVS_Rear: DVE_Wide
			{
				camPos="dve_view_rear_pos";
				camDir="dve_view_rear_dir";
				initFov=0.875;
				minFov=0.875;
				maxFov=0.875;
				hitpoint="Hit_Optic_Driver_Rear";
			};
		};
		class CargoTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				commanding=1;
				minElev=0;
				maxElev=65;
				initElev=0;
				stabilizedInAxes=0;
				weapons[]={};
				magazines[]={};
				usePiP=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
				};
				lockWhenVehicleSpeed=1;
				elevationMode=3;
				forceHideGunner=1;
				class Turrets
				{
				};
				class Hitpoints
				{
					class HitLauncher
					{
						isGun=1;
						armor=-80;
						explosionShielding=0.25;
						passThrough=0.2;
						minimalHit=0.0099999998;
						radius=0.07;
						name="Hit_Launcher";
						armorComponent="Hit_Launcher";
					};
					class HitTurret
					{
						isTurret=1;
						armor=-80;
						explosionShielding=0.25;
						passThrough=0.2;
						minimalHit=0.0099999998;
						radius=0.07;
						name="Hit_Turret";
						armorComponent="Hit_Turret";
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class textureSources
		{
			class rhs_desert
			{
			};
			class rhs_woodland
			{
			};
			class rhs_usmc_woodland
			{
			};
		};
		class HitPoints: HitPoints
		{
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="palivo";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="";
				passThrough=1;
			};
		};
		armorLights=0.0099999998;
		normalSpeedForwardCoef=0.89999998;
		turnCoef=3;
		terrainCoef=2;
		simulation="carx";
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=98;
		fuelCapacity=24;
		wheelCircumference=3.7049999;
		brakeIdleSpeed=2;
		canFloat=0;
		maxFordingDepth=0.60000002;
		waterResistance=0.5;
		waterDamageEngine=0.89999998;
		waterLeakiness=9.5;
		waterSpeedFactor=0.80000001;
		switchTime=0.64999998;
		latency=1.5;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1.22917,0.41666701,0.29166701,0.208333,0.97916698,0.25,0.91666698,0.41666701,0.91666698,0.58333302,0.91666698,0.625,0.89583302,0.625,0.91666698,0.70833302,1,0.75};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-6.0300002,
				"N",
				0,
				"D1",
				6.9299998,
				"D2",
				4.1900001,
				"D3",
				2.24,
				"D4",
				1.6900001,
				"D5",
				1.2,
				"D6",
				0.89999998,
				"D7",
				0.77999997
			};
			TransmissionRatios[]=
			{
				"High",
				6.8000002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.30000001;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=35;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.27083299,0.62599701},
			{0.5,0.80542302},
			{0.60000002,1},
			{0.66666698,0.98883599},
			{0.75,0.94497597},
			{0.83333302,0.89314198},
			{0.91666698,0.84848499},
			{1.09417,0}
		};
		engineMOI=3;
		enginePower=268;
		peakTorque=1350;
		minOmega=50;
		maxOmega=251.33;
		idleRPM=650;
		redRPM=2400;
		engineLosses=12;
		transmissionLosses=5;
		thrustDelay=0.5;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=35;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=60;
		accelAidForceSpd=2.23;
		accelAidForceCoef=3;
		accelAidForceYOffset=-1.3;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={0,-1,0};
				width=0.34;
				steering=1;
				mass=60;
				MOI=45;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=25000;
				maxHandBrakeTorque=0;
				maxCompression=0.12;
				maxDroop=0.12;
				sprungMass=-1;
				springStrength=64931;
				springDamperRate=20778;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class L3: L1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R1: L1
			{
				steering=1;
				side="right";
			};
			class R2: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R3: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectHEMTT";
			};
		};
		class Damage
		{
		};
		class EventHandlers: EventHandlers
		{
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsusf\addons\rhsusf_himars\Pictures\RHS_M142_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_MLRS",
							"RHS_HP_GMLRS",
							"RHS_HP_ATACMS"
						};
						priority=1;
						maxweight=2000;
						UIposition[]={0.44999999,0.27500001};
						bay=-1;
						attachment="rhs_mag_m26a1_6";
						turret[]={0};
						hitpoint="HitLauncher";
					};
				};
			};
		};
	};
	class rhsusf_himars_atacms_base: rhsusf_himars_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_atacms"
				};
			};
		};
	};
	class rhsusf_M142_usarmy_WD: rhsusf_himars_base
	{
		accuracy=0.5;
	};
	class rhsusf_M142_usarmy_D: rhsusf_himars_base
	{
		accuracy=0.5;
	};
	class rhsusf_M142_usmc_WD: rhsusf_himars_base
	{
		accuracy=0.5;
	};
};
