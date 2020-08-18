	class RHS_A10: Plane_CAS_01_base_F
	{
		rhs_gearAnim="Gear_1";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,8,0.27000001};
		LESH_WheelOffset[]={0,0};
		side=1;
		icon="\rhsusf\addons\rhsusf_a2port_air\data\mapico\icon_a10_ca.paa";
		driverCanEject=1;
		ejectDamageLimit=1;
		driverCompartments=1;
		camouflage=10;
		audible=6;
		accuracy=0.2;
		supplyRadius=8;
		LockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8";
		radarType=4;
		laserScanner=1;
		irScanRangeMin=100;
		irScanRangeMax=10500;
		irScanToEyeFactor=2;
		irScanGround=1;
		minFireTime=10;
		HeadAimDown=0;
		headGforceLeaningFactor[]={0.0049999999,0.001,0.015};
		allowTabLock=0;
		class EjectionSystem;  //found empty after stripping
		soundLocked[]=
		{
			"a3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
			1.1220185,
			1
		};
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1;
		driverWeaponsInfoType="RHSUSF_RscOptics_A10A_TVM";
		driverLeftLegAnimName="pedal_l";
		driverRightLegAnimName="pedal_r";
		cabinOpening=1;
		precisegetinout=1;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInDriverPrecise="pos driver";
		selectionFireAnim="zasleh";
		memoryPointLRocket="L Raketa";
		memoryPointRRocket="P Raketa";
		memoryPointLDust="levy prach";
		memoryPointRDust="pravy prach";
		memorypointcm[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memorypointcmdir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"RHS_weap_gau8"
		};
		magazines[]=
		{
			"rhs_mag_1150Rnd_30x173_mixed"
		};
		threat[]={1,1,1};
		class Turrets;  //found empty after stripping
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.116667;
					minFov=0.116667;
					maxFov=0.116667;
					directionStabilized=0;
					visionMode[]=
					{
						"Ti"
					};
					thermalMode[]={0};
				};
				class Narrow: Wide
				{
					initFov=0.0583333;
					minFov=0.0583333;
					maxFov=0.0583333;
				};
			};
			minElev=-60;
			maxElev=60;
			initElev=0;
			minTurn=-60;
			maxTurn=60;
			maxXRotSpeed=0.25;
			maxYRotSpeed=0.25;
			pilotOpticsShowCursor=0;
			controllable=1;
		};
		memoryPointDriverOptics="tvm1";
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_A10_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_AIM9_2x",
							"RHS_HP_LGB_500",
							"RHS_HP_ECM"
						};
						maxweight=1200;
						UIposition[]={0.30000001,0.55000001};
						bay=-1;
						attachment="rhs_mag_ANALQ131";
						hitpoint="HitPylon1";
					};
					class pylon2
					{
						hardpoints[]=
						{
							"RHS_HP_LGB_500",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_HYDRA_USAF"
						};
						maxweight=1200;
						UIposition[]={0.30000001,0.5};
						bay=-1;
						attachment="rhs_mag_M151_7_USAF_LAU131";
						hitpoint="HitPylon2";
					};
					class pylon3
					{
						hardpoints[]=
						{
							"RHS_HP_LGB_500",
							"RHS_HP_LGB_1000",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_FFAR_USAF_3x",
							"RHS_HP_HYDRA_USAF",
							"RHS_HP_HYDRA_USAF_3x",
							"RHS_HP_AGM65_3x",
							"RHS_HP_BOMB_500_3x"
						};
						maxweight=1200;
						UIposition[]={0.30000001,0.44999999};
						bay=-1;
						attachment="rhs_mag_agm65d";
						hitpoint="HitPylon3";
					};
					class pylon4
					{
						hardpoints[]=
						{
							"RHS_HP_LGB_500",
							"RHS_HP_LGB_1000",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_HYDRA_USAF",
							"RHS_HP_FFAR_USAF_3x",
							"RHS_HP_HYDRA_USAF_3x",
							"RHS_HP_BOMB_500_3x"
						};
						maxweight=1200;
						UIposition[]={0.34999999,0.375};
						bay=-1;
						attachment="rhs_mag_gbu12";
						hitpoint="HitPylon4";
					};
					class pylon5
					{
						hardpoints[]=
						{
							"RHS_HP_LGB_500",
							"RHS_HP_LGB_1000",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_HYDRA_USAF"
						};
						maxweight=1200;
						UIposition[]={0.34999999,0.32499999};
						bay=-1;
						attachment="rhs_mag_gbu12";
						hitpoint="HitPylon5";
					};
					class pylon6
					{
						hardpoints[]={};
						maxweight=1200;
						UIposition[]={0.34999999,0.27500001};
						bay=-1;
						attachment="";
						hitpoint="HitPylon6";
					};
					class pylon7: pylon5
					{
						UIposition[]={0.34999999,0.22499999};
						mirroredMissilePos=5;
						hitpoint="HitPylon7";
					};
					class pylon8: pylon4
					{
						UIposition[]={0.34999999,0.175};
						mirroredMissilePos=4;
						hitpoint="HitPylon8";
					};
					class pylon9: pylon3
					{
						UIposition[]={0.30000001,0.1};
						mirroredMissilePos=3;
						hitpoint="HitPylon9";
					};
					class pylon10: pylon2
					{
						UIposition[]={0.30000001,0.050000001};
						mirroredMissilePos=2;
						hitpoint="HitPylon10";
					};
					class pylon11: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_AIM9_2x",
							"RHS_HP_LGB_500"
						};
						UIposition[]={0.30000001,0};
						attachment="rhs_mag_aim9m_2";
						mirroredMissilePos=1;
						hitpoint="HitPylon11";
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHSUSF_cm_ANALE40_x2",
							"RHSUSF_cm_ANALE40_x4",
							"RHSUSF_cm_ANALE40_x8",
							"RHSUSF_cm_ANALE40_x16"
						};
						attachment="rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16";
						maxweight=800;
						UIposition[]={0.625,0.27500001};
					};
				};
				class Presets
				{
					class AT
					{
						attachment[]=
						{
							"rhs_mag_ANALQ131",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_agm65d_3",
							"rhs_mag_gbu12",
							"rhs_mag_gbu12",
							"",
							"rhs_mag_gbu12",
							"rhs_mag_gbu12",
							"rhs_mag_agm65d_3",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_aim9m_2",
							"rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16"
						};
						displayname="Anti-Tank";
					};
					class CAS
					{
						attachment[]=
						{
							"rhs_mag_ANALQ131",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_agm65d",
							"rhs_mag_gbu12",
							"rhs_mag_gbu12",
							"",
							"rhs_mag_gbu12",
							"rhs_mag_gbu12",
							"rhs_mag_agm65d",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_aim9m_2",
							"rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16"
						};
						displayname="Close Air Support";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
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
						angleRangeHorizontal=25;
						angleRangeVertical=20;
						groundNoiseDistanceCoef=0.07;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						maxFogSeeThrough=0.94999999;
						minTrackableSpeed=0;
						maxTrackableSpeed=695;
						animDirection="PilotCamera_V";
					};
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
						angleRangeHorizontal=25;
						angleRangeVertical=20;
						maxGroundNoiseDistance=0;
						maxFogSeeThrough=0.30000001;
						animDirection="PilotCamera_V";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar;  //found empty after stripping
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
				};
			};
			class ForcedCam
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="VehicleDriverDisplay";
				x=11;
				y=11;
				class Components
				{
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
				};
			};
			class TransportCountermeasuresComponent;  //found empty after stripping
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_General
				{
					color[]={20,30,30};
					ambient[]={0,0,0};
					intensity=8.0500002;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=1;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=1.45;
						hardLimitEnd=2.45;
					};
					point="light_general";
				};
			};
		};
		class MarkerLights
		{
			class CollisionRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.090000004,0,0};
				intensity=75;
				name="cerveny pozicni";
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.050000001;
				activeLight=0;
				blinking=1;
				dayLight=0;
				useFlare=0;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class CollisionGreen: CollisionRed
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="zeleny pozicni";
				blinkingPattern[]={0.2,0.89999998};
			};
			class PositionWhiteTop: CollisionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
				drawLightSize=0.2;
				blinking=0;
			};
			class CollisionWhiteRear: CollisionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="cerveny pozicni blik";
				blinkingPatternGuarantee=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.039999999;
			};
		};
		damageResistance=0.0048000002;
		epeImpulseDamageCoef=1;
		maxSpeed=834;
		landingAoa="rad 10";
		landingSpeed=220;
		gearUpTime=4.5;
		gearDownTime=3;
		angleOfIndicence=0.052359872;
		draconicForceXCoef=7.1999998;
		draconicForceYCoef=2.5999999;
		draconicForceZCoef=0.15000001;
		draconicTorqueXCoef=1.29;
		draconicTorqueYCoef=3.0999999;
		thrustCoef[]={0.91000003,0.83999997,0.89999998,1.3,1.2,1.2,1.1,1,0.93000001,0.2,0.1,0,0};
		envelope[]={0,0.1,0.61000001,2.2,3.7,4.9000001,6,5.5,5.8000002,4.6999998,3.4000001,1.8,0};
		aileronControlsSensitivityCoef=3;
		elevatorControlsSensitivity=2;
		rudderControlsSensitivityoef=4;
		elevatorCoef[]={0.69999999,0.89999998,0.55000001,0.40000001,0.38999999,0.30000001,0.30000001};
		aileronCoef[]={0.60000002,1,0.97000003,0.89999998,0.85000002,0.87,0.75};
		rudderCoef[]={0.69999999,1,1,0.89999998,0.81999999,0.73000002,0.60000002};
		brakeDistance=85;
		aileronSensitivity=0.75;
		elevatorSensitivity=1.9;
		wheelSteeringSensitivity=1.6;
		flapsFrictionCoef=0.60000002;
		airFriction0[]={100,60,12};
		airFriction1[]={100,60,12};
		airFriction2[]={100,60,12};
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
		attenuationEffectType="HeliAttenuation";
		class Damage
		{
			tex[]=
			{
				"rhsusf\addons\rhsusf_a2port_air\a10\data\rhs_a10_warning_lights_off_ca.paa",
				"rhsusf\addons\rhsusf_a2port_air\a10\data\rhs_a10_warning_lights_ca.paa"
			};
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		armor=60;
		armorStructural=2;
		class Hitpoints
		{
			class HitHull
			{
				armor=999;
				explosionShielding=0;
				passThrough=0.0099999998;
				minimalHit=1;
				radius=0.15000001;
				material=-1;
				name="hit_hull";
				depends="Total";
			};
			class HitAvionics
			{
				armor=0.2;
				explosionShielding=0.60000002;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.079999998;
				material=-1;
				name="hit_avionics";
				depends="0";
			};
			class HitEngine
			{
				armor=0.5;
				explosionShielding=0.25;
				passThrough=0.2;
				minimalHit=0.0099999998;
				radius=0.07;
				material=-1;
				name="hit_engine_l";
				depends="0";
			};
			class HitEngine2
			{
				armor=0.5;
				explosionShielding=0.25;
				passThrough=0.2;
				minimalHit=0.0099999998;
				radius=0.07;
				material=-1;
				name="hit_engine_r";
				depends="0";
			};
			class HitFuel
			{
				armor=1;
				explosionShielding=0.2;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				material=-1;
				name="hit_fuel";
				depends="0";
			};
			class HitFuel_left
			{
				armor=0.5;
				explosionShielding=0.69999999;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_fuel_wing_l";
				depends="0";
			};
			class HitFuel_right
			{
				armor=0.5;
				explosionShielding=0.69999999;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_fuel_wing_r";
				depends="0";
			};
			class HitFuel2
			{
				armor=999;
				explosionShielding=0;
				passThrough=0.1;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="(HitFuel_left+HitFuel_right)*0.5";
			};
			class HitLAileron_link
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_aileron_link_l";
				depends="0";
			};
			class HitRAileron_link
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_aileron_link_r";
				depends="0";
			};
			class HitLAileron
			{
				armor=0.60000002;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				material=-1;
				name="hit_aileron_l";
				depends="HitLAileron_link*0.7";
			};
			class HitRAileron
			{
				armor=0.60000002;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				material=-1;
				name="hit_aileron_r";
				depends="HitRAileron_link*0.7";
			};
			class HitControlRear
			{
				armor=0.60000002;
				explosionShielding=0.1;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.17;
				material=-1;
				name="hit_control_rear";
				depends="0";
			};
			class HitLCElevator
			{
				armor=0.60000002;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_elevator_l";
				depends="HitControlRear";
			};
			class HitRElevator
			{
				armor=0.60000002;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_elevator_r";
				depends="HitControlRear";
			};
			class HitLCRudder
			{
				armor=0.69999999;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.02;
				radius=0.12;
				material=-1;
				name="hit_rudder_l";
				depends="HitControlRear";
			};
			class HitRRudder
			{
				armor=0.69999999;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.02;
				radius=0.12;
				material=-1;
				name="hit_rudder_r";
				depends="HitControlRear";
			};
			class HitGlass1
			{
				armor=0.60000002;
				explosionShielding=0.69999999;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="glass_1";
				depends="0";
			};
			class WarningElevator
			{
				armor=9999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0;
				material=-1;
				name="hit_elevator_r";
				depends="HitLCElevator+HitRElevator";
			};
			class WarningAileron
			{
				armor=9999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0;
				material=-1;
				name="hit_elevator_r";
				depends="HitLAileron+HitRAileron";
			};
			class HitPylon1
			{
				armor=-30;
				material=-1;
				name="hit_pylon_1";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon2
			{
				armor=-30;
				material=-1;
				name="hit_pylon_2";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon3
			{
				armor=-30;
				material=-1;
				name="hit_pylon_3";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon4
			{
				armor=-30;
				material=-1;
				name="hit_pylon_4";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon5
			{
				armor=-30;
				material=-1;
				name="hit_pylon_5";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon6
			{
				armor=-30;
				material=-1;
				name="hit_pylon_6";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon7
			{
				armor=-30;
				material=-1;
				name="hit_pylon_7";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon8
			{
				armor=-30;
				material=-1;
				name="hit_pylon_8";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon9
			{
				armor=-30;
				material=-1;
				name="hit_pylon_9";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon10
			{
				armor=-30;
				material=-1;
				name="hit_pylon_10";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon11
			{
				armor=-30;
				material=-1;
				name="hit_pylon_11";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
		};
		class EventHandlers: EventHandlers
		{
			hit="";
		};
		defaultUserMFDvalues[]={0.15000001,1,0.15000001,1,0};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=1;
				font="rhsusf_digital_font_usa";
				class Bones
				{
					class PlaneOrientation
					{
						pos[]={0.498,0.47999999};
					};
					class WeaponAim
					{
						source="weapon";
						pos0[]={0.498,0.48500001};
						pos10[]={1.256,1.41};
					};
					class WeaponAimAA
					{
						source="weapon";
						pos0[]={0.498,0.085000001};
						pos10[]={1.256,1.11};
					};
					class Target
					{
						source="target";
						pos0[]={0.498,0.53500003};
						pos10[]={1.256,1.5599999};
					};
					class TargetingPodDir
					{
						source="pilotcamera";
						pos0[]={0.498,0.435};
						pos10[]={1.306,1.5599999};
					};
					class TargetingPodTarget: TargetingPodDir
					{
						source="pilotcameratarget";
						pos0[]={0.498,0.53500003};
						pos10[]={1.256,1.5599999};
					};
					class ImpactPoint
					{
						source="ImpactPoint";
						pos0[]={0.5,0.48500001};
						pos10[]={1.258,1.41};
					};
					class NormalizeBombCircle
					{
						limit=0.079999998;
						aspectRatio=1.22032;
					};
					class Velocity
					{
						source="velocity";
						pos0[]={0.498,0.48500001};
						pos10[]={1.256,1.41};
					};
					class Level0
					{
						pos0[]={0.498,0.47999999};
						pos10[]={1.7292,1.8839999};
						angle=0;
					};
					class LevelP05: Level0
					{
						angle=5;
					};
					class LevelM05: Level0
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
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class Limit0109
					{
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						limits[]={0.2,0.97000003,0.80000001,0.97000003};
					};
					class WPPoint
					{
						source="WPPoint";
						pos0[]={0.5,0.48500001};
						pos10[]={1.258,1.41};
					};
					class VerticalSpeed
					{
						source="vspeed";
						sourceScale=1;
						min=-100;
						max=100;
						minPos[]={0,0.15000001};
						maxPos[]={0,-0.15000001};
					};
					class HorizonIndicatorBank
					{
						source="horizonBank";
						sourceScale=1;
						min=-3.1415927;
						max=3.1415927;
						minAngle=0;
						maxAngle=360;
						aspectRatio=1.22032;
					};
					class HorizonIndicatorDive: HorizonIndicatorBank
					{
						source="horizonDive";
						min=-1.5707999;
						max=1.5707999;
						minAngle=90;
						maxAngle=-90;
					};
					class TerrainBone
					{
						source="altitudeAGL";
						sourceScale=1;
						sourceOffset=-1;
						min=0;
						max=500;
						minPos[]={0,-0.19499999};
						maxPos[]={0,0};
					};
					class TerrainBone2: TerrainBone
					{
						sourceOffset=0;
						min=500;
						max=1500;
						minPos[]={0,-0.078000002};
						maxPos[]={0,0};
					};
					class VerticalSpeedBone
					{
						source="vspeed";
						sourceScale=1;
						min=-10;
						max=10;
						minPos[]={0,-0.31999999};
						maxPos[]={0,0.31999999};
					};
					class MissileFlightTimeRot1
					{
						source="MissileFlightTime";
						sourceScale=1;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=1.22032;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=37;
						max=2;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=55.5;
						max=3;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=74;
						max=4;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=92.5;
						max=5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=111;
						max=6;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=129.5;
						max=7;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=148;
						max=8;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=166.5;
						max=9;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=185;
						max=10;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=203.5;
						max=11;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=222;
						max=12;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=240.5;
						max=13;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=259;
						max=14;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=277.5;
						max=15;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=296;
						max=16;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=314.5;
						max=17;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=333;
						max=18;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=351.5;
						max=19;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=370;
						max=20;
					};
					class ILS_H
					{
						pos0[]={0.5,0.48500001};
						pos3[]={0.7274,0.48500001};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.76249999};
					};
					class LarAmmoMax
					{
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
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
					class PlaneOrientationCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						width=4;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.0099999998,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0099999998,0},
								1
							},
							{},
							
							{
								"PlaneOrientation",
								{0,-0.0122032},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0.0122032},
								1
							},
							{}
						};
					};
					class PlaneMovementCrosshair
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						width=4;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.024406301},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.0211359},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0122032},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0122032},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.0211359},
								1
							},
							
							{
								"Velocity",
								{0,0.024406301},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.0211359},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0122032},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0122032},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.0211359},
								1
							},
							
							{
								"Velocity",
								{0,-0.024406301},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.048812699},
								1
							},
							
							{
								"Velocity",
								{0,-0.024406301},
								1
							},
							{}
						};
					};
					class BaroStatic
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.059999999,0.68000001},
							1
						};
						right[]=
						{
							{0.12,0.68000001},
							1
						};
						down[]=
						{
							{0.059999999,0.74000001},
							1
						};
					};
					class WeaponGroup
					{
						condition="mgun + ATmissile + bomb + rocket";
						class SlantRange
						{
							source="ImpactDistance";
							sourceScale=1;
							sourceLength=4;
							refreshRate=0.1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.039999999,0.86000001},
								1
							};
							right[]=
							{
								{0.1,0.86000001},
								1
							};
							down[]=
							{
								{0.039999999,0.92000002},
								1
							};
						};
						class SlantRangeText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.155,0.86000001},
								1
							};
							right[]=
							{
								{0.215,0.86000001},
								1
							};
							down[]=
							{
								{0.155,0.92000002},
								1
							};
						};
						class ValidTarget
						{
							condition="targetDist>=1";
							class ImpactHeight
							{
								source="targetHeight";
								sourceScale=1;
								sourceLength=1;
								refreshRate=0.1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.039999999,0.81},
									1
								};
								right[]=
								{
									{0.1,0.81},
									1
								};
								down[]=
								{
									{0.039999999,0.87},
									1
								};
							};
						};
					};
					class NavigationMode
					{
						condition="1 - (mgun + AAmissile + ATmissile + bomb + rocket + user4)";
						class VerticalSpeedScale
						{
							width=4;
							points[]=
							{
								
								{
									{0.755,0.42199999},
									1
								},
								
								{
									{0.77499998,0.42199999},
									1
								},
								{},
								
								{
									{0.755,0.461},
									1
								},
								
								{
									{0.77499998,0.461},
									1
								},
								{},
								
								{
									{0.755,0.5},
									1
								},
								
								{
									{0.77499998,0.5},
									1
								},
								{},
								
								{
									{0.755,0.69499999},
									1
								},
								
								{
									{0.77499998,0.69499999},
									1
								},
								{},
								
								{
									{0.755,0.65600002},
									1
								},
								
								{
									{0.77499998,0.65600002},
									1
								},
								{},
								
								{
									{0.755,0.61699998},
									1
								},
								
								{
									{0.77499998,0.61699998},
									1
								},
								{},
								
								{
									{0.755,0.57800001},
									1
								},
								
								{
									{0.77499998,0.57800001},
									1
								},
								{},
								
								{
									{0.755,0.53899997},
									1
								},
								
								{
									{0.77499998,0.53899997},
									1
								},
								{},
								
								{
									{0.755,0.5},
									1
								},
								
								{
									{0.755,0.69499999},
									1
								},
								{},
								
								{
									"TerrainBone2",
									1,
									"TerrainBone",
									{0.755,0.69499999},
									1
								},
								
								{
									"TerrainBone2",
									1,
									"TerrainBone",
									{0.73500001,0.69499999},
									1
								},
								{},
								
								{
									"TerrainBone2",
									1,
									"TerrainBone",
									{0.73500001,0.71060002},
									1
								},
								
								{
									"TerrainBone2",
									1,
									"TerrainBone",
									{0.73500001,0.67940003},
									1
								},
								{}
							};
						};
						class AltText0
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.91-0.12",
									0.66799998
								},
								1
							};
							right[]=
							{
								{0.83999997,0.66799998},
								1
							};
							down[]=
							{
								
								{
									"0.91-0.12",
									0.71799999
								},
								1
							};
						};
						class AltText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.91-0.12",
									0.62900001
								},
								1
							};
							right[]=
							{
								{0.83999997,0.62900001},
								1
							};
							down[]=
							{
								
								{
									"0.91-0.12",
									0.67900002
								},
								1
							};
						};
						class AltText2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.91-0.12",
									0.58999997
								},
								1
							};
							right[]=
							{
								{0.83999997,0.58999997},
								1
							};
							down[]=
							{
								
								{
									"0.91-0.12",
									0.63999999
								},
								1
							};
						};
						class AltText3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.91-0.12",
									0.551
								},
								1
							};
							right[]=
							{
								{0.83999997,0.551},
								1
							};
							down[]=
							{
								
								{
									"0.91-0.12",
									0.60100001
								},
								1
							};
						};
						class AltText4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.91-0.12",
									0.51200002
								},
								1
							};
							right[]=
							{
								{0.83999997,0.51200002},
								1
							};
							down[]=
							{
								
								{
									"0.91-0.12",
									0.56199998
								},
								1
							};
						};
						class AltText5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.91-0.12",
									0.47299999
								},
								1
							};
							right[]=
							{
								{0.83999997,0.47299999},
								1
							};
							down[]=
							{
								
								{
									"0.91-0.12",
									0.523
								},
								1
							};
						};
						class AltText10
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.91-0.12",
									0.43399999
								},
								1
							};
							right[]=
							{
								{0.83999997,0.43399999},
								1
							};
							down[]=
							{
								
								{
									"0.91-0.12",
									0.484
								},
								1
							};
						};
						class AltText15
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.91-0.12",
									0.39500001
								},
								1
							};
							right[]=
							{
								{0.83999997,0.39500001},
								1
							};
							down[]=
							{
								
								{
									"0.91-0.12",
									0.44499999
								},
								1
							};
						};
					};
					class MachineGunCrosshairGroup
					{
						condition="mgun";
						class WeaponName
						{
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.039999999,0.75999999},
								1
							};
							right[]=
							{
								{0.1,0.75999999},
								1
							};
							down[]=
							{
								{0.039999999,0.81999999},
								1
							};
						};
						class AmmoCount
						{
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.13,0.75999999},
								1
							};
							right[]=
							{
								{0.19,0.75999999},
								1
							};
							down[]=
							{
								{0.13,0.81999999},
								1
							};
						};
						class AmmoStatic
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.1,0.75999999},
								1
							};
							right[]=
							{
								{0.16,0.75999999},
								1
							};
							down[]=
							{
								{0.1,0.81999999},
								1
							};
						};
						class MachineGunCrosshair
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.109829},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0976253},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.109829},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0976253},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.00244063},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.00244063},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							width=9;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.078100301},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0976253},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
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
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0976253},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.096141398},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0917385},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.084543496},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.074781001},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.062753603},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.033387899},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0169478},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0169478},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.033387899},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.062753603},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.074781001},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.084543496},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0917385},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.096141398},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0976253},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.096141398},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0917385},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.084543496},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.074781001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.062753603},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.033387899},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0169478},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0169478},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.033387899},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.062753603},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.074781001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.084543496},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0917385},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.096141398},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0976253},
									1
								}
							};
						};
						class Distance
						{
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						condition="AAmissile";
						class AAMissileCrosshair
						{
							width=4;
							points[]=
							{
								
								{
									"WeaponAimAA",
									{0,-0.048812699},
									1
								},
								
								{
									"WeaponAimAA",
									{0.0069439998,-0.048070699},
									1
								},
								
								{
									"WeaponAimAA",
									{0.01368,-0.045869298},
									1
								},
								
								{
									"WeaponAimAA",
									{0.02,-0.0422718},
									1
								},
								
								{
									"WeaponAimAA",
									{0.025712,-0.0373905},
									1
								},
								
								{
									"WeaponAimAA",
									{0.03064,-0.031376801},
									1
								},
								
								{
									"WeaponAimAA",
									{0.034639999,-0.024406301},
									1
								},
								
								{
									"WeaponAimAA",
									{0.037588,-0.016693899},
									1
								},
								
								{
									"WeaponAimAA",
									{0.039391998,-0.0084738797},
									1
								},
								
								{
									"WeaponAimAA",
									{0.039999999,0},
									1
								},
								
								{
									"WeaponAimAA",
									{0.039391998,0.0084738797},
									1
								},
								
								{
									"WeaponAimAA",
									{0.037588,0.016693899},
									1
								},
								
								{
									"WeaponAimAA",
									{0.034639999,0.024406301},
									1
								},
								
								{
									"WeaponAimAA",
									{0.03064,0.031376801},
									1
								},
								
								{
									"WeaponAimAA",
									{0.025712,0.0373905},
									1
								},
								
								{
									"WeaponAimAA",
									{0.02,0.0422718},
									1
								},
								
								{
									"WeaponAimAA",
									{0.01368,0.045869298},
									1
								},
								
								{
									"WeaponAimAA",
									{0.0069439998,0.048070699},
									1
								},
								
								{
									"WeaponAimAA",
									{0,0.048812699},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.0069439998,0.048070699},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.01368,0.045869298},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.02,0.0422718},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.025712,0.0373905},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.03064,0.031376801},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.034639999,0.024406301},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.037588,0.016693899},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.039391998,0.0084738797},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.039999999,0},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.039391998,-0.0084738797},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.037588,-0.016693899},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.034639999,-0.024406301},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.03064,-0.031376801},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.025712,-0.0373905},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.02,-0.0422718},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.01368,-0.045869298},
									1
								},
								
								{
									"WeaponAimAA",
									{-0.0069439998,-0.048070699},
									1
								},
								
								{
									"WeaponAimAA",
									{0,-0.048812699},
									1
								}
							};
						};
						class AmmoCount
						{
							source="ammoFormat";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.039999999,0.75999999},
								1
							};
							right[]=
							{
								{0.1,0.75999999},
								1
							};
							down[]=
							{
								{0.039999999,0.81999999},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						class TargetingPodGroup
						{
							condition="1-pilotcameralock-missilelocked";
							class TargetingPodDir
							{
								width=3;
								points[]=
								{
									
									{
										"TargetingPodDir",
										{0.01197,-0.0401356},
										1
									},
									
									{
										"TargetingPodDir",
										{0.0175,-0.0369878},
										1
									},
									
									{
										"TargetingPodDir",
										{0.022498,-0.032716699},
										1
									},
									
									{
										"TargetingPodDir",
										{0.02681,-0.0274547},
										1
									},
									
									{
										"TargetingPodDir",
										{0.030309999,-0.0213555},
										1
									},
									
									{
										"TargetingPodDir",
										{0.0328895,-0.0146072},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{0.0328895,0.0146072},
										1
									},
									
									{
										"TargetingPodDir",
										{0.030309999,0.0213555},
										1
									},
									
									{
										"TargetingPodDir",
										{0.02681,0.0274547},
										1
									},
									
									{
										"TargetingPodDir",
										{0.022498,0.032716699},
										1
									},
									
									{
										"TargetingPodDir",
										{0.0175,0.0369878},
										1
									},
									
									{
										"TargetingPodDir",
										{0.01197,0.0401356},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{-0.01197,0.0401356},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.0175,0.0369878},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.022498,0.032716699},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.02681,0.0274547},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.030309999,0.0213555},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.0328895,0.0146072},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{-0.0328895,-0.0146072},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.030309999,-0.0213555},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.02681,-0.0274547},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.022498,-0.032716699},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.0175,-0.0369878},
										1
									},
									
									{
										"TargetingPodDir",
										{-0.01197,-0.0401356},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{0,-0.00244063},
										1
									},
									
									{
										"TargetingPodDir",
										{0,0.00244063},
										1
									},
									{},
									
									{
										"TargetingPodDir",
										{-0.0020000001,0},
										1
									},
									
									{
										"TargetingPodDir",
										{0.0020000001,0},
										1
									},
									{}
								};
							};
							class Distance
							{
								source="targetDist";
								sourceScale=0.001;
								sourcePrecision=1;
								max=15;
								align="center";
								scale=1;
								pos[]=
								{
									"TargetingPodDir",
									{-0.0020000001,0.045000002},
									1
								};
								right[]=
								{
									"TargetingPodDir",
									{0.045000002,0.045000002},
									1
								};
								down[]=
								{
									"TargetingPodDir",
									{-0.0020000001,0.085000001},
									1
								};
							};
						};
						class TargetingPodGroupOn
						{
							condition="pilotcameralock-missilelocked";
							class TargetingPodDir
							{
								width=3;
								points[]=
								{
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0,-0.042711101},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.0060760002,-0.042061899},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.01197,-0.0401356},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.0175,-0.0369878},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.022498,-0.032716699},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.02681,-0.0274547},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.030309999,-0.0213555},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.0328895,-0.0146072},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.034467999,-0.0074146399},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.035,0},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.034467999,0.0074146399},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.0328895,0.0146072},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.030309999,0.0213555},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.02681,0.0274547},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.022498,0.032716699},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.0175,0.0369878},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.01197,0.0401356},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0.0060760002,0.042061899},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0,0.042711101},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.0060760002,0.042061899},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.01197,0.0401356},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.0175,0.0369878},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.022498,0.032716699},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.02681,0.0274547},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.030309999,0.0213555},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.0328895,0.0146072},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.034467999,0.0074146399},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.035,0},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.034467999,-0.0074146399},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.0328895,-0.0146072},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.030309999,-0.0213555},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.02681,-0.0274547},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.022498,-0.032716699},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.0175,-0.0369878},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.01197,-0.0401356},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{-0.0060760002,-0.042061899},
										1
									},
									
									{
										"TargetingPodTarget",
										1,
										"Limit0109",
										{0,-0.042711101},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										{0,-0.042711101},
										1
									},
									
									{
										"TargetingPodTarget",
										{0,-0.024406301},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										{0,0.042711101},
										1
									},
									
									{
										"TargetingPodTarget",
										{0,0.024406301},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										{-0.035,0},
										1
									},
									
									{
										"TargetingPodTarget",
										{-0.02,0},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										{0.035,0},
										1
									},
									
									{
										"TargetingPodTarget",
										{0.02,0},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										{0,-0.00244063},
										1
									},
									
									{
										"TargetingPodTarget",
										{0,0.00244063},
										1
									},
									{},
									
									{
										"TargetingPodTarget",
										{-0.0020000001,0},
										1
									},
									
									{
										"TargetingPodTarget",
										{0.0020000001,0},
										1
									},
									{}
								};
							};
							class Distance
							{
								source="targetDist";
								sourceScale=0.001;
								sourcePrecision=1;
								max=15;
								align="center";
								scale=1;
								pos[]=
								{
									"TargetingPodTarget",
									{-0.0020000001,0.045000002},
									1
								};
								right[]=
								{
									"TargetingPodTarget",
									{0.045000002,0.045000002},
									1
								};
								down[]=
								{
									"TargetingPodTarget",
									{-0.0020000001,0.085000001},
									1
								};
							};
						};
						class TargetLocked
						{
							condition="missilelocked";
							class TargetingPodDir
							{
								width=3;
								points[]=
								{
									
									{
										"Target",
										1,
										"Limit0109",
										{0,-0.042711101},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.0060760002,-0.042061899},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.01197,-0.0401356},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.0175,-0.0369878},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.022498,-0.032716699},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.02681,-0.0274547},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.030309999,-0.0213555},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.0328895,-0.0146072},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.034467999,-0.0074146399},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.035,0},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.034467999,0.0074146399},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.0328895,0.0146072},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.030309999,0.0213555},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.02681,0.0274547},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.022498,0.032716699},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.0175,0.0369878},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.01197,0.0401356},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0.0060760002,0.042061899},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0,0.042711101},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.0060760002,0.042061899},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.01197,0.0401356},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.0175,0.0369878},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.022498,0.032716699},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.02681,0.0274547},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.030309999,0.0213555},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.0328895,0.0146072},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.034467999,0.0074146399},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.035,0},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.034467999,-0.0074146399},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.0328895,-0.0146072},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.030309999,-0.0213555},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.02681,-0.0274547},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.022498,-0.032716699},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.0175,-0.0369878},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.01197,-0.0401356},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{-0.0060760002,-0.042061899},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										{0,-0.042711101},
										1
									},
									{},
									
									{
										"Target",
										{0,-0.042711101},
										1
									},
									
									{
										"Target",
										{0,-0.024406301},
										1
									},
									{},
									
									{
										"Target",
										{0,0.042711101},
										1
									},
									
									{
										"Target",
										{0,0.024406301},
										1
									},
									{},
									
									{
										"Target",
										{-0.035,0},
										1
									},
									
									{
										"Target",
										{-0.02,0},
										1
									},
									{},
									
									{
										"Target",
										{0.035,0},
										1
									},
									
									{
										"Target",
										{0.02,0},
										1
									},
									{},
									
									{
										"Target",
										{0,-0.00244063},
										1
									},
									
									{
										"Target",
										{0,0.00244063},
										1
									},
									{},
									
									{
										"Target",
										{-0.0020000001,0},
										1
									},
									
									{
										"Target",
										{0.0020000001,0},
										1
									},
									{}
								};
							};
							class Distance
							{
								source="targetDist";
								sourceScale=0.001;
								sourcePrecision=1;
								max=15;
								align="center";
								scale=1;
								pos[]=
								{
									"Target",
									{-0.0020000001,0.045000002},
									1
								};
								right[]=
								{
									"Target",
									{0.045000002,0.045000002},
									1
								};
								down[]=
								{
									"Target",
									{-0.0020000001,0.085000001},
									1
								};
							};
						};
						class AmmoCount
						{
							source="ammoFormat";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.039999999,0.75999999},
								1
							};
							right[]=
							{
								{0.1,0.75999999},
								1
							};
							down[]=
							{
								{0.039999999,0.81999999},
								1
							};
						};
					};
					class RocketCrosshairGroup
					{
						condition="Rocket";
						class MachineGunCrosshair
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.024406301},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.024406301},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.048812699},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.00244063},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.00244063},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
						class AmmoCount
						{
							source="ammoFormat";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.039999999,0.75999999},
								1
							};
							right[]=
							{
								{0.1,0.75999999},
								1
							};
							down[]=
							{
								{0.039999999,0.81999999},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.109829},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0976253},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.00244063},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.00244063},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0976253},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.096141398},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0917385},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.084543496},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.074781001},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.062753603},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.033387899},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0169478},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0169478},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.033387899},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.062753603},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.074781001},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.084543496},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0917385},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.096141398},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0976253},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.096141398},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0917385},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.084543496},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.074781001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.062753603},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.033387899},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0169478},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0169478},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.033387899},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.048812699},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.062753603},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.074781001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.084543496},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0917385},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.096141398},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0976253},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
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
						class Circle
						{
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.078100301},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0976253},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
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
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
						class AmmoCount
						{
							source="ammoFormat";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.039999999,0.75999999},
								1
							};
							right[]=
							{
								{0.1,0.75999999},
								1
							};
							down[]=
							{
								{0.039999999,0.81999999},
								1
							};
						};
					};
					class PitchNumber
					{
						source="horizonDive";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.83999997,0.56},
							1
						};
						right[]=
						{
							{0.91000003,0.56},
							1
						};
						down[]=
						{
							{0.83999997,0.63},
							1
						};
					};
					class BaroNumber
					{
						source="altitudeASL";
						sourceScale=1;
						sourceLength=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.83999997,0.5},
							1
						};
						right[]=
						{
							{0.91000003,0.5},
							1
						};
						down[]=
						{
							{0.83999997,0.56999999},
							1
						};
					};
					class SpeedNumber
					{
						source="speed";
						sourceScale=3.5999999;
						align="right";
						scale=1;
						pos[]=
						{
							{0.1,0.5},
							1
						};
						right[]=
						{
							{0.17,0.5},
							1
						};
						down[]=
						{
							{0.1,0.56999999},
							1
						};
					};
					class LandingMode
					{
						condition="user4 - (mgun + AAmissile + ATmissile + bomb + rocket)";
						class VerticalSpeedScale
						{
							width=4;
							points[]=
							{
								
								{
									{0.73000002,0.30500001},
									1
								},
								
								{
									{0.75999999,0.30500001},
									1
								},
								{},
								
								{
									{0.73500001,0.34400001},
									1
								},
								
								{
									{0.745,0.34400001},
									1
								},
								{},
								
								{
									{0.73500001,0.38299999},
									1
								},
								
								{
									{0.745,0.38299999},
									1
								},
								{},
								
								{
									{0.73500001,0.42199999},
									1
								},
								
								{
									{0.745,0.42199999},
									1
								},
								{},
								
								{
									{0.73500001,0.461},
									1
								},
								
								{
									{0.745,0.461},
									1
								},
								{},
								
								{
									{0.73000002,0.5},
									1
								},
								
								{
									{0.79000002,0.5},
									1
								},
								{},
								
								{
									{0.73000002,0.69499999},
									1
								},
								
								{
									{0.75999999,0.69499999},
									1
								},
								{},
								
								{
									{0.73500001,0.65600002},
									1
								},
								
								{
									{0.745,0.65600002},
									1
								},
								{},
								
								{
									{0.73500001,0.61699998},
									1
								},
								
								{
									{0.745,0.61699998},
									1
								},
								{},
								
								{
									{0.73500001,0.57800001},
									1
								},
								
								{
									{0.745,0.57800001},
									1
								},
								{},
								
								{
									{0.73500001,0.53899997},
									1
								},
								
								{
									{0.745,0.53899997},
									1
								},
								{},
								
								{
									{0.73000002,0.5},
									1
								},
								
								{
									{0.79000002,0.5},
									1
								},
								
								{
									"VerticalSpeedBone",
									{0.79000002,0.5},
									1
								},
								
								{
									"VerticalSpeedBone",
									{0.75999999,0.5},
									1
								},
								{}
							};
						};
						class VerticalSpeedArrow
						{
							points[]=
							{
								
								{
									
									{
										"VerticalSpeedBone",
										{0.76999998,0.49200001},
										1
									},
									
									{
										"VerticalSpeedBone",
										{0.75999999,0.5},
										1
									},
									
									{
										"VerticalSpeedBone",
										{0.76999998,0.50800002},
										1
									}
								}
							};
						};
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
										{-0.23999999,-0.029287601},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,0.029287601},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.021965699},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.021965699},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.029287601},
										1
									},
									
									{
										"ILS_W",
										{0,0.029287601},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.021965699},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.021965699},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,-0.029287601},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0.029287601},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.29287601},
										1
									},
									
									{
										"ILS_H",
										{0,0.29287601},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,-0.29287601},
										1
									},
									
									{
										"ILS_H",
										{0.024,-0.29287601},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,-0.146438},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,-0.146438},
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
										{-0.017999999,0.146438},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,0.146438},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0.29287601},
										1
									},
									
									{
										"ILS_H",
										{0.024,0.29287601},
										1
									}
								};
							};
						};
					};
					class HeadingArrows
					{
						width=3;
						points[]=
						{
							
							{
								{0.486,0.95700002},
								1
							},
							
							{
								{0.5,0.935},
								1
							},
							
							{
								{0.514,0.95700002},
								1
							},
							
							{
								{0.486,0.95700002},
								1
							},
							{},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.011,0},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.011,0.022},
								1
							},
							{},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.011,0},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.011,0.022},
								1
							}
						};
					};
					class HeadingScale
					{
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceLength=2;
						width=4;
						top=0.30000001;
						bottom=0.69999999;
						lineXleft=0.92000002;
						lineYright=0.89999998;
						lineXleftMajor=0.93000001;
						lineYrightMajor=0.89999998;
						majorLineEach=2;
						numberEach=2;
						step=0.5;
						stepSize=0.055555601;
						align="center";
						scale=1;
						pos[]={0.29499999,0.86500001};
						right[]={0.33500001,0.86500001};
						down[]={0.29499999,0.90499997};
					};
					class RadarNumber
					{
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.72500002,0.77499998},
							1
						};
						right[]=
						{
							{0.78500003,0.77499998},
							1
						};
						down[]=
						{
							{0.72500002,0.83499998},
							1
						};
					};
					class RadarText
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.82499999,0.77499998},
							1
						};
						right[]=
						{
							{0.88499999,0.77499998},
							1
						};
						down[]=
						{
							{0.82499999,0.83499998},
							1
						};
					};
					class WPdist
					{
						source="wpdist";
						sourceScale=0.001;
						sourcePrecision=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.79500002,0.81999999},
							1
						};
						right[]=
						{
							{0.85500002,0.81999999},
							1
						};
						down[]=
						{
							{0.79500002,0.88},
							1
						};
					};
					class WPIndex
					{
						source="wpIndex";
						sourceScale=1;
						sourceLength=2;
						align="right";
						scale=1;
						pos[]=
						{
							{0.72500002,0.81999999},
							1
						};
						right[]=
						{
							{0.78500003,0.81999999},
							1
						};
						down[]=
						{
							{0.72500002,0.88},
							1
						};
					};
					class WPstatic
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.76499999,0.81999999},
							1
						};
						right[]=
						{
							{0.82499999,0.81999999},
							1
						};
						down[]=
						{
							{0.76499999,0.88},
							1
						};
					};
					class WPTime
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72500002,0.86500001},
							1
						};
						right[]=
						{
							{0.78500003,0.86500001},
							1
						};
						down[]=
						{
							{0.72500002,0.92500001},
							1
						};
					};
					class WPCurrentTime: WPdist
					{
						source="time";
						align="right";
						pos[]=
						{
							{0.72500002,0.91000003},
							1
						};
						right[]=
						{
							{0.78500003,0.91000003},
							1
						};
						down[]=
						{
							{0.72500002,0.97000003},
							1
						};
					};
					class WaypointGroup
					{
						condition="wpvalid";
						class Tadpol
						{
							width=3;
							points[]={};
						};
					};
					class HorizontalLine
					{
						clipTL[]={0.2,0};
						clipBR[]={0.80000001,0.95999998};
						class Level0
						{
							source="Level0";
							width=3;
							points[]=
							{
								
								{
									"Level0",
									{-0.27000001,0},
									1
								},
								
								{
									"Level0",
									{-0.067500003,0},
									1
								},
								{},
								
								{
									"Level0",
									{0.067500003,0},
									1
								},
								
								{
									"Level0",
									{0.27000001,0},
									1
								}
							};
						};
						class LevelM05: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM05",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM05",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM05",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM05",
									{-0.124,0},
									1
								},
								
								{
									"LevelM05",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM05",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM05",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM05",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM05",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM05",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM05",
									{0.124,0},
									1
								},
								
								{
									"LevelM05",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM05",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM05",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_05
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM05",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM05",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM05",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_05_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM05",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM05",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM05",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP05: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP05",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP05",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP05",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP05",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP05",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP05",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_05
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP05",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP05",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP05",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_05_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP05",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP05",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP05",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM10: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM10",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM10",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM10",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM10",
									{-0.124,0},
									1
								},
								
								{
									"LevelM10",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM10",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM10",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM10",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM10",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM10",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM10",
									{0.124,0},
									1
								},
								
								{
									"LevelM10",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM10",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM10",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_10
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM10",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM10",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM10",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_10_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM10",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM10",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM10",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP10: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP10",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP10",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP10",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP10",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP10",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP10",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_10
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP10",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP10",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP10",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_10_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP10",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP10",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP10",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM15: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM15",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM15",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM15",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM15",
									{-0.124,0},
									1
								},
								
								{
									"LevelM15",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM15",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM15",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM15",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM15",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM15",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM15",
									{0.124,0},
									1
								},
								
								{
									"LevelM15",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM15",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM15",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_15
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM15",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM15",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM15",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_15_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM15",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM15",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM15",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP15: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP15",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP15",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP15",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP15",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP15",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP15",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_15
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP15",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP15",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP15",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_15_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP15",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP15",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP15",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM20: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM20",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM20",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM20",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM20",
									{-0.124,0},
									1
								},
								
								{
									"LevelM20",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM20",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM20",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM20",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM20",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM20",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM20",
									{0.124,0},
									1
								},
								
								{
									"LevelM20",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM20",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM20",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_20
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM20",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM20",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM20",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_20_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM20",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM20",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM20",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP20: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP20",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP20",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP20",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP20",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP20",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP20",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_20
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP20",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP20",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP20",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_20_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP20",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP20",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP20",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM25: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM25",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM25",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM25",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM25",
									{-0.124,0},
									1
								},
								
								{
									"LevelM25",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM25",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM25",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM25",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM25",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM25",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM25",
									{0.124,0},
									1
								},
								
								{
									"LevelM25",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM25",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM25",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_25
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM25",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM25",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM25",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_25_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM25",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM25",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM25",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP25: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP25",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP25",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP25",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP25",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP25",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP25",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_25
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP25",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP25",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP25",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_25_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP25",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP25",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP25",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM30: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM30",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM30",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM30",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM30",
									{-0.124,0},
									1
								},
								
								{
									"LevelM30",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM30",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM30",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM30",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM30",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM30",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM30",
									{0.124,0},
									1
								},
								
								{
									"LevelM30",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM30",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM30",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_30
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM30",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM30",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM30",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_30_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM30",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM30",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM30",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP30: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP30",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP30",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP30",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP30",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP30",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP30",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_30
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP30",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP30",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP30",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_30_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP30",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP30",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP30",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM35: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM35",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM35",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM35",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM35",
									{-0.124,0},
									1
								},
								
								{
									"LevelM35",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM35",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM35",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM35",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM35",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM35",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM35",
									{0.124,0},
									1
								},
								
								{
									"LevelM35",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM35",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM35",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_35
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM35",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM35",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM35",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_35_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM35",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM35",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM35",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP35: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP35",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP35",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP35",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP35",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP35",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP35",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_35
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP35",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP35",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP35",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_35_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP35",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP35",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP35",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM40: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM40",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM40",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM40",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM40",
									{-0.124,0},
									1
								},
								
								{
									"LevelM40",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM40",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM40",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM40",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM40",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM40",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM40",
									{0.124,0},
									1
								},
								
								{
									"LevelM40",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM40",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM40",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_40
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM40",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM40",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM40",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_40_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM40",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM40",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM40",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP40: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP40",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP40",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP40",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP40",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP40",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP40",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_40
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP40",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP40",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP40",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_40_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP40",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP40",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP40",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM45: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM45",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM45",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM45",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM45",
									{-0.124,0},
									1
								},
								
								{
									"LevelM45",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM45",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM45",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM45",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM45",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM45",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM45",
									{0.124,0},
									1
								},
								
								{
									"LevelM45",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM45",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM45",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_45
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM45",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM45",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM45",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_45_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM45",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM45",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM45",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP45: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP45",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP45",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP45",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP45",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP45",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP45",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_45
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP45",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP45",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP45",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_45_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP45",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP45",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP45",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM50: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM50",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM50",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM50",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM50",
									{-0.124,0},
									1
								},
								
								{
									"LevelM50",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM50",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM50",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM50",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM50",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM50",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM50",
									{0.124,0},
									1
								},
								
								{
									"LevelM50",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM50",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM50",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_50
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM50",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM50",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM50",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_50_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM50",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM50",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM50",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP50: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP50",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP50",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP50",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP50",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP50",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP50",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_50
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP50",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP50",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP50",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_50_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP50",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP50",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP50",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM60: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM60",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM60",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM60",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM60",
									{-0.124,0},
									1
								},
								
								{
									"LevelM60",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM60",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM60",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM60",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM60",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM60",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM60",
									{0.124,0},
									1
								},
								
								{
									"LevelM60",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM60",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM60",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_60
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM60",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM60",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM60",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_60_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM60",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM60",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM60",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP60: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP60",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP60",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP60",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP60",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP60",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP60",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_60
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP60",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP60",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP60",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_60_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP60",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP60",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP60",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM70: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM70",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM70",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM70",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM70",
									{-0.124,0},
									1
								},
								
								{
									"LevelM70",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM70",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM70",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM70",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM70",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM70",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM70",
									{0.124,0},
									1
								},
								
								{
									"LevelM70",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM70",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM70",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_70
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM70",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM70",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM70",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_70_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM70",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM70",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM70",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP70: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP70",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP70",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP70",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP70",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP70",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP70",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_70
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP70",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP70",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP70",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_70_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP70",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP70",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP70",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM80: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM80",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM80",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM80",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM80",
									{-0.124,0},
									1
								},
								
								{
									"LevelM80",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM80",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM80",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM80",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM80",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM80",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM80",
									{0.124,0},
									1
								},
								
								{
									"LevelM80",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM80",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM80",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_80
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM80",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM80",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM80",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_80_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM80",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM80",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM80",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP80: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP80",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP80",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP80",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP80",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP80",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP80",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_80
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP80",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP80",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP80",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_80_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP80",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP80",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP80",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM90: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM90",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM90",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM90",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM90",
									{-0.124,0},
									1
								},
								
								{
									"LevelM90",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM90",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM90",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM90",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM90",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM90",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM90",
									{0.124,0},
									1
								},
								
								{
									"LevelM90",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM90",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM90",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_90
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM90",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM90",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM90",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_90_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM90",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM90",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM90",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP90: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP90",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP90",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP90",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP90",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP90",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP90",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_90
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP90",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP90",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP90",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_90_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP90",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP90",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP90",
								{0.20999999,0.043000001},
								1
							};
						};
					};
					class LockingSquare
					{
						condition="bomb + AAmissile";
						class TargetDiamond
						{
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
										{0.02,0.024406301},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{-0.02,0.024406301},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{-0.02,-0.024406301},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{0.02,-0.024406301},
										1
									},
									
									{
										"Target",
										1,
										"Limit0109",
										1,
										{0.02,0.024406301},
										1
									}
								};
							};
						};
						class TargetLocking
						{
							condition="missileLocking";
							blinkingPattern[]={0.30000001,0.30000001};
							blinkingStartsOn=1;
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
										{0,-0.036609501},
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
										{0,0.036609501},
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
										{0,-0.036609501},
										1
									}
								};
							};
						};
						class TargetLocked
						{
							condition="missilelocked";
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
										{0,-0.036609501},
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
										{0,0.036609501},
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
										{0,-0.036609501},
										1
									}
								};
							};
						};
					};
					class RadarBoxes
					{
						pos0[]={0.498,0.48500001};
						pos10[]={1.256,1.41};
						width=4;
						class points;  //found empty after stripping
						class pointsUnknown: points;  //found empty after stripping
						class pointsUnknownEnemy: pointsUnknown;  //found empty after stripping
						class pointsUnknownFriend: pointsUnknown;  //found empty after stripping
						class pointsUnknownCiv: pointsUnknown;  //found empty after stripping
						class pointsCar: points;  //found empty after stripping
						class pointsCarEnemy: pointsCar;  //found empty after stripping
						class pointsCarFriend: pointsCar;  //found empty after stripping
						class pointsCarCiv: pointsCar;  //found empty after stripping
						class pointsCarNeutral: pointsCar;  //found empty after stripping
						class pointsTank: points;  //found empty after stripping
						class pointsTankEnemy: pointsTank;  //found empty after stripping
						class pointsTankFriend: pointsTank;  //found empty after stripping
						class pointsTankCiv: pointsTank;  //found empty after stripping
						class pointsTankNeutral: pointsTank;  //found empty after stripping
						class pointsAirplane;  //found empty after stripping
						class pointsAirplaneEnemy: pointsAirplane;  //found empty after stripping
						class pointsAirplaneFriend: pointsAirplane;  //found empty after stripping
						class pointsHeli;  //found empty after stripping
						class pointsHeliEnemy;  //found empty after stripping
						class pointsHeliFriend;  //found empty after stripping
						class pointsLaser
						{
							class Draw
							{
								width=3;
								points[]=
								{
									
									{
										{0,-0.018304801},
										1
									},
									
									{
										{0.015,8.0012602e-010},
										1
									},
									
									{
										{-1.31134e-009,0.018304801},
										1
									},
									
									{
										{-0.015,-2.18282e-010},
										1
									},
									
									{
										{0,-0.018304801},
										1
									},
									{},
									
									{
										{0.0070710699,-0.0086289402},
										1
									},
									
									{
										{0.0148492,-0.018120799},
										1
									},
									{},
									
									{
										{0.0070710699,0.0086289402},
										1
									},
									
									{
										{0.0148492,0.018120799},
										1
									},
									{},
									
									{
										{-0.0070710699,0.0086289402},
										1
									},
									
									{
										{-0.0148492,0.018120799},
										1
									},
									{},
									
									{
										{-0.0070710699,-0.0086289402},
										1
									},
									
									{
										{-0.0148492,-0.018120799},
										1
									},
									{}
								};
							};
						};
						class pointsNVG: pointsLaser;  //found empty after stripping
						class pointsStatic;  //found empty after stripping
						class pointsStaticEnemy: pointsStatic;  //found empty after stripping
						class pointsStaticFriend: pointsStatic;  //found empty after stripping
						class pointsStaticCiv: pointsStatic;  //found empty after stripping
						class pointsStaticNeutral: pointsStatic;  //found empty after stripping
					};
				};
			};
			class MFD_1
			{
				topLeft="MFD_Ammo_TL";
				topRight="MFD_Ammo_TR";
				bottomLeft="MFD_Ammo_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="rhsusf_digital_font_var";
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=0.5;
					color[]={0,1,0.5};
					class ammoCounter
					{
						source="ammo";
						sourceIndex=1;
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.77999997,0.41999999},
							1
						};
						right[]=
						{
							{1.09,0.41999999},
							1
						};
						down[]=
						{
							{0.77999997,0.97000003},
							1
						};
					};
				};
			};
			class MFD_2
			{
				topLeft="MFD_WP_TL";
				topRight="MFD_WP_TR";
				bottomLeft="MFD_WP_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=0.5;
					color[]={1,1,1};
					class heading
					{
						source="head";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.98000002,0.22},
							1
						};
						right[]=
						{
							{0.98000002,0.22},
							1
						};
						down[]=
						{
							{0.98000002,0.22},
							1
						};
					};
					class HeadingText
					{
						source="heading";
						sourceScale=1;
						sourceLength=3;
						refreshRate=0.1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.92199999,0.185},
							1
						};
						right[]=
						{
							{0.977,0.185},
							1
						};
						down[]=
						{
							{0.92199999,0.245},
							1
						};
					};
					class AltitudeBox
					{
						class Number
						{
							source="wpdist";
							sourceScale=5.3995682e-005;
							sourceLength=3;
							sourceOffset=0;
							align="left";
							scale=3;
							pos[]=
							{
								{0.142,0.19499999},
								1
							};
							right[]=
							{
								{0.18700001,0.19499999},
								1
							};
							down[]=
							{
								{0.142,0.245},
								1
							};
						};
						class ClipScale
						{
							clipTLParallax[]={0.15000001,0.14};
							clipBRParallax[]={0.17,0.28};
							class Scale
							{
								horizontal=0;
								source="wpdist";
								sourceScale=0.00053995679;
								sourceLength=5;
								width=4;
								top=0.40000001;
								bottom=0;
								lineXleft=-1;
								lineYright=-1;
								lineXleftMajor=-1;
								lineYrightMajor=-1;
								majorLineEach=1;
								numberEach=1;
								step=10;
								stepSize=0.055;
								align="left";
								scale=1;
								pos[]={0.16500001,0.40000001};
								right[]={0.205,0.40000001};
								down[]={0.16500001,0.44};
							};
						};
					};
				};
			};
			class MFD_3
			{
				topLeft="MFD_Fuel_TL";
				topRight="MFD_Fuel_TR";
				bottomLeft="MFD_Fuel_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.2;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=0.5;
					color[]={1,1,1};
					class FuelNumber
					{
						source="fuel";
						sourceScale=12000;
						sourceLength=5;
						align="left";
						scale=1;
						pos[]=
						{
							{0.80000001,0.1},
							1
						};
						right[]=
						{
							{1.05,0.1},
							1
						};
						down[]=
						{
							{0.80000001,1.05},
							1
						};
					};
				};
			};
			class MFD_4
			{
				topLeft="MFD_WB_TL";
				topRight="MFD_WB_TR";
				bottomLeft="MFD_WB_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=0.5;
					color[]={1,1,1};
					condition="1";
					class Pylon1
					{
						pos[]=
						{
							{0.029999999,0.82999998},
							1
						};
						pylon=1;
						name="rhs_a10a_box";
					};
					class Pylon2: Pylon1
					{
						pylon=2;
						pos[]=
						{
							{0.15899999,0.82999998},
							1
						};
					};
					class Pylon3: Pylon1
					{
						pylon=3;
						pos[]=
						{
							{0.28799999,0.82999998},
							1
						};
					};
					class Pylon4: Pylon1
					{
						pylon=4;
						pos[]=
						{
							{0.42199999,0.82999998},
							1
						};
					};
					class Pylon5: Pylon1
					{
						pylon=5;
						pos[]=
						{
							{0.347,0.059999999},
							1
						};
					};
					class Pylon6: Pylon1
					{
						pylon=6;
						pos[]=
						{
							{0.486,0.059999999},
							1
						};
					};
					class Pylon7: Pylon1
					{
						pylon=7;
						pos[]=
						{
							{0.625,0.059999999},
							1
						};
					};
					class Pylon8: Pylon1
					{
						pylon=8;
						pos[]=
						{
							{0.546,0.82999998},
							1
						};
					};
					class Pylon9: Pylon1
					{
						pylon=9;
						pos[]=
						{
							{0.67799997,0.82999998},
							1
						};
					};
					class Pylon10: Pylon1
					{
						pylon=10;
						pos[]=
						{
							{0.80900002,0.82999998},
							1
						};
					};
					class Pylon11: Pylon1
					{
						pylon=11;
						pos[]=
						{
							{0.94199997,0.82999998},
							1
						};
					};
					class PylonEmpty1
					{
						condition="pylonEmpty1";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.050000001,0.88499999},
										1
									},
									
									{
										{0.079999998,0.88499999},
										1
									},
									
									{
										{0.079999998,0.96499997},
										1
									},
									
									{
										{0.050000001,0.96499997},
										1
									}
								}
							};
						};
					};
					class PylonEmpty2
					{
						condition="pylonEmpty2";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.17900001,0.88499999},
										1
									},
									
									{
										{0.20900001,0.88499999},
										1
									},
									
									{
										{0.20900001,0.96499997},
										1
									},
									
									{
										{0.17900001,0.96499997},
										1
									}
								}
							};
						};
					};
					class PylonEmpty3
					{
						condition="pylonEmpty3";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.308,0.88499999},
										1
									},
									
									{
										{0.338,0.88499999},
										1
									},
									
									{
										{0.338,0.96499997},
										1
									},
									
									{
										{0.308,0.96499997},
										1
									}
								}
							};
						};
					};
					class PylonEmpty4
					{
						condition="pylonEmpty4";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.442,0.88499999},
										1
									},
									
									{
										{0.472,0.88499999},
										1
									},
									
									{
										{0.472,0.96499997},
										1
									},
									
									{
										{0.442,0.96499997},
										1
									}
								}
							};
						};
					};
					class PylonEmpty5
					{
						condition="pylonEmpty5";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.36700001,0.115},
										1
									},
									
									{
										{0.39700001,0.115},
										1
									},
									
									{
										{0.39700001,0.19499999},
										1
									},
									
									{
										{0.36700001,0.19499999},
										1
									}
								}
							};
						};
					};
					class PylonEmpty6
					{
						condition="pylonEmpty6";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.50599998,0.115},
										1
									},
									
									{
										{0.53600001,0.115},
										1
									},
									
									{
										{0.53600001,0.19499999},
										1
									},
									
									{
										{0.50599998,0.19499999},
										1
									}
								}
							};
						};
					};
					class PylonEmpty7
					{
						condition="pylonEmpty7";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.64499998,0.115},
										1
									},
									
									{
										{0.67500001,0.115},
										1
									},
									
									{
										{0.67500001,0.19499999},
										1
									},
									
									{
										{0.64499998,0.19499999},
										1
									}
								}
							};
						};
					};
					class PylonEmpty8
					{
						condition="pylonEmpty8";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.56599998,0.88499999},
										1
									},
									
									{
										{0.59600002,0.88499999},
										1
									},
									
									{
										{0.59600002,0.96499997},
										1
									},
									
									{
										{0.56599998,0.96499997},
										1
									}
								}
							};
						};
					};
					class PylonEmpty9
					{
						condition="pylonEmpty9";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.69800001,0.88499999},
										1
									},
									
									{
										{0.72799999,0.88499999},
										1
									},
									
									{
										{0.72799999,0.96499997},
										1
									},
									
									{
										{0.69800001,0.96499997},
										1
									}
								}
							};
						};
					};
					class PylonEmpty10
					{
						condition="pylonEmpty10";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.829,0.88499999},
										1
									},
									
									{
										{0.85900003,0.88499999},
										1
									},
									
									{
										{0.85900003,0.96499997},
										1
									},
									
									{
										{0.829,0.96499997},
										1
									}
								}
							};
						};
					};
					class PylonEmpty11
					{
						condition="pylonEmpty11";
						color[]={0.87,0,0};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{0.96200001,0.88499999},
										1
									},
									
									{
										{0.99199998,0.88499999},
										1
									},
									
									{
										{0.99199998,0.96499997},
										1
									},
									
									{
										{0.96200001,0.96499997},
										1
									}
								}
							};
						};
					};
				};
			};
			class MFD_5
			{
				topLeft="MFD_WN_TL";
				topRight="MFD_WN_TR";
				bottomLeft="MFD_WN_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=0.5;
					color[]={1,1,1};
					condition="1";
					class Pylon1
					{
						pos[]=
						{
							{0.07,0.88},
							1
						};
						pylon=1;
						name="rhs_a10a_ammoname";
					};
					class Pylon2: Pylon1
					{
						pylon=2;
						pos[]=
						{
							{0.189,0.88},
							1
						};
					};
					class Pylon3: Pylon1
					{
						pylon=3;
						pos[]=
						{
							{0.308,0.88},
							1
						};
					};
					class Pylon4: Pylon1
					{
						pylon=4;
						pos[]=
						{
							{0.43200001,0.88},
							1
						};
					};
					class Pylon5: Pylon1
					{
						pylon=5;
						pos[]=
						{
							{0.377,0.050000001},
							1
						};
					};
					class Pylon6: Pylon1
					{
						pylon=6;
						pos[]=
						{
							{0.486,0.050000001},
							1
						};
					};
					class Pylon7: Pylon1
					{
						pylon=7;
						pos[]=
						{
							{0.625,0.050000001},
							1
						};
					};
					class Pylon8: Pylon1
					{
						pylon=8;
						pos[]=
						{
							{0.55599999,0.88},
							1
						};
					};
					class Pylon9: Pylon1
					{
						pylon=9;
						pos[]=
						{
							{0.66799998,0.88},
							1
						};
					};
					class Pylon10: Pylon1
					{
						pylon=10;
						pos[]=
						{
							{0.79900002,0.88},
							1
						};
					};
					class Pylon11: Pylon1
					{
						pylon=11;
						pos[]=
						{
							{0.912,0.88},
							1
						};
					};
				};
			};
			class MFD_6
			{
				topLeft="MFD_ALT_TL";
				topRight="MFD_ALT_TR";
				bottomLeft="MFD_ALT_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=0.69999999;
					color[]={0,0,0};
					condition="altitudeASL>=1000";
					class AltGrp
					{
						color[]={1,1,1};
						class AltText
						{
							source="altitudeASL";
							sourceScale=0.001;
							sourceLength=1;
							sourceOffset=-0.5;
							align="left";
							scale=1;
							pos[]=
							{
								{0.34299999,0.42199999},
								1
							};
							right[]=
							{
								{0.47799999,0.42199999},
								1
							};
							down[]=
							{
								{0.34299999,0.57700002},
								1
							};
						};
					};
				};
			};
			class MFD_RWR
			{
				topLeft="MFD_RWR_TL";
				topRight="MFD_RWR_TR";
				bottomLeft="MFD_RWR_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=0.30000001;
					color[]={0.69999999,0.69999999,0.69999999};
					class RWR
					{
						pos[]=
						{
							{0.07,0.07},
							1
						};
						down[]=
						{
							{0.93000001,0.93000001},
							1
						};
						showTargetTypes="2 + 8 + 64 + 128 + 256";
						width=4;
						sensorLineType=3;
						sensorLineWidth=0;
						range=16000;
						class MissileThreat
						{
							class TargetLines
							{
								width=4;
								points[]=
								{
									
									{
										{0,-0.0610158},
										1
									},
									
									{
										{0.00868,-0.0600884},
										1
									},
									
									{
										{0.017100001,-0.057336599},
										1
									},
									
									{
										{0.025,-0.0528397},
										1
									},
									
									{
										{0.032140002,-0.046738099},
										1
									},
									
									{
										{0.0383,-0.039221},
										1
									},
									
									{
										{0.043299999,-0.0305079},
										1
									},
									
									{
										{0.046985,-0.0208674},
										1
									},
									
									{
										{0.049240001,-0.0105923},
										1
									},
									
									{
										{0.050000001,0},
										1
									},
									
									{
										{0.049240001,0.0105923},
										1
									},
									
									{
										{0.046985,0.0208674},
										1
									},
									
									{
										{0.043299999,0.0305079},
										1
									},
									
									{
										{0.0383,0.039221},
										1
									},
									
									{
										{0.032140002,0.046738099},
										1
									},
									
									{
										{0.025,0.0528397},
										1
									},
									
									{
										{0.017100001,0.057336599},
										1
									},
									
									{
										{0.00868,0.0600884},
										1
									},
									
									{
										{0,0.0610158},
										1
									},
									
									{
										{-0.00868,0.0600884},
										1
									},
									
									{
										{-0.017100001,0.057336599},
										1
									},
									
									{
										{-0.025,0.0528397},
										1
									},
									
									{
										{-0.032140002,0.046738099},
										1
									},
									
									{
										{-0.0383,0.039221},
										1
									},
									
									{
										{-0.043299999,0.0305079},
										1
									},
									
									{
										{-0.046985,0.0208674},
										1
									},
									
									{
										{-0.049240001,0.0105923},
										1
									},
									
									{
										{-0.050000001,0},
										1
									},
									
									{
										{-0.049240001,-0.0105923},
										1
									},
									
									{
										{-0.046985,-0.0208674},
										1
									},
									
									{
										{-0.043299999,-0.0305079},
										1
									},
									
									{
										{-0.0383,-0.039221},
										1
									},
									
									{
										{-0.032140002,-0.046738099},
										1
									},
									
									{
										{-0.025,-0.0528397},
										1
									},
									
									{
										{-0.017100001,-0.057336599},
										1
									},
									
									{
										{-0.00868,-0.0600884},
										1
									},
									
									{
										{0,-0.0610158},
										1
									}
								};
							};
							class TextM
							{
								source="static";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.039999999},
									1
								};
								right[]=
								{
									{0.079999998,-0.039999999},
									1
								};
								down[]=
								{
									{0,0.039999999},
									1
								};
							};
						};
						class lockingThreat
						{
							class TargetLines
							{
								points[]=
								{
									
									{
										{0,-0.0610158},
										1
									},
									
									{
										{0.00868,-0.0600884},
										1
									},
									
									{
										{0.017100001,-0.057336599},
										1
									},
									
									{
										{0.025,-0.0528397},
										1
									},
									
									{
										{0.032140002,-0.046738099},
										1
									},
									
									{
										{0.0383,-0.039221},
										1
									},
									
									{
										{0.043299999,-0.0305079},
										1
									},
									
									{
										{0.046985,-0.0208674},
										1
									},
									
									{
										{0.049240001,-0.0105923},
										1
									},
									
									{
										{0.050000001,0},
										1
									},
									
									{
										{0.049240001,0.0105923},
										1
									},
									
									{
										{0.046985,0.0208674},
										1
									},
									
									{
										{0.043299999,0.0305079},
										1
									},
									
									{
										{0.0383,0.039221},
										1
									},
									
									{
										{0.032140002,0.046738099},
										1
									},
									
									{
										{0.025,0.0528397},
										1
									},
									
									{
										{0.017100001,0.057336599},
										1
									},
									
									{
										{0.00868,0.0600884},
										1
									},
									
									{
										{0,0.0610158},
										1
									},
									
									{
										{-0.00868,0.0600884},
										1
									},
									
									{
										{-0.017100001,0.057336599},
										1
									},
									
									{
										{-0.025,0.0528397},
										1
									},
									
									{
										{-0.032140002,0.046738099},
										1
									},
									
									{
										{-0.0383,0.039221},
										1
									},
									
									{
										{-0.043299999,0.0305079},
										1
									},
									
									{
										{-0.046985,0.0208674},
										1
									},
									
									{
										{-0.049240001,0.0105923},
										1
									},
									
									{
										{-0.050000001,0},
										1
									},
									
									{
										{-0.049240001,-0.0105923},
										1
									},
									
									{
										{-0.046985,-0.0208674},
										1
									},
									
									{
										{-0.043299999,-0.0305079},
										1
									},
									
									{
										{-0.0383,-0.039221},
										1
									},
									
									{
										{-0.032140002,-0.046738099},
										1
									},
									
									{
										{-0.025,-0.0528397},
										1
									},
									
									{
										{-0.017100001,-0.057336599},
										1
									},
									
									{
										{-0.00868,-0.0600884},
										1
									},
									
									{
										{0,-0.0610158},
										1
									},
									
									{
										{0.059999999,0},
										1
									},
									
									{
										{0,0.0610158},
										1
									},
									
									{
										{-0.059999999,0},
										1
									},
									
									{
										{0,-0.0610158},
										1
									},
									
									{
										{0.059999999,0},
										1
									}
								};
							};
							class TextL
							{
								source="static";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.039999999},
									1
								};
								right[]=
								{
									{0.079999998,-0.039999999},
									1
								};
								down[]=
								{
									{0,0.039999999},
									1
								};
							};
						};
						class rwr
						{
							class TargetLines
							{
								points[]=
								{
									
									{
										{0.059999999,0},
										1
									},
									
									{
										{0,0.0610158},
										1
									},
									
									{
										{-0.059999999,0},
										1
									},
									
									{
										{0,-0.0610158},
										1
									},
									
									{
										{0.059999999,0},
										1
									}
								};
							};
							class TextA
							{
								source="static";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.039999999},
									1
								};
								right[]=
								{
									{0.079999998,-0.039999999},
									1
								};
								down[]=
								{
									{0,0.039999999},
									1
								};
							};
						};
					};
				};
			};
		};
		maxOmega=2000;
		accelAidForceCoef=1;
		accelAidForceYOffset=-1;
		accelAidForceSpd=1;
		turnCoef=0.050000001;
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class Wheel_1
			{
				steering=1;
				side="left";
				width=0.16;
				mass=150;
				MOI=3;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				maxCompression=0.15000001;
				maxDroop=0.050000001;
				sprungMass=11400;
				springStrength=1200000;
				springDamperRate=128000;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=3;
				latStiffY=21;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1.4},
					{1,0.60000002}
				};
			};
			class Wheel_1_fake: Wheel_1;  //found empty after stripping
			class Wheel_2: Wheel_1
			{
				steering=0;
				width=0.28;
				maxCompression=0.25;
				maxDroop=0.1;
				sprungMass=3200;
				springStrength=1580000;
				springDamperRate=512000;
			};
			class Wheel_3: Wheel_2
			{
				steering=0;
				side="right";
			};
		};
	};