class CfgPatches
{
	class A3_Air_F_Gamma_Plane_Fighter_03
	{
		addonRootClass="A3_Air_F_Gamma";
		units[]=
		{
			"I_Ejection_Seat_Plane_Fighter_03_F",
			"I_Plane_Fighter_03_AA_F",
			"I_Plane_Fighter_03_CAS_F",
			"I_Plane_Fighter_03_dynamicLoadout_F",
			"Plane_Fighter_03_Canopy_F",
			"Plane_Fighter_03_wreck_F"
		};
		weapons[]={};
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
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
		class ViewPilot;
	};
	class Ejection_Seat_Base_F;
	class Plane_Canopy_Base_F;
	class Plane_Fighter_03_Canopy_F: Plane_Canopy_Base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.35600001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Plane_Fighter_03_Canopy_F";
	};
	class Ejection_Seat_Plane_Fighter_03_base_F: Ejection_Seat_Base_F
	{
		_generalMacro="Ejection_Seat_Plane_Fighter_03_base_F";
		icon="iconParachute";
	};
	class I_Ejection_Seat_Plane_Fighter_03_F: Ejection_Seat_Plane_Fighter_03_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.0020000001;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="I_Ejection_Seat_Plane_Fighter_03_F";
		side=0;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		features="Randomization: No						<br />Camo selections: 2 - the main body, wings and lower part of body						<br />Script door sources: None						<br />Script animations: AddScalpel, AddAsraam_out, AddAsraam_mid, AddMk82, AddGbu12, AddZephyr, AddDar						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: None";
		_generalMacro="Plane_Fighter_03_base_F";
		icon="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		accuracy=0.2;
		memoryPointTaskMarker="TaskMarker_1_pos";
		armor=55;
		armorStructural=2;
		armorLights=0.1;
		minTotalDamageThreshold=0.0080000004;
		waterLeakiness=1.5;
		epeImpulseDamageCoef=50;
		damageResistance=0.0040000002;
		driverCanEject=0;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		viewDriverShadowDiff=0.5;
		viewDriverShadowAmb=0.5;
		radarTargetSize=0.80000001;
		irTargetSize=0.80000001;
		lockDetectionSystem=8;
		incomingMissileDetectionSystem="8 + 16";
		cost=3000000;
		class EjectionSystem
		{
			EjectionSeatEnabled=1;
			EjectionDual=0;
			EjectionSeatClass="I_Ejection_Seat_Plane_Fighter_03_F";
			CanopyClass="Plane_Fighter_03_Canopy_F";
			EjectionSeatHideAnim="ejection_seat_hide";
			EjectionSeatRailAnim="ejection_seat_motion";
			CanopyHideAnim="canopy_hide";
			EjectionSeatPos="pos_eject";
			CanopyPos="pos_eject_canopy";
			EjectionSoundExt="Plane_Fighter_01_ejection_ext_sound";
			EjectionSoundInt="Plane_Fighter_01_ejection_in_sound";
			EjectionParachute="Steerable_Parachute_F";
			EjectionSeatForce=50;
			CanopyForce=30;
		};
		class Turrets;  //found empty after stripping
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=4;
				explosionShielding=3;
				name="HitHull";
				passThrough=1;
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
				material=-1;
			};
			class HitEngine: HitHull
			{
				armor=3;
				explosionShielding=4;
				name="HitEngine";
				passThrough=1;
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
			class HitAvionics: HitHull
			{
				armor=3;
				explosionShielding=3.5;
				name="HitAvionics";
				passThrough=0.5;
				radius=0.2;
				minimalHit=0.050000001;
				depends="0";
			};
			class HitFuel: HitHull
			{
				armor=4.5;
				explosionShielding=4;
				name="HitFuel";
				passThrough=0.80000001;
				radius=0.30000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitFuel_Lead_Left: HitFuel
			{
				armor=1.8;
				explosionShielding=3;
				name="HitFuel1_Leads";
				passThrough=0;
				radius=0.13;
				minimalHit=0.1;
			};
			class HitFuel_Lead_Right: HitFuel
			{
				armor=1.8;
				explosionShielding=3;
				name="HitFuel2_leads";
				passThrough=0;
				radius=0.13;
				minimalHit=0.1;
			};
			class HitFuel_Left: HitFuel
			{
				armor=2.5;
				explosionShielding=5;
				name="HitFuel1";
				passThrough=0.2;
				radius=0.2;
				minimalHit=0.1;
				depends="HitFuel_Lead_Left";
			};
			class HitFuel_Right: HitFuel
			{
				armor=2.5;
				explosionShielding=5;
				name="HitFuel2";
				passThrough=0.2;
				radius=0.2;
				minimalHit=0.1;
				depends="HitFuel_Lead_Right";
			};
			class HitFuel2: HitFuel
			{
				armor=999;
				explosionShielding=0;
				name="HitFuel2";
				passThrough=0.2;
				radius=0.2;
				minimalHit=0.1;
				depends="(HitFuel_Left + HitFuel_Right)*0.5";
			};
			class HitGlass1: HitHull
			{
				armor=1.2;
				explosionShielding=3;
				name="HitGlass1";
				passThrough=0;
				radius=0.2;
				minimalHit=0.1;
				depends="0";
			};
			class HitGlass2: HitGlass1
			{
				armor=1.2;
				explosionShielding=3;
				name="HitGlass2";
				passThrough=0;
				radius=0.2;
				minimalHit=0.1;
			};
			class HitGlass3: HitGlass1
			{
				armor=1.2;
				explosionShielding=3;
				name="HitGlass3";
				passThrough=0;
				radius=0.2;
				minimalHit=0.1;
			};
			class HitLAileron_Link: HitHull
			{
				armor=1.8;
				explosionShielding=3.5;
				name="HitLAileron_Link";
				passThrough=0;
				radius=0.090000004;
				minimalHit=0.1;
				depends="0";
			};
			class HitRAileron_Link: HitHull
			{
				armor=1.8;
				explosionShielding=3.5;
				name="HitRAileron_Link";
				passThrough=0;
				radius=0.090000004;
				minimalHit=0.1;
				depends="0";
			};
			class HitLAileron: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLAileron";
				passThrough=0.30000001;
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="HitLAileron_Link";
			};
			class HitRAileron: HitLAileron
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRAileron";
				passThrough=0.30000001;
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="HitRAileron_Link";
			};
			class HitLCRudder: HitHull
			{
				armor=2;
				explosionShielding=3;
				name="HitLCRudder";
				passThrough=0.30000001;
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
			class HitLCElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCElevator";
				passThrough=0.30000001;
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
			class HitRElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRElevator";
				passThrough=0.30000001;
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="Exhaust1";
				direction="Exhaust1_dir";
				effect="ExhaustsEffectPlaneHP";
				engineIndex=0;
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vapour_R_S";
			};
		};
		attenuationEffectType="PlaneAttenuation";
		cabinCloseSound[]=
		{
			"A3\Sounds_F\air\noises\Plane_Fighter03_CabinClose",
			1.7782794,
			1,
			40
		};
		cabinOpenSoundInternal[]=
		{
			"A3\Sounds_F\air\noises\Plane_Fighter03_CabinOpen",
			10,
			1,
			40
		};
		cabinCloseSoundInternal[]=
		{
			"A3\Sounds_F\air\noises\Plane_Fighter03_CabinClose",
			10,
			1,
			40
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
			0.31622776,
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			0.79432821,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			0.79432821,
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			0.63095737,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			0.63095737,
			1,
			100
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",
			1.4125376,
			1,
			500
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",
			1.4125376,
			1,
			500
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		class scrubLandInt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\air\noises\wheelsInt",
				1,
				1,
				100
			};
			frequency=1;
			volume="(scrubLand factor[0.01, 0.20])";
		};
		maxOmega=2000;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=50;
		antiRollbarSpeedMax=300;
		class Wheels
		{
			class Wheel_1
			{
				steering=1;
				side="left";
				width=0.40000001;
				mass=20;
				MOI=0.40000001;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=0;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				maxCompression=0.1;
				maxDroop=0.1;
				sprungMass=1500;
				springStrength=150000;
				springDamperRate=30000;
				longitudinalStiffnessPerUnitGravity=300;
				latStiffX=3;
				latStiffY=20;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class Wheel_2: Wheel_1
			{
				steering=0;
				mass=35;
				MOI=1.575;
				width=0.60000002;
				maxBrakeTorque=1500;
				maxCompression=0.050000001;
				maxDroop=0.050000001;
				sprungMass=3350;
				springStrength=335000;
				springDamperRate=67000;
				longitudinalStiffnessPerUnitGravity=500;
			};
			class Wheel_3: Wheel_2
			{
				side="right";
			};
		};
		maxSpeed=800;
		landingAoa="6*3.1415/180";
		landingSpeed=215;
		stallSpeed=190;
		stallWarningTreshold=0.1;
		wheelSteeringSensitivity=2;
		airBrake=1;
		airBrakeFrictionCoef=2.2;
		flaps=1;
		flapsFrictionCoef=0.31999999;
		gearsUpFrictionCoef=0.60000002;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0066};
		airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
		angleOfIndicence="-2*3.1415/180";
		envelope[]={0,0.050000001,0.2,0.46000001,0.81999999,1.28,1.84,2.4000001,2.8800001,3.6500001,4.5,5.4499998,6.48,7.6100001,8.1000004,8.3000002,8.3999996,8.3000002,8,7.5999999,7};
		altNoForce=13000;
		altFullForce=2000;
		thrustCoef[]={1.42,1.38,1.34,1.3,1.25,1.2,1.1900001,1.1799999,1.17,1.17,1.16,1.16,0.1,0,0,0,0};
		aileronSensitivity=1;
		aileronCoef[]={0,0.11,0.44999999,0.81,1.1,1.15,1.2,1.25,1.3,1.35,1.4,1.4299999,1.45,1.47,1.4,1.2,0.80000001};
		elevatorSensitivity=1.1;
		elevatorCoef[]={0,0.14,0.54000002,0.62,0.57999998,0.56,0.54000002,0.51999998,0.47999999,0.43000001,0.38,0.34999999,0.30000001,0.25,0.2,0.15000001,0.1};
		rudderInfluence=0.866;
		rudderCoef[]={0,0.80000001,2,2.2,2.3,2.4000001,2.3,2.2,2.0999999,2,1.2};
		aileronControlsSensitivityCoef=3.5999999;
		elevatorControlsSensitivityCoef=3.4000001;
		rudderControlsSensitivityCoef=3.8;
		draconicForceXCoef=8;
		draconicForceYCoef=1.4;
		draconicForceZCoef=1;
		draconicTorqueXCoef[]={4.8000002,5,5.5,6.1999998,7,7.6999998,9.3999996,11.1,12,14,15};
		draconicTorqueYCoef[]={12,10,6,2,0.2,0,0,0,0,0,0,0,0,0,0,0,0};
		class TextureSources
		{
			class Hex
			{
				factions[]=
				{
					"OPF_F",
					"OPF_T_F"
				};
			};
			class Green
			{
				factions[]=
				{
					"IND_F"
				};
			};
			class Grey
			{
				factions[]=
				{
					"OPF_F",
					"OPF_T_F"
				};
			};
		};
		driveOnComponent[]={};
		irScanRangeMin=500;
		irScanRangeMax=5000;
		irScanToEyeFactor=2;
		laserScanner=1;
		showAllTargets=4;
		extCameraPosition[]={0,3.8,-15};
		class ViewPilot: ViewPilot
		{
			initAngleX=-3;
		};
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		minFireTime=30;
		threat[]={0.80000001,1,0.80000001};
		class Damage;  //found empty after stripping
		memoryPointDriverOptics="PilotCamera_pos";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					initFov="(6 / 120)";
					minFov="(6 / 120)";
					maxFov="(6 / 120)";
				};
				class Narrow: Wide
				{
					initFov="(2 / 120)";
					minFov="(2 / 120)";
					maxFov="(2 / 120)";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-160;
			maxTurn=160;
			initTurn=0;
			minElev=-20;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=0;
						animDirection="PilotCamera_V";
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=0;
						animDirection="PilotCamera_V";
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
						angleRangeHorizontal=90;
						angleRangeVertical=90;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar;  //found empty after stripping
					class LaserSensorComponent: SensorTemplateLaser;  //found empty after stripping
					class NVSensorComponent: SensorTemplateNV;  //found empty after stripping
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000,16000};
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
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,4000,2000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		defaultUserMFDvalues[]={0,0.5,0.40000001,1};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax=1;
				topLeft="HUD_1_top_left";
				topRight="HUD_1_top_right";
				bottomLeft="HUD_1_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0.5,0.40000001,1};
				class Bones
				{
					class PlaneW
					{
						pos[]={0.4975,0.38};
					};
					class Center
					{
						pos[]={0.4975,0.38299999};
					};
					class ImpactPoint
					{
						source="ImpactPoint";
						pos0[]={0.5,0.38299999};
						pos10[]={1.45,1.4529999};
					};
					class WPPoint
					{
						source="WPPoint";
						pos0[]={0.5,0.38299999};
						pos10[]={1.45,1.4529999};
					};
					class TargetingPodDir
					{
						source="pilotcamera";
						pos0[]={0.4975,0.38299999};
						pos10[]={1.4475,1.4529999};
					};
					class TargetingPodTarget
					{
						source="pilotcameratarget";
						pos0[]={0.4975,0.38299999};
						pos10[]={1.4475,1.4529999};
					};
					class Limit0109
					{
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class MissileFlightTimeRot1
					{
						source="MissileFlightTime";
						sourceScale=1;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=1.12632;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class Target
					{
						source="target";
						pos0[]={0.4975,0.38299999};
						pos10[]={1.4475,1.4529999};
					};
					class Velocity
					{
						source="velocity";
						pos0[]={0.5,0.38299999};
						pos10[]={1.45,1.4529999};
					};
					class ILS_H
					{
						pos0[]={0.5,0.38299999};
						pos3[]={0.78500003,0.38299999};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.704};
					};
					class ASL_Instrument
					{
						source="altitudeASL";
						min=0;
						max=20000;
						minAngle=0;
						maxAngle=72000;
						aspectRatio=1.12632;
					};
					class Speed_Instrument: ASL_Instrument
					{
						source="speed";
						max=555.55603;
						maxAngle=7200;
					};
					class HorizonBankRot
					{
						source="horizonBank";
						min=-0.52359998;
						max=0.52359998;
						minAngle=159.25;
						maxAngle=200.75;
						aspectRatio=1;
					};
					class AOAindexer
					{
						source="aoa";
						min=-0.78539997;
						max=0.78539997;
						maxPos[]={0,-1.9};
						minPos[]={0,2.0999999};
						aspectRatio=1;
					};
					class HorizonBankRotFull
					{
						source="horizonBank";
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Level0
					{
						pos0[]={0.4975,0.38};
						pos10[]={1.4475,1.45};
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP55: Level0
					{
						angle=55;
					};
					class LevelM55: Level0
					{
						angle=-55;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP65: Level0
					{
						angle=65;
					};
					class LevelM65: Level0
					{
						angle=-65;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP75: Level0
					{
						angle=75;
					};
					class LevelM75: Level0
					{
						angle=-75;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP85: Level0
					{
						angle=85;
					};
					class LevelM85: Level0
					{
						angle=-85;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class Airport1
					{
						source="airportCorner1";
						pos0[]={0.5,0.38299999};
						pos10[]={1.45,1.4529999};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
				};
				class Draw
				{
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="on";
					class PlaneW
					{
						points[]=
						{
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{0.0099999998,0},
								1
							},
							{},
							
							{
								"PlaneW",
								{0,-0.033789501},
								1
							},
							
							{
								"PlaneW",
								{0,-0.0112632},
								1
							},
							{},
							
							{
								"PlaneW",
								{0,0.033789501},
								1
							},
							
							{
								"PlaneW",
								{0,0.0112632},
								1
							}
						};
					};
					class PlaneHeading
					{
						points[]=
						{
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0,-0.0225263},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0.014,-0.015768399},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0.014,0.015768399},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0,0.0225263},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{-0.014,0.015768399},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{-0.014,-0.015768399},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0,-0.0225263},
								1
							},
							{},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0,-0.045052599},
								1
							},
							
							{
								"Velocity",
								1,
								"Limit0109",
								1,
								{0,-0.0225263},
								1
							}
						};
					};
					class AOAIndexer
					{
						condition="ils";
						class lines
						{
							points[]=
							{
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									
									{
										"AOAindexer",
										-0.039999999,
										0.112632
									},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									
									{
										"AOAindexer",
										-0.059999999,
										0.112632
									},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									
									{
										"AOAindexer",
										-0.059999999,
										0
									},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									
									{
										"AOAindexer",
										-0.050000001,
										0
									},
									1
								},
								{},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									
									{
										"AOAindexer",
										-0.059999999,
										0
									},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									
									{
										"AOAindexer",
										-0.059999999,
										-0.112632
									},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									
									{
										"AOAindexer",
										-0.039999999,
										-0.112632
									},
									1
								}
							};
						};
					};
					class Static
					{
						points[]=
						{
							
							{
								{0.092500001,0.44207901},
								1
							},
							
							{
								{0.1075,0.44207901},
								1
							},
							{},
							
							{
								{0.1,0.43363199},
								1
							},
							
							{
								{0.1,0.450526},
								1
							},
							{},
							
							{
								{0.14687,0.42218199},
								1
							},
							
							{
								{0.16187,0.42218199},
								1
							},
							{},
							
							{
								{0.15436999,0.41373399},
								1
							},
							
							{
								{0.15436999,0.43062899},
								1
							},
							{},
							
							{
								{0.180473,0.37008899},
								1
							},
							
							{
								{0.195473,0.37008899},
								1
							},
							{},
							
							{
								{0.18797299,0.361642},
								1
							},
							
							{
								{0.18797299,0.378537},
								1
							},
							{},
							
							{
								{0.180473,0.3057},
								1
							},
							
							{
								{0.195473,0.3057},
								1
							},
							{},
							
							{
								{0.18797299,0.29725301},
								1
							},
							
							{
								{0.18797299,0.314147},
								1
							},
							{},
							
							{
								{0.14687,0.25360799},
								1
							},
							
							{
								{0.16187,0.25360799},
								1
							},
							{},
							
							{
								{0.15436999,0.245161},
								1
							},
							
							{
								{0.15436999,0.26205501},
								1
							},
							{},
							
							{
								{0.092500001,0.233711},
								1
							},
							
							{
								{0.1075,0.233711},
								1
							},
							{},
							
							{
								{0.1,0.225263},
								1
							},
							
							{
								{0.1,0.242158},
								1
							},
							{},
							
							{
								{0.0381299,0.25360799},
								1
							},
							
							{
								{0.0531299,0.25360799},
								1
							},
							{},
							
							{
								{0.0456299,0.245161},
								1
							},
							
							{
								{0.0456299,0.26205501},
								1
							},
							{},
							
							{
								{0.0045272601,0.3057},
								1
							},
							
							{
								{0.019527299,0.3057},
								1
							},
							{},
							
							{
								{0.0120273,0.29725301},
								1
							},
							
							{
								{0.0120273,0.314147},
								1
							},
							{},
							
							{
								{0.0045272801,0.37008899},
								1
							},
							
							{
								{0.019527299,0.37008899},
								1
							},
							{},
							
							{
								{0.0120273,0.361642},
								1
							},
							
							{
								{0.0120273,0.378537},
								1
							},
							{},
							
							{
								{0.0381299,0.42218199},
								1
							},
							
							{
								{0.0531299,0.42218199},
								1
							},
							{},
							
							{
								{0.0456299,0.41373399},
								1
							},
							
							{
								{0.0456299,0.43062899},
								1
							},
							{},
							
							{
								"Speed_Instrument",
								{0,0.064999998},
								1
							},
							
							{
								"Speed_Instrument",
								{0,0.085000001},
								1
							},
							{},
							
							{
								{0.89249998,0.44207901},
								1
							},
							
							{
								{0.90750003,0.44207901},
								1
							},
							{},
							
							{
								{0.89999998,0.43363199},
								1
							},
							
							{
								{0.89999998,0.450526},
								1
							},
							{},
							
							{
								{0.94687003,0.42218199},
								1
							},
							
							{
								{0.96187001,0.42218199},
								1
							},
							{},
							
							{
								{0.95437002,0.41373399},
								1
							},
							
							{
								{0.95437002,0.43062899},
								1
							},
							{},
							
							{
								{0.98047298,0.37008899},
								1
							},
							
							{
								{0.99547303,0.37008899},
								1
							},
							{},
							
							{
								{0.98797297,0.361642},
								1
							},
							
							{
								{0.98797297,0.378537},
								1
							},
							{},
							
							{
								{0.98047298,0.3057},
								1
							},
							
							{
								{0.99547303,0.3057},
								1
							},
							{},
							
							{
								{0.98797297,0.29725301},
								1
							},
							
							{
								{0.98797297,0.314147},
								1
							},
							{},
							
							{
								{0.94687003,0.25360799},
								1
							},
							
							{
								{0.96187001,0.25360799},
								1
							},
							{},
							
							{
								{0.95437002,0.245161},
								1
							},
							
							{
								{0.95437002,0.26205501},
								1
							},
							{},
							
							{
								{0.89249998,0.233711},
								1
							},
							
							{
								{0.90750003,0.233711},
								1
							},
							{},
							
							{
								{0.89999998,0.225263},
								1
							},
							
							{
								{0.89999998,0.242158},
								1
							},
							{},
							
							{
								{0.83813,0.25360799},
								1
							},
							
							{
								{0.85312998,0.25360799},
								1
							},
							{},
							
							{
								{0.84562999,0.245161},
								1
							},
							
							{
								{0.84562999,0.26205501},
								1
							},
							{},
							
							{
								{0.80452698,0.3057},
								1
							},
							
							{
								{0.81952697,0.3057},
								1
							},
							{},
							
							{
								{0.81202698,0.29725301},
								1
							},
							
							{
								{0.81202698,0.314147},
								1
							},
							{},
							
							{
								{0.80452698,0.37008899},
								1
							},
							
							{
								{0.81952697,0.37008899},
								1
							},
							{},
							
							{
								{0.81202698,0.361642},
								1
							},
							
							{
								{0.81202698,0.378537},
								1
							},
							{},
							
							{
								{0.83813,0.42218199},
								1
							},
							
							{
								{0.85312998,0.42218199},
								1
							},
							{},
							
							{
								{0.84562999,0.41373399},
								1
							},
							
							{
								{0.84562999,0.43062899},
								1
							},
							{},
							
							{
								"ASL_Instrument",
								{0,0.064999998},
								1
							},
							
							{
								"ASL_Instrument",
								{0,0.085000001},
								1
							},
							{},
							
							{
								{0.5,0.107},
								1
							},
							
							{
								{0.50999999,0.129526},
								1
							},
							
							{
								{0.49000001,0.129526},
								1
							},
							
							{
								{0.5,0.107},
								1
							},
							{},
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class HorizonBankRot
					{
						points[]=
						{
							
							{
								"HorizonBankRot",
								{0,0.39421001},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.41673699},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.41673699},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.39421001},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0,0.15000001};
						clipBR[]={1,0.75};
						class Dimmed
						{
							class Level0
							{
								points[]=
								{
									
									{
										"Level0",
										{0.40000001,0},
										1
									},
									
									{
										"Level0",
										{0.050000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.050000001,0},
										1
									},
									
									{
										"Level0",
										{-0.40000001,0},
										1
									}
								};
							};
							class LevelM5: Level0
							{
								points[]=
								{
									
									{
										"LevelM5",
										{-0.2,0.0049999999},
										1
									},
									
									{
										"LevelM5",
										{-0.17,0.0040000002},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.14,0.003},
										1
									},
									
									{
										"LevelM5",
										{-0.11,0.0020000001},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.079999998,0.001},
										1
									},
									
									{
										"LevelM5",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM5",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM5",
										{0.079999998,0.001},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.11,0.0020000001},
										1
									},
									
									{
										"LevelM5",
										{0.14,0.003},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.17,0.0040000002},
										1
									},
									
									{
										"LevelM5",
										{0.2,0.0049999999},
										1
									}
								};
							};
							class VALM_1_5
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP5: Level0
							{
								points[]=
								{
									
									{
										"LevelP5",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP5",
										{-0.2,0},
										1
									},
									
									{
										"LevelP5",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0},
										1
									},
									
									{
										"LevelP5",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_5
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM10: Level0
							{
								points[]=
								{
									
									{
										"LevelM10",
										{-0.2,0.0099999998},
										1
									},
									
									{
										"LevelM10",
										{-0.17,0.0080000004},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.14,0.0060000001},
										1
									},
									
									{
										"LevelM10",
										{-0.11,0.0040000002},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.079999998,0.0020000001},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM10",
										{0.079999998,0.0020000001},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.11,0.0040000002},
										1
									},
									
									{
										"LevelM10",
										{0.14,0.0060000001},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.17,0.0080000004},
										1
									},
									
									{
										"LevelM10",
										{0.2,0.0099999998},
										1
									}
								};
							};
							class VALM_1_10
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP10: Level0
							{
								points[]=
								{
									
									{
										"LevelP10",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP10",
										{-0.2,0},
										1
									},
									
									{
										"LevelP10",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0},
										1
									},
									
									{
										"LevelP10",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM15: Level0
							{
								points[]=
								{
									
									{
										"LevelM15",
										{-0.2,0.015},
										1
									},
									
									{
										"LevelM15",
										{-0.17,0.012},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.14,0.0089999996},
										1
									},
									
									{
										"LevelM15",
										{-0.11,0.0060000001},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.079999998,0.003},
										1
									},
									
									{
										"LevelM15",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM15",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM15",
										{0.079999998,0.003},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.11,0.0060000001},
										1
									},
									
									{
										"LevelM15",
										{0.14,0.0089999996},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.17,0.012},
										1
									},
									
									{
										"LevelM15",
										{0.2,0.015},
										1
									}
								};
							};
							class VALM_1_15
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP15: Level0
							{
								points[]=
								{
									
									{
										"LevelP15",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP15",
										{-0.2,0},
										1
									},
									
									{
										"LevelP15",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0},
										1
									},
									
									{
										"LevelP15",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_15
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM20: Level0
							{
								points[]=
								{
									
									{
										"LevelM20",
										{-0.2,0.02},
										1
									},
									
									{
										"LevelM20",
										{-0.17,0.016000001},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.14,0.012},
										1
									},
									
									{
										"LevelM20",
										{-0.11,0.0080000004},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.079999998,0.0040000002},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM20",
										{0.079999998,0.0040000002},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.11,0.0080000004},
										1
									},
									
									{
										"LevelM20",
										{0.14,0.012},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.17,0.016000001},
										1
									},
									
									{
										"LevelM20",
										{0.2,0.02},
										1
									}
								};
							};
							class VALM_1_20
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP20: Level0
							{
								points[]=
								{
									
									{
										"LevelP20",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP20",
										{-0.2,0},
										1
									},
									
									{
										"LevelP20",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0},
										1
									},
									
									{
										"LevelP20",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM25: Level0
							{
								points[]=
								{
									
									{
										"LevelM25",
										{-0.2,0.025},
										1
									},
									
									{
										"LevelM25",
										{-0.17,0.02},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.14,0.015},
										1
									},
									
									{
										"LevelM25",
										{-0.11,0.0099999998},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.079999998,0.0049999999},
										1
									},
									
									{
										"LevelM25",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM25",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM25",
										{0.079999998,0.0049999999},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.11,0.0099999998},
										1
									},
									
									{
										"LevelM25",
										{0.14,0.015},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.17,0.02},
										1
									},
									
									{
										"LevelM25",
										{0.2,0.025},
										1
									}
								};
							};
							class VALM_1_25
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP25: Level0
							{
								points[]=
								{
									
									{
										"LevelP25",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP25",
										{-0.2,0},
										1
									},
									
									{
										"LevelP25",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0},
										1
									},
									
									{
										"LevelP25",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_25
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM30: Level0
							{
								points[]=
								{
									
									{
										"LevelM30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelM30",
										{-0.17,0.024},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.14,0.017999999},
										1
									},
									
									{
										"LevelM30",
										{-0.11,0.012},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.079999998,0.0060000001},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM30",
										{0.079999998,0.0060000001},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.11,0.012},
										1
									},
									
									{
										"LevelM30",
										{0.14,0.017999999},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.17,0.024},
										1
									},
									
									{
										"LevelM30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP30: Level0
							{
								points[]=
								{
									
									{
										"LevelP30",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP30",
										{-0.2,0},
										1
									},
									
									{
										"LevelP30",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0},
										1
									},
									
									{
										"LevelP30",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM35: Level0
							{
								points[]=
								{
									
									{
										"LevelM35",
										{-0.2,0.035},
										1
									},
									
									{
										"LevelM35",
										{-0.17,0.028000001},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.14,0.021},
										1
									},
									
									{
										"LevelM35",
										{-0.11,0.014},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.079999998,0.0070000002},
										1
									},
									
									{
										"LevelM35",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM35",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM35",
										{0.079999998,0.0070000002},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.11,0.014},
										1
									},
									
									{
										"LevelM35",
										{0.14,0.021},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.17,0.028000001},
										1
									},
									
									{
										"LevelM35",
										{0.2,0.035},
										1
									}
								};
							};
							class VALM_1_35
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP35: Level0
							{
								points[]=
								{
									
									{
										"LevelP35",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP35",
										{-0.2,0},
										1
									},
									
									{
										"LevelP35",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0},
										1
									},
									
									{
										"LevelP35",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_35
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM40: Level0
							{
								points[]=
								{
									
									{
										"LevelM40",
										{-0.2,0.039999999},
										1
									},
									
									{
										"LevelM40",
										{-0.17,0.032000002},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.14,0.024},
										1
									},
									
									{
										"LevelM40",
										{-0.11,0.016000001},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.079999998,0.0080000004},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM40",
										{0.079999998,0.0080000004},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.11,0.016000001},
										1
									},
									
									{
										"LevelM40",
										{0.14,0.024},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.17,0.032000002},
										1
									},
									
									{
										"LevelM40",
										{0.2,0.039999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP40: Level0
							{
								points[]=
								{
									
									{
										"LevelP40",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP40",
										{-0.2,0},
										1
									},
									
									{
										"LevelP40",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0},
										1
									},
									
									{
										"LevelP40",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM45: Level0
							{
								points[]=
								{
									
									{
										"LevelM45",
										{-0.2,0.045000002},
										1
									},
									
									{
										"LevelM45",
										{-0.17,0.035999998},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.14,0.027000001},
										1
									},
									
									{
										"LevelM45",
										{-0.11,0.017999999},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.079999998,0.0089999996},
										1
									},
									
									{
										"LevelM45",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM45",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM45",
										{0.079999998,0.0089999996},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.11,0.017999999},
										1
									},
									
									{
										"LevelM45",
										{0.14,0.027000001},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.17,0.035999998},
										1
									},
									
									{
										"LevelM45",
										{0.2,0.045000002},
										1
									}
								};
							};
							class VALM_1_45
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP45: Level0
							{
								points[]=
								{
									
									{
										"LevelP45",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP45",
										{-0.2,0},
										1
									},
									
									{
										"LevelP45",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0},
										1
									},
									
									{
										"LevelP45",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_45
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM50: Level0
							{
								points[]=
								{
									
									{
										"LevelM50",
										{-0.2,0.050000001},
										1
									},
									
									{
										"LevelM50",
										{-0.17,0.039999999},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.14,0.029999999},
										1
									},
									
									{
										"LevelM50",
										{-0.11,0.02},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.079999998,0.0099999998},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM50",
										{0.079999998,0.0099999998},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.11,0.02},
										1
									},
									
									{
										"LevelM50",
										{0.14,0.029999999},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.17,0.039999999},
										1
									},
									
									{
										"LevelM50",
										{0.2,0.050000001},
										1
									}
								};
							};
							class VALM_1_50
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP50: Level0
							{
								points[]=
								{
									
									{
										"LevelP50",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP50",
										{-0.2,0},
										1
									},
									
									{
										"LevelP50",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0},
										1
									},
									
									{
										"LevelP50",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM55: Level0
							{
								points[]=
								{
									
									{
										"LevelM55",
										{-0.2,0.055},
										1
									},
									
									{
										"LevelM55",
										{-0.17,0.044},
										1
									},
									{},
									
									{
										"LevelM55",
										{-0.14,0.033},
										1
									},
									
									{
										"LevelM55",
										{-0.11,0.022},
										1
									},
									{},
									
									{
										"LevelM55",
										{-0.079999998,0.011},
										1
									},
									
									{
										"LevelM55",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM55",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM55",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM55",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM55",
										{0.079999998,0.011},
										1
									},
									{},
									
									{
										"LevelM55",
										{0.11,0.022},
										1
									},
									
									{
										"LevelM55",
										{0.14,0.033},
										1
									},
									{},
									
									{
										"LevelM55",
										{0.17,0.044},
										1
									},
									
									{
										"LevelM55",
										{0.2,0.055},
										1
									}
								};
							};
							class VALM_1_55
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM55",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM55",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM55",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP55: Level0
							{
								points[]=
								{
									
									{
										"LevelP55",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP55",
										{-0.2,0},
										1
									},
									
									{
										"LevelP55",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP55",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP55",
										{0.2,0},
										1
									},
									
									{
										"LevelP55",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_55
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP55",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP55",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP55",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM60: Level0
							{
								points[]=
								{
									
									{
										"LevelM60",
										{-0.2,0.059999999},
										1
									},
									
									{
										"LevelM60",
										{-0.17,0.048},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.14,0.035999998},
										1
									},
									
									{
										"LevelM60",
										{-0.11,0.024},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.079999998,0.012},
										1
									},
									
									{
										"LevelM60",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM60",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM60",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM60",
										{0.079999998,0.012},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.11,0.024},
										1
									},
									
									{
										"LevelM60",
										{0.14,0.035999998},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.17,0.048},
										1
									},
									
									{
										"LevelM60",
										{0.2,0.059999999},
										1
									}
								};
							};
							class VALM_1_60
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP60: Level0
							{
								points[]=
								{
									
									{
										"LevelP60",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP60",
										{-0.2,0},
										1
									},
									
									{
										"LevelP60",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP60",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP60",
										{0.2,0},
										1
									},
									
									{
										"LevelP60",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_60
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP60",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP60",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM65: Level0
							{
								points[]=
								{
									
									{
										"LevelM65",
										{-0.2,0.064999998},
										1
									},
									
									{
										"LevelM65",
										{-0.17,0.052000001},
										1
									},
									{},
									
									{
										"LevelM65",
										{-0.14,0.039000001},
										1
									},
									
									{
										"LevelM65",
										{-0.11,0.026000001},
										1
									},
									{},
									
									{
										"LevelM65",
										{-0.079999998,0.013},
										1
									},
									
									{
										"LevelM65",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM65",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM65",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM65",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM65",
										{0.079999998,0.013},
										1
									},
									{},
									
									{
										"LevelM65",
										{0.11,0.026000001},
										1
									},
									
									{
										"LevelM65",
										{0.14,0.039000001},
										1
									},
									{},
									
									{
										"LevelM65",
										{0.17,0.052000001},
										1
									},
									
									{
										"LevelM65",
										{0.2,0.064999998},
										1
									}
								};
							};
							class VALM_1_65
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM65",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM65",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM65",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP65: Level0
							{
								points[]=
								{
									
									{
										"LevelP65",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP65",
										{-0.2,0},
										1
									},
									
									{
										"LevelP65",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP65",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP65",
										{0.2,0},
										1
									},
									
									{
										"LevelP65",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_65
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP65",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP65",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP65",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM70: Level0
							{
								points[]=
								{
									
									{
										"LevelM70",
										{-0.2,0.07},
										1
									},
									
									{
										"LevelM70",
										{-0.17,0.056000002},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.14,0.041999999},
										1
									},
									
									{
										"LevelM70",
										{-0.11,0.028000001},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.079999998,0.014},
										1
									},
									
									{
										"LevelM70",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM70",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM70",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM70",
										{0.079999998,0.014},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.11,0.028000001},
										1
									},
									
									{
										"LevelM70",
										{0.14,0.041999999},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.17,0.056000002},
										1
									},
									
									{
										"LevelM70",
										{0.2,0.07},
										1
									}
								};
							};
							class VALM_1_70
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP70: Level0
							{
								points[]=
								{
									
									{
										"LevelP70",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP70",
										{-0.2,0},
										1
									},
									
									{
										"LevelP70",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP70",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP70",
										{0.2,0},
										1
									},
									
									{
										"LevelP70",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_70
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP70",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP70",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM75: Level0
							{
								points[]=
								{
									
									{
										"LevelM75",
										{-0.2,0.075000003},
										1
									},
									
									{
										"LevelM75",
										{-0.17,0.059999999},
										1
									},
									{},
									
									{
										"LevelM75",
										{-0.14,0.045000002},
										1
									},
									
									{
										"LevelM75",
										{-0.11,0.029999999},
										1
									},
									{},
									
									{
										"LevelM75",
										{-0.079999998,0.015},
										1
									},
									
									{
										"LevelM75",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM75",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM75",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM75",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM75",
										{0.079999998,0.015},
										1
									},
									{},
									
									{
										"LevelM75",
										{0.11,0.029999999},
										1
									},
									
									{
										"LevelM75",
										{0.14,0.045000002},
										1
									},
									{},
									
									{
										"LevelM75",
										{0.17,0.059999999},
										1
									},
									
									{
										"LevelM75",
										{0.2,0.075000003},
										1
									}
								};
							};
							class VALM_1_75
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM75",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM75",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM75",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP75: Level0
							{
								points[]=
								{
									
									{
										"LevelP75",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP75",
										{-0.2,0},
										1
									},
									
									{
										"LevelP75",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP75",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP75",
										{0.2,0},
										1
									},
									
									{
										"LevelP75",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_75
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP75",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP75",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP75",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM80: Level0
							{
								points[]=
								{
									
									{
										"LevelM80",
										{-0.2,0.079999998},
										1
									},
									
									{
										"LevelM80",
										{-0.17,0.064000003},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.14,0.048},
										1
									},
									
									{
										"LevelM80",
										{-0.11,0.032000002},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.079999998,0.016000001},
										1
									},
									
									{
										"LevelM80",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM80",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM80",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM80",
										{0.079999998,0.016000001},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.11,0.032000002},
										1
									},
									
									{
										"LevelM80",
										{0.14,0.048},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.17,0.064000003},
										1
									},
									
									{
										"LevelM80",
										{0.2,0.079999998},
										1
									}
								};
							};
							class VALM_1_80
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP80: Level0
							{
								points[]=
								{
									
									{
										"LevelP80",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP80",
										{-0.2,0},
										1
									},
									
									{
										"LevelP80",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP80",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP80",
										{0.2,0},
										1
									},
									
									{
										"LevelP80",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_80
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP80",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP80",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM85: Level0
							{
								points[]=
								{
									
									{
										"LevelM85",
										{-0.2,0.085000001},
										1
									},
									
									{
										"LevelM85",
										{-0.17,0.068000004},
										1
									},
									{},
									
									{
										"LevelM85",
										{-0.14,0.050999999},
										1
									},
									
									{
										"LevelM85",
										{-0.11,0.034000002},
										1
									},
									{},
									
									{
										"LevelM85",
										{-0.079999998,0.017000001},
										1
									},
									
									{
										"LevelM85",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM85",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM85",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM85",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM85",
										{0.079999998,0.017000001},
										1
									},
									{},
									
									{
										"LevelM85",
										{0.11,0.034000002},
										1
									},
									
									{
										"LevelM85",
										{0.14,0.050999999},
										1
									},
									{},
									
									{
										"LevelM85",
										{0.17,0.068000004},
										1
									},
									
									{
										"LevelM85",
										{0.2,0.085000001},
										1
									}
								};
							};
							class VALM_1_85
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM85",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM85",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM85",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP85: Level0
							{
								points[]=
								{
									
									{
										"LevelP85",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP85",
										{-0.2,0},
										1
									},
									
									{
										"LevelP85",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP85",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP85",
										{0.2,0},
										1
									},
									
									{
										"LevelP85",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_85
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP85",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP85",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP85",
									{-0.18000001,0.082000002},
									1
								};
							};
							class LevelM90: Level0
							{
								points[]=
								{
									
									{
										"LevelM90",
										{-0.2,0.090000004},
										1
									},
									
									{
										"LevelM90",
										{-0.17,0.071999997},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.14,0.054000001},
										1
									},
									
									{
										"LevelM90",
										{-0.11,0.035999998},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.079999998,0.017999999},
										1
									},
									
									{
										"LevelM90",
										{-0.050000001,0},
										1
									},
									
									{
										"LevelM90",
										{-0.050000001,-0.029999999},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.050000001,-0.029999999},
										1
									},
									
									{
										"LevelM90",
										{0.050000001,0},
										1
									},
									
									{
										"LevelM90",
										{0.079999998,0.017999999},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.11,0.035999998},
										1
									},
									
									{
										"LevelM90",
										{0.14,0.054000001},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.17,0.071999997},
										1
									},
									
									{
										"LevelM90",
										{0.2,0.090000004},
										1
									}
								};
							};
							class VALM_1_90
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{-0.18000001,-0.082000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{-0.1,-0.082000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{-0.18000001,-0.032000002},
									1
								};
							};
							class LevelP90: Level0
							{
								points[]=
								{
									
									{
										"LevelP90",
										{-0.2,0.029999999},
										1
									},
									
									{
										"LevelP90",
										{-0.2,0},
										1
									},
									
									{
										"LevelP90",
										{-0.050000001,0},
										1
									},
									{},
									
									{
										"LevelP90",
										{0.050000001,0},
										1
									},
									
									{
										"LevelP90",
										{0.2,0},
										1
									},
									
									{
										"LevelP90",
										{0.2,0.029999999},
										1
									}
								};
							};
							class VALP_1_90
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{-0.18000001,0.032000002},
									1
								};
								right[]=
								{
									"LevelP90",
									{-0.1,0.032000002},
									1
								};
								down[]=
								{
									"LevelP90",
									{-0.18000001,0.082000002},
									1
								};
							};
						};
					};
					class SpeedNumber
					{
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							{0.1,0.309737},
							1
						};
						right[]=
						{
							{0.16,0.309737},
							1
						};
						down[]=
						{
							{0.1,0.36605299},
							1
						};
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeASL";
						sourceScale=1;
						pos[]=
						{
							{0.89999998,0.309737},
							1
						};
						right[]=
						{
							{0.95999998,0.309737},
							1
						};
						down[]=
						{
							{0.89999998,0.36605299},
							1
						};
					};
					class AltNumberAGL
					{
						class Text
						{
							source="static";
							align="left";
							scale=1;
							pos[]=
							{
								{0.80000001,0.53500003},
								1
							};
							right[]=
							{
								{0.86000001,0.53500003},
								1
							};
							down[]=
							{
								{0.80000001,0.59131598},
								1
							};
						};
						class Box
						{
							points[]=
							{
								
								{
									{0.81,0.59131598},
									1
								},
								
								{
									{1,0.59131598},
									1
								},
								
								{
									{1,0.53500003},
									1
								},
								
								{
									{0.81,0.53500003},
									1
								},
								
								{
									{0.81,0.59131598},
									1
								}
							};
						};
						class AltNumber
						{
							source="altitudeAGL";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.99000001,0.53500003},
								1
							};
							right[]=
							{
								{1.05,0.53500003},
								1
							};
							down[]=
							{
								{0.99000001,0.59131598},
								1
							};
						};
					};
					class Gear
					{
						class Highlighted
						{
							condition="ils";
							class Text
							{
								source="static";
								align="left";
								scale=1;
								pos[]=
								{
									{0.99000001,0.81657898},
									1
								};
								right[]=
								{
									{1.05,0.81657898},
									1
								};
								down[]=
								{
									{0.99000001,0.872895},
									1
								};
							};
						};
					};
					class Flaps
					{
						class Highlighted
						{
							condition="flaps";
							class Text
							{
								source="static";
								align="left";
								scale=1;
								pos[]=
								{
									{0.99000001,0.872895},
									1
								};
								right[]=
								{
									{1.05,0.872895},
									1
								};
								down[]=
								{
									{0.99000001,0.92921001},
									1
								};
							};
						};
					};
					class Lights
					{
						class Highlighted
						{
							condition="lights";
							class Text
							{
								source="static";
								align="right";
								scale=1;
								pos[]=
								{
									{0.0099999998,0.81657898},
									1
								};
								right[]=
								{
									{0.07,0.81657898},
									1
								};
								down[]=
								{
									{0.0099999998,0.872895},
									1
								};
							};
						};
					};
					class CollisionLights
					{
						class Highlighted
						{
							condition="collisionlights";
							class Text
							{
								source="static";
								align="right";
								scale=1;
								pos[]=
								{
									{0.0099999998,0.872895},
									1
								};
								right[]=
								{
									{0.07,0.872895},
									1
								};
								down[]=
								{
									{0.0099999998,0.92921001},
									1
								};
							};
						};
					};
					class RadarTargets
					{
						condition="1-ils";
						class RadarBoxes
						{
							pos0[]={0.4975,0.38299999};
							pos10[]={1.4475,1.4529999};
							width=4;
							points[]=
							{
								
								{
									{-0.02,-0.0225263},
									1
								},
								
								{
									{0.02,-0.0225263},
									1
								},
								
								{
									{0.02,0.0225263},
									1
								},
								
								{
									{-0.02,0.0225263},
									1
								},
								
								{
									{-0.02,-0.0225263},
									1
								}
							};
						};
					};
					class TargetDiamond
					{
						condition="1-ils";
						class shape
						{
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.033789501},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.033789501},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.033789501},
									1
								}
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0,-0.045052599},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.0394211},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.033789501},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.028157899},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.0225263},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.0168947},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.0112632},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.00563158},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,0.045052599},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,0.0394211},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,0.033789501},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,0.028157899},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,0.0225263},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,0.0168947},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,0.0112632},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,0.00563158},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.039999999,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.035,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.025,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.02,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.015,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0099999998,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0049999999,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.039999999,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.035,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.025,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.02,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.015,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0099999998,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0049999999,0},
									1
								},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,-0.045052599},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,-0.0394211},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,-0.033789501},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,-0.028157899},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,-0.0225263},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,-0.0168947},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,-0.0112632},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,-0.00563158},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,0.045052599},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,0.0394211},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,0.033789501},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,0.028157899},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,0.0225263},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,0.0168947},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,0.0112632},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0,0.00563158},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.039999999,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.035,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.025,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.02,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.015,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0099999998,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0049999999,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.039999999,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.035,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.025,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.02,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.015,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0099999998,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0049999999,0},
									1
								},
								{}
							};
						};
					};
					class Stall
					{
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							source="static";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.202737},
								1
							};
							right[]=
							{
								{0.56,0.202737},
								1
							};
							down[]=
							{
								{0.5,0.25905299},
								1
							};
						};
					};
					class IncomingMissile: Stall
					{
						condition="incomingmissile";
						class Text: Text
						{
							pos[]=
							{
								{0.48500001,0.47305301},
								1
							};
							right[]=
							{
								{0.54500002,0.47305301},
								1
							};
							down[]=
							{
								{0.48500001,0.52936798},
								1
							};
						};
					};
					class Ammo
					{
						source="ammo";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.81657898},
							1
						};
						right[]=
						{
							{0.56,0.81657898},
							1
						};
						down[]=
						{
							{0.5,0.872895},
							1
						};
					};
					class Weapons
					{
						source="weapon";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.872895},
							1
						};
						right[]=
						{
							{0.56,0.872895},
							1
						};
						down[]=
						{
							{0.5,0.92921001},
							1
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							source="static";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.62510502},
								1
							};
							right[]=
							{
								{0.54500002,0.62510502},
								1
							};
							down[]=
							{
								{0.48500001,0.68142098},
								1
							};
						};
					};
					class WeaponsLocked
					{
						condition="missilelocked";
						class Text
						{
							source="static";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.62510502},
								1
							};
							right[]=
							{
								{0.54500002,0.62510502},
								1
							};
							down[]=
							{
								{0.48500001,0.68142098},
								1
							};
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							source="wpdist";
							sourceScale=0.0099999998;
							align="left";
							scale=1;
							pos[]=
							{
								{0.94499999,0.70394701},
								1
							};
							right[]=
							{
								{1.005,0.70394701},
								1
							};
							down[]=
							{
								{0.94499999,0.76026303},
								1
							};
						};
						class WPstatic
						{
							source="static";
							align="center";
							scale=2;
							pos[]=
							{
								{0.95999998,0.70394701},
								1
							};
							right[]=
							{
								{0.98000002,0.70394701},
								1
							};
							down[]=
							{
								{0.95999998,0.76026303},
								1
							};
						};
						class WPIndex
						{
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.97000003,0.70394701},
								1
							};
							right[]=
							{
								{1.03,0.70394701},
								1
							};
							down[]=
							{
								{0.97000003,0.76026303},
								1
							};
						};
						class WP
						{
							points[]=
							{
								
								{
									"wppoint",
									1,
									"Limit0109",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									"Limit0109",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									"Limit0109",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class HeadingScale
					{
						horizontal=1;
						source="Heading";
						sourceScale=0.1;
						top=0.2;
						bottom=0.80000001;
						lineXleft=0.101368;
						lineYright=0.090105303;
						lineXleftMajor=0.101368;
						lineYrightMajor=0.078842103;
						majorLineEach=5;
						numberEach=5;
						step=0.2;
						StepSize=0.029999999;
						align="center";
						scale=1;
						pos[]={0.2,0.0197105};
						right[]={0.25999999,0.0197105};
						down[]={0.2,0.076026298};
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,-0.0270316},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,0.0270316},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0202737},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0202737},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0270316},
										1
									},
									
									{
										"ILS_W",
										{0,0.0270316},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0202737},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0202737},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,-0.0270316},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0.0270316},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.270316},
										1
									},
									
									{
										"ILS_H",
										{0,0.270316},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,-0.270316},
										1
									},
									
									{
										"ILS_H",
										{0.024,-0.270316},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,-0.135158},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,-0.135158},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,0.135158},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,0.135158},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0.270316},
										1
									},
									
									{
										"ILS_H",
										{0.024,0.270316},
										1
									}
								};
							};
							class airport
							{
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class Bomb
					{
						condition="bomb";
						class Circle
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.112632},
									1
								},
								
								{
									"ImpactPoint",
									{0.01736,-0.11092},
									1
								},
								
								{
									"ImpactPoint",
									{0.034200002,-0.10584},
									1
								},
								
								{
									"ImpactPoint",
									{0.050000001,-0.097538903},
									1
								},
								
								{
									"ImpactPoint",
									{0.064280003,-0.086275801},
									1
								},
								
								{
									"ImpactPoint",
									{0.0766,-0.072399601},
									1
								},
								
								{
									"ImpactPoint",
									{0.086599998,-0.056315798},
									1
								},
								
								{
									"ImpactPoint",
									{0.093970001,-0.038520001},
									1
								},
								
								{
									"ImpactPoint",
									{0.098480001,-0.019552801},
									1
								},
								
								{
									"ImpactPoint",
									{0.1,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.098480001,0.019552801},
									1
								},
								
								{
									"ImpactPoint",
									{0.093970001,0.038520001},
									1
								},
								
								{
									"ImpactPoint",
									{0.086599998,0.056315798},
									1
								},
								
								{
									"ImpactPoint",
									{0.0766,0.072399601},
									1
								},
								
								{
									"ImpactPoint",
									{0.064280003,0.086275801},
									1
								},
								
								{
									"ImpactPoint",
									{0.050000001,0.097538903},
									1
								},
								
								{
									"ImpactPoint",
									{0.034200002,0.10584},
									1
								},
								
								{
									"ImpactPoint",
									{0.01736,0.11092},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.112632},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01736,0.11092},
									1
								},
								
								{
									"ImpactPoint",
									{-0.034200002,0.10584},
									1
								},
								
								{
									"ImpactPoint",
									{-0.050000001,0.097538903},
									1
								},
								
								{
									"ImpactPoint",
									{-0.064280003,0.086275801},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0766,0.072399601},
									1
								},
								
								{
									"ImpactPoint",
									{-0.086599998,0.056315798},
									1
								},
								
								{
									"ImpactPoint",
									{-0.093970001,0.038520001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.098480001,0.019552801},
									1
								},
								
								{
									"ImpactPoint",
									{-0.1,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.098480001,-0.019552801},
									1
								},
								
								{
									"ImpactPoint",
									{-0.093970001,-0.038520001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.086599998,-0.056315798},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0766,-0.072399601},
									1
								},
								
								{
									"ImpactPoint",
									{-0.064280003,-0.086275801},
									1
								},
								
								{
									"ImpactPoint",
									{-0.050000001,-0.097538903},
									1
								},
								
								{
									"ImpactPoint",
									{-0.034200002,-0.10584},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01736,-0.11092},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.112632},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.0225263},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,-0.015768399},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									
									{
										"+ 0.02",
										0
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,0.015768399},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0.0225263},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,0.015768399},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									
									{
										"- 0.02",
										0
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,-0.015768399},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.0225263},
									1
								},
								{},
								
								{
									"Velocity",
									0.001,
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
					};
					class MGun
					{
						condition="mgun";
						class Ball
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0015628299,-0.0099828402},
										1
									},
									
									{
										"ImpactPoint",
										{0.0030781799,-0.0095255198},
										1
									},
									
									{
										"ImpactPoint",
										{0.0044999998,-0.0087787602},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0044999998,-0.0087787602},
										1
									},
									
									{
										"ImpactPoint",
										{0.0057850899,-0.0077652698},
										1
									},
									
									{
										"ImpactPoint",
										{0.0068943999,-0.0065158401},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0068943999,-0.0065158401},
										1
									},
									
									{
										"ImpactPoint",
										{0.0077942298,-0.00506842},
										1
									},
									
									{
										"ImpactPoint",
										{0.0084572304,-0.0034670001},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0084572304,-0.0034670001},
										1
									},
									
									{
										"ImpactPoint",
										{0.0088632703,-0.0017602399},
										1
									},
									
									{
										"ImpactPoint",
										{0.0089999996,4.4309501e-010},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0089999996,4.4309501e-010},
										1
									},
									
									{
										"ImpactPoint",
										{0.0088632703,0.0017602399},
										1
									},
									
									{
										"ImpactPoint",
										{0.0084572304,0.0034670001},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0084572304,0.0034670001},
										1
									},
									
									{
										"ImpactPoint",
										{0.0077942298,0.00506842},
										1
									},
									
									{
										"ImpactPoint",
										{0.0068943999,0.0065158401},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0068943999,0.0065158401},
										1
									},
									
									{
										"ImpactPoint",
										{0.0057850899,0.0077652698},
										1
									},
									
									{
										"ImpactPoint",
										{0.0044999998,0.0087787602},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0044999998,0.0087787602},
										1
									},
									
									{
										"ImpactPoint",
										{0.0030781799,0.0095255198},
										1
									},
									
									{
										"ImpactPoint",
										{0.0015628299,0.0099828402},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0015628299,0.0099828402},
										1
									},
									
									{
										"ImpactPoint",
										{-7.8680501e-010,0.0101368},
										1
									},
									
									{
										"ImpactPoint",
										{-0.00156284,0.0099828402},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.00156284,0.0099828402},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0030781799,0.0095255198},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0044999998,0.0087787602},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0044999998,0.0087787602},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0057850899,0.0077652698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0068943999,0.0065158298},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0068943999,0.0065158298},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0077942298,0.00506842},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0084572304,0.0034670001},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0084572304,0.0034670001},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0088632703,0.0017602399},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0089999996,-1.20881e-010},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0089999996,-1.20881e-010},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0088632703,-0.00176025},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0084572304,-0.0034670001},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0084572304,-0.0034670001},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0077942298,-0.00506842},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0068943999,-0.0065158298},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0068943999,-0.0065158298},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0057850899,-0.0077652698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0044999998,-0.0087787602},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0044999998,-0.0087787602},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0030781799,-0.0095255096},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0015628299,-0.0099828402},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0015628299,-0.0099828402},
										1
									},
									
									{
										"ImpactPoint",
										{1.57361e-009,-0.0101368},
										1
									},
									
									{
										"ImpactPoint",
										{0.0015628299,-0.0099828402},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{0,0.0394211},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0043577901,0.056101501},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0732105},
										1
									},
									
									{
										"ImpactPoint",
										{0.0043577901,0.056101501},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{0.0247487,0.0278749},
										1
									},
									
									{
										"ImpactPoint",
										{0.032139398,0.0431404},
										1
									},
									
									{
										"ImpactPoint",
										{0.045961902,0.051767699},
										1
									},
									
									{
										"ImpactPoint",
										{0.038302202,0.0361991},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{0.035,-1.72315e-009},
										1
									},
									
									{
										"ImpactPoint",
										{0.049809702,0.0049082502},
										1
									},
									
									{
										"ImpactPoint",
										{0.064999998,-3.2001299e-009},
										1
									},
									
									{
										"ImpactPoint",
										{0.049809702,-0.0049082502},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{0.0247487,-0.0278749},
										1
									},
									
									{
										"ImpactPoint",
										{0.038302202,-0.0361991},
										1
									},
									
									{
										"ImpactPoint",
										{0.045961902,-0.051767699},
										1
									},
									
									{
										"ImpactPoint",
										{0.032139398,-0.0431404},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{-3.0598e-009,-0.0394211},
										1
									},
									
									{
										"ImpactPoint",
										{0.0043577799,-0.056101501},
										1
									},
									
									{
										"ImpactPoint",
										{-5.6824798e-009,-0.0732105},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0043577901,-0.056101501},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{-0.0247487,-0.0278749},
										1
									},
									
									{
										"ImpactPoint",
										{-0.032139398,-0.0431404},
										1
									},
									
									{
										"ImpactPoint",
										{-0.045961902,-0.051767699},
										1
									},
									
									{
										"ImpactPoint",
										{-0.038302202,-0.0361991},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{-0.035,4.7009102e-010},
										1
									},
									
									{
										"ImpactPoint",
										{-0.049809702,-0.0049082399},
										1
									},
									
									{
										"ImpactPoint",
										{-0.064999998,8.7302698e-010},
										1
									},
									
									{
										"ImpactPoint",
										{-0.049809702,0.0049082399},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{-0.0247487,0.0278749},
										1
									},
									
									{
										"ImpactPoint",
										{-0.038302202,0.0361991},
										1
									},
									
									{
										"ImpactPoint",
										{-0.045961902,0.051767599},
										1
									},
									
									{
										"ImpactPoint",
										{-0.032139398,0.0431404},
										1
									}
								}
							};
						};
					};
					class AAMissile
					{
						condition="AAmissile";
						class Circle
						{
							points[]=
							{
								
								{
									"center",
									{0,-0.225263},
									1
								},
								
								{
									"center",
									{0.03472,-0.221839},
									1
								},
								
								{
									"center",
									{0.068400003,-0.21168},
									1
								},
								
								{
									"center",
									{0.1,-0.195078},
									1
								},
								
								{
									"center",
									{0.12856001,-0.172552},
									1
								},
								
								{
									"center",
									{0.1532,-0.14479899},
									1
								},
								
								{
									"center",
									{0.1732,-0.112632},
									1
								},
								
								{
									"center",
									{0.18794,-0.077040002},
									1
								},
								
								{
									"center",
									{0.19696,-0.039105698},
									1
								},
								
								{
									"center",
									{0.2,0},
									1
								},
								
								{
									"center",
									{0.19696,0.039105698},
									1
								},
								
								{
									"center",
									{0.18794,0.077040002},
									1
								},
								
								{
									"center",
									{0.1732,0.112632},
									1
								},
								
								{
									"center",
									{0.1532,0.14479899},
									1
								},
								
								{
									"center",
									{0.12856001,0.172552},
									1
								},
								
								{
									"center",
									{0.1,0.195078},
									1
								},
								
								{
									"center",
									{0.068400003,0.21168},
									1
								},
								
								{
									"center",
									{0.03472,0.221839},
									1
								},
								
								{
									"center",
									{0,0.225263},
									1
								},
								
								{
									"center",
									{-0.03472,0.221839},
									1
								},
								
								{
									"center",
									{-0.068400003,0.21168},
									1
								},
								
								{
									"center",
									{-0.1,0.195078},
									1
								},
								
								{
									"center",
									{-0.12856001,0.172552},
									1
								},
								
								{
									"center",
									{-0.1532,0.14479899},
									1
								},
								
								{
									"center",
									{-0.1732,0.112632},
									1
								},
								
								{
									"center",
									{-0.18794,0.077040002},
									1
								},
								
								{
									"center",
									{-0.19696,0.039105698},
									1
								},
								
								{
									"center",
									{-0.2,0},
									1
								},
								
								{
									"center",
									{-0.19696,-0.039105698},
									1
								},
								
								{
									"center",
									{-0.18794,-0.077040002},
									1
								},
								
								{
									"center",
									{-0.1732,-0.112632},
									1
								},
								
								{
									"center",
									{-0.1532,-0.14479899},
									1
								},
								
								{
									"center",
									{-0.12856001,-0.172552},
									1
								},
								
								{
									"center",
									{-0.1,-0.195078},
									1
								},
								
								{
									"center",
									{-0.068400003,-0.21168},
									1
								},
								
								{
									"center",
									{-0.03472,-0.221839},
									1
								},
								
								{
									"center",
									{0,-0.225263},
									1
								}
							};
						};
					};
					class ATMissile
					{
						condition="ATmissile";
						class Circle
						{
							points[]=
							{
								
								{
									"center",
									{0,-0.18021099},
									1
								},
								
								{
									"center",
									{0.027775999,-0.177471},
									1
								},
								
								{
									"center",
									{0.054719999,-0.16934399},
									1
								},
								
								{
									"center",
									{0.079999998,-0.15606201},
									1
								},
								
								{
									"center",
									{0.102848,-0.138041},
									1
								},
								
								{
									"center",
									{0.12256,-0.115839},
									1
								},
								
								{
									"center",
									{0.13856,-0.090105303},
									1
								},
								
								{
									"center",
									{0.150352,-0.061632},
									1
								},
								
								{
									"center",
									{0.15756799,-0.0312845},
									1
								},
								
								{
									"center",
									{0.16,0},
									1
								},
								
								{
									"center",
									{0.15756799,0.0312845},
									1
								},
								
								{
									"center",
									{0.150352,0.061632},
									1
								},
								
								{
									"center",
									{0.13856,0.090105303},
									1
								},
								
								{
									"center",
									{0.12256,0.115839},
									1
								},
								
								{
									"center",
									{0.102848,0.138041},
									1
								},
								
								{
									"center",
									{0.079999998,0.15606201},
									1
								},
								
								{
									"center",
									{0.054719999,0.16934399},
									1
								},
								
								{
									"center",
									{0.027775999,0.177471},
									1
								},
								
								{
									"center",
									{0,0.18021099},
									1
								},
								
								{
									"center",
									{-0.027775999,0.177471},
									1
								},
								
								{
									"center",
									{-0.054719999,0.16934399},
									1
								},
								
								{
									"center",
									{-0.079999998,0.15606201},
									1
								},
								
								{
									"center",
									{-0.102848,0.138041},
									1
								},
								
								{
									"center",
									{-0.12256,0.115839},
									1
								},
								
								{
									"center",
									{-0.13856,0.090105303},
									1
								},
								
								{
									"center",
									{-0.150352,0.061632},
									1
								},
								
								{
									"center",
									{-0.15756799,0.0312845},
									1
								},
								
								{
									"center",
									{-0.16,0},
									1
								},
								
								{
									"center",
									{-0.15756799,-0.0312845},
									1
								},
								
								{
									"center",
									{-0.150352,-0.061632},
									1
								},
								
								{
									"center",
									{-0.13856,-0.090105303},
									1
								},
								
								{
									"center",
									{-0.12256,-0.115839},
									1
								},
								
								{
									"center",
									{-0.102848,-0.138041},
									1
								},
								
								{
									"center",
									{-0.079999998,-0.15606201},
									1
								},
								
								{
									"center",
									{-0.054719999,-0.16934399},
									1
								},
								
								{
									"center",
									{-0.027775999,-0.177471},
									1
								},
								
								{
									"center",
									{0,-0.18021099},
									1
								}
							};
						};
						class Time
						{
							width=4;
							points[]=
							{
								
								{
									"center",
									{0,-0.135158},
									1
								},
								
								{
									"center",
									{0,-0.168947},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.15000001},
									1,
									"center",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.12},
									1,
									"center",
									1
								}
							};
						};
					};
					class RocketCrosshair
					{
						condition="Rocket";
						class BombCrosshair
						{
							width=4;
							points[]=
							{
								
								{
									"Velocity",
									0.001,
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.118263},
									1
								},
								
								{
									"ImpactPoint",
									{0.018228,-0.116466},
									1
								},
								
								{
									"ImpactPoint",
									{0.035909999,-0.111132},
									1
								},
								
								{
									"ImpactPoint",
									{0.052499998,-0.102416},
									1
								},
								
								{
									"ImpactPoint",
									{0.067493998,-0.090589598},
									1
								},
								
								{
									"ImpactPoint",
									{0.080430001,-0.076019503},
									1
								},
								
								{
									"ImpactPoint",
									{0.09093,-0.0591316},
									1
								},
								
								{
									"ImpactPoint",
									{0.098668501,-0.040445998},
									1
								},
								
								{
									"ImpactPoint",
									{0.103404,-0.0205305},
									1
								},
								
								{
									"ImpactPoint",
									{0.105,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.103404,0.0205305},
									1
								},
								
								{
									"ImpactPoint",
									{0.098668501,0.040445998},
									1
								},
								
								{
									"ImpactPoint",
									{0.09093,0.0591316},
									1
								},
								
								{
									"ImpactPoint",
									{0.080430001,0.076019503},
									1
								},
								
								{
									"ImpactPoint",
									{0.067493998,0.090589598},
									1
								},
								
								{
									"ImpactPoint",
									{0.052499998,0.102416},
									1
								},
								
								{
									"ImpactPoint",
									{0.035909999,0.111132},
									1
								},
								
								{
									"ImpactPoint",
									{0.018228,0.116466},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.118263},
									1
								},
								
								{
									"ImpactPoint",
									{-0.018228,0.116466},
									1
								},
								
								{
									"ImpactPoint",
									{-0.035909999,0.111132},
									1
								},
								
								{
									"ImpactPoint",
									{-0.052499998,0.102416},
									1
								},
								
								{
									"ImpactPoint",
									{-0.067493998,0.090589598},
									1
								},
								
								{
									"ImpactPoint",
									{-0.080430001,0.076019503},
									1
								},
								
								{
									"ImpactPoint",
									{-0.09093,0.0591316},
									1
								},
								
								{
									"ImpactPoint",
									{-0.098668501,0.040445998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.103404,0.0205305},
									1
								},
								
								{
									"ImpactPoint",
									{-0.105,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.103404,-0.0205305},
									1
								},
								
								{
									"ImpactPoint",
									{-0.098668501,-0.040445998},
									1
								},
								
								{
									"ImpactPoint",
									{-0.09093,-0.0591316},
									1
								},
								
								{
									"ImpactPoint",
									{-0.080430001,-0.076019503},
									1
								},
								
								{
									"ImpactPoint",
									{-0.067493998,-0.090589598},
									1
								},
								
								{
									"ImpactPoint",
									{-0.052499998,-0.102416},
									1
								},
								
								{
									"ImpactPoint",
									{-0.035909999,-0.111132},
									1
								},
								
								{
									"ImpactPoint",
									{-0.018228,-0.116466},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.118263},
									1
								}
							};
						};
						class Time
						{
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.090105303},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.112632},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.1},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								}
							};
						};
					};
				};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			hit="_this call bis_fnc_planeAiEject";
		};
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		_generalMacro="Plane_Fighter_03_dynamicLoadout_base_F";
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"B_ZEPHYR"
						};
						attachment="PylonRack_1Rnd_LG_scalpel";
						maxweight=200;
						UIposition[]={0.34999999,0.079999998};
					};
					class Pylons2: Pylons1
					{
						attachment="PylonRack_1Rnd_AAA_missiles";
						maxweight=320;
						UIposition[]={0.345,0.13};
					};
					class Pylons3: Pylons1
					{
						hardpoints[]=
						{
							"B_ZEPHYR",
							"B_MISSILE_PYLON",
							"B_BOMB_PYLON"
						};
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						maxweight=400;
						UIposition[]={0.34,0.18000001};
					};
					class Pylons4: Pylons1
					{
						attachment="PylonWeapon_300Rnd_20mm_shells";
						maxweight=500;
						UIposition[]={0.27000001,0.28};
						hardpoints[]=
						{
							"B_A143_BUZZARD_CENTER_PYLON"
						};
					};
					class Pylons5: Pylons3
					{
						UIposition[]={0.33000001,0.38};
						mirroredMissilePos=3;
					};
					class Pylons6: Pylons2
					{
						UIposition[]={0.33000001,0.43000001};
						mirroredMissilePos=2;
					};
					class Pylons7: Pylons1
					{
						UIposition[]={0.34,0.47999999};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						attachment[]={};
					};
					class Default
					{
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class AA
					{
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_GAA_missiles",
							"PylonRack_1Rnd_GAA_missiles",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonRack_1Rnd_GAA_missiles",
							"PylonRack_1Rnd_GAA_missiles",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class AT
					{
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_LG_scalpel",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_1Rnd_LG_scalpel",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class CAS
					{
						attachment[]=
						{
							"PylonRack_1Rnd_LG_scalpel",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_LG_scalpel"
						};
					};
				};
			};
		};
	};
	class I_Plane_Fighter_03_CAS_F: Plane_Fighter_03_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"stick_pilot_bank",
					0
				},
				
				{
					"stick_pilot_dive",
					0
				},
				
				{
					"rotor",
					0
				},
				
				{
					"flapl",
					0
				},
				
				{
					"flapr",
					0
				},
				
				{
					"airbrake1",
					0
				},
				
				{
					"airbrake2",
					0
				},
				
				{
					"aileronl",
					0
				},
				
				{
					"aileronr",
					0
				},
				
				{
					"elevatorl",
					0
				},
				
				{
					"elevatorr",
					0
				},
				
				{
					"rudder",
					0
				},
				
				{
					"rudder_small",
					0
				},
				
				{
					"canopy1",
					0
				},
				
				{
					"canopy2",
					0
				},
				
				{
					"gear_1",
					0
				},
				
				{
					"gear_1_steering",
					0
				},
				
				{
					"gear_1_steering2",
					0
				},
				
				{
					"gear_1_hatch_1",
					0
				},
				
				{
					"gear_1_hatch_2",
					0
				},
				
				{
					"gear_1_damper",
					0.1
				},
				
				{
					"gear_1_stabil_1",
					0.1
				},
				
				{
					"gear_2",
					0
				},
				
				{
					"gear_2_hatch",
					0
				},
				
				{
					"gear_2_damper",
					0.27000001
				},
				
				{
					"gear_2_stabil",
					0.27000001
				},
				
				{
					"gear_3",
					0
				},
				
				{
					"gear_3_hatch",
					0
				},
				
				{
					"gear_3_damper",
					0.25
				},
				
				{
					"gear_3_stabil",
					0.25
				},
				
				{
					"ladder_1",
					0
				},
				
				{
					"ladder",
					0
				},
				
				{
					"wheel_1",
					0
				},
				
				{
					"wheel_2",
					0
				},
				
				{
					"wheel_3",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm1",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm3",
					0
				},
				
				{
					"indicatorrpm4",
					0
				},
				
				{
					"indicatorrpm5",
					0
				},
				
				{
					"indicatorrpm6",
					0
				},
				
				{
					"indicatorrpm7",
					0
				},
				
				{
					"indicatorrpm8",
					0
				},
				
				{
					"indicatorcompass1",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"horizontbank",
					0
				},
				
				{
					"horizontdive",
					0.0099999998
				},
				
				{
					"horizon2bank",
					0
				},
				
				{
					"watchhour",
					0.18000001
				},
				
				{
					"watchminute",
					0.14
				},
				
				{
					"watchsecond",
					0.34999999
				},
				
				{
					"indicatorclimbplus_1",
					0
				},
				
				{
					"indicatorclimbplus_2",
					0
				},
				
				{
					"indicatorclimbplus_3",
					0
				},
				
				{
					"indicatorclimbminus_1",
					0
				},
				
				{
					"indicatorclimbminus_2",
					0
				},
				
				{
					"indicatorclimbminus_3",
					0
				},
				
				{
					"indicatorspeed_1_5",
					0
				},
				
				{
					"indicatorspeed_2_5",
					0
				},
				
				{
					"indicatorspeed_3_5",
					0
				},
				
				{
					"indicatorspeed_4_5",
					0
				},
				
				{
					"indicatorspeed_5_5",
					0
				},
				
				{
					"indicatorfuel",
					1
				},
				
				{
					"monitors_on",
					0
				},
				
				{
					"avionics_damage",
					0
				},
				
				{
					"indicatoraltbaro",
					7.4499998
				},
				
				{
					"zaslehrot",
					884
				},
				
				{
					"positionlights",
					0
				},
				
				{
					"collisionlight_red_blinking",
					0
				},
				
				{
					"collisionlight_white_blinking",
					0
				},
				
				{
					"pilotcamera_h",
					0
				},
				
				{
					"pilotcamera_v",
					0.090000004
				},
				
				{
					"throttle",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.4489999;
			verticalOffsetWorld=0.026000001;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="I_Plane_Fighter_03_CAS_F";
		side=2;
		typicalCargo[]=
		{
			"I_pilot_F"
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		weapons[]=
		{
			"Twin_Cannon_20mm",
			"missiles_SCALPEL",
			"missiles_ASRAAM",
			"GBU12BombLauncher_Plane_Fighter_03_F",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_20mm_shells",
			"2Rnd_LG_scalpel",
			"2Rnd_AAA_missiles",
			"2Rnd_GBU12_LGB_MI10",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class I_Plane_Fighter_03_AA_F: I_Plane_Fighter_03_CAS_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"stick_pilot_bank",
					0
				},
				
				{
					"stick_pilot_dive",
					0
				},
				
				{
					"rotor",
					0
				},
				
				{
					"flapl",
					0
				},
				
				{
					"flapr",
					0
				},
				
				{
					"airbrake1",
					0
				},
				
				{
					"airbrake2",
					0
				},
				
				{
					"aileronl",
					0
				},
				
				{
					"aileronr",
					0
				},
				
				{
					"elevatorl",
					0
				},
				
				{
					"elevatorr",
					0
				},
				
				{
					"rudder",
					0
				},
				
				{
					"rudder_small",
					0
				},
				
				{
					"canopy1",
					0
				},
				
				{
					"canopy2",
					0
				},
				
				{
					"gear_1",
					0
				},
				
				{
					"gear_1_steering",
					0
				},
				
				{
					"gear_1_steering2",
					0
				},
				
				{
					"gear_1_hatch_1",
					0
				},
				
				{
					"gear_1_hatch_2",
					0
				},
				
				{
					"gear_1_damper",
					0.1
				},
				
				{
					"gear_1_stabil_1",
					0.1
				},
				
				{
					"gear_2",
					0
				},
				
				{
					"gear_2_hatch",
					0
				},
				
				{
					"gear_2_damper",
					0.27000001
				},
				
				{
					"gear_2_stabil",
					0.27000001
				},
				
				{
					"gear_3",
					0
				},
				
				{
					"gear_3_hatch",
					0
				},
				
				{
					"gear_3_damper",
					0.25
				},
				
				{
					"gear_3_stabil",
					0.25
				},
				
				{
					"ladder_1",
					0
				},
				
				{
					"ladder",
					0
				},
				
				{
					"wheel_1",
					0
				},
				
				{
					"wheel_2",
					0
				},
				
				{
					"wheel_3",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm1",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm3",
					0
				},
				
				{
					"indicatorrpm4",
					0
				},
				
				{
					"indicatorrpm5",
					0
				},
				
				{
					"indicatorrpm6",
					0
				},
				
				{
					"indicatorrpm7",
					0
				},
				
				{
					"indicatorrpm8",
					0
				},
				
				{
					"indicatorcompass1",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"horizontbank",
					0
				},
				
				{
					"horizontdive",
					0.0099999998
				},
				
				{
					"horizon2bank",
					0
				},
				
				{
					"watchhour",
					0.18000001
				},
				
				{
					"watchminute",
					0.14
				},
				
				{
					"watchsecond",
					0.25
				},
				
				{
					"indicatorclimbplus_1",
					0
				},
				
				{
					"indicatorclimbplus_2",
					0
				},
				
				{
					"indicatorclimbplus_3",
					0
				},
				
				{
					"indicatorclimbminus_1",
					0
				},
				
				{
					"indicatorclimbminus_2",
					0
				},
				
				{
					"indicatorclimbminus_3",
					0
				},
				
				{
					"indicatorspeed_1_5",
					0
				},
				
				{
					"indicatorspeed_2_5",
					0
				},
				
				{
					"indicatorspeed_3_5",
					0
				},
				
				{
					"indicatorspeed_4_5",
					0
				},
				
				{
					"indicatorspeed_5_5",
					0
				},
				
				{
					"indicatorfuel",
					1
				},
				
				{
					"monitors_on",
					0
				},
				
				{
					"avionics_damage",
					0
				},
				
				{
					"indicatoraltbaro",
					7.4499998
				},
				
				{
					"zaslehrot",
					874
				},
				
				{
					"positionlights",
					0
				},
				
				{
					"collisionlight_red_blinking",
					0
				},
				
				{
					"collisionlight_white_blinking",
					0
				},
				
				{
					"pilotcamera_h",
					0
				},
				
				{
					"pilotcamera_v",
					0.090000004
				},
				
				{
					"throttle",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.447;
			verticalOffsetWorld=0.025;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="I_Plane_Fighter_03_AA_F";
		weapons[]=
		{
			"Twin_Cannon_20mm",
			"missiles_Zephyr",
			"missiles_ASRAAM",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_20mm_shells",
			"4Rnd_GAA_missiles",
			"2Rnd_AAA_missiles_MI06",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class I_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"stick_pilot_bank",
					0
				},
				
				{
					"stick_pilot_dive",
					0
				},
				
				{
					"rotor",
					0
				},
				
				{
					"flapl",
					0
				},
				
				{
					"flapr",
					0
				},
				
				{
					"airbrake1",
					0
				},
				
				{
					"airbrake2",
					0
				},
				
				{
					"aileronl",
					0
				},
				
				{
					"aileronr",
					0
				},
				
				{
					"elevatorl",
					0
				},
				
				{
					"elevatorr",
					0
				},
				
				{
					"rudder",
					0
				},
				
				{
					"rudder_small",
					0
				},
				
				{
					"canopy1",
					0
				},
				
				{
					"canopy2",
					0
				},
				
				{
					"gear_1",
					0
				},
				
				{
					"gear_1_steering",
					0
				},
				
				{
					"gear_1_steering2",
					0
				},
				
				{
					"gear_1_hatch_1",
					0
				},
				
				{
					"gear_1_hatch_2",
					0
				},
				
				{
					"gear_1_damper",
					0.1
				},
				
				{
					"gear_1_stabil_1",
					0.1
				},
				
				{
					"gear_2",
					0
				},
				
				{
					"gear_2_hatch",
					0
				},
				
				{
					"gear_2_damper",
					0.27000001
				},
				
				{
					"gear_2_stabil",
					0.27000001
				},
				
				{
					"gear_3",
					0
				},
				
				{
					"gear_3_hatch",
					0
				},
				
				{
					"gear_3_damper",
					0.23999999
				},
				
				{
					"gear_3_stabil",
					0.23999999
				},
				
				{
					"ladder_1",
					0
				},
				
				{
					"ladder",
					0
				},
				
				{
					"wheel_1",
					0
				},
				
				{
					"wheel_2",
					0
				},
				
				{
					"wheel_3",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm1",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"indicatorrpm3",
					0
				},
				
				{
					"indicatorrpm4",
					0
				},
				
				{
					"indicatorrpm5",
					0
				},
				
				{
					"indicatorrpm6",
					0
				},
				
				{
					"indicatorrpm7",
					0
				},
				
				{
					"indicatorrpm8",
					0
				},
				
				{
					"indicatorcompass1",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"horizontbank",
					0
				},
				
				{
					"horizontdive",
					0.0099999998
				},
				
				{
					"horizon2bank",
					0
				},
				
				{
					"watchhour",
					0.18000001
				},
				
				{
					"watchminute",
					0.14
				},
				
				{
					"watchsecond",
					0.52999997
				},
				
				{
					"indicatorclimbplus_1",
					0
				},
				
				{
					"indicatorclimbplus_2",
					0
				},
				
				{
					"indicatorclimbplus_3",
					0
				},
				
				{
					"indicatorclimbminus_1",
					0
				},
				
				{
					"indicatorclimbminus_2",
					0
				},
				
				{
					"indicatorclimbminus_3",
					0
				},
				
				{
					"indicatorspeed_1_5",
					0
				},
				
				{
					"indicatorspeed_2_5",
					0
				},
				
				{
					"indicatorspeed_3_5",
					0
				},
				
				{
					"indicatorspeed_4_5",
					0
				},
				
				{
					"indicatorspeed_5_5",
					0
				},
				
				{
					"indicatorfuel",
					1
				},
				
				{
					"monitors_on",
					0
				},
				
				{
					"avionics_damage",
					0
				},
				
				{
					"indicatoraltbaro",
					7.4499998
				},
				
				{
					"zaslehrot",
					580
				},
				
				{
					"positionlights",
					0
				},
				
				{
					"collisionlight_red_blinking",
					0
				},
				
				{
					"collisionlight_white_blinking",
					0
				},
				
				{
					"pilotcamera_h",
					0
				},
				
				{
					"pilotcamera_v",
					0.090000004
				},
				
				{
					"throttle",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.447;
			verticalOffsetWorld=0.025;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="I_Plane_Fighter_03_dynamicLoadout_F";
		side=2;
		typicalCargo[]=
		{
			"I_Fighter_Pilot_F"
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
	};
	class PlaneWreck;
	class Plane_Fighter_03_wreck_F: PlaneWreck
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=-0.089000002;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Plane_Fighter_03_wreck_F";
		memoryPointTaskMarker="TaskMarker_1_pos";
		typicalCargo[]={};
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		class EventHandlers;  //found empty after stripping
		class Armory
		{
			disabled=1;
		};
	};
};
