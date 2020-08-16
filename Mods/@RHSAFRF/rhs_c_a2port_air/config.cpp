class DefaultEventhandlers;
class CfgPatches
{
	class rhs_c_a2port_air
	{
		units[]=
		{
			"RHS_Mi24P_vvs",
			"RHS_Mi24V_vvs",
			"RHS_Mi24P_CAS_vvs",
			"RHS_Mi24P_AT_vvs",
			"RHS_Mi24V_UPK23_vvs",
			"RHS_Mi24V_FAB_vvs",
			"RHS_Mi24V_AT_vvs",
			"RHS_Mi24Vt_vvs",
			"RHS_Mi24P_vvsc",
			"RHS_Mi24V_vvsc",
			"RHS_Mi24P_CAS_vvsc",
			"RHS_Mi24P_AT_vvsc",
			"RHS_Mi24V_UPK23_vvsc",
			"RHS_Mi24V_FAB_vvsc",
			"RHS_Mi24V_AT_vvsc",
			"RHS_Mi24Vt_vvsc",
			"RHS_Mi24P_vdv",
			"RHS_Mi24V_vdv",
			"RHS_Mi24P_CAS_vdv",
			"RHS_Mi24V_UPK23_vdv",
			"RHS_Mi24V_FAB_vdv",
			"RHS_Mi24V_AT_vdv",
			"RHS_Mi8AMTSh_vvs",
			"RHS_Mi8AMTSh_UPK23_vvs",
			"RHS_Mi8AMTSh_FAB_vvs",
			"RHS_Mi8MTV3_vvs",
			"RHS_Mi8MTV3_UPK23_vvs",
			"RHS_Mi8MTV3_FAB_vvs",
			"RHS_Mi8MTV3_Cargo_vvs",
			"RHS_Mi8MTV3_heavy_vvs",
			"RHS_Mi8AMT_vvs",
			"RHS_Mi8mt_vvs",
			"RHS_Mi8mt_Cargo_vvs",
			"RHS_Mi8T_vvs",
			"RHS_Mi8MTV3_vdv",
			"RHS_Mi8MTV3_UPK23_vdv",
			"RHS_Mi8MTV3_FAB_vdv",
			"RHS_Mi8MTV3_Cargo_vdv",
			"RHS_Mi8MTV3_heavy_vdv",
			"RHS_Mi8AMT_vdv",
			"RHS_Mi8mt_vdv",
			"RHS_Mi8mt_Cargo_vdv",
			"RHS_Mi8T_vdv",
			"RHS_Mi8AMTSh_vvsc",
			"RHS_Mi8AMTSh_UPK23_vvsc",
			"RHS_Mi8AMTSh_FAB_vvsc",
			"RHS_Mi8MTV3_vvsc",
			"RHS_Mi8MTV3_UPK23_vvsc",
			"RHS_Mi8MTV3_FAB_vvsc",
			"RHS_Mi8MTV3_Cargo_vvsc",
			"RHS_Mi8MTV3_heavy_vvsc",
			"RHS_Mi8AMT_vvsc",
			"RHS_Mi8mt_vvsc",
			"RHS_Mi8mt_Cargo_vvsc",
			"RHS_Mi8T_vvsc",
			"RHS_Mi8mt_vv",
			"RHS_Mi8mt_Cargo_vv",
			"RHS_Mi8T_vv",
			"RHS_Mi8amt_civilian",
			"RHS_Mi8T_civilian",
			"RHS_Su25SM_vvs",
			"RHS_Su25SM_vvsc",
			"RHS_Su25SM_KH29_vvs",
			"RHS_Su25SM_KH29_vvsc",
			"RHS_Su25SM_CAS_vvs",
			"RHS_Su25SM_CAS_vvsc",
			"RHS_Su25SM_Cluster_vvs",
			"RHS_Su25SM_Cluster_vvsc",
			"RHS_Ka52_vvs",
			"RHS_Ka52_vvsc",
			"RHS_Ka52_UPK23_vvs",
			"RHS_Ka52_UPK23_vvsc",
			"rhs_pchela1t_vvs",
			"rhs_pchela1t_vvsc",
			"rhs_d6_Parachute",
			"rhs_d6_Parachute_backpack"
		};
		name="A2 ported air";
	};
		requiredAddons[]={};
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
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class addParachutes
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_addParachutes.sqf";
			};
			class air_init
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_air_init.sqf";
				description="Air vehicles settings init";
			};
			class ka52_ejection
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_ka52_ejection.sqf";
				description="KA-52 ejection system";
			};
			class rwr_mi24
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_mi24.sqf";
				description="RWR system for Mi-24";
			};
			class rwr_mi28
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_mi28.sqf";
				description="RWR system for Mi-28";
			};
			class rwr_air
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_air.sqf";
				description="RWR system for generic planes";
			};
			class mi24_camo
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_camo.sqf";
				description="Random Camo script for Mi-24";
			};
			class mi24_doors
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_doors.sqf";
				description="Mi-24 cargo door handler";
			};
			class mi24_map
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_map.sqf";
				description="Mi-24 moving map";
			};
			class mi8_doors
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi8_doors.sqf";
				description="Mi-8AMT cargo door handler";
			};
			class rus_doorHandler
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_doorHandler.sqf";
				description="Delayed door handler";
			};
			class mi8_checkDoor
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi8_checkDoor.sqf";
				description="Door script for Mi-8";
			};
			class atgm_guide
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_atgm_guide.sqf";
				description="ATGM guidance for Ka-52";
			};
			class toggleIntLight
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_toggleIntLight.sqf";
				description="Toggle interior light";
			};
			class heli_wheelBrakes
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_heli_wheelBrakes.sqf";
			};
			class Su25_AI_fire
			{
				file="\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_su25_AI_laserTarget.sqf";
			};
		};
	};
};
class CfgSounds
{
	class rhs_Missile3OClockH
	{
		name="Missile3OClockH";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile3OClockH.ogg",
			1.7782794,
			1
		};
		titles[]={};
	};
	class rhs_Missile6OClockH
	{
		name="Missile6OClockH";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile6OClockH.ogg",
			1.7782794,
			1
		};
		titles[]={};
	};
	class rhs_Missile9OClockH
	{
		name="Missile9OClockH";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile9OClockH.ogg",
			1.7782794,
			1
		};
		titles[]={};
	};
	class rhs_Missile12OClockH
	{
		name="Missile12OClockH";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile12OClockH.ogg",
			1.7782794,
			1
		};
		titles[]={};
	};
	class rhs_Missile3OClockL
	{
		name="Missile3OClockL";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile3OClockL.ogg",
			1.7782794,
			1
		};
		titles[]={};
	};
	class rhs_Missile6OClockL
	{
		name="Missile6OClockL";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile6OClockL.ogg",
			1.7782794,
			1
		};
		titles[]={};
	};
	class rhs_Missile9OClockL
	{
		name="Missile9OClockL";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile9OClockL.ogg",
			1.7782794,
			1
		};
		titles[]={};
	};
	class rhs_Missile12OClockL
	{
		name="Missile12OClockL";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile12OClockL.ogg",
			1.7782794,
			1
		};
		titles[]={};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyRetex;
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
	class ThingX;
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitMissiles;
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class Sounds;
		class HitPoints: HitPoints
		{
			class HitEngine1;
		};
		class Components;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class Eventhandlers;
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
		class Components;
	};
	class Plane: Air
	{
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
	class Plane_CAS_02_base_F;
	class O_Plane_CAS_02_F: Plane_CAS_02_base_F
	{
		class EventHandlers;
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI24NumberPlaces,'AviaYellow']"
		};
		typicalCargo[]=
		{
			"rhs_pilot_combat_heli"
		};
		maxSpeed=585;
		fuelCapacity=2130;
		AGM_fuelCapacity=2130;
		fuelConsumptionRate=0.5;
		mainBladeRadius=7;
		tailBladeRadius=1.5;
		tailBladeVertical=1;
		tailBladeCenter="mala osa";
		mainBladeCenter="rotor_center";
		backRotorForceCoef=1;
		liftForceCoef=2;
		altFullForce=4000;
		altNoForce=6000;
		mainRotorSpeed=1;
		backrotorspeed=1;
		numberPhysicalWheels=3;
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			rtd_center="rtd_center";
			RTDconfig="rhsafrf\addons\rhs_c_a2port_air\Mi35\RTD_mi24.xml";
			maxTorque=201754;
			maxMainRotorStress=320000;
			maxTailRotorStress=60000;
			maxHorizontalStabilizerLeftStress=12000;
			maxHorizontalStabilizerRightStress=12000;
			maxVerticalStabilizerStress=8000;
			defaultCollective=0.75;
			autoHoverCorrection[]={6,-1,0};
			retreatBladeStallWarningSpeed=93.056;
			horizontalWingsAngleCollMin=-12.5;
			horizontalWingsAngleCollMax=7.5;
			stressDamagePerSec=0.0033333332;
		};
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		audible=7;
		icon="rhsafrf\addons\rhs_a2port_air\data\map_ico\icon_mi24_ca.paa";
		getInRadius=2;
		maxOmega=2000;
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class wheel_1_1
			{
				steering=1;
				side="left";
				suspTravelDirection[]={0,-1,0};
				width=0.43700001;
				mass=15;
				MOI=0.76800001;
				dampingRate=0.25;
				dampingRateDamaged=2;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				maxCompression=1.2;
				maxDroop=0;
				sprungMass=13;
				springStrength=1200;
				springDamperRate=1280;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class wheel_2_1: wheel_1_1
			{
				steering=0;
				side="left";
				sprungMass=2856;
				width=0.237;
				maxCompression=1.6;
				maxDroop=0.191;
			};
			class wheel_2_2: wheel_2_1
			{
				side="right";
			};
		};
		gearRetracting=1;
		driveOnComponent[]=
		{
			"wheels"
		};
		defaultUserMFDvalues[]={0.5,0.5};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax=1;
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				turret[]={-1};
				class Bones
				{
					class PlaneOrientation
					{
						refreshRate=0.1;
						pos[]={0.44,0.52999997};
					};
					class ImpactPoint
					{
						source="ImpactPoint";
						pos[]={0.44,0.52999997};
						pos0[]={0.44,0.47};
						pos10[]={1.12,1.21};
					};
				};
					alpha=0.80000001;
					condition="on";
					class ImpactCross
					{
						width=4;
						points[]=
						{
							
							{
								"ImpactPoint",
								{0,-0.174118},
								1
							},
							
							{
								"ImpactPoint",
								{0,-0.032647099},
								1
							},
							{},
							
							{
								"ImpactPoint",
								{0,0.174118},
								1
							},
							
							{
								"ImpactPoint",
								{0,0.032647099},
								1
							},
							{},
							
							{
								"ImpactPoint",
								{-0.16,0},
								1
							},
							
							{
								"ImpactPoint",
								{-0.029999999,0},
								1
							},
							{},
							
							{
								"ImpactPoint",
								{0.16,0},
								1
							},
							
							{
								"ImpactPoint",
								{0.029999999,0},
								1
							}
						};
					};
				};
			};
			class MFD_Map
			{
				topLeft="MFD_MAP_TL";
				topRight="MFD_MAP_TR";
				bottomLeft="MFD_MAP_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				enableParallax=0;
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class MovementY
					{
						source="user";
						sourceIndex=0;
						refreshRate=0.1;
						min=0;
						max=1;
						sourceScale=1;
						maxPos[]={0,1};
						minPos[]={0,0};
					};
					class MovementX: MovementY
					{
						sourceIndex=1;
						maxPos[]={0,0};
						minPos[]={1,0};
					};
				};
					alpha=1;
					condition=1;
					class PlanePosition
					{
						width=8;
						points[]=
						{
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{0.0277778,0.07},
								1
							},
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{0.0277778,-0.029999999},
								1
							},
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{-0.0277778,-0.029999999},
								1
							},
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{-0.0277778,0.07},
								1
							},
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{0.0277778,0.07},
								1
							}
						};
					};
						alpha=1;
						condition=1;
						class Cross
						{
							width=8;
							points[]=
							{
								
								{
									"MovementY",
									1,
									"MovementX",
									1,
									{-0.0277778,0.02},
									1
								},
								
								{
									"MovementY",
									1,
									"MovementX",
									1,
									{0.0277778,0.02},
									1
								},
								{},
								
								{
									"MovementY",
									1,
									"MovementX",
									1,
									{0,-0.029999999},
									1
								},
								
								{
									"MovementY",
									1,
									"MovementX",
									1,
									{0,0.07},
									1
								},
								{}
							};
						};
					};
				};
			};
		};
		driverCanSee="2+4+8+16";
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1;
		incomingMissileDetectionSystem=8;
		lockDetectionSystem=8;
		soundIncommingMissile[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\alarm_beep",
			1.098107,
			1
		};
		soundLocked[]=
		{
			"",
			1.5848932,
			1
		};
		hideWeaponsCargo=0;
		cargoaction[]=
		{
			"RHS_HIND_Cargo"
		};
		driverCompartments=1;
		cargoCompartments[]=
		{
			"Compartment3"
		};
		cargoGetInAction[]=
		{
			"GetInHeli_Transport_01Cargo"
		};
		cargoGetOutAction[]=
		{
			"RHS_HIND_Cargo_Exit"
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vvs_c",
					"rhs_faction_vvs"
				};
			};
		};
		class Attributes
		{
			class rhs_hideExhaust
			{
				tooltip="Hide exhaust cover. WARNING: DUE TO HOW ENGINE WORKS IT DOESN'T CHANGE EXHAUST MEMORY POINTS";
				property="rhs_hideExhaust";
				control="CheckboxNumber";
				expression="_this animate ['exhaust_hide',_value,true]";
				defaultValue="0";
			};
			class rhs_opendoors
			{
				property="rhs_opendoors";
				control="CheckboxNumber";
				expression="_this animateDoor ['Door_Cargo',_value,true]";
				defaultValue="0";
			};
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI24NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default";
						value="NoChange";
					};
					class AviaYellow
					{
						name="Aviation Yellow";
						value="AviaYellow";
					};
					class AviaBlue
					{
						name="Aviation Blue";
						value="AviaBlue";
						defaultValue="AviaBlue";
					};
					class AviaRed
					{
						name="Aviation Red";
						value="AviaRed";
					};
					class AviaWhiteOut
					{
						name="Aviation White Out";
						value="AviaWhiteOut";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
					};
					class Default
					{
						name="Default (White)";
						value="Default";
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
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI24NumberPlaces}else{[_this, [['Number', cRHSAIRMI24NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail
			{
				tooltip="Define tail decalthat will be drawn on vehicle";
				property="rhs_decalTail";
				control="Combo";
				expression="[_this,[['Label', cRHSAIRMI24TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue=-1;
				class values
				{
					class Default
					{
						name="Default";
						value=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class VVS
					{
						name="VVS Russia";
						value=3;
						defaultValue=3;
					};
				};
			};
		};
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		selectionDamage="trup";
		selectionShowDamage="poskozeni";
		slingLoadMaxCargoMass=2400;
		precisegetinout=1;
		memoryPointsGetInDriverPrecise="pos driver";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointLRocket="rocket_1";
		memoryPointRRocket="rocket_2";
		memoryPointLMissile="missile_1";
		memoryPointRMissile="missile_2";
		memoryPointGun[]=
		{
			"machinegun",
			"machinegun2"
		};
		gunBeg[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunEnd[]=
		{
			"chamber_1",
			"chamber_2"
		};
		particlesPos="chamber_1";
		particlesDir="muzzle_1";
		selectionFireAnim="zasleh";
		primaryGunner=2;
		weaponsGroup1=128;
		weaponsGroup4=64;
		weapons[]=
		{
			"rhs_weap_DIRCM_Lipa",
			"rhs_weap_gsh30"
		};
		transportsoldier=4;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_fcs_mi24"
				};
				viewGunnerShadow=1;
				precisegetinout=1;
				commanding=0;
				primaryGunner=1;
				isCopilot=1;
				selectionFireAnim="";
				memoryPointGun="";
				initelev=4;
				initturn=0;
				maxelev=20;
				minelev=-60;
				maxturn=60;
				minturn=-60;
				particlesPos="";
				particlesDir="";
				canHideGunner=0;
				usePiP=1;
				stabilizedInAxes=3;
				turretinfotype="RHS_RscWeaponMi24_FCS";
				canUseScanners=0;
				allowTabLock=0;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.155;
					maxanglex=50;
					maxangley=100;
					maxfov=0.155;
					minanglex=-50;
					minangley=-100;
					minfov=0.046999998;
				};
				gunneropticseffect[]=
				{
					"OpticsBlur2",
					"OpticsCHAbera2"
				};
				class OpticsIn
				{
					class KPS53AV
					{
						initanglex=0;
						initangley=0;
						maxanglex=30;
						maxangley=100;
						initfov=0.69999999;
						maxfov=0.69999999;
						minfov=0.69999999;
						minanglex=-30;
						minangley=-100;
						thermalmode[]={0,1};
					};
					class 9S475_3
					{
						camPos="view_9s475";
						hitpoint="Hit_Optic_9S475";
						initanglex=0;
						initangley=0;
						maxanglex=30;
						maxangley=100;
						initfov=0.21212099;
						maxfov=0.21212099;
						minfov=0.21212099;
						minanglex=-30;
						minangley=-100;
						thermalmode[]={0,1};
						visionmode[]=
						{
							"Normal"
						};
					};
					class 9S475_10: 9S475_3
					{
						initfov=0.07;
						maxfov=0.07;
						minfov=0.07;
						directionStabilized=1;
					};
				};
				class OpticsOut
				{
					class KPS53AV
					{
						initanglex=0;
						initangley=0;
						maxanglex=30;
						maxangley=100;
						initfov=0.69999999;
						maxfov=0.69999999;
						minfov=0.69999999;
						minanglex=-30;
						minangley=-100;
						thermalmode[]={0,1};
						visionmode[]=
						{
							"Normal"
						};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
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
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
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
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=7;
				maxTurn=34;
				minTurn=-30;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=6;
				maxTurn=25;
				minTurn=-44;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=8;
				maxTurn=31;
				minTurn=-25;
			};
		};
		class Components: Components
		{
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
						animDirection="mainGun";
						maxTrackableSpeed=30;
						angleRangeHorizontal=28;
						angleRangeVertical=22;
						maxFogSeeThrough=0.34999999;
						nightRangeCoef=0.1;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				class Components: components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi24_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_B13L1",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_fab250";
						maxweight=550;
						UIposition[]={0.50300002,0.30000001};
						turret[]={0};
					};
						mirroredMissilePos=1;
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23",
							"RHS_HP_9m17_Mi24",
							"RHS_HP_9m114_Mi24",
							"RHS_HP_9m120_Mi24"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=400;
						UIposition[]={0.583,0.34999999};
						turret[]={};
					};
						mirroredMissilePos=3;
					};
					class pylon5: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_9m17_Mi24",
							"RHS_HP_9m114_Mi24",
							"RHS_HP_9m120_Mi24",
							"RHS_HP_Empty_Mi24"
						};
						bay=1;
						attachment="rhs_mag_9M120M_Mi24_2x";
						maxweight=150;
						UIposition[]={0.62800002,0.40000001};
						turret[]={0};
					};
						mirroredMissilePos=5;
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4"
						};
						attachment="rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
				class Bays
				{
					class 9S475_Hatch
					{
						bayOpenTime=1;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=-1;
					};
				};
				class Presets
				{
					class Bomb
					{
						attachment[]=
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Bomb";
					};
					class UPK
					{
						attachment[]=
						{
							"rhs_mag_upk23_mixed",
							"rhs_mag_upk23_mixed",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="UPK-23-250";
					};
					class AT
					{
						attachment[]=
						{
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Anti Tank";
					};
					class CAS
					{
						attachment[]=
						{
							"rhs_mag_b8v20a_s8df",
							"rhs_mag_b8v20a_s8df",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support";
					};
				};
			};
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1h_dir";
				position="exhaust1h";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2h_dir";
				position="exhaust2h";
				effect="ExhaustEffectHeli";
			};
		};
		armor=45;
		damageresistance=0.00034500001;
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor=1.3;
				radius=0.125;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.6;
				radius=0.40000001;
				minimalHit=0.15000001;
				explosionShielding=1.5;
			};
			class HitEngine1: HitEngine1
			{
				armor=1.63;
				radius=0.34999999;
				explosionShielding=3;
				minimalHit=0.1;
				name="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine2
			{
				armor=999;
				name="engine_hit";
				convexComponent="engine_hit";
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitVRotor
			{
				armor=0.5;
				explosionShielding=1;
				material=51;
				passThrough=0.30000001;
				name="tail_rotor_hit";
			};
			class HitHRotor
			{
				armor=0.5;
				explosionShielding=1;
				material=51;
				passThrough=0.1;
				name="main_rotor_hit";
			};
			class HitGlass1: HitGlass1
			{
				armor=14.75;
				explosionShielding=2;
				radius=0.34999999;
				minimalHit=0.001;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.44999999;
				armorComponent="glass2";
				explosionShielding=1.5;
				radius=0.2;
				minimalHit=0.0099999998;
			};
			class HitGlass3: HitGlass3
			{
				armor=14.75;
				armorComponent="glass3";
				explosionShielding=2;
				radius=0.34999999;
				minimalHit=0.001;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.44999999;
				armorComponent="glass4";
				explosionShielding=1.5;
				radius=0.34999999;
				minimalHit=0.0099999998;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.44999999;
				armorComponent="glass5";
				explosionShielding=1.5;
				radius=0.30000001;
				minimalHit=0.0099999998;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.44999999;
				armorComponent="glass6";
				explosionShielding=1.5;
				radius=0.34999999;
				minimalHit=0.050000001;
			};
			class Hit_Optic_9S475
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_9S475";
				passThrough=0;
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
		};
		class compartmentsLights
		{
			class Comp1
			{
					ambient[]={0,0,0};
					intensity=2.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.55000001;
						hardLimitEnd=0.94999999;
					};
					point="light_pilot";
				};
			};
			class Comp2
			{
					ambient[]={0,0,0};
					intensity=3.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.75;
						hardLimitEnd=1.05;
					};
					point="light_gunner";
				};
			};
		};
		class markerlights
		{
			class GreenStill
			{
				activeLight=0;
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=55;
				blinking=0;
				brightness=0.0099999998;
				flareSize=0.5;
				name="zeleny pozicni";
				useFlare=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
			};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
			};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				name="bily pozicni blik";
			};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="cerveny pozicni blik";
			};
		};
		class EventHandlers: Eventhandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init";
				getIn="_this call rhs_fnc_mi24_doors";
				getOut="_this call rhs_fnc_mi24_doors";
			};
		};
	};
	class RHS_Mi24V_Base: RHS_Mi24_base
	{
		tf_isolatedAmount_api=0.60000002;
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={-0.12,8.5,-2.21};
		LESH_WheelOffset[]={-0.12,1};
		weapons[]=
		{
			"rhs_weap_DIRCM_Lipa"
		};
		selectionFireAnim="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_yakB",
					"rhs_weap_fcs_mi24"
				};
				memoryPointGun="chamber_1";
				particlesPos="chamber_1";
				particlesDir="muzzle_1";
				selectionFireAnim="";
				maxhorizontalrotspeed=1.6;
				maxverticalrotspeed=1.6;
				initelev=4;
				initturn=0;
				maxelev=20;
				minelev=-60;
				maxturn=60;
				minturn=-60;
				primarygunner=1;
				stabilizedInAxes=2;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8df";
						turret[]={};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8df";
						turret[]={};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
				};
			};
		};
		memoryPointGun[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
		gunBeg[]=
		{
			"chase01dir",
			"chase02dir",
			"chase03dir",
			"chase04dir"
		};
		gunEnd[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
	};
	class RHS_Mi24D_Base: RHS_Mi24V_Base
	{
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
		weapons[]={};
		magazines[]={};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_yakB",
					"rhs_weap_2K8_launcher"
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_ub32_s5ko";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_ub32_s5ko";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_ub32_s5k1";
						turret[]={};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_ub32_s5k1";
						turret[]={};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_9M17P_Mi24_2x";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_9M17P_Mi24_2x";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_Mi24D_Early_Base: RHS_Mi24D_Base
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_ub32_s5ko";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_ub32_s5ko";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_ub32_s5k1";
						turret[]={};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_ub32_s5k1";
						turret[]={};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_9M17_Mi24_2x";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_9M17_Mi24_2x";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_Mi24P_VVS_Base: RHS_Mi24_base
	{
		accuracy=0.5;
		side=0;
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0.5,8.5,-2.21};
		LESH_WheelOffset[]={0.5,1};
	};
	class RHS_Mi24P_vvsc: RHS_Mi24P_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};
	class RHS_Mi24P_CAS_VVS_Base: RHS_Mi24P_VVS_Base
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8df";
						turret[]={};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8df";
						turret[]={};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_Mi24P_CAS_vvsc: RHS_Mi24P_CAS_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};
	class RHS_Mi24P_CAS_vdv: RHS_Mi24P_CAS_VVS_Base
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};
	class RHS_Mi24P_AT_VVS_Base: RHS_Mi24P_VVS_Base
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};
	class RHS_Mi24P_AT_vdv: RHS_Mi24P_AT_VVS_Base
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};
	class RHS_Mi24P_vdv: RHS_Mi24P_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};
	class RHS_Mi24V_VVS_Base: RHS_Mi24V_Base
	{
		accuracy=0.5;
		side=0;
	};
	class RHS_Mi24V_vvsc: RHS_Mi24V_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi24V_FAB_VVS_Base: RHS_Mi24V_VVS_Base
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_fab250";
						turret[]={0};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_fab250";
						turret[]={0};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_Mi24V_FAB_vvsc: RHS_Mi24V_FAB_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};
	class RHS_Mi24V_FAB_vdv: RHS_Mi24V_FAB_VVS_Base
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};
	class RHS_Mi24V_UPK23_VVS_Base: RHS_Mi24V_VVS_Base
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_upk23_mixed";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_upk23_mixed";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};
	class RHS_Mi24V_UPK23_vdv: RHS_Mi24V_UPK23_VVS_Base
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};
	class RHS_Mi24V_AT_VVS_Base: RHS_Mi24V_VVS_Base
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_9M120M_Mi24_2x";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};
	class RHS_Mi24V_AT_vdv: RHS_Mi24V_AT_VVS_Base
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};
	class RHS_Mi24Vt_vvs: RHS_Mi24V_vvs
	{
		slingLoadMaxCargoMass=2400;
		slingLoadMemoryPoint="slingLoad0";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={-0.12,8.5,-2.21};
		LESH_WheelOffset[]={-0.12,1};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsDisplayManagerComponentLeft
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
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsDisplayManagerComponentRight
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
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
				};
			};
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons
				{
					UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi24_EDEN_CA.paa";
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4"
						};
						attachment="rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
			};
		};
	};
	class RHS_Mi24Vt_vvsc: RHS_Mi24Vt_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
			};
		};
	};
	class RHS_Mi24V_vdv: RHS_Mi24V_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
	};
	class RHS_Mi8_base: Heli_Light_02_base_F
	{
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,7.5,-2.4000001};
		LESH_WheelOffset[]={0,0.60000002};
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaYellow']"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		mapsize=25;
		maxspeed=240;
		fuelCapacity=1870;
		AGM_fuelCapacity=1870;
		fuelConsumptionRate=0.33000001;
		mainBladeRadius=11;
		backRotorForceCoef=0.89999998;
		tailBladeCenter="tail_blade_center";
		mainBladeCenter="main_blade_center";
		altFullForce=4500;
		altNoForce=6000;
		mainRotorSpeed=1;
		backrotorspeed=1;
		liftForceCoef=1;
		numberPhysicalWheels=3;
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="rhsafrf\addons\rhs_c_a2port_air\Mi17\RTD_MI8.xml";
			autoHoverCorrection[]={4.3000002,-1.7,0};
			defaultCollective=0.66500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=201754;
			stressDamagePerSec=0.0033333299;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=320000;
			maxTailRotorStress=60000;
		};
		displayname="$STR_RHS_MI8_Name";
		typicalCargo[]=
		{
			"rhs_pilot_transport_heli"
		};
		cargoaction[]=
		{
			"RHS_Mi17_Cargo02"
		};
		drivercompartments="Compartment1";
		cargocompartments[]=
		{
			"Compartment1",
			"Compartment1"
		};
		armor=25;
		armorStructural=2;
		audible=6;
		cargoiscodriver[]={1,0};
		cost=900000;
		damageresistance=0.0017199999;
		irTarget=1;
		irTargetSize=0.89999998;
		radarTarget=1;
		radarTargetSize=1;
		LockDetectionSystem="0";
		incomingMissileDetectionSystem="0";
		weapons[]={};
		magazines[]={};
		driveraction="RHS_Mi8_Pilot";
		driverinaction="RHS_Mi8_Pilot";
		precisegetinout=0;
		GetInAction="GetInHeli_Transport_01Cargo";
		enablemanualfire=0;
		maxOmega=2000;
		engineMOI=10;
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class Wheel_1
			{
				steering=1;
				side="left";
				suspTravelDirection[]={0,-1,0};
				width=0.48800001;
				mass=15;
				MOI=0.62208003;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				maxCompression=0;
				maxDroop=0.1;
				sprungMass=200;
				springStrength=600;
				springDamperRate=99280;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=2.5;
				latStiffY=18;
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
				side="left";
				sprungMass=667;
				MOI=1.323;
				width=0.27000001;
				maxDroop=0.2;
			};
			class Wheel_3: Wheel_2
			{
				side="right";
			};
		};
		gearRetracting=0;
		driveOnComponent[]=
		{
			"wheels"
		};
		drivercansee="2+4+16";
		slingLoadMaxCargoMass=2700;
		maximumLoad=3500;
		supplyradius=2.5;
		transportammo=0;
		transportmaxbackpacks=10;
		transportsoldier=15;
		threat[]={0.5,0,0};
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		selectionDamage="trup";
		selectionShowDamage="poskozeni";
		memoryPointLRocket="l raketa";
		memoryPointRRocket="p raketa";
		memoryPointLMissile="l strela";
		memoryPointRMissile="p strela";
		memoryPointGun[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
		hiddenselectionstextures[]=
		{
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class textureSources
		{
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI8NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default";
						value="NoChange";
					};
					class AviaYellow
					{
						name="Aviation Yellow";
						value="AviaYellow";
					};
					class AviaBlue
					{
						name="Aviation Blue";
						value="AviaBlue";
						defaultValue="AviaBlue";
					};
					class AviaRed
					{
						name="Aviation Red";
						value="AviaRed";
					};
					class AviaWhiteOut
					{
						name="Aviation White Out";
						value="AviaWhiteOut";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
					};
					class Default
					{
						name="Default (White)";
						value="Default";
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
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI8NumberPlaces}else{[_this, [['Number', cRHSAIRMI8NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail
			{
				tooltip="Define tail decalthat will be drawn on vehicle";
				property="rhs_decalTail";
				control="Combo";
				expression="[_this,[['Label', cRHSAIRMI8TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue=-1;
				class values
				{
					class Default
					{
						name="Default";
						value=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class VVS
					{
						name="VVS Russia";
						value=3;
						defaultValue=3;
					};
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_NoPylon_EDEN_CA.paa";
				class pylons
				{
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4",
							"RHS_cm_ASO2_x6"
						};
						attachment="rhs_ASO2_CMFlare_Chaff_Magazine_x6";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
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
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
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
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyindex=3;
				precisegetinout=0;
				canEject=0;
				commanding=-1;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
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
							class SlingLoadDisplay
							{
								componentType="SlingLoadDisplayComponent";
								resource="RscCustomInfoSlingLoad";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
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
							class SlingLoadDisplay
							{
								componentType="SlingLoadDisplayComponent";
								resource="RscCustomInfoSlingLoad";
							};
						};
					};
				};
			};
			class MainTurret: MainTurret
			{
				memorypointgun="muzzle_1";
				memorypointgunneroptics="gunnerview";
				LODTurnedOut=1000;
				LODTurnedIn=1000;
				LODOpticsOut=1000;
				LODOpticsIn=1000;
				commanding=-2;
				weapons[]=
				{
					"rhs_weap_pkt_v1"
				};
				primarygunner=0;
				initelev=-60;
				initturn=90;
				maxelev=25;
				maxturn=130;
				minelev=-80;
				minturn=30;
				stabilizedinaxes=0;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.69999999;
					maxanglex=30;
					maxangley=100;
					maxfov=1.1;
					minanglex=-30;
					minangley=-100;
					minfov=0.25;
				};
				isCoPilot=0;
				showAsCargo=1;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
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
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="";
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
						};
					};
				};
			};
			class BackTurret: MainTurret
			{
				commanding=-3;
				LODTurnedOut=1000;
				LODTurnedIn=1000;
				LODOpticsOut=1000;
				LODOpticsIn=1000;
				animationsourcebody="Turret_2";
				animationsourcegun="Gun_2";
				memorypointgun="muzzle_2";
				memorypointgunneroptics="gunnerview2";
				selectionfireanim="zasleh2";
				initelev=-60;
				initturn=-155;
				maxelev=25;
				maxturn=-45;
				minelev=-80;
				minturn=-185;
				primarygunner=0;
				proxyindex=2;
				stabilizedinaxes=0;
				weapons[]=
				{
					"rhs_weap_pkt_v2"
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=999;
				name="hull_hit";
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor="5*2";
				radius=0.25;
				minimalHit=0.050000001;
			};
			class HitEngine1
			{
				armor="0.7*2";
				radius=0.40000001;
				material=-1;
				explosionShielding=3;
				minimalHit=0.1;
				passThrough=1;
				name="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine2
			{
				armor=999;
				name="engine_hit";
				convexComponent="engine_hit";
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitAvionics
			{
				armor="0.15*2";
				explosionShielding=1;
				material=51;
				passThrough=1;
				name="avionics_hit";
			};
			class HitVRotor
			{
				armor="0.5*2";
				explosionShielding=1;
				material=51;
				passThrough=0.30000001;
				name="tail_rotor_hit";
			};
			class HitHRotor
			{
				armor="0.5*2";
				explosionShielding=1;
				material=51;
				passThrough=0.1;
				name="main_rotor_hit";
			};
			class HitHydraulics
			{
				armor=-50;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="hit_hydraulics";
			};
			class HitTransmission
			{
				armor=-80;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="hit_transmission";
			};
			class HitTail
			{
				armor=-150;
				explosionShielding=0.2;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				armorComponent="Hit_Tail";
				name="Hit_Tail";
			};
			class HitGlass1
			{
				armor=-10;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass1";
				name="glass1";
			};
			class HitGlass2
			{
				armor=-10;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass2";
				name="glass2";
			};
			class HitGlass3
			{
				armor=-10;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass3";
				name="glass3";
			};
			class HitGlass4
			{
				armor=-10;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass4";
				name="glass4";
			};
			class HitGlass5
			{
				armor=-10;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass5";
				name="glass5";
			};
			class HitGlass6
			{
				armor=-10;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass6";
				name="glass6";
			};
			class HitGlass7
			{
				armor=-10;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass7";
				name="glass7";
			};
			class HitGlass8
			{
				armor=-10;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass8";
				name="glass8";
			};
			class HitPylon1
			{
				armor=-30;
				material=-1;
				name="hit_pylon_1";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon2
			{
				armor=-30;
				material=-1;
				name="hit_pylon_2";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon3
			{
				armor=-30;
				material=-1;
				name="hit_pylon_3";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon4
			{
				armor=-30;
				material=-1;
				name="hit_pylon_4";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon5
			{
				armor=-30;
				material=-1;
				name="hit_pylon_5";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon6
			{
				armor=-30;
				material=-1;
				name="hit_pylon_6";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
		};
		class MarkerLights
		{
			class GreenStill
			{
				activeLight=0;
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=55;
				blinking=0;
				brightness=0.0099999998;
				flareSize=0.5;
				name="zeleny pozicni";
				useFlare=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
			};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
			};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				name="bily pozicni blik";
			};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="cerveny pozicni blik";
			};
		};
		class EventHandlers: Eventhandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init";
			};
			class BIS_Randomisation
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
			};
		};
	};
	class rhs_mi8mtv3_base: RHS_Mi8_base
	{
		transportsoldier=13;
		cost=2000000;
		threat[]={0.80000001,0.80000001,0.60000002};
		drivercompartments="Compartment1";
		cargocompartments[]=
		{
			"Compartment1"
		};
		cargoiscodriver[]={0};
		tf_isolatedAmount_api=0.40000001;
		LockDetectionSystem="8";
		incomingMissileDetectionSystem="8";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				LODOpticsOut=1100;
				LODOpticsIn=1100;
				proxyindex=4;
				class Components
				{
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
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class SlingLoadDisplay
							{
								componentType="SlingLoadDisplayComponent";
								resource="RscCustomInfoSlingLoad";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								resource="RscCustomInfoSensors";
								range[]={3000,8000,16000,35000};
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="";
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
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class SlingLoadDisplay
							{
								componentType="SlingLoadDisplayComponent";
								resource="RscCustomInfoSlingLoad";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								resource="RscCustomInfoSensors";
								range[]={3000,8000,16000,35000};
							};
						};
					};
				};
			};
			class SideTurret: MainTurret
			{
				commanding=-4;
				primarygunner=0;
				proxyindex=2;
				LODTurnedOut=1000;
				LODTurnedIn=1000;
				LODOpticsOut=1000;
				LODOpticsIn=1000;
			};
			class BackTurret: BackTurret
			{
				commanding=-3;
				primarygunner=0;
				proxyindex=3;
			};
			class FrontTurret: MainTurret
			{
				animationsourcebody="Turret_3";
				animationsourcegun="Gun_3";
				commanding=-2;
				initelev=-10;
				initturn=0;
				maxelev=25;
				maxturn=35;
				memorypointgun="muzzle_3";
				memorypointgunneroptics="gunnerview3";
				minelev=-45;
				minturn=-35;
				primarygunner=0;
				proxyindex=1;
				selectionfireanim="zasleh3";
				stabilizedinaxes=0;
				weapons[]=
				{
					"rhs_weap_pkt_v3"
				};
				LODTurnedOut=1000;
				LODTurnedIn=1000;
				LODOpticsOut=1000;
				LODOpticsIn=1000;
			};
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1h_dir";
				position="exhaust1h";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2h_dir";
				position="exhaust2h";
				effect="ExhaustEffectHeli";
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_B13L1",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=1200;
						UIposition[]={0.52499998,0.47999999};
						hitpoint="HitPylon1";
					};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8df";
						maxweight=1200;
						UIposition[]={0.57499999,0.43000001};
						hitpoint="HitPylon3";
					};
						mirroredMissilePos=3;
						hitpoint="HitPylon4";
					};
						attachment="";
						maxweight=400;
						UIposition[]={0,0.60000002};
					};
						mirroredMissilePos=5;
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4",
							"RHS_cm_ASO2_x6"
						};
						attachment="rhs_ASO2_CMFlare_Chaff_Magazine_x6";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
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
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						resource="RscCustomInfoSensors";
						range[]={3000,8000,16000,35000};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="";
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
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
						resource="RscCustomInfoSlingLoad";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						resource="RscCustomInfoSensors";
						range[]={3000,8000,16000,35000};
					};
				};
			};
		};
	};
	class rhs_mi8mtv3_heavy_base: rhs_mi8mtv3_base
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_Hvy_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_B13L1",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=800;
						UIposition[]={0.52499998,0.47999999};
						hitpoint="HitPylon1";
					};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=800;
						UIposition[]={0.57499999,0.43000001};
						hitpoint="HitPylon3";
					};
						mirroredMissilePos=3;
						hitpoint="HitPylon4";
					};
					class pylon5: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=400;
						UIposition[]={0.625,0.38};
						hitpoint="HitPylon5";
					};
						mirroredMissilePos=5;
						hitpoint="HitPylon6";
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4",
							"RHS_cm_ASO2_x6"
						};
						attachment="rhs_ASO2_CMFlare_Chaff_Magazine_x6";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
			};
		};
	};
	class rhs_mi8amtsh_base: rhs_mi8mtv3_base
	{
		driveraction="RHS_Mi8_PilotV2";
		driverinaction="RHS_Mi8_PilotV2";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyindex=4;
				LODTurnedOut=1200;
				LODTurnedIn=1200;
				LODOpticsOut=1200;
				LODOpticsIn=1200;
			};
			class BackTurret: BackTurret
			{
				initturn=180;
				maxturn=235;
				maxElev=15;
				minturn=130;
				initElev=-41;
				minElev=-51;
			};
			class FrontTurret: FrontTurret
			{
				initturn=-70;
				maxturn=-30;
				minturn=-121;
			};
		};
		drivercompartments="Compartment1";
		cargocompartments[]=
		{
			"Compartment1"
		};
		cargoiscodriver[]={0};
		hiddenselectionstextures[]=
		{
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi_171_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vvs_c",
					"rhs_faction_vvs"
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_B13L1",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=1200;
						UIposition[]={0.52499998,0.47999999};
						hitpoint="HitPylon1";
					};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8df";
						maxweight=1200;
						UIposition[]={0.57499999,0.43000001};
						hitpoint="HitPylon3";
					};
						mirroredMissilePos=3;
						hitpoint="HitPylon4";
					};
					class pylon5: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=400;
						UIposition[]={0.625,0.38};
						hitpoint="HitPylon5";
					};
						mirroredMissilePos=5;
						hitpoint="HitPylon6";
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4"
						};
						attachment="rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
			};
		};
	};
	class rhs_mi8t_base: RHS_Mi8_base
	{
		accuracy=1.5;
		tf_isolatedAmount_api=0.5;
		hasGunner=0;
		transportsoldier=13;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_NoPylon_EDEN_CA.paa";
				class pylons
				{
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4"
						};
						attachment="";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyindex=1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=14;
				maxTurn=85;
				minTurn=15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=2;
				maxTurn=35;
				minTurn=-8;
				enabledByAnimationSource="LeftDoor";
			};
		};
		hiddenselectionstextures[]=
		{
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8t_tv2_g_vsr_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vvs_c",
					"rhs_faction_vvs"
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_reardoors
			{
				property="rhs_opendoors";
				control="CheckboxNumber";
				expression="[_this,14,15,true] call rhs_fnc_mi8_checkDoor";
				defaultValue="0";
			};
			class rhs_leftdoor: rhs_reardoors
			{
				property="rhs_leftdoor";
				expression="_this animateDoor ['LeftDoor',_value,true]";
			};
		};
		attendant=1;
		threat[]={0,0,0};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getIn="_this call rhs_fnc_mi8_doors";
				getOut="_this call rhs_fnc_mi8_doors";
			};
		};
	};
	class rhs_mi8amt_base: RHS_Mi8_base
	{
		accuracy=1.5;
		tf_isolatedAmount_api=0.5;
		hasGunner=0;
		transportsoldier=13;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyindex=1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=14;
				maxTurn=85;
				minTurn=15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=2;
				maxTurn=35;
				minTurn=-8;
				enabledByAnimationSource="LeftDoor";
			};
		};
		class Attributes: Attributes
		{
			class rhs_reardoors
			{
				property="rhs_opendoors";
				control="CheckboxNumber";
				expression="[_this,14,15,true] call rhs_fnc_mi8_checkDoor";
				defaultValue="0";
			};
			class rhs_leftdoor: rhs_reardoors
			{
				property="rhs_leftdoor";
				expression="_this animateDoor ['LeftDoor',_value,true]";
			};
		};
		attendant=1;
		threat[]={0,0,0};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getIn="_this call rhs_fnc_mi8_doors";
				getOut="_this call rhs_fnc_mi8_doors";
			};
		};
	};
	class RHS_Mi8_VVS_Base: RHS_Mi8_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_pilot_transport_heli"
		};
	};
	class RHS_Mi8MTV3_VVS_Base: rhs_mi8mtv3_base
	{
		side=0;
	};
	class RHS_Mi8MTV3_Heavy_VVS_Base: rhs_mi8mtv3_heavy_base
	{
		side=0;
	};
	class RHS_Mi8AMTSh_VVS_Base: rhs_mi8amtsh_base
	{
		side=0;
	};
	class RHS_Mi8T_VVS_Base: rhs_mi8t_base
	{
		side=0;
	};
	class RHS_Mi8AMT_VVS_Base: rhs_mi8amt_base
	{
		side=0;
	};
	class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base
	{
		transportsoldier=14;
	};
	class RHS_Mi8mt_vvsc: RHS_Mi8mt_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8mt_vdv: RHS_Mi8mt_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8mt_vv: RHS_Mi8mt_vdv
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8mt_Cargo_vvs: RHS_Mi8mt_vvs
	{
		transportsoldier=13;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=13;
				maxTurn=85;
				minTurn=15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=16;
				maxTurn=35;
				minTurn=-8;
				enabledByAnimationSource="LeftDoor";
			};
		};
		class Attributes: Attributes
		{
			class rhs_reardoors
			{
				property="rhs_opendoors";
				control="CheckboxNumber";
				expression="[_this,13,14,true] call rhs_fnc_mi8_checkDoor";
				defaultValue="0";
			};
			class rhs_leftdoor: rhs_reardoors
			{
				property="rhs_leftdoor";
				expression="_this animateDoor ['LeftDoor',_value,true]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getIn="_this call rhs_fnc_mi8_doors";
				getOut="_this call rhs_fnc_mi8_doors";
			};
		};
	};
	class RHS_Mi8mt_Cargo_vvsc: RHS_Mi8mt_Cargo_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8mt_Cargo_vdv: RHS_Mi8mt_Cargo_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8mt_Cargo_vv: RHS_Mi8mt_Cargo_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8MTV3_vvsc: RHS_Mi8MTV3_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8MTV3_vdv: RHS_Mi8MTV3_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8MTV3_UPK23_vvs: RHS_Mi8MTV3_vvs
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_upk23_mixed";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_upk23_mixed";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8kom";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8kom";
					};
				};
			};
		};
		memoryPointGun[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
		gunBeg[]=
		{
			"chase01dir",
			"chase02dir",
			"chase03dir",
			"chase04dir"
		};
		gunEnd[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
	};
	class RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8MTV3_UPK23_vdv: RHS_Mi8MTV3_UPK23_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8MTV3_FAB_vvs: RHS_Mi8MTV3_vvs
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_fab250";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_fab250";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8kom";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8kom";
					};
				};
			};
		};
	};
	class RHS_Mi8MTV3_FAB_vvsc: RHS_Mi8MTV3_FAB_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8MTV3_FAB_vdv: RHS_Mi8MTV3_FAB_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8mtv3_Cargo_vvs: RHS_Mi8MTV3_vvs
	{
		transportsoldier=12;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=12;
				maxTurn=85;
				minTurn=15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=16;
				maxTurn=35;
				minTurn=-8;
				enabledByAnimationSource="LeftDoor";
			};
		};
		class Attributes: Attributes
		{
			class rhs_reardoors
			{
				property="rhs_opendoors";
				control="CheckboxNumber";
				expression="[_this,12,14,true] call rhs_fnc_mi8_checkDoor";
				defaultValue="0";
			};
			class rhs_leftdoor: rhs_reardoors
			{
				property="rhs_leftdoor";
				expression="_this animateDoor ['LeftDoor',_value,true]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				getIn="_this call rhs_fnc_mi8_doors";
				getOut="_this call rhs_fnc_mi8_doors";
			};
		};
	};
	class RHS_Mi8mtv3_Cargo_vvsc: RHS_Mi8mtv3_Cargo_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8mtv3_Cargo_vdv: RHS_Mi8mtv3_Cargo_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8MTV3_heavy_vvsc: RHS_Mi8MTV3_heavy_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8MTV3_heavy_vdv: RHS_Mi8MTV3_heavy_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8T_vvsc: RHS_Mi8T_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8T_vdv: RHS_Mi8T_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8t_vv: RHS_Mi8T_vvs
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo3_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8AMT_vvsc: RHS_Mi8AMT_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8AMT_vdv: RHS_Mi8AMT_vvsc
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8AMTSh_vvsc: RHS_Mi8AMTSh_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8AMTSh_UPK23_vvs: RHS_Mi8AMTSh_vvs
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_upk23_mixed";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_upk23_mixed";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8kom";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8kom";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_b8v20a_s8df";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_b8v20a_s8df";
					};
				};
			};
		};
		memoryPointGun[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
		gunBeg[]=
		{
			"chase01dir",
			"chase02dir",
			"chase03dir",
			"chase04dir"
		};
		gunEnd[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
	};
	class RHS_Mi8AMTSh_UPK23_vvsc: RHS_Mi8AMTSh_UPK23_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Mi8AMTSh_FAB_vvs: RHS_Mi8AMTSh_vvs
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_fab250";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_fab250";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8kom";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8kom";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_b8v20a_s8df";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_b8v20a_s8df";
					};
				};
			};
		};
	};
	class RHS_Mi8AMTSh_FAB_vvsc: RHS_Mi8AMTSh_FAB_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
		side=3;
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_body_g_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_det_g_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa"
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class cmDispenser: cmDispenser
					{
						attachment="";
					};
				};
			};
		};
	};
		side=3;
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_body_g_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_det_g_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8tcivil_tv2_g_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa"
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class cmDispenser: cmDispenser
					{
						attachment="";
					};
				};
			};
		};
	};
	class RHS_su25_base: O_Plane_CAS_02_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRSU25NumberPlaces,'AviaRed']",
			"['Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt']",
			"['Label', cRHSAIRSU25SidePlaces, 'Su25Ex']"
		};
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1;
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,6.8000002,-2.04};
		LESH_WheelOffset[]={0,-0.69999999};
		typicalCargo[]=
		{
			"rhs_pilot"
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		icon="\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_su25.paa";
		displayname="$STR_RHS_SU25_Name";
		driverLeftLegAnimName="pedal_L";
		driverRightLegAnimName="pedal_R";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInDriverPrecise="pos driver";
		driverWeaponsInfoType="RHS_RscOptics_Su25_KlenPS";
		HeadAimDown=6;
		headGforceLeaningFactor[]={0.0049999999,0.001,0.015};
		driverCanSee="2+4+8+16";
		allowTabLock=0;
		driverCanEject=1;
		driverCompartments=1;
		ejectDamageLimit=1;
		memoryPointDriverOptics="pilotCamera";
		class PilotCamera
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
					initFov="(10 / 120)";
					minFov="(60 / 120)";
					maxFov="(60 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
			};
			minTurn=-12;
			maxTurn=12;
			initTurn=0;
			minElev=-6;
			maxElev=16;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-0;
		};
		weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"rhs_weap_klen_ps",
			"rhs_weap_GSh302"
		};
		weaponsGroup1=128;
		weaponsGroup4=64;
		memoryPointGun[]=
		{
			"kulomet",
			"kulomet2"
		};
		gunBeg[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunEnd[]=
		{
			"chamber_1",
			"chamber_2"
		};
		selectionFireAnim="zasleh";
		memoryPointLDust="levy prach";
		memoryPointRDust="pravy prach";
		memoryPointLRocket="rocket_1";
		memoryPointRRocket="rocket_2";
		memoryPointLMissile="missile_1";
		memoryPointRMissile="missile_2";
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
		selectionDamage="trup";
		selectionShowDamage="poskozeni";
		armor=60;
		damageResistance=0.0048000002;
		armorStructural=2;
		epeImpulseDamageCoef=1;
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
				armor=1;
				explosionShielding=0.60000002;
				passThrough=0.050000001;
				minimalHit=0.1;
				radius=0.079999998;
				material=-1;
				name="hit_avionics";
				depends="0";
			};
			class HitEngine
			{
				armor=1;
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
				armor=1;
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
				armor=1.4;
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
				armor=1;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				material=-1;
				name="hit_fuel_wing_l";
				depends="0";
			};
			class HitFuel_right
			{
				armor=1;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
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
				radius=0.039999999;
				material=-1;
				name="hit_control_rear";
				depends="0";
			};
			class HitLCElevator
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
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
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_elevator_r";
				depends="HitControlRear";
			};
			class HitLCRudder
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_rudder";
				depends="HitControlRear";
			};
			class HitGlass1
			{
				armor=0.5;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.30000001;
				material=-1;
				name="glass1";
				depends="0";
			};
			class HitGlass2
			{
				armor=0.5;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.30000001;
				material=-1;
				name="glass2";
				depends="0";
			};
			class Ind_Fire1
			{
				armor=999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="HitEngine*0.5";
			};
			class Ind_Fire2
			{
				armor=999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="HitEngine2*0.5";
			};
			class Ind_Hydr_L
			{
				armor=999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="(HitLAileron+HitLCElevator+HitLCRudder)*0.5";
			};
			class Ind_Hydr_R
			{
				armor=999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="(HitRAileron+HitRElevator)*0.5";
			};
			class HitPylon1
			{
				armor=-30;
				material=-1;
				name="hit_pylon_1";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon2
			{
				armor=-30;
				material=-1;
				name="hit_pylon_2";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon3
			{
				armor=-30;
				material=-1;
				name="hit_pylon_3";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon4
			{
				armor=-30;
				material=-1;
				name="hit_pylon_4";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon5
			{
				armor=-30;
				material=-1;
				name="hit_pylon_5";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon6
			{
				armor=-30;
				material=-1;
				name="hit_pylon_6";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon7
			{
				armor=-30;
				material=-1;
				name="hit_pylon_7";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon8
			{
				armor=-30;
				material=-1;
				name="hit_pylon_8";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon9
			{
				armor=-30;
				material=-1;
				name="hit_pylon_9";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon10
			{
				armor=-30;
				material=-1;
				name="hit_pylon_10";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
		};
		incomingMissileDetectionSystem=8;
		lockDetectionSystem=8;
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"n1",
			"n2",
			"i1",
			"i2",
			"tail_decals"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_rus_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_rus_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vvs"
				};
			};
			class Camo: standard
			{
				factions[]=
				{
					"rhs_faction_vvs_c"
				};
			};
		};
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Su25_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_KH29",
							"RHS_HP_FAB100",
							"RHS_HP_FAB100_MBD3_U4T",
							"RHS_HP_FAB100_MBD3_U6",
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_O25L",
							"RHS_HP_APU68M3_S24",
							"RHS_HP_B13L",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73"
						};
						attachment="rhs_mag_fab250";
						hitpoint="HitPylon1";
						maxweight=1200;
						UIposition[]={0.31999999,0.34999999};
					};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_KH25",
							"RHS_HP_FAB100",
							"RHS_HP_FAB100_MBD3_U4T",
							"RHS_HP_FAB100_MBD3_U6",
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_O25L",
							"RHS_HP_APU68M3_S24",
							"RHS_HP_B13L",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73"
						};
						hitpoint="HitPylon3";
						UIposition[]={0.33000001,0.40000001};
					};
						mirroredMissilePos=3;
						hitpoint="HitPylon4";
					};
					class pylon5: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_KH25",
							"RHS_HP_FAB100",
							"RHS_HP_FAB100_MBD3_U4T",
							"RHS_HP_FAB100_MBD3_U6",
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_O25L",
							"RHS_HP_APU68M3_S24",
							"RHS_HP_B13L",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73"
						};
						attachment="rhs_mag_b8m1_s8kom";
						hitpoint="HitPylon5";
						maxweight=1200;
						UIposition[]={0.34,0.44999999};
					};
						mirroredMissilePos=5;
						hitpoint="HitPylon6";
					};
					class pylon7: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB100",
							"RHS_HP_FAB100_MBD3_U4T",
							"RHS_HP_FAB100_MBD3_U6",
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_O25L",
							"RHS_HP_APU68M3_S24",
							"RHS_HP_B13L",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73"
						};
						attachment="rhs_mag_b8m1_s8df";
						hitpoint="HitPylon7";
						maxweight=1200;
						UIposition[]={0.34999999,0.5};
					};
						mirroredMissilePos=7;
						hitpoint="HitPylon8";
					};
					class pylon9: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_R60"
						};
						attachment="rhs_mag_R60M";
						hitpoint="HitPylon9";
						maxweight=1200;
						UIposition[]={0.36000001,0.55000001};
					};
						mirroredMissilePos=9;
						hitpoint="HitPylon10";
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4"
						};
						attachment="rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight=800;
						UIposition[]={0.625,0.27500001};
					};
				};
				class Presets
				{
					class CAS
					{
						attachment[]=
						{
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support";
					};
					class HeavyCAS
					{
						attachment[]=
						{
							"rhs_mag_b13l_s13b",
							"rhs_mag_b13l_s13b",
							"rhs_mag_b13l_s13t",
							"rhs_mag_b13l_s13t",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support (S-13)";
					};
					class GroundSupress_S24B
					{
						attachment[]=
						{
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Ground Supress (S-24B)";
					};
					class Bomb
					{
						attachment[]=
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Bomb (FAB-250)";
					};
					class HeavyBomb
					{
						attachment[]=
						{
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Bomb (FAB-500)";
					};
					class AT
					{
						attachment[]=
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Anti Tank (Kh-25ML)";
					};
					class HeavyAT
					{
						attachment[]=
						{
							"rhs_mag_kh29ML",
							"rhs_mag_kh29ML",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Anti Tank (Kh-29ML)";
					};
					class HeavyATMix
					{
						attachment[]=
						{
							"rhs_mag_kh29ML",
							"rhs_mag_kh29ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Anti Tank (Mixed)";
					};
					class Cluster
					{
						attachment[]=
						{
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Heavy CAS (S-13)";
					};
					class KMGU
					{
						attachment[]=
						{
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="KMGU-2";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRSU25NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default";
						value="NoChange";
					};
					class AviaYellow
					{
						name="Aviation Yellow";
						value="AviaYellow";
					};
					class AviaBlue
					{
						name="Aviation Blue";
						value="AviaBlue";
						defaultValue="AviaBlue";
					};
					class AviaRed
					{
						name="Aviation Red";
						value="AviaRed";
					};
					class AviaWhiteOut
					{
						name="Aviation White Out";
						value="AviaWhiteOut";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
					};
					class Default
					{
						name="Default (White)";
						value="Default";
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
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRSU25NumberPlaces}else{[_this, [['Number', cRHSAIRSU25NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNoseArt
			{
				tooltip="Define Nose Art texture located near the cabin. Appears on both sides";
				property="rhs_decalNoseArt";
				control="Combo";
				expression="if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt',_value] ] ] call rhs_fnc_decalsInit};";
				defaultValue="-1";
				class values
				{
					class Random
					{
						name="Random";
						value=-1;
						defaultValue=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class Arrows
					{
						name="Aviation emblem";
						value=1;
					};
					class Thunders
					{
						name="Thunders";
						value=2;
					};
					class Eyes
					{
						name="Eyes";
						value=3;
					};
					class Stars
					{
						name="Stars";
						value=4;
					};
				};
			};
			class rhs_decalSideArt: rhs_decalNoseArt
			{
				tooltip="Define Side Art texture located near the jet intake. Appears on both sides";
				property="rhs_decalSideArt";
				expression="if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRSU25SidePlaces, 'Su25Ex',_value] ] ] call rhs_fnc_decalsInit};";
				class values
				{
					class Random
					{
						name="Random";
						value=-1;
						defaultValue=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class Crow
					{
						name="Crow";
						value=1;
					};
					class Russia
					{
						name="Russia emblem";
						value=2;
					};
				};
			};
			class rhs_decalTail
			{
				tooltip="Define tail decal that will be drawn on vehicle";
				property="rhs_decalTail";
				control="Combo";
				expression="[_this,[['Label', cRHSAIRSU25TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue=-1;
				class values
				{
					class Default
					{
						name="Default";
						value=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class VVS
					{
						name="VVS Russia";
						value=3;
						defaultValue=3;
					};
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectPlaneHP";
				engineIndex=0;
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectPlaneHP";
				engineIndex=1;
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
					ambient[]={0,0,0};
					intensity=2.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
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
		class markerlights
		{
			class GreenStill
			{
				activeLight=0;
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=55;
				blinking=0;
				brightness=0.0099999998;
				flareSize=0.5;
				name="zeleny pozicni";
				useFlare=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
			};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
			};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				name="bily pozicni blik";
			};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="cerveny pozicni blik";
			};
		};
		class Damage
		{
			tex[]=
			{
				"rhsafrf\addons\rhs_a2port_air\su25\data\rhs_su25_warningLights_empty_ca.paa",
				"rhsafrf\addons\rhs_a2port_air\su25\data\rhs_su25_warningLights_ca.paa"
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="cerveny pozicni";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="zeleny pozicni";
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
		threat[]={1,1,1};
		driveOnComponent[]=
		{
			"gear_f1",
			"gear_l1",
			"gear_r1"
		};
		defaultUserMFDvalues[]={0,0,0,0,0,0};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax=1;
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
					pos10[]={2.02,1.23};
				};
				color[]={0,1,0,0.1};
				class Bones
				{
					};
					class HorizonBankMGun
					{
						source="HorizonBank";
						min=-6.2831898;
						max=6.2831898;
						minAngle=-360;
						maxAngle=360;
						aspectRatio=0.80000001;
					};
						pos10[]={0,0};
						source="HorizonBank";
						min=-6.2831898;
						max=6.2831898;
						minAngle=360;
						maxAngle=-360;
						aspectRatio=0.80000001;
					};
					class ImpactPoint
					{
						source="ImpactPoint";
						pos0[]={0.5,0.23};
						pos10[]={1.38,1.46};
					};
					class TargetingPodDir
					{
						source="pilotcamera";
						pos0[]=
						{
							"0.50+0.034",
							"0.27-0.0455"
						};
						pos10[]={2.02,1.47};
					};
					class MissileFlightTimeRot1
					{
						source="MissileFlightTime";
						sourceScale=2.5;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.840909;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=37;
						max=6;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=55.5;
						max=9;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=74;
						max=12;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=92.5;
						max=15;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=111;
						max=18;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=129.5;
						max=21;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=148;
						max=24;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=166.5;
						max=27;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=185;
						max=30;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=203.5;
						max=33;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=222;
						max=36;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=240.5;
						max=39;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=259;
						max=42;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=277.5;
						max=45;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=296;
						max=48;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=314.5;
						max=51;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=333;
						max=54;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=351.5;
						max=57;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=370;
						max=60;
					};
					class UserRot1
					{
						source="user";
						sourceIndex=4;
						sourceScale=0.0040000002;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.840909;
					};
					class UserRot2: UserRot1
					{
						maxAngle=37;
						max=6;
					};
					class UserRot3: UserRot1
					{
						maxAngle=55.5;
						max=9;
					};
					class UserRot4: UserRot1
					{
						maxAngle=74;
						max=12;
					};
					class UserRot5: UserRot1
					{
						maxAngle=92.5;
						max=15;
					};
					class UserRot6: UserRot1
					{
						maxAngle=111;
						max=18;
					};
					class UserRot7: UserRot1
					{
						maxAngle=129.5;
						max=21;
					};
					class UserRot8: UserRot1
					{
						maxAngle=148;
						max=24;
					};
					class UserRot9: UserRot1
					{
						maxAngle=166.5;
						max=27;
					};
					class UserRot10: UserRot1
					{
						maxAngle=185;
						max=30;
					};
					class UserRot11: UserRot1
					{
						maxAngle=203.5;
						max=33;
					};
					class UserRot12: UserRot1
					{
						maxAngle=222;
						max=36;
					};
					class UserRot13: UserRot1
					{
						maxAngle=240.5;
						max=39;
					};
					class UserRot14: UserRot1
					{
						maxAngle=259;
						max=42;
					};
					class UserRot15: UserRot1
					{
						maxAngle=277.5;
						max=45;
					};
					class UserRot16: UserRot1
					{
						maxAngle=296;
						max=48;
					};
					class UserRot17: UserRot1
					{
						maxAngle=314.5;
						max=51;
					};
					class UserRot18: UserRot1
					{
						maxAngle=333;
						max=54;
					};
					class UserRot19: UserRot1
					{
						maxAngle=351.5;
						max=57;
					};
					class UserRot20: UserRot1
					{
						maxAngle=370;
						max=60;
					};
				};
					alpha=1;
					class ImpactPoint
					{
						condition="1 - atmissile";
						class Cros
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									1,
									{0.111111,0},
									1
								},
								
								{
									"ImpactPoint",
									1,
									{0.0277778,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									{-0.111111,0},
									1
								},
								
								{
									"ImpactPoint",
									1,
									{-0.0277778,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									{0,0.093434297},
									1
								},
								
								{
									"ImpactPoint",
									1,
									{0,0.0233586},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									{0,-0.093434297},
									1
								},
								
								{
									"ImpactPoint",
									1,
									{0,-0.0233586},
									1
								},
								{}
							};
						};
						class Dot
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.0035000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.0035000001,-0},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0035000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0035000001,-0},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0035000001},
									1
								}
							};
						};
						class Ring
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									{0.187939,0.0575216},
									1
								},
								
								{
									"ImpactPoint",
									{0.193185,0.043528698},
									1
								},
								
								{
									"ImpactPoint",
									{0.196962,0.029204501},
									1
								},
								
								{
									"ImpactPoint",
									{0.199239,0.014658},
									1
								},
								
								{
									"ImpactPoint",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"ImpactPoint",
									{0.199239,-0.014658},
									1
								},
								
								{
									"ImpactPoint",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"ImpactPoint",
									{0.193185,-0.043528602},
									1
								},
								
								{
									"ImpactPoint",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"ImpactPoint",
									{0.181262,-0.071076699},
									1
								},
								
								{
									"ImpactPoint",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"ImpactPoint",
									{0.16383,-0.096465103},
									1
								},
								
								{
									"ImpactPoint",
									{0.153209,-0.108105},
									1
								},
								
								{
									"ImpactPoint",
									{0.14142101,-0.118923},
									1
								},
								
								{
									"ImpactPoint",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"ImpactPoint",
									{0.114715,-0.137766},
									1
								},
								
								{
									"ImpactPoint",
									{0.1,-0.14565},
									1
								},
								
								{
									"ImpactPoint",
									{0.0845237,-0.15242399},
									1
								},
								
								{
									"ImpactPoint",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"ImpactPoint",
									{0.051763799,-0.162451},
									1
								},
								
								{
									"ImpactPoint",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"ImpactPoint",
									{0.017431101,-0.167542},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.168182},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.187939,0.0575216},
									1
								},
								
								{
									"ImpactPoint",
									{0.169145,0.051769398},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.196962,0.029204501},
									1
								},
								
								{
									"ImpactPoint",
									{0.187113,0.0277442},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"ImpactPoint",
									{0.18000001,6.6163199e-009},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"ImpactPoint",
									{0.187113,-0.0277442},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"ImpactPoint",
									{0.178542,-0.054645501},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"ImpactPoint",
									{0.155885,-0.075681798},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.153209,-0.108105},
									1
								},
								
								{
									"ImpactPoint",
									{0.145548,-0.1027},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"ImpactPoint",
									{0.12213,-0.122393},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.1,-0.14565},
									1
								},
								
								{
									"ImpactPoint",
									{0.090000004,-0.13108499},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"ImpactPoint",
									{0.0649838,-0.15013701},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"ImpactPoint",
									{0.032993201,-0.157345},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.168182},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.151364},
									1
								},
								{}
							};
						};
						class Triangle
						{
							width=9;
							points[]=
							{
								
								{
									"ImpactPoint",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									
									{
										"HorizonBankReverted",
										0.0099999998,
										0.177
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									
									{
										"HorizonBankReverted",
										-0.0099999998,
										0.177
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								}
							};
						};
						class LaunchAutorization
						{
							width=14;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.17238601},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class LaunchAutorizationBig
						{
							width=24;
							points[]=
							{
								
								{
									"MissileFlightTimeRot1",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								}
							};
						};
					};
					class TargetingPod: ImpactPoint
					{
						condition="atmissile-pilotcameralock";
						class Cros
						{
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.111111,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0277778,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.111111,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0277778,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,0.093434297},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,0.0233586},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.093434297},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.0233586},
									1
								},
								{}
							};
						};
						class Dot
						{
							points[]=
							{
								
								{
									"TargetingPodDir",
									{0,0.0035000001},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0035000001,-0},
									1
								},
								
								{
									"TargetingPodDir",
									{0,-0.0035000001},
									1
								},
								
								{
									"TargetingPodDir",
									{-0.0035000001,-0},
									1
								},
								
								{
									"TargetingPodDir",
									{0,0.0035000001},
									1
								}
							};
						};
						class Ring
						{
							points[]=
							{
								
								{
									"TargetingPodDir",
									{0.187939,0.0575216},
									1
								},
								
								{
									"TargetingPodDir",
									{0.193185,0.043528698},
									1
								},
								
								{
									"TargetingPodDir",
									{0.196962,0.029204501},
									1
								},
								
								{
									"TargetingPodDir",
									{0.199239,0.014658},
									1
								},
								
								{
									"TargetingPodDir",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"TargetingPodDir",
									{0.199239,-0.014658},
									1
								},
								
								{
									"TargetingPodDir",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"TargetingPodDir",
									{0.193185,-0.043528602},
									1
								},
								
								{
									"TargetingPodDir",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"TargetingPodDir",
									{0.181262,-0.071076699},
									1
								},
								
								{
									"TargetingPodDir",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"TargetingPodDir",
									{0.16383,-0.096465103},
									1
								},
								
								{
									"TargetingPodDir",
									{0.153209,-0.108105},
									1
								},
								
								{
									"TargetingPodDir",
									{0.14142101,-0.118923},
									1
								},
								
								{
									"TargetingPodDir",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"TargetingPodDir",
									{0.114715,-0.137766},
									1
								},
								
								{
									"TargetingPodDir",
									{0.1,-0.14565},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0845237,-0.15242399},
									1
								},
								
								{
									"TargetingPodDir",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"TargetingPodDir",
									{0.051763799,-0.162451},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"TargetingPodDir",
									{0.017431101,-0.167542},
									1
								},
								
								{
									"TargetingPodDir",
									{0,-0.168182},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.187939,0.0575216},
									1
								},
								
								{
									"TargetingPodDir",
									{0.169145,0.051769398},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.196962,0.029204501},
									1
								},
								
								{
									"TargetingPodDir",
									{0.187113,0.0277442},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"TargetingPodDir",
									{0.18000001,6.6163199e-009},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"TargetingPodDir",
									{0.187113,-0.0277442},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"TargetingPodDir",
									{0.178542,-0.054645501},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"TargetingPodDir",
									{0.155885,-0.075681798},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.153209,-0.108105},
									1
								},
								
								{
									"TargetingPodDir",
									{0.145548,-0.1027},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"TargetingPodDir",
									{0.12213,-0.122393},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.1,-0.14565},
									1
								},
								
								{
									"TargetingPodDir",
									{0.090000004,-0.13108499},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0649838,-0.15013701},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"TargetingPodDir",
									{0.032993201,-0.157345},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0,-0.168182},
									1
								},
								
								{
									"TargetingPodDir",
									{0,-0.151364},
									1
								},
								{}
							};
						};
						class Triangle
						{
							width=9;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									
									{
										"HorizonBankReverted",
										0.0099999998,
										0.177
									},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									
									{
										"HorizonBankReverted",
										-0.0099999998,
										0.177
									},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								}
							};
						};
						class LaunchAutorization
						{
							width=14;
							points[]=
							{
								
								{
									"TargetingPodDir",
									{0,-0.17238601},
									1
								},
								
								{
									"UserRot1",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot2",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot3",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot4",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot5",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot6",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								}
							};
						};
						class LaunchAutorizationBig
						{
							width=24;
							points[]=
							{
								
								{
									"UserRot1",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot2",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot3",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot4",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot5",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								}
							};
						};
					};
					class TargetingPodTarget: ImpactPoint
					{
						condition="(atmissile)*(pilotcameralock>=0)*laseron";
						class Cros
						{
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									{0.111111,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0.0277778,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{-0.111111,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0277778,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0,0.093434297},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0,0.0233586},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0,-0.093434297},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0,-0.0233586},
									1
								},
								{}
							};
						};
						class Dot
						{
							points[]=
							{
								
								{
									"TargetingPodTarget",
									{0,0.0035000001},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.0035000001,-0},
									1
								},
								
								{
									"TargetingPodTarget",
									{0,-0.0035000001},
									1
								},
								
								{
									"TargetingPodTarget",
									{-0.0035000001,-0},
									1
								},
								
								{
									"TargetingPodTarget",
									{0,0.0035000001},
									1
								}
							};
						};
						class Ring
						{
							points[]=
							{
								
								{
									"TargetingPodTarget",
									{0.187939,0.0575216},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.193185,0.043528698},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.196962,0.029204501},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.199239,0.014658},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.199239,-0.014658},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.193185,-0.043528602},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.181262,-0.071076699},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.16383,-0.096465103},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.153209,-0.108105},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.14142101,-0.118923},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.114715,-0.137766},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.1,-0.14565},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.0845237,-0.15242399},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.051763799,-0.162451},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.017431101,-0.167542},
									1
								},
								
								{
									"TargetingPodTarget",
									{0,-0.168182},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.187939,0.0575216},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.169145,0.051769398},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.196962,0.029204501},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.187113,0.0277442},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.18000001,6.6163199e-009},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.187113,-0.0277442},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.178542,-0.054645501},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.155885,-0.075681798},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.153209,-0.108105},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.145548,-0.1027},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.12213,-0.122393},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.1,-0.14565},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.090000004,-0.13108499},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.0649838,-0.15013701},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.032993201,-0.157345},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0,-0.168182},
									1
								},
								
								{
									"TargetingPodTarget",
									{0,-0.151364},
									1
								},
								{}
							};
						};
						class Triangle
						{
							width=9;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									
									{
										"HorizonBankReverted",
										0.0099999998,
										0.177
									},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									
									{
										"HorizonBankReverted",
										-0.0099999998,
										0.177
									},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								}
							};
						};
						class LaunchAutorization
						{
							width=14;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									{0,-0.17238601},
									1
								},
								
								{
									"UserRot1",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot2",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot3",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot4",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot5",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot6",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								}
							};
						};
						class LaunchAutorizationBig
						{
							width=24;
							points[]=
							{
								
								{
									"UserRot1",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot2",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot3",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot4",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot5",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								}
							};
						};
					};
					class StaticReticle
					{
						condition="user5";
						class Shape
						{
							points[]=
							{
								
								{
									
									{
										{0.055,0.145},
										1
									},
									
									{
										{0.95499998,0.145},
										1
									},
									
									{
										{0.95499998,0.84500003},
										1
									},
									
									{
										{0.055,0.84500003},
										1
									}
								}
							};
						};
					};
				};
			};
			class MFD_1
			{
				topLeft="MFD_WS_TL";
				topRight="MFD_WS_TR";
				bottomLeft="MFD_WS_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="PuristaMedium";
				class Draw
				{
					alpha=0.5;
					color[]={1,1,1};
					class MgunAmmo
					{
						condition="ammo2>=1";
							alpha=1;
							class AmmoBox
							{
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.838,0.82499999},
											1
										},
										
										{
											{0.92199999,0.82499999},
											1
										},
										
										{
											{0.92199999,0.97500002},
											1
										},
										
										{
											{0.838,0.97500002},
											1
										}
									}
								};
							};
						};
						class Full
						{
							condition="ammo2>=212";
							class AmmoText
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.875,0.81999999},
									1
								};
								right[]=
								{
									{0.91000003,0.81999999},
									1
								};
								down[]=
								{
									{0.875,0.95999998},
									1
								};
							};
						};
						class AlmostFull
						{
							condition="(ammo2>=137)*(ammo2<=211)";
							class AmmoText
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.875,0.81999999},
									1
								};
								right[]=
								{
									{0.91000003,0.81999999},
									1
								};
								down[]=
								{
									{0.875,0.95999998},
									1
								};
							};
						};
						class Half
						{
							condition="(ammo2>=63)*(ammo2<=136)";
							class AmmoText
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.875,0.81999999},
									1
								};
								right[]=
								{
									{0.91000003,0.81999999},
									1
								};
								down[]=
								{
									{0.875,0.95999998},
									1
								};
							};
						};
						class AlmostEmpty
						{
							condition="(ammo2<=62)";
							class AmmoText
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.875,0.81999999},
									1
								};
								right[]=
								{
									{0.91000003,0.81999999},
									1
								};
								down[]=
								{
									{0.875,0.95999998},
									1
								};
							};
						};
					};
					class WeaponTypeRocket
					{
						condition="rocket";
							alpha=1;
							class AmmoBox
							{
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.838,0.125},
											1
										},
										
										{
											{0.92199999,0.125},
											1
										},
										
										{
											{0.92199999,0.27500001},
											1
										},
										
										{
											{0.838,0.27500001},
											1
										}
									}
								};
							};
						};
						class AmmoText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.875,0.11},
								1
							};
							right[]=
							{
								{0.91000003,0.11},
								1
							};
							down[]=
							{
								{0.875,0.25},
								1
							};
						};
					};
					class WeaponTypeMissiles: WeaponTypeRocket
					{
						condition="missile";
						class BlackBackground: BlackBackground
						{
						};
						class AmmoText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.875,0.11},
								1
							};
							right[]=
							{
								{0.91000003,0.11},
								1
							};
							down[]=
							{
								{0.875,0.25},
								1
							};
						};
					};
					class WeaponTypeBombs: WeaponTypeRocket
					{
						condition="bomb";
						class BlackBackground: BlackBackground
						{
						};
						class AmmoText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.875,0.11},
								1
							};
							right[]=
							{
								{0.91000003,0.11},
								1
							};
							down[]=
							{
								{0.875,0.25},
								1
							};
						};
					};
					class WeaponTypeMgun: WeaponTypeRocket
					{
						condition="mgun";
						class BlackBackground: BlackBackground
						{
						};
						class AmmoText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.875,0.11},
								1
							};
							right[]=
							{
								{0.91000003,0.11},
								1
							};
							down[]=
							{
								{0.875,0.25},
								1
							};
						};
					};
					class Pylon1
					{
						pos[]=
						{
							{0.345,0.34},
							1
						};
						pylon=1;
						name="rhs_su25_box";
					};
					class Pylon2: Pylon1
					{
						pylon=2;
						pos[]=
						{
							{0.405,0.31999999},
							1
						};
					};
					class Pylon3: Pylon1
					{
						pylon=3;
						pos[]=
						{
							{0.28099999,0.31999999},
							1
						};
					};
					class Pylon4: Pylon1
					{
						pylon=4;
						pos[]=
						{
							{0.46900001,0.31999999},
							1
						};
					};
					class Pylon5: Pylon1
					{
						pylon=5;
						pos[]=
						{
							{0.21699999,0.31999999},
							1
						};
					};
					class Pylon6: Pylon1
					{
						pylon=6;
						pos[]=
						{
							{0.53299999,0.31999999},
							1
						};
					};
					class Pylon7: Pylon1
					{
						pylon=7;
						pos[]=
						{
							{0.153,0.31999999},
							1
						};
					};
					class Pylon8: Pylon1
					{
						pylon=8;
						pos[]=
						{
							{0.597,0.31999999},
							1
						};
					};
					class Pylon9: Pylon1
					{
						pylon=9;
						pos[]=
						{
							{0.093999997,0.31999999},
							1
						};
					};
					class Pylon10: Pylon1
					{
						pylon=10;
						pos[]=
						{
							{0.66100001,0.31999999},
							1
						};
					};
				};
			};
			class MFD_2
			{
				topLeft="MFD_Lights_TL";
				topRight="MFD_Lights_TR";
				bottomLeft="MFD_Lights_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Draw
				{
					alpha=1;
					color[]={1,1,1};
					class Launch_Authorized
					{
						condition="((impactDistance/LarTop)>=LarAmmoMin)*((impactDistance/LarTop)<=LarAmmoMax)+(user1>=1)+missilelocked";
						color[]={0.69,0.22,0};
						alpha=0.2;
						class Bulb
						{
							points[]=
							{
								
								{
									
									{
										{0.898,0.085000001},
										1
									},
									
									{
										{0.98199999,0.085000001},
										1
									},
									
									{
										{0.98199999,0.51499999},
										1
									},
									
									{
										{0.898,0.51499999},
										1
									}
								}
							};
						};
					};
						alpha=0.1;
						condition="laseron";
						class Bulb
						{
							points[]=
							{
								
								{
									
									{
										{0.017999999,0.085000001},
										1
									},
									
									{
										{0.102,0.085000001},
										1
									},
									
									{
										{0.102,0.51499999},
										1
									},
									
									{
										{0.017999999,0.51499999},
										1
									}
								}
							};
						};
					};
					class Laser_Cooldown: Laser_Active
					{
						condition="user0";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
					};
					class Launch_Disengage
					{
						condition="(((impactDistance/LarTop)<=LarAmmoMin)+((impactDistance/LarTop)>=LarAmmoMax))*rocket+(user1<=-1)";
						color[]={0.94,0.0099999998,0};
						alpha=0.07;
						class Bulb
						{
							points[]=
							{
								
								{
									
									{
										{0.017999999,0.48500001},
										1
									},
									
									{
										{0.102,0.48500001},
										1
									},
									
									{
										{0.102,0.91500002},
										1
									},
									
									{
										{0.017999999,0.91500002},
										1
									}
								}
							};
						};
					};
				};
			};
		};
		maxOmega=2000;
		engineMOI=16;
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class Wheel_1
			{
				side="left";
				suspTravelDirection[]={0,-1,0};
				steering=1;
				width=0.16;
				mass=150;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=21500;
				maxHandBrakeTorque=0;
				maxCompression=0.2105;
				maxDroop=0.015;
				sprungMass=4066;
				springStrength=56600;
				springDamperRate=215569.59;
				longitudinalStiffnessPerUnitGravity=8000;
				latStiffX=25;
				latStiffY=180;
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
				width=0.28;
				springDamperRate=220569.59;
				sprungMass=6652;
				springStrength=151000;
			};
			class Wheel_3: Wheel_2
			{
				side="right";
			};
		};
		maxSpeed=900;
		landingAoa=0.113446;
		landingSpeed=250;
		stallSpeed=190;
		stallWarningTreshold=0.07;
		wheelSteeringSensitivity=1.3;
		airBrake=1;
		airBrakeFrictionCoef=2.2;
		flaps=1;
		flapsFrictionCoef=0.31999999;
		gearsUpFrictionCoef=0.55000001;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.51999998,0.0066999998};
		airFrictionCoefs2[]={0.001,0.0054000001,7.0000002e-005};
		angleOfIndicence=-0.0087266499;
		envelope[]={0,0.07,0.28,0.82999998,1.11,1.74,2.51,3.4100001,4.46,5.6399999,6.96,8.4200001,8.8000002,9.1099997,9.3800001,9.4499998,9.4300003,9,8,7,6};
		altNoForce=15000;
		altFullForce=4000;
		thrustCoef[]={1.28,1.33,1.77,1.4,1.41,1.39,1.36,1.33,1.29,1.25,1.2,1.15,1.05,0.5,0,0,0,0,0};
		aileronSensitivity=0.85000002;
		aileronCoef[]={0,0.1,0.30000001,0.60000002,0.80000001,0.94999999,1,1.02,1.03,1.04,1.04,1,0.89999998,0.69999999,0.30000001,0.2,0.15000001,0.1,0.1};
		elevatorSensitivity=0.94999999;
		elevatorCoef[]={0,0.2,0.94999999,0.80000001,0.75,0.69999999,0.64999998,0.60000002,0.55000001,0.5,0.46000001,0.31999999,0.28999999,0.16,0.14,0.12,0.1,0.090000004,0.079999998};
		rudderInfluence=0.96600002;
		rudderCoef[]={0,0.60000002,1.2,1.5,1.8,2,3.2,3.4000001,3.45,3.5,3.55,3.5999999,2.2,1.3,0.30000001,0.2,0.15000001,0.1,0.1};
		aileronControlsSensitivityCoef=3.5999999;
		elevatorControlsSensitivityCoef=3.4000001;
		rudderControlsSensitivityCoef=3.4000001;
		draconicForceXCoef=13;
		draconicForceYCoef=1.3;
		draconicForceZCoef=1;
		draconicTorqueXCoef[]={4.8000002,5,5.5,6.1999998,6.5999999,7.4000001,8,8.5,8,8.3999996,8.6000004,8.6999998,8.8000002,8.8999996,9,9.1000004};
		draconicTorqueYCoef[]={12,7.5,4,1.5,0.1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		soundIncommingMissile[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\alarm_beep",
			1.098107,
			1
		};
		soundLocked[]=
		{
			"",
			1.5848932,
			1
		};
		class EventHandlers: EventHandlers
		{
			hit="";
			class RHS_EventHandlers
			{
				hit="_this call RHS_fnc_AI_eject";
				init="_this call rhs_fnc_air_init";
				getout="[_this select 0, _this select 2,'rhs_su25_canopy'] call rhs_fnc_K36D_seatEjection";
				engine="[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
			};
		};
	};
	class RHS_Su25_VVS_Base: RHS_su25_base
	{
		accuracy=0.5;
		side=0;
	};
	class RHS_Su25SM_vvs: RHS_Su25_VVS_Base
	{
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Su25SM_KH29_vvs: RHS_Su25SM_vvs
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_kh29l";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_kh29l";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_kh25ML";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_kh25ML";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_kh25ML";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_kh25ML";
					};
				};
			};
		};
	};
	class RHS_Su25SM_CAS_vvs: RHS_Su25SM_vvs
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_b8m1_s8kom";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_b8m1_s8kom";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8m1_s8kom";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8m1_s8kom";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon7: pylon7
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon8: pylon8
					{
						attachment="rhs_mag_b8m1_s8df";
					};
				};
			};
		};
	};
	class RHS_Su25SM_Cluster_vvs: RHS_Su25SM_vvs
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_rbk250_ao1";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_rbk250_ao1";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_rbk250_ao1";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_rbk250_ao1";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon7: pylon7
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon8: pylon8
					{
						attachment="rhs_mag_b8m1_s8df";
					};
				};
			};
		};
	};
	class RHS_Su25SM_vvsc: RHS_Su25SM_vvs
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRSU25NumberPlaces,'AviaBlue']",
			"['Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt']",
			"['Label', cRHSAIRSU25SidePlaces, 'Su25Ex']"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\Su25\DATA\camo\su25_body1_camo1_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Su25\DATA\camo\su25_body2_camo1_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
	};
	class RHS_Su25SM_KH29_vvsc: RHS_Su25SM_vvsc
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_kh29l";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_kh29l";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_kh25ML";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_kh25ML";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_kh25ML";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_kh25ML";
					};
				};
			};
		};
	};
	class RHS_Su25SM_CAS_vvsc: RHS_Su25SM_vvsc
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_b8m1_s8kom";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_b8m1_s8kom";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8m1_s8kom";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8m1_s8kom";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon7: pylon7
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon8: pylon8
					{
						attachment="rhs_mag_b8m1_s8df";
					};
				};
			};
		};
	};
	class RHS_Su25SM_Cluster_vvsc: RHS_Su25SM_vvsc
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_rbk250_ao1";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_rbk250_ao1";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_rbk250_ao1";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_rbk250_ao1";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon7: pylon7
					{
						attachment="rhs_mag_b8m1_s8df";
					};
					class pylon8: pylon8
					{
						attachment="rhs_mag_b8m1_s8df";
					};
				};
			};
		};
	};
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRKA52NumberPlaces,'AviaYellow']"
		};
		class RotorLibHelicopterProperties
		{
			RTDconfig="rhsafrf\addons\rhs_c_a2port_air\ka52\RTD_Heli_Attack_02.xml";
			autoHoverCorrection[]={3.2,0,0};
			defaultCollective=0.80500001;
			retreatBladeStallWarningSpeed=83;
			maxTorque=3300;
			stressDamagePerSec=0.0099999998;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
		};
		numberPhysicalWheels=3;
		maxSpeed=395;
		liftForceCoef=6;
		cyclicForwardForceCoef=1;
		backRotorForceCoef=1.35;
		maxMainRotorDive=7;
		minMainRotorDive=-7;
		neutralMainRotorDive=0;
		gearRetracting=1;
		mainRotorSpeed=-1;
		backRotorSpeed=-1;
		mainBladeRadius=6.9000001;
		tailBladeRadius=6.9000001;
		tailBladeCenter="tail_blade_center";
		mainBladeCenter="main_blade_center";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,6.5,-1.05};
		LESH_WheelOffset[]={0,-1};
		side=0;
		typicalCargo[]=
		{
			"rhs_pilot_combat_heli"
		};
		fuelCapacity=1870;
		RHS_fuelCapacity=1870;
		driverCanEject=1;
		driverCompartments=1;
		ejectSpeed[]={1,0,11};
		armor=55;
		accuracy=0.55000001;
		icon="\rhsafrf\addons\rhs_a2port_air\data\map_ico\Icon_ka52_CA.paa";
		castDriverShadow=1;
		viewCargoShadow=1;
		transportsoldier=0;
		driveOnComponent[]=
		{
			"F_gear_d3",
			"L_gear_d3",
			"R_gear_d3"
		};
		getInRadius=1.5;
		precisegetinout=1;
		memoryPointsGetInDriverPrecise="pos driver";
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		memoryPointLRocket="l raketa";
		memoryPointRRocket="p raketa";
		memoryPointLMissile="l strela";
		memoryPointRMissile="p strela";
		memoryPointGun[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
		gunBeg[]=
		{
			"chase01dir",
			"chase02dir",
			"chase03dir",
			"chase04dir"
		};
		gunEnd[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		irTarget=1;
		irTargetSize=0.89999998;
		radarTarget=1;
		radarTargetSize=1;
		threat[]={0.60000002,1,0.80000001};
		weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"rhs_weap_DIRCM_Vitebsk"
		};
		weaponsGroup1=128;
		weaponsGroup4=64;
		class HitPoints: HitPoints
		{
			class HitHRotor: HitHRotor
			{
				armor=0.30000001;
			};
			class HitGlass1: HitGlass1
			{
				armor=3;
			};
			class HitGlass2: HitGlass2
			{
				armor=3;
			};
			class HitGlass3: HitGlass3
			{
				armor=1;
			};
			class HitGlass4: HitGlass4
			{
				armor=1;
			};
			class HitRotor1: HitGlass3
			{
				armor=1;
			};
			class HitPylon1
			{
				armor=-30;
				material=-1;
				name="hit_pylon_1";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon2
			{
				armor=-30;
				material=-1;
				name="hit_pylon_2";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon3
			{
				armor=-30;
				material=-1;
				name="hit_pylon_3";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon4
			{
				armor=-30;
				material=-1;
				name="hit_pylon_4";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
		};
		driverCanSee=55;
		laserScanner=1;
		LockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
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
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Ka52_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250_KA52",
							"RHS_HP_FAB500_KA52",
							"RHS_HP_KMGU2_KA52",
							"RHS_HP_B13L1_KA52",
							"RHS_HP_B8V20_KA52",
							"RHS_HP_UB16_KA52",
							"RHS_HP_UB32_KA52",
							"RHS_HP_UPK23_KA52"
						};
						attachment="rhs_mag_b8v20a_ka52_s8kom";
						maxweight=650;
						UIposition[]={0.50400001,0.40000001};
						turret[]={};
						hitpoint="HitPylon1";
					};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_B13L1_KA52",
							"RHS_HP_B8V20_KA52",
							"RHS_HP_UB16_KA52",
							"RHS_HP_UB32_KA52",
							"RHS_HP_UPK23_KA52",
							"RHS_HP_APU6_9m127_KA52"
						};
						attachment="rhs_mag_apu6_9m127m_ka52";
						maxweight=450;
						UIposition[]={0.58399999,0.34999999};
						turret[]={0};
						hitpoint="HitPylon3";
					};
						mirroredMissilePos=3;
						hitpoint="HitPylon4";
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_UV26",
							"RHS_cm_UV26_x2",
							"RHS_cm_UV26_x4"
						};
						attachment="rhs_UV26_CMFlare_Chaff_Magazine_x4";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
				class Presets
				{
					class Bomb
					{
						attachment[]=
						{
							"rhs_mag_fab250_ka52",
							"rhs_mag_fab250_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Bomb";
					};
					class ClusterMine
					{
						attachment[]=
						{
							"rhs_mag_kmgu2_pfm1_ka52",
							"rhs_mag_kmgu2_pfm1_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="KMGU-2 (AP Mines)";
					};
					class ClusterHE
					{
						attachment[]=
						{
							"rhs_mag_kmgu2_ao25_ka52",
							"rhs_mag_kmgu2_ao25_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="KMGU-2 (HE)";
					};
					class UPK
					{
						attachment[]=
						{
							"rhs_mag_upk23_ka52_mixed",
							"rhs_mag_upk23_ka52_mixed",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="UPK-23-250";
					};
					class CAS
					{
						attachment[]=
						{
							"rhs_mag_b8v20a_ka52_s8kom",
							"rhs_mag_b8v20a_ka52_s8kom",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support";
					};
					class HeavyCAS
					{
						attachment[]=
						{
							"rhs_mag_b13l1_ka52_s13b",
							"rhs_mag_b13l1_ka52_s13b",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support (S-13)";
					};
				};
			};
		};
		class ViewPilot
		{
			initAngleX=-4;
			initAngleY=0;
			initFov=0.89999998;
			minFov=0.25;
			maxFov=1.25;
			minAngleX=-65;
			maxAngleX=85;
			minAngleY=-150;
			maxAngleY=150;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
		};
		class Viewoptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.1;
			minFov=0.1;
			maxFov=1.2;
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vvs_c",
					"rhs_faction_vvs"
				};
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRKA52NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default";
						value="NoChange";
					};
					class AviaYellow
					{
						name="Aviation Yellow";
						value="AviaYellow";
					};
					class AviaBlue
					{
						name="Aviation Blue";
						value="AviaBlue";
						defaultValue="AviaBlue";
					};
					class AviaRed
					{
						name="Aviation Red";
						value="AviaRed";
					};
					class AviaWhiteOut
					{
						name="Aviation White Out";
						value="AviaWhiteOut";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
					};
					class Default
					{
						name="Default (White)";
						value="Default";
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
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRKA52NumberPlaces}else{[_this, [['Number', cRHSAIRKA52NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail
			{
				tooltip="Define tail decalthat will be drawn on vehicle";
				property="rhs_decalTail";
				control="Combo";
				expression="[_this,[['Label', cRHSAIRKA52TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue=-1;
				class values
				{
					class Default
					{
						name="Default";
						value=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class VVS
					{
						name="VVS Russia";
						value=3;
						defaultValue=3;
					};
				};
			};
		};
		enableManualFire=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot=1;
				startEngine=0;
				commanding=-1;
				primaryGunner=1;
				usePIP=1;
				viewGunnerShadow=1;
				CanEject=1;
				precisegetinout=1;
				minElev=-80;
				maxElev=15;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				memoryPointGun="machinegun";
				selectionFireAnim="zasleh";
				canUseScanners=0;
				allowTabLock=0;
				class Viewoptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.067000002;
					minFov=0.018999999;
					maxFov=0.067000002;
				};
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1"
				};
				class OpticsIn
				{
					class Samshin_WFOV
					{
						initanglex=0;
						initangley=0;
						maxanglex=30;
						maxangley=100;
						minanglex=-30;
						minangley=-100;
						initfov=0.23333301;
						maxfov=0.23333301;
						minfov=0.23333301;
						thermalmode[]={0,1};
						visionmode[]=
						{
							"Normal",
							"TI"
						};
					};
					class Samshin_NFOV: Samshin_WFOV
					{
						initfov=0.0466667;
						maxfov=0.0466667;
						minfov=0.0466667;
					};
					class Samshin_NFOV_Stabilised: Samshin_NFOV
					{
						initfov=0.0318182;
						maxfov=0.0318182;
						minfov=0.0318182;
						directionStabilized=1;
					};
				};
				class Components
				{
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
								resource="RscCustomInfoSensors";
								range[]={8000,16000,24000,4000};
							};
						};
					};
				};
				weapons[]=
				{
					"rhs_weap_MASTERSAFE_Holdster15",
					"rhs_weap_fcs_mi24",
					"rhs_weap_2a42"
				};
				class HitTurret
				{
					armor=0.80000001;
					material=-1;
					name="gun1";
					passThrough=0.5;
				};
				class HitGun
				{
					armor=0.40000001;
					material=-1;
					name="gun2";
					passThrough=0.2;
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
					ambient[]={0,0,0};
					intensity=2.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.5;
						hardLimitEnd=0.60000002;
					};
					point="light_pilot";
				};
				class Light_Gunner: Light_Pilot
				{
					point="light_gunner";
				};
			};
			class Comp2: Comp1
			{
			};
		};
		class markerlights
		{
			class GreenStill
			{
				activeLight=0;
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=55;
				blinking=0;
				brightness=0.0099999998;
				flareSize=0.5;
				name="zeleny pozicni";
				useFlare=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
			};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
			};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				name="bily pozicni blik";
			};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="cerveny pozicni blik";
			};
		};
		dammageHalf[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_CO.paa",
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_caugesmf_CO.paa"
		};
		dammageFull[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_CO.paa",
			"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_caugesmf_CO.paa"
		};
		class MFD
		{
			class MFD_Left_Compass
			{
				topLeft="mfd_2_nav_tl";
				topRight="mfd_2_nav_tr";
				bottomLeft="mfd_2_nav_bl";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				font="rhs_digital_font_var";
				enableParallax=0;
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Draw
				{
					alpha=0.94999999;
					color[]={0,0.82999998,0.82999998};
					condition="on";
					class Text
					{
						align="center";
						scale=1;
						source="Heading";
						sourceScale=1;
						pos[]=
						{
							{0.498,0.19},
							1
						};
						right[]=
						{
							{0.54299998,0.19},
							1
						};
						down[]=
						{
							{0.498,0.23999999},
							1
						};
					};
				};
			};
			class MFD_Right_Gun: MFD_Left_Compass
			{
				topLeft="mfd_3_gun_tl";
				topRight="mfd_3_gun_tr";
				bottomLeft="mfd_3_gun_bl";
				color[]={0,1,0,0.1};
				font="rhs_digital_font_var";
				turret[]={0};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Draw
				{
					alpha=0.94999999;
					color[]={0.44999999,0.69999999,0.28999999};
					condition="on";
					class Speed
					{
						align="left";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						sourceLength=1;
						pos[]=
						{
							{0.42500001,0.16500001},
							1
						};
						right[]=
						{
							{0.46000001,0.16500001},
							1
						};
						down[]=
						{
							{0.42500001,0.20999999},
							1
						};
					};
					class Height: Speed
					{
						source="altitudeAGL";
						sourceOffset=-2;
						sourceScale=1;
						sourceLength=1;
						pos[]=
						{
							{0.625,0.16500001},
							1
						};
						right[]=
						{
							{0.66000003,0.16500001},
							1
						};
						down[]=
						{
							{0.625,0.20999999},
							1
						};
					};
					class TurretDirection
					{
						align="center";
						scale=1;
						source="userText";
						sourceIndex=2;
						sourceScale=1;
						sourceLength=2;
						pos[]=
						{
							{0.51499999,0.16500001},
							1
						};
						right[]=
						{
							{0.55000001,0.16500001},
							1
						};
						down[]=
						{
							{0.51499999,0.20999999},
							1
						};
					};
					class TurretElevation
					{
						align="left";
						scale=1;
						source="userText";
						sourceIndex=3;
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						pos[]=
						{
							{0.88,0.38499999},
							1
						};
						right[]=
						{
							{0.89499998,0.38499999},
							1
						};
						down[]=
						{
							{0.88,0.405},
							1
						};
					};
					class DistanceToTarget
					{
						align="center";
						scale=1;
						source="userText";
						sourceIndex=1;
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						pos[]=
						{
							{0.51499999,0.74000001},
							1
						};
						right[]=
						{
							{0.55000001,0.74000001},
							1
						};
						down[]=
						{
							{0.51499999,0.78500003},
							1
						};
					};
				};
			};
			class MFD_left_Gun: MFD_Right_Gun
			{
				topLeft="mfd_2_gun_tl";
				topRight="mfd_2_gun_tr";
				bottomLeft="mfd_2_gun_bl";
				color[]={0,1,0,0.1};
				font="rhs_digital_font_var";
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Draw: Draw
				{
				};
			};
			class CrossGunner
			{
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				enableParallax=1;
				turret[]={0};
				class Bones
				{
					class WeaponAim
					{
						source="turretworld";
						pos0[]={0.5,0.41};
						pos10[]={1.15,1.75};
					};
				};
				class Draw
				{
					alpha=0.94999999;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class MGun
					{
						class Circle
						{
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,0.02},
									1
								},
								
								{
									"WeaponAim",
									{0,0.0099999998},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.0099999998},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.02},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.02,0},
									1
								},
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.02,0},
									1
								},
								{}
							};
						};
					};
				};
			};
			class AirplaneHUD
			{
					pos10[]={1.112,1.03};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				enableParallax=1;
				turret[]={-1};
				font="rhs_digital_font_rus";
				class Bones
				{
					};
					class ImpactPoint
					{
						source="ImpactPoint";
						pos0[]={0.5,0.38999999};
						pos10[]={1.1339999,0.95999998};
					};
					};
					class MissileFlightTimeRot1
					{
						source="MissileFlightTime";
						sourceScale=1;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.89905399;
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
					class ForwardVector
					{
						source="forward";
						pos0[]={0,0};
						pos10[]={0.347,0.345};
					};
					class Target
					{
						source="target";
						pos0[]={0.5,0.38999999};
						pos10[]={1.1339999,0.95999998};
					};
					class Velocity: Pos10Vector
					{
						source="velocity";
						pos0[]={0.50199997,0.49000001};
						pos10[]={0.56300002,0.54400003};
					};
					class SliderSpeedSource
					{
						source="speed";
						min=0;
						max=138.88901;
						minPos[]={0.255,0.2};
						maxPos[]={0.255,0.52499998};
					};
					class AGLMove
					{
						source="altitudeAGL";
						min=0;
						max=50;
						minPos[]=
						{
							0,
							"0.15*0.65"
						};
						maxPos[]=
						{
							0,
							"0.65*0.65"
						};
					};
					class Heading
					{
						source="Heading";
						min=-36;
						max=36;
						minPos[]={0,0};
						maxPos[]={1,0};
					};
					class TargetDistanceMissile
					{
						source="targetDist";
						min=100;
						max=3000;
						minAngle=-120;
						maxAngle=120;
					};
					class vspeed
					{
						source="vspeed";
						min=-30;
						max=30;
						minPos[]={0,0.059999999};
						maxPos[]={0,0.30000001};
					};
					class HorizonBankMGun
					{
						source="HorizonBank";
						min=-6.2831898;
						max=6.2831898;
						minAngle=-360;
						maxAngle=360;
						aspectRatio=0.88524598;
					};
					class HorizonDive
					{
						source="horizonDive";
						min=-1;
						max=1;
						minPos[]={0.50199997,2.49};
						maxPos[]={0.50199997,-1.51};
					};
					class HorizonBankReverted
					{
						source="HorizonBank";
						min="-3.14159265*2";
						max="3.14159265*2";
						minAngle=360;
						maxAngle=-360;
						aspectRatio=0.80000001;
					};
						pos10[]={1.3839999,1.3652};
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
				};
				class Draw
				{
					alpha=0.94999999;
					color[]={0,0.30000001,0.050000001};
					condition="on";
					class MGunD
					{
						condition="mgun+rocket+bomb";
						class Cross
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.026971599},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.035962101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
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
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.031466901},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
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
									{0,-0.026971599},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.026561599},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.025345201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.023357401},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.0206603},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0173373},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0134858},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.00922429},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0046822699},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0046822699},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.00922429},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0134858},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0173373},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.0206603},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.023357401},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.025345201},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.026561599},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.026971599},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.026561599},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.025345201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.023357401},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.0206603},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0173373},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0134858},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.00922429},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0046822699},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0046822699},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.00922429},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0134858},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0173373},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.0206603},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.023357401},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.025345201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.026561599},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.026971599},
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
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
						clipBR[]={1,0};
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.20999999,
									"7.34351e-009--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.28,
									"9.79135e-009--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.20999999,
									"-2.00338e-009--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.28,
									"-2.67117e-009--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.105,
									"0.145492--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.14,
									"0.19399--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.105,
									"0.145492--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.14,
									"0.19399--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.18186501,
									"0.084--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.242487,
									"0.112--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.18186501,
									"0.084--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.242487,
									"0.112--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.20284399,
									"0.0434816--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.270459,
									"0.0579755--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.20284399,
									"0.0434816--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.270459,
									"0.0579755--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.20920099,
									"0.0146422--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.244068,
									"0.0170825--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.20681,
									"0.0291729--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.24127799,
									"0.034035--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.20681,
									"0.0291729--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.24127799,
									"0.034035--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.20920099,
									"0.0146422--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.244068,
									"0.0170825--0.12"
								},
								1
							},
							{}
						};
					};
					class HorizonBank
					{
						points[]=
						{
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.21-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.14-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.11-0.50",
									"-0.035-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.08-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.03-0.50",
									"0-0.50"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.21-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.14-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.11-0.50",
									"-0.035-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.08-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.03-0.50",
									"0-0.50"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0-0.50",
									"-0.004-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0-0.50",
									"0.004-0.50"
								},
								1
							}
						};
					};
					class CollectiveGroup
					{
						condition="simulRTD";
						class CollectiveText
						{
							source="static";
							align="right";
							scale=1;
							pos[]=
							{
								{0.2,0.2},
								1
							};
							right[]=
							{
								{0.25999999,0.2},
								1
							};
							down[]=
							{
								{0.2,0.25},
								1
							};
						};
						class CollectiveNumber
						{
							source="rtdCollective";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.2,0.2},
								1
							};
							right[]=
							{
								{0.25999999,0.2},
								1
							};
							down[]=
							{
								{0.2,0.25},
								1
							};
						};
					};
						clipBR[]={0.75,0.75};
						class Dimmed
						{
							class Level0
							{
								width=4;
								points[]=
								{
									
									{
										"Level0",
										{-0.28,0},
										1
									},
									
									{
										"Level0",
										{-0.175,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.063000001,0},
										1
									},
									
									{
										"Level0",
										{-0.0070000002,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.0070000002,0},
										1
									},
									
									{
										"Level0",
										{0.063000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.175,0},
										1
									},
									
									{
										"Level0",
										{0.28,0},
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
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM5",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.22,0},
										1
									},
									
									{
										"LevelM5",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_5L: VALM_1_5
							{
								align="left";
								pos[]=
								{
									"LevelM5",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP5: Level0
							{
								points[]=
								{
									
									{
										"LevelP5",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP5",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.22,0},
										1
									},
									
									{
										"LevelP5",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_5L: VALP_1_5
							{
								align="left";
								pos[]=
								{
									"LevelP5",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM10: Level0
							{
								points[]=
								{
									
									{
										"LevelM10",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM10",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.22,0},
										1
									},
									
									{
										"LevelM10",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_10L: VALM_1_10
							{
								align="left";
								pos[]=
								{
									"LevelM10",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP10: Level0
							{
								points[]=
								{
									
									{
										"LevelP10",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP10",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.22,0},
										1
									},
									
									{
										"LevelP10",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_10L: VALP_1_10
							{
								align="left";
								pos[]=
								{
									"LevelP10",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM15: Level0
							{
								points[]=
								{
									
									{
										"LevelM15",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM15",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.22,0},
										1
									},
									
									{
										"LevelM15",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_15L: VALM_1_15
							{
								align="left";
								pos[]=
								{
									"LevelM15",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP15: Level0
							{
								points[]=
								{
									
									{
										"LevelP15",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP15",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.22,0},
										1
									},
									
									{
										"LevelP15",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_15L: VALP_1_15
							{
								align="left";
								pos[]=
								{
									"LevelP15",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM20: Level0
							{
								points[]=
								{
									
									{
										"LevelM20",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM20",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.22,0},
										1
									},
									
									{
										"LevelM20",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_20L: VALM_1_20
							{
								align="left";
								pos[]=
								{
									"LevelM20",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP20: Level0
							{
								points[]=
								{
									
									{
										"LevelP20",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP20",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.22,0},
										1
									},
									
									{
										"LevelP20",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_20L: VALP_1_20
							{
								align="left";
								pos[]=
								{
									"LevelP20",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM25: Level0
							{
								points[]=
								{
									
									{
										"LevelM25",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM25",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.22,0},
										1
									},
									
									{
										"LevelM25",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_25L: VALM_1_25
							{
								align="left";
								pos[]=
								{
									"LevelM25",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP25: Level0
							{
								points[]=
								{
									
									{
										"LevelP25",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP25",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.22,0},
										1
									},
									
									{
										"LevelP25",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_25L: VALP_1_25
							{
								align="left";
								pos[]=
								{
									"LevelP25",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM30: Level0
							{
								points[]=
								{
									
									{
										"LevelM30",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM30",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.22,0},
										1
									},
									
									{
										"LevelM30",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_30L: VALM_1_30
							{
								align="left";
								pos[]=
								{
									"LevelM30",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP30: Level0
							{
								points[]=
								{
									
									{
										"LevelP30",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP30",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.22,0},
										1
									},
									
									{
										"LevelP30",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_30L: VALP_1_30
							{
								align="left";
								pos[]=
								{
									"LevelP30",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM35: Level0
							{
								points[]=
								{
									
									{
										"LevelM35",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM35",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.22,0},
										1
									},
									
									{
										"LevelM35",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_35L: VALM_1_35
							{
								align="left";
								pos[]=
								{
									"LevelM35",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP35: Level0
							{
								points[]=
								{
									
									{
										"LevelP35",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP35",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.22,0},
										1
									},
									
									{
										"LevelP35",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_35L: VALP_1_35
							{
								align="left";
								pos[]=
								{
									"LevelP35",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM40: Level0
							{
								points[]=
								{
									
									{
										"LevelM40",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM40",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.22,0},
										1
									},
									
									{
										"LevelM40",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_40L: VALM_1_40
							{
								align="left";
								pos[]=
								{
									"LevelM40",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP40: Level0
							{
								points[]=
								{
									
									{
										"LevelP40",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP40",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.22,0},
										1
									},
									
									{
										"LevelP40",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_40L: VALP_1_40
							{
								align="left";
								pos[]=
								{
									"LevelP40",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM45: Level0
							{
								points[]=
								{
									
									{
										"LevelM45",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM45",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.22,0},
										1
									},
									
									{
										"LevelM45",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_45L: VALM_1_45
							{
								align="left";
								pos[]=
								{
									"LevelM45",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP45: Level0
							{
								points[]=
								{
									
									{
										"LevelP45",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP45",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.22,0},
										1
									},
									
									{
										"LevelP45",
										{0.31999999,0},
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
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_45L: VALP_1_45
							{
								align="left";
								pos[]=
								{
									"LevelP45",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.20999999,0.024},
									1
								};
							};
						};
					};
					class Static
					{
						width=4;
						points[]=
						{
							
							{
								"vspeed",
								{0.22,0.56},
								1
							},
							
							{
								"vspeed",
								{0.205,0.55000001},
								1
							},
							
							{
								"vspeed",
								{0.22,0.54000002},
								1
							},
							
							{
								"vspeed",
								{0.22,0.56},
								1
							},
							{},
							
							{
								{0.2,0.59799999},
								1
							},
							
							{
								{0.2,0.78200001},
								1
							},
							{},
							
							{
								{0.2,0.61000001},
								1
							},
							
							{
								{0.18000001,0.61000001},
								1
							},
							{},
							
							{
								{0.19499999,0.76999998},
								1
							},
							
							{
								{0.18000001,0.76999998},
								1
							},
							{},
							
							{
								{0.19499999,0.64999998},
								1
							},
							
							{
								{0.18000001,0.64999998},
								1
							},
							{},
							
							{
								{0.19499999,0.69},
								1
							},
							
							{
								{0.18000001,0.69},
								1
							},
							{},
							
							{
								{0.19499999,0.73000002},
								1
							},
							
							{
								{0.18000001,0.73000002},
								1
							},
							{},
							
							{
								"vspeed",
								{0.77999997,0.56},
								1
							},
							
							{
								"vspeed",
								{0.79500002,0.55000001},
								1
							},
							
							{
								"vspeed",
								{0.77999997,0.54000002},
								1
							},
							
							{
								"vspeed",
								{0.77999997,0.56},
								1
							},
							{},
							
							{
								{0.80000001,0.59799999},
								1
							},
							
							{
								{0.80000001,0.86199999},
								1
							},
							{},
							
							{
								{0.80000001,0.61000001},
								1
							},
							
							{
								{0.82999998,0.61000001},
								1
							},
							{},
							
							{
								{0.80500001,0.85000002},
								1
							},
							
							{
								{0.82999998,0.85000002},
								1
							},
							{},
							
							{
								{0.80500001,0.64999998},
								1
							},
							
							{
								{0.81999999,0.64999998},
								1
							},
							{},
							
							{
								{0.80500001,0.69},
								1
							},
							
							{
								{0.81999999,0.69},
								1
							},
							{},
							
							{
								{0.80500001,0.73000002},
								1
							},
							
							{
								{0.82999998,0.73000002},
								1
							},
							{},
							
							{
								{0.80500001,0.76999998},
								1
							},
							
							{
								{0.81999999,0.76999998},
								1
							},
							{},
							
							{
								{0.80500001,0.81},
								1
							},
							
							{
								{0.81999999,0.81},
								1
							},
							{},
							
							{
								{0.51999998,0.14},
								1
							},
							
							{
								{0.5,0.12},
								1
							},
							
							{
								{0.47999999,0.14},
								1
							},
							{},
							
							{
								{0.30000001,0.115},
								1
							},
							
							{
								{0.69999999,0.115},
								1
							},
							{}
						};
					};
					class SpeedGroup
					{
						condition="speed-2.78";
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									"SliderSpeedSource",
									
									{
										"0.015-0.03",
										0.0099999998
									},
									1
								},
								
								{
									"SliderSpeedSource",
									
									{
										"0.000-0.03",
										0
									},
									1
								},
								
								{
									"SliderSpeedSource",
									
									{
										"0.015-0.03",
										-0.0099999998
									},
									1
								},
								
								{
									"SliderSpeedSource",
									
									{
										"0.015-0.03",
										0.0099999998
									},
									1
								},
								{},
								
								{
									
									{
										"0.25-0.03",
										0.2
									},
									1
								},
								
								{
									
									{
										"0.25-0.03",
										0.52499998
									},
									1
								},
								{},
								
								{
									
									{
										"0.25-0.03",
										0.2
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.2
									},
									1
								},
								{},
								
								{
									
									{
										"0.24-0.03",
										0.26499999
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.26499999
									},
									1
								},
								{},
								
								{
									
									{
										"0.24-0.03",
										0.33000001
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.33000001
									},
									1
								},
								{},
								
								{
									
									{
										"0.24-0.03",
										0.39500001
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.39500001
									},
									1
								},
								{},
								
								{
									
									{
										"0.24-0.03",
										0.46000001
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.46000001
									},
									1
								},
								{},
								
								{
									
									{
										"0.25-0.03",
										0.52499998
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.52499998
									},
									1
								},
								{}
							};
						};
						class SpeedStatic500
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.220-0.03",
									0.183
								},
								1
							};
							right[]=
							{
								{0.23,0.183},
								1
							};
							down[]=
							{
								
								{
									"0.220-0.03",
									0.213
								},
								1
							};
						};
						class SpeedStatic0
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.220-0.03",
									0.50800002
								},
								1
							};
							right[]=
							{
								{0.23,0.50800002},
								1
							};
							down[]=
							{
								
								{
									"0.220-0.03",
									0.53799999
								},
								1
							};
						};
					};
					class AGL_Radar
					{
						condition="50-altitudeAGL";
						class Panel
						{
							width=4;
							points[]=
							{
								
								{
									"AGLMove",
									{0.73000002,0.11},
									1
								},
								
								{
									"AGLMove",
									{0.745,0.1},
									1
								},
								
								{
									"AGLMove",
									{0.73000002,0.090000004},
									1
								},
								
								{
									"AGLMove",
									{0.73000002,0.11},
									1
								},
								{},
								
								{
									{0.75,0.19750001},
									1
								},
								
								{
									{0.75,0.52249998},
									1
								},
								{},
								
								{
									{0.75,0.19750001},
									1
								},
								
								{
									{0.76999998,0.19750001},
									1
								},
								{},
								
								{
									{0.72500002,0.52249998},
									1
								},
								
								{
									{0.77499998,0.52249998},
									1
								},
								{},
								
								{
									{0.755,0.26249999},
									1
								},
								
								{
									{0.76999998,0.26249999},
									1
								},
								{},
								
								{
									{0.755,0.32749999},
									1
								},
								
								{
									{0.76999998,0.32749999},
									1
								},
								{},
								
								{
									{0.755,0.39250001},
									1
								},
								
								{
									{0.76999998,0.39250001},
									1
								},
								{},
								
								{
									{0.755,0.45750001},
									1
								},
								
								{
									{0.76999998,0.45750001},
									1
								},
								{}
							};
						};
						class AltStatic50
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.79000002,0.17},
								1
							};
							right[]=
							{
								{0.82999998,0.17},
								1
							};
							down[]=
							{
								{0.79000002,0.205},
								1
							};
						};
					};
						pos10[]={1.1339999,0.95999998};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.00179811},
								1
							},
							
							{
								{0.0020000001,-0.00179811},
								1
							},
							
							{
								{0.0020000001,0.00179811},
								1
							},
							
							{
								{-0.0020000001,0.00179811},
								1
							},
							
							{
								{-0.0020000001,-0.00179811},
								1
							}
						};
					};
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
									{0.02,0.017981101},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.017981101},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.017981101},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.017981101},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.017981101},
									1
								}
							};
						};
					};
					class SpeedNumber
					{
						align="right";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						scale=1;
						pos[]=
						{
							{0.07,0.07},
							1
						};
						right[]=
						{
							{0.15000001,0.07},
							1
						};
						down[]=
						{
							{0.07,0.12},
							1
						};
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=3;
						sourceOffset=-2;
						align="right";
						pos[]=
						{
							{0.75999999,0.07},
							1
						};
						right[]=
						{
							{0.83999997,0.07},
							1
						};
						down[]=
						{
							{0.75999999,0.12},
							1
						};
					};
					class AltNumberStatic: AltNumber
					{
						source="static";
						align="right";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							{0.88,0.090000004},
							1
						};
						right[]=
						{
							{0.93000001,0.090000004},
							1
						};
						down[]=
						{
							{0.88,0.13},
							1
						};
					};
					class VspeedNumber: SpeedNumber
					{
						source="vspeed";
						sourceScale=1;
						sourceLength=2;
						align="left";
						pos[]=
						{
							{0.81,0.55000001},
							1
						};
						right[]=
						{
							{0.88999999,0.55000001},
							1
						};
						down[]=
						{
							{0.81,0.60000002},
							1
						};
					};
					class VspeedNumberStaticP30
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.83499998,0.58999997},
							1
						};
						right[]=
						{
							{0.88499999,0.58999997},
							1
						};
						down[]=
						{
							{0.83499998,0.63},
							1
						};
					};
					class VspeedNumberStaticZERO
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.83499998,0.70999998},
							1
						};
						right[]=
						{
							{0.88499999,0.70999998},
							1
						};
						down[]=
						{
							{0.83499998,0.75},
							1
						};
					};
					class VspeedNumberStaticM30
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.83499998,0.82999998},
							1
						};
						right[]=
						{
							{0.88499999,0.82999998},
							1
						};
						down[]=
						{
							{0.83499998,0.87},
							1
						};
					};
					class NevimStatic3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.14,0.58999997},
							1
						};
						right[]=
						{
							{0.19,0.58999997},
							1
						};
						down[]=
						{
							{0.14,0.63},
							1
						};
					};
					class NevimStaticZERO
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.14,0.70999998},
							1
						};
						right[]=
						{
							{0.19,0.70999998},
							1
						};
						down[]=
						{
							{0.14,0.75},
							1
						};
					};
					class NevimStatic1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.14,0.75},
							1
						};
						right[]=
						{
							{0.19,0.75},
							1
						};
						down[]=
						{
							{0.14,0.79000002},
							1
						};
					};
					class HeadingScale
					{
						source="heading";
						horizontal=1;
						sourceScale=0.1;
						width=4;
						top=0.30000001;
						bottom=0.69999999;
						lineXleft=0.11;
						lineYright=0.1;
						lineXleftMajor=0.11;
						lineYrightMajor=0.090000004;
						majorLineEach=2;
						numberEach=2;
						step=0.5;
						stepSize=0.055555601;
						align="center";
						scale=1;
						pos[]=
						{
							"0.32-0.01",
							"0.0+0.05"
						};
						right[]=
						{
							"0.38-0.01",
							"0.0+0.05"
						};
						down[]=
						{
							"0.32-0.01",
							"0.04+0.05"
						};
					};
				};
			};
		};
		class EventHandlers: Eventhandlers
		{
			hit="";
			class RHS_EventHandlers
			{
				hit="_this call RHS_fnc_AI_eject";
				init="_this call rhs_fnc_air_init";
				getout="_this spawn rhs_fnc_ka52_ejection";
				engine="_this call rhs_fnc_addParachutes;";
			};
		};
	};
	class RHS_Ka52Black_base: RHS_Ka52_base
	{
		accuracy=0.5;
	};
	class RHS_Ka52_vvsc: RHS_Ka52_base
	{
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
	};
	class RHS_Ka52_vvs: RHS_Ka52Black_base
	{
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
	};
	class RHS_Ka52_UPK23_vvs: RHS_Ka52_vvs
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_upk23_ka52_mixed";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_upk23_ka52_mixed";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_apu6_9m127m_ka52";
						turret[]={0};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_apu6_9m127m_ka52";
						turret[]={0};
					};
				};
			};
		};
	};
	class RHS_Ka52_UPK23_vvsc: RHS_Ka52_vvsc
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_upk23_ka52_mixed";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_upk23_ka52_mixed";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_apu6_9m127m_ka52";
						turret[]={0};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_apu6_9m127m_ka52";
						turret[]={0};
					};
				};
			};
		};
	};
		draconicForceXCoef=17.200001;
		draconicForceYCoef=12.6;
		draconicForceZCoef=10.15;
		draconicTorqueXCoef=11.29;
		draconicTorqueYCoef=13.1;
		hideUnitInfo=1;
		hasdriver=0;
		weapons[]={};
		magazines[]={};
		fuelCapacity=0;
		secondaryExplosion=0;
		fuelExplosionPower=0;
		explosionEffect="";
		driveOnComponent[]={};
		class Eventhandlers
		{
			HandleDamage="deleteVehicle (_this select 0)";
		};
		SLX_XEH_DISABLED=1;
	};
	class Car_f;
		simulation="carX";
		memoryPointsGetInCargo="Cargo";
		memoryPointsGetInCargoDir="Cargo dir";
		ejectSpeed[]={1,0,1};
		hideUnitInfo=1;
		hasdriver=0;
		weapons[]={};
		magazines[]={};
		fuelCapacity=0;
		secondaryExplosion=0;
		fuelExplosionPower=0;
		explosionEffect="";
		castCargoShadow=1;
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		driveOnComponent[]={};
		SLX_XEH_DISABLED=1;
	};
	class rhs_ka52_rps_rocket: rhs_ka52_ejection_vest
	{
		editorCategory="EdCat_Things";
		armor=100000000000;
		class Eventhandlers
		{
			HandleDamage="deleteVehicle (_this select 0)";
		};
		driveOnComponent[]={};
	};
	class UAV_02_base_F: UAV
	{
		class EventHandlers;
	};
	class rhs_pchela1t_base: UAV_02_base_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRPchelaNumberPlaces,'AviaRed']"
		};
		rhs_hasNoRadar=1;
		wreck="";
		side=0;
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
		accuracy=1;
		icon="\rhsafrf\addons\rhs_a2port_air\data\map_ico\icon_Pchela1T_CA.paa";
		armor=75;
		damageResistance=0.03176;
		uavCameraDriverPos="gunnerview";
		uavCameraDriverDir="gunnerview_dir";
		uavCameraGunnerPos="gunnerview";
		uavCameraGunnerDir="gunnerview_dir";
		memoryPointLDust="DustLeft";
		memoryPointRDust="DustRight";
		memoryPointDriverOptics="gunnerview";
		driveOnComponent[]=
		{
			"gear_1",
			"gear_2"
		};
		weapons[]={};
		magazines[]={};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				isCopilot=0;
				minElev=-85;
				maxElev=0;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				commanding=-1;
				memoryPointGun="gunnerview";
				stabilizedInAxes=3;
				enableManualFire=0;
				weapons[]={};
				magazines[]={};
				GunnerCompartments="Compartment1";
				startEngine=0;
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
						initFov=0.5;
						minFov=0.050000001;
						maxFov=0.5;
						directionStabilized=1;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
			};
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vvs_c",
					"rhs_faction_vvs"
				};
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHSAIRPchelaNumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class AviaRed
					{
						name="Aviation Red";
						value="AviaRed";
					};
					class AviaBlue
					{
						name="Aviation Blue";
						value="AviaBlue";
						defaultValue="AviaBlue";
					};
					class AviaWhiteOut
					{
						name="Aviation White Out";
						value="AviaWhiteOut";
					};
					class AviaYellow
					{
						name="Aviation Yellow";
						value="AviaYellow";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
					};
					class Default
					{
						name="Default";
						value="Default";
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
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRPchelaNumberPlaces}else{[_this, [['Number', cRHSAIRPchelaNumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
		};
		maxSpeed=180;
		fuelCapacity=500;
		landingSpeed=73;
		flaps=0;
		airBrake=0;
		cabinOpening=0;
		gearRetracting=0;
		threat[]={0.30000001,0.30000001,0.1};
		audible=8;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init";
			};
		};
	};
	class Module_F;
	class ModuleCAS_F: Module_F
	{
		class Arguments
		{
			class Vehicle
			{
				class values
				{
					class RHS_Su25SM_vvs
					{
						name="Su-25 (FAB-250)";
						value="RHS_Su25SM_vvs";
					};
					class RHS_Su25SM_KH29_vvs
					{
						name="Su-25 (KH-29)";
						value="RHS_Su25SM_KH29_vvsc";
					};
					class RHS_Su25SM_Cluster_vvs
					{
						name="Su-25 (Cluster)";
						value="RHS_Su25SM_Cluster_vvsc";
					};
				};
			};
		};
	};
};
