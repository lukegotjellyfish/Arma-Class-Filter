class DefaultEventhandlers;
class CfgPatches
{
	class rhs_c_a3retex
	{
		units[]=
		{
			"rhs_typhoon_vdv",
			"rhs_ka60_grey",
			"rhs_ka60_c"
		};
		weapons[]={};
		name="A3 Retextures";
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
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
class CfgVehicles
{
	class Truck_03_base_F;
	class O_Truck_03_repair_F: Truck_03_base_F
	{
	class Heli_Light_02_unarmed_base_F;
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		class textureSources;
	class rhs_typhoon_base: O_Truck_03_repair_F
	{
		terrainCoef=1.8;
		wheelCircumference=3.776;
		turnCoef=3.7;
		brakeIdleSpeed=0;
		maxSpeed=100;
		fuelCapacity=250;
		fuelConsumptionRate=36;
		normalSpeedForwardCoef=0.89999998;
		slowSpeedForwardCoef=0.44999999;
		antiRollbarForceCoef=4;
		antiRollbarForceLimit=5;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.9699998,
				"N",
				0,
				"D1",
				4.1500001,
				"D2",
				2.1600001,
				"D3",
				1.52,
				"D4",
				1,
				"D5",
				0.73000002,
				"D6",
				0.63
			};
			TransmissionRatios[]=
			{
				"High",
				8.5299997
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.28;
		latency=0.5;
		transmissionLosses=18;
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.8;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=65;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.5;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.25999999,0.34999999},
			{0.37,0.63999999},
			{0.44,0.83999997},
			{0.51999998,1},
			{0.58999997,0.99000001},
			{0.74000001,0.92000002},
			{0.87,0.83999997},
			{1,0.77999997}
		};
		maxOmega=282.73999;
		enginePower=336;
		peakTorque=1660;
		idleRPM=700;
		redRPM=2700;
		thrustDelay=0.60000002;
		engineLosses=20;
		engineBrakeCoef=0.25;
		class Wheels
		{
			class L1
			{
				steering=1;
				side="left";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.079999998;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=15000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={-0.125,-1,0};
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=2716;
				springStrength=679083;
				springDamperRate=34357;
				longitudinalStiffnessPerUnitGravity=5432;
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
				steering=1;
			};
			class L3: L2
			{
				steering=0;
				sprungMass=2500;
				springStrength=150000;
				springDamperRate=15000;
				maxHandBrakeTorque=200000;
			};
			class R1: L1
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R2: L2
			{
				steering=1;
				side="right";
				maxHandBrakeTorque=0;
			};
			class R3: L3
			{
				steering=0;
				maxHandBrakeTorque=200000;
			};
		};
		side=0;
		class textureSources: textureSources
		{
			class rhs_green
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
		class EventHandlers: EventHandlers
		{
		};
	};
	class rhs_typhoon_vdv: rhs_typhoon_base
	{
		forceInGarage=1;
	};
	class rhs_ka60_grey: O_Heli_Light_02_unarmed_F
	{
		LESH_canBeTowed=1;
		LESH_towFromFront=0;
		LESH_AxisOffsetTarget[]={0,-8,-0.74000001};
		LESH_WheelOffset[]={0,3};
		armorStructural=2;
		typicalCargo[]=
		{
			"rhs_pilot_combat_heli"
		};
		side=0;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
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
						angleRangeHorizontal=75;
						angleRangeVertical=75;
						maxGroundNoiseDistance=0;
						maxFogSeeThrough=0.30000001;
						animDirection="mainGun";
					};
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
						angleRangeHorizontal=120;
						angleRangeVertical=100;
						maxFogSeeThrough=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						maxTrackableSpeed=125;
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
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,16000,24000,4000};
						resource="RscCustomInfoSensors";
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
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,16000,24000,4000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		weapons[]=
		{
			"rhs_weap_CMFlareLauncher"
		};
		class textureSources: textureSources
		{
			class vvs_grey
			{
				factions[]=
				{
					"rhs_faction_vvs",
					"rhs_faction_vvs_c"
				};
			};
		};
		class EventHandlers: EventHandlers
		{
		};
	};
	class rhs_ka60_c: rhs_ka60_grey
	{
		forceInGarage=0;
	};
};
