class CfgPatches
{
	class rhsusf_c_mtvr
	{
		units[]=
		{
			"rhsusf_mtvr_mk23_wd"
		};
		weapons[]={};
		name="MTVR";
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
		class ViewOptics;
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
	};
	class rhsusf_mtvr_base: Truck_01_base_F
	{
		side=1;
		displayName="MTVR";
		supplyRadius=4.5;
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
		waterSpeedFactor=0.40000001;
		simulation="carx";
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=98;
		fuelCapacity=78;
		wheelCircumference=3.7049999;
		brakeIdleSpeed=0;
		maxFordingDepth=0.40000001;
		waterResistance=1;
		waterLeakiness=10;
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
				"D5",
				0.89999998,
				"D6",
				0.77999997
			};
			TransmissionRatios[]=
			{
				"High",
				7.8000002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.55000001,0.55000001,0.55000001,0.55000001,0.85000002,0.85000002,0.85000002};
		switchTime=0.64999998;
		latency=1.5;
		transmissionLosses=5;
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
			
			{
				"(650/2400)",
				"(785/1254)"
			},
			
			{
				"(1200/2400)",
				"(1010/1254)"
			},
			
			{
				"(1440/2400)",
				"(1254/1254)"
			},
			
			{
				"(1600/2400)",
				"(1240/1254)"
			},
			
			{
				"(1800/2400)",
				"(1185/1254)"
			},
			
			{
				"(2000/2400)",
				"(1120/1254)"
			},
			
			{
				"(2200/2400)",
				"(1064/1254)"
			},
			
			{
				"(2626/2400)",
				"(0/1254)"
			}
		};
		maxOmega=251.33;
		enginePower=268;
		peakTorque=1254;
		idleRPM=650;
		redRPM=2400;
		engineLosses=12;
		thrustDelay=0.5;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=35;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=60;
		class Wheels
		{
			class L1
			{
				steering=1;
				side="left";
				width="0.2";
				mass=60;
				MOI=12;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=10000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				maxCompression=0.13;
				mMaxDroop=0.13;
				sprungMass=1500;
				springStrength=137363;
				springDamperRate=35462;
				longitudinalStiffnessPerUnitGravity=4464;
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
			mat[]={};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class EventHandlers: EventHandlers
		{
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
	};
	class rhsusf_mtvr_mk23_wd: rhsusf_mtvr_base
	{
		displayName="Mk23 MTVR";
		accuracy=0.5;
	};
};
