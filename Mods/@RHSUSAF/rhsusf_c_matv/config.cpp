class CfgPatches
{
	class rhsusf_c_MATV
	{
		units[]=
		{
			"rhsusf_m1240a1_usarmy_d",
			"rhsusf_m1240a1_m2_usarmy_d",
			"rhsusf_m1240a1_mk19_usarmy_d",
			"rhsusf_m1240a1_m240_usarmy_d",
			"rhsusf_m1240a1_m2crows_usarmy_d",
			"rhsusf_m1240a1_mk19crows_usarmy_d",
			"rhsusf_m1240a1_usarmy_wd",
			"rhsusf_m1240a1_m2_usarmy_wd",
			"rhsusf_m1240a1_mk19_usarmy_wd",
			"rhsusf_m1240a1_m240_usarmy_wd",
			"rhsusf_m1240a1_m2crows_usarmy_wd",
			"rhsusf_m1240a1_mk19crows_usarmy_wd",
			"rhsusf_m1240a1_usmc_wd",
			"rhsusf_m1240a1_m2_usmc_wd",
			"rhsusf_m1240a1_mk19_usmc_wd",
			"rhsusf_m1240a1_m240_usmc_wd",
			"rhsusf_m1240a1_m2crows_usmc_wd",
			"rhsusf_m1240a1_mk19crows_usmc_wd",
			"rhsusf_m1240a1_usmc_d",
			"rhsusf_m1240a1_m2_usmc_d",
			"rhsusf_m1240a1_mk19_usmc_d",
			"rhsusf_m1240a1_m240_usmc_d",
			"rhsusf_m1240a1_m2crows_usmc_d",
			"rhsusf_m1240a1_mk19crows_usmc_d",
			"rhsusf_m1245_m2crows_socom_d",
			"rhsusf_m1245_mk19crows_socom_d",
			"rhsusf_m1245_m2crows_socom_deploy",
			"rhsusf_m1245_mk19crows_socom_deploy"
		};
		weapons[]={};
		requiredVersion=1.38;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_troops"
		};
		name="MATV MRAP";
		author="$STR_RHSUSF_AUTHOR_FULL";
		url="http://www.rhsmods.org/";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgCloudlets
{
	class Default;
	class MachineGunCartridge2;
	class rhs_rhino_dst_01: MachineGunCartridge2
	{
		interval=5.5599999;
		lifeTime=25;
		size[]={1};
		sizeVar=0;
		position[]={0,0,0};
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		rotationVelocityVar=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		particleShape="\rhsusf\addons\rhsusf_matv\rhs_rhino_dst_part1.p3d";
	};
	class rhs_rhino_dst_02: rhs_rhino_dst_01
	{
		particleShape="\rhsusf\addons\rhsusf_matv\rhs_rhino_dst_part2.p3d";
	};
	class rhs_rhino_dst_03: rhs_rhino_dst_01
	{
		particleShape="\rhsusf\addons\rhsusf_matv\rhs_rhino_dst_part3.p3d";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class rhino_system
			{
				file="rhsusf\addons\rhsusf_c_matv\scripts\rhs_rhino_system.sqf";
			};
			class matv_init
			{
				file="rhsusf\addons\rhsusf_c_matv\scripts\rhs_matv_init.sqf";
			};
			class matv_codriver_loader
			{
				file="rhsusf\addons\rhsusf_c_matv\scripts\rhs_matv_codriver_loader.sqf";
			};
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_MATV_Driver="RHS_MATV_Driver";
		RHS_MATV_Gunner_M240="RHS_MATV_Gunner_M240";
		RHS_MATV_CROWSgunner="RHS_MATV_CROWSgunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_MATV_Driver: Crew
		{
			file="\rhsusf\addons\rhsusf_c_matv\anims\rhs_matv_dvr";
			interpolateTo[]=
			{
				"RHS_AUV_KIA_Driver",
				1
			};
		};
		class RHS_MATV_Gunner_M240: Crew
		{
			file="\rhsusf\addons\rhsusf_c_matv\anims\MATV_Gunner_M240";
			interpolateTo[]=
			{
				"RHS_HMMWV_KIA_Gunner",
				1
			};
			speed=1e+010;
			boundingSphere=2.5;
		};
		class RHS_MATV_CROWSgunner: Crew
		{
			file="\rhsusf\addons\rhsusf_c_matv\anims\rhs_MATV_CROWSgunner";
			interpolateTo[]=
			{
				"RHS_MATV_KIA_CROWSgunner",
				1
			};
		};
		class RHS_MATV_KIA_CROWSgunner: DefaultDie
		{
			actions="DeadActions";
			file="\rhsusf\addons\rhsusf_c_matv\anims\rhs_matv_KIA_CROWSgunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
	};
};
class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscMapControl;
class RscControlsGroup;
class RscInGameUI
{
	class RscUnitInfo;
	class RHS_RscMATV_Codriver: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_matv_codriver_loader";
		controls[]=
		{
			"CA_Zeroing",
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class RHS_UI_Handler: RscPicture
				{
					idc=8551;
				};
			};
		};
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
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class ViewOptics;
		class EventHandlers;
		class Components;
	};
	class MRAP_01_base_F: Car_F
	{
		class EventHandlers;
		class AnimationSources: AnimationSources
		{
			class HitGlass1;
		};
	};
	class rhsusf_MATV_base: MRAP_01_base_F
	{
		dlc="RHS_USAF";
		category="Car";
		side=1;
		editorSubcategory="rhs_EdSubcat_mrap";
		vehicleClass="rhs_vehclass_MRAP";
		insideSoundCoef=0.40000001;
		displayName="MATV Base";
		unitInfoType="RHS_RscUnitInfoMATV";
		weapons[]=
		{
			"TruckHorn2",
			"rhsusf_weap_duke"
		};
		magazines[]=
		{
			"rhsusf_mag_duke"
		};
		model="\rhsusf\addons\rhsusf_matv\m1240a1";
		picture="\rhsusf\addons\rhsusf_matv\pictures\rhs_matv_unarmed_pic_ca.paa";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_CA.paa";
		mapSize=9.4200001;
		destrType="DestructDefault";
		crewExplosionProtection=1;
		camShakeCoef=0.30000001;
		dustFrontLeftPos="wheel_1_1_bound";
		dustFrontRightPos="wheel_2_1_bound";
		dustBackLeftPos="wheel_1_2_bound";
		dustBackRightPos="wheel_2_2_bound";
		tf_hasLRradio_api=1;
		selectionBrakeLights="light_brake";
		selectionBackLights="light_drive";
		driverAction="RHS_MATV_Driver";
		driverInAction="RHS_MATV_Driver";
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverRightLegAnimName="pedalR";
		cargoAction[]=
		{
			"RHS_4X4_CoDriver"
		};
		cargoProxyIndexes[]={2,3};
		getInProxyOrder[]={1,2,3};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo2 dir"
		};
		getInAction="GetInMRAP_01";
		getOutAction="GetOutMRAP_01";
		crewVulnerable=1;
		damageResistance=9.9999997e-005;
		hideProxyInCombat=0;
		canHideDriver=0;
		forceHideDriver=1;
		viewDriverInExternal=1;
		LODDriverTurnedOut=1100;
		LODDriverTurnedIn=1100;
		driverDoor="DoorLF";
		cargoDoors[]=
		{
			"DoorLB",
			"DoorRB"
		};
		transportSoldier=2;
		cargoCompartments[]={1,1};
		class CargoTurret;
		class Turrets
		{
			class CoDriverTurret: CargoTurret
			{
				showAsCargo=1;
				lodTurnedIn=1100;
				lodTurnedOut=1100;
				gunnerForceOptics=0;
				gunnerName="Co-driver";
				proxyIndex=1;
				isPersonTurret=0;
				gunnerAction="RHS_4X4_CoDriver";
				gunnerinAction="RHS_4X4_CoDriver";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				gunnerDoor="DoorRF";
				turretInfoType="RHS_RscMATV_Codriver";
			};
		};
		class DriverOpticsIn
		{
			class DVE_Wide: ViewOptics
			{
				camPos="dve_view_pos";
				opticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
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
		rhs_duke_type="rhsusf_duke";
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink;  //found empty after stripping
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
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
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
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
				};
			};
		};
		defaultUserMFDvalues[]={1000,13504,0};
		class MFD
		{
			class MFD_BFT
			{
				topLeft="BFT_Map_TL";
				topRight="BFT_Map_TR";
				bottomLeft="BFT_Map_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				class material
				{
					ambient[]={33,33,33,1};
					diffuse[]={31,31,31,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						type="fixed";
						pos[]={0.5,0.47999999};
					};
					class Static_Offset
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.22,0.059999999,0.77999997,0.059999999};
					};
					class Sensor_Rotation
					{
						center[]={0,0};
						type="rotational";
						source="heading";
						sourceScale=1;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-180;
						aspectRatio=1.25714;
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.70999998,0.764};
					};
					class Direction_Center
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0,0};
						type="rotational";
						source="user";
						sourceIndex=10;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1;
					};
					class Rotation_WP_Center
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0.5,0.55500001};
						type="rotational";
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=1.25714;
					};
					class MovementY
					{
						type="linear";
						source="user";
						sourceIndex=5;
						refreshRate=0.1;
						min=0;
						max=2;
						sourceScale=1;
						maxPos[]={0,1};
						minPos[]={0,-1};
					};
					class MovementX: MovementY
					{
						sourceIndex=4;
						maxPos[]={-1,0};
						minPos[]={1,0};
					};
					class WP1_PosX: MovementX
					{
						sourceIndex=26;
					};
					class WP1_PosY: MovementY
					{
						sourceIndex=27;
					};
					class WP2_PosX: MovementX
					{
						sourceIndex=28;
					};
					class WP2_PosY: MovementY
					{
						sourceIndex=29;
					};
					class WP3_PosX: MovementX
					{
						sourceIndex=30;
					};
					class WP3_PosY: MovementY
					{
						sourceIndex=31;
					};
					class WP4_PosX: MovementX
					{
						sourceIndex=32;
					};
					class WP4_PosY: MovementY
					{
						sourceIndex=33;
					};
					class WP5_PosX: MovementX
					{
						sourceIndex=34;
					};
					class WP5_PosY: MovementY
					{
						sourceIndex=35;
					};
					class WP6_PosX: MovementX
					{
						sourceIndex=36;
					};
					class WP6_PosY: MovementY
					{
						sourceIndex=37;
					};
					class WP7_PosX: MovementX
					{
						sourceIndex=38;
					};
					class WP7_PosY: MovementY
					{
						sourceIndex=39;
					};
					class WP8_PosX: MovementX
					{
						sourceIndex=40;
					};
					class WP8_PosY: MovementY
					{
						sourceIndex=41;
					};
					class WP9_PosX: MovementX
					{
						sourceIndex=42;
					};
					class WP9_PosY: MovementY
					{
						sourceIndex=43;
					};
					class WP10_PosX: MovementX
					{
						sourceIndex=44;
					};
					class WP10_PosY: MovementY
					{
						sourceIndex=45;
					};
					class WP11_PosX: MovementX
					{
						sourceIndex=46;
					};
					class WP11_PosY: MovementY
					{
						sourceIndex=47;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0,0.12};
					class StaticClip
					{
						class WaypointGroup
						{
							color[]={0,0,0.12};
							alpha=0.60000002;
							class WP
							{
								condition="wpvalid";
								class Draw
								{
									type="line";
									points[]={};
								};
								class WP1
								{
									condition="user26>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="1-WPIndex";
										class WaypointShape
										{
											width=16;
											type="line";
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
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
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.025142901},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="01";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP2
								{
									condition="user28>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=1)*(WPIndex<=1)";
										class WaypointShape
										{
											width=16;
											type="line";
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
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
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP1_PosX",
												1,
												"WP1_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="02";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP3
								{
									condition="user30>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=2)*(WPIndex<=2)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.0125714},
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
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="03";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP4
								{
									condition="user32>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=3)*(WPIndex<=3)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.0125714},
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
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="04";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP5
								{
									condition="user34>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=4)*(WPIndex<=4)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.0125714},
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
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="05";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP6
								{
									condition="user36>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=5)*(WPIndex<=5)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.0125714},
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
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="06";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP7
								{
									condition="user38>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=6)*(WPIndex<=6)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.0125714},
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
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="07";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP8
								{
									condition="user40>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=7)*(WPIndex<=7)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.0125714},
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
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="08";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP9
								{
									condition="user42>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=8)*(WPIndex<=8)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.0125714},
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
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="09";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP10
								{
									condition="user44>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=9)*(WPIndex<=9)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.0125714},
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
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP10_PosX",
												1,
												"WP10_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="10";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class CustomWP
								{
									condition="user46>=0";
									color[]={1,0.5,0};
									alpha=0.5;
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.025142901},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="CWP";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
							};
						};
					};
					class LightBlue
					{
						color[]={0.43000001,0.80000001,0.93000001};
						alpha=0.15000001;
						class StaticDrawPolygon
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729601,-0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{0.0068403999,-0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,-0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,-0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{0.0128558,-0.0192605},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,-0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,-0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{0.017320501,-0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,-0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,-0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{0.0196962,-0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{0.02,1.09903e-009},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.02,1.09903e-009},
										1
									},
									
									{
										"Static_Offset",
										{0.0196962,0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{0.017320501,0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{0.0128557,0.0192606},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{0.0068403999,0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{-1.74846e-009,0.025142901},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729701,0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729701,0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{-0.0068403999,0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,0.021774299},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,0.021774299},
										1
									},
									
									{
										"Static_Offset",
										{-0.0128558,0.0192605},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{-0.017320501,0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{-0.0196962,0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{-0.02,-2.99826e-010},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.02,-2.99826e-010},
										1
									},
									
									{
										"Static_Offset",
										{-0.0196962,-0.0043660202},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,-0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,-0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{-0.017320501,-0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,-0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,-0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{-0.0128557,-0.0192606},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,-0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,-0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{-0.0068404102,-0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729601,-0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729601,-0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{3.4969101e-009,-0.025142901},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,-0.0247609},
										1
									}
								}
							};
						};
					};
					class StaticDraw
					{
						type="line";
						width=6;
						points[]=
						{
							
							{
								"Static_Offset",
								{0,-0.0264},
								1
							},
							
							{
								"Static_Offset",
								{0.0036456001,-0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0.0071820002,-0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{0.0105,-0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{0.0134988,-0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{0.016085999,-0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{0.018185999,-0.0132},
								1
							},
							
							{
								"Static_Offset",
								{0.019733701,-0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{0.0206808,-0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{0.021,0},
								1
							},
							
							{
								"Static_Offset",
								{0.0206808,0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{0.019733701,0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{0.018185999,0.0132},
								1
							},
							
							{
								"Static_Offset",
								{0.016085999,0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{0.0134988,0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{0.0105,0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{0.0071820002,0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{0.0036456001,0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0,0.0264},
								1
							},
							
							{
								"Static_Offset",
								{-0.0036456001,0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{-0.0071820002,0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{-0.0105,0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{-0.0134988,0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{-0.016085999,0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{-0.018185999,0.0132},
								1
							},
							
							{
								"Static_Offset",
								{-0.019733701,0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{-0.0206808,0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{-0.021,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.0206808,-0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{-0.019733701,-0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{-0.018185999,-0.0132},
								1
							},
							
							{
								"Static_Offset",
								{-0.016085999,-0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{-0.0134988,-0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{-0.0105,-0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{-0.0071820002,-0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{-0.0036456001,-0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.0264},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								{-0.012,-0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{-0.012,0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{0.012,0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{0.012,-0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{-0.012,-0.0099999998},
								1
							},
							{}
						};
					};
					class SensorGroup
					{
						class Sensor
						{
							type="sensor";
							pos[]=
							{
								"Sensor_Offset",
								1,
								
								{
									"-0+-1",
									"-0+-1"
								},
								1
							};
							down[]=
							{
								"Sensor_Offset",
								1,
								
								{
									"0--1",
									"0--1"
								},
								1
							};
							showTargetTypes="2+4+8+16+32+64+128+256+512+1024";
							width=4;
							sensorLineType=0;
							sensorLineWidth=3;
							targetLineWidth=-0.00192;
							targetLineLength=0.02;
							range="user0";
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
											{0,-0.025142901},
											1
										},
										
										{
											{0.0034719999,-0.024760701},
											1
										},
										
										{
											{0.0068399999,-0.0236267},
											1
										},
										
										{
											{0.0099999998,-0.0217737},
											1
										},
										
										{
											{0.012856,-0.019259401},
											1
										},
										
										{
											{0.01532,-0.016161799},
											1
										},
										
										{
											{0.01732,-0.0125714},
											1
										},
										
										{
											{0.018794,-0.0085988604},
											1
										},
										
										{
											{0.019695999,-0.0043648002},
											1
										},
										
										{
											{0.02,0},
											1
										},
										
										{
											{0.019695999,0.0043648002},
											1
										},
										
										{
											{0.018794,0.0085988604},
											1
										},
										
										{
											{0.01732,0.0125714},
											1
										},
										
										{
											{0.01532,0.016161799},
											1
										},
										
										{
											{0.012856,0.019259401},
											1
										},
										
										{
											{0.0099999998,0.0217737},
											1
										},
										
										{
											{0.0068399999,0.0236267},
											1
										},
										
										{
											{0.0034719999,0.024760701},
											1
										},
										
										{
											{0,0.025142901},
											1
										},
										
										{
											{-0.0034719999,0.024760701},
											1
										},
										
										{
											{-0.0068399999,0.0236267},
											1
										},
										
										{
											{-0.0099999998,0.0217737},
											1
										},
										
										{
											{-0.012856,0.019259401},
											1
										},
										
										{
											{-0.01532,0.016161799},
											1
										},
										
										{
											{-0.01732,0.0125714},
											1
										},
										
										{
											{-0.018794,0.0085988604},
											1
										},
										
										{
											{-0.019695999,0.0043648002},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{-0.019695999,-0.0043648002},
											1
										},
										
										{
											{-0.018794,-0.0085988604},
											1
										},
										
										{
											{-0.01732,-0.0125714},
											1
										},
										
										{
											{-0.01532,-0.016161799},
											1
										},
										
										{
											{-0.012856,-0.019259401},
											1
										},
										
										{
											{-0.0099999998,-0.0217737},
											1
										},
										
										{
											{-0.0068399999,-0.0236267},
											1
										},
										
										{
											{-0.0034719999,-0.024760701},
											1
										},
										
										{
											{0,-0.025142901},
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
											{0,0.025142901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.025142901},
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
											{0,0.025142901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.025142901},
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
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class rwrEnemy: rwr
							{
								color[]={0.12,0,0};
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
											{-0.017000001,-0.0213714},
											1
										},
										
										{
											{-0.0099999998,-0.0213714},
											1
										},
										{},
										
										{
											{0.017000001,-0.0213714},
											1
										},
										
										{
											{0.0099999998,-0.0213714},
											1
										},
										{},
										
										{
											{-0.017000001,-0.0213714},
											1
										},
										
										{
											{-0.017000001,-0.0125714},
											1
										},
										{},
										
										{
											{0.017000001,-0.0213714},
											1
										},
										
										{
											{0.017000001,-0.0125714},
											1
										},
										{},
										
										{
											{-0.017000001,0.0213714},
											1
										},
										
										{
											{-0.0099999998,0.0213714},
											1
										},
										{},
										
										{
											{0.017000001,0.0213714},
											1
										},
										
										{
											{0.0099999998,0.0213714},
											1
										},
										{},
										
										{
											{-0.017000001,0.0213714},
											1
										},
										
										{
											{-0.017000001,0.0125714},
											1
										},
										{},
										
										{
											{0.017000001,0.0213714},
											1
										},
										
										{
											{0.017000001,0.0125714},
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
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{-0.0099999998,-0.0099999998},
												1
											},
											
											{
												{0,-0.0099999998},
												1
											},
											
											{
												{0,0},
												1
											},
											
											{
												{-0.0099999998,0},
												1
											}
										}
									};
								};
							};
							class targetFriendly: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetEnemy: target
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroup: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetDestroyed;  //found empty after stripping
							class targetGround: target
							{
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.026000001,-0},
											1
										},
										
										{
											{-0,0.026000001},
											1
										},
										
										{
											{0.026000001,0},
											1
										},
										
										{
											{0,-0.026000001},
											1
										},
										
										{
											{-0.026000001,-0},
											1
										},
										{}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundFriendly: targetGround
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0,-0.0264},
											1
										},
										
										{
											{0.0036456001,-0.0259987},
											1
										},
										
										{
											{0.0071820002,-0.024808099},
											1
										},
										
										{
											{0.0105,-0.022862401},
											1
										},
										
										{
											{0.0134988,-0.020222399},
											1
										},
										
										{
											{0.016085999,-0.016969901},
											1
										},
										
										{
											{0.018185999,-0.0132},
											1
										},
										
										{
											{0.019733701,-0.0090287998},
											1
										},
										
										{
											{0.0206808,-0.0045830398},
											1
										},
										
										{
											{0.021,0},
											1
										},
										
										{
											{0.0206808,0.0045830398},
											1
										},
										
										{
											{0.019733701,0.0090287998},
											1
										},
										
										{
											{0.018185999,0.0132},
											1
										},
										
										{
											{0.016085999,0.016969901},
											1
										},
										
										{
											{0.0134988,0.020222399},
											1
										},
										
										{
											{0.0105,0.022862401},
											1
										},
										
										{
											{0.0071820002,0.024808099},
											1
										},
										
										{
											{0.0036456001,0.0259987},
											1
										},
										
										{
											{0,0.0264},
											1
										},
										
										{
											{-0.0036456001,0.0259987},
											1
										},
										
										{
											{-0.0071820002,0.024808099},
											1
										},
										
										{
											{-0.0105,0.022862401},
											1
										},
										
										{
											{-0.0134988,0.020222399},
											1
										},
										
										{
											{-0.016085999,0.016969901},
											1
										},
										
										{
											{-0.018185999,0.0132},
											1
										},
										
										{
											{-0.019733701,0.0090287998},
											1
										},
										
										{
											{-0.0206808,0.0045830398},
											1
										},
										
										{
											{-0.021,0},
											1
										},
										
										{
											{-0.0206808,-0.0045830398},
											1
										},
										
										{
											{-0.019733701,-0.0090287998},
											1
										},
										
										{
											{-0.018185999,-0.0132},
											1
										},
										
										{
											{-0.016085999,-0.016969901},
											1
										},
										
										{
											{-0.0134988,-0.020222399},
											1
										},
										
										{
											{-0.0105,-0.022862401},
											1
										},
										
										{
											{-0.0071820002,-0.024808099},
											1
										},
										
										{
											{-0.0036456001,-0.0259987},
											1
										},
										
										{
											{0,-0.0264},
											1
										}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundEnemy: targetGround
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.026000001,-0},
											1
										},
										
										{
											{-0,0.026000001},
											1
										},
										
										{
											{0.026000001,0},
											1
										},
										
										{
											{0,-0.026000001},
											1
										},
										
										{
											{-0.026000001,-0},
											1
										},
										{}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundGroup: targetGroundFriendly
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
								class StaticDraw: StaticDraw;  //found empty after stripping
							};
							class targetGroundDestroyed;  //found empty after stripping
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroundRemoteGroup: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroundRemoteDestroyed;  //found empty after stripping
							class targetLaser: target
							{
								class TargetLines: TargetLines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{-1.74846e-009,0.025142901},
											1
										},
										{},
										
										{
											{0.02,1.09903e-009},
											1
										},
										
										{
											{-0.02,-2.99826e-010},
											1
										},
										{},
										
										{
											{0.0106066,-0.013334},
											1
										},
										
										{
											{-0.0106066,0.013334},
											1
										},
										{},
										
										{
											{0.0106066,0.013334},
											1
										},
										
										{
											{-0.0106066,-0.013334},
											1
										},
										{}
									};
								};
							};
							class targetLaserFriendly: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetLaserGroup: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetNVG: targetLaser
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetMan: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManFriendly: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManEnemy: targetMan
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManGroup: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManRemote: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManRemoteFriendly: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManRemoteEnemy: targetManRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManRemoteGroup: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
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
												{0.012,0.0099999998},
												1
											},
											
											{
												{0.012,-0.0099999998},
												1
											}
										},
										
										{
											
											{
												{0,0},
												1
											},
											
											{
												{-0.012,0.0099999998},
												1
											},
											
											{
												{-0.012,-0.0099999998},
												1
											}
										}
									};
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.025},
											1
										},
										
										{
											{0.02,-0.025},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirFriendly: targetAir
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirEnemy: targetAir
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirGroup: targetAir
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetAirDestroyed;  //found empty after stripping
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.025},
											1
										},
										
										{
											{0.02,-0.025},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteFriendly: targetAirRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteEnemy: targetAirRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.0074999998},
											1
										},
										
										{
											{-0,-0.029999999},
											1
										},
										
										{
											{0.02,-0.0074999998},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteGroup: targetAirRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetAirRemoteDestroyed;  //found empty after stripping
						};
					};
				};
			};
			class MFD_Gearbox
			{
				topLeft="MFD_Gearbox_TL";
				topRight="MFD_Gearbox_TR";
				bottomLeft="MFD_Gearbox_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={30,30,30,1};
					diffuse[]={10,10,10,1};
					emissive[]={200,400,200,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					color[]={0,0.1,0.059999999,1};
					alpha=0.1;
					class ReverseGear
					{
						condition="user2<=-1";
						class Gear_Text1
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.1,-0.25},
								1
							};
							right[]=
							{
								{0.85000002,-0.25},
								1
							};
							down[]=
							{
								{0.1,1.15},
								1
							};
						};
						class Gear_Text2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.5,-0.25},
								1
							};
							right[]=
							{
								{1.25,-0.25},
								1
							};
							down[]=
							{
								{0.5,1.15},
								1
							};
						};
					};
					class NeutralGear
					{
						condition="(user2>=0)*(user2<=0)";
						class Gear_Text1
						{
							type="text";
							source="static";
							text="N";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.1,-0.25},
								1
							};
							right[]=
							{
								{0.85000002,-0.25},
								1
							};
							down[]=
							{
								{0.1,1.15},
								1
							};
						};
						class Gear_Text2
						{
							type="text";
							source="static";
							text="N";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.5,-0.25},
								1
							};
							right[]=
							{
								{1.25,-0.25},
								1
							};
							down[]=
							{
								{0.5,1.15},
								1
							};
						};
					};
					class DriveGear
					{
						condition="user2>=1";
						class Range_Text
						{
							type="text";
							source="static";
							text="6";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.1,-0.25},
								1
							};
							right[]=
							{
								{0.85000002,-0.25},
								1
							};
							down[]=
							{
								{0.1,1.15},
								1
							};
						};
						class Range_Value
						{
							type="text";
							source="user";
							sourceIndex=2;
							sourceScale=1;
							sourceLength=1;
							scale=1;
							align="right";
							refreshRate=0.079999998;
							pos[]=
							{
								{0.5,-0.25},
								1
							};
							right[]=
							{
								{1.25,-0.25},
								1
							};
							down[]=
							{
								{0.5,1.15},
								1
							};
						};
					};
				};
			};
			class MFD_Speed
			{
				topLeft="MFD_Speed_TL";
				topRight="MFD_Speed_TR";
				bottomLeft="MFD_Speed_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="rhsusf_digital_font_usa";
				class material
				{
					ambient[]={30,30,30,1};
					diffuse[]={10,10,10,1};
					emissive[]={2000,4000,2000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					color[]={0,0,0,1};
					alpha=0.80000001;
					class Battery_Value
					{
						type="text";
						source="rpm";
						text="26.4Volts";
						sourceIndex=1;
						sourceOffset=24.700001;
						sourceScale=0.00050000002;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="right";
						refreshRate=0.89999998;
						pos[]=
						{
							{0.050000001,-0.1},
							1
						};
						right[]=
						{
							{0.25,-0.1},
							1
						};
						down[]=
						{
							{0.050000001,0.40000001},
							1
						};
					};
					class Battery_Text
					{
						type="text";
						source="static";
						text="Volts";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.34999999,-0.1},
							1
						};
						right[]=
						{
							{0.55000001,-0.1},
							1
						};
						down[]=
						{
							{0.34999999,0.40000001},
							1
						};
					};
					class Range_Value
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceScale=1;
						sourceLength=1;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.050000001,0.30000001},
							1
						};
						right[]=
						{
							{0.25,0.30000001},
							1
						};
						down[]=
						{
							{0.050000001,0.80000001},
							1
						};
					};
				};
			};
			class MFD_GPS
			{
				topLeft="MFD_GPS_TL";
				topRight="MFD_GPS_TR";
				bottomLeft="MFD_GPS_BL";
				borderLeft=0.0099999998;
				borderRight=0.0099999998;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="rhsusf_digital_font_usa";
				class material
				{
					ambient[]={16,16,16,1};
					diffuse[]={10,10,10,1};
					emissive[]={2000,4000,2000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					color[]={0,0,0,1};
					alpha=0.80000001;
					class PolygonDraw
					{
						color[]={0.070588201,0.086274497,0.023529399};
						alpha=1;
						class Polygon2
						{
							type="polygon";
							points[]={};
						};
						class Polygon
						{
							type="polygon";
							texture="\rhsusf\addons\rhsusf_matv\data\rhs_dagr_background_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0,-0.23},
										1
									},
									
									{
										{1,-0.23},
										1
									},
									
									{
										{1,1.12},
										1
									},
									
									{
										{0,1.12},
										1
									}
								}
							};
						};
					};
					class GoToWP_Text
					{
						type="text";
						source="static";
						text="GOTO WP";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.029999999,0.85000002},
							1
						};
						right[]=
						{
							{0.13,0.85000002},
							1
						};
						down[]=
						{
							{0.029999999,0.97000003},
							1
						};
					};
					class WPList_Text
					{
						type="text";
						source="static";
						text="WP List";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.38,0.85000002},
							1
						};
						right[]=
						{
							{0.47999999,0.85000002},
							1
						};
						down[]=
						{
							{0.38,0.97000003},
							1
						};
					};
					class Back_Text
					{
						type="text";
						source="static";
						text="Back";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.74000001,0.85000002},
							1
						};
						right[]=
						{
							{0.83999997,0.85000002},
							1
						};
						down[]=
						{
							{0.74000001,0.97000003},
							1
						};
					};
					class Track_Text
					{
						type="text";
						source="static";
						text="TRACK";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.64999998},
							1
						};
						right[]=
						{
							{0.11,0.64999998},
							1
						};
						down[]=
						{
							{0.039999999,0.74000001},
							1
						};
					};
					class Mag_Text
					{
						type="text";
						source="static";
						text="MAG";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.28999999,0.64999998},
							1
						};
						right[]=
						{
							{0.36000001,0.64999998},
							1
						};
						down[]=
						{
							{0.28999999,0.74000001},
							1
						};
					};
					class o_Text
					{
						type="text";
						source="static";
						text="o";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.31,0.69},
							1
						};
						right[]=
						{
							{0.38,0.69},
							1
						};
						down[]=
						{
							{0.31,0.77999997},
							1
						};
					};
					class Track_Value
					{
						type="text";
						source="heading";
						sourceIndex=2;
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.30000001;
						pos[]=
						{
							{0.30000001,0.69},
							1
						};
						right[]=
						{
							{0.43000001,0.69},
							1
						};
						down[]=
						{
							{0.30000001,0.86000001},
							1
						};
					};
					class Time_Value
					{
						type="text";
						source="time";
						text="%X";
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.69999999,0.64999998},
							1
						};
						right[]=
						{
							{0.80000001,0.64999998},
							1
						};
						down[]=
						{
							{0.69999999,0.77999997},
							1
						};
					};
					class TimeText
					{
						type="text";
						source="static";
						text="Z";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.70999998,0.64999998},
							1
						};
						right[]=
						{
							{0.81,0.64999998},
							1
						};
						down[]=
						{
							{0.70999998,0.77999997},
							1
						};
					};
					class Date_Day_Value
					{
						type="text";
						source="time";
						text="%d";
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.5,0.73000002},
							1
						};
						right[]=
						{
							{0.60000002,0.73000002},
							1
						};
						down[]=
						{
							{0.5,0.86000001},
							1
						};
					};
					class Date_Month_Value
					{
						type="text";
						source="time";
						text="%b";
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.64999998,0.73000002},
							1
						};
						right[]=
						{
							{0.75,0.73000002},
							1
						};
						down[]=
						{
							{0.64999998,0.86000001},
							1
						};
					};
					class Date_Year_Value
					{
						type="text";
						source="time";
						text="%y";
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.76999998,0.73000002},
							1
						};
						right[]=
						{
							{0.87,0.73000002},
							1
						};
						down[]=
						{
							{0.76999998,0.86000001},
							1
						};
					};
					class Date1_Text
					{
						type="text";
						source="static";
						text="-";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.50999999,0.73000002},
							1
						};
						right[]=
						{
							{0.61000001,0.73000002},
							1
						};
						down[]=
						{
							{0.50999999,0.86000001},
							1
						};
					};
					class Date2_Text
					{
						type="text";
						source="static";
						text="-";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.66000003,0.73000002},
							1
						};
						right[]=
						{
							{0.75999999,0.73000002},
							1
						};
						down[]=
						{
							{0.66000003,0.86000001},
							1
						};
					};
					class Elevation_Text
					{
						type="text";
						source="static";
						text="ELEVATION";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.40000001,0.43000001},
							1
						};
						right[]=
						{
							{0.47,0.43000001},
							1
						};
						down[]=
						{
							{0.40000001,0.51999998},
							1
						};
					};
					class Elevation2_Text
					{
						type="text";
						source="static";
						text="MSL";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.70999998,0.43000001},
							1
						};
						right[]=
						{
							{0.77999997,0.43000001},
							1
						};
						down[]=
						{
							{0.70999998,0.51999998},
							1
						};
					};
					class Elevation_Value
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						sourceLength=5;
						scale=1;
						align="left";
						refreshRate=0.80000001;
						pos[]=
						{
							{0.73000002,0.47999999},
							1
						};
						right[]=
						{
							{0.85500002,0.47999999},
							1
						};
						down[]=
						{
							{0.73000002,0.66000003},
							1
						};
					};
					class Elevation3_Text
					{
						type="text";
						source="static";
						text="+";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.41999999,0.47999999},
							1
						};
						right[]=
						{
							{0.54500002,0.47999999},
							1
						};
						down[]=
						{
							{0.41999999,0.66000003},
							1
						};
					};
					class Elevation4_Text
					{
						type="text";
						source="static";
						text="m";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.74000001,0.5},
							1
						};
						right[]=
						{
							{0.83999997,0.5},
							1
						};
						down[]=
						{
							{0.74000001,0.64999998},
							1
						};
					};
					class Speed_Text
					{
						type="text";
						source="static";
						text="SPEED";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.43000001},
							1
						};
						right[]=
						{
							{0.11,0.43000001},
							1
						};
						down[]=
						{
							{0.039999999,0.51999998},
							1
						};
					};
					class Speed_Value
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=1;
						scale=1;
						align="left";
						refreshRate=0.30000001;
						pos[]=
						{
							{0.2,0.47999999},
							1
						};
						right[]=
						{
							{0.32499999,0.47999999},
							1
						};
						down[]=
						{
							{0.2,0.66000003},
							1
						};
					};
					class Speed2_Text
					{
						type="text";
						source="static";
						text="kph";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.5},
							1
						};
						right[]=
						{
							{0.31,0.5},
							1
						};
						down[]=
						{
							{0.20999999,0.64999998},
							1
						};
					};
					class MGRS_Text
					{
						type="text";
						source="static";
						text="MGRS-Arma";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.079999998},
							1
						};
						right[]=
						{
							{0.13,0.079999998},
							1
						};
						down[]=
						{
							{0.039999999,0.2},
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
							{0.090000004,0.15000001},
							1
						};
						right[]=
						{
							{0.215,0.15000001},
							1
						};
						down[]=
						{
							{0.090000004,0.33000001},
							1
						};
					};
					class CordY: CordX
					{
						source="coordinateY";
						pos[]=
						{
							{0.25999999,0.15000001},
							1
						};
						right[]=
						{
							{0.38499999,0.15000001},
							1
						};
						down[]=
						{
							{0.25999999,0.33000001},
							1
						};
					};
					class wp_Text
					{
						type="text";
						source="static";
						text="WP";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.70999998,0.079999998},
							1
						};
						right[]=
						{
							{0.80000001,0.079999998},
							1
						};
						down[]=
						{
							{0.70999998,0.2},
							1
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="left";
							scale=1;
							pos[]=
							{
								{0.75999999,0.15000001},
								1
							};
							right[]=
							{
								{0.88499999,0.15000001},
								1
							};
							down[]=
							{
								{0.75999999,0.33000001},
								1
							};
						};
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
								{0.75999999,0.27000001},
								1
							};
							right[]=
							{
								{0.88499999,0.27000001},
								1
							};
							down[]=
							{
								{0.75999999,0.44999999},
								1
							};
						};
					};
					class PresentPos_Text
					{
						type="text";
						source="static";
						text="PRESENT POSITION";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0},
							1
						};
						right[]=
						{
							{0.12,0},
							1
						};
						down[]=
						{
							{0.050000001,0.090000004},
							1
						};
					};
					class STBY_Text
					{
						type="text";
						source="static";
						text="STBY";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.94999999,0.0049999999},
							1
						};
						right[]=
						{
							{1.02,0.0049999999},
							1
						};
						down[]=
						{
							{0.94999999,0.085000001},
							1
						};
					};
					class On_Text
					{
						type="text";
						source="static";
						text="ON";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.88999999,0.090000004},
							1
						};
						right[]=
						{
							{0.94,0.090000004},
							1
						};
						down[]=
						{
							{0.88999999,0.16},
							1
						};
					};
					class Static1_Text
					{
						type="text";
						source="static";
						text=">99dsf";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.235},
							1
						};
						right[]=
						{
							{1.02,0.235},
							1
						};
						down[]=
						{
							{0.95999998,0.32499999},
							1
						};
					};
					class Static2_Text
					{
						type="text";
						source="static";
						text="32534";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.54000002},
							1
						};
						right[]=
						{
							{1.03,0.54000002},
							1
						};
						down[]=
						{
							{0.95999998,0.63},
							1
						};
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
			"camo4",
			"pintle",
			"camo5",
			"camo6",
			"",
			"BFT_screen"
		};
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co"
		};
		class textureSources
		{
			class rhs_desert
			{
				displayName="Desert";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
				};
				factions[]={};
			};
			class rhs_woodland
			{
				displayName="Woodland";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
				};
				factions[]={};
			};
			class rhs_olive
			{
				displayName="Olive";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_o_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_o_co.paa"
				};
				factions[]={};
			};
		};
		textureList[]={};
		class Attributes
		{
			class ObjectTexture
			{
				control="ObjectTexture";
				data="ObjectTexture";
				displayName="Skin";
				tooltip="Texture and material set applied on the object.";
			};
			class DoorRF
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Open right front door";
				property="Door_RF";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class DoorLB: DoorRF
			{
				displayName="Open left back door";
				property="Door_LB";
			};
			class DoorRB: DoorRF
			{
				displayName="Open right back door";
				property="Door_RB";
			};
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase=0;
			};
			class lights_hide: longlights_hide
			{
				initPhase=0;
			};
			class cabinlights_hide: longlights_hide;  //found empty after stripping
			class light_bo
			{
				source="user";
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
			class light_stop: light_bo
			{
				initPhase=0;
			};
			class light_svc: light_bo
			{
				initPhase=1;
			};
			class dve_fold
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class DoorLF
			{
				displayName="Open Left Front Door";
				source="door";
				animPeriod=0.80000001;
				sound="RHSUSF_Truck_Door";
				soundPosition="osa_dvere_lp";
			};
			class DoorRF: DoorLF
			{
				soundPosition="osa_dvere_pp";
				displayName="Open Right Front Door";
			};
			class DoorLB: DoorLF
			{
				soundPosition="osa_dvere_pp";
				displayName="Open Left Rear Door";
			};
			class DoorRB: DoorLF
			{
				soundPosition="osa_dvere_pp";
				displayName="Open Right Rear Door";
			};
			class DUKE_Hide
			{
				source="user";
				mass=-20;
				displayName="hide DUKE antennas";
				author="$STR_RHSUSF_AUTHOR_FULL";
				animPeriod=9.9999997e-006;
				initPhase=0;
				onPhaseChanged="_this call rhs_fnc_duke_vg;";
			};
			class HitDuke1
			{
				source="Hit";
				hitpoint="HitDuke1";
			};
			class HitDuke2
			{
				source="Hit";
				hitpoint="HitDuke2";
			};
			class hide_spare
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide spare wheel";
				source="user";
				mass=-20;
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2
			{
				source="Hit";
				hitpoint="HitGlass2";
				raw=1;
			};
			class HitGlass3
			{
				source="Hit";
				hitpoint="HitGlass3";
				raw=1;
			};
			class HitGlass4
			{
				source="Hit";
				hitpoint="HitGlass4";
				raw=1;
			};
			class HitGlass5
			{
				source="Hit";
				hitpoint="HitGlass5";
				raw=1;
			};
			class HitGlass6
			{
				source="Hit";
				hitpoint="HitGlass6";
				raw=1;
			};
			class BFT_Map_Scale
			{
				source="user";
				animPeriod=0;
				initPhase=0.1;
			};
			class BFT_Map_Move_X
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class BFT_Map_Move_Y
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
		};
		class UVAnimations
		{
			class BFT_Map_Scale
			{
				type="scale";
				section="BFT_screen";
				source="BFT_Map_Scale";
				minValue=0;
				maxValue=1;
				center[]={1,1};
				scale0[]={0,0};
				scale1[]={1,1};
			};
			class BFT_Map_Move_X
			{
				section="BFT_screen";
				type="translation";
				source="BFT_Map_Move_X";
				maxValue=100;
				center[]={1,0};
				offset0[]={0,0};
				offset1[]={100,0};
			};
			class BFT_Map_Move_Y: BFT_Map_Move_X
			{
				source="BFT_Map_Move_Y";
				maxValue=100;
				offset0[]={0,0};
				offset1[]={0,-100};
			};
			class BFT_Map_Rotate: BFT_Map_Scale
			{
				type="rotate";
				source="direction";
				minValue="rad -180";
				maxValue="rad 180";
				angle0="rad -180";
				angle1="rad 180";
			};
		};
		class UserActions
		{
			class light_bo_off
			{
				displayName="B.O. Light off";
				position="pos_driverpos";
				radius=2;
				onlyForplayer=0;
				showwindow=0;
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_bo'<0.5;";
				statement="this animate ['light_bo', 1];this animate ['light_brake_bo', 1]";
			};
			class light_bo_on: light_bo_off
			{
				displayName="B.O. Light on";
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_bo'==1;";
				statement="this animate ['light_bo', 0];this animate ['light_brake_bo', 0]";
			};
			class light_stop_off: light_bo_off
			{
				displayName="Stop Light off";
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_stop'<0.5";
				statement="this animate ['light_stop', 1]";
			};
			class light_stop_on: light_bo_off
			{
				displayName="Stop Light on";
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_stop'==1";
				statement="this animate ['light_stop', 0]";
			};
			class light_svc_on
			{
				displayName="Service Drive Lights on";
				position="pos_driverpos";
				radius=2;
				onlyForplayer=0;
				showwindow=0;
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_svc'==1;";
				statement="this animate ['light_svc', 0]";
			};
			class light_svc_off: light_svc_on
			{
				displayName="Service Drive Lights off";
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationPhase 'light_svc'<0.5;";
				statement="this animate ['light_svc', 1]";
			};
			class toggle_dve: light_bo_off
			{
				displayName="Toggle DVE monitor";
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer))";
				statement="this animateSource ['dve_fold',abs((this AnimationSourcePhase 'dve_fold') - 1)]";
			};
			class lights_toggle
			{
				displayName="Toggle short/long lights";
				position="";
				shortcut="vehLockTargets";
				radius=12;
				priority=1.5;
				showWindow=0;
				onlyForplayer=1;
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer)) AND (isLightOn this)";
				statement="[this,0] call rhsusf_fnc_carLightToggle";
			};
			class AdjustMap
			{
				displayName="Adjust BFT Map Scale";
				position="pos driver";
				radius=20;
				condition="((this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer))";
				statement="createDialog 'RHS_BFT_Map_Scale_UI';sliderSetRange [1900,0.01,1];sliderSetPosition [1900,cameraon animationSourcePhase 'BFT_Map_Scale']";
				onlyforplayer=1;
			};
		};
		hullDamageCauseExplosion=1;
		armorStructural=16;
		armor=100;
		class HitPoints: HitPoints
		{
			class HitHull: HitBody
			{
				armor=-350;
				passThrough=8;
				name="karoserie";
				visual="zbytek";
				minimalhit=-0.25;
				explosionShielding=0.0099999998;
				radius=0.22;
			};
			class HitFuel
			{
				armor=-150;
				name="palivo";
				visual="-";
				radius=0.15000001;
				explosionShielding=0.5;
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=-100;
				minimalhit=-0.1;
				name="motor";
				visual="zbytek";
				passThrough=0.2;
				radius=0.15000001;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke1";
						intensity=0.5;
						interval=1;
						lifeTime=60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type="SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type="RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation="sound";
						type="Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type="WeaponWreckSmoke";
						position="engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position="engine_smoke3";
					};
				};
			};
			class HitDuke1
			{
				armor=0.75;
				material=-1;
				name="duke1";
				armorComponent="duke1";
				visual="-";
				passThrough=0;
				MinimalHit=0.050000001;
				explosionShielding=0.0099999998;
				radius=0.15000001;
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.2;
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
				armor=-250;
				minimalHit=-0.025;
				explosionShielding=1;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.2;
				visual="wheel_1_2_damage";
				armorComponent="wheel_1_2_hide";
				armor=-250;
				minimalHit=-0.025;
				explosionShielding=1;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.2;
				visual="wheel_2_1_damage";
				armorComponent="wheel_2_1_hide";
				armor=-250;
				minimalHit=-0.025;
				explosionShielding=1;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.2;
				visual="wheel_2_2_damage";
				armorComponent="wheel_2_2_hide";
				armor=-250;
				minimalHit=-0.025;
				explosionShielding=1;
				passThrough=0;
			};
			class HitGlass1
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass1";
				name="glass1";
				visual="glass1";
			};
			class HitGlass2
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass2";
				name="glass2";
				visual="glass2";
			};
			class HitGlass3
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass3";
				name="glass3";
				visual="glass3";
			};
			class HitGlass4
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass4";
				name="glass4";
				visual="glass4";
			};
			class HitGlass5
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass5";
				name="glass5";
				visual="glass5";
			};
			class HitGlass6
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass6";
				name="glass6";
				visual="glass6";
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					point="lightpoint_1";
					color[]={20,30,30};
					ambient[]={1,1,1};
					intensity=2.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					drawLight=0;
					activeLight=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.050000001;
						hardLimitEnd=0.1;
					};
				};
				class Light2: Light1
				{
					point="lightpoint_2";
				};
				class Light3: Light1
				{
					point="lightpoint_3";
				};
				class Light_bft: Light1
				{
					point="lightpoint_bft";
					color[]={20,30,30};
					ambient[]={1,3,3};
					intensity=5.5;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=0.31;
					};
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=2;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
			class Long_Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_L_Long";
				direction="Light_L_Long_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=22;
				outerAngle=26;
				coneFadeCoef=1;
				intensity=100;
				useFlare=0;
				dayLight=0;
				flareSize=2.5;
				flareMaxDistance=750;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0.1;
					quadratic=0;
					hardLimitStart=500;
					hardLimitEnd=750;
				};
			};
			class Long_Right: Long_Left
			{
				position="Light_R_Long";
				direction="Light_R_Long_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Long_Right2: Long_Right
			{
				useFlare=1;
				position="light_R_Long_flare";
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef=51;
				intensity=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=50;
					hardLimitStart=0;
					hardLimitEnd=3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare=1;
				position="light_L_Long_flare";
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef=51;
				intensity=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=50;
					hardLimitStart=0;
					hardLimitEnd=3;
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2"
			},
			
			{
				"Right",
				"Right2"
			}
		};
		armorLights=0.0099999998;
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="m1P";
					pointDirection="m1D";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="m2P";
					pointDirection="m2D";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
			class DVE_Monitor
			{
				renderTarget="rendertarget_dve";
				class CameraView1
				{
					pointPosition="dve_view_pos";
					pointDirection="dve_view_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.60000002;
				};
				BBoxes[]=
				{
					"PIP_DVE_TL",
					"PIP_DVE_TR",
					"PIP_DVE_BL",
					"PIP_DVE_BR"
				};
			};
		};
		normalSpeedForwardCoef=0.47999999;
		turnCoef=3.5;
		terrainCoef=0.5;
		simulation="carx";
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=105;
		fuelCapacity=20;
		wheelCircumference=2.95;
		brakeIdleSpeed=2;
		maxFordingDepth=-1.3;
		waterSpeedFactor=0.30000001;
		waterResistance=10;
		waterResistanceCoef=0.2;
		waterLeakiness=250;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.0699999,
				"N",
				0,
				"D1",
				4.5900002,
				"D2",
				2.25,
				"D3",
				1.54,
				"D4",
				1,
				"D5",
				0.75,
				"D6",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				6
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.99000001,0.99000001,0.99000001,0.99000001,0.99000001,0.99000001};
		switchTime=0.31;
		latency=1.3;
		transmissionLosses=18;
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=85;
		dampingRateFullThrottle=0.078000002;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.31818199,0.45789799},
			{0.45454499,0.78672397},
			{0.590909,1},
			{0.63636398,1},
			{0.72727299,0.99078101},
			{0.909091,0.974186},
			{0.95454502,0.94038099},
			{1.05273,0}
		};
		enginePower=275;
		peakTorque=1630.2;
		minOmega=65;
		maxOmega=230.38;
		idleRPM=700;
		redRPM=2200;
		engineLosses=12;
		thrustDelay=1;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=1.5;
		antiRollbarForceLimit=2.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=65;
		accelAidForceSpd=2.23;
		accelAidForceCoef=4;
		accelAidForceYOffset=-1.3;
		class Wheels
		{
			class L1
			{
				side="left";
				boneName="wheel_1_1_damper";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.37;
				steering=1;
				mass=80;
				MOI=25;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=35000;
				maxHandBrakeTorque=0;
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=-1;
				springStrength=305000;
				springDamperRate=45725;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=40;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,2.5},
					{0.5,2.3},
					{1,2}
				};
			};
			class L2: L1
			{
				steering=0;
				boneName="wheel_1_2_damper";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=14000;
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
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=14000;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_dam.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_destruction.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_int.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_int_dam.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_destruction.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_dam.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_destruction.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_dam.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_destruction.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_kamaz_glass.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_kamaz_glass_in.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_int.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class EventHandlers: EventHandlers
		{
			class BIS_Randomisation
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
			};
			class RHSUSF_EventHandlers
			{
				init="_this call rhs_fnc_matv_init";
				seatSwitched="if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]}";
				turnIn="([0] + _this)  call rhsusf_fnc_turretAction;";
				turnOut="([1] + _this) call rhsusf_fnc_turretAction;";
			};
			class rhs_duke
			{
				handleDamage="_this call rhs_fnc_duke_destruction";
			};
		};
		class TransportBackpacks
		{
			class _xx_rhsusf_falconii
			{
				backpack="rhsusf_falconii";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_m136_hedp_mag
			{
				magazine="rhs_m136_hedp_mag";
				count=2;
			};
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=20;
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine="rhsusf_100Rnd_556x45_soft_pouch";
				count=8;
			};
			class _xx_rhs_mag_M441_HE
			{
				magazine="rhs_mag_M441_HE";
				count=16;
			};
			class _xx_rhs_mag_M714_white
			{
				magazine="rhs_mag_M714_white";
				count=4;
			};
			class _xx_rhs_mag_M662_red
			{
				magazine="rhs_mag_M662_red";
				count=2;
			};
			class _xx_rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=4;
			};
			class _xx_rhs_mag_m18_green
			{
				magazine="rhs_mag_m18_green";
				count=2;
			};
			class _xx_rhs_mag_m18_red
			{
				magazine="rhs_mag_m18_red";
				count=2;
			};
			class _xx_rhs_mag_an_m8hc
			{
				magazine="rhs_mag_an_m8hc";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m4_carryhandle
			{
				weapon="rhs_weap_m4_carryhandle";
				count=2;
			};
			class _xx_rhs_weap_M136_hedp
			{
				weapon="rhs_weap_M136_hedp";
				count=2;
			};
		};
	};
	class rhsusf_MATV_armed_base: rhsusf_MATV_base
	{
		class Hitpoints: HitPoints
		{
			class Hit_Rhino
			{
				armor=-50;
				armorComponent="rhino";
				name="rhino";
				visual="-";
				minimalhit=-0.40000001;
				explosionShielding=8.5;
				passThrough=0;
				radius=0.2;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Rhino_Destruction_01
					{
						simulation="particles";
						type="rhs_rhino_dst_01";
						position="fx_rhino_1";
						intensity=0.5;
						interval=1;
						lifeTime=0.1;
					};
					class RHS_Rhino_Destruction_02: RHS_Rhino_Destruction_01
					{
						type="rhs_rhino_dst_02";
						position="fx_rhino_2";
					};
					class RHS_Rhino_Destruction_03: RHS_Rhino_Destruction_01
					{
						type="rhs_rhino_dst_03";
						position="fx_rhino_3";
					};
					class RHS_Rhino_Destruction_01_smoke: RHS_Rhino_Destruction_01
					{
						type="SmallWreckSmoke";
						position="fx_rhino_1";
					};
					class RHS_Rhino_Destruction_02_smoke: RHS_Rhino_Destruction_01
					{
						type="SmallWreckSmoke";
						position="fx_rhino_2";
					};
					class RHS_Rhino_Destruction_03_smoke: RHS_Rhino_Destruction_01
					{
						type="SmallWreckSmoke";
						position="fx_rhino_3";
					};
					class RHS_Rhino_Destruction_01_sparks: RHS_Rhino_Destruction_01
					{
						type="RHS_FireSparks";
						position="fx_rhino_1";
					};
					class RHS_Rhino_Destruction_02_sparks: RHS_Rhino_Destruction_01
					{
						type="RHS_FireSparks";
						position="fx_rhino_2";
					};
					class RHS_Rhino_Destruction_03_sparks: RHS_Rhino_Destruction_01
					{
						type="RHS_FireSparks";
						position="fx_rhino_3";
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class rhino
			{
				source="door";
				animPeriod=2;
			};
			class hide_rhino
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide rhino";
				source="user";
				mass=-20;
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class hit_rhino_source
			{
				source="hit";
				hitpoint="Hit_Rhino";
				raw=1;
			};
		};
		class Attributes: Attributes
		{
			class rhino
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Lower Rhino";
				property="Rhino_down";
				expression="_this animateDoor ['%s',_value,true]";
			};
		};
		class UserActions: UserActions
		{
			class LowerRhino
			{
				displayName="Lower Rhino";
				position="pos_driverpos";
				radius=2;
				showwindow=0;
				condition="((call rhs_fnc_findPlayer) == driver this) && {this animationphase 'hide_rhino' < 0.5} && {this getHitpointDamage 'Hit_Rhino' < 1} && {this doorPhase 'rhino' < 0.1;}";
				statement="[this,1] call rhs_fnc_rhino_system";
				onlyforplayer=1;
			};
			class RaiseRhino: LowerRhino
			{
				displayName="Raise Rhino";
				condition="((call rhs_fnc_findPlayer) == driver this) && {this animationphase 'hide_rhino' < 0.5} && {this getHitpointDamage 'Hit_Rhino' < 1} && {this doorPhase 'rhino' > 0.9};";
				statement="[this,0] call rhs_fnc_rhino_system";
			};
			class AdjustMap: AdjustMap
			{
				condition="((this turretUnit [1]) isEqualTo (call rhs_fnc_findPlayer))";
			};
		};
	};
	class rhsusf_MATV_OGPK_base: rhsusf_MATV_armed_base
	{
		picture="\rhsusf\addons\rhsusf_matv\pictures\rhs_matv_armed_pic_ca.paa";
		class Hitpoints: Hitpoints
		{
			class HitGlass7
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass7";
				name="glass7";
				visual="glass7";
			};
			class HitGlass8
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass8";
				name="glass8";
				visual="glass8";
			};
			class HitGlass9
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass9";
				name="glass9";
				visual="glass9";
			};
			class HitGlass10
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass10";
				name="glass10";
				visual="glass10";
			};
			class HitGlass11
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass11";
				name="glass11";
				visual="glass11";
			};
			class HitGlass12
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass12";
				name="glass12";
				visual="glass12";
			};
			class HitGlass13
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass13";
				name="glass13";
				visual="glass13";
			};
			class HitGlass14
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass14";
				name="glass14";
				visual="glass14";
			};
			class HitGlass15
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass15";
				name="glass15";
				visual="glass15";
			};
		};
		class AnimationSources: AnimationSources
		{
			class hide_ogpkover
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide overhead protection";
				source="user";
				mass=-20;
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
			class hide_ogpknet
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide camo net";
				source="user";
				mass=0;
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
			class hide_ogpkbust
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide turret bustle";
				source="user";
				mass=-20;
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
			class HitGlass7
			{
				source="Hit";
				hitpoint="HitGlass7";
				raw=1;
			};
			class HitGlass8
			{
				source="Hit";
				hitpoint="HitGlass8";
				raw=1;
			};
			class HitGlass9
			{
				source="Hit";
				hitpoint="HitGlass9";
				raw=1;
			};
			class HitGlass10
			{
				source="Hit";
				hitpoint="HitGlass10";
				raw=1;
			};
			class HitGlass11
			{
				source="Hit";
				hitpoint="HitGlass11";
				raw=1;
			};
			class HitGlass12
			{
				source="Hit";
				hitpoint="HitGlass12";
				raw=1;
			};
			class HitGlass13
			{
				source="Hit";
				hitpoint="HitGlass13";
				raw=1;
			};
			class HitGlass14
			{
				source="Hit";
				hitpoint="HitGlass14";
				raw=1;
			};
			class HitGlass15
			{
				source="Hit";
				hitpoint="HitGlass15";
				raw=1;
			};
		};
		animationList[]=
		{
			"hide_ogpkover",
			0.5,
			"hide_ogpknet",
			0.5,
			"hide_ogpkbust",
			0.5
		};
		threat[]={0.89999998,0.30000001,0.1};
		class Turrets: Turrets
		{
			class OGPK_Turret: NewTurret
			{
				gunnerLeftHandAnimName="OtocHlaven_Shake";
				gunnerRightHandAnimName="OtocHlaven_Shake";
				gunnerLeftLegAnimName="Gunner_Legs";
				gunnerRightLegAnimName="Gunner_Legs";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				animationSourceStickX="MainTurret_Inertia";
				animationSourceStickY="MainGun_Inertia";
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				gunnerForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				weapons[]={};
				magazines[]={};
				minElev=-10;
				maxElev=40;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					1e-006,
					1
				};
				gunnerAction="RHS_HMMWV_Gunner03";
				gunnerInAction="RHS_HMMWV_Gunner03_in";
				maxhorizontalrotspeed=0.80000001;
				maxverticalrotspeed=0.94999999;
				lodTurnedIn=1000;
				lodTurnedOut=1000;
				lodOpticsOut=1000;
				canhideGunner=1;
				inGunnerMayFire=0;
				outGunnerMayFire=1;
				viewGunnerInExternal=1;
				gunnerGetInAction="GetInMRAP_01_cargo";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerDoor="DoorLB";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				startEngine=0;
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGunnerOptics="";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerOpticsModel="";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				optics=0;
				disableSoundAttenuation=1;
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				class ViewOptics: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner: ViewOptics;  //found empty after stripping
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
		};
		class RenderTargets: RenderTargets
		{
			class LeftMirror: LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1: CameraView1;  //found empty after stripping
			};
			class RightMirror: RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1: CameraView1;  //found empty after stripping
			};
			class DVE_Monitor: DVE_Monitor
			{
				renderTarget="rendertarget_dve";
				class CameraView1: CameraView1;  //found empty after stripping
			};
			class LeftMirror2
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="pp4";
					pointDirection="pd4";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_4_TL",
					"PIP_4_TR",
					"PIP_4_BL",
					"PIP_4_BR"
				};
			};
			class RightMirror2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="pp3";
					pointDirection="pd3";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_3_TL",
					"PIP_3_TR",
					"PIP_3_BL",
					"PIP_3_BR"
				};
			};
		};
	};
	class rhsusf_MATV_OGPK_M2_base: rhsusf_MATV_OGPK_base
	{
		model="\rhsusf\addons\rhsusf_matv\m1240a1_m2";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="RHS_M2";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="RHS_M2";
			};
			class Revolving
			{
				source="revolving";
				weapon="RHS_M2";
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="RHS_M2";
			};
		};
		class Turrets: Turrets
		{
			class OGPK_Turret: OGPK_Turret
			{
				discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				weapons[]=
				{
					"RHS_M2"
				};
				magazines[]=
				{
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
				};
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
		};
	};
	class rhsusf_MATV_OGPK_MK19_base: rhsusf_MATV_OGPK_base
	{
		model="\rhsusf\addons\rhsusf_matv\m1240a1_mk19";
		class AnimationSources: AnimationSources
		{
			class belt_rotation
			{
				source="reload";
				weapon="RHS_MK19";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="RHS_MK19";
			};
			class Revolving
			{
				source="revolving";
				weapon="RHS_MK19";
			};
		};
		class Turrets: Turrets
		{
			class OGPK_Turret: OGPK_Turret
			{
				discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				weapons[]=
				{
					"RHS_MK19"
				};
				magazines[]=
				{
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M1001",
					"RHS_48Rnd_40mm_MK19_M1001",
					"RHS_48Rnd_40mm_MK19_M1001"
				};
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
		};
	};
	class rhsusf_MATV_OGPK_M240_base: rhsusf_MATV_OGPK_base
	{
		model="\rhsusf\addons\rhsusf_matv\m1240a1_m240";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="rhs_weap_m240_m113";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="rhs_weap_m240_m113";
			};
			class Revolving
			{
				source="revolving";
				weapon="rhs_weap_m240_m113";
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="rhs_weap_m240_m113";
			};
		};
		class Turrets: Turrets
		{
			class OGPK_Turret: OGPK_Turret
			{
				gunnerAction="RHS_MATV_Gunner_M240";
				gunnerInAction="RHS_HMMWV_Gunner03_in";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				selectionFireAnim="zasleh";
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				minElev=-18;
				maxElev=40;
				weapons[]=
				{
					"rhs_weap_m240_m113"
				};
				magazines[]=
				{
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200"
				};
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
		};
	};
	class rhsusf_MATV_CROWS_base: rhsusf_MATV_armed_base
	{
		picture="\rhsusf\addons\rhsusf_matv\pictures\rhs_matv_crows_pic_ca.paa";
		transportSoldier=1;
		cargoAction[]=
		{
			"RHS_4X4_CoDriver"
		};
		cargoProxyIndexes[]={3};
		getInProxyOrder[]={1,3};
		memoryPointsGetInCargo[]=
		{
			"pos codriver",
			"pos cargo2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos codriver dir",
			"pos cargo2 dir"
		};
		cargoDoors[]=
		{
			"DoorRF",
			"DoorRB"
		};
		class compartmentsLights: compartmentsLights
		{
			class Comp1: Comp1
			{
				class Light1: Light1;  //found empty after stripping
				class Light2: Light2;  //found empty after stripping
				class Light3: Light3;  //found empty after stripping
				class Light_bft: Light_bft;  //found empty after stripping
				class Light_crows: Light_bft
				{
					point="lightpoint_crows";
				};
			};
		};
		class AnimationSources: AnimationSources;  //found empty after stripping
		threat[]={0.89999998,0.30000001,0.1};
		class MFD: MFD
		{
			class MFD_BFT
			{
				topLeft="BFT_Map_TL";
				topRight="BFT_Map_TR";
				bottomLeft="BFT_Map_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				class material
				{
					ambient[]={33,33,33,1};
					diffuse[]={31,31,31,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						type="fixed";
						pos[]={0.5,0.47999999};
					};
					class Static_Offset
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.22,0.059999999,0.77999997,0.059999999};
					};
					class Sensor_Rotation
					{
						center[]={0,0};
						type="rotational";
						source="heading";
						sourceScale=1;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-180;
						aspectRatio=1.25714;
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.70999998,0.764};
					};
					class Direction_Center
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0,0};
						type="rotational";
						source="user";
						sourceIndex=10;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1;
					};
					class Rotation_WP_Center
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0.5,0.55500001};
						type="rotational";
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=1.25714;
					};
					class MovementY
					{
						type="linear";
						source="user";
						sourceIndex=5;
						refreshRate=0.1;
						min=0;
						max=2;
						sourceScale=1;
						maxPos[]={0,1};
						minPos[]={0,-1};
					};
					class MovementX: MovementY
					{
						sourceIndex=4;
						maxPos[]={-1,0};
						minPos[]={1,0};
					};
					class WP1_PosX: MovementX
					{
						sourceIndex=26;
					};
					class WP1_PosY: MovementY
					{
						sourceIndex=27;
					};
					class WP2_PosX: MovementX
					{
						sourceIndex=28;
					};
					class WP2_PosY: MovementY
					{
						sourceIndex=29;
					};
					class WP3_PosX: MovementX
					{
						sourceIndex=30;
					};
					class WP3_PosY: MovementY
					{
						sourceIndex=31;
					};
					class WP4_PosX: MovementX
					{
						sourceIndex=32;
					};
					class WP4_PosY: MovementY
					{
						sourceIndex=33;
					};
					class WP5_PosX: MovementX
					{
						sourceIndex=34;
					};
					class WP5_PosY: MovementY
					{
						sourceIndex=35;
					};
					class WP6_PosX: MovementX
					{
						sourceIndex=36;
					};
					class WP6_PosY: MovementY
					{
						sourceIndex=37;
					};
					class WP7_PosX: MovementX
					{
						sourceIndex=38;
					};
					class WP7_PosY: MovementY
					{
						sourceIndex=39;
					};
					class WP8_PosX: MovementX
					{
						sourceIndex=40;
					};
					class WP8_PosY: MovementY
					{
						sourceIndex=41;
					};
					class WP9_PosX: MovementX
					{
						sourceIndex=42;
					};
					class WP9_PosY: MovementY
					{
						sourceIndex=43;
					};
					class WP10_PosX: MovementX
					{
						sourceIndex=44;
					};
					class WP10_PosY: MovementY
					{
						sourceIndex=45;
					};
					class WP11_PosX: MovementX
					{
						sourceIndex=46;
					};
					class WP11_PosY: MovementY
					{
						sourceIndex=47;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0,0.12};
					class StaticClip
					{
						class WaypointGroup
						{
							color[]={0,0,0.12};
							alpha=0.60000002;
							class WP
							{
								condition="wpvalid";
								class Draw
								{
									type="line";
									points[]={};
								};
								class WP1
								{
									condition="user26>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="1-WPIndex";
										class WaypointShape
										{
											width=16;
											type="line";
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
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
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.025142901},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="01";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP2
								{
									condition="user28>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=1)*(WPIndex<=1)";
										class WaypointShape
										{
											width=16;
											type="line";
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
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
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP1_PosX",
												1,
												"WP1_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="02";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP3
								{
									condition="user30>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=2)*(WPIndex<=2)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.0125714},
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
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="03";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP4
								{
									condition="user32>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=3)*(WPIndex<=3)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.0125714},
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
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="04";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP5
								{
									condition="user34>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=4)*(WPIndex<=4)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.0125714},
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
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="05";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP6
								{
									condition="user36>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=5)*(WPIndex<=5)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.0125714},
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
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="06";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP7
								{
									condition="user38>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=6)*(WPIndex<=6)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.0125714},
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
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="07";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP8
								{
									condition="user40>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=7)*(WPIndex<=7)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.0125714},
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
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="08";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP9
								{
									condition="user42>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=8)*(WPIndex<=8)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.0125714},
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
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="09";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP10
								{
									condition="user44>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=9)*(WPIndex<=9)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.0125714},
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
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP10_PosX",
												1,
												"WP10_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="10";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class CustomWP
								{
									condition="user46>=0";
									color[]={1,0.5,0};
									alpha=0.5;
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.025142901},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="CWP";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
							};
						};
					};
					class LightBlue
					{
						color[]={0.43000001,0.80000001,0.93000001};
						alpha=0.15000001;
						class StaticDrawPolygon
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729601,-0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{0.0068403999,-0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,-0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,-0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{0.0128558,-0.0192605},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,-0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,-0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{0.017320501,-0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,-0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,-0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{0.0196962,-0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{0.02,1.09903e-009},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.02,1.09903e-009},
										1
									},
									
									{
										"Static_Offset",
										{0.0196962,0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{0.017320501,0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{0.0128557,0.0192606},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{0.0068403999,0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{-1.74846e-009,0.025142901},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729701,0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729701,0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{-0.0068403999,0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,0.021774299},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,0.021774299},
										1
									},
									
									{
										"Static_Offset",
										{-0.0128558,0.0192605},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{-0.017320501,0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{-0.0196962,0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{-0.02,-2.99826e-010},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.02,-2.99826e-010},
										1
									},
									
									{
										"Static_Offset",
										{-0.0196962,-0.0043660202},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,-0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,-0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{-0.017320501,-0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,-0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,-0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{-0.0128557,-0.0192606},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,-0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,-0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{-0.0068404102,-0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729601,-0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729601,-0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{3.4969101e-009,-0.025142901},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,-0.0247609},
										1
									}
								}
							};
						};
					};
					class StaticDraw
					{
						type="line";
						width=6;
						points[]=
						{
							
							{
								"Static_Offset",
								{0,-0.0264},
								1
							},
							
							{
								"Static_Offset",
								{0.0036456001,-0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0.0071820002,-0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{0.0105,-0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{0.0134988,-0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{0.016085999,-0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{0.018185999,-0.0132},
								1
							},
							
							{
								"Static_Offset",
								{0.019733701,-0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{0.0206808,-0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{0.021,0},
								1
							},
							
							{
								"Static_Offset",
								{0.0206808,0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{0.019733701,0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{0.018185999,0.0132},
								1
							},
							
							{
								"Static_Offset",
								{0.016085999,0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{0.0134988,0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{0.0105,0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{0.0071820002,0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{0.0036456001,0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0,0.0264},
								1
							},
							
							{
								"Static_Offset",
								{-0.0036456001,0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{-0.0071820002,0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{-0.0105,0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{-0.0134988,0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{-0.016085999,0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{-0.018185999,0.0132},
								1
							},
							
							{
								"Static_Offset",
								{-0.019733701,0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{-0.0206808,0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{-0.021,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.0206808,-0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{-0.019733701,-0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{-0.018185999,-0.0132},
								1
							},
							
							{
								"Static_Offset",
								{-0.016085999,-0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{-0.0134988,-0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{-0.0105,-0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{-0.0071820002,-0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{-0.0036456001,-0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.0264},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								{-0.012,-0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{-0.012,0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{0.012,0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{0.012,-0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{-0.012,-0.0099999998},
								1
							},
							{}
						};
					};
					class SensorGroup
					{
						class Sensor
						{
							type="sensor";
							pos[]=
							{
								"Sensor_Offset",
								1,
								
								{
									"-0+-1",
									"-0+-1"
								},
								1
							};
							down[]=
							{
								"Sensor_Offset",
								1,
								
								{
									"0--1",
									"0--1"
								},
								1
							};
							showTargetTypes="2+4+8+16+32+64+128+256+512+1024";
							width=4;
							sensorLineType=0;
							sensorLineWidth=3;
							targetLineWidth=-0.00192;
							targetLineLength=0.02;
							range="user0";
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
											{0,-0.025142901},
											1
										},
										
										{
											{0.0034719999,-0.024760701},
											1
										},
										
										{
											{0.0068399999,-0.0236267},
											1
										},
										
										{
											{0.0099999998,-0.0217737},
											1
										},
										
										{
											{0.012856,-0.019259401},
											1
										},
										
										{
											{0.01532,-0.016161799},
											1
										},
										
										{
											{0.01732,-0.0125714},
											1
										},
										
										{
											{0.018794,-0.0085988604},
											1
										},
										
										{
											{0.019695999,-0.0043648002},
											1
										},
										
										{
											{0.02,0},
											1
										},
										
										{
											{0.019695999,0.0043648002},
											1
										},
										
										{
											{0.018794,0.0085988604},
											1
										},
										
										{
											{0.01732,0.0125714},
											1
										},
										
										{
											{0.01532,0.016161799},
											1
										},
										
										{
											{0.012856,0.019259401},
											1
										},
										
										{
											{0.0099999998,0.0217737},
											1
										},
										
										{
											{0.0068399999,0.0236267},
											1
										},
										
										{
											{0.0034719999,0.024760701},
											1
										},
										
										{
											{0,0.025142901},
											1
										},
										
										{
											{-0.0034719999,0.024760701},
											1
										},
										
										{
											{-0.0068399999,0.0236267},
											1
										},
										
										{
											{-0.0099999998,0.0217737},
											1
										},
										
										{
											{-0.012856,0.019259401},
											1
										},
										
										{
											{-0.01532,0.016161799},
											1
										},
										
										{
											{-0.01732,0.0125714},
											1
										},
										
										{
											{-0.018794,0.0085988604},
											1
										},
										
										{
											{-0.019695999,0.0043648002},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{-0.019695999,-0.0043648002},
											1
										},
										
										{
											{-0.018794,-0.0085988604},
											1
										},
										
										{
											{-0.01732,-0.0125714},
											1
										},
										
										{
											{-0.01532,-0.016161799},
											1
										},
										
										{
											{-0.012856,-0.019259401},
											1
										},
										
										{
											{-0.0099999998,-0.0217737},
											1
										},
										
										{
											{-0.0068399999,-0.0236267},
											1
										},
										
										{
											{-0.0034719999,-0.024760701},
											1
										},
										
										{
											{0,-0.025142901},
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
											{0,0.025142901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.025142901},
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
											{0,0.025142901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.025142901},
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
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class rwrEnemy: rwr
							{
								color[]={0.12,0,0};
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
											{-0.017000001,-0.0213714},
											1
										},
										
										{
											{-0.0099999998,-0.0213714},
											1
										},
										{},
										
										{
											{0.017000001,-0.0213714},
											1
										},
										
										{
											{0.0099999998,-0.0213714},
											1
										},
										{},
										
										{
											{-0.017000001,-0.0213714},
											1
										},
										
										{
											{-0.017000001,-0.0125714},
											1
										},
										{},
										
										{
											{0.017000001,-0.0213714},
											1
										},
										
										{
											{0.017000001,-0.0125714},
											1
										},
										{},
										
										{
											{-0.017000001,0.0213714},
											1
										},
										
										{
											{-0.0099999998,0.0213714},
											1
										},
										{},
										
										{
											{0.017000001,0.0213714},
											1
										},
										
										{
											{0.0099999998,0.0213714},
											1
										},
										{},
										
										{
											{-0.017000001,0.0213714},
											1
										},
										
										{
											{-0.017000001,0.0125714},
											1
										},
										{},
										
										{
											{0.017000001,0.0213714},
											1
										},
										
										{
											{0.017000001,0.0125714},
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
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{-0.0099999998,-0.0099999998},
												1
											},
											
											{
												{0,-0.0099999998},
												1
											},
											
											{
												{0,0},
												1
											},
											
											{
												{-0.0099999998,0},
												1
											}
										}
									};
								};
							};
							class targetFriendly: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetEnemy: target
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroup: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetDestroyed;  //found empty after stripping
							class targetGround: target
							{
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.026000001,-0},
											1
										},
										
										{
											{-0,0.026000001},
											1
										},
										
										{
											{0.026000001,0},
											1
										},
										
										{
											{0,-0.026000001},
											1
										},
										
										{
											{-0.026000001,-0},
											1
										},
										{}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundFriendly: targetGround
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0,-0.0264},
											1
										},
										
										{
											{0.0036456001,-0.0259987},
											1
										},
										
										{
											{0.0071820002,-0.024808099},
											1
										},
										
										{
											{0.0105,-0.022862401},
											1
										},
										
										{
											{0.0134988,-0.020222399},
											1
										},
										
										{
											{0.016085999,-0.016969901},
											1
										},
										
										{
											{0.018185999,-0.0132},
											1
										},
										
										{
											{0.019733701,-0.0090287998},
											1
										},
										
										{
											{0.0206808,-0.0045830398},
											1
										},
										
										{
											{0.021,0},
											1
										},
										
										{
											{0.0206808,0.0045830398},
											1
										},
										
										{
											{0.019733701,0.0090287998},
											1
										},
										
										{
											{0.018185999,0.0132},
											1
										},
										
										{
											{0.016085999,0.016969901},
											1
										},
										
										{
											{0.0134988,0.020222399},
											1
										},
										
										{
											{0.0105,0.022862401},
											1
										},
										
										{
											{0.0071820002,0.024808099},
											1
										},
										
										{
											{0.0036456001,0.0259987},
											1
										},
										
										{
											{0,0.0264},
											1
										},
										
										{
											{-0.0036456001,0.0259987},
											1
										},
										
										{
											{-0.0071820002,0.024808099},
											1
										},
										
										{
											{-0.0105,0.022862401},
											1
										},
										
										{
											{-0.0134988,0.020222399},
											1
										},
										
										{
											{-0.016085999,0.016969901},
											1
										},
										
										{
											{-0.018185999,0.0132},
											1
										},
										
										{
											{-0.019733701,0.0090287998},
											1
										},
										
										{
											{-0.0206808,0.0045830398},
											1
										},
										
										{
											{-0.021,0},
											1
										},
										
										{
											{-0.0206808,-0.0045830398},
											1
										},
										
										{
											{-0.019733701,-0.0090287998},
											1
										},
										
										{
											{-0.018185999,-0.0132},
											1
										},
										
										{
											{-0.016085999,-0.016969901},
											1
										},
										
										{
											{-0.0134988,-0.020222399},
											1
										},
										
										{
											{-0.0105,-0.022862401},
											1
										},
										
										{
											{-0.0071820002,-0.024808099},
											1
										},
										
										{
											{-0.0036456001,-0.0259987},
											1
										},
										
										{
											{0,-0.0264},
											1
										}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundEnemy: targetGround
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.026000001,-0},
											1
										},
										
										{
											{-0,0.026000001},
											1
										},
										
										{
											{0.026000001,0},
											1
										},
										
										{
											{0,-0.026000001},
											1
										},
										
										{
											{-0.026000001,-0},
											1
										},
										{}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundGroup: targetGroundFriendly
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
								class StaticDraw: StaticDraw;  //found empty after stripping
							};
							class targetGroundDestroyed;  //found empty after stripping
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroundRemoteGroup: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetGroundRemoteDestroyed;  //found empty after stripping
							class targetLaser: target
							{
								class TargetLines: TargetLines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{-1.74846e-009,0.025142901},
											1
										},
										{},
										
										{
											{0.02,1.09903e-009},
											1
										},
										
										{
											{-0.02,-2.99826e-010},
											1
										},
										{},
										
										{
											{0.0106066,-0.013334},
											1
										},
										
										{
											{-0.0106066,0.013334},
											1
										},
										{},
										
										{
											{0.0106066,0.013334},
											1
										},
										
										{
											{-0.0106066,-0.013334},
											1
										},
										{}
									};
								};
							};
							class targetLaserFriendly: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetLaserGroup: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetNVG: targetLaser
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetMan: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManFriendly: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManEnemy: targetMan
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManGroup: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManRemote: target
							{
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManRemoteFriendly: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManRemoteEnemy: targetManRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetManRemoteGroup: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
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
												{0.012,0.0099999998},
												1
											},
											
											{
												{0.012,-0.0099999998},
												1
											}
										},
										
										{
											
											{
												{0,0},
												1
											},
											
											{
												{-0.012,0.0099999998},
												1
											},
											
											{
												{-0.012,-0.0099999998},
												1
											}
										}
									};
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.025},
											1
										},
										
										{
											{0.02,-0.025},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirFriendly: targetAir
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirEnemy: targetAir
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirGroup: targetAir
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetAirDestroyed;  //found empty after stripping
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.025},
											1
										},
										
										{
											{0.02,-0.025},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteFriendly: targetAirRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteEnemy: targetAirRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines;  //found empty after stripping
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.0074999998},
											1
										},
										
										{
											{-0,-0.029999999},
											1
										},
										
										{
											{0.02,-0.0074999998},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteGroup: targetAirRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines;  //found empty after stripping
							};
							class targetAirRemoteDestroyed;  //found empty after stripping
						};
					};
				};
			};
			class MFD_Gearbox
			{
				topLeft="MFD_Gearbox_TL";
				topRight="MFD_Gearbox_TR";
				bottomLeft="MFD_Gearbox_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={30,30,30,1};
					diffuse[]={10,10,10,1};
					emissive[]={200,400,200,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					color[]={0,0.1,0.059999999,1};
					alpha=0.1;
					class ReverseGear
					{
						condition="user2<=-1";
						class Gear_Text1
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.1,-0.25},
								1
							};
							right[]=
							{
								{0.85000002,-0.25},
								1
							};
							down[]=
							{
								{0.1,1.15},
								1
							};
						};
						class Gear_Text2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.5,-0.25},
								1
							};
							right[]=
							{
								{1.25,-0.25},
								1
							};
							down[]=
							{
								{0.5,1.15},
								1
							};
						};
					};
					class NeutralGear
					{
						condition="(user2>=0)*(user2<=0)";
						class Gear_Text1
						{
							type="text";
							source="static";
							text="N";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.1,-0.25},
								1
							};
							right[]=
							{
								{0.85000002,-0.25},
								1
							};
							down[]=
							{
								{0.1,1.15},
								1
							};
						};
						class Gear_Text2
						{
							type="text";
							source="static";
							text="N";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.5,-0.25},
								1
							};
							right[]=
							{
								{1.25,-0.25},
								1
							};
							down[]=
							{
								{0.5,1.15},
								1
							};
						};
					};
					class DriveGear
					{
						condition="user2>=1";
						class Range_Text
						{
							type="text";
							source="static";
							text="6";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.1,-0.25},
								1
							};
							right[]=
							{
								{0.85000002,-0.25},
								1
							};
							down[]=
							{
								{0.1,1.15},
								1
							};
						};
						class Range_Value
						{
							type="text";
							source="user";
							sourceIndex=2;
							sourceScale=1;
							sourceLength=1;
							scale=1;
							align="right";
							refreshRate=0.079999998;
							pos[]=
							{
								{0.5,-0.25},
								1
							};
							right[]=
							{
								{1.25,-0.25},
								1
							};
							down[]=
							{
								{0.5,1.15},
								1
							};
						};
					};
				};
			};
			class MFD_Speed
			{
				topLeft="MFD_Speed_TL";
				topRight="MFD_Speed_TR";
				bottomLeft="MFD_Speed_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="rhsusf_digital_font_usa";
				class material
				{
					ambient[]={30,30,30,1};
					diffuse[]={10,10,10,1};
					emissive[]={2000,4000,2000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					color[]={0,0,0,1};
					alpha=0.80000001;
					class Battery_Value
					{
						type="text";
						source="rpm";
						text="26.4Volts";
						sourceIndex=1;
						sourceOffset=24.700001;
						sourceScale=0.00050000002;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="right";
						refreshRate=0.89999998;
						pos[]=
						{
							{0.050000001,-0.1},
							1
						};
						right[]=
						{
							{0.25,-0.1},
							1
						};
						down[]=
						{
							{0.050000001,0.40000001},
							1
						};
					};
					class Battery_Text
					{
						type="text";
						source="static";
						text="Volts";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.34999999,-0.1},
							1
						};
						right[]=
						{
							{0.55000001,-0.1},
							1
						};
						down[]=
						{
							{0.34999999,0.40000001},
							1
						};
					};
					class Range_Value
					{
						type="text";
						source="user";
						sourceIndex=1;
						sourceScale=1;
						sourceLength=1;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.050000001,0.30000001},
							1
						};
						right[]=
						{
							{0.25,0.30000001},
							1
						};
						down[]=
						{
							{0.050000001,0.80000001},
							1
						};
					};
				};
			};
			class MFD_GPS
			{
				topLeft="MFD_GPS_TL";
				topRight="MFD_GPS_TR";
				bottomLeft="MFD_GPS_BL";
				borderLeft=0.0099999998;
				borderRight=0.0099999998;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="rhsusf_digital_font_usa";
				class material
				{
					ambient[]={16,16,16,1};
					diffuse[]={10,10,10,1};
					emissive[]={2000,4000,2000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					condition="on";
					color[]={0,0,0,1};
					alpha=0.80000001;
					class PolygonDraw
					{
						color[]={0.070588201,0.086274497,0.023529399};
						alpha=1;
						class Polygon2
						{
							type="polygon";
							points[]={};
						};
						class Polygon
						{
							type="polygon";
							texture="\rhsusf\addons\rhsusf_matv\data\rhs_dagr_background_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0,-0.23},
										1
									},
									
									{
										{1,-0.23},
										1
									},
									
									{
										{1,1.12},
										1
									},
									
									{
										{0,1.12},
										1
									}
								}
							};
						};
					};
					class GoToWP_Text
					{
						type="text";
						source="static";
						text="GOTO WP";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.029999999,0.85000002},
							1
						};
						right[]=
						{
							{0.13,0.85000002},
							1
						};
						down[]=
						{
							{0.029999999,0.97000003},
							1
						};
					};
					class WPList_Text
					{
						type="text";
						source="static";
						text="WP List";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.38,0.85000002},
							1
						};
						right[]=
						{
							{0.47999999,0.85000002},
							1
						};
						down[]=
						{
							{0.38,0.97000003},
							1
						};
					};
					class Back_Text
					{
						type="text";
						source="static";
						text="Back";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.74000001,0.85000002},
							1
						};
						right[]=
						{
							{0.83999997,0.85000002},
							1
						};
						down[]=
						{
							{0.74000001,0.97000003},
							1
						};
					};
					class Track_Text
					{
						type="text";
						source="static";
						text="TRACK";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.64999998},
							1
						};
						right[]=
						{
							{0.11,0.64999998},
							1
						};
						down[]=
						{
							{0.039999999,0.74000001},
							1
						};
					};
					class Mag_Text
					{
						type="text";
						source="static";
						text="MAG";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.28999999,0.64999998},
							1
						};
						right[]=
						{
							{0.36000001,0.64999998},
							1
						};
						down[]=
						{
							{0.28999999,0.74000001},
							1
						};
					};
					class o_Text
					{
						type="text";
						source="static";
						text="o";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.31,0.69},
							1
						};
						right[]=
						{
							{0.38,0.69},
							1
						};
						down[]=
						{
							{0.31,0.77999997},
							1
						};
					};
					class Track_Value
					{
						type="text";
						source="heading";
						sourceIndex=2;
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.30000001;
						pos[]=
						{
							{0.30000001,0.69},
							1
						};
						right[]=
						{
							{0.43000001,0.69},
							1
						};
						down[]=
						{
							{0.30000001,0.86000001},
							1
						};
					};
					class Time_Value
					{
						type="text";
						source="time";
						text="%X";
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.69999999,0.64999998},
							1
						};
						right[]=
						{
							{0.80000001,0.64999998},
							1
						};
						down[]=
						{
							{0.69999999,0.77999997},
							1
						};
					};
					class TimeText
					{
						type="text";
						source="static";
						text="Z";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.70999998,0.64999998},
							1
						};
						right[]=
						{
							{0.81,0.64999998},
							1
						};
						down[]=
						{
							{0.70999998,0.77999997},
							1
						};
					};
					class Date_Day_Value
					{
						type="text";
						source="time";
						text="%d";
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.5,0.73000002},
							1
						};
						right[]=
						{
							{0.60000002,0.73000002},
							1
						};
						down[]=
						{
							{0.5,0.86000001},
							1
						};
					};
					class Date_Month_Value
					{
						type="text";
						source="time";
						text="%b";
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.64999998,0.73000002},
							1
						};
						right[]=
						{
							{0.75,0.73000002},
							1
						};
						down[]=
						{
							{0.64999998,0.86000001},
							1
						};
					};
					class Date_Year_Value
					{
						type="text";
						source="time";
						text="%y";
						sourceScale=1;
						sourceLength=1;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.76999998,0.73000002},
							1
						};
						right[]=
						{
							{0.87,0.73000002},
							1
						};
						down[]=
						{
							{0.76999998,0.86000001},
							1
						};
					};
					class Date1_Text
					{
						type="text";
						source="static";
						text="-";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.50999999,0.73000002},
							1
						};
						right[]=
						{
							{0.61000001,0.73000002},
							1
						};
						down[]=
						{
							{0.50999999,0.86000001},
							1
						};
					};
					class Date2_Text
					{
						type="text";
						source="static";
						text="-";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.66000003,0.73000002},
							1
						};
						right[]=
						{
							{0.75999999,0.73000002},
							1
						};
						down[]=
						{
							{0.66000003,0.86000001},
							1
						};
					};
					class Elevation_Text
					{
						type="text";
						source="static";
						text="ELEVATION";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.40000001,0.43000001},
							1
						};
						right[]=
						{
							{0.47,0.43000001},
							1
						};
						down[]=
						{
							{0.40000001,0.51999998},
							1
						};
					};
					class Elevation2_Text
					{
						type="text";
						source="static";
						text="MSL";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.70999998,0.43000001},
							1
						};
						right[]=
						{
							{0.77999997,0.43000001},
							1
						};
						down[]=
						{
							{0.70999998,0.51999998},
							1
						};
					};
					class Elevation_Value
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						sourceLength=5;
						scale=1;
						align="left";
						refreshRate=0.80000001;
						pos[]=
						{
							{0.73000002,0.47999999},
							1
						};
						right[]=
						{
							{0.85500002,0.47999999},
							1
						};
						down[]=
						{
							{0.73000002,0.66000003},
							1
						};
					};
					class Elevation3_Text
					{
						type="text";
						source="static";
						text="+";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.41999999,0.47999999},
							1
						};
						right[]=
						{
							{0.54500002,0.47999999},
							1
						};
						down[]=
						{
							{0.41999999,0.66000003},
							1
						};
					};
					class Elevation4_Text
					{
						type="text";
						source="static";
						text="m";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.74000001,0.5},
							1
						};
						right[]=
						{
							{0.83999997,0.5},
							1
						};
						down[]=
						{
							{0.74000001,0.64999998},
							1
						};
					};
					class Speed_Text
					{
						type="text";
						source="static";
						text="SPEED";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.43000001},
							1
						};
						right[]=
						{
							{0.11,0.43000001},
							1
						};
						down[]=
						{
							{0.039999999,0.51999998},
							1
						};
					};
					class Speed_Value
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=1;
						scale=1;
						align="left";
						refreshRate=0.30000001;
						pos[]=
						{
							{0.2,0.47999999},
							1
						};
						right[]=
						{
							{0.32499999,0.47999999},
							1
						};
						down[]=
						{
							{0.2,0.66000003},
							1
						};
					};
					class Speed2_Text
					{
						type="text";
						source="static";
						text="kph";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.5},
							1
						};
						right[]=
						{
							{0.31,0.5},
							1
						};
						down[]=
						{
							{0.20999999,0.64999998},
							1
						};
					};
					class MGRS_Text
					{
						type="text";
						source="static";
						text="MGRS-Arma";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.039999999,0.079999998},
							1
						};
						right[]=
						{
							{0.13,0.079999998},
							1
						};
						down[]=
						{
							{0.039999999,0.2},
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
							{0.090000004,0.15000001},
							1
						};
						right[]=
						{
							{0.215,0.15000001},
							1
						};
						down[]=
						{
							{0.090000004,0.33000001},
							1
						};
					};
					class CordY: CordX
					{
						source="coordinateY";
						pos[]=
						{
							{0.25999999,0.15000001},
							1
						};
						right[]=
						{
							{0.38499999,0.15000001},
							1
						};
						down[]=
						{
							{0.25999999,0.33000001},
							1
						};
					};
					class wp_Text
					{
						type="text";
						source="static";
						text="WP";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.70999998,0.079999998},
							1
						};
						right[]=
						{
							{0.80000001,0.079999998},
							1
						};
						down[]=
						{
							{0.70999998,0.2},
							1
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="left";
							scale=1;
							pos[]=
							{
								{0.75999999,0.15000001},
								1
							};
							right[]=
							{
								{0.88499999,0.15000001},
								1
							};
							down[]=
							{
								{0.75999999,0.33000001},
								1
							};
						};
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
								{0.75999999,0.27000001},
								1
							};
							right[]=
							{
								{0.88499999,0.27000001},
								1
							};
							down[]=
							{
								{0.75999999,0.44999999},
								1
							};
						};
					};
					class PresentPos_Text
					{
						type="text";
						source="static";
						text="PRESENT POSITION";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0},
							1
						};
						right[]=
						{
							{0.12,0},
							1
						};
						down[]=
						{
							{0.050000001,0.090000004},
							1
						};
					};
					class STBY_Text
					{
						type="text";
						source="static";
						text="STBY";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.94999999,0.0049999999},
							1
						};
						right[]=
						{
							{1.02,0.0049999999},
							1
						};
						down[]=
						{
							{0.94999999,0.085000001},
							1
						};
					};
					class On_Text
					{
						type="text";
						source="static";
						text="ON";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.88999999,0.090000004},
							1
						};
						right[]=
						{
							{0.94,0.090000004},
							1
						};
						down[]=
						{
							{0.88999999,0.16},
							1
						};
					};
					class Static1_Text
					{
						type="text";
						source="static";
						text=">99dsf";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.235},
							1
						};
						right[]=
						{
							{1.02,0.235},
							1
						};
						down[]=
						{
							{0.95999998,0.32499999},
							1
						};
					};
					class Static2_Text
					{
						type="text";
						source="static";
						text="32534";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.95999998,0.54000002},
							1
						};
						right[]=
						{
							{1.03,0.54000002},
							1
						};
						down[]=
						{
							{0.95999998,0.63},
							1
						};
					};
				};
			};
			class MFD_CROWS
			{
				topLeft="CROWS_TL";
				topRight="CROWS_TR";
				bottomLeft="CROWS_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Static_Offset
					{
						type="fixed";
						pos[]={0.079999998,0.89999998};
					};
					class Cross
					{
						type="fixed";
						pos[]={0,-0.145};
					};
					class TurretRotation
					{
						type="rotational";
						source="weaponHeading";
						sourceIndex=0;
						center[]={0,0};
						min=-180;
						max=180;
						minAngle=-180;
						maxAngle=180;
						sourceOffset=-180;
						aspectRatio=1.29101;
					};
				};
				class Draw
				{
					color[]={1,0,0,1};
					alpha=1;
					class StaticDraw
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Cross",
								{0.43000001,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.56999999,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.55513197},
								1
							},
							
							{
								"Cross",
								{0.5,0.73587298},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{0.010416,-0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0.02052,-0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{0.029999999,-0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{0.038568001,-0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{0.045960002,-0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{0.051959999,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.056382,-0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{0.059087999,-0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{0.059999999,0},
								1
							},
							
							{
								"Static_Offset",
								{0.059087999,0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{0.056382,0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{0.051959999,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.045960002,0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{0.038568001,0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{0.029999999,0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{0.02052,0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{0.010416,0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0,0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{-0.010416,0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{-0.02052,0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{-0.029999999,0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{-0.038568001,0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{-0.045960002,0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{-0.051959999,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.056382,0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{-0.059087999,0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{-0.059999999,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.059087999,-0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{-0.056382,-0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{-0.051959999,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.045960002,-0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{-0.038568001,-0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{-0.029999999,-0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{-0.02052,-0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{-0.010416,-0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.064550303},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.029999999,-0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{0.025,-0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.0519615,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.043301299,-0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.059999999,3.3859e-009},
								1
							},
							
							{
								"Static_Offset",
								{0.050000001,2.8215801e-009},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.0519615,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.043301299,0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.029999999,0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{0.025,0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-5.2453699e-009,0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{-4.3711399e-009,0.064550303},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.029999999,0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{-0.025,0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.0519615,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.043301299,0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.059999999,-9.23705e-010},
								1
							},
							
							{
								"Static_Offset",
								{-0.050000001,-7.6975398e-010},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.0519615,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.043301299,-0.0322752},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.029999999,-0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{-0.025,-0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"TurretRotation",
									0,
									-0.058095202
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"TurretRotation",
									0,
									0
								},
								1
							},
							{}
						};
					};
					class StaticDrawBold
					{
						type="line";
						width=8;
						points[]=
						{
							
							{
								"Cross",
								{0.30000001,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.43000001,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.56999999,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.69999999,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.38730201},
								1
							},
							
							{
								"Cross",
								{0.5,0.55513197},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.73587298},
								1
							},
							
							{
								"Cross",
								{0.5,0.90370399},
								1
							},
							{}
						};
					};
					class Range_Text
					{
						type="text";
						source="static";
						text="LRF:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.50999999},
							1
						};
						right[]=
						{
							{0.059999999,0.50999999},
							1
						};
						down[]=
						{
							{0.0099999998,0.56},
							1
						};
					};
					class Range_Value
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.50999999
							},
							1
						};
						right[]=
						{
							{0.16,0.50999999},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.56
							},
							1
						};
					};
					class Ballistic_Text
					{
						type="text";
						source="static";
						text="Ballistic:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.67000002},
							1
						};
						right[]=
						{
							{0.059999999,0.67000002},
							1
						};
						down[]=
						{
							{0.0099999998,0.72000003},
							1
						};
					};
					class Ballistic_Value
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.13",
								0.67000002
							},
							1
						};
						right[]=
						{
							{0.19,0.67000002},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.13",
								0.72000003
							},
							1
						};
					};
					class Mode_Text
					{
						type="text";
						source="static";
						text="FOV:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.70999998},
							1
						};
						right[]=
						{
							{0.059999999,0.70999998},
							1
						};
						down[]=
						{
							{0.0099999998,0.75999999},
							1
						};
					};
					class Mode_Value
					{
						type="text";
						source="static";
						text="1.0x";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.70999998
							},
							1
						};
						right[]=
						{
							{0.16,0.70999998},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.75999999
							},
							1
						};
					};
					class Elev_Text
					{
						type="text";
						source="static";
						text="Elev:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.75},
							1
						};
						right[]=
						{
							{0.059999999,0.75},
							1
						};
						down[]=
						{
							{0.0099999998,0.80000001},
							1
						};
					};
					class Elev_Value
					{
						type="text";
						source="[y]turretworld";
						sourceScale=1;
						sourcePrecision=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.75
							},
							1
						};
						right[]=
						{
							{0.16,0.75},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.80000001
							},
							1
						};
					};
				};
			};
		};
		hideProxyInCombat=1;
		class Turrets: Turrets
		{
			class CROWS_Turret: NewTurret
			{
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				turretInfoType="RHS_RscM153_CROWS";
				usePip=1;
				headAimDown=22;
				discreteDistance[]={100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex=2;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				gunnerForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				weapons[]={};
				magazines[]={};
				minElev=-20;
				maxElev=60;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				gunnerAction="RHS_MATV_CROWSgunner";
				gunnerInAction="RHS_MATV_CROWSgunner";
				viewGunnerInExternal=1;
				gunnerGetInAction="GetInMRAP_01_cargo";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerDoor="DoorLB";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				canHideGunner=1;
				forceHideGunner=1;
				startEngine=0;
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGunnerOptics="PIP0_dir";
				memoryPointGunnerOutOptics="PIP0_dir";
				gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
				gunnerOutOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
				disableSoundAttenuation=0;
				animationSourceStickX="gunner_stick_trav";
				animationSourceStickY="gunner_stick_elev";
				outGunnerMayFire=1;
				gunnerRightHandAnimName="gunner_stick";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				class ViewOptics: RCWSOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					minFov=0.0083333002;
					maxFov=0.25;
					initFov=0.25;
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={2,3};
				};
				class OpticsIn
				{
					class DaysightWFOV: ViewOptics
					{
						opticsDisplayName="1.0x";
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_CROWS_Day";
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
					};
					class ThermalWFOV: DaysightWFOV
					{
						opticsDisplayName="4.3x";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						hitpoint="Hit_Optic_CROWS_TI";
						initFov=0.162791;
						minFov=0.162791;
						maxFov=0.162791;
					};
					class ThermalNFOV: ThermalWFOV
					{
						opticsDisplayName="12.5x";
						initFov=0.056000002;
						minFov=0.056000002;
						maxFov=0.056000002;
					};
					class DaysightNFOV: DaysightWFOV
					{
						opticsDisplayName="15.0x";
						initFov=0.0466667;
						minFov=0.0466667;
						maxFov=0.0466667;
					};
					class DaysightVNFOV: DaysightWFOV
					{
						opticsDisplayName="30.0x";
						initFov=0.0233333;
						minFov=0.0233333;
						maxFov=0.0233333;
					};
				};
				class Hitpoints
				{
					class Hit_Optic_CROWS_Day
					{
						armor=-40;
						explosionShielding=0;
						name="";
						visual="vis_optic_CROWS_Day";
						armorComponent="Hit_Optic_CROWS_Day";
						passThrough=0;
					};
					class Hit_Optic_CROWS_TI
					{
						armor=-40;
						explosionShielding=0;
						name="";
						visual="vis_optic_CROWS_TI";
						armorComponent="Hit_Optic_CROWS_TI";
						passThrough=0;
					};
					class Hit_Optic_CROWS_LRF
					{
						armor=-40;
						explosionShielding=0;
						name="";
						visual="vis_optic_CROWS_LRF";
						armorComponent="Hit_Optic_CROWS_LRF";
						passThrough=0;
					};
					class HitTurret
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="";
						visual="vis_turret";
						armorComponent="Hit_Turret";
						passThrough=0;
					};
					class HitGun
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="";
						visual="vis_gun";
						armorComponent="Hit_Gun";
						passThrough=0;
					};
				};
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
		};
		class RenderTargets: RenderTargets
		{
			class LeftMirror: LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1: CameraView1;  //found empty after stripping
			};
			class RightMirror: RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1: CameraView1;  //found empty after stripping
			};
			class DVE_Monitor: DVE_Monitor
			{
				renderTarget="rendertarget_dve";
				class CameraView1: CameraView1;  //found empty after stripping
			};
			class Gunner_display
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=2;
					renderQuality=2;
					fov=0.69999999;
					turret[]={0};
				};
				BBoxes[]=
				{
					"PIP_3_TL",
					"PIP_3_TR",
					"PIP_3_BL",
					"PIP_3_BR"
				};
			};
		};
	};
	class rhsusf_MATV_CROWS_M2_base: rhsusf_MATV_CROWS_base
	{
		model="\rhsusf\addons\rhsusf_matv\m1240a1_m2crows";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_hmg_F_CA.paa";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="RHS_M2_CROWS_M153";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="RHS_M2_CROWS_M153";
			};
			class Revolving
			{
				source="revolving";
				weapon="RHS_M2_CROWS_M153";
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="RHS_M2_CROWS_M153";
			};
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[]=
				{
					"RHS_M2_CROWS_M153"
				};
				magazines[]=
				{
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red"
				};
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
		};
	};
	class rhsusf_MATV_CROWS_MK19_base: rhsusf_MATV_CROWS_base
	{
		model="\rhsusf\addons\rhsusf_matv\m1240a1_mk19crows";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_gmg_CA.paa";
		class AnimationSources: AnimationSources
		{
			class belt_rotation
			{
				source="reload";
				weapon="RHS_MK19_CROWS_M153";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="RHS_MK19_CROWS_M153";
			};
			class Revolving
			{
				source="revolving";
				weapon="RHS_MK19_CROWS_M153";
			};
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[]=
				{
					"RHS_MK19_CROWS_M153"
				};
				magazines[]=
				{
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M1001"
				};
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
		};
	};
	class rhsusf_MATV_SOF_CROWS_base: rhsusf_MATV_CROWS_base
	{
		picture="\rhsusf\addons\rhsusf_matv\pictures\rhs_matv_crows_pic_ca.paa";
		transportSoldier=2;
		cargoAction[]=
		{
			"RHS_4X4_CoDriver"
		};
		cargoProxyIndexes[]={2,3};
		getInProxyOrder[]={1,2,3,4,5};
		memoryPointsGetInCargo[]=
		{
			"pos codriver",
			"pos cargo",
			"pos cargo2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos codriver dir",
			"pos cargo dir",
			"pos cargo2 dir"
		};
		cargoDoors[]=
		{
			"DoorRF",
			"DoorLB",
			"DoorRB"
		};
		class textureSources: textureSources
		{
			class rhs_desert: rhs_desert;  //found empty after stripping
			class rhs_woodland: rhs_woodland;  //found empty after stripping
			class rhs_sofdeploy
			{
				displayName="Deployed";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_sof_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_sof_ca.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
					"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_dp_co.paa"
				};
				factions[]={};
			};
		};
		class Attributes: Attributes
		{
			class DoorB: DoorRF
			{
				displayName="Open rear door";
				property="DoorB";
			};
		};
		class AnimationSources: AnimationSources
		{
			class DoorB
			{
				displayName="Open Rear Door";
				source="door";
				animPeriod=0.80000001;
				sound="RHSUSF_Truck_Door";
				soundPosition="osa_dvere_lp";
			};
			class FFV_L_door
			{
				source="door";
				animPeriod=0.80000001;
			};
			class FFV_R_door: FFV_L_door;  //found empty after stripping
			class hide_sfammo
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide ammo carrier";
				source="user";
				mass=-20;
				animPeriod=9.9999997e-006;
				initPhase=1;
			};
		};
		threat[]={0.89999998,0.30000001,0.1};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				gunnerAction="RHS_4X4_Cargo01";
				gunnerinAction="RHS_4X4_Cargo01";
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
			class CargoTurret_01: CargoTurret
			{
				weapons[]=
				{
					"rhsusf_weap_DummyLauncher"
				};
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="passenger_flatground_1";
				isPersonTurret=2;
				inGunnerMayFire=0;
				rhs_hatch_control=1;
				animationSourceHatch="FFV_L";
				enabledByAnimationSource="FFV_L_door";
				gunnerGetInAction="GetInMantis";
				gunnerGetOutAction="GetOutMantis";
				memoryPointsGetInGunner="pos cargoffvL";
				memoryPointsGetInGunnerDir="pos cargoffvL dir";
				gunnerName="Passenger (Rear Left)";
				gunnerCompartments="Compartment1";
				gunnerDoor="DoorB";
				memoryPointGunnerOptics="";
				selectionFireAnim="";
				canHideGunner=1;
				commanding=-2;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				allowLauncherOut=1;
				proxyIndex=4;
				maxElev=85;
				minElev=-85;
				maxTurn=61;
				minTurn=-65;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{0,0},
						{0,0}
					};
					limitsArrayBottom[]=
					{
						{0,0},
						{0,0}
					};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{44.846901,-89.780403},
						{45,84.793602}
					};
					limitsArrayBottom[]=
					{
						{-14.8031,-119.2046},
						{-33.0536,118.3221}
					};
				};
				class Hitpoints;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_01
			{
				animationSourceHatch="FFV_R";
				enabledByAnimationSource="FFV_R_door";
				gunnerInAction="passenger_flatground_4";
				proxyIndex=5;
				memoryPointsGetInGunner="pos cargoffvR";
				memoryPointsGetInGunnerDir="pos cargoffvR dir";
				gunnerName="Passenger (Rear Right)";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-89.204002},
						{44.753101,110.7736}
					};
					limitsArrayBottom[]=
					{
						{-12.3923,-86.526199},
						{-19.7157,115.0205}
					};
				};
			};
		};
	};
	class rhsusf_MATV_SOF_CROWS_M2_base: rhsusf_MATV_SOF_CROWS_base
	{
		model="\rhsusf\addons\rhsusf_matv\m1245_m2crows";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="RHS_M2_CROWS_M153";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="RHS_M2_CROWS_M153";
			};
			class Revolving
			{
				source="revolving";
				weapon="RHS_M2_CROWS_M153";
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="RHS_M2_CROWS_M153";
			};
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[]=
				{
					"RHS_M2_CROWS_M153"
				};
				magazines[]=
				{
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red"
				};
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
			class CargoTurret_01: CargoTurret_01;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
		};
	};
	class rhsusf_MATV_SOF_CROWS_MK19_base: rhsusf_MATV_SOF_CROWS_base
	{
		model="\rhsusf\addons\rhsusf_matv\m1245_mk19crows";
		class AnimationSources: AnimationSources
		{
			class belt_rotation
			{
				source="reload";
				weapon="RHS_MK19_CROWS_M153";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="RHS_MK19_CROWS_M153";
			};
			class Revolving
			{
				source="revolving";
				weapon="RHS_MK19_CROWS_M153";
			};
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[]=
				{
					"RHS_MK19_CROWS_M153"
				};
				magazines[]=
				{
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M1001"
				};
			};
			class CoDriverTurret: CoDriverTurret;  //found empty after stripping
			class CargoTurret_01: CargoTurret_01;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
		};
	};
	class rhsusf_m1240a1_usarmy_d: rhsusf_MATV_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_usarmy_d.paa";
		displayName="$STR_RHS_M1240_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_m2_usarmy_d: rhsusf_MATV_OGPK_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_m2_usarmy_d.paa";
		displayName="$STR_RHS_M1240_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_mk19_usarmy_d: rhsusf_MATV_OGPK_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_mk19_usarmy_d.paa";
		displayName="$STR_RHS_M1240_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_m240_usarmy_d: rhsusf_MATV_OGPK_M240_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_m240_usarmy_d.paa";
		displayName="$STR_RHS_M1240_M240_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_m2crows_usarmy_d: rhsusf_MATV_CROWS_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_m2crows_usarmy_d.paa";
		displayName="$STR_RHS_M1240_M153_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_mk19crows_usarmy_d: rhsusf_MATV_CROWS_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_mk19crows_usarmy_d.paa";
		displayName="$STR_RHS_M1240_M153_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_usarmy_wd: rhsusf_MATV_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_usarmy_wd.paa";
		displayName="$STR_RHS_M1240_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_m2_usarmy_wd: rhsusf_MATV_OGPK_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_m2_usarmy_wd.paa";
		displayName="$STR_RHS_M1240_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_mk19_usarmy_wd: rhsusf_MATV_OGPK_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_mk19_usarmy_wd.paa";
		displayName="$STR_RHS_M1240_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_m240_usarmy_wd: rhsusf_MATV_OGPK_M240_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_m240_usarmy_wd.paa";
		displayName="$STR_RHS_M1240_M240_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_m2crows_usarmy_wd: rhsusf_MATV_CROWS_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_m2crows_usarmy_wd.paa";
		displayName="$STR_RHS_M1240_M153_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_mk19crows_usarmy_wd: rhsusf_MATV_CROWS_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1240a1_mk19crows_usarmy_wd.paa";
		displayName="$STR_RHS_M1240_M153_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_driver_armored";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_usmc_wd: rhsusf_MATV_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_usmc_wd.paa";
		displayName="$STR_RHS_M1240_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_wd";
		crew="rhsusf_usmc_marpat_wd_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_m2_usmc_wd: rhsusf_MATV_OGPK_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_m2_usmc_wd.paa";
		displayName="$STR_RHS_M1240_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_wd";
		crew="rhsusf_usmc_marpat_wd_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_mk19_usmc_wd: rhsusf_MATV_OGPK_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_mk19_usmc_wd.paa";
		displayName="$STR_RHS_M1240_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_wd";
		crew="rhsusf_usmc_marpat_wd_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_m240_usmc_wd: rhsusf_MATV_OGPK_M240_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_m240_usmc_wd.paa";
		displayName="$STR_RHS_M1240_M240_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_wd";
		crew="rhsusf_usmc_marpat_wd_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_m2crows_usmc_wd: rhsusf_MATV_CROWS_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_m2crows_usmc_wd.paa";
		displayName="$STR_RHS_M1240_M153_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_wd";
		crew="rhsusf_usmc_marpat_wd_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_mk19crows_usmc_wd: rhsusf_MATV_CROWS_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_mk19crows_usmc_wd.paa";
		displayName="$STR_RHS_M1240_M153_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_wd";
		crew="rhsusf_usmc_marpat_wd_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_wd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_wd_co.paa"
		};
	};
	class rhsusf_m1240a1_usmc_d: rhsusf_MATV_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_usmc_d.paa";
		displayName="$STR_RHS_M1240_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_d";
		crew="rhsusf_usmc_marpat_d_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_m2_usmc_d: rhsusf_MATV_OGPK_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_m2_usmc_d.paa";
		displayName="$STR_RHS_M1240_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_d";
		crew="rhsusf_usmc_marpat_d_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_mk19_usmc_d: rhsusf_MATV_OGPK_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_mk19_usmc_d.paa";
		displayName="$STR_RHS_M1240_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_d";
		crew="rhsusf_usmc_marpat_d_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_m240_usmc_d: rhsusf_MATV_OGPK_M240_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_m240_usmc_d.paa";
		displayName="$STR_RHS_M1240_M240_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_d";
		crew="rhsusf_usmc_marpat_d_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_m2crows_usmc_d: rhsusf_MATV_CROWS_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_m2crows_usmc_d.paa";
		displayName="$STR_RHS_M1240_M153_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_d";
		crew="rhsusf_usmc_marpat_d_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1240a1_mk19crows_usmc_d: rhsusf_MATV_CROWS_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1240a1_mk19crows_usmc_d.paa";
		displayName="$STR_RHS_M1240_M153_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_usmc_d";
		crew="rhsusf_usmc_marpat_d_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1245_m2crows_socom_d: rhsusf_MATV_SOF_CROWS_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1245_m2crows_socom_d.paa";
		displayName="$STR_RHS_M1245_M2_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1245_mk19crows_socom_d: rhsusf_MATV_SOF_CROWS_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1245_mk19crows_socom_d.paa";
		displayName="$STR_RHS_M1245_MK19_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa"
		};
	};
	class rhsusf_m1245_m2crows_socom_deploy: rhsusf_MATV_SOF_CROWS_M2_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1245_m2crows_socom_deploy.paa";
		displayName="$STR_RHS_M1245_M2_DEPLOY_NAME";
		scope=2;
		accuracy=0.5;
		animationList[]=
		{
			"hide_sfammo",
			0
		};
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_sof_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_sof_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_dp_co.paa"
		};
	};
	class rhsusf_m1245_mk19crows_socom_deploy: rhsusf_MATV_SOF_CROWS_MK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1245_mk19crows_socom_deploy.paa";
		displayName="$STR_RHS_M1245_MK19_DEPLOY_NAME";
		scope=2;
		accuracy=0.5;
		animationList[]=
		{
			"hide_sfammo",
			0
		};
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_sof_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_sof_ca.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
			"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_dp_co.paa"
		};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class ViewOptics;
		class EventHandlers;
	};
	class rhs_rhino_trigger: StaticWeapon
	{
		scope=1;
		model="\rhsusf\addons\rhsusf_matv\rhs_rhino_trigger";
		armor=15;
		side=3;
		crew="C_UAV_AI_F";
		class Turrets;  //found empty after stripping
		class Hitpoints;  //found empty after stripping
	};
};
