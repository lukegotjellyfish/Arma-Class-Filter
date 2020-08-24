class CfgPatches
{
	class rhsusf_c_markvsoc
	{
		units[]=
		{
			"rhsusf_mkvsoc",
			"Land_MkV_Roadway"
		};
		weapons[]={};
		name="Mark V SOC";
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions;  //found empty after stripping
};
class CfgFunctions
{
	class RHSUSF
	{
		tag="RHSUSF";
		class Functions
		{
			class markvsoc_init
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\init.sqf";
				description="Mark V SOC init";
			};
			class markvsoc_deleteRoadway
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\deleteRoadway.sqf";
				description="Mark V SOC curator workaround";
			};
			class markvsoc_getIn
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\getin.sqf";
				description="Mark V SOC get on deck workaround";
			};
			class markvsoc_openMenu
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_menuInit.sqf";
				description="Mark V SOC curator workaround";
			};
			class markvsoc_setOption
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_setOption.sqf";
				description="Mark V SOC curator workaround";
			};
			class markvsoc_attachBoats
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_attachBoats.sqf";
				description="Mark V SOC Loading menu";
			};
			class markvsoc_loadMenuInit
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadMenuInit.sqf";
				description="Mark V SOC Loading menu";
			};
			class markvsoc_loadBoat
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadBoat.sqf";
				description="Mark V SOC Loading menu";
			};
			class markvsoc_loadAction
			{
				file="\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadAction.sqf";
				description="Mark V SOC Loading menu";
			};
		};
	};
};
class RscEdit;
class RscButton;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class rhs_markv_button_base
{
	access=0;
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	style=2;
	x=0;
	y=0;
	w="<null>";
	h="<null>";
	shadow=2;
	font="PuristaMedium";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	borderSize=0;
	offsetX=0;
	offsetY=0;
	offsetPressedX=0;
	offsetPressedY=0;
	period=1.2;
	periodFocus=1.2;
	periodOver=1.2;
};
class RHS_MarkV_UI
{
	enableSimulation=1;
	idd=101;
	movingenable=0;
	class Controls
	{
		class rhs_markv_button: rhs_markv_button_base
		{
			idc=1;
			soundClick[]=
			{
				"rhsusf\addons\rhsusf_optics\scripts\us_komp\sounds\button.wav",
				0.88999999,
				1
			};
			x="0.477965 * safezoneW + safezoneX";
			y="0.415365 * safezoneH + safezoneY";
			w=0;
			h=0;
		};
		class switch_display: rhs_markv_button
		{
			idc=6001;
			x="0.413445 * safezoneW + safezoneX";
			y="0.477431 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0752314 * safezoneH";
			tooltip="Displays ON/OFF";
			action="[7001,'c_displays_off_source',1] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_eng_sys: rhs_markv_button
		{
			idc=6002;
			x="0.394318 * safezoneW + safezoneX";
			y="0.568461 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0752314 * safezoneH";
			tooltip="Engine systems displays ON/OFF";
			action="[7002,'c_eng_ctrl_off_source',1] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_illum: rhs_markv_button
		{
			idc=6003;
			x="0.307586 * safezoneW + safezoneX";
			y="0.50489 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="Lights";
			action="[7003,'',2] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_nav: rhs_markv_button
		{
			idc=6004;
			x="0.56972 * safezoneW + safezoneX";
			y="0.318316 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="Navigation Light";
			action="[7004,'rL_nav_source'] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_night: rhs_markv_button
		{
			idc=6005;
			x="0.639088 * safezoneW + safezoneX";
			y="0.317564 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="OP Lights: Night";
			action="[7005,'rL_opR_source'] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_dive: rhs_markv_button
		{
			idc=6006;
			x="0.569279 * safezoneW + safezoneX";
			y="0.439627 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="Dive Beacons";
			action="[7006,'Beacons'] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_horiz: rhs_markv_button
		{
			idc=6007;
			x="0.639617 * safezoneW + safezoneX";
			y="0.439815 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="OP Lights: Horizon";
			action="[7007,'rL_opT_source'] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_spot: rhs_markv_button
		{
			idc=6008;
			x="0.601363 * safezoneW + safezoneX";
			y="0.624696 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0752314 * safezoneH";
			tooltip="Spot light ON/OFF";
			action="[7008,'rL_remSpot_source',1] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_instr: rhs_markv_button
		{
			idc=6009;
			x="0.602156 * safezoneW + safezoneX";
			y="0.549841 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0752314 * safezoneH";
			tooltip="Instruments illumination  ON/OFF";
			action="[7009,'c_instr_off_source',1] call rhsusf_fnc_markvsoc_setOption";
		};
		class background: RscPicture
		{
			idc=1200;
			x="0.182689 * safezoneW + safezoneX";
			y="0.199074 * safezoneH + safezoneY";
			w="0.608179 * safezoneW";
			h="0.564236 * safezoneH";
		};
		class wylacznik_l_1: background
		{
			idc=1205;
			x="0.312963 * safezoneW + safezoneX";
			y="0.300825 * safezoneH + safezoneY";
			w="0.0326521 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class wylacznik_l_2: wylacznik_l_1
		{
			idc=1206;
			x="0.355712 * safezoneW + safezoneX";
			y="0.300825 * safezoneH + safezoneY";
			w="0.0326521 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class wylacznik_l_3: wylacznik_l_1
		{
			idc=1204;
			x="0.312522 * safezoneW + safezoneX";
			y="0.386965 * safezoneH + safezoneY";
			w="0.0326521 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class wylacznik_l_4: wylacznik_l_1
		{
			idc=1201;
			x="0.356152 * safezoneW + safezoneX";
			y="0.387153 * safezoneH + safezoneY";
			w="0.0316102 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class wylacznik_s_1: wylacznik_l_1
		{
			idc=1207;
			x="0.42186 * safezoneW + safezoneX";
			y="0.301769 * safezoneH + safezoneY";
			w="0.0326521 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class wylacznik_s_2: wylacznik_l_1
		{
			idc=1208;
			x="0.465619 * safezoneW + safezoneX";
			y="0.302695 * safezoneH + safezoneY";
			w="0.0326521 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class wylacznik_s_3: wylacznik_l_1
		{
			idc=1209;
			x="0.508856 * safezoneW + safezoneX";
			y="0.301769 * safezoneH + safezoneY";
			w="0.0326521 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class wylacznik_s_4: wylacznik_l_1
		{
			idc=1210;
			x="0.422902 * safezoneW + safezoneX";
			y="0.382358 * safezoneH + safezoneY";
			w="0.0326521 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class wylacznik_illum: wylacznik_l_1
		{
			idc=1203;
			x="0.311993 * safezoneW + safezoneX";
			y="0.60175 * safezoneH + safezoneY";
			w="0.0316102 * safezoneW";
			h="0.0593433 * safezoneH";
		};
		class switch_display_img: RscPicture
		{
			idc=7001;
			x="0.413445 * safezoneW + safezoneX";
			y="0.477431 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0752314 * safezoneH";
			tooltip="Displays ON/OFF";
		};
		class switch_eng_sys_img: switch_display_img
		{
			idc=7002;
			x="0.394318 * safezoneW + safezoneX";
			y="0.568461 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0752314 * safezoneH";
			tooltip="Engine systems displays ON/OFF";
		};
		class switch_illum_img: switch_display_img
		{
			idc=7003;
			x="0.307586 * safezoneW + safezoneX";
			y="0.50489 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="Lights";
		};
		class switch_nav_img: switch_display_img
		{
			idc=7004;
			x="0.56972 * safezoneW + safezoneX";
			y="0.318316 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="Navigation Light";
		};
		class switch_night_img: switch_display_img
		{
			idc=7005;
			x="0.639088 * safezoneW + safezoneX";
			y="0.317564 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="OP Lights_img: Night";
		};
		class switch_dive_img: switch_display_img
		{
			idc=7006;
			x="0.569279 * safezoneW + safezoneX";
			y="0.439627 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="Dive Beacons";
		};
		class switch_horiz_img: switch_display_img
		{
			idc=7007;
			x="0.639617 * safezoneW + safezoneX";
			y="0.439815 * safezoneH + safezoneY";
			w="0.0412267 * safezoneW";
			h="0.0733788 * safezoneH";
			tooltip="OP Lights_img: Horizon";
		};
		class switch_spot_img: switch_display_img
		{
			idc=7008;
			x="0.601363 * safezoneW + safezoneX";
			y="0.624696 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0752314 * safezoneH";
			tooltip="Spot light ON/OFF";
		};
		class switch_instr_img: switch_display_img
		{
			idc=7009;
			x="0.602156 * safezoneW + safezoneX";
			y="0.549841 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0752314 * safezoneH";
			tooltip="Instruments illumination  ON/OFF";
		};
	};
};
class RHS_MarkV_LoadBoat_UI
{
	enableSimulation=1;
	idd=101;
	movingenable=0;
	class Controls
	{
		class MarkV_LoadButton: RscButton
		{
			idc=1600;
			x="0.389823 * safezoneW + safezoneX";
			y="0.791522 * safezoneH + safezoneY";
			w="0.189505 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[4] call rhsusf_fnc_markvsoc_loadAction";
		};
		class MarkV_LoadButton_Switch: MarkV_LoadButton
		{
			idc=1601;
			x="0.389823 * safezoneW + safezoneX";
			y="0.735098 * safezoneH + safezoneY";
			w="0.189505 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[3] call rhsusf_fnc_markvsoc_loadAction";
		};
		class MarkV_button1: RscButton
		{
			idc=2400;
			x="0.367787 * safezoneW + safezoneX";
			y="0.349537 * safezoneH + safezoneY";
			w="0.185098 * safezoneW";
			h="0.21629 * safezoneH";
			colorBackground[]={-1,-1,-1,0};
			colorBackgroundActive[]={-1,-1,-1,0};
			colorBackgroundDisabled[]={-1,-1,-1,0};
			colorActive[]={-1,-1,-1,0};
			colorFocused[]={-1,-1,-1,0};
			colorShadow[]={-1,-1,-1,0};
			colorBorder[]={-1,-1,-1,0};
			colorDisabled[]={-1,-1,-1,0};
			action="[1] call rhsusf_fnc_markvsoc_loadAction";
		};
		class MarkV_button2: MarkV_button1
		{
			idc=2401;
			x="0.200318 * safezoneW + safezoneX";
			y="0.349537 * safezoneH + safezoneY";
			w="0.154248 * safezoneW";
			h="0.21629 * safezoneH";
			action="[2] call rhsusf_fnc_markvsoc_loadAction";
		};
	};
};
class DefaultEventhandlers;
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
class RCWSOptics;
class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		class ViewOptics;
	};
	class Ship: AllVehicles
	{
		class MarkerLights;
		class ViewPilot;
	};
	class Ship_F: Ship;  //found empty after stripping
	class RHS_Ship: Ship_F
	{
		class NewTurret;
		class Turrets;  //found empty after stripping
		class CargoTurret;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		class Components;
	};
	class rhsusf_mkvsoc: RHS_Ship
	{
		displayName="Mk.V SOC";
		side=1;
		nameSound="veh_ship_attackBoat_s";
		canFloat=0;
		armor=600;
		canBeShot=1;
		enableManualFire=0;
		extCameraPosition[]={0,2.5,-25};
		fuelCapacity=1000;
		hideProxyInCombat=0;
		precision=80;
		secondaryExplosion=-1;
		sensitivity=2;
		memoryPointCommonDamage="zamerny";
		driveOnComponent[]=
		{
			"Slide"
		};
		accuracy=0.60000002;
		camouflage=3;
		cost=500000;
		threat[]={1,0.60000002,0.60000002};
		htMin=60;
		htMax=1800;
		afMax=100;
		mfMax=80;
		mFact=1;
		tBody=150;
		typicalCargo[]=
		{
			"rhsusf_socom_swcc_crewman",
			"rhsusf_socom_swcc_crewman",
			"rhsusf_socom_swcc_crewman",
			"rhsusf_socom_swcc_crewman"
		};
		ejectDamageLimit=0.89999998;
		unloadInCombat=0;
		hasCommander=1;
		commanderAction="RHS_MKVSOC_Commander";
		commanderCanSee="1+2+4+8+16";
		hideWeaponsCommander=1;
		showNVGCommander=1;
		commanderOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
		hasdriver=1;
		driverisCommander=0;
		driverCanSee="1+2+8+16";
		hideWeaponsDriver=1;
		castDriverShadow=1;
		showNVGDriver=1;
		driverLeftLegAnimName="drv_leg_l";
		driverRightLegAnimName="drv_leg_r";
		hasGunner=1;
		hideWeaponsGunner=1;
		hideWeaponsCargo=1;
		castCargoShadow=1;
		showNVGCargo[]={1};
		supplyRadius=0;
		transportAmmo=0;
		transportVehiclesCount=0;
		maximumLoad=3000;
		getInRadius=10;
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memoryPointsGetInDriver="driver_pos";
		memoryPointsGetInDriverDir="driver_dir";
		memoryPointsGetInCargo="cargo_pos";
		memoryPointsGetInCargoDir="cargo_dir";
		memoryPointsGetInCommander="comm_pos";
		memoryPointsGetInCommanderDir="comm_dir";
		LockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem=16;
		irTarget=1;
		irTargetSize=1.7;
		radarTarget=1;
		radarTargetSize=1.5;
		enableGPS=1;
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
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal=360;
						angleRangeVertical=20;
						maxFogSeeThrough=1;
						maxTrackableATL=100;
						maxTrackableSpeed=75;
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
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,16000,4000};
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
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,16000,4000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=75;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=360;
		weapons[]={};
		magazines[]={};
		memoryPointCM[]=
		{
			"cm_port",
			"cm_stbd"
		};
		memoryPointCMDir[]=
		{
			"cm_port_dir",
			"cm_stbd_dir"
		};
		predictTurnSimul=0.94999999;
		predictTurnPlan=0.75;
		steerAheadSimul=0.94999999;
		steerAheadPlan=0.75;
		brakeDistance=5;
		simulation="shipx";
		waterLeakiness=95.5;
		waterLinearDampingCoefY=1.65;
		waterLinearDampingCoefX=1.15;
		waterAngularDampingCoef=1.125;
		turnCoef=0.5;
		waterResistanceCoef=0.0024000001;
		rudderForceCoef=0.82499999;
		rudderForceCoefAtMaxSpeed=0.155;
		torqueCurve[]=
		{
			{0.30000001,0.85003072},
			{0.40000001,0.95003074},
			{0.5,1},
			{0.60000002,0.95003074},
			{0.69999999,0.85003072},
			{0.80000001,0.65003073},
			{0.89999998,0.55003071},
			{1,0.41001844}
		};
		maxOmega=209.44;
		enginePower=3908;
		peakTorque=16270;
		idleRPM=600;
		redRPM=2000;
		maxSpeed=115;
		minSpeed=-25;
		engineShiftY=1.125;
		thrustDelay=1.175;
		overSpeedBrakeCoef=0.0099999998;
		slowSpeedForwardCoef=0.27500001;
		normalSpeedForwardCoef=0.67500001;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.625,
				"N",
				0,
				"D1",
				1.97
			};
			TransmissionRatios[]=
			{
				"High",
				1
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		leftFastWaterEffect="LFastWaterEffects";
		rightFastWaterEffect="RFastWaterEffects";
		waterEffectSpeed=10;
		engineEffectSpeed=1;
		waterFastEffectSpeed=1;
		memoryPointExhaust="eng_1_exh";
		memoryPointExhaustDir="eng_1_exh_dir";
		memoryPointsLeftWaterEffect="waterEffectLeft";
		memoryPointsRightWaterEffect="waterEffectRight";
		class Damage;  //found empty after stripping
		class EventHandlers: DefaultEventhandlers
		{
			class rhs_markvsoc_eh;  //found empty after stripping
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="eng_1_exh";
				direction="eng_1_exh_dir";
				effect="ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position="eng_2_exh";
				direction="eng_2_exh_dir";
				effect="ExhaustsEffectBig";
			};
		};
		class MarkerLights
		{
			class mL_pos_port
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=100;
				name="mL_pos_port";
				drawLight=1;
				drawLightSize=1.2;
				drawLightCenterSize=0.1;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class mL_pos_stbd: mL_pos_port
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="mL_pos_stbd";
			};
			class mL_pos_aft
			{
				color[]={0.80000001,0.80000001,0.80000001};
				ambient[]={0.079999998,0.079999998,0.079999998};
				intensity=100;
				name="mL_pos_aft";
				drawLight=1;
				drawLightSize=1.2;
				drawLightCenterSize=0.1;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
		};
		aggregateReflectors[]={};
		attenuationEffectType="CarAttenuation";
		audible=4;
		occludeSoundsWhenIn=0.316228;
		obstructSoundsWhenIn=0.56234097;
		class SoundEvents;  //found empty after stripping
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				stabilizedInAxes=3;
				proxyType="CPGunner";
				proxyindex=1;
				ejectDeadGunner=1;
				weapons[]=
				{
					"RHS_MKV_M2_p"
				};
				magazines[]=
				{
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
				};
				startEngine=0;
				commanding=0;
				primaryGunner=0;
				primaryObserver=0;
				usePip=0;
				LODOpticsIn=1000;
				LODOpticsOut=1000;
				minElev=-45;
				maxElev=45;
				initElev=45;
				minTurn=5;
				maxTurn=145;
				initTurn=65;
				class m2_p_ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class m2_p_ViewGunner: ViewOptics
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
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.2;
				class HitPoints
				{
					class HitTurret1
					{
						isTurret=1;
						armor=0.80000001;
						material=60;
						name="hit_gunTurret_m2_1";
						passThrough=0;
					};
					class HitGun1
					{
						isGun=1;
						armor=0.60000002;
						material=60;
						name="hit_gunBarrel_m2_1";
						passThrough=0;
					};
				};
			};
			class m2_s_gunTurret: MainTurret
			{
				proxyindex=2;
				weapons[]=
				{
					"RHS_MKV_M2_s"
				};
				minElev=-45;
				maxElev=45;
				initElev=45;
				minTurn=-145;
				maxTurn=-5;
				initTurn=-65;
				class HitPoints
				{
					class HitTurret2
					{
						isTurret=1;
						armor=0.80000001;
						material=60;
						name="m2_s_turret";
						passThrough=0;
					};
					class HitGun2
					{
						isGun=1;
						armor=0.60000002;
						material=60;
						name="m2_s_barrels";
						passThrough=0;
					};
				};
			};
			class m134_p_gunTurret: MainTurret
			{
				proxyindex=3;
				weapons[]=
				{
					"RHS_MKV_M134"
				};
				magazines[]=
				{
					"2000Rnd_762x51_Belt_T_Red",
					"2000Rnd_762x51_Belt_T_Red"
				};
				minElev=-45;
				maxElev=35;
				initElev=45;
				minTurn=35;
				maxTurn=140;
				initTurn=65;
				class m134_p_ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class m134_p_ViewGunner: ViewOptics
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
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.2;
				class HitPoints
				{
					class HitTurret3
					{
						armor=0.80000001;
						material=60;
						name="m134_p_turret";
						passThrough=0;
					};
					class HitGun3
					{
						armor=0.60000002;
						material=60;
						name="m134_p_barrels";
						passThrough=0;
					};
				};
			};
			class mk19_s_gunTurret: MainTurret
			{
				proxyindex=4;
				weapons[]=
				{
					"RHS_MKV_MK19"
				};
				magazines[]=
				{
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1"
				};
				minElev=-45;
				maxElev=55;
				initElev=45;
				minTurn=-137;
				maxTurn=-35;
				initTurn=-65;
				class mk19_s_ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class mk19_s_ViewGunner: ViewOptics
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
				class HitPoints
				{
					class HitTurret4
					{
						isTurret=1;
						armor=0.80000001;
						material=60;
						name="m134_p_turret";
						passThrough=0;
					};
					class HitGun4
					{
						isGun=1;
						armor=0.60000002;
						material=60;
						name="m134_p_barrels";
						passThrough=0;
					};
				};
			};
			class camera_b_gunTurret: MainTurret
			{
				stabilizedInAxes=3;
				proxyType="CPCommander";
				proxyindex=1;
				ejectDeadGunner=0;
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				startEngine=0;
				commanding=0;
				primaryGunner=0;
				primaryObserver=1;
				usePip=1;
				laser=1;
				minElev=-30;
				maxElev=60;
				initElev=60;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				class camera_b_ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=-180;
					maxAngleY=180;
					initFov=0.14;
					minFov=0.0175;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={2,3,4};
				};
				class camera_b_ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initAngleY=0;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.2;
				class HitPoints;  //found empty after stripping
			};
			class rem_spotL_gunTurret: MainTurret
			{
				stabilizedInAxes=4;
				proxyType="CPCommander";
				proxyindex=2;
				ejectDeadGunner=0;
				weapons[]={};
				magazines[]={};
				startEngine=0;
				commanding=0;
				primaryGunner=0;
				primaryObserver=0;
				usePip=0;
				laser=0;
				minElev=-7.5;
				maxElev=60;
				initElev=0;
				minTurn=-145;
				maxTurn=145;
				initTurn=0;
				class rem_spotL_ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.14;
					minFov=0.0175;
					maxFov=0.14;
					visionMode[]={};
					thermalMode[]={};
				};
				class rem_spotL_ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initAngleY=0;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.2;
				class HitPoints;  //found empty after stripping
			};
		};
		class Attributes
		{
			class rhs_attachCargo
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Attach cargo";
				tooltip="Attaching cargo (using attachTo command) just like when you use ramp action";
				property="rhs_attachCargo";
				expression="if(_value == 1)then{[_this] spawn rhsusf_fnc_markvsoc_attachBoats};";
			};
		};
		hiddenselectionstextures[]=
		{
			"rhsusf\addons\rhsusf_markvsoc\data\hull_co.paa"
		};
		class textureSources
		{
			class marsoc
			{
				displayName="US";
			};
		};
	};
	class House_F;
	class Land_PierLadder_F;
	class Land_MkV_Ladder: Land_PierLadder_F
	{
		displayName="Ladder (MkV)";
		icon="";
		armor=150;
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
	};
	class Land_MkV_Roadway: House_F
	{
		displayName="Roadway (MkV)";
		icon="";
		armor=150;
	};
};
