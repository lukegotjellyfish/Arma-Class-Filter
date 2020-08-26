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
		requiredVersion=1.3200001;
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_c_heavyweapons",
			"rhs_decals",
			"rhs_optics",
			"rhs_c_troops"
		};
		name="A3 Retextures";
		author="$STR_RHS_AUTHOR_FULL";
		url="http://www.rhsmods.org/";
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
		class textureSources;
		class EventHandlers;
	};
	class Heli_Light_02_unarmed_base_F;
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		class textureSources;
		class EventHandlers;
		class Components;
	};
	class rhs_typhoon_base: O_Truck_03_repair_F
	{
		dlc="RHS_AFRF";
		category="Car";
		scope=0;
		displayName="$STR_RHS_KAMAZ63968_NAME";
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
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=80;
				MOI=40;
				dampingRate=0.079999998;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=15000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={-0.125,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
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
				boneName="wheel_1_2_damper";
				steering=1;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
			};
			class L3: L2
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				sprungMass=2500;
				springStrength=150000;
				springDamperRate=15000;
				maxHandBrakeTorque=200000;
			};
			class R1: L1
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R2: L2
			{
				boneName="wheel_2_2_damper";
				steering=1;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				side="right";
				maxHandBrakeTorque=0;
			};
			class R3: L3
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=200000;
			};
		};
		author="RHS";
		vehicleClass="rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		crew="rhs_msv_driver";
		side=0;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count="10";
			};
			class _xx_HandGrenade_East
			{
				magazine="rhs_mag_rgd5";
				count="10";
			};
			class _xx_signal_rounds
			{
				magazine="rhs_mag_nspn_red";
				count="10";
			};
			class _xx_SmokeShellRed
			{
				magazine="rhs_mag_rdg2_white";
				count="4";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class TransportWeapons;  //found empty after stripping
		class textureSources: textureSources
		{
			class rhs_green
			{
				displayName="Green";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsafrf\addons\rhs_a3retex\Data\truck_03_ext01_co.paa",
					"\rhsafrf\addons\rhs_a3retex\Data\truck_03_ext02_co.paa",
					"\rhsafrf\addons\rhs_a3retex\Data\truck_03_ammo_co.paa"
				};
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
		};
		textureList[]={};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers;  //found empty after stripping
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a3retex\Data\truck_03_ext01_co.paa",
			"\rhsafrf\addons\rhs_a3retex\Data\truck_03_ext02_co.paa",
			"\rhsafrf\addons\rhs_a3retex\Data\truck_03_ammo_co.paa"
		};
	};
	class rhs_typhoon_vdv: rhs_typhoon_base
	{
		forceInGarage=1;
		faction="rhs_faction_vdv";
		scope=2;
	};
	class rhs_ka60_grey: O_Heli_Light_02_unarmed_F
	{
		dlc="RHS_AFRF";
		scope=2;
		LESH_canBeTowed=1;
		LESH_towFromFront=0;
		LESH_AxisOffsetTarget[]={0,-8,-0.74000001};
		LESH_WheelOffset[]={0,3};
		armorStructural=2;
		category="Air";
		displayName="Ka-60";
		vehicleClass="rhs_vehclass_helicopter";
		editorSubcategory="rhs_EdSubcat_helicopter";
		faction="rhs_faction_vvs";
		author="RHS";
		crew="rhs_pilot_combat_heli";
		typicalCargo[]=
		{
			"rhs_pilot_combat_heli"
		};
		side=0;
		class MFD;  //found empty after stripping
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
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=75;
						angleRangeVertical=75;
						typeRecognitionDistance=-1;
						maxGroundNoiseDistance=0;
						maxFogSeeThrough=0.30000001;
						animDirection="mainGun";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar;  //found empty after stripping
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=11000;
							maxRange=11000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=11000;
							maxRange=11000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=120;
						angleRangeVertical=100;
						typeRecognitionDistance=4000;
						maxFogSeeThrough=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						maxTrackableSpeed=125;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink;  //found empty after stripping
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
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N10_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count=6;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=2;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine="rhs_mag_nspn_red";
				count=4;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
		};
		class TransportWeapons;  //found empty after stripping
		weapons[]=
		{
			"rhs_weap_CMFlareLauncher"
		};
		class textureSources: textureSources
		{
			class vvs_grey
			{
				displayName="VVS - Grey";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsafrf\addons\rhs_a3retex\Data\heli_light_02_ext_co.paa"
				};
				factions[]=
				{
					"rhs_faction_vvs",
					"rhs_faction_vvs_c"
				};
			};
			class vvs_camo: vvs_grey
			{
				displayName="VVS - Camo";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsafrf\addons\rhs_a3retex\Data\heli_light_02_ext_c_co.paa"
				};
			};
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a3retex\Data\heli_light_02_ext_co.paa"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers;  //found empty after stripping
		};
	};
	class rhs_ka60_c: rhs_ka60_grey
	{
		forceInGarage=0;
		faction="rhs_faction_vvs_c";
		author="RHS";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_a3retex\Data\heli_light_02_ext_c_co.paa"
		};
	};
};
