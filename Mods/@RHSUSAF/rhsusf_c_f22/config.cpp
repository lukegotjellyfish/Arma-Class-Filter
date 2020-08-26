class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_F22_Pilot="RHS_F22_Pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class RHS_F22_Pilot: Crew
		{
			file="rhsusf\addons\rhsusf_f22\data\anim\F22_Pilot.rtm";
			interpolateTo[]=
			{
				"RHS_AH1Z_Dead",
				1
			};
			leaning="crewShake_half";
		};
	};
};
class CfgPatches
{
	class rhsusf_c_f22
	{
		units[]=
		{
			"rhsusf_f22"
		};
		weapons[]={};
		requiredVersion=1.5;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_airweapons",
			"rhsusf_c_heavyweapons"
		};
		name="F-22 Fighter";
		author="$STR_RHSUSF_AUTHOR_FULL";
		url="http://www.rhsmods.org/";
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
	class Plane_Base_F;
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class EventHandlers;
		class Components;
	};
	class rhsusf_f22: Plane_Fighter_03_base_F
	{
		rhs_gearAnim="fold_gear_F";
		scope=2;
		dlc="RHS_USAF";
		author="$STR_RHSUSF_AUTHOR_FULL";
		category="Air";
		side=1;
		crew="rhsusf_airforce_jetpilot";
		typicalCargo[]=
		{
			"rhsusf_airforce_jetpilot"
		};
		unitInfoType="RHSUSF_RscUnitInfoJet_F22";
		vehicleClass="rhs_vehclass_aircraft";
		faction="rhs_faction_usaf";
		class pilotCamera;  //found empty after stripping
		class EjectionSystem;  //found empty after stripping
		model="\rhsusf\addons\rhsusf_f22\rhsusf_f22";
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_f22.paa";
		displayName="F-22A";
		driverAction="RHS_F22_Pilot";
		driverLeftHandAnimName="stick_thrust";
		driverLeftLegAnimName="pedal_L";
		driverRightLegAnimName="pedal_R";
		driverCanEject=1;
		driverCompartments=1;
		htMin=6;
		htMax=18;
		afMax=10;
		mfMax=30;
		mFact=10.02;
		tBody=150;
		irTarget=1;
		irTargetSize=0.5;
		visualTarget=1;
		visualTargetSize=1;
		radarTarget=1;
		radarTargetSize=0.30000001;
		radarType=4;
		LockDetectionSystem=8;
		incomingMissileDetectionSystem=16;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		laserScanner=1;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsusf\addons\rhsusf_f22\data\loadouts\RHS_F22_EDEN_CA.paa";
				class pylons
				{
					class pylonBayLeft1
					{
						hardpoints[]=
						{
							"RHS_HP_AIM9_int"
						};
						priority=2;
						attachment="rhs_mag_Sidewinder_int";
						maxweight=1200;
						UIposition[]={0.36000001,0.40000001};
						bay=1;
					};
					class pylonBayCenter1
					{
						hardpoints[]=
						{
							"RHS_HP_aim120_int"
						};
						priority=1;
						attachment="rhs_mag_aim120d_int";
						maxweight=1200;
						UIposition[]={0.36000001,0.34999999};
						bay=2;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						hardpoints[]=
						{
							"RHS_HP_aim120_int",
							"RHS_HP_F22_lBay",
							"RHS_HP_JDAM_500",
							"RHS_HP_JDAM_1000"
						};
						attachment="rhs_mag_aim120d_2_F22_l";
						UIposition[]={0.36000001,0.30000001};
					};
					class pylonBayCenter3: pylonBayCenter1
					{
						hardpoints[]=
						{
							"RHS_HP_aim120_int",
							"RHS_HP_F22_rBay",
							"RHS_HP_JDAM_500",
							"RHS_HP_JDAM_1000"
						};
						attachment="rhs_mag_aim120d_2_F22_r";
						UIposition[]={0.36000001,0.25};
						bay=3;
					};
					class pylonBayCenter4: pylonBayCenter3
					{
						hardpoints[]=
						{
							"RHS_HP_aim120_int"
						};
						attachment="rhs_mag_aim120d_int";
						UIposition[]={0.36000001,0.2};
						mirroredMissilePos=2;
					};
					class pylonBayRight1: pylonBayLeft1
					{
						UIposition[]={0.36000001,0.15000001};
						mirroredMissilePos=1;
						bay=4;
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHSUSF_cm_ANALE52",
							"RHSUSF_cm_ANALE52_x2",
							"RHSUSF_cm_ANALE52_x4",
							"RHSUSF_cm_ANALE52_x6"
						};
						priority=1;
						attachment="rhsusf_ANALE52_CMFlare_Chaff_Magazine_x4";
						maxweight=800;
						UIposition[]={0.625,0.27500001};
					};
				};
				class Bays
				{
					class BayLeft1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=1;
					};
					class BayCenter1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=4.5;
					};
					class BayCenter2: BayCenter1;  //found empty after stripping
					class BayRight1: BayLeft1;  //found empty after stripping
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange=18000;
							maxRange=18000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=18000;
							maxRange=18000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=35000;
							maxRange=35000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						groundNoiseDistanceCoef=0.00050000002;
						maxGroundNoiseDistance=50;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						typeRecognitionDistance=20000;
						maxFogSeeThrough=1;
						maxTrackableSpeed=830;
					};
					class ActiveRadarSensorComponent_Wide: ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						groundNoiseDistanceCoef=0.00050000002;
						maxGroundNoiseDistance=50;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						angleRangeHorizontal=110;
						angleRangeVertical=110;
						typeRecognitionDistance=10000;
						maxFogSeeThrough=1;
						maxTrackableSpeed=830;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink;  //found empty after stripping
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
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						resource="RscCustomInfoSensors";
						range[]={16000,35000,3000,8000};
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
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						resource="RscCustomInfoSensors";
						range[]={16000,35000,3000,8000};
					};
				};
			};
		};
		icon="\rhsusf\addons\rhsusf_f22\data\f22_icon.paa";
		picture="\rhsusf\addons\rhsusf_f22\data\f22_pic.paa";
		weapons[]=
		{
			"rhs_weap_MASTERSAFE_Holdster15",
			"rhsusf_M61A2"
		};
		magazines[]=
		{
			"rhsusf_20mm_M61A2"
		};
		insideSoundCoef=0.2;
		hiddenSelections[]=
		{
			"tex1",
			"tex2",
			"tex3",
			"tex4",
			"tex5",
			"tex6",
			"tex7",
			"tex8",
			"tex9"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsusf\addons\rhsusf_f22\data\f22_b1.paa",
			"\rhsusf\addons\rhsusf_f22\data\f22_wing_spads.paa",
			"\rhsusf\addons\rhsusf_f22\data\1stfw.paa",
			"\rhsusf\addons\rhsusf_f22\data\94fs.paa",
			"\rhsusf\addons\rhsusf_f22\data\acc.paa",
			"\rhsusf\addons\rhsusf_f22\data\af04-066.paa",
			"\rhsusf\addons\rhsusf_f22\data\ff.paa",
			"\rhsusf\addons\rhsusf_f22\data\marking1.paa",
			"\rhsusf\addons\rhsusf_f22\data\star1.paa"
		};
		camouflage=18;
		audible=6;
		accuracy=0.2;
		gunAimDown=0.045000002;
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		gunBeg[]=
		{
			"muzzle_1"
		};
		gunEnd[]=
		{
			"chamber_1"
		};
		camShakeCoef=0.60000002;
		headGforceLeaningFactor[]={0.0049999999,0.001,0.015};
		extCameraPosition[]={0,3.8,-23};
		minFireTime=30;
		cost=80000000;
		type=2;
		threat[]={1,1,0.69999999};
		driveOnComponent[]={};
		armor=80;
		armorStructural=3;
		ejectDamageLimit=1;
		epeImpulseDamageCoef=1;
		damageResistance=0.00336;
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
				visual="";
				depends="Total";
			};
			class HitAvionics
			{
				armor=0.5;
				explosionShielding=0.60000002;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.079999998;
				material=-1;
				name="hit_avionics";
				visual="vis_avionics";
				depends="0";
			};
			class HitEngine
			{
				armor=0.69999999;
				explosionShielding=0.25;
				passThrough=0.0099999998;
				minimalHit=0.0099999998;
				radius=0.07;
				material=-1;
				name="hit_engine_l";
				visual="vis_engine_l";
				depends="0";
			};
			class HitEngine2
			{
				armor=0.69999999;
				explosionShielding=0.25;
				passThrough=0.0099999998;
				minimalHit=0.0099999998;
				radius=0.07;
				material=-1;
				name="hit_engine_r";
				visual="vis_engine_r";
				depends="0";
			};
			class HitFuel
			{
				armor=0.75;
				explosionShielding=0.2;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.1;
				material=-1;
				name="hit_fuel";
				visual="vis_fuel";
				depends="0";
			};
			class HitLAileron
			{
				armor=0.5;
				explosionShielding=0.60000002;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.13;
				material=-1;
				name="hit_aileron_l";
				visual="vis_wing_l";
				depends="0";
			};
			class HitRAileron
			{
				armor=0.5;
				explosionShielding=0.60000002;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.13;
				material=-1;
				name="hit_aileron_r";
				visual="vis_wing_r";
				depends="0";
			};
			class HitControlRear
			{
				armor=0.5;
				explosionShielding=0.1;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.17;
				material=-1;
				name="hit_control_rear";
				visual="";
				depends="0";
			};
			class HitLCElevator
			{
				armor=0.5;
				explosionShielding=0.5;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_elevator_l";
				visual="vis_elevator_l";
				depends="HitControlRear";
			};
			class HitRElevator
			{
				armor=0.5;
				explosionShielding=0.5;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_elevator_r";
				visual="vis_elevator_r";
				depends="HitControlRear";
			};
			class HitLCRudder
			{
				armor=0.5;
				explosionShielding=0.5;
				passThrough=0.0099999998;
				minimalHit=0.02;
				radius=0.12;
				material=-1;
				name="hit_rudder_l";
				visual="vis_rudder_l";
				depends="HitControlRear";
			};
			class HitRRudder
			{
				armor=0.5;
				explosionShielding=0.5;
				passThrough=0.0099999998;
				minimalHit=0.02;
				radius=0.12;
				material=-1;
				name="hit_rudder_r";
				visual="vis_rudder_r";
				depends="HitControlRear";
			};
			class HitGlass1
			{
				armor=0.40000001;
				explosionShielding=0.5;
				passThrough=0.0099999998;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="glass_1";
				visual="glass_1";
				depends="0";
			};
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_start_int",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_start_ext",
			1.75,
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_shut_int",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_01\B_PLANE_FIGHTER_01_engine_shut_ext",
			1.75,
			1,
			300
		};
		soundLocked[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",
			1,
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_up",
			2.25,
			1,
			250
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_down",
			2.25,
			1,
			250
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Up",
			1.5,
			1,
			150
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Down",
			1.5,
			1,
			150
		};
		soundSetSonicBoom[]=
		{
			"Plane_Fighter_SonicBoom_SoundSet"
		};
		class Sounds
		{
			soundSets[]=
			{
				"Plane_Fighter_01_EngineLowExt_SoundSet",
				"Plane_Fighter_01_EngineHighExt_SoundSet",
				"Plane_Fighter_01_ForsageExt_SoundSet",
				"Plane_Fighter_01_WindNoiseExt_SoundSet",
				"Plane_Fighter_01_EngineExt_Dist_Front_SoundSet",
				"Plane_Fighter_01_EngineExt_Middle_SoundSet",
				"Plane_Fighter_01_EngineExt_Dist_Rear_SoundSet",
				"Plane_Fighter_01_EngineLowInt_SoundSet",
				"Plane_Fighter_01_EngineHighInt_SoundSet",
				"Plane_Fighter_01_ForsageInt_SoundSet",
				"Plane_Fighter_01_WindNoiseInt_SoundSet",
				"Plane_Fighter_01_VelocityInt_SoundSet"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="rightengine";
				direction="rightengine_dir";
				effect="ExhaustsEffectPlaneHP";
				engineIndex=1;
			};
			class Exhaust2
			{
				position="leftengine";
				direction="leftengine_dir";
				effect="ExhaustsEffectPlaneHP";
				engineIndex=0;
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="wing_vortex_l";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="wing_vortex_r";
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
			class BodyLeft2
			{
				effectName="BodyVortices";
				position="body_vapour_L_E";
			};
			class BodyRight2
			{
				effectName="BodyVortices";
				position="body_vapour_R_E";
			};
		};
		class AnimationSources
		{
			class afterburner_source
			{
				source="user";
				initPhase=0;
				animPeriod=1.5;
			};
			class eject
			{
				source="door";
				animPeriod=0.60000002;
				initPhase=0;
			};
			class eject_hide
			{
				source="user";
				animPeriod=0.60000002;
				initPhase=0;
			};
			class CollisionLights_source
			{
				source="MarkerLight";
				markerLight="PositionLeft";
			};
			class CollisionBlinking_source: CollisionLights_source
			{
				markerLight="CollisionLeft";
			};
			class Wheel_1_source
			{
				source="wheel";
				wheel="Wheel_1";
			};
			class Wheel_2_source
			{
				source="wheel";
				wheel="Wheel_2";
			};
			class Wheel_3_source
			{
				source="wheel";
				wheel="Wheel_3";
			};
		};
		class MarkerLights
		{
			class PositionLeft
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=750;
				name="PositionLight_Left_1_pos";
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
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
			class PositionRight: PositionLeft
			{
				name="PositionLight_Right_1_pos";
			};
			class CollisionLeft: PositionLeft
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				intensity=2750;
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.18000001;
			};
			class CollisionRight: CollisionLeft
			{
				name="PositionLight_Right_1_pos";
			};
		};
		class UserActions
		{
			class SAFEMODE
			{
				displayName="<t color='#00FF7F'>MASTERSAFE</t>";
				condition="(call rhsusf_fnc_findPlayer) in this";
				statement="(call rhsusf_fnc_findPlayer) action ['SwitchWeapon', this, (call rhsusf_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
				position="";
				radius=10;
				priority=10.5;
				onlyforplayer=1;
				showWindow=0;
				shortcut="user13";
				hideOnUse=1;
			};
		};
		class Eventhandlers: EventHandlers
		{
			hit="";
			class RHSUSF_EventHandlers
			{
				init="_this execVM '\rhsusf\addons\rhsusf_c_f22\scripts\rhs_f22_mfdHandler.sqf'";
				hit="_this call RHS_fnc_AI_eject";
				getout="[_this select 0, _this select 2,'rhs_f22_canopy'] call rhs_fnc_ACESII_seatEjection";
				engine="[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
			};
		};
		defaultUserMFDvalues[]={0.082000002,0.40799999,0.039000001,0.80000001};
		defaultUserMFDtext[]=
		{
			"test"
		};
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
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=1;
				font="rhsusf_digital_font_usa";
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.495,0.53600001};
						pos10[]={1.1026,1.0785};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.495,0.546};
						pos0[]={0.495,0.53600001};
						pos10[]={1.1026,1.0785};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.495,0.53600001};
						pos10[]={1.1026,1.0785};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.495,0.53600001};
						pos10[]={1.1026,1.0785};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointWeaponRelative";
						pos0[]={0.5,0.53600001};
						pos10[]={1.1076,1.0785};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.89285702;
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointweaponRelative";
						pos0[]={0.5,0.53600001};
						pos10[]={1.1076,1.0785};
					};
					class Target
					{
						source="target";
						type="vector";
						pos0[]={0.495,0.53600001};
						pos10[]={1.1026,1.0785};
					};
					class TargetingPodDir
					{
						source="pilotcamera";
						type="vector";
						pos0[]={0.495,0.53600001};
						pos10[]={1.1026,1.0785};
					};
					class TargetingPodTarget
					{
						source="pilotcameratarget";
						type="vector";
						pos0[]={0.495,0.53600001};
						pos10[]={1.1026,1.0785};
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.33000001,0.1,0.67000002,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.495,0.53600001};
						pos10[]={1.1076,1.0785};
					};
					class ASL_Instrument
					{
						type="rotational";
						source="altitudeASL";
						center[]={0.89999998,0.44642901};
						min=0;
						max=20000;
						minAngle=0;
						maxAngle=72000;
						aspectRatio=0.89285702;
					};
					class Speed_Instrument: ASL_Instrument
					{
						source="speed";
						center[]={0.1,0.44642901};
						max=555.55603;
						maxAngle=7200;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1";
						pos0[]={0.5,0.53600001};
						pos10[]={1.1076,1.0785};
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
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.53600001};
						pos3[]={0.68228,0.53600001};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.69875002};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(45)";
						max="rad(45)";
						minAngle="180.25-35.5";
						maxAngle="180.75+35.5";
						aspectRatio=0.80000001;
					};
					class HorizonBankRotFull: HorizonBankRot
					{
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Level0
					{
						pos0[]={0.495,0.546};
						pos10[]={1.263,1.306};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle="1.0*5";
					};
					class LevelM5: Level0
					{
						angle="1.0*-5";
					};
					class LevelP10: Level0
					{
						angle="1.0*10";
					};
					class LevelM10: Level0
					{
						angle="1.0*-10";
					};
					class LevelP15: Level0
					{
						angle="1.0*15";
					};
					class LevelM15: Level0
					{
						angle="1.0*-15";
					};
					class LevelP20: Level0
					{
						angle="1.0*20";
					};
					class LevelM20: Level0
					{
						angle="1.0*-20";
					};
					class LevelP25: Level0
					{
						angle="1.0*25";
					};
					class LevelM25: Level0
					{
						angle="1.0*-25";
					};
					class LevelP30: Level0
					{
						angle="1.0*30";
					};
					class LevelM30: Level0
					{
						angle="1.0*-30";
					};
					class LevelP35: Level0
					{
						angle="1.0*35";
					};
					class LevelM35: Level0
					{
						angle="1.0*-35";
					};
					class LevelP40: Level0
					{
						angle="1.0*40";
					};
					class LevelM40: Level0
					{
						angle="1.0*-40";
					};
					class LevelP45: Level0
					{
						angle="1.0*45";
					};
					class LevelM45: Level0
					{
						angle="1.0*-45";
					};
					class LevelP50: Level0
					{
						angle="1.0*50";
					};
					class LevelM50: Level0
					{
						angle="1.0*-50";
					};
					class LevelP60: Level0
					{
						angle="1.0*60";
					};
					class LevelM60: Level0
					{
						angle="1.0*-60";
					};
					class LevelP70: Level0
					{
						angle="1.0*70";
					};
					class LevelM70: Level0
					{
						angle="1.0*-70";
					};
					class LevelP80: Level0
					{
						angle="1.0*80";
					};
					class LevelM80: Level0
					{
						angle="1.0*-80";
					};
					class LevelP90: Level0
					{
						angle="1.0*90";
					};
					class LevelM90: Level0
					{
						angle="1.0*-90";
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.89285702;
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
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class LarAmmoMax
					{
						type="linear";
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
					class LarAmmoMGunMax
					{
						type="rotational";
						source="LarAmmoMax";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=1;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=0.89285702;
					};
					class LarAmmoMGunMin: LarAmmoMGunMax
					{
						source="LarAmmoMin";
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					condition="on";
					class PlaneW
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.02,0},
								1
							},
							
							{
								"PlaneW",
								{0.02,0},
								1
							},
							{},
							
							{
								"PlaneW",
								{0,-0.017857101},
								1
							},
							
							{
								"PlaneW",
								{0,0.017857101},
								1
							},
							{},
							
							{
								{0.11,0.77700001},
								1
							},
							
							{
								{0.090000004,0.75999999},
								1
							},
							
							{
								{0.085000001,0.75800002},
								1
							},
							
							{
								{0.079999998,0.75800002},
								1
							},
							
							{
								{0.075000003,0.75999999},
								1
							},
							
							{
								{0.072999999,0.76700002},
								1
							},
							
							{
								{0.075000003,0.77399999},
								1
							},
							
							{
								{0.079999998,0.77600002},
								1
							},
							
							{
								{0.085000001,0.77600002},
								1
							},
							
							{
								{0.090000004,0.77399999},
								1
							},
							
							{
								{0.11,0.75700003},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									"-0.4-0.01",
									-0.25
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									"-0.4-0",
									-0.241071
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									"-0.4-0.01",
									-0.232143
								},
								1
							},
							{},
							{},
							
							{
								{0.80500001,0.77940702},
								1
							},
							
							{
								{0.815,0.79487199},
								1
							},
							{},
							
							{
								{0.73226398,0.81143302},
								1
							},
							
							{
								{0.73991698,0.82793099},
								1
							},
							{},
							
							{
								{0.65546799,0.83470899},
								1
							},
							
							{
								{0.66064399,0.85195798},
								1
							},
							{},
							
							{
								{0.57592601,0.848836},
								1
							},
							
							{
								{0.57853699,0.86654001},
								1
							},
							{},
							
							{
								{0.495,0.853571},
								1
							},
							
							{
								{0.495,0.87142903},
								1
							},
							{},
							
							{
								{0.414074,0.848836},
								1
							},
							
							{
								{0.41146299,0.86654001},
								1
							},
							{},
							
							{
								{0.33453199,0.83470899},
								1
							},
							
							{
								{0.32935601,0.85195798},
								1
							},
							{},
							
							{
								{0.257736,0.81143302},
								1
							},
							
							{
								{0.25008199,0.82793099},
								1
							},
							{},
							
							{
								{0.185,0.77940702},
								1
							},
							
							{
								{0.175,0.79487199},
								1
							},
							{},
							
							{
								"HorizonBankRot",
								{0,0.4375},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.41964301},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.41964301},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.4375},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
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
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class Static_Bold
					{
						type="line";
						width=5;
						points[]=
						{
							
							{
								{0.096500002,0.51116103},
								1
							},
							
							{
								{0.1035,0.51116103},
								1
							},
							{},
							
							{
								{0.1,0.50803602},
								1
							},
							
							{
								{0.1,0.51428598},
								1
							},
							{},
							
							{
								{0.13911401,0.49879801},
								1
							},
							
							{
								{0.14611401,0.49879801},
								1
							},
							{},
							
							{
								{0.14261401,0.495673},
								1
							},
							
							{
								{0.14261401,0.50192302},
								1
							},
							{},
							
							{
								{0.165452,0.46643201},
								1
							},
							
							{
								{0.172452,0.46643201},
								1
							},
							{},
							
							{
								{0.168952,0.46330699},
								1
							},
							
							{
								{0.168952,0.46955699},
								1
							},
							{},
							
							{
								{0.165452,0.42642501},
								1
							},
							
							{
								{0.172452,0.42642501},
								1
							},
							{},
							
							{
								{0.168952,0.4233},
								1
							},
							
							{
								{0.168952,0.42954999},
								1
							},
							{},
							
							{
								{0.13911401,0.394059},
								1
							},
							
							{
								{0.14611401,0.394059},
								1
							},
							{},
							
							{
								{0.14261401,0.39093399},
								1
							},
							
							{
								{0.14261401,0.39718401},
								1
							},
							{},
							
							{
								{0.096500002,0.38169599},
								1
							},
							
							{
								{0.1035,0.38169599},
								1
							},
							{},
							
							{
								{0.1,0.378571},
								1
							},
							
							{
								{0.1,0.384821},
								1
							},
							{},
							
							{
								{0.053885601,0.394059},
								1
							},
							
							{
								{0.060885601,0.394059},
								1
							},
							{},
							
							{
								{0.057385601,0.39093399},
								1
							},
							
							{
								{0.057385601,0.39718401},
								1
							},
							{},
							
							{
								{0.027548401,0.42642501},
								1
							},
							
							{
								{0.034548402,0.42642501},
								1
							},
							{},
							
							{
								{0.0310484,0.4233},
								1
							},
							
							{
								{0.0310484,0.42954999},
								1
							},
							{},
							
							{
								{0.027548401,0.46643201},
								1
							},
							
							{
								{0.034548402,0.46643201},
								1
							},
							{},
							
							{
								{0.0310484,0.46330699},
								1
							},
							
							{
								{0.0310484,0.46955699},
								1
							},
							{},
							
							{
								{0.053885601,0.49879801},
								1
							},
							
							{
								{0.060885601,0.49879801},
								1
							},
							{},
							
							{
								{0.057385601,0.495673},
								1
							},
							
							{
								{0.057385601,0.50192302},
								1
							},
							{},
							
							{
								"Speed_Instrument",
								{0,0.055},
								1
							},
							
							{
								"Speed_Instrument",
								{0,0.075000003},
								1
							},
							{},
							
							{
								{0.89649999,0.51116103},
								1
							},
							
							{
								{0.90350002,0.51116103},
								1
							},
							{},
							
							{
								{0.89999998,0.50803602},
								1
							},
							
							{
								{0.89999998,0.51428598},
								1
							},
							{},
							
							{
								{0.93911397,0.49879801},
								1
							},
							
							{
								{0.946114,0.49879801},
								1
							},
							{},
							
							{
								{0.94261402,0.495673},
								1
							},
							
							{
								{0.94261402,0.50192302},
								1
							},
							{},
							
							{
								{0.96545202,0.46643201},
								1
							},
							
							{
								{0.97245198,0.46643201},
								1
							},
							{},
							
							{
								{0.968952,0.46330699},
								1
							},
							
							{
								{0.968952,0.46955699},
								1
							},
							{},
							
							{
								{0.96545202,0.42642501},
								1
							},
							
							{
								{0.97245198,0.42642501},
								1
							},
							{},
							
							{
								{0.968952,0.4233},
								1
							},
							
							{
								{0.968952,0.42954999},
								1
							},
							{},
							
							{
								{0.93911397,0.394059},
								1
							},
							
							{
								{0.946114,0.394059},
								1
							},
							{},
							
							{
								{0.94261402,0.39093399},
								1
							},
							
							{
								{0.94261402,0.39718401},
								1
							},
							{},
							
							{
								{0.89649999,0.38169599},
								1
							},
							
							{
								{0.90350002,0.38169599},
								1
							},
							{},
							
							{
								{0.89999998,0.378571},
								1
							},
							
							{
								{0.89999998,0.384821},
								1
							},
							{},
							
							{
								{0.85388601,0.394059},
								1
							},
							
							{
								{0.86088598,0.394059},
								1
							},
							{},
							
							{
								{0.85738599,0.39093399},
								1
							},
							
							{
								{0.85738599,0.39718401},
								1
							},
							{},
							
							{
								{0.82754803,0.42642501},
								1
							},
							
							{
								{0.834548,0.42642501},
								1
							},
							{},
							
							{
								{0.83104801,0.4233},
								1
							},
							
							{
								{0.83104801,0.42954999},
								1
							},
							{},
							
							{
								{0.82754803,0.46643201},
								1
							},
							
							{
								{0.834548,0.46643201},
								1
							},
							{},
							
							{
								{0.83104801,0.46330699},
								1
							},
							
							{
								{0.83104801,0.46955699},
								1
							},
							{},
							
							{
								{0.85388601,0.49879801},
								1
							},
							
							{
								{0.86088598,0.49879801},
								1
							},
							{},
							
							{
								{0.85738599,0.495673},
								1
							},
							
							{
								{0.85738599,0.50192302},
								1
							},
							{},
							
							{
								"ASL_Instrument",
								{0,0.055},
								1
							},
							
							{
								"ASL_Instrument",
								{0,0.075000003},
								1
							},
							{}
						};
					};
					class AfterBurner
					{
						condition="throttle >=1";
						class PlaneW
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"PlaneW",
									
									{
										"-0.38-0.01",
										-0.25
									},
									1
								},
								
								{
									"PlaneW",
									
									{
										"-0.38-0",
										-0.241071
									},
									1
								},
								
								{
									"PlaneW",
									
									{
										"-0.38-0.01",
										-0.232143
									},
									1
								},
								{}
							};
						};
					};
					class Horizont
					{
						clipTL[]={0.1,0.15000001};
						clipBR[]={0.85000002,0.99000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.25,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.25,0},
										1
									}
								};
							};
						};
						class Level0
						{
							type="line";
							width=2;
							points[]={};
						};
						class LevelM5: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM5",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM5",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM5",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM5",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM5",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM5",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM5",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM5",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM5",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM5",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM5",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM5",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_5
						{
							type="text";
							source="static";
							text=-5;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM5",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM5",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM5",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_5_R
						{
							type="text";
							source="static";
							text=-5;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM5",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM5",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM5",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP5: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP5",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP5",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP5",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP5",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP5",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP5",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_5
						{
							type="text";
							source="static";
							text="5";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP5",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP5",
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP5",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_5_R
						{
							type="text";
							source="static";
							text="5";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP5",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP5",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP5",
								{0.19,0.033},
								1
							};
						};
						class LevelM10: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM10",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM10",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM10",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM10",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM10",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM10",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM10",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM10",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM10",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM10",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM10",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM10",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_10
						{
							type="text";
							source="static";
							text=-10;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM10",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM10",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM10",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_10_R
						{
							type="text";
							source="static";
							text=-10;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM10",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM10",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM10",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP10: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP10",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP10",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP10",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP10",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP10",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP10",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_10
						{
							type="text";
							source="static";
							text="10";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP10",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_10_R
						{
							type="text";
							source="static";
							text="10";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP10",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP10",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP10",
								{0.19,0.033},
								1
							};
						};
						class LevelM15: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM15",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM15",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM15",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM15",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM15",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM15",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM15",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM15",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM15",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM15",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM15",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM15",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_15
						{
							type="text";
							source="static";
							text=-15;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM15",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM15",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM15",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_15_R
						{
							type="text";
							source="static";
							text=-15;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM15",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM15",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM15",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP15: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP15",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP15",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP15",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP15",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP15",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP15",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_15
						{
							type="text";
							source="static";
							text="15";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP15",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_15_R
						{
							type="text";
							source="static";
							text="15";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP15",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP15",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP15",
								{0.19,0.033},
								1
							};
						};
						class LevelM20: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM20",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM20",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM20",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM20",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM20",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM20",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM20",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM20",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM20",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM20",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM20",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM20",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_20
						{
							type="text";
							source="static";
							text=-20;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM20",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM20",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM20",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_20_R
						{
							type="text";
							source="static";
							text=-20;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM20",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM20",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM20",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP20: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP20",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP20",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP20",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP20",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP20",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP20",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_20
						{
							type="text";
							source="static";
							text="20";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP20",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_20_R
						{
							type="text";
							source="static";
							text="20";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP20",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP20",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP20",
								{0.19,0.033},
								1
							};
						};
						class LevelM25: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM25",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM25",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM25",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM25",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM25",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM25",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM25",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM25",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM25",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM25",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM25",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM25",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_25
						{
							type="text";
							source="static";
							text=-25;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM25",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM25",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM25",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_25_R
						{
							type="text";
							source="static";
							text=-25;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM25",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM25",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM25",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP25: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP25",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP25",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP25",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP25",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP25",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP25",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_25
						{
							type="text";
							source="static";
							text="25";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP25",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_25_R
						{
							type="text";
							source="static";
							text="25";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP25",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP25",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP25",
								{0.19,0.033},
								1
							};
						};
						class LevelM30: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM30",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM30",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM30",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM30",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM30",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM30",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM30",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM30",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM30",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM30",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM30",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM30",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_30
						{
							type="text";
							source="static";
							text=-30;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM30",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM30",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM30",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_30_R
						{
							type="text";
							source="static";
							text=-30;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM30",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM30",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM30",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP30: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP30",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP30",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP30",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP30",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP30",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP30",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_30
						{
							type="text";
							source="static";
							text="30";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP30",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_30_R
						{
							type="text";
							source="static";
							text="30";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP30",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP30",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP30",
								{0.19,0.033},
								1
							};
						};
						class LevelM35: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM35",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM35",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM35",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM35",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM35",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM35",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM35",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM35",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM35",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM35",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM35",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM35",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_35
						{
							type="text";
							source="static";
							text=-35;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM35",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM35",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM35",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_35_R
						{
							type="text";
							source="static";
							text=-35;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM35",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM35",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM35",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP35: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP35",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP35",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP35",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP35",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP35",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP35",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_35
						{
							type="text";
							source="static";
							text="35";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP35",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_35_R
						{
							type="text";
							source="static";
							text="35";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP35",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP35",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP35",
								{0.19,0.033},
								1
							};
						};
						class LevelM40: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM40",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM40",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM40",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM40",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM40",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM40",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM40",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM40",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM40",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM40",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM40",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM40",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_40
						{
							type="text";
							source="static";
							text=-40;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM40",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM40",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM40",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_40_R
						{
							type="text";
							source="static";
							text=-40;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM40",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM40",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM40",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP40: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP40",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP40",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP40",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP40",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP40",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP40",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_40
						{
							type="text";
							source="static";
							text="40";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP40",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_40_R
						{
							type="text";
							source="static";
							text="40";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP40",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP40",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP40",
								{0.19,0.033},
								1
							};
						};
						class LevelM45: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM45",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM45",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM45",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM45",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM45",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM45",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM45",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM45",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM45",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM45",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM45",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM45",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_45
						{
							type="text";
							source="static";
							text=-45;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM45",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM45",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM45",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_45_R
						{
							type="text";
							source="static";
							text=-45;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM45",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM45",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM45",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP45: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP45",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP45",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP45",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP45",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP45",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP45",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_45
						{
							type="text";
							source="static";
							text="45";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP45",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_45_R
						{
							type="text";
							source="static";
							text="45";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP45",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP45",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP45",
								{0.19,0.033},
								1
							};
						};
						class LevelM50: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM50",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM50",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM50",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM50",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM50",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM50",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM50",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM50",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM50",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM50",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM50",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM50",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_50
						{
							type="text";
							source="static";
							text=-50;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM50",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM50",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM50",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_50_R
						{
							type="text";
							source="static";
							text=-50;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM50",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM50",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM50",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP50: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP50",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP50",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP50",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP50",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP50",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP50",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_50
						{
							type="text";
							source="static";
							text="50";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP50",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_50_R
						{
							type="text";
							source="static";
							text="50";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP50",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP50",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP50",
								{0.19,0.033},
								1
							};
						};
						class LevelM60: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM60",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM60",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM60",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM60",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM60",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM60",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM60",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM60",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM60",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM60",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM60",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM60",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_60
						{
							type="text";
							source="static";
							text=-60;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM60",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM60",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM60",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_60_R
						{
							type="text";
							source="static";
							text=-60;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM60",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM60",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM60",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP60: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP60",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP60",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP60",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP60",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP60",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP60",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_60
						{
							type="text";
							source="static";
							text="60";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP60",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_60_R
						{
							type="text";
							source="static";
							text="60";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP60",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP60",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP60",
								{0.19,0.033},
								1
							};
						};
						class LevelM70: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM70",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM70",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM70",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM70",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM70",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM70",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM70",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM70",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM70",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM70",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM70",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM70",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_70
						{
							type="text";
							source="static";
							text=-70;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM70",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM70",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM70",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_70_R
						{
							type="text";
							source="static";
							text=-70;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM70",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM70",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM70",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP70: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP70",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP70",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP70",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP70",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP70",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP70",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_70
						{
							type="text";
							source="static";
							text="70";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP70",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_70_R
						{
							type="text";
							source="static";
							text="70";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP70",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP70",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP70",
								{0.19,0.033},
								1
							};
						};
						class LevelM80: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM80",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM80",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM80",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM80",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM80",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM80",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM80",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM80",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM80",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM80",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM80",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM80",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_80
						{
							type="text";
							source="static";
							text=-80;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM80",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM80",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM80",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_80_R
						{
							type="text";
							source="static";
							text=-80;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM80",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM80",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM80",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP80: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP80",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP80",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP80",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP80",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP80",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP80",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_80
						{
							type="text";
							source="static";
							text="80";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP80",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_80_R
						{
							type="text";
							source="static";
							text="80";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP80",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP80",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP80",
								{0.19,0.033},
								1
							};
						};
						class LevelM90: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelM90",
									{-0.175,-0.02},
									1
								},
								
								{
									"LevelM90",
									{-0.175,0},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										-0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM90",
									
									{
										-0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										-0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM90",
									
									{
										-0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										-0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM90",
									
									{
										-0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										-0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM90",
									
									{
										-0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										-0.039999999,
										"-0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									{0.175,-0.02},
									1
								},
								
								{
									"LevelM90",
									{0.175,0},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										0.16,
										"-0.001*1"
									},
									1
								},
								
								{
									"LevelM90",
									
									{
										0.145,
										"-0.001*2"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										0.13,
										"-0.001*3"
									},
									1
								},
								
								{
									"LevelM90",
									
									{
										0.115,
										"-0.001*4"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										0.1,
										"-0.001*5"
									},
									1
								},
								
								{
									"LevelM90",
									
									{
										0.085000001,
										"-0.001*6"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										0.07,
										"-0.001*7"
									},
									1
								},
								
								{
									"LevelM90",
									
									{
										0.055,
										"-0.001*8"
									},
									1
								},
								{},
								
								{
									"LevelM90",
									
									{
										0.039999999,
										"-0.001*9"
									},
									1
								}
							};
						};
						class VALM_1_90
						{
							type="text";
							source="static";
							text=-90;
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM90",
								{-0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM90",
								{-0.13,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM90",
								{-0.19,0.017999999},
								1
							};
						};
						class VALM_1_90_R
						{
							type="text";
							source="static";
							text=-90;
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelM90",
								{0.19,-0.032000002},
								1
							};
							right[]=
							{
								"LevelM90",
								{0.25,-0.032000002},
								1
							};
							down[]=
							{
								"LevelM90",
								{0.19,0.017999999},
								1
							};
						};
						class LevelP90: Level0
						{
							type="line";
							points[]=
							{
								
								{
									"LevelP90",
									
									{
										"-0.16-0.015",
										0.02
									},
									1
								},
								
								{
									"LevelP90",
									
									{
										"-0.16-0.015",
										0
									},
									1
								},
								
								{
									"LevelP90",
									
									{
										-0.059999999,
										"0.001*9"
									},
									1
								},
								{},
								
								{
									"LevelP90",
									
									{
										0.059999999,
										"0.001*9"
									},
									1
								},
								
								{
									"LevelP90",
									
									{
										"+0.16+0.015",
										0
									},
									1
								},
								
								{
									"LevelP90",
									
									{
										"+0.16+0.015",
										0.02
									},
									1
								}
							};
						};
						class VALP_1_90
						{
							type="text";
							source="static";
							text="90";
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
								{-0.13,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP90",
								{-0.19,0.033},
								1
							};
						};
						class VALP_1_90_R
						{
							type="text";
							source="static";
							text="90";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP90",
								{0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP90",
								{0.25,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP90",
								{0.19,0.033},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							{0.1,0.42410699},
							1
						};
						right[]=
						{
							{0.16,0.42410699},
							1
						};
						down[]=
						{
							{0.1,0.46875},
							1
						};
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeASL";
						sourceScale=1;
						pos[]=
						{
							{0.89999998,0.42410699},
							1
						};
						right[]=
						{
							{0.95999998,0.42410699},
							1
						};
						down[]=
						{
							{0.89999998,0.46875},
							1
						};
					};
					class MachText
					{
						type="text";
						source="static";
						align="left";
						text="M";
						scale=1;
						pos[]=
						{
							{0.1,0.63},
							1
						};
						right[]=
						{
							{0.15000001,0.63},
							1
						};
						down[]=
						{
							{0.1,0.68000001},
							1
						};
					};
					class MachNumber
					{
						type="text";
						source="speed";
						sourceScale=0.002939;
						sourcePrecision=2;
						align="right";
						scale=1;
						pos[]=
						{
							{0.12,0.63},
							1
						};
						right[]=
						{
							{0.17,0.63},
							1
						};
						down[]=
						{
							{0.12,0.68000001},
							1
						};
					};
					class GmeterText
					{
						type="text";
						source="static";
						align="left";
						text="G";
						scale=1;
						pos[]=
						{
							{0.1,0.69999999},
							1
						};
						right[]=
						{
							{0.15000001,0.69999999},
							1
						};
						down[]=
						{
							{0.1,0.75},
							1
						};
					};
					class GmeterNumber
					{
						type="text";
						source="gmeter";
						sourceScale=0.30000001;
						sourcePrecision=1;
						refreshRate=0.40000001;
						align="right";
						scale=1;
						pos[]=
						{
							{0.12,0.69999999},
							1
						};
						right[]=
						{
							{0.17,0.69999999},
							1
						};
						down[]=
						{
							{0.12,0.75},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="aoa";
						sourceScale=57.295799;
						sourcePrecision=1;
						refreshRate=0.40000001;
						align="right";
						scale=1;
						pos[]=
						{
							{0.12,0.74000001},
							1
						};
						right[]=
						{
							{0.17,0.74000001},
							1
						};
						down[]=
						{
							{0.12,0.79000002},
							1
						};
					};
					class RadarATLText
					{
						type="text";
						source="static";
						align="left";
						text="R";
						scale=1;
						pos[]=
						{
							{0.85000002,0.55000001},
							1
						};
						right[]=
						{
							{0.89999998,0.55000001},
							1
						};
						down[]=
						{
							{0.85000002,0.60000002},
							1
						};
					};
					class RadarATLNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						sourcePrecision=0;
						refreshRate=0.0099999998;
						align="right";
						scale=1;
						pos[]=
						{
							{0.87,0.55000001},
							1
						};
						right[]=
						{
							{0.92000002,0.55000001},
							1
						};
						down[]=
						{
							{0.87,0.60000002},
							1
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.14},
							1
						};
						right[]=
						{
							{0.56999999,0.14},
							1
						};
						down[]=
						{
							{0.5,0.20999999},
							1
						};
					};
					class HeadingArrows
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.44999999,0.2},
								1
							},
							
							{
								{0.55000001,0.2},
								1
							},
							
							{
								{0.55000001,0.157143},
								1
							},
							
							{
								{0.44999999,0.157143},
								1
							},
							
							{
								{0.44999999,0.2},
								1
							},
							{},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.011,0.13},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.011,0.152},
								1
							},
							{},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.011,0.13},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.011,0.152},
								1
							}
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceLength=2;
						width=4;
						top=0.30000001;
						center=0.5;
						bottom=0.69999999;
						lineXleft=0.22;
						lineYright=0.2;
						lineXleftMajor=0.23;
						lineYrightMajor=0.2;
						majorLineEach=2;
						numberEach=0;
						step=0.5;
						stepSize=0.055555601;
						align="center";
						scale=1;
						pos[]={0.29499999,0.16500001};
						right[]={0.33500001,0.16500001};
						down[]={0.29499999,0.205};
					};
					class HeadingScale_Left
					{
						clipTL[]={0,0};
						clipBR[]={0.44999999,1};
						class HeadingScale: HeadingScale
						{
							lineXleft=0;
							lineYright=0;
							lineXleftMajor=0;
							lineYrightMajor=0;
							numberEach=2;
						};
					};
					class HeadingScale_Right
					{
						clipTL[]={0.55000001,0};
						clipBR[]={1,1};
						class HeadingScale: HeadingScale
						{
							lineXleft=0;
							lineYright=0;
							lineXleftMajor=0;
							lineYrightMajor=0;
							numberEach=2;
						};
					};
					class ThrustNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						sourceLength=3;
						sourceOffset=0;
						sourcePrecision=0;
						refreshRate=0.0099999998;
						align="left";
						scale=1;
						pos[]=
						{
							{0.15000001,0.88999999},
							1
						};
						right[]=
						{
							{0.2,0.88999999},
							1
						};
						down[]=
						{
							{0.15000001,0.94},
							1
						};
					};
					class NavigationMode
					{
						condition="1-(AAmissile+mgun+bomb)";
						class ModeText
						{
							type="text";
							source="static";
							align="left";
							text="NAV";
							scale=1;
							pos[]=
							{
								{0.15000001,0.85000002},
								1
							};
							right[]=
							{
								{0.2,0.85000002},
								1
							};
							down[]=
							{
								{0.15000001,0.89999998},
								1
							};
						};
						class WP
						{
							condition="wpvalid";
							class WPdist
							{
								type="text";
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
								type="text";
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
								type="text";
								source="static";
								text="/";
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
								type="text";
								source="static";
								text=":14:36/-00:0";
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
								text="%X";
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
							class WP
							{
								width=1;
								type="line";
								points[]=
								{
									
									{
										"wppoint",
										{0,-0.00892857},
										1
									},
									
									{
										"wppoint",
										{0.0049999999,-0.0077321399},
										1
									},
									
									{
										"wppoint",
										{0.0086599998,-0.0044642901},
										1
									},
									
									{
										"wppoint",
										{0.0099999998,0},
										1
									},
									
									{
										"wppoint",
										{0.0086599998,0.0044642901},
										1
									},
									
									{
										"wppoint",
										{0.0049999999,0.0077321399},
										1
									},
									
									{
										"wppoint",
										{0,0.00892857},
										1
									},
									
									{
										"wppoint",
										{-0.0049999999,0.0077321399},
										1
									},
									
									{
										"wppoint",
										{-0.0086599998,0.0044642901},
										1
									},
									
									{
										"wppoint",
										{-0.0099999998,0},
										1
									},
									
									{
										"wppoint",
										{-0.0086599998,-0.0044642901},
										1
									},
									
									{
										"wppoint",
										{-0.0049999999,-0.0077321399},
										1
									},
									
									{
										"wppoint",
										{0,-0.00892857},
										1
									},
									{},
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											0,
											-0.0099999998
										},
										1
									},
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											0,
											-0.023
										},
										1
									}
								};
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class ModeText
						{
							type="text";
							source="static";
							align="left";
							text="MSL";
							scale=1;
							pos[]=
							{
								{0.15000001,0.85000002},
								1
							};
							right[]=
							{
								{0.2,0.85000002},
								1
							};
							down[]=
							{
								{0.15000001,0.89999998},
								1
							};
						};
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneW",
									{0,-0.25},
									1
								},
								
								{
									"PlaneW",
									{0.048608001,-0.2462},
									1
								},
								
								{
									"PlaneW",
									{0.095760003,-0.234925},
									1
								},
								
								{
									"PlaneW",
									{0.14,-0.2165},
									1
								},
								{},
								
								{
									"PlaneW",
									{0.179984,-0.19149999},
									1
								},
								
								{
									"PlaneW",
									{0.21448,-0.16069999},
									1
								},
								
								{
									"PlaneW",
									{0.24247999,-0.125},
									1
								},
								
								{
									"PlaneW",
									{0.263116,-0.085500002},
									1
								},
								{},
								
								{
									"PlaneW",
									{0.27574399,-0.043400001},
									1
								},
								
								{
									"PlaneW",
									{0.28,0},
									1
								},
								
								{
									"PlaneW",
									{0.27574399,0.043400001},
									1
								},
								
								{
									"PlaneW",
									{0.263116,0.085500002},
									1
								},
								{},
								
								{
									"PlaneW",
									{0.24247999,0.125},
									1
								},
								
								{
									"PlaneW",
									{0.21448,0.16069999},
									1
								},
								
								{
									"PlaneW",
									{0.179984,0.19149999},
									1
								},
								
								{
									"PlaneW",
									{0.14,0.2165},
									1
								},
								{},
								
								{
									"PlaneW",
									{0.095760003,0.234925},
									1
								},
								
								{
									"PlaneW",
									{0.048608001,0.2462},
									1
								},
								
								{
									"PlaneW",
									{0,0.25},
									1
								},
								
								{
									"PlaneW",
									{-0.048608001,0.2462},
									1
								},
								{},
								
								{
									"PlaneW",
									{-0.095760003,0.234925},
									1
								},
								
								{
									"PlaneW",
									{-0.14,0.2165},
									1
								},
								
								{
									"PlaneW",
									{-0.179984,0.19149999},
									1
								},
								
								{
									"PlaneW",
									{-0.21448,0.16069999},
									1
								},
								{},
								
								{
									"PlaneW",
									{-0.24247999,0.125},
									1
								},
								
								{
									"PlaneW",
									{-0.263116,0.085500002},
									1
								},
								
								{
									"PlaneW",
									{-0.27574399,0.043400001},
									1
								},
								
								{
									"PlaneW",
									{-0.28,0},
									1
								},
								{},
								
								{
									"PlaneW",
									{-0.27574399,-0.043400001},
									1
								},
								
								{
									"PlaneW",
									{-0.263116,-0.085500002},
									1
								},
								
								{
									"PlaneW",
									{-0.24247999,-0.125},
									1
								},
								
								{
									"PlaneW",
									{-0.21448,-0.16069999},
									1
								},
								{},
								
								{
									"PlaneW",
									{-0.179984,-0.19149999},
									1
								},
								
								{
									"PlaneW",
									{-0.14,-0.2165},
									1
								},
								
								{
									"PlaneW",
									{-0.095760003,-0.234925},
									1
								},
								
								{
									"PlaneW",
									{-0.048608001,-0.2462},
									1
								},
								{},
								
								{
									"PlaneW",
									{0,-0.25},
									1
								}
							};
						};
						class AmmoCount
						{
							type="text";
							source="ammoFormat";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.74000001,0.89999998},
								1
							};
							right[]=
							{
								{0.80000001,0.89999998},
								1
							};
							down[]=
							{
								{0.74000001,0.95999998},
								1
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.87,0.18000001},
									1
								},
								
								{
									{0.85000002,0.18000001},
									1
								},
								
								{
									{0.85000002,0.34},
									1
								},
								
								{
									{0.87,0.34},
									1
								},
								{},
								
								{
									{0.87,0.30000001},
									1
								},
								
								{
									{0.85000002,0.30000001},
									1
								},
								{},
								
								{
									{0.87,0.25999999},
									1
								},
								
								{
									{0.85000002,0.25999999},
									1
								},
								{},
								
								{
									{0.87,0.22},
									1
								},
								
								{
									{0.85000002,0.22},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.82999998,0.36000001},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.85000002,0.34},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.82999998,0.31999999},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.85100001,0.34},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.85100001,0.34},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.86799997,0.34},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.86799997,0.34},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.88,0.16},
								1
							};
							right[]=
							{
								{0.92000002,0.16},
								1
							};
							down[]=
							{
								{0.88,0.2},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.88,0.23999999},
								1
							};
							right[]=
							{
								{0.92000002,0.23999999},
								1
							};
							down[]=
							{
								{0.88,0.28},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.81999999,0.31999999},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.86000001,0.31999999},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.81999999,0.36000001},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.080357097},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.071428597},
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
									{0,-0.00178571},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.00178571},
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
									{0,-0.071428597},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.070342898},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.067121401},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.061857101},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.0547143},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.0459143},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.035714298},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0244286},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0124},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0124},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0244286},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.035714298},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.0459143},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.0547143},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.061857101},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.067121401},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.070342898},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.071428597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.070342898},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.067121401},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.061857101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.0547143},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.0459143},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.035714298},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0244286},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0124},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0124},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0244286},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.035714298},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.0459143},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.0547143},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.061857101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.067121401},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.070342898},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.071428597},
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
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.057142898},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.071428597},
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
							type="text";
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
					class MGun
					{
						condition="(mgun+rocket)";
						class ModeText
						{
							type="text";
							source="static";
							align="left";
							text="GUN";
							scale=1;
							pos[]=
							{
								{0.15000001,0.85000002},
								1
							};
							right[]=
							{
								{0.2,0.85000002},
								1
							};
							down[]=
							{
								{0.15000001,0.89999998},
								1
							};
						};
						class AmmoCounter
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.77999997,0.89999998},
								1
							};
							right[]=
							{
								{0.83999997,0.89999998},
								1
							};
							down[]=
							{
								{0.77999997,0.95999998},
								1
							};
						};
					};
					class MGunCross
					{
						condition="-1+(mgun+rocket)*impactDistance";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.07},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.029999999},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.045000002},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.029999999},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.045000002,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.029999999,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.045000002,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.029999999,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.035714298},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.044642899},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.039999999},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_LAR
						{
							type="line";
							width=5;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									1,
									
									{
										"LarAmmoMGunMin",
										0,
										-0.053571399
									},
									1
								},
								
								{
									"ImpactPointRelative",
									1,
									
									{
										"LarAmmoMGunMin",
										0,
										-0.044642899
									},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									1,
									
									{
										"LarAmmoMGunMax",
										0,
										-0.053571399
									},
									1
								},
								
								{
									"ImpactPointRelative",
									1,
									
									{
										"LarAmmoMGunMax",
										0,
										-0.044642899
									},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,-0.1},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,-0.1},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,-0.059999999},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="targetDist";
						class TargetDist
						{
							type="text";
							source="targetDist";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.82999998,0.86000001},
								1
							};
							right[]=
							{
								{0.88999999,0.86000001},
								1
							};
							down[]=
							{
								{0.82999998,0.92000002},
								1
							};
						};
						class TargetHeight
						{
							type="text";
							source="targetHeight";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.82999998,0.81999999},
								1
							};
							right[]=
							{
								{0.88999999,0.81999999},
								1
							};
							down[]=
							{
								{0.82999998,0.88},
								1
							};
						};
					};
					class StallGroup
					{
						condition="stall";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.31999999},
								1
							};
							right[]=
							{
								{0.56999999,0.31999999},
								1
							};
							down[]=
							{
								{0.5,0.38999999},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="LOCKING";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.87},
								1
							};
							right[]=
							{
								{0.56999999,0.87},
								1
							};
							down[]=
							{
								{0.5,0.94},
								1
							};
						};
					};
					class WeaponsLocked
					{
						condition="missilelocked";
						class Text
						{
							type="text";
							source="static";
							text="SHOOT";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.87},
								1
							};
							right[]=
							{
								{0.56999999,0.87},
								1
							};
							down[]=
							{
								{0.5,0.94},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="INCOMING MISSILE";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.31999999},
								1
							};
							right[]=
							{
								{0.56999999,0.31999999},
								1
							};
							down[]=
							{
								{0.5,0.38999999},
								1
							};
						};
					};
					class RadarGroup
					{
						condition="activeSensorsOn";
						class Text
						{
							type="text";
							source="static";
							text="RADAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.94,0.62},
								1
							};
							right[]=
							{
								{1,0.62},
								1
							};
							down[]=
							{
								{0.94,0.68000001},
								1
							};
						};
					};
					class FlapsGroup
					{
						condition="flaps";
						class GearText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.94,0.69999999},
								1
							};
							right[]=
							{
								{1,0.69999999},
								1
							};
							down[]=
							{
								{0.94,0.75999999},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.94,0.66000003},
								1
							};
							right[]=
							{
								{1,0.66000003},
								1
							};
							down[]=
							{
								{0.94,0.72000003},
								1
							};
						};
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"ILS_W",
										{-0.12,0},
										1
									},
									
									{
										"ILS_W",
										{0.12,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0107143},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0107143},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.059999999,-0.0080357101},
										1
									},
									
									{
										"ILS_W",
										{-0.059999999,0.0080357101},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0107143},
										1
									},
									
									{
										"ILS_W",
										{0,0.0107143},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.059999999,-0.0080357101},
										1
									},
									
									{
										"ILS_W",
										{0.059999999,0.0080357101},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0107143},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0107143},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.107143},
										1
									},
									
									{
										"ILS_H",
										{0,0.107143},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,-0.107143},
										1
									},
									
									{
										"ILS_H",
										{0.012,-0.107143},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,-0.053571399},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,-0.053571399},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0},
										1
									},
									
									{
										"ILS_H",
										{0.012,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,0.053571399},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,0.053571399},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0.107143},
										1
									},
									
									{
										"ILS_H",
										{0.012,0.107143},
										1
									}
								};
							};
							class airport
							{
								type="line";
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
					class RadarBoxes
					{
						type="radar";
						pos0[]={0.495,0.53600001};
						pos10[]={1.1026,1.0785};
						width=4;
						class points
						{
							class Draw
							{
								type="line";
								width=4;
								lineType=2;
								points[]=
								{
									
									{
										{0,-0.0267857},
										1
									},
									
									{
										{0.0052080001,-0.0263786},
										1
									},
									
									{
										{0.01026,-0.025170499},
										1
									},
									
									{
										{0.015,-0.023196399},
										1
									},
									
									{
										{0.019284001,-0.020517901},
										1
									},
									
									{
										{0.022980001,-0.017217901},
										1
									},
									
									{
										{0.025979999,-0.0133929},
										1
									},
									
									{
										{0.028191,-0.0091607096},
										1
									},
									
									{
										{0.029544,-0.00465},
										1
									},
									
									{
										{0.029999999,0},
										1
									},
									
									{
										{0.029544,0.00465},
										1
									},
									
									{
										{0.028191,0.0091607096},
										1
									},
									
									{
										{0.025979999,0.0133929},
										1
									},
									
									{
										{0.022980001,0.017217901},
										1
									},
									
									{
										{0.019284001,0.020517901},
										1
									},
									
									{
										{0.015,0.023196399},
										1
									},
									
									{
										{0.01026,0.025170499},
										1
									},
									
									{
										{0.0052080001,0.0263786},
										1
									},
									
									{
										{0,0.0267857},
										1
									},
									
									{
										{-0.0052080001,0.0263786},
										1
									},
									
									{
										{-0.01026,0.025170499},
										1
									},
									
									{
										{-0.015,0.023196399},
										1
									},
									
									{
										{-0.019284001,0.020517901},
										1
									},
									
									{
										{-0.022980001,0.017217901},
										1
									},
									
									{
										{-0.025979999,0.0133929},
										1
									},
									
									{
										{-0.028191,0.0091607096},
										1
									},
									
									{
										{-0.029544,0.00465},
										1
									},
									
									{
										{-0.029999999,0},
										1
									},
									
									{
										{-0.029544,-0.00465},
										1
									},
									
									{
										{-0.028191,-0.0091607096},
										1
									},
									
									{
										{-0.025979999,-0.0133929},
										1
									},
									
									{
										{-0.022980001,-0.017217901},
										1
									},
									
									{
										{-0.019284001,-0.020517901},
										1
									},
									
									{
										{-0.015,-0.023196399},
										1
									},
									
									{
										{-0.01026,-0.025170499},
										1
									},
									
									{
										{-0.0052080001,-0.0263786},
										1
									},
									
									{
										{0,-0.0267857},
										1
									},
									{}
								};
							};
						};
						class pointsUnknown: points
						{
							class Draw: Draw
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0,-0.0099999998},
											1
										},
										
										{
											{0.02,-0.0099999998},
											1
										},
										
										{
											{0.02,0.0099999998},
											1
										},
										
										{
											{0,0.0099999998},
											1
										}
									}
								};
							};
						};
						class pointsUnknownEnemy: pointsUnknown
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsUnknownFriend: pointsUnknown
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsUnknownCiv: pointsUnknown
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsCar: points
						{
							class Draw: Draw
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0026047199,-0.0131894},
											1
										},
										
										{
											{0.0051302998,-0.0125852},
											1
										},
										
										{
											{0.0074999998,-0.0115986},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0074999998,-0.0115986},
											1
										},
										
										{
											{0.0096418103,-0.0102595},
											1
										},
										
										{
											{0.0114907,-0.0086087603},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0114907,-0.0086087603},
											1
										},
										
										{
											{0.0129904,-0.00669643},
											1
										},
										
										{
											{0.0140954,-0.00458063},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0140954,-0.00458063},
											1
										},
										
										{
											{0.0147721,-0.0023256401},
											1
										},
										
										{
											{0.015,5.8541999e-010},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.015,5.8541999e-010},
											1
										},
										
										{
											{0.0147721,0.0023256501},
											1
										},
										
										{
											{0.0140954,0.00458063},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0140954,0.00458063},
											1
										},
										
										{
											{0.0129904,0.00669643},
											1
										},
										
										{
											{0.0114907,0.0086087603},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0114907,0.0086087603},
											1
										},
										
										{
											{0.0096418103,0.0102595},
											1
										},
										
										{
											{0.0074999998,0.0115986},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0074999998,0.0115986},
											1
										},
										
										{
											{0.0051302998,0.0125852},
											1
										},
										
										{
											{0.0026047199,0.0131894},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0026047199,0.0131894},
											1
										},
										
										{
											{-1.31134e-009,0.0133929},
											1
										},
										
										{
											{-0.00260473,0.0131894},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.00260473,0.0131894},
											1
										},
										
										{
											{-0.0051302998,0.0125852},
											1
										},
										
										{
											{-0.0074999998,0.0115986},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0074999998,0.0115986},
											1
										},
										
										{
											{-0.0096418103,0.0102595},
											1
										},
										
										{
											{-0.0114907,0.0086087603},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0114907,0.0086087603},
											1
										},
										
										{
											{-0.0129904,0.00669643},
											1
										},
										
										{
											{-0.0140954,0.00458063},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0140954,0.00458063},
											1
										},
										
										{
											{-0.0147721,0.0023256401},
											1
										},
										
										{
											{-0.015,-1.59708e-010},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.015,-1.59708e-010},
											1
										},
										
										{
											{-0.0147721,-0.0023256501},
											1
										},
										
										{
											{-0.0140954,-0.00458063},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0140954,-0.00458063},
											1
										},
										
										{
											{-0.0129904,-0.00669643},
											1
										},
										
										{
											{-0.0114907,-0.0086087603},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0114907,-0.0086087603},
											1
										},
										
										{
											{-0.0096418103,-0.0102595},
											1
										},
										
										{
											{-0.0074999998,-0.0115986},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0074999998,-0.0115986},
											1
										},
										
										{
											{-0.0051303101,-0.0125852},
											1
										},
										
										{
											{-0.0026047199,-0.0131894},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0026047199,-0.0131894},
											1
										},
										
										{
											{2.6226801e-009,-0.0133929},
											1
										},
										
										{
											{0.0026047199,-0.0131894},
											1
										}
									}
								};
							};
						};
						class pointsCarEnemy: pointsCar
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsCarFriend: pointsCar
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsCarCiv: pointsCar
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsCarNeutral: pointsCar
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsTank: points
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsTankEnemy: pointsTank
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsTankFriend: pointsTank
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsTankCiv: pointsTank
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsTankNeutral: pointsTank
						{
							class Draw: Draw;  //found empty after stripping
						};
						class pointsAirplane
						{
							class Draw
							{
								type="line";
								width=4;
								lineType=2;
								points[]=
								{
									
									{
										{0,-0.0267857},
										1
									},
									
									{
										{0.0052080001,-0.0263786},
										1
									},
									
									{
										{0.01026,-0.025170499},
										1
									},
									
									{
										{0.015,-0.023196399},
										1
									},
									
									{
										{0.019284001,-0.020517901},
										1
									},
									
									{
										{0.022980001,-0.017217901},
										1
									},
									
									{
										{0.025979999,-0.0133929},
										1
									},
									
									{
										{0.028191,-0.0091607096},
										1
									},
									
									{
										{0.029544,-0.00465},
										1
									},
									
									{
										{0.029999999,0},
										1
									},
									
									{
										{0.029544,0.00465},
										1
									},
									
									{
										{0.028191,0.0091607096},
										1
									},
									
									{
										{0.025979999,0.0133929},
										1
									},
									
									{
										{0.022980001,0.017217901},
										1
									},
									
									{
										{0.019284001,0.020517901},
										1
									},
									
									{
										{0.015,0.023196399},
										1
									},
									
									{
										{0.01026,0.025170499},
										1
									},
									
									{
										{0.0052080001,0.0263786},
										1
									},
									
									{
										{0,0.0267857},
										1
									},
									
									{
										{-0.0052080001,0.0263786},
										1
									},
									
									{
										{-0.01026,0.025170499},
										1
									},
									
									{
										{-0.015,0.023196399},
										1
									},
									
									{
										{-0.019284001,0.020517901},
										1
									},
									
									{
										{-0.022980001,0.017217901},
										1
									},
									
									{
										{-0.025979999,0.0133929},
										1
									},
									
									{
										{-0.028191,0.0091607096},
										1
									},
									
									{
										{-0.029544,0.00465},
										1
									},
									
									{
										{-0.029999999,0},
										1
									},
									
									{
										{-0.029544,-0.00465},
										1
									},
									
									{
										{-0.028191,-0.0091607096},
										1
									},
									
									{
										{-0.025979999,-0.0133929},
										1
									},
									
									{
										{-0.022980001,-0.017217901},
										1
									},
									
									{
										{-0.019284001,-0.020517901},
										1
									},
									
									{
										{-0.015,-0.023196399},
										1
									},
									
									{
										{-0.01026,-0.025170499},
										1
									},
									
									{
										{-0.0052080001,-0.0263786},
										1
									},
									
									{
										{0,-0.0267857},
										1
									},
									{}
								};
							};
						};
						class pointsAirplaneEnemy
						{
							class Draw
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										{0.029999999,0},
										1
									},
									
									{
										{0,0.0267857},
										1
									},
									
									{
										{-0.029999999,0},
										1
									},
									
									{
										{0,-0.0267857},
										1
									},
									
									{
										{0.029999999,0},
										1
									}
								};
							};
						};
						class pointsAirplaneFriend
						{
							class Draw
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										{0,-0.0267857},
										1
									},
									
									{
										{0.0052080001,-0.0263786},
										1
									},
									
									{
										{0.01026,-0.025170499},
										1
									},
									
									{
										{0.015,-0.023196399},
										1
									},
									
									{
										{0.019284001,-0.020517901},
										1
									},
									
									{
										{0.022980001,-0.017217901},
										1
									},
									
									{
										{0.025979999,-0.0133929},
										1
									},
									
									{
										{0.028191,-0.0091607096},
										1
									},
									
									{
										{0.029544,-0.00465},
										1
									},
									
									{
										{0.029999999,0},
										1
									},
									
									{
										{0.029544,0.00465},
										1
									},
									
									{
										{0.028191,0.0091607096},
										1
									},
									
									{
										{0.025979999,0.0133929},
										1
									},
									
									{
										{0.022980001,0.017217901},
										1
									},
									
									{
										{0.019284001,0.020517901},
										1
									},
									
									{
										{0.015,0.023196399},
										1
									},
									
									{
										{0.01026,0.025170499},
										1
									},
									
									{
										{0.0052080001,0.0263786},
										1
									},
									
									{
										{0,0.0267857},
										1
									},
									
									{
										{-0.0052080001,0.0263786},
										1
									},
									
									{
										{-0.01026,0.025170499},
										1
									},
									
									{
										{-0.015,0.023196399},
										1
									},
									
									{
										{-0.019284001,0.020517901},
										1
									},
									
									{
										{-0.022980001,0.017217901},
										1
									},
									
									{
										{-0.025979999,0.0133929},
										1
									},
									
									{
										{-0.028191,0.0091607096},
										1
									},
									
									{
										{-0.029544,0.00465},
										1
									},
									
									{
										{-0.029999999,0},
										1
									},
									
									{
										{-0.029544,-0.00465},
										1
									},
									
									{
										{-0.028191,-0.0091607096},
										1
									},
									
									{
										{-0.025979999,-0.0133929},
										1
									},
									
									{
										{-0.022980001,-0.017217901},
										1
									},
									
									{
										{-0.019284001,-0.020517901},
										1
									},
									
									{
										{-0.015,-0.023196399},
										1
									},
									
									{
										{-0.01026,-0.025170499},
										1
									},
									
									{
										{-0.0052080001,-0.0263786},
										1
									},
									
									{
										{0,-0.0267857},
										1
									},
									{},
									
									{
										{0.0212132,-0.0189404},
										1
									},
									
									{
										{-0.0212132,0.0189404},
										1
									},
									{},
									
									{
										{0.0212132,0.0189404},
										1
									},
									
									{
										{-0.0212132,-0.0189404},
										1
									},
									{}
								};
							};
						};
						class pointsHeli
						{
							class Draw
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										{0,0},
										1
									},
									
									{
										{0.0099999998,0.015},
										1
									},
									
									{
										{-0.0099999998,0.015},
										1
									},
									{},
									
									{
										{0,0},
										1
									},
									
									{
										{0.0099999998,-0.015},
										1
									},
									
									{
										{-0.0099999998,-0.015},
										1
									}
								};
							};
						};
						class pointsHeliEnemy
						{
							class Draw
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,0.015},
											1
										},
										
										{
											{-0.0099999998,0.015},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,-0.015},
											1
										},
										
										{
											{-0.0099999998,-0.015},
											1
										}
									}
								};
							};
						};
						class pointsHeliFriend
						{
							class Draw
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,0.015},
											1
										},
										
										{
											{-0.0099999998,0.015},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,-0.015},
											1
										},
										
										{
											{-0.0099999998,-0.015},
											1
										}
									}
								};
							};
							class DrawLine
							{
								type="line";
								width=4;
								points[]={};
							};
							class IFF_Text
							{
								type="text";
								source="static";
								text="ALLY";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0,0.0099999998},
									1
								};
								right[]=
								{
									{0.039999999,0.0099999998},
									1
								};
								down[]=
								{
									{0,0.050000001},
									1
								};
							};
						};
						class pointsLaser
						{
							class Draw
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										{0,-0.017857101},
										1
									},
									
									{
										{-1.74846e-009,0.017857101},
										1
									},
									{},
									
									{
										{0.02,7.80561e-010},
										1
									},
									
									{
										{-0.02,-2.12944e-010},
										1
									},
									{},
									
									{
										{0.0106066,-0.0094701797},
										1
									},
									
									{
										{-0.0106066,0.0094701797},
										1
									},
									{},
									
									{
										{0.0106066,0.0094701797},
										1
									},
									
									{
										{-0.0106066,-0.0094701797},
										1
									},
									{}
								};
							};
						};
						class pointsNVG: pointsLaser;  //found empty after stripping
						class pointsStatic
						{
							class Draw
							{
								type="polygon";
								width=4;
								points[]=
								{
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,0.015},
											1
										},
										
										{
											{-0.0099999998,0.015},
											1
										}
									}
								};
							};
						};
						class pointsStaticEnemy: pointsStatic;  //found empty after stripping
						class pointsStaticFriend: pointsStatic;  //found empty after stripping
						class pointsStaticCiv: pointsStatic;  //found empty after stripping
						class pointsStaticNeutral: pointsStatic;  //found empty after stripping
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0020000001,-0.00178571},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0020000001,-0.00178571},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0020000001,0.00178571},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0020000001,0.00178571},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0020000001,-0.00178571},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.017857101},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.017857101},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.017857101},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.017857101},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.017857101},
									1
								}
							};
						};
					};
				};
			};
			class MFD_1
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.029999999;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="rhsusf_digital_font_var";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					class UHF1_Text
					{
						type="text";
						source="static";
						text="UHF-1";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.13},
							1
						};
						right[]=
						{
							{0.11,0.13},
							1
						};
						down[]=
						{
							{0.039999999,0.2},
							1
						};
					};
					class UHF1_Text2
					{
						type="text";
						source="static";
						text=":";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.22},
							1
						};
						right[]=
						{
							{0.11,0.22},
							1
						};
						down[]=
						{
							{0.039999999,0.28999999},
							1
						};
					};
					class UHF1_Value
					{
						type="text";
						source="userText";
						sourceScale=1;
						sourceIndex=0;
						align="right";
						scale=1;
						pos[]=
						{
							{0.1,0.22},
							1
						};
						right[]=
						{
							{0.17,0.22},
							1
						};
						down[]=
						{
							{0.1,0.28999999},
							1
						};
					};
					class VHF1_Text
					{
						type="text";
						source="static";
						text="VHF-1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.13},
							1
						};
						right[]=
						{
							{1.03,0.13},
							1
						};
						down[]=
						{
							{0.95999998,0.2},
							1
						};
					};
					class VHF1_Text2
					{
						type="text";
						source="static";
						text=":";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.22},
							1
						};
						right[]=
						{
							{1.03,0.22},
							1
						};
						down[]=
						{
							{0.95999998,0.28999999},
							1
						};
					};
					class VHF1_Value
					{
						type="text";
						source="userText";
						sourceScale=1;
						sourceIndex=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.89999998,0.22},
							1
						};
						right[]=
						{
							{0.97000003,0.22},
							1
						};
						down[]=
						{
							{0.89999998,0.28999999},
							1
						};
					};
					class TCN_Text
					{
						type="text";
						source="static";
						text="TCN 004X T/R";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.49000001},
							1
						};
						right[]=
						{
							{0.11,0.49000001},
							1
						};
						down[]=
						{
							{0.039999999,0.56},
							1
						};
					};
					class ILS
					{
						condition="1-ils";
						class ILS_Text
						{
							type="text";
							source="static";
							text="ILS OFF";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.039999999,0.57999998},
								1
							};
							right[]=
							{
								{0.11,0.57999998},
								1
							};
							down[]=
							{
								{0.039999999,0.64999998},
								1
							};
						};
					};
					class ILS_Off
					{
						condition="ils";
						class ILS_Text
						{
							type="text";
							source="static";
							text="ILS ON";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.039999999,0.57999998},
								1
							};
							right[]=
							{
								{0.11,0.57999998},
								1
							};
							down[]=
							{
								{0.039999999,0.64999998},
								1
							};
						};
					};
					class STPT_Text
					{
						type="text";
						source="static";
						text="STPT 01/A";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.67000002},
							1
						};
						right[]=
						{
							{0.11,0.67000002},
							1
						};
						down[]=
						{
							{0.039999999,0.74000001},
							1
						};
					};
					class IFF_Text
					{
						type="text";
						source="static";
						text="IFF M3/A";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.75999999},
							1
						};
						right[]=
						{
							{0.11,0.75999999},
							1
						};
						down[]=
						{
							{0.039999999,0.82999998},
							1
						};
					};
					class IFF_Text2
					{
						type="text";
						source="static";
						text=" :";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.039999999,0.85000002},
							1
						};
						right[]=
						{
							{0.11,0.85000002},
							1
						};
						down[]=
						{
							{0.039999999,0.92000002},
							1
						};
					};
					class IDK_Text
					{
						type="text";
						source="static";
						text="DK 04";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.49000001},
							1
						};
						right[]=
						{
							{1.03,0.49000001},
							1
						};
						down[]=
						{
							{0.95999998,0.56},
							1
						};
					};
					class STR_Text
					{
						type="text";
						source="static";
						text="STR";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.57999998},
							1
						};
						right[]=
						{
							{1.03,0.57999998},
							1
						};
						down[]=
						{
							{0.95999998,0.64999998},
							1
						};
					};
					class AP_Text
					{
						type="text";
						source="static";
						text="A/P ON";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.67000002},
							1
						};
						right[]=
						{
							{1.03,0.67000002},
							1
						};
						down[]=
						{
							{0.95999998,0.74000001},
							1
						};
					};
					class CurrentTime
					{
						type="text";
						source="time";
						text="%X";
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								0.95999998,
								"0.13+0.09*7"
							},
							1
						};
						right[]=
						{
							
							{
								1.03,
								"0.13+0.09*7"
							},
							1
						};
						down[]=
						{
							{0.95999998,0.82999998},
							1
						};
					};
					class ING_Text
					{
						type="text";
						source="static";
						text="INS NAV";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.87},
							1
						};
						right[]=
						{
							{1.03,0.87},
							1
						};
						down[]=
						{
							{0.95999998,0.94},
							1
						};
					};
					class UHF_Text
					{
						type="text";
						source="static";
						text="UHF";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.25,0.94},
							1
						};
						right[]=
						{
							{0.31999999,0.94},
							1
						};
						down[]=
						{
							{0.25,1.01},
							1
						};
					};
					class VHF_Text
					{
						type="text";
						source="static";
						text="VHF";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.50999999,0.94},
							1
						};
						right[]=
						{
							{0.57999998,0.94},
							1
						};
						down[]=
						{
							{0.50999999,1.01},
							1
						};
					};
					class TIME_Text
					{
						type="text";
						source="static";
						text="TIME";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.75,0.94},
							1
						};
						right[]=
						{
							{0.81999999,0.94},
							1
						};
						down[]=
						{
							{0.75,1.01},
							1
						};
					};
				};
			};
			class MFD_2
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				enableParallax=0;
				font="rhsusf_digital_font_var";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0.34999999,0.47499999};
					};
					class Level0
					{
						pos0[]=
						{
							"0.498-0.15",
							0.47
						};
						pos10[]={0.838,0.91500002};
						type="horizon";
						angle=0;
					};
					class Level0_Background: Level0
					{
						pos0[]={0,0};
						pos10[]={0.68000001,0.88999999};
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
				};
				class Draw
				{
					condition="on";
					class HorizontBackground
					{
						color[]={0.1,0.30000001,0.69999999};
						alpha=0.80000001;
						clipTL[]={0.017999999,0.085000001};
						clipBR[]={0.69,0.88};
						class Static
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Level0",
										{-10,-19.99},
										1
									},
									
									{
										"Level0",
										{10,-19.99},
										1
									},
									
									{
										"Level0",
										{10,0.0100002},
										1
									},
									
									{
										"Level0",
										{-10,0.0100002},
										1
									}
								}
							};
						};
						class StaticBlack
						{
							color[]={0,0,0};
							alpha=1;
							class Static
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Level0",
											{-10,0.0099999998},
											1
										},
										
										{
											"Level0",
											{10,0.0099999998},
											1
										},
										
										{
											"Level0",
											{10,20.01},
											1
										},
										
										{
											"Level0",
											{-10,20.01},
											1
										}
									}
								};
							};
						};
						class HorizontWhite
						{
							color[]={0,0,0};
							alpha=0.89999998;
							class Dimmed
							{
								class Level0
								{
									type="line";
									width=7;
									points[]=
									{
										
										{
											"Level0",
											{0.25,0},
											1
										},
										
										{
											"Level0",
											{0.064999998,0},
											1
										},
										{},
										
										{
											"Level0",
											{-0.064999998,0},
											1
										},
										
										{
											"Level0",
											{-0.25,0},
											1
										}
									};
								};
							};
							class Level0
							{
								type="line";
								width=16;
								points[]={};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP5",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_5_R
							{
								type="text";
								source="static";
								text="5";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.19,0.033},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP10",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_10_R
							{
								type="text";
								source="static";
								text="10";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.19,0.033},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP15",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_15_R
							{
								type="text";
								source="static";
								text="15";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.19,0.033},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP20",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_20_R
							{
								type="text";
								source="static";
								text="20";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.19,0.033},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP25",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_25_R
							{
								type="text";
								source="static";
								text="25";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.19,0.033},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP30",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_30_R
							{
								type="text";
								source="static";
								text="30";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.19,0.033},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP35",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_35_R
							{
								type="text";
								source="static";
								text="35";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.19,0.033},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP40",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_40_R
							{
								type="text";
								source="static";
								text="40";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.19,0.033},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP45",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_45_R
							{
								type="text";
								source="static";
								text="45";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.19,0.033},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP50",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_50_R
							{
								type="text";
								source="static";
								text="50";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.19,0.033},
									1
								};
							};
							class LevelP60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP60",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP60",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_60
							{
								type="text";
								source="static";
								text="60";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_60_R
							{
								type="text";
								source="static";
								text="60";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{0.19,0.033},
									1
								};
							};
							class LevelP70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP70",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP70",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_70
							{
								type="text";
								source="static";
								text="70";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_70_R
							{
								type="text";
								source="static";
								text="70";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{0.19,0.033},
									1
								};
							};
							class LevelP80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP80",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP80",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_80
							{
								type="text";
								source="static";
								text="80";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_80_R
							{
								type="text";
								source="static";
								text="80";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{0.19,0.033},
									1
								};
							};
							class LevelP90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP90",
										
										{
											"-0.16-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"-0.16-0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											-0.059999999,
											"0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelP90",
										
										{
											0.059999999,
											"0.001*9"
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.16+0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.16+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_90
							{
								type="text";
								source="static";
								text="90";
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
									{-0.13,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{-0.19,0.033},
									1
								};
							};
							class VALP_1_90_R
							{
								type="text";
								source="static";
								text="90";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{0.19,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{0.25,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{0.19,0.033},
									1
								};
							};
						};
						class HorizontBlack
						{
							color[]={1,1,1};
							alpha=0.89999998;
							class Level0
							{
								type="line";
								width=7;
								points[]={};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM5",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM5",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM5",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM5",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM5",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM5",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM5",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM5",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM5",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM5",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM5",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_5_R
							{
								type="text";
								source="static";
								text=-5;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM10",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM10",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM10",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM10",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM10",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM10",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM10",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM10",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM10",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM10",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM10",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_10_R
							{
								type="text";
								source="static";
								text=-10;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM15",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM15",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM15",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM15",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM15",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM15",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM15",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM15",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM15",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM15",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM15",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_15_R
							{
								type="text";
								source="static";
								text=-15;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM20",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM20",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM20",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM20",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM20",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM20",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM20",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM20",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM20",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM20",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM20",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_20_R
							{
								type="text";
								source="static";
								text=-20;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM25",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM25",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM25",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM25",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM25",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM25",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM25",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM25",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM25",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM25",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM25",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_25_R
							{
								type="text";
								source="static";
								text=-25;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM30",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM30",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM30",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM30",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM30",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM30",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM30",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM30",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM30",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM30",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM30",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_30_R
							{
								type="text";
								source="static";
								text=-30;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM35",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM35",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM35",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM35",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM35",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM35",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM35",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM35",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM35",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM35",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM35",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_35_R
							{
								type="text";
								source="static";
								text=-35;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM40",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM40",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM40",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM40",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM40",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM40",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM40",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM40",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM40",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM40",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM40",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_40_R
							{
								type="text";
								source="static";
								text=-40;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM45",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM45",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM45",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM45",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM45",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM45",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM45",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM45",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM45",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM45",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM45",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_45_R
							{
								type="text";
								source="static";
								text=-45;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM50",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM50",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM50",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM50",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM50",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM50",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM50",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM50",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM50",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM50",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM50",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_50_R
							{
								type="text";
								source="static";
								text=-50;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM60",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM60",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM60",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM60",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM60",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM60",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM60",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM60",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM60",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM60",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM60",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM60",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_60
							{
								type="text";
								source="static";
								text=-60;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_60_R
							{
								type="text";
								source="static";
								text=-60;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM70",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM70",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM70",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM70",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM70",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM70",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM70",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM70",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM70",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM70",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM70",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM70",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_70
							{
								type="text";
								source="static";
								text=-70;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_70_R
							{
								type="text";
								source="static";
								text=-70;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM80",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM80",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM80",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM80",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM80",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM80",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM80",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM80",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM80",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM80",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM80",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM80",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_80
							{
								type="text";
								source="static";
								text=-80;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_80_R
							{
								type="text";
								source="static";
								text=-80;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{0.19,0.017999999},
									1
								};
							};
							class LevelM90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM90",
										{-0.175,-0.02},
										1
									},
									
									{
										"LevelM90",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											-0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM90",
										
										{
											-0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											-0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM90",
										
										{
											-0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											-0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM90",
										
										{
											-0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											-0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM90",
										
										{
											-0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											-0.039999999,
											"-0.001*9"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.175,-0.02},
										1
									},
									
									{
										"LevelM90",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											0.16,
											"-0.001*1"
										},
										1
									},
									
									{
										"LevelM90",
										
										{
											0.145,
											"-0.001*2"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											0.13,
											"-0.001*3"
										},
										1
									},
									
									{
										"LevelM90",
										
										{
											0.115,
											"-0.001*4"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											0.1,
											"-0.001*5"
										},
										1
									},
									
									{
										"LevelM90",
										
										{
											0.085000001,
											"-0.001*6"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											0.07,
											"-0.001*7"
										},
										1
									},
									
									{
										"LevelM90",
										
										{
											0.055,
											"-0.001*8"
										},
										1
									},
									{},
									
									{
										"LevelM90",
										
										{
											0.039999999,
											"-0.001*9"
										},
										1
									}
								};
							};
							class VALM_1_90
							{
								type="text";
								source="static";
								text=-90;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{-0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{-0.13,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{-0.19,0.017999999},
									1
								};
							};
							class VALM_1_90_R
							{
								type="text";
								source="static";
								text=-90;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{0.19,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{0.25,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{0.19,0.017999999},
									1
								};
							};
						};
					};
					class BlackBackground
					{
						color[]={0,0,0};
						class Static
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.0099999998,0.079999998},
										1
									},
									
									{
										{0.18000001,0.079999998},
										1
									},
									
									{
										{0.18000001,0.25},
										1
									},
									
									{
										{0.0099999998,0.25},
										1
									}
								},
								
								{
									
									{
										{0.27000001,0.079999998},
										1
									},
									
									{
										{0.41,0.079999998},
										1
									},
									
									{
										{0.41,0.17},
										1
									},
									
									{
										{0.27000001,0.17},
										1
									}
								},
								
								{
									
									{
										{0.50999999,0.079999998},
										1
									},
									
									{
										{0.69,0.079999998},
										1
									},
									
									{
										{0.69,0.25},
										1
									},
									
									{
										{0.50999999,0.25},
										1
									}
								},
								
								{
									
									{
										{0.0099999998,0.41999999},
										1
									},
									
									{
										{0.14,0.41999999},
										1
									},
									
									{
										{0.14,0.52999997},
										1
									},
									
									{
										{0.0099999998,0.52999997},
										1
									}
								},
								
								{
									
									{
										{0.50999999,0.41999999},
										1
									},
									
									{
										{0.69,0.41999999},
										1
									},
									
									{
										{0.69,0.52999997},
										1
									},
									
									{
										{0.50999999,0.52999997},
										1
									}
								},
								
								{
									
									{
										{0.51999998,0.79000002},
										1
									},
									
									{
										{0.69,0.79000002},
										1
									},
									
									{
										{0.69,0.88},
										1
									},
									
									{
										{0.51999998,0.88},
										1
									}
								}
							};
						};
					};
					class HeadingText
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						refreshRate=0.1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.28999999,0.090000004},
							1
						};
						right[]=
						{
							{0.36000001,0.090000004},
							1
						};
						down[]=
						{
							{0.28999999,0.16},
							1
						};
					};
					class Green
					{
						color[]={0.15000001,1,0.15000001,1};
						class Throttle1
						{
							type="text";
							source="throttle";
							sourceScale=100;
							sourceLength=1;
							refreshRate=0.07;
							align="left";
							scale=1;
							pos[]=
							{
								{0.12,0.090000004},
								1
							};
							right[]=
							{
								{0.17,0.090000004},
								1
							};
							down[]=
							{
								{0.12,0.16},
								1
							};
						};
						class Throttle1Static_Text
						{
							type="text";
							source="static";
							text="%";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.14,0.090000004},
								1
							};
							right[]=
							{
								{0.19,0.090000004},
								1
							};
							down[]=
							{
								{0.14,0.16},
								1
							};
						};
						class Throttle2
						{
							type="text";
							source="throttle";
							sourceScale=100;
							sourceLength=1;
							refreshRate=0.07;
							align="left";
							scale=1;
							pos[]=
							{
								{0.62,0.090000004},
								1
							};
							right[]=
							{
								{0.67000002,0.090000004},
								1
							};
							down[]=
							{
								{0.62,0.16},
								1
							};
						};
						class Throttle2Static_Text
						{
							type="text";
							source="static";
							text="%";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.63999999,0.090000004},
								1
							};
							right[]=
							{
								{0.69,0.090000004},
								1
							};
							down[]=
							{
								{0.63999999,0.16},
								1
							};
						};
						class temp1
						{
							type="text";
							source="rpm";
							sourceScale=645;
							sourceLength=1;
							refreshRate=0.07;
							align="left";
							scale=1;
							pos[]=
							{
								{0.12,0.17},
								1
							};
							right[]=
							{
								{0.17,0.17},
								1
							};
							down[]=
							{
								{0.12,0.23999999},
								1
							};
						};
						class temp1Static_Text
						{
							type="text";
							source="static";
							text="o";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.14,0.15000001},
								1
							};
							right[]=
							{
								{0.19,0.15000001},
								1
							};
							down[]=
							{
								{0.14,0.22},
								1
							};
						};
						class temp2
						{
							type="text";
							source="rpm";
							sourceScale=673;
							sourceLength=1;
							refreshRate=0.07;
							align="left";
							scale=1;
							pos[]=
							{
								{0.62,0.17},
								1
							};
							right[]=
							{
								{0.67000002,0.17},
								1
							};
							down[]=
							{
								{0.62,0.23999999},
								1
							};
						};
						class temp2Static_Text
						{
							type="text";
							source="static";
							text="o";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.63999999,0.15000001},
								1
							};
							right[]=
							{
								{0.69,0.15000001},
								1
							};
							down[]=
							{
								{0.63999999,0.22},
								1
							};
						};
						class BaroStatic_Text
						{
							type="text";
							source="static";
							text="BARO";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.059999999,0.88999999},
								1
							};
							right[]=
							{
								{0.12,0.88999999},
								1
							};
							down[]=
							{
								{0.059999999,0.95999998},
								1
							};
						};
						class BaroSource_Text
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							sourcePrecision=1;
							sourceOffset=-2.5;
							sourceLength=5;
							refreshRate=0.07;
							align="right";
							scale=1;
							pos[]=
							{
								{0.2,0.88999999},
								1
							};
							right[]=
							{
								{0.25,0.88999999},
								1
							};
							down[]=
							{
								{0.2,0.95999998},
								1
							};
						};
						class Cord_Text
						{
							type="text";
							source="static";
							text="POS:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.40000001,0.88999999},
								1
							};
							right[]=
							{
								{0.44999999,0.88999999},
								1
							};
							down[]=
							{
								{0.40000001,0.95999998},
								1
							};
						};
						class CordX
						{
							type="text";
							source="coordinateX";
							sourceScale=0.0099999998;
							sourceLength=3;
							sourceOffset=-0.5;
							align="right";
							scale=1;
							pos[]=
							{
								{0.5,0.88999999},
								1
							};
							right[]=
							{
								{0.55000001,0.88999999},
								1
							};
							down[]=
							{
								{0.5,0.95999998},
								1
							};
						};
						class CordY: CordX
						{
							source="coordinateY";
							pos[]=
							{
								
								{
									"0.5+0.07",
									0.88999999
								},
								1
							};
							right[]=
							{
								{0.62,0.88999999},
								1
							};
							down[]=
							{
								
								{
									"0.5+0.07",
									0.95999998
								},
								1
							};
						};
						class FuelRemaining_Text
						{
							type="text";
							source="static";
							text="I:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.73000002,0.090000004},
								1
							};
							right[]=
							{
								{0.79000002,0.090000004},
								1
							};
							down[]=
							{
								{0.73000002,0.17},
								1
							};
						};
						class FuelRemaining_Source
						{
							type="text";
							source="fuel";
							sourceScale=20;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.79000002,0.090000004},
								1
							};
							right[]=
							{
								{0.85000002,0.090000004},
								1
							};
							down[]=
							{
								{0.79000002,0.17},
								1
							};
						};
						class TimeRemaining_Text
						{
							type="text";
							source="static";
							text="T:";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.73000002,0.17},
								1
							};
							right[]=
							{
								{0.79000002,0.17},
								1
							};
							down[]=
							{
								{0.73000002,0.25},
								1
							};
						};
						class TimeRemaining_Source
						{
							type="text";
							source="fuel";
							sourceScale=2.4000001;
							sourcePrecision=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.79000002,0.17},
								1
							};
							right[]=
							{
								{0.85000002,0.17},
								1
							};
							down[]=
							{
								{0.79000002,0.25},
								1
							};
						};
						class FuelSt20_Text
						{
							type="text";
							source="static";
							text="20";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.92000002,0.27000001},
								1
							};
							right[]=
							{
								{0.98000002,0.27000001},
								1
							};
							down[]=
							{
								{0.92000002,0.33000001},
								1
							};
						};
						class FuelSt10_Text
						{
							type="text";
							source="static";
							text="10";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.92000002,0.46000001},
								1
							};
							right[]=
							{
								{0.98000002,0.46000001},
								1
							};
							down[]=
							{
								{0.92000002,0.51999998},
								1
							};
						};
						class FuelSt8_Text
						{
							type="text";
							source="static";
							text="8";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.92000002,0.55000001},
								1
							};
							right[]=
							{
								{0.98000002,0.55000001},
								1
							};
							down[]=
							{
								{0.92000002,0.61000001},
								1
							};
						};
						class FuelSt6_Text
						{
							type="text";
							source="static";
							text="6";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.92000002,0.64999998},
								1
							};
							right[]=
							{
								{0.98000002,0.64999998},
								1
							};
							down[]=
							{
								{0.92000002,0.70999998},
								1
							};
						};
						class FuelSt4_Text
						{
							type="text";
							source="static";
							text="4";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.92000002,0.75},
								1
							};
							right[]=
							{
								{0.98000002,0.75},
								1
							};
							down[]=
							{
								{0.92000002,0.81},
								1
							};
						};
						class FuelSt2_Text
						{
							type="text";
							source="static";
							text="2";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.92000002,0.81999999},
								1
							};
							right[]=
							{
								{0.98000002,0.81999999},
								1
							};
							down[]=
							{
								{0.92000002,0.88},
								1
							};
						};
					};
					class SpeedSource
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						refreshRate=0.1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.44},
							1
						};
						right[]=
						{
							{0.1,0.44},
							1
						};
						down[]=
						{
							{0.029999999,0.51999998},
							1
						};
					};
					class RadarHeightSource
					{
						type="text";
						source="speed";
						sourceScale=1;
						sourceLength=5;
						refreshRate=0.1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.68000001,0.44},
							1
						};
						right[]=
						{
							{0.75,0.44},
							1
						};
						down[]=
						{
							{0.68000001,0.51999998},
							1
						};
					};
					class ClimbSource
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						sourceLength=3;
						refreshRate=0.1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.68000001,0.80000001},
							1
						};
						right[]=
						{
							{0.75,0.80000001},
							1
						};
						down[]=
						{
							{0.68000001,0.88},
							1
						};
					};
					class StaticDraw
					{
						type="line";
						width=10;
						points[]=
						{
							
							{
								"Center",
								{0,-0.039264701},
								1
							},
							
							{
								"Center",
								{0.0052080001,-0.038667899},
								1
							},
							
							{
								"Center",
								{0.01026,-0.036897},
								1
							},
							
							{
								"Center",
								{0.015,-0.034003198},
								1
							},
							
							{
								"Center",
								{0.019284001,-0.0300768},
								1
							},
							
							{
								"Center",
								{0.022980001,-0.025239401},
								1
							},
							
							{
								"Center",
								{0.025979999,-0.019632399},
								1
							},
							
							{
								"Center",
								{0.028191,-0.0134285},
								1
							},
							
							{
								"Center",
								{0.029544,-0.0068163499},
								1
							},
							
							{
								"Center",
								{0.029999999,0},
								1
							},
							
							{
								"Center",
								{0.029544,0.0068163499},
								1
							},
							
							{
								"Center",
								{0.028191,0.0134285},
								1
							},
							
							{
								"Center",
								{0.025979999,0.019632399},
								1
							},
							
							{
								"Center",
								{0.022980001,0.025239401},
								1
							},
							
							{
								"Center",
								{0.019284001,0.0300768},
								1
							},
							
							{
								"Center",
								{0.015,0.034003198},
								1
							},
							
							{
								"Center",
								{0.01026,0.036897},
								1
							},
							
							{
								"Center",
								{0.0052080001,0.038667899},
								1
							},
							
							{
								"Center",
								{0,0.039264701},
								1
							},
							
							{
								"Center",
								{-0.0052080001,0.038667899},
								1
							},
							
							{
								"Center",
								{-0.01026,0.036897},
								1
							},
							
							{
								"Center",
								{-0.015,0.034003198},
								1
							},
							
							{
								"Center",
								{-0.019284001,0.0300768},
								1
							},
							
							{
								"Center",
								{-0.022980001,0.025239401},
								1
							},
							
							{
								"Center",
								{-0.025979999,0.019632399},
								1
							},
							
							{
								"Center",
								{-0.028191,0.0134285},
								1
							},
							
							{
								"Center",
								{-0.029544,0.0068163499},
								1
							},
							
							{
								"Center",
								{-0.029999999,0},
								1
							},
							
							{
								"Center",
								{-0.029544,-0.0068163499},
								1
							},
							
							{
								"Center",
								{-0.028191,-0.0134285},
								1
							},
							
							{
								"Center",
								{-0.025979999,-0.019632399},
								1
							},
							
							{
								"Center",
								{-0.022980001,-0.025239401},
								1
							},
							
							{
								"Center",
								{-0.019284001,-0.0300768},
								1
							},
							
							{
								"Center",
								{-0.015,-0.034003198},
								1
							},
							
							{
								"Center",
								{-0.01026,-0.036897},
								1
							},
							
							{
								"Center",
								{-0.0052080001,-0.038667899},
								1
							},
							
							{
								"Center",
								{0,-0.039264701},
								1
							}
						};
					};
				};
			};
			class MFD_3
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					class Rpm1Source
					{
						type="text";
						source="rpm";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.30000001,0.13500001},
							1
						};
						right[]=
						{
							{0.34,0.13500001},
							1
						};
						down[]=
						{
							{0.30000001,0.175},
							1
						};
					};
					class Rpm2Source: Rpm1Source
					{
						pos[]=
						{
							{0.63999999,0.13500001},
							1
						};
						right[]=
						{
							{0.68000001,0.13500001},
							1
						};
						down[]=
						{
							{0.63999999,0.175},
							1
						};
					};
					class EGT1Source
					{
						type="text";
						source="rpm";
						sourceScale=380;
						align="left";
						scale=1;
						pos[]=
						{
							{0.30000001,0.28999999},
							1
						};
						right[]=
						{
							{0.34,0.28999999},
							1
						};
						down[]=
						{
							{0.30000001,0.33000001},
							1
						};
					};
					class EGT2Source: EGT1Source
					{
						pos[]=
						{
							{0.63999999,0.28999999},
							1
						};
						right[]=
						{
							{0.68000001,0.28999999},
							1
						};
						down[]=
						{
							{0.63999999,0.33000001},
							1
						};
					};
					class noz1Source
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="center";
						scale=1;
						pos[]=
						{
							{0.33000001,0.47499999},
							1
						};
						right[]=
						{
							{0.36000001,0.47499999},
							1
						};
						down[]=
						{
							{0.33000001,0.505},
							1
						};
					};
					class noz2Source: noz1Source
					{
						pos[]=
						{
							{0.66000003,0.47499999},
							1
						};
						right[]=
						{
							{0.69,0.47499999},
							1
						};
						down[]=
						{
							{0.66000003,0.505},
							1
						};
					};
					class oil1Source
					{
						type="text";
						source="rpm";
						sourceScale=235;
						align="left";
						scale=1;
						pos[]=
						{
							{0.31,0.57999998},
							1
						};
						right[]=
						{
							{0.34999999,0.57999998},
							1
						};
						down[]=
						{
							{0.31,0.62},
							1
						};
					};
					class oil2Source: oil1Source
					{
						pos[]=
						{
							{0.64999998,0.57999998},
							1
						};
						right[]=
						{
							{0.69,0.57999998},
							1
						};
						down[]=
						{
							{0.64999998,0.62},
							1
						};
					};
					class hyd1Source
					{
						type="text";
						source="rpm";
						sourceScale=210;
						align="left";
						scale=1;
						pos[]=
						{
							{0.13,0.81},
							1
						};
						right[]=
						{
							{0.16,0.81},
							1
						};
						down[]=
						{
							{0.13,0.83999997},
							1
						};
					};
					class hyd2Source: hyd1Source
					{
						pos[]=
						{
							{0.38,0.81},
							1
						};
						right[]=
						{
							{0.41,0.81},
							1
						};
						down[]=
						{
							{0.38,0.83999997},
							1
						};
					};
					class FuelLeftSource
					{
						type="text";
						source="fuel";
						sourceScale=2000;
						align="left";
						scale=1;
						pos[]=
						{
							{0.80000001,0.92000002},
							1
						};
						right[]=
						{
							{0.85000002,0.92000002},
							1
						};
						down[]=
						{
							{0.80000001,0.97000003},
							1
						};
					};
				};
			};
			class MFD_4
			{
				topLeft="MFD_4_TL";
				topRight="MFD_4_TR";
				bottomLeft="MFD_4_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						type="fixed";
						pos[]={0,0.33000001};
					};
					class Static_Offset
					{
						type="fixed";
						pos[]={0.5,0.85000002};
					};
					class Static_Offset2: Static_Offset
					{
						pos[]={0.5,0.82999998};
					};
					class Rotation_0
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0,0};
						type="rotational";
						source="heading";
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1;
					};
					class Rotation_10: Rotation_0
					{
						minAngle=10;
						maxAngle=-350;
					};
					class Rotation_20: Rotation_0
					{
						minAngle=20;
						maxAngle=-340;
					};
					class Rotation_30: Rotation_0
					{
						minAngle=30;
						maxAngle=-330;
					};
					class Rotation_40: Rotation_0
					{
						minAngle=40;
						maxAngle=-320;
					};
					class Rotation_50: Rotation_0
					{
						minAngle=50;
						maxAngle=-310;
					};
					class Rotation_60: Rotation_0
					{
						minAngle=60;
						maxAngle=-300;
					};
					class Rotation_70: Rotation_0
					{
						minAngle=70;
						maxAngle=-290;
					};
					class Rotation_80: Rotation_0
					{
						minAngle=80;
						maxAngle=-280;
					};
					class Rotation_90: Rotation_0
					{
						minAngle=90;
						maxAngle=-270;
					};
					class Rotation_100: Rotation_0
					{
						minAngle=100;
						maxAngle=-260;
					};
					class Rotation_110: Rotation_0
					{
						minAngle=110;
						maxAngle=-250;
					};
					class Rotation_120: Rotation_0
					{
						minAngle=120;
						maxAngle=-240;
					};
					class Rotation_130: Rotation_0
					{
						minAngle=130;
						maxAngle=-230;
					};
					class Rotation_140: Rotation_0
					{
						minAngle=140;
						maxAngle=-220;
					};
					class Rotation_150: Rotation_0
					{
						minAngle=150;
						maxAngle=-210;
					};
					class Rotation_160: Rotation_0
					{
						minAngle=160;
						maxAngle=-200;
					};
					class Rotation_170: Rotation_0
					{
						minAngle=170;
						maxAngle=-190;
					};
					class Rotation_180: Rotation_0
					{
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_190: Rotation_0
					{
						minAngle=190;
						maxAngle=-170;
					};
					class Rotation_200: Rotation_0
					{
						minAngle=200;
						maxAngle=-160;
					};
					class Rotation_210: Rotation_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_220: Rotation_0
					{
						minAngle=220;
						maxAngle=-140;
					};
					class Rotation_230: Rotation_0
					{
						minAngle=230;
						maxAngle=-130;
					};
					class Rotation_240: Rotation_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_250: Rotation_0
					{
						minAngle=250;
						maxAngle=-110;
					};
					class Rotation_260: Rotation_0
					{
						minAngle=260;
						maxAngle=-100;
					};
					class Rotation_270: Rotation_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_280: Rotation_0
					{
						minAngle=280;
						maxAngle=-80;
					};
					class Rotation_290: Rotation_0
					{
						minAngle=290;
						maxAngle=-70;
					};
					class Rotation_300: Rotation_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_310: Rotation_0
					{
						minAngle=310;
						maxAngle=-50;
					};
					class Rotation_320: Rotation_0
					{
						minAngle=320;
						maxAngle=-40;
					};
					class Rotation_330: Rotation_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_340: Rotation_0
					{
						minAngle=340;
						maxAngle=-20;
					};
					class Rotation_350: Rotation_0
					{
						minAngle=350;
						maxAngle=-10;
					};
					class Rotation_Inv_0: Rotation_0
					{
						min=0;
						max=360;
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_Inv_30: Rotation_Inv_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_Inv_60: Rotation_Inv_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_Inv_90: Rotation_Inv_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_Inv_120: Rotation_Inv_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_Inv_150: Rotation_Inv_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_Inv_180: Rotation_Inv_0
					{
						minAngle=360;
						maxAngle=0;
					};
					class Rotation_Inv_210: Rotation_Inv_0
					{
						minAngle=390;
						maxAngle=30;
					};
					class Rotation_Inv_240: Rotation_Inv_0
					{
						minAngle=420;
						maxAngle=60;
					};
					class Rotation_Inv_270: Rotation_Inv_0
					{
						minAngle=450;
						maxAngle=90;
					};
					class Rotation_Inv_300: Rotation_Inv_0
					{
						minAngle=480;
						maxAngle=120;
					};
					class Rotation_Inv_330: Rotation_Inv_0
					{
						minAngle=510;
						maxAngle=150;
					};
					class MovementY
					{
						type="linear";
						source="user";
						sourceIndex=5;
						refreshRate=0.1;
						min=0;
						max=1;
						sourceScale=1;
						maxPos[]={0,10};
						minPos[]={0,-10};
					};
					class MovementX: MovementY
					{
						sourceIndex=4;
						maxPos[]={-10,0};
						minPos[]={10,0};
					};
					class PlaneDirection
					{
						type="rotational";
						source="heading";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=360;
						minAngle=0;
						maxAngle=360;
						aspectRatio=1.02865;
					};
					class WP1_PosX: MovementX
					{
						sourceIndex=6;
					};
					class WP1_PosY: MovementY
					{
						sourceIndex=7;
					};
					class WP2_PosX: MovementX
					{
						sourceIndex=8;
					};
					class WP2_PosY: MovementY
					{
						sourceIndex=9;
					};
					class WP3_PosX: MovementX
					{
						sourceIndex=10;
					};
					class WP3_PosY: MovementY
					{
						sourceIndex=11;
					};
					class WP4_PosX: MovementX
					{
						sourceIndex=12;
					};
					class WP4_PosY: MovementY
					{
						sourceIndex=13;
					};
					class WP5_PosX: MovementX
					{
						sourceIndex=14;
					};
					class WP5_PosY: MovementY
					{
						sourceIndex=15;
					};
					class WP6_PosX: MovementX
					{
						sourceIndex=16;
					};
					class WP6_PosY: MovementY
					{
						sourceIndex=17;
					};
					class WP7_PosX: MovementX
					{
						sourceIndex=18;
					};
					class WP7_PosY: MovementY
					{
						sourceIndex=19;
					};
					class WP8_PosX: MovementX
					{
						sourceIndex=20;
					};
					class WP8_PosY: MovementY
					{
						sourceIndex=21;
					};
					class WP9_PosX: MovementX
					{
						sourceIndex=22;
					};
					class WP9_PosY: MovementY
					{
						sourceIndex=23;
					};
					class WP10_PosX: MovementX
					{
						sourceIndex=24;
					};
					class WP10_PosY: MovementY
					{
						sourceIndex=25;
					};
				};
				class Draw
				{
					condition="on";
					alpha=0.30000001;
					color[]={0,0.029999999,0.17};
					class Draw_Static
					{
						type="line";
						width=10;
						points[]=
						{
							
							{
								"Static_Offset",
								{0,-0.69947898},
								1
							},
							
							{
								"Static_Offset",
								{0.118048,-0.68884701},
								1
							},
							
							{
								"Static_Offset",
								{0.23255999,-0.65730101},
								1
							},
							
							{
								"Static_Offset",
								{0.34,-0.60574901},
								1
							},
							
							{
								"Static_Offset",
								{0.43710399,-0.53580099},
								1
							},
							
							{
								"Static_Offset",
								{0.52087998,-0.44962499},
								1
							},
							
							{
								"Static_Offset",
								{0.58888,-0.34974},
								1
							},
							
							{
								"Static_Offset",
								{0.63899601,-0.23922201},
								1
							},
							
							{
								"Static_Offset",
								{0.66966403,-0.12143},
								1
							},
							
							{
								"Static_Offset",
								{0.68000001,0},
								1
							},
							
							{
								"Static_Offset",
								{0.66966403,0.12143},
								1
							},
							
							{
								"Static_Offset",
								{0.63899601,0.23922201},
								1
							},
							
							{
								"Static_Offset",
								{0.58888,0.34974},
								1
							},
							
							{
								"Static_Offset",
								{0.52087998,0.44962499},
								1
							},
							
							{
								"Static_Offset",
								{0.43710399,0.53580099},
								1
							},
							
							{
								"Static_Offset",
								{0.34,0.60574901},
								1
							},
							
							{
								"Static_Offset",
								{0.23255999,0.65730101},
								1
							},
							
							{
								"Static_Offset",
								{0.118048,0.68884701},
								1
							},
							
							{
								"Static_Offset",
								{0,0.69947898},
								1
							},
							
							{
								"Static_Offset",
								{-0.118048,0.68884701},
								1
							},
							
							{
								"Static_Offset",
								{-0.23255999,0.65730101},
								1
							},
							
							{
								"Static_Offset",
								{-0.34,0.60574901},
								1
							},
							
							{
								"Static_Offset",
								{-0.43710399,0.53580099},
								1
							},
							
							{
								"Static_Offset",
								{-0.52087998,0.44962499},
								1
							},
							
							{
								"Static_Offset",
								{-0.58888,0.34974},
								1
							},
							
							{
								"Static_Offset",
								{-0.63899601,0.23922201},
								1
							},
							
							{
								"Static_Offset",
								{-0.66966403,0.12143},
								1
							},
							
							{
								"Static_Offset",
								{-0.68000001,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.66966403,-0.12143},
								1
							},
							
							{
								"Static_Offset",
								{-0.63899601,-0.23922201},
								1
							},
							
							{
								"Static_Offset",
								{-0.58888,-0.34974},
								1
							},
							
							{
								"Static_Offset",
								{-0.52087998,-0.44962499},
								1
							},
							
							{
								"Static_Offset",
								{-0.43710399,-0.53580099},
								1
							},
							
							{
								"Static_Offset",
								{-0.34,-0.60574901},
								1
							},
							
							{
								"Static_Offset",
								{-0.23255999,-0.65730101},
								1
							},
							
							{
								"Static_Offset",
								{-0.118048,-0.68884701},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.69947898},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.34974},
								1
							},
							
							{
								"Static_Offset",
								{0.059023999,-0.34442401},
								1
							},
							
							{
								"Static_Offset",
								{0.11628,-0.32865},
								1
							},
							
							{
								"Static_Offset",
								{0.17,-0.302874},
								1
							},
							
							{
								"Static_Offset",
								{0.21855199,-0.267901},
								1
							},
							
							{
								"Static_Offset",
								{0.26043999,-0.224813},
								1
							},
							
							{
								"Static_Offset",
								{0.29444,-0.17487},
								1
							},
							
							{
								"Static_Offset",
								{0.319498,-0.119611},
								1
							},
							
							{
								"Static_Offset",
								{0.33483201,-0.0607148},
								1
							},
							
							{
								"Static_Offset",
								{0.34,0},
								1
							},
							
							{
								"Static_Offset",
								{0.33483201,0.0607148},
								1
							},
							
							{
								"Static_Offset",
								{0.319498,0.119611},
								1
							},
							
							{
								"Static_Offset",
								{0.29444,0.17487},
								1
							},
							
							{
								"Static_Offset",
								{0.26043999,0.224813},
								1
							},
							
							{
								"Static_Offset",
								{0.21855199,0.267901},
								1
							},
							
							{
								"Static_Offset",
								{0.17,0.302874},
								1
							},
							
							{
								"Static_Offset",
								{0.11628,0.32865},
								1
							},
							
							{
								"Static_Offset",
								{0.059023999,0.34442401},
								1
							},
							
							{
								"Static_Offset",
								{0,0.34974},
								1
							},
							
							{
								"Static_Offset",
								{-0.059023999,0.34442401},
								1
							},
							
							{
								"Static_Offset",
								{-0.11628,0.32865},
								1
							},
							
							{
								"Static_Offset",
								{-0.17,0.302874},
								1
							},
							
							{
								"Static_Offset",
								{-0.21855199,0.267901},
								1
							},
							
							{
								"Static_Offset",
								{-0.26043999,0.224813},
								1
							},
							
							{
								"Static_Offset",
								{-0.29444,0.17487},
								1
							},
							
							{
								"Static_Offset",
								{-0.319498,0.119611},
								1
							},
							
							{
								"Static_Offset",
								{-0.33483201,0.0607148},
								1
							},
							
							{
								"Static_Offset",
								{-0.34,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.33483201,-0.0607148},
								1
							},
							
							{
								"Static_Offset",
								{-0.319498,-0.119611},
								1
							},
							
							{
								"Static_Offset",
								{-0.29444,-0.17487},
								1
							},
							
							{
								"Static_Offset",
								{-0.26043999,-0.224813},
								1
							},
							
							{
								"Static_Offset",
								{-0.21855199,-0.267901},
								1
							},
							
							{
								"Static_Offset",
								{-0.17,-0.302874},
								1
							},
							
							{
								"Static_Offset",
								{-0.11628,-0.32865},
								1
							},
							
							{
								"Static_Offset",
								{-0.059023999,-0.34442401},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.34974},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.69999999},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.75999999},
								1
							},
							
							{
								"Static_Offset",
								{0.07,-0.75999999},
								1
							},
							
							{
								"Static_Offset",
								{0.07,-0.82999998},
								1
							},
							
							{
								"Static_Offset",
								{-0.07,-0.82999998},
								1
							},
							
							{
								"Static_Offset",
								{-0.07,-0.75999999},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.75999999},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_0",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_0",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_10",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_10",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_20",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_20",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_30",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_30",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_40",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_40",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_50",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_50",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_60",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_60",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_70",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_70",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_80",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_80",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_90",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_90",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_100",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_100",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_110",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_110",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_120",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_120",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_130",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_130",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_140",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_140",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_150",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_150",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_160",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_160",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_170",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_170",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_180",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_180",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_190",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_190",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_200",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_200",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_210",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_210",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_220",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_220",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_230",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_230",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_240",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_240",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_250",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_250",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_260",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_260",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_270",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_270",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_280",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_280",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_290",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_290",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_300",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_300",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_310",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_310",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_320",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_320",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_330",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_330",
									0,
									0.65499997
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_340",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_340",
									0,
									0.67000002
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_350",
									0,
									0.69499999
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_350",
									0,
									0.67000002
								},
								1
							},
							{},
							{}
						};
					};
					class Rotation_0_Text
					{
						type="text";
						source="static";
						text="N";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_0",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_0",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_0",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_30_Text
					{
						type="text";
						source="static";
						text="03";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_30",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_30",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_30",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_60_Text
					{
						type="text";
						source="static";
						text="06";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_60",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_60",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_60",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_90_Text
					{
						type="text";
						source="static";
						text="E";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_90",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_90",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_90",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_120_Text
					{
						type="text";
						source="static";
						text="12";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_120",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_120",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_120",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_150_Text
					{
						type="text";
						source="static";
						text="15";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_150",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_150",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_150",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_180_Text
					{
						type="text";
						source="static";
						text="S";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_180",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_180",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_180",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_210_Text
					{
						type="text";
						source="static";
						text="21";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_210",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_210",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_210",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_240_Text
					{
						type="text";
						source="static";
						text="24";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_240",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_240",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_240",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_270_Text
					{
						type="text";
						source="static";
						text="W";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_270",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_270",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_270",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_300_Text
					{
						type="text";
						source="static";
						text="30";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_300",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_300",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_300",
								0,
								-0.60000002
							},
							1
						};
					};
					class Rotation_330_Text
					{
						type="text";
						source="static";
						text="33";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_330",
								0,
								-0.64999998
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_330",
								-0.039999999,
								-0.64999998
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_330",
								0,
								-0.60000002
							},
							1
						};
					};
					class BackgroundBlack
					{
						color[]={0,0,0};
						alpha=1;
						class Static
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.68000001,0.55000001},
										1
									},
									
									{
										{0.75,0.55000001},
										1
									},
									
									{
										{0.75,0.60000002},
										1
									},
									
									{
										{0.68000001,0.60000002},
										1
									}
								},
								
								{
									
									{
										{0.82999998,0.2},
										1
									},
									
									{
										{0.92000002,0.2},
										1
									},
									
									{
										{0.92000002,0.30000001},
										1
									},
									
									{
										{0.82999998,0.30000001},
										1
									}
								}
							};
						};
					};
					class Draw_White
					{
						color[]={1,1,1};
						class HeadingText
						{
							type="text";
							source="heading";
							sourceScale=1;
							sourceLength=3;
							refreshRate=0.1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.029999999},
								1
							};
							right[]=
							{
								{0.56,0.029999999},
								1
							};
							down[]=
							{
								{0.5,0.090000004},
								1
							};
						};
						class Range_Text
						{
							type="text";
							source="static";
							text="36";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.92000002,0.23},
								1
							};
							right[]=
							{
								{0.99000001,0.23},
								1
							};
							down[]=
							{
								{0.92000002,0.30000001},
								1
							};
						};
						class MFlare_Text
						{
							type="text";
							source="static";
							text="LPE4";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.86000001,0.029999999},
								1
							};
							right[]=
							{
								{0.91000003,0.029999999},
								1
							};
							down[]=
							{
								{0.86000001,0.079999998},
								1
							};
						};
						class RangesData1_Text
						{
							type="text";
							source="static";
							text="346/97";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.0099999998,0.07},
								1
							};
							right[]=
							{
								{0.050000001,0.07},
								1
							};
							down[]=
							{
								{0.0099999998,0.11},
								1
							};
						};
						class Pos_Text
						{
							type="text";
							source="static";
							text="GRID";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.79000002,0.83999997},
								1
							};
							right[]=
							{
								{0.82999998,0.83999997},
								1
							};
							down[]=
							{
								{0.79000002,0.88},
								1
							};
						};
						class CordX
						{
							type="text";
							source="coordinateX";
							sourceScale=0.0099999998;
							sourceLength=3;
							sourceOffset=-0.5;
							align="right";
							scale=1;
							pos[]=
							{
								{0.79000002,0.88},
								1
							};
							right[]=
							{
								{0.82999998,0.88},
								1
							};
							down[]=
							{
								{0.79000002,0.92000002},
								1
							};
						};
						class CordY: CordX
						{
							source="coordinateY";
							pos[]=
							{
								
								{
									"0.79+0.07",
									0.88
								},
								1
							};
							right[]=
							{
								{0.89999998,0.88},
								1
							};
							down[]=
							{
								
								{
									"0.79+0.07",
									0.92000002
								},
								1
							};
						};
						class WP
						{
							condition="wpvalid";
							class WPdist
							{
								type="text";
								source="wpdist";
								sourceScale=0.001;
								sourcePrecision=1;
								align="left";
								scale=1;
								pos[]=
								{
									
									{
										"0.79+0.15",
										0.91500002
									},
									1
								};
								right[]=
								{
									{0.98000002,0.91500002},
									1
								};
								down[]=
								{
									
									{
										"0.79+0.15",
										0.95499998
									},
									1
								};
							};
							class WPIndex
							{
								type="text";
								source="wpIndex";
								sourceScale=1;
								sourceLength=2;
								align="right";
								scale=1;
								pos[]=
								{
									{0.82999998,0.91500002},
									1
								};
								right[]=
								{
									{0.87,0.91500002},
									1
								};
								down[]=
								{
									{0.82999998,0.95499998},
									1
								};
							};
							class WPstatic
							{
								type="text";
								source="static";
								text="W";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.79000002,0.91500002},
									1
								};
								right[]=
								{
									{0.82999998,0.91500002},
									1
								};
								down[]=
								{
									{0.79000002,0.95499998},
									1
								};
							};
							class WPAuto
							{
								type="text";
								source="static";
								text="A";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									
									{
										"0.790 +0.035",
										0.94999999
									},
									1
								};
								right[]=
								{
									{0.86500001,0.94999999},
									1
								};
								down[]=
								{
									
									{
										"0.790 +0.035",
										0.99000001
									},
									1
								};
							};
							class WPKM
							{
								type="text";
								source="static";
								text="KM";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									
									{
										"0.790 +0.16",
										0.91500002
									},
									1
								};
								right[]=
								{
									{0.99000001,0.91500002},
									1
								};
								down[]=
								{
									
									{
										"0.790 +0.16",
										0.95499998
									},
									1
								};
							};
							class WPTime
							{
								type="text";
								source="static";
								text="-:--";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									
									{
										"0.790 +0.11",
										0.94999999
									},
									1
								};
								right[]=
								{
									{0.94,0.94999999},
									1
								};
								down[]=
								{
									
									{
										"0.790 +0.11",
										0.99000001
									},
									1
								};
							};
							class WP1
							{
								condition="user6>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="1-WPIndex";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{}
									};
								};
							};
							class WP2
							{
								condition="user8>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=1)*(WPIndex<=1)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP2_PosX",
												1,
												"WP2_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
							class WP3
							{
								condition="user10>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=2)*(WPIndex<=2)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP3_PosX",
												1,
												"WP3_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
							class WP4
							{
								condition="user12>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=3)*(WPIndex<=3)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP4_PosX",
												1,
												"WP4_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
							class WP5
							{
								condition="user14>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=4)*(WPIndex<=4)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
							class WP6
							{
								condition="user16>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=5)*(WPIndex<=5)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP5_PosX",
												1,
												"WP5_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
							class WP7
							{
								condition="user18>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=6)*(WPIndex<=6)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP7_PosX",
												1,
												"WP7_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
							class WP8
							{
								condition="user20>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=7)*(WPIndex<=7)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP8_PosX",
												1,
												"WP8_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
							class WP9
							{
								condition="user22>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=8)*(WPIndex<=8)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP9_PosX",
												1,
												"WP9_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
							class WP10
							{
								condition="user24>=0";
								class CurrentWaypoint
								{
									color[]={0.89999998,0,0};
									condition="(WPIndex>=9)*(WPIndex<=9)";
									class WaypointShape
									{
										width=22;
										type="line";
										points[]=
										{
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.02,
													0
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0,
													0.020572901
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													0.0202602
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													0.0193324
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													0.0178161
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													0.0157589
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													0.0132243
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													0.0102865
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													0.00703594
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													0.00357146
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.02,
													0
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.019695999,
													-0.00357146
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.018794,
													-0.00703594
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.01732,
													-0.0102865
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.01532,
													-0.0132243
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.012856,
													-0.0157589
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.0099999998,
													-0.0178161
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.0068399999,
													-0.0193324
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													-0.0034719999,
													-0.0202602
												},
												1
											},
											
											{
												"WP10_PosX",
												1,
												"WP10_PosY",
												
												{
													"PlaneDirection",
													0,
													-0.020572901
												},
												1
											},
											{}
										};
									};
								};
								class WaypointShape
								{
									width=6;
									type="line";
									points[]=
									{
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.02,
												0
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0,
												0.020572901
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												0.0202602
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												0.0193324
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												0.0178161
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												0.0157589
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												0.0132243
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												0.0102865
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												0.00703594
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												0.00357146
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.02,
												0
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.019695999,
												-0.00357146
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.018794,
												-0.00703594
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.01732,
												-0.0102865
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.01532,
												-0.0132243
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.012856,
												-0.0157589
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.0099999998,
												-0.0178161
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.0068399999,
												-0.0193324
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												-0.0034719999,
												-0.0202602
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											
											{
												"PlaneDirection",
												0,
												-0.020572901
											},
											1
										},
										{},
										
										{
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										},
										
										{
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											
											{
												"PlaneDirection",
												0,
												0
											},
											1
										}
									};
								};
							};
						};
					};
					class Draw_Purple
					{
						color[]={0.67000002,0.059999999,0.31999999};
						class RangesData1_Text
						{
							type="text";
							source="static";
							text="348/111 BE1";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.0099999998,0.029999999},
								1
							};
							right[]=
							{
								{0.050000001,0.029999999},
								1
							};
							down[]=
							{
								{0.0099999998,0.07},
								1
							};
						};
					};
					class Draw_Yellow
					{
						color[]={0.99000001,0.86000001,0.14};
						class NoTarget
						{
							condition="targetDist<=0";
							class Target_Text
							{
								type="text";
								source="static";
								text="NO TARGET";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.18000001,0.85000002},
									1
								};
								right[]=
								{
									{0.22,0.85000002},
									1
								};
								down[]=
								{
									{0.18000001,0.88999999},
									1
								};
							};
						};
						class TargetInfo
						{
							condition="targetDist>=1";
							class Dist_Text
							{
								type="text";
								source="static";
								text="DIST:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.02,0.85000002},
									1
								};
								right[]=
								{
									{0.059999999,0.85000002},
									1
								};
								down[]=
								{
									{0.02,0.88999999},
									1
								};
							};
							class CordX
							{
								type="text";
								source="targetDist";
								sourceScale=0.001;
								sourcePrecision=1;
								sourceLength=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.15000001,0.85000002},
									1
								};
								right[]=
								{
									{0.19,0.85000002},
									1
								};
								down[]=
								{
									{0.15000001,0.88999999},
									1
								};
							};
							class SPD_Text
							{
								type="text";
								source="static";
								text="SPD:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.02,0.88999999},
									1
								};
								right[]=
								{
									{0.059999999,0.88999999},
									1
								};
								down[]=
								{
									{0.02,0.93000001},
									1
								};
							};
							class SpeedSource
							{
								type="text";
								source="LarTargetSpeed";
								sourceScale=1;
								sourcePrecision=0;
								sourceLength=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.15000001,0.88999999},
									1
								};
								right[]=
								{
									{0.19,0.88999999},
									1
								};
								down[]=
								{
									{0.15000001,0.93000001},
									1
								};
							};
							class ATL_Text
							{
								type="text";
								source="static";
								text="ATL:";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.02,0.93000001},
									1
								};
								right[]=
								{
									{0.059999999,0.93000001},
									1
								};
								down[]=
								{
									{0.02,0.97000003},
									1
								};
							};
							class HeightSource
							{
								type="text";
								source="targetHeight";
								sourceScale=1;
								sourcePrecision=0;
								sourceLength=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.15000001,0.93000001},
									1
								};
								right[]=
								{
									{0.19,0.93000001},
									1
								};
								down[]=
								{
									{0.15000001,0.97000003},
									1
								};
							};
						};
					};
					class Range_Text
					{
						type="text";
						source="static";
						text="18";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.74000001,0.55000001},
							1
						};
						right[]=
						{
							{0.79000002,0.55000001},
							1
						};
						down[]=
						{
							{0.74000001,0.60000002},
							1
						};
					};
					class RadarOn
					{
						condition="activeSensorsOn";
						color[]={1,1,1};
						class Draw_Static
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									{0.5,0.82999998},
									1
								},
								
								{
									{0.68186498,0.72199202},
									1
								},
								
								{
									"Static_Offset2",
									{0.172022,-0.123901},
									1
								},
								
								{
									"Static_Offset2",
									{0.160869,-0.138852},
									1
								},
								
								{
									"Static_Offset2",
									{0.14849199,-0.15274601},
									1
								},
								
								{
									"Static_Offset2",
									{0.134985,-0.16547801},
									1
								},
								
								{
									"Static_Offset2",
									{0.120451,-0.17694999},
									1
								},
								
								{
									{0.60500002,0.64292502},
									1
								},
								
								{
									{0.815,0.26877499},
									1
								},
								
								{
									"Static_Offset2",
									{0.26625001,-0.58732998},
									1
								},
								
								{
									"Static_Offset2",
									{0.215473,-0.60896498},
									1
								},
								
								{
									"Static_Offset2",
									{0.163056,-0.625965},
									1
								},
								
								{
									"Static_Offset2",
									{0.109398,-0.63820201},
									1
								},
								
								{
									"Static_Offset2",
									{0.054908101,-0.64558101},
									1
								},
								
								{
									"Static_Offset2",
									{0,-0.64804697},
									1
								},
								
								{
									"Static_Offset2",
									{-0.054908101,-0.64558101},
									1
								},
								
								{
									"Static_Offset2",
									{-0.109398,-0.63820201},
									1
								},
								
								{
									"Static_Offset2",
									{-0.163056,-0.625965},
									1
								},
								
								{
									"Static_Offset2",
									{-0.215473,-0.60896498},
									1
								},
								
								{
									"Static_Offset2",
									{-0.26625001,-0.58732998},
									1
								},
								
								{
									"Static_Offset2",
									{-0.315,-0.561225},
									1
								},
								
								{
									{0.39500001,0.64292502},
									1
								},
								
								{
									{0.185,0.26877499},
									1
								},
								{},
								
								{
									"Static_Offset2",
									{-0.105,-0.187075},
									1
								},
								
								{
									"Static_Offset2",
									{-0.120451,-0.17694999},
									1
								},
								
								{
									"Static_Offset2",
									{-0.134985,-0.16547801},
									1
								},
								
								{
									"Static_Offset2",
									{-0.14849199,-0.15274601},
									1
								},
								
								{
									"Static_Offset2",
									{-0.160869,-0.138852},
									1
								},
								
								{
									"Static_Offset2",
									{-0.172022,-0.123901},
									1
								},
								
								{
									"Static_Offset2",
									{-0.18186501,-0.108008},
									1
								},
								{},
								
								{
									{0.5,0.82999998},
									1
								},
								
								{
									{0.31813499,0.72199202},
									1
								},
								{}
							};
						};
					};
					class SensorGroup
					{
						color[]={1,1,1};
						alpha=1;
						class Sensor
						{
							type="sensor";
							pos[]=
							{
								"Sensor_Offset",
								
								{
									"0+-0.17",
									"0+-0.17"
								},
								1
							};
							down[]=
							{
								"Sensor_Offset",
								
								{
									"1--0.17",
									"1--0.17"
								},
								1
							};
							showTargetTypes="2+4+8+16+32+64+128+256+512+1024";
							width=4;
							sensorLineType=0;
							sensorLineWidth=3;
							targetLineWidth=-0.00192;
							targetLineLength=0.02;
							range=36000;
							class MissileThreat
							{
								color[]={1,0,0};
								class TargetLines
								{
									type="line";
									width=2;
									points[]=
									{
										
										{
											{0,-0.020572901},
											1
										},
										
										{
											{0.0034719999,-0.0202602},
											1
										},
										
										{
											{0.0068399999,-0.0193324},
											1
										},
										
										{
											{0.0099999998,-0.0178161},
											1
										},
										
										{
											{0.012856,-0.0157589},
											1
										},
										
										{
											{0.01532,-0.0132243},
											1
										},
										
										{
											{0.01732,-0.0102865},
											1
										},
										
										{
											{0.018794,-0.00703594},
											1
										},
										
										{
											{0.019695999,-0.00357146},
											1
										},
										
										{
											{0.02,0},
											1
										},
										
										{
											{0.019695999,0.00357146},
											1
										},
										
										{
											{0.018794,0.00703594},
											1
										},
										
										{
											{0.01732,0.0102865},
											1
										},
										
										{
											{0.01532,0.0132243},
											1
										},
										
										{
											{0.012856,0.0157589},
											1
										},
										
										{
											{0.0099999998,0.0178161},
											1
										},
										
										{
											{0.0068399999,0.0193324},
											1
										},
										
										{
											{0.0034719999,0.0202602},
											1
										},
										
										{
											{0,0.020572901},
											1
										},
										
										{
											{-0.0034719999,0.0202602},
											1
										},
										
										{
											{-0.0068399999,0.0193324},
											1
										},
										
										{
											{-0.0099999998,0.0178161},
											1
										},
										
										{
											{-0.012856,0.0157589},
											1
										},
										
										{
											{-0.01532,0.0132243},
											1
										},
										
										{
											{-0.01732,0.0102865},
											1
										},
										
										{
											{-0.018794,0.00703594},
											1
										},
										
										{
											{-0.019695999,0.00357146},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{-0.019695999,-0.00357146},
											1
										},
										
										{
											{-0.018794,-0.00703594},
											1
										},
										
										{
											{-0.01732,-0.0102865},
											1
										},
										
										{
											{-0.01532,-0.0132243},
											1
										},
										
										{
											{-0.012856,-0.0157589},
											1
										},
										
										{
											{-0.0099999998,-0.0178161},
											1
										},
										
										{
											{-0.0068399999,-0.0193324},
											1
										},
										
										{
											{-0.0034719999,-0.0202602},
											1
										},
										
										{
											{0,-0.020572901},
											1
										}
									};
								};
								class TextM
								{
									type="text";
									source="static";
									text="M";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0099999998},
										1
									};
									right[]=
									{
										{0.02,-0.0099999998},
										1
									};
									down[]=
									{
										{0,0.0099999998},
										1
									};
								};
							};
							class lockingThreat
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="line";
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.020572901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.020572901},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
							};
							class markingThreat: lockingThreat
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class rwr
							{
								class TargetLines
								{
									type="line";
									width=2;
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.020572901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.020572901},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
							};
							class rwrFriendly: rwr
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class rwrEnemy: rwr
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class rwrGroup: rwr
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class rwrDestroyed;  //found empty after stripping
							class markedTarget
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.017000001,-0.017487001},
											1
										},
										
										{
											{-0.0099999998,-0.017487001},
											1
										},
										{},
										
										{
											{0.017000001,-0.017487001},
											1
										},
										
										{
											{0.0099999998,-0.017487001},
											1
										},
										{},
										
										{
											{-0.017000001,-0.017487001},
											1
										},
										
										{
											{-0.017000001,-0.0102865},
											1
										},
										{},
										
										{
											{0.017000001,-0.017487001},
											1
										},
										
										{
											{0.017000001,-0.0102865},
											1
										},
										{},
										
										{
											{-0.017000001,0.017487001},
											1
										},
										
										{
											{-0.0099999998,0.017487001},
											1
										},
										{},
										
										{
											{0.017000001,0.017487001},
											1
										},
										
										{
											{0.0099999998,0.017487001},
											1
										},
										{},
										
										{
											{-0.017000001,0.017487001},
											1
										},
										
										{
											{-0.017000001,0.0102865},
											1
										},
										{},
										
										{
											{0.017000001,0.017487001},
											1
										},
										
										{
											{0.017000001,0.0102865},
											1
										},
										{}
									};
								};
							};
							class assignedTarget: markedTarget
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class target
							{
								color[]={1,1,1};
								class TargetLines
								{
									type="line";
									width=2;
									points[]=
									{
										
										{
											{0,-0.0133724},
											1
										},
										
										{
											{0.0022568,-0.0131691},
											1
										},
										
										{
											{0.0044459999,-0.012566},
											1
										},
										
										{
											{0.0065000001,-0.0115805},
											1
										},
										
										{
											{0.0083563998,-0.0102433},
											1
										},
										
										{
											{0.0099579999,-0.0085957795},
											1
										},
										
										{
											{0.011258,-0.0066861999},
											1
										},
										
										{
											{0.0122161,-0.0045733601},
											1
										},
										
										{
											{0.0128024,-0.00232145},
											1
										},
										
										{
											{0.013,0},
											1
										},
										
										{
											{0.0128024,0.00232145},
											1
										},
										
										{
											{0.0122161,0.0045733601},
											1
										},
										
										{
											{0.011258,0.0066861999},
											1
										},
										
										{
											{0.0099579999,0.0085957795},
											1
										},
										
										{
											{0.0083563998,0.0102433},
											1
										},
										
										{
											{0.0065000001,0.0115805},
											1
										},
										
										{
											{0.0044459999,0.012566},
											1
										},
										
										{
											{0.0022568,0.0131691},
											1
										},
										
										{
											{0,0.0133724},
											1
										},
										
										{
											{-0.0022568,0.0131691},
											1
										},
										
										{
											{-0.0044459999,0.012566},
											1
										},
										
										{
											{-0.0065000001,0.0115805},
											1
										},
										
										{
											{-0.0083563998,0.0102433},
											1
										},
										
										{
											{-0.0099579999,0.0085957795},
											1
										},
										
										{
											{-0.011258,0.0066861999},
											1
										},
										
										{
											{-0.0122161,0.0045733601},
											1
										},
										
										{
											{-0.0128024,0.00232145},
											1
										},
										
										{
											{-0.013,0},
											1
										},
										
										{
											{-0.0128024,-0.00232145},
											1
										},
										
										{
											{-0.0122161,-0.0045733601},
											1
										},
										
										{
											{-0.011258,-0.0066861999},
											1
										},
										
										{
											{-0.0099579999,-0.0085957795},
											1
										},
										
										{
											{-0.0083563998,-0.0102433},
											1
										},
										
										{
											{-0.0065000001,-0.0115805},
											1
										},
										
										{
											{-0.0044459999,-0.012566},
											1
										},
										
										{
											{-0.0022568,-0.0131691},
											1
										},
										
										{
											{0,-0.0133724},
											1
										}
									};
								};
								class TextA
								{
									type="text";
									source="static";
									text="U";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetFriendly: target
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA
								{
									type="text";
									source="static";
									text="G";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetEnemy: target
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetGroup: target
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetDestroyed;  //found empty after stripping
							class targetGround: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetGroundFriendly: targetGround
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetGroundEnemy: targetGround
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetGroundGroup: targetGround
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetGroundDestroyed;  //found empty after stripping
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA
								{
									type="text";
									source="static";
									text="G";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetGroundRemoteGroup: targetGroundRemote
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetGroundRemoteDestroyed;  //found empty after stripping
							class targetLaser: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetLaserFriendly: targetLaser
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetLaserGroup: targetLaser
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetNVG: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetMan: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetManFriendly: targetMan
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetManEnemy: targetMan
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetManGroup: targetMan
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetManRemote: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetManRemoteFriendly: targetManRemote
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetManRemoteEnemy: targetManRemote
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetManRemoteGroup: targetManRemote
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
								{
									type="line";
									width=2;
									points[]=
									{
										
										{
											{0,-0.0133724},
											1
										},
										
										{
											{0.0022568,-0.0131691},
											1
										},
										
										{
											{0.0044459999,-0.012566},
											1
										},
										
										{
											{0.0065000001,-0.0115805},
											1
										},
										
										{
											{0.0083563998,-0.0102433},
											1
										},
										
										{
											{0.0099579999,-0.0085957795},
											1
										},
										
										{
											{0.011258,-0.0066861999},
											1
										},
										
										{
											{0.0122161,-0.0045733601},
											1
										},
										
										{
											{0.0128024,-0.00232145},
											1
										},
										
										{
											{0.013,0},
											1
										},
										
										{
											{0.0128024,0.00232145},
											1
										},
										
										{
											{0.0122161,0.0045733601},
											1
										},
										
										{
											{0.011258,0.0066861999},
											1
										},
										
										{
											{0.0099579999,0.0085957795},
											1
										},
										
										{
											{0.0083563998,0.0102433},
											1
										},
										
										{
											{0.0065000001,0.0115805},
											1
										},
										
										{
											{0.0044459999,0.012566},
											1
										},
										
										{
											{0.0022568,0.0131691},
											1
										},
										
										{
											{0,0.0133724},
											1
										},
										
										{
											{-0.0022568,0.0131691},
											1
										},
										
										{
											{-0.0044459999,0.012566},
											1
										},
										
										{
											{-0.0065000001,0.0115805},
											1
										},
										
										{
											{-0.0083563998,0.0102433},
											1
										},
										
										{
											{-0.0099579999,0.0085957795},
											1
										},
										
										{
											{-0.011258,0.0066861999},
											1
										},
										
										{
											{-0.0122161,0.0045733601},
											1
										},
										
										{
											{-0.0128024,0.00232145},
											1
										},
										
										{
											{-0.013,0},
											1
										},
										
										{
											{-0.0128024,-0.00232145},
											1
										},
										
										{
											{-0.0122161,-0.0045733601},
											1
										},
										
										{
											{-0.011258,-0.0066861999},
											1
										},
										
										{
											{-0.0099579999,-0.0085957795},
											1
										},
										
										{
											{-0.0083563998,-0.0102433},
											1
										},
										
										{
											{-0.0065000001,-0.0115805},
											1
										},
										
										{
											{-0.0044459999,-0.012566},
											1
										},
										
										{
											{-0.0022568,-0.0131691},
											1
										},
										
										{
											{0,-0.0133724},
											1
										}
									};
								};
								class TextA
								{
									type="text";
									source="static";
									text="A";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetAirFriendly: targetAir
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetAirEnemy: targetAir
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetAirGroup: targetAir
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetAirDestroyed;  //found empty after stripping
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA
								{
									type="text";
									source="static";
									text="R";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetAirRemoteFriendly: targetAirRemote
							{
								color[]={0,1,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetAirRemoteEnemy: targetAirRemote
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetAirRemoteGroup: targetAirRemote
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TextA: TextA;  //found empty after stripping
							};
							class targetAirRemoteDestroyed;  //found empty after stripping
						};
					};
				};
			};
			class MFD_5
			{
				topLeft="MFD_5_TL";
				topRight="MFD_5_TR";
				bottomLeft="MFD_5_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						type="fixed";
						pos[]={0,0.029999999};
					};
					class Static_Offset
					{
						type="fixed";
						pos[]={0.5,0.52999997};
					};
					class Rotation_0
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0,0};
						type="rotational";
						source="heading";
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1.08148;
					};
					class Rotation_30: Rotation_0
					{
						minAngle=30;
						maxAngle=-330;
					};
					class Rotation_60: Rotation_0
					{
						minAngle=60;
						maxAngle=-300;
					};
					class Rotation_90: Rotation_0
					{
						minAngle=90;
						maxAngle=-270;
					};
					class Rotation_120: Rotation_0
					{
						minAngle=120;
						maxAngle=-240;
					};
					class Rotation_150: Rotation_0
					{
						minAngle=150;
						maxAngle=-210;
					};
					class Rotation_180: Rotation_0
					{
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_210: Rotation_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_240: Rotation_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_270: Rotation_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_300: Rotation_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_330: Rotation_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_Inv_0: Rotation_0
					{
						min=0;
						max=360;
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_Inv_90: Rotation_Inv_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_Inv_180: Rotation_Inv_0
					{
						minAngle=360;
						maxAngle=0;
					};
					class Rotation_Inv_270: Rotation_Inv_0
					{
						minAngle=450;
						maxAngle=90;
					};
				};
				class Draw
				{
					condition="on";
					alpha=0.5;
					color[]={1,1,1};
					class Draw_Blue
					{
						color[]={0,0.029999999,0.17};
						class Draw_Static
						{
							type="line";
							width=10;
							points[]=
							{
								
								{
									"Static_Offset",
									{0,-0.410963},
									1
								},
								
								{
									"Static_Offset",
									{0.065967999,-0.40471601},
									1
								},
								
								{
									"Static_Offset",
									{0.12996,-0.38618201},
									1
								},
								
								{
									"Static_Offset",
									{0.19,-0.355894},
									1
								},
								
								{
									"Static_Offset",
									{0.24426401,-0.314798},
									1
								},
								
								{
									"Static_Offset",
									{0.29108,-0.26416701},
									1
								},
								
								{
									"Static_Offset",
									{0.32907999,-0.20548099},
									1
								},
								
								{
									"Static_Offset",
									{0.357086,-0.140549},
									1
								},
								
								{
									"Static_Offset",
									{0.37422401,-0.071343198},
									1
								},
								
								{
									"Static_Offset",
									{0.38,0},
									1
								},
								
								{
									"Static_Offset",
									{0.37422401,0.071343198},
									1
								},
								
								{
									"Static_Offset",
									{0.357086,0.140549},
									1
								},
								
								{
									"Static_Offset",
									{0.32907999,0.20548099},
									1
								},
								
								{
									"Static_Offset",
									{0.29108,0.26416701},
									1
								},
								
								{
									"Static_Offset",
									{0.24426401,0.314798},
									1
								},
								
								{
									"Static_Offset",
									{0.19,0.355894},
									1
								},
								
								{
									"Static_Offset",
									{0.12996,0.38618201},
									1
								},
								
								{
									"Static_Offset",
									{0.065967999,0.40471601},
									1
								},
								
								{
									"Static_Offset",
									{0,0.410963},
									1
								},
								
								{
									"Static_Offset",
									{-0.065967999,0.40471601},
									1
								},
								
								{
									"Static_Offset",
									{-0.12996,0.38618201},
									1
								},
								
								{
									"Static_Offset",
									{-0.19,0.355894},
									1
								},
								
								{
									"Static_Offset",
									{-0.24426401,0.314798},
									1
								},
								
								{
									"Static_Offset",
									{-0.29108,0.26416701},
									1
								},
								
								{
									"Static_Offset",
									{-0.32907999,0.20548099},
									1
								},
								
								{
									"Static_Offset",
									{-0.357086,0.140549},
									1
								},
								
								{
									"Static_Offset",
									{-0.37422401,0.071343198},
									1
								},
								
								{
									"Static_Offset",
									{-0.38,0},
									1
								},
								
								{
									"Static_Offset",
									{-0.37422401,-0.071343198},
									1
								},
								
								{
									"Static_Offset",
									{-0.357086,-0.140549},
									1
								},
								
								{
									"Static_Offset",
									{-0.32907999,-0.20548099},
									1
								},
								
								{
									"Static_Offset",
									{-0.29108,-0.26416701},
									1
								},
								
								{
									"Static_Offset",
									{-0.24426401,-0.314798},
									1
								},
								
								{
									"Static_Offset",
									{-0.19,-0.355894},
									1
								},
								
								{
									"Static_Offset",
									{-0.12996,-0.38618201},
									1
								},
								
								{
									"Static_Offset",
									{-0.065967999,-0.40471601},
									1
								},
								
								{
									"Static_Offset",
									{0,-0.410963},
									1
								},
								{},
								
								{
									"Static_Offset",
									{0,-0.17303699},
									1
								},
								
								{
									"Static_Offset",
									{0.027775999,-0.170407},
									1
								},
								
								{
									"Static_Offset",
									{0.054719999,-0.16260301},
									1
								},
								
								{
									"Static_Offset",
									{0.079999998,-0.14985},
									1
								},
								
								{
									"Static_Offset",
									{0.102848,-0.13254599},
									1
								},
								
								{
									"Static_Offset",
									{0.12256,-0.111228},
									1
								},
								
								{
									"Static_Offset",
									{0.13856,-0.086518496},
									1
								},
								
								{
									"Static_Offset",
									{0.150352,-0.059178699},
									1
								},
								
								{
									"Static_Offset",
									{0.15756799,-0.030039201},
									1
								},
								
								{
									"Static_Offset",
									{0.16,0},
									1
								},
								
								{
									"Static_Offset",
									{0.15756799,0.030039201},
									1
								},
								
								{
									"Static_Offset",
									{0.150352,0.059178699},
									1
								},
								
								{
									"Static_Offset",
									{0.13856,0.086518496},
									1
								},
								
								{
									"Static_Offset",
									{0.12256,0.111228},
									1
								},
								
								{
									"Static_Offset",
									{0.102848,0.13254599},
									1
								},
								
								{
									"Static_Offset",
									{0.079999998,0.14985},
									1
								},
								
								{
									"Static_Offset",
									{0.054719999,0.16260301},
									1
								},
								
								{
									"Static_Offset",
									{0.027775999,0.170407},
									1
								},
								
								{
									"Static_Offset",
									{0,0.17303699},
									1
								},
								
								{
									"Static_Offset",
									{-0.027775999,0.170407},
									1
								},
								
								{
									"Static_Offset",
									{-0.054719999,0.16260301},
									1
								},
								
								{
									"Static_Offset",
									{-0.079999998,0.14985},
									1
								},
								
								{
									"Static_Offset",
									{-0.102848,0.13254599},
									1
								},
								
								{
									"Static_Offset",
									{-0.12256,0.111228},
									1
								},
								
								{
									"Static_Offset",
									{-0.13856,0.086518496},
									1
								},
								
								{
									"Static_Offset",
									{-0.150352,0.059178699},
									1
								},
								
								{
									"Static_Offset",
									{-0.15756799,0.030039201},
									1
								},
								
								{
									"Static_Offset",
									{-0.16,0},
									1
								},
								
								{
									"Static_Offset",
									{-0.15756799,-0.030039201},
									1
								},
								
								{
									"Static_Offset",
									{-0.150352,-0.059178699},
									1
								},
								
								{
									"Static_Offset",
									{-0.13856,-0.086518496},
									1
								},
								
								{
									"Static_Offset",
									{-0.12256,-0.111228},
									1
								},
								
								{
									"Static_Offset",
									{-0.102848,-0.13254599},
									1
								},
								
								{
									"Static_Offset",
									{-0.079999998,-0.14985},
									1
								},
								
								{
									"Static_Offset",
									{-0.054719999,-0.16260301},
									1
								},
								
								{
									"Static_Offset",
									{-0.027775999,-0.170407},
									1
								},
								
								{
									"Static_Offset",
									{0,-0.17303699},
									1
								},
								{},
								
								{
									"Static_Offset",
									{0,-0.41},
									1
								},
								
								{
									"Static_Offset",
									{0,-0.44},
									1
								},
								
								{
									"Static_Offset",
									{0.07,-0.44},
									1
								},
								
								{
									"Static_Offset",
									{0.07,-0.50999999},
									1
								},
								
								{
									"Static_Offset",
									{-0.07,-0.50999999},
									1
								},
								
								{
									"Static_Offset",
									{-0.07,-0.44},
									1
								},
								
								{
									"Static_Offset",
									{0,-0.44},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_0",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_0",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_30",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_30",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_60",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_60",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_90",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_90",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_120",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_120",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_150",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_150",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_180",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_180",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_210",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_210",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_240",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_240",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_270",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_270",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_300",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_300",
										0,
										0.34066701
									},
									1
								},
								{},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_330",
										0,
										0.383926
									},
									1
								},
								
								{
									"Static_Offset",
									1,
									
									{
										"Rotation_330",
										0,
										0.34066701
									},
									1
								},
								{},
								{}
							};
						};
						class Rotation_0_Text
						{
							type="text";
							source="static";
							text="N";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_0",
									0,
									-0.345
								},
								1
							};
							right[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_0",
									-0.039999999,
									-0.345
								},
								1
							};
							down[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_0",
									0,
									-0.29499999
								},
								1
							};
						};
						class Rotation_90_Text
						{
							type="text";
							source="static";
							text="E";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_90",
									0,
									-0.345
								},
								1
							};
							right[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_90",
									-0.039999999,
									-0.345
								},
								1
							};
							down[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_90",
									0,
									-0.29499999
								},
								1
							};
						};
						class Rotation_180_Text
						{
							type="text";
							source="static";
							text="S";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_180",
									0,
									-0.345
								},
								1
							};
							right[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_180",
									-0.039999999,
									-0.345
								},
								1
							};
							down[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_180",
									0,
									-0.29499999
								},
								1
							};
						};
						class Rotation_270_Text
						{
							type="text";
							source="static";
							text="W";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_270",
									0,
									-0.345
								},
								1
							};
							right[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_270",
									-0.039999999,
									-0.345
								},
								1
							};
							down[]=
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_Inv_270",
									0,
									-0.29499999
								},
								1
							};
						};
					};
					class BackgroundBlack
					{
						color[]={0,0,0};
						alpha=1;
						class Static
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.60000002,0.40000001},
										1
									},
									
									{
										{0.67000002,0.40000001},
										1
									},
									
									{
										{0.67000002,0.44999999},
										1
									},
									
									{
										{0.60000002,0.44999999},
										1
									}
								},
								
								{
									
									{
										{0.68000001,0.20999999},
										1
									},
									
									{
										{0.81,0.20999999},
										1
									},
									
									{
										{0.81,0.28999999},
										1
									},
									
									{
										{0.68000001,0.28999999},
										1
									}
								}
							};
						};
					};
					class HeadingText
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						refreshRate=0.1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.029999999},
							1
						};
						right[]=
						{
							{0.56,0.029999999},
							1
						};
						down[]=
						{
							{0.5,0.090000004},
							1
						};
					};
					class Range_Text
					{
						type="text";
						source="static";
						text="18A";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.81,0.22},
							1
						};
						right[]=
						{
							{0.88,0.22},
							1
						};
						down[]=
						{
							{0.81,0.28999999},
							1
						};
					};
					class MFD1_Text
					{
						type="text";
						source="static";
						text="LPE4";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.86000001,0.029999999},
							1
						};
						right[]=
						{
							{0.91000003,0.029999999},
							1
						};
						down[]=
						{
							{0.86000001,0.079999998},
							1
						};
					};
					class Draw_Blue2
					{
						color[]={0,0.029999999,0.17};
						class Range_Text
						{
							type="text";
							source="static";
							text="9";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.63999999,0.40000001},
								1
							};
							right[]=
							{
								{0.69,0.40000001},
								1
							};
							down[]=
							{
								{0.63999999,0.44999999},
								1
							};
						};
					};
					class RWR
					{
						type="sensor";
						pos[]=
						{
							"Sensor_Offset",
							
							{
								"0+-0.32",
								"0+-0.32"
							},
							1
						};
						down[]=
						{
							"Sensor_Offset",
							
							{
								"1--0.32",
								"1--0.32"
							},
							1
						};
						showTargetTypes="2 + 4 + 8 + 32 + 64 + 128 + 256";
						width=4;
						sensorLineType=1;
						sensorLineWidth=3;
						targetLineWidth=-0.0016;
						targetLineLength=0.02;
						range=36000;
						class MissileThreat
						{
							color[]={1,0,0};
							class TargetLines
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										{0,-0.0216296},
										1
									},
									
									{
										{0.0034719999,-0.021300901},
										1
									},
									
									{
										{0.0068399999,-0.0203254},
										1
									},
									
									{
										{0.0099999998,-0.0187313},
										1
									},
									
									{
										{0.012856,-0.016568299},
										1
									},
									
									{
										{0.01532,-0.0139035},
										1
									},
									
									{
										{0.01732,-0.0108148},
										1
									},
									
									{
										{0.018794,-0.0073973299},
										1
									},
									
									{
										{0.019695999,-0.0037549001},
										1
									},
									
									{
										{0.02,0},
										1
									},
									
									{
										{0.019695999,0.0037549001},
										1
									},
									
									{
										{0.018794,0.0073973299},
										1
									},
									
									{
										{0.01732,0.0108148},
										1
									},
									
									{
										{0.01532,0.0139035},
										1
									},
									
									{
										{0.012856,0.016568299},
										1
									},
									
									{
										{0.0099999998,0.0187313},
										1
									},
									
									{
										{0.0068399999,0.0203254},
										1
									},
									
									{
										{0.0034719999,0.021300901},
										1
									},
									
									{
										{0,0.0216296},
										1
									},
									
									{
										{-0.0034719999,0.021300901},
										1
									},
									
									{
										{-0.0068399999,0.0203254},
										1
									},
									
									{
										{-0.0099999998,0.0187313},
										1
									},
									
									{
										{-0.012856,0.016568299},
										1
									},
									
									{
										{-0.01532,0.0139035},
										1
									},
									
									{
										{-0.01732,0.0108148},
										1
									},
									
									{
										{-0.018794,0.0073973299},
										1
									},
									
									{
										{-0.019695999,0.0037549001},
										1
									},
									
									{
										{-0.02,0},
										1
									},
									
									{
										{-0.019695999,-0.0037549001},
										1
									},
									
									{
										{-0.018794,-0.0073973299},
										1
									},
									
									{
										{-0.01732,-0.0108148},
										1
									},
									
									{
										{-0.01532,-0.0139035},
										1
									},
									
									{
										{-0.012856,-0.016568299},
										1
									},
									
									{
										{-0.0099999998,-0.0187313},
										1
									},
									
									{
										{-0.0068399999,-0.0203254},
										1
									},
									
									{
										{-0.0034719999,-0.021300901},
										1
									},
									
									{
										{0,-0.0216296},
										1
									}
								};
							};
							class TextM
							{
								type="text";
								source="static";
								text="M";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.0099999998},
									1
								};
								right[]=
								{
									{0.02,-0.0099999998},
									1
								};
								down[]=
								{
									{0,0.0099999998},
									1
								};
							};
						};
						class lockingThreat
						{
							color[]={1,0.30000001,0};
							class TargetLines
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										{0.02,0},
										1
									},
									
									{
										{0,0.0216296},
										1
									},
									
									{
										{-0.02,0},
										1
									},
									
									{
										{0,-0.0216296},
										1
									},
									
									{
										{0.02,0},
										1
									}
								};
							};
						};
						class rwr
						{
							class TargetLines
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										{0.02,0},
										1
									},
									
									{
										{0,0.0216296},
										1
									},
									
									{
										{-0.02,0},
										1
									},
									
									{
										{0,-0.0216296},
										1
									},
									
									{
										{0.02,0},
										1
									}
								};
							};
							class TextA
							{
								type="text";
								source="static";
								text="A";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.0099999998},
									1
								};
								right[]=
								{
									{0.02,-0.0099999998},
									1
								};
								down[]=
								{
									{0,0.0099999998},
									1
								};
							};
						};
						class rwrFriendly: rwr
						{
							color[]={0,1,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class rwrEnemy: rwr
						{
							color[]={1,0,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class markedTarget
						{
							color[]={1,0.30000001,0};
							class TargetLines
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{-0.017000001,-0.0183852},
										1
									},
									
									{
										{-0.0099999998,-0.0183852},
										1
									},
									{},
									
									{
										{0.017000001,-0.0183852},
										1
									},
									
									{
										{0.0099999998,-0.0183852},
										1
									},
									{},
									
									{
										{-0.017000001,-0.0183852},
										1
									},
									
									{
										{-0.017000001,-0.0108148},
										1
									},
									{},
									
									{
										{0.017000001,-0.0183852},
										1
									},
									
									{
										{0.017000001,-0.0108148},
										1
									},
									{},
									
									{
										{-0.017000001,0.0183852},
										1
									},
									
									{
										{-0.0099999998,0.0183852},
										1
									},
									{},
									
									{
										{0.017000001,0.0183852},
										1
									},
									
									{
										{0.0099999998,0.0183852},
										1
									},
									{},
									
									{
										{-0.017000001,0.0183852},
										1
									},
									
									{
										{-0.017000001,0.0108148},
										1
									},
									{},
									
									{
										{0.017000001,0.0183852},
										1
									},
									
									{
										{0.017000001,0.0108148},
										1
									},
									{}
								};
							};
						};
						class assignedTarget
						{
							color[]={1,0.30000001,0};
							class TargetLines
							{
								type="line";
								width=7;
								points[]=
								{
									
									{
										{0,-0.0194667},
										1
									},
									
									{
										{0.0031248,-0.0191708},
										1
									},
									
									{
										{0.0061559998,-0.0182928},
										1
									},
									
									{
										{0.0089999996,-0.016858101},
										1
									},
									
									{
										{0.0115704,-0.0149115},
										1
									},
									
									{
										{0.013788,-0.0125132},
										1
									},
									
									{
										{0.015588,-0.0097333305},
										1
									},
									
									{
										{0.016914601,-0.0066575999},
										1
									},
									
									{
										{0.017726401,-0.0033794099},
										1
									},
									
									{
										{0.017999999,0},
										1
									},
									
									{
										{0.017726401,0.0033794099},
										1
									},
									
									{
										{0.016914601,0.0066575999},
										1
									},
									
									{
										{0.015588,0.0097333305},
										1
									},
									
									{
										{0.013788,0.0125132},
										1
									},
									
									{
										{0.0115704,0.0149115},
										1
									},
									
									{
										{0.0089999996,0.016858101},
										1
									},
									
									{
										{0.0061559998,0.0182928},
										1
									},
									
									{
										{0.0031248,0.0191708},
										1
									},
									
									{
										{0,0.0194667},
										1
									},
									
									{
										{-0.0031248,0.0191708},
										1
									},
									
									{
										{-0.0061559998,0.0182928},
										1
									},
									
									{
										{-0.0089999996,0.016858101},
										1
									},
									
									{
										{-0.0115704,0.0149115},
										1
									},
									
									{
										{-0.013788,0.0125132},
										1
									},
									
									{
										{-0.015588,0.0097333305},
										1
									},
									
									{
										{-0.016914601,0.0066575999},
										1
									},
									
									{
										{-0.017726401,0.0033794099},
										1
									},
									
									{
										{-0.017999999,0},
										1
									},
									
									{
										{-0.017726401,-0.0033794099},
										1
									},
									
									{
										{-0.016914601,-0.0066575999},
										1
									},
									
									{
										{-0.015588,-0.0097333305},
										1
									},
									
									{
										{-0.013788,-0.0125132},
										1
									},
									
									{
										{-0.0115704,-0.0149115},
										1
									},
									
									{
										{-0.0089999996,-0.016858101},
										1
									},
									
									{
										{-0.0061559998,-0.0182928},
										1
									},
									
									{
										{-0.0031248,-0.0191708},
										1
									},
									
									{
										{0,-0.0194667},
										1
									}
								};
							};
						};
						class target
						{
							class TargetLines
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										{0.02,0},
										1
									},
									
									{
										{0,0.0216296},
										1
									},
									
									{
										{-0.02,0},
										1
									},
									
									{
										{0,-0.0216296},
										1
									},
									
									{
										{0.02,0},
										1
									}
								};
							};
							class TextA
							{
								type="text";
								source="static";
								text="T";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.0080000004},
									1
								};
								right[]=
								{
									{0.02,-0.0080000004},
									1
								};
								down[]=
								{
									{0,0.012},
									1
								};
							};
						};
						class targetFriendly: target
						{
							color[]={0,1,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetEnemy: target
						{
							color[]={1,0,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetGround: target
						{
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA
							{
								type="text";
								source="static";
								text="G";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.0089999996},
									1
								};
								right[]=
								{
									{0.02,-0.0089999996},
									1
								};
								down[]=
								{
									{0,0.011},
									1
								};
							};
						};
						class targetGroundFriendly: targetGround
						{
							color[]={0,1,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetGroundEnemy: targetGround
						{
							color[]={1,0,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetGroundRemote: target
						{
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA
							{
								type="text";
								source="static";
								text="G";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.0089999996},
									1
								};
								right[]=
								{
									{0.02,-0.0089999996},
									1
								};
								down[]=
								{
									{0,0.011},
									1
								};
							};
						};
						class targetGroundRemoteFriendly: targetGroundRemote
						{
							color[]={0,1,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetGroundRemoteEnemy: targetGroundRemote
						{
							color[]={1,0,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetAir
						{
							color[]={1,1,1};
							class TargetLines
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										{0,-0.0140593},
										1
									},
									
									{
										{0.0022568,-0.0138456},
										1
									},
									
									{
										{0.0044459999,-0.0132115},
										1
									},
									
									{
										{0.0065000001,-0.0121753},
										1
									},
									
									{
										{0.0083563998,-0.0107694},
										1
									},
									
									{
										{0.0099579999,-0.0090372898},
										1
									},
									
									{
										{0.011258,-0.0070296298},
										1
									},
									
									{
										{0.0122161,-0.0048082699},
										1
									},
									
									{
										{0.0128024,-0.0024406901},
										1
									},
									
									{
										{0.013,0},
										1
									},
									
									{
										{0.0128024,0.0024406901},
										1
									},
									
									{
										{0.0122161,0.0048082699},
										1
									},
									
									{
										{0.011258,0.0070296298},
										1
									},
									
									{
										{0.0099579999,0.0090372898},
										1
									},
									
									{
										{0.0083563998,0.0107694},
										1
									},
									
									{
										{0.0065000001,0.0121753},
										1
									},
									
									{
										{0.0044459999,0.0132115},
										1
									},
									
									{
										{0.0022568,0.0138456},
										1
									},
									
									{
										{0,0.0140593},
										1
									},
									
									{
										{-0.0022568,0.0138456},
										1
									},
									
									{
										{-0.0044459999,0.0132115},
										1
									},
									
									{
										{-0.0065000001,0.0121753},
										1
									},
									
									{
										{-0.0083563998,0.0107694},
										1
									},
									
									{
										{-0.0099579999,0.0090372898},
										1
									},
									
									{
										{-0.011258,0.0070296298},
										1
									},
									
									{
										{-0.0122161,0.0048082699},
										1
									},
									
									{
										{-0.0128024,0.0024406901},
										1
									},
									
									{
										{-0.013,0},
										1
									},
									
									{
										{-0.0128024,-0.0024406901},
										1
									},
									
									{
										{-0.0122161,-0.0048082699},
										1
									},
									
									{
										{-0.011258,-0.0070296298},
										1
									},
									
									{
										{-0.0099579999,-0.0090372898},
										1
									},
									
									{
										{-0.0083563998,-0.0107694},
										1
									},
									
									{
										{-0.0065000001,-0.0121753},
										1
									},
									
									{
										{-0.0044459999,-0.0132115},
										1
									},
									
									{
										{-0.0022568,-0.0138456},
										1
									},
									
									{
										{0,-0.0140593},
										1
									}
								};
							};
							class TextA
							{
								type="text";
								source="static";
								text="A";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.0089999996},
									1
								};
								right[]=
								{
									{0.02,-0.0089999996},
									1
								};
								down[]=
								{
									{0,0.011},
									1
								};
							};
						};
						class targetAirFriendly: targetAir
						{
							color[]={0,1,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetAirEnemy: targetAir
						{
							color[]={1,0,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetAirRemote: targetAir
						{
							color[]={1,1,1};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA
							{
								type="text";
								source="static";
								text="R";
								align="center";
								scale=1;
								pos[]=
								{
									{0,-0.0089999996},
									1
								};
								right[]=
								{
									{0.02,-0.0089999996},
									1
								};
								down[]=
								{
									{0,0.011},
									1
								};
							};
						};
						class targetAirRemoteFriendly: targetAirRemote
						{
							color[]={0,1,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
						class targetAirRemoteEnemy: targetAirRemote
						{
							color[]={1,0,0};
							class TargetLines: TargetLines;  //found empty after stripping
							class TextA: TextA;  //found empty after stripping
						};
					};
					class MChaff_Text
					{
						type="text";
						source="static";
						text="M CHAFF";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.76999998,0.85000002},
							1
						};
						right[]=
						{
							{0.80000001,0.85000002},
							1
						};
						down[]=
						{
							{0.76999998,0.88999999},
							1
						};
					};
					class MFlare_Text
					{
						type="text";
						source="static";
						text="M FLARE";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.76999998,0.88999999},
							1
						};
						right[]=
						{
							{0.80000001,0.88999999},
							1
						};
						down[]=
						{
							{0.76999998,0.93000001},
							1
						};
					};
					class Prog_Text
					{
						type="text";
						source="static";
						text="1 PROG";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.76999998,0.93000001},
							1
						};
						right[]=
						{
							{0.80000001,0.93000001},
							1
						};
						down[]=
						{
							{0.76999998,0.97000003},
							1
						};
					};
					class ChaffSource
					{
						type="text";
						source="cmammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.93000001,0.85000002},
							1
						};
						right[]=
						{
							{0.95999998,0.85000002},
							1
						};
						down[]=
						{
							{0.93000001,0.88999999},
							1
						};
					};
					class FlareSource: ChaffSource
					{
						pos[]=
						{
							{0.93000001,0.88999999},
							1
						};
						right[]=
						{
							{0.95999998,0.88999999},
							1
						};
						down[]=
						{
							{0.93000001,0.93000001},
							1
						};
					};
					class ProgS_Text
					{
						type="text";
						source="static";
						text="10";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.93000001,0.93000001},
							1
						};
						right[]=
						{
							{0.95999998,0.93000001},
							1
						};
						down[]=
						{
							{0.93000001,0.97000003},
							1
						};
					};
				};
			};
			class MFD_6
			{
				topLeft="MFD_6_TL";
				topRight="MFD_6_TR";
				bottomLeft="MFD_6_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="LucidaConsoleB";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					color[]={0.15000001,1,0.15000001};
					class CurrentWeapon
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.50999999,0.23999999},
							1
						};
						right[]=
						{
							{0.56999999,0.23999999},
							1
						};
						down[]=
						{
							{0.50999999,0.30000001},
							1
						};
					};
					class MGAmmo
					{
						type="text";
						source="ammo";
						sourceIndex=1;
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.50999999,0.41499999},
							1
						};
						right[]=
						{
							{0.54000002,0.41499999},
							1
						};
						down[]=
						{
							{0.50999999,0.45500001},
							1
						};
					};
					class MGAmmo_Text
					{
						type="text";
						source="static";
						text="GUN-";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.43000001,0.41499999},
							1
						};
						right[]=
						{
							{0.46000001,0.41499999},
							1
						};
						down[]=
						{
							{0.43000001,0.45500001},
							1
						};
					};
					class thrust1Source
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="center";
						scale=1;
						pos[]=
						{
							{0.30000001,0.079999998},
							1
						};
						right[]=
						{
							{0.34,0.079999998},
							1
						};
						down[]=
						{
							{0.30000001,0.12},
							1
						};
					};
					class thrust2Source: thrust1Source
					{
						pos[]=
						{
							{0.61000001,0.079999998},
							1
						};
						right[]=
						{
							{0.64999998,0.079999998},
							1
						};
						down[]=
						{
							{0.61000001,0.12},
							1
						};
					};
					class White
					{
						color[]={1,1,15};
						class ChaffSource
						{
							type="text";
							source="cmammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.25999999,0.77999997},
								1
							};
							right[]=
							{
								{0.28999999,0.77999997},
								1
							};
							down[]=
							{
								{0.25999999,0.81999999},
								1
							};
						};
						class FlareSource: ChaffSource
						{
							pos[]=
							{
								{0.68000001,0.77999997},
								1
							};
							right[]=
							{
								{0.70999998,0.77999997},
								1
							};
							down[]=
							{
								{0.68000001,0.81999999},
								1
							};
						};
					};
					class Pylon1
					{
						type="pylonicon";
						pos[]=
						{
							{0.34999999,0.47999999},
							1
						};
						pylon=1;
						name="rhs_f22_pylon";
					};
					class Pylon2: Pylon1
					{
						pos[]=
						{
							{0.37,0.57999998},
							1
						};
						pylon=2;
					};
					class Pylon3: Pylon1
					{
						pos[]=
						{
							{0.44499999,0.57999998},
							1
						};
						pylon=3;
					};
					class Pylon4: Pylon1
					{
						pos[]=
						{
							{0.55500001,0.57999998},
							1
						};
						pylon=4;
					};
					class Pylon5: Pylon1
					{
						pos[]=
						{
							{0.63,0.57999998},
							1
						};
						pylon=5;
					};
					class Pylon6: Pylon1
					{
						pos[]=
						{
							{0.64999998,0.47999999},
							1
						};
						pylon=6;
					};
				};
			};
			class MFD_7
			{
				topLeft="MFD_7_TL";
				topRight="MFD_7_TR";
				bottomLeft="MFD_7_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0.029999999;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="rhsusf_digital_font_var";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					color[]={0.15000001,1,0.15000001};
					alpha=0.5;
					class C1_Text
					{
						type="text";
						source="static";
						text="C1: ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.059999999,0.23999999},
							1
						};
						right[]=
						{
							{0.12,0.23999999},
							1
						};
						down[]=
						{
							{0.059999999,0.31},
							1
						};
					};
					class C1_Value
					{
						type="text";
						source="userText";
						sourceScale=1;
						sourceIndex=0;
						align="right";
						scale=1;
						pos[]=
						{
							{0.16,0.23999999},
							1
						};
						right[]=
						{
							{0.22,0.23999999},
							1
						};
						down[]=
						{
							{0.16,0.31},
							1
						};
					};
					class COM1_Text1
					{
						type="text";
						source="static";
						text="COM1";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.50999999,0.25999999},
							1
						};
						right[]=
						{
							{0.56999999,0.25999999},
							1
						};
						down[]=
						{
							{0.50999999,0.33000001},
							1
						};
					};
					class COM1_Text2
					{
						type="text";
						source="static";
						text="1/1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.81,0.25999999},
							1
						};
						right[]=
						{
							{0.87,0.25999999},
							1
						};
						down[]=
						{
							{0.81,0.33000001},
							1
						};
					};
					class Vol_Text
					{
						type="text";
						source="static";
						text="C1 VOL 100%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.50999999,0.405},
							1
						};
						right[]=
						{
							{0.56999999,0.405},
							1
						};
						down[]=
						{
							{0.50999999,0.47499999},
							1
						};
					};
					class VolAdj_Text
					{
						type="text";
						source="static";
						text="> VOL ADJ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.50999999,0.55000001},
							1
						};
						right[]=
						{
							{0.56999999,0.55000001},
							1
						};
						down[]=
						{
							{0.50999999,0.62},
							1
						};
					};
					class Em_Text
					{
						type="text";
						source="static";
						text="  - - - -";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.50999999,0.70499998},
							1
						};
						right[]=
						{
							{0.56999999,0.70499998},
							1
						};
						down[]=
						{
							{0.50999999,0.77499998},
							1
						};
					};
					class FreqAdj_Text
					{
						type="text";
						source="static";
						text="> FREQ ADJ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.50999999,0.88},
							1
						};
						right[]=
						{
							{0.56999999,0.88},
							1
						};
						down[]=
						{
							{0.50999999,0.94999999},
							1
						};
					};
				};
			};
		};
		airBrake=1;
		airBrakeFrictionCoef=2.4000001;
		flaps=1;
		flapsFrictionCoef=0.36000001;
		gearsUpFrictionCoef=0.80000001;
		brakeDistance=250;
		wheelSteeringSensitivity=4;
		maxSpeed=1800;
		RHS_AfterBurner_MaxSpeed=2000;
		RHS_AfterBurner_Boost=0.18000001;
		RHS_AfterBurner_FuelDrag=0.19;
		altFullForce=5000;
		altNoForce=15000;
		rudderInfluence=0.76599997;
		noseDownCoef=0;
		aileronSensitivity=1.2;
		elevatorSensitivity=1.4;
		elevatorControlsSensitivityCoef=4;
		aileronControlsSensitivityCoef=3.5;
		rudderControlsSensitivityCoef=4;
		envelope[]={0,0.11,0.82999998,1.97,2.4200001,2.6900001,3.8699999,5.27,6.8899999,8.7200003,9.6999998,9.6000004,9.1999998,8.5,8.1999998,8};
		thrustCoef[]={1.76,1.6900001,1.62,1.6799999,1.74,1.8099999,1.89,1.95,1.96,1.96,1.92,1.4,0.40000001,0,0,0};
		elevatorCoef[]={0.30000001,0.5,0.66000003,0.51999998,0.49000001,0.46000001,0.43000001,0.40000001,0.34999999,0.30000001,0.25,0.18000001,0.17,0.16,0.15000001,0.15000001};
		aileronCoef[]={0.40000001,0.5,0.80000001,0.94999999,1.02,1.04,1.03,1.01,1,0.69999999,0.60000002,0.55000001,0.5,0.44999999,0.40000001,0.34999999};
		rudderCoef[]={0.5,1.8,2.5999999,2.75,2.8,2.8499999,2.9000001,2.95,2.98,3.01,2.7,1.1,0.89999998,0.69999999,0.5,0.30000001};
		angleOfIndicence=0.039999999;
		draconicForceXCoef=8;
		draconicForceYCoef=1.2;
		draconicForceZCoef=1;
		draconicTorqueXCoef[]={4,5.0999999,6.0999999,7,7.6999998,8.3000002,9,9.1000004,9.1999998,9.1999998,9.1999998};
		draconicTorqueYCoef[]={6.8000002,5.5,4,1.5,0.1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0074999998};
		airFrictionCoefs2[]={0.001,0.0049999999,6.7000001e-005};
		landingSpeed=275;
		stallSpeed=250;
		stallWarningTreshold=0.5;
		acceleration=200;
		landingAoa=0.108207;
		maxOmega=4000;
		engineMOI=9;
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class Wheel_1
			{
				steering=1;
				side="left";
				boneName="Wheel_1";
				center="Wheel_1_center";
				boundary="Wheel_1_rim";
				width=0.16;
				mass=150;
				MOI=3;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="Wheel_1_center";
				tireForceAppPointOffset="Wheel_1_center";
				maxCompression=0.15000001;
				maxDroop=0.1;
				sprungMass=11400;
				springStrength=1200000;
				springDamperRate=128000;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class Wheel_1_fake: Wheel_1;  //found empty after stripping
			class Wheel_2: Wheel_1
			{
				steering=0;
				boneName="Wheel_2";
				center="Wheel_2_center";
				boundary="Wheel_2_rim";
				suspForceAppPointOffset="Wheel_2_center";
				tireForceAppPointOffset="Wheel_2_center";
				width=0.28;
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=3200;
				springStrength=1580000;
				springDamperRate=512000;
			};
			class Wheel_3: Wheel_2
			{
				side="right";
				boneName="Wheel_3";
				center="Wheel_3_center";
				boundary="Wheel_3_rim";
				suspForceAppPointOffset="Wheel_3_center";
				tireForceAppPointOffset="Wheel_3_center";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsusf\addons\rhsusf_f22\data\body.rvmat",
				"rhsusf\addons\rhsusf_f22\data\body_damage.rvmat",
				"rhsusf\addons\rhsusf_f22\data\body_destruct.rvmat",
				"rhsusf\addons\rhsusf_f22\data\wing.rvmat",
				"rhsusf\addons\rhsusf_f22\data\wing_damage.rvmat",
				"rhsusf\addons\rhsusf_f22\data\wing_destruct.rvmat",
				"rhsusf\addons\rhsusf_f22\data\kolo1.rvmat",
				"rhsusf\addons\rhsusf_f22\data\kolo1.rvmat",
				"rhsusf\addons\rhsusf_f22\data\kolo_destruct.rvmat"
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"\rhsusf\addons\rhsusf_f22\data\f22_b1.paa",
					"\rhsusf\addons\rhsusf_f22\data\f22_wing_spads.paa"
				};
				factions[]=
				{
					"rhs_faction_usaf"
				};
			};
		};
		textureList[]=
		{
			"standard",
			1
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_General
				{
					color[]={20,30,30};
					ambient[]={0,0,0};
					intensity=3.05;
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
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100};
				selection="l svetlo";
				position="light_1_pos";
				direction="light_1_dir";
				hitpoint="light_1_hit";
				innerAngle=15;
				outerAngle=40;
				coneFadeCoef=10;
				intensity=50;
				useFlare=0;
				dayLight=0;
				FlareSize=1;
				size=1;
				class Attenuation
				{
					constant=0;
					linear=0;
					quadratic=4;
					start=1;
					hardLimitStart=150;
					hardLimitEnd=300;
				};
			};
			class Left_Flare: Left
			{
				color[]={70,75,100,1};
				position="light_1_pos_flare";
				useFlare=1;
				outerAngle=160;
			};
			class Right: Left
			{
				position="light_2_pos";
				direction="light_2_dir";
				hitpoint="light_2_hit";
				selection="p svetlo";
			};
			class Right_Flare: Right
			{
				color[]={70,75,100,1};
				position="light_2_pos_flare";
				useFlare=1;
				outerAngle=160;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left_Flare",
				"Right",
				"Right_Flare"
			}
		};
	};
	class PlaneWreck;
	class rhsusf_f22Wreck: PlaneWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\rhsusf\addons\rhsusf_f22\rhsusf_f22Wreck.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=1;
		class Eventhandlers;
	};
	class ThingX;
	class rhs_f22_canopy: ThingX
	{
		scope=1;
		hasdriver=0;
		armor=100;
		destrType="DestructWreck";
		displayName="F-22 Canopy";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Small_items";
		model="\rhsusf\addons\rhsusf_f22\f22_canopy.p3d";
		hiddenSelections[]={};
		epeImpulseDamageCoef=10;
		gearsUpFrictionCoef=0.0099999998;
		class DestructionEffects;  //found empty after stripping
		class UserActions;  //found empty after stripping
		driveOnComponent[]={};
		class TransportWeapons;  //found empty after stripping
		class TransportMagazines;  //found empty after stripping
		class TransportItems;  //found empty after stripping
		class Eventhandlers
		{
			HandleDamage="deleteVehicle (_this select 0)";
		};
		SLX_XEH_DISABLED=1;
	};
};
