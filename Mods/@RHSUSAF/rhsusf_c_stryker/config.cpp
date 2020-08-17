class CfgPatches
{
	class rhsusf_c_stryker
	{
		units[]=
		{
			"rhsusf_stryker_m1126_m2_wd",
			"rhsusf_stryker_m1126_m2_d",
			"rhsusf_stryker_m1126_mk19_wd",
			"rhsusf_stryker_m1126_mk19_d",
			"rhsusf_stryker_m1127_m2_wd",
			"rhsusf_stryker_m1127_m2_d",
			"rhsusf_stryker_m1132_m2_wd",
			"rhsusf_stryker_m1132_m2_d",
			"rhsusf_stryker_m1134_wd",
			"rhsusf_stryker_m1134_d"
		};
		weapons[]={};
		name="IAV Stryker vehicles";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class Stryker
		{
			class stryker_turnActions
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_turnActions.sqf";
			};
			class stryker_seatSwitched
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_seatSwitched.sqf";
			};
			class stryker_m1126_init
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1126_init.sqf";
			};
			class stryker_m1127_init
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_init.sqf";
			};
			class stryker_m1127_turret
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_turret.sqf";
			};
			class stryker_m1127_turret_turnout
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_turret_turnout.sqf";
			};
			class stryker_m1127_turret_getout_eh
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_turret_getout_eh.sqf";
			};
			class stryker_m1127_turret_getin_eh
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_turret_getin_eh.sqf";
			};
			class stryker_m1132_LMS_VG
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1132_LMS_VG.sqf";
			};
			class stryker_m1132_LMS_UI
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1132_LMS_UI.sqf";
			};
			class stryker_m1134_init
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1134_init.sqf";
			};
			class stryker_m1134_mast
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1134_mast.sqf";
			};
			class stryker_m1134_turret
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1134_turret.sqf";
			};
			class stryker_m1134_turret_getout_eh
			{
				file="rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1134_turret_getout_eh.sqf";
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
class RscSlider;
class IGUIBack;
class RHS_BFT_Map_Scale_UI
{
	enableSimulation=1;
	idd=101;
	movingenable=0;
	class Controls
	{
		class RscSlider_1900: RscSlider
		{
			idc=1900;
			x="0.352539 * safezoneW + safezoneX";
			y="0.487963 * safezoneH + safezoneY";
			w="0.193912 * safezoneW";
			h="0.0376157 * safezoneH";
			onSliderPosChanged="cameraon animateSource ['BFT_Map_Scale',_this # 1,true];";
		};
		class text: RscText
		{
			idc=1001;
			x="0.425079 * safezoneW + safezoneX";
			y="0.434173 * safezoneH + safezoneY";
			w="0.0352567 * safezoneW";
			h="0.0470196 * safezoneH";
		};
	};
};
class RHS_LaneMarkingSystem_Controls
{
	enableSimulation=1;
	idd=201;
	movingenable=0;
	class Controls
	{
		class IGUIBack_2200: IGUIBack
		{
			idc=2200;
			x="-0.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="3 * 	((0.025 * SafezoneH)) + 	(0)";
			w="26.5 * 	((0.01875 * SafezoneH))";
			h="11 * 	((0.025 * SafezoneH))";
		};
		class Button_TimeInterval: RscButton
		{
			idc=1600;
			x="0 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="8 * 	((0.025 * SafezoneH)) + 	(0)";
			w="6 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_DistanceInterval: RscButton
		{
			idc=1601;
			x="0 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="11 * 	((0.025 * SafezoneH)) + 	(0)";
			w="6 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Distance_1: RscButton
		{
			idc=1602;
			x="6.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="11 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3.5 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Distance_2: RscButton
		{
			idc=1603;
			x="10.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="11 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3.5 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Distance_3: RscButton
		{
			idc=1604;
			x="14.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="11 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3.5 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Distance_4: RscButton
		{
			idc=1605;
			x="18.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="11 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3.5 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Distance_5: RscButton
		{
			idc=1606;
			x="22.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="11 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Time_1: RscButton
		{
			idc=1607;
			x="6.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="8 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3.5 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Time_2: RscButton
		{
			idc=1608;
			x="10.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="8 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3.5 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Time_3: RscButton
		{
			idc=1609;
			x="14.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="8 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3.5 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Time_4: RscButton
		{
			idc=1610;
			x="18.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="8 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3.5 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class Button_Time_5: RscButton
		{
			idc=1611;
			x="22.5 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="8 * 	((0.025 * SafezoneH)) + 	(0)";
			w="3 * 	((0.01875 * SafezoneH))";
			h="2 * 	((0.025 * SafezoneH))";
		};
		class TitleText: RscText
		{
			idc=1000;
			style=2;
			x="7 * 	((0.01875 * SafezoneH)) + 	(0)";
			y="4 * 	((0.025 * SafezoneH)) + 	(0)";
			w="11.5 * 	((0.01875 * SafezoneH))";
			h="2.5 * 	((0.025 * SafezoneH))";
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
class DefaultEventhandlers;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class AnimationSources;
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class EventHandlers;
		class Components;
	};
	class rhsusf_stryker_base: Wheeled_APC_F
	{
		accuracy=0.25;
		cargoIsCoDriver[]={0};
		hideProxyInCombat=1;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverForceOptics=0;
		LODDriverTurnedOut=1;
		LODDriverTurnedin=1100;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		driverLeftLegAnimName="pedal_brake";
		driveOnComponent[]=
		{
			"Hull"
		};
		memoryPointSupply="SupplyPos";
		supplyRadius=4.6999998;
		transportMaxMagazines=160;
		transportMaxWeapons=10;
		class ViewPilot: ViewPilot
		{
			initAngleX=-0;
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
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.40000001;
			minFov=0.23;
			maxFov=0.40000001;
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos="view_driver";
				visionMode[]=
				{
					"Normal"
				};
				hitpoint="Hit_Optic_Driver2";
			};
			class DVE_Wide: Wide
			{
				camPos="view_DVE";
				visionMode[]=
				{
					"TI"
				};
				thermalMode[]={0,1};
				initFov=1.07692;
				minFov=1.07692;
				maxFov=1.07692;
				hitpoint="Hit_Optic_DVEA";
			};
			class DVS_Rear: DVE_Wide
			{
				camPos="view_rear";
				camDir="view_rear_dir";
				hitpoint="Hit_Optic_Driver_Rear";
			};
		};
		class Exhausts
		{
		};
		armorLights=0.1;
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					point="light_1";
					color[]={20,30,30};
					ambient[]={0,0,0};
					intensity=1.5;
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
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
				};
				class Light2: Light1
				{
					point="light_2";
					color[]={20,30,30};
					ambient[]={0,0,0};
					intensity=5.5;
				};
				class Light3: Light2
				{
					point="light_3";
				};
				class Light4: Light2
				{
					point="light_4";
				};
			};
		};
		fuelExplosionPower=0.1;
		secondaryExplosion=-1;
		armor=220;
		armorStructural=200;
		explosionShielding=2;
		class HitPoints
		{
			class HitHull
			{
				armor=-400;
				minimalHit=-0.40000001;
				explosionShielding=0.050000001;
				armorComponent="hit_hull";
				name="hit_hull";
				passThrough=0.1;
				radius=0.2;
			};
			class HitEngine
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.5;
				armorComponent="hit_engine";
				name="hit_engine";
				passThrough=0.1;
				radius=0.2;
			};
			class HitFuel_L
			{
				armor=-70;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				armorComponent="hit_fuel_l";
				name="hit_fuel_l";
				passThrough=0.15000001;
				radius=0.2;
			};
			class HitFuel_R
			{
				armor=-70;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				armorComponent="hit_fuel_r";
				name="hit_fuel_r";
				passThrough=0.15000001;
				radius=0.2;
			};
			class HitFuel
			{
				armor=999;
				depends="(HitFuel_L+HitFuel_R)*0.5";
				name="hit_fuel";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Light_L
			{
				armor=-10;
				explosionShielding=1;
				name="Hit_Light_L";
				armorComponent="Hit_Light_L";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Light_R
			{
				armor=-10;
				explosionShielding=1;
				name="Hit_Light_R";
				armorComponent="Hit_Light_R";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Optic_Driver1
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Driver1";
				passThrough=0;
			};
			class Hit_Optic_Driver2
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Driver2";
				passThrough=0;
			};
			class Hit_Optic_Driver3
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Driver3";
				passThrough=0;
			};
			class Hit_Optic_DVEA
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_DVEA";
				passThrough=0;
			};
			class Hit_Optic_Driver_Rear
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_Driver";
				passThrough=0;
			};
			class HitLFWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_1_hit";
				armorComponent="wheel_1_1_hide";
			};
			class HitLF2Wheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_2_hit";
				armorComponent="wheel_1_2_hide";
			};
			class HitLMWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_3_hit";
				armorComponent="wheel_1_3_hide";
			};
			class HitLBWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_4_hit";
				armorComponent="wheel_1_4_hide";
			};
			class HitRFWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_1_hit";
				armorComponent="wheel_2_1_hide";
			};
			class HitRF2Wheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_2_hit";
				armorComponent="wheel_2_2_hide";
			};
			class HitRMWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_3_hit";
				armorComponent="wheel_2_3_hide";
			};
			class HitRBWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_4_hit";
				armorComponent="wheel_2_4_hide";
			};
		};
		simulation="CarX";
		thrustDelay=0.34999999;
		brakeIdleSpeed=1.78;
		maxSpeed=100;
		fuelCapacity=25;
		wheelCircumference=3.8050001;
		waterLeakiness=2.5;
		dampersBumpCoef=4.5;
		terrainCoef=1.5;
		turnCoef=3;
		wheelDestroyRadiusCoef=0.60000002;
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.30000001;
		accelAidForceYOffset=-1.5;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		enginePower=325;
		peakTorque=1457.5;
		idleRpm=650;
		redRpm=2600;
		maxOmega=272.271;
		minOmega=52.359901;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			{0,0},
			{0.163077,0.277015},
			{0.23115399,0.61406499},
			{0.30615401,0.93224698},
			{0.35884601,1},
			{0.61500001,1},
			{0.97384602,0.795026},
			{1.28192,0.227273}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.0300002,
				"N",
				0,
				"D1",
				3.49,
				"D2",
				1.86,
				"D3",
				1.41,
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
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		switchTime=0.1;
		latency=1.4;
		clutchStrength=35;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		class Wheels
		{
			class L1
			{
				steering=1;
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.27500001;
				mass=187.5;
				MOI=60;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=45000;
				maxHandBrakeTorque=0;
				maxCompression=0.1125;
				maxDroop=0.15000001;
				sprungMass=-1;
				springStrength=160000;
				springDamperRate=8790;
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
				steering=1;
			};
			class L3: L1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R2: R1
			{
				steering=1;
			};
			class R3: R1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
		};
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Start",
			0.79432821,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Stop",
			0.79432821,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Start",
			1,
			1,
			100
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Stop",
			1,
			1,
			100
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095737,
			1,
			100
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095737,
			1,
			100
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095737,
			1,
			100
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		woodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		woodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		woodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		woodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		woodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		ArmorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		ArmorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		class Sounds
		{
			soundSetsExt[]=
			{
				"APC_Wheeled_01_Engine_RPM0_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM1_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM2_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM3_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM4_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM5_EXT_SoundSet",
				"APC_Wheeled_01_Rattling_EXT_SoundSet",
				"APC_Wheeled_01_Stress_EXT_SoundSet",
				"APC_Wheeled_01_Rain_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"
			};
			soundSetsInt[]=
			{
				"APC_Wheeled_01_Engine_RPM0_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM1_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM2_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM3_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM4_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM5_INT_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet",
				"APC_Wheeled_01_Rattling_INT_SoundSet",
				"APC_Wheeled_01_Stress_INT_SoundSet",
				"APC_Wheeled_01_Rain_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"
			};
		};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
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
		class EventHandlers: EventHandlers
		{
			class RHSUSF_TurnInActions
			{
				turnIn="(_this + [false])  spawn rhs_fnc_stryker_turnActions;";
				turnOut="(_this + [true]) spawn rhs_fnc_stryker_turnActions;";
			};
		};
	};
	class rhsusf_stryker_m1126_base: rhsusf_stryker_base
	{
		defaultUserMFDvalues[]={1000};
		class MFD
		{
			class MFD_CROWS
			{
				topLeft="PIP_3_TL";
				topRight="PIP_3_TR";
				bottomLeft="PIP_3_BL";
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
						pos[]={0.079999998,0.89999998};
					};
					class Cross
					{
						pos[]={0,-0.145};
					};
					class TurretRotation
					{
						source="weaponHeading";
						sourceIndex=0;
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
						source="static";
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
						source="static";
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
						source="static";
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
						source="userText";
						sourceIndex=1;
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
						source="static";
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
					ambient[]={3,3,3,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						pos[]={0.5,0.47999999};
					};
					class Static_Offset
					{
						pos[]={0.5,0.5};
					};
					class LimitWaypoint
					{
						limits[]={0.22,0.059999999,0.77999997,0.059999999};
					};
					class Sensor_Rotation
					{
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
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.70999998,0.764};
					};
					class Direction_Center
					{
						pos[]={0.5,0.5};
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
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
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=1.25714;
					};
					class MovementY
					{
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
									source="static";
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
								class TargetLines: TargetLines
								{
								};
							};
							class rwr
							{
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class rwrEnemy: rwr
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrGroup: rwr
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrDestroyed
							{
							};
							class markedTarget
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class target
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetEnemy: target
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroup: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetDestroyed
							{
							};
							class targetGround: target
							{
								class TargetLines: TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
								class StaticDraw: StaticDraw
								{
								};
							};
							class targetGroundDestroyed
							{
							};
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteGroup: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteDestroyed
							{
							};
							class targetLaser: target
							{
								class TargetLines: TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserGroup: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVG: targetLaser
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetMan: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManFriendly: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManEnemy: targetMan
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManGroup: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteFriendly: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteEnemy: targetManRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteGroup: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirDestroyed
							{
							};
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirRemoteDestroyed
							{
							};
						};
					};
				};
			};
		};
		class Damage
		{
		};
		class TextureSources
		{
			class Olive
			{
			};
			class Tan
			{
			};
		};
		class HitPoints: HitPoints
		{
			class Hit_Optic_CROWS_Day
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_CROWS_Day";
				passThrough=0;
			};
			class Hit_Optic_CROWS_TI
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_CROWS_TI";
				passThrough=0;
			};
			class Hit_Optic_CROWS_LRF
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_CROWS_LRF";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope1
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ComPeriscope1";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope2
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ComPeriscope2";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope3
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ComPeriscope3";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope4
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ComPeriscope4";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope5
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ComPeriscope5";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope6
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ComPeriscope6";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope7
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_ComPeriscope7";
				passThrough=0;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
				minElev=-20;
				maxElev=60;
				personturretAction="vehicle_turnout_2";
				isPersonTurret=1;
				animationSourceHatch="Hatch_Commander_A";
				LODTurnedOut=1;
				LODTurnedin=1000;
				LODOpticsIn=0;
				LODOpticsOut=0;
				stabilizedInAxes=3;
				startEngine=0;
				usePip=1;
				animationSourceStickX="gunner_stick_trav";
				animationSourceStickY="gunner_stick_elev";
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-25;
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
				class OpticsIn
				{
					class DaysightWFOV: ViewOptics
					{
						camPos="View_CROWS";
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_CROWS_Day";
					};
					class ThermalWFOV: DaysightWFOV
					{
						camPos="View_CROWS_TI";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						initFov=0.162791;
						minFov=0.162791;
						maxFov=0.162791;
						hitpoint="Hit_Optic_CROWS_TI";
					};
					class ThermalNFOV: ThermalWFOV
					{
						initFov=0.056000002;
						minFov=0.056000002;
						maxFov=0.056000002;
					};
					class DaysightNFOV: DaysightWFOV
					{
						initFov=0.0466667;
						minFov=0.0466667;
						maxFov=0.0466667;
					};
					class DaysightVNFOV: DaysightWFOV
					{
						initFov=0.0233333;
						minFov=0.0233333;
						maxFov=0.0233333;
					};
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_Turret";
						armorComponent="Hit_Turret";
						passThrough=0;
						radius=0.2;
					};
					class HitGun
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_Gun";
						armorComponent="Hit_Gun";
						passThrough=0;
						radius=0.2;
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
								range[]={8000,16000,25000,4000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
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
								range[]={8000,4000,2000,1000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=8;
				animationSourceHatch="";
				rhs_hatch="Hatch_Left";
				rhs_hatch_control=1;
				enabledByAnimationSource="Hatch_Left";
			};
			class CargoTurret_03: CargoTurret_02
			{
				proxyIndex=9;
				rhs_hatch="Hatch_Right";
				enabledByAnimationSource="Hatch_Right";
			};
		};
		class UVAnimations
		{
			class BFT_Map_Scale
			{
				section="BFT_screen";
				source="BFT_Map_Scale";
				minValue=0;
				maxValue=1;
				scale0[]={0,0};
				scale1[]={1,1};
			};
			class BFT_Map_Move_X
			{
				section="BFT_screen";
				source="BFT_Map_Move_X";
				maxValue=100;
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
				source="direction";
				minValue="rad -180";
				maxValue="rad 180";
				angle0="rad -180";
				angle1="rad 180";
			};
		};
	};
	class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_M2_CROWS_M151",
					"rhsusf_weap_M6"
				};
				magazines[]=
				{
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhsusf_mag_L8A3_16"
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
	};
	class rhsusf_stryker_m1126_mk19_base: rhsusf_stryker_m1126_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_MK19_CROWS_M153",
					"rhsusf_weap_M6"
				};
				magazines[]=
				{
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"rhsusf_mag_L8A3_16"
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
	};
	class rhsusf_stryker_m1126_m2_wd: rhsusf_stryker_m1126_m2_base
	{
		side=1;
	};
	class rhsusf_stryker_m1126_m2_d: rhsusf_stryker_m1126_m2_base
	{
		side=1;
	};
	class rhsusf_stryker_m1126_mk19_wd: rhsusf_stryker_m1126_mk19_base
	{
		side=1;
	};
	class rhsusf_stryker_m1126_mk19_d: rhsusf_stryker_m1126_mk19_base
	{
		side=1;
	};
	class rhsusf_stryker_m1127_base: rhsusf_stryker_m1126_base
	{
		defaultUserMFDvalues[]={1000,4};
		class MFD
		{
			class MFD_LRAS3
			{
				topLeft="PIP_3_TL";
				topRight="PIP_3_TR";
				bottomLeft="PIP_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0.2;
				borderBottom=0.2;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="rhsusf_digital_font_var";
				turret[]={2};
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Cross
					{
						pos[]={0.5,0.49000001};
					};
				};
				class Draw
				{
					color[]={1,0,0,1};
					alpha=1;
					class StaticDraw
					{
						width=3;
						points[]={};
					};
					class StaticDrawBold
					{
						width=5;
						points[]={};
					};
					class Green
					{
						color[]={0,1,0};
						alpha=0.1;
						class Mode_Value
						{
							source="userText";
							sourceIndex=1;
							sourceScale=1;
							sourceLength=3;
							scale=1;
							align="right";
							pos[]=
							{
								{0.75,0.059999999},
								1
							};
							right[]=
							{
								{0.76999998,0.059999999},
								1
							};
							down[]=
							{
								{0.75,0.079999998},
								1
							};
						};
						class Clear_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.75,0.079999998},
								1
							};
							right[]=
							{
								{0.76999998,0.079999998},
								1
							};
							down[]=
							{
								{0.75,0.1},
								1
							};
						};
						class Stare_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.75,0.1},
								1
							};
							right[]=
							{
								{0.76999998,0.1},
								1
							};
							down[]=
							{
								{0.75,0.12},
								1
							};
						};
						class LASER_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.75,0.12},
								1
							};
							right[]=
							{
								{0.76999998,0.12},
								1
							};
							down[]=
							{
								{0.75,0.14},
								1
							};
						};
						class Pos_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.41999999,0.85000002},
								1
							};
							right[]=
							{
								{0.44,0.85000002},
								1
							};
							down[]=
							{
								{0.41999999,0.87},
								1
							};
						};
						class Range_Value
						{
							source="laserDist";
							sourceScale=1;
							sourceLength=3;
							scale=1;
							align="right";
							pos[]=
							{
								{0.51999998,0.85000002},
								1
							};
							right[]=
							{
								{0.54000002,0.85000002},
								1
							};
							down[]=
							{
								{0.51999998,0.87},
								1
							};
						};
						class TimeStatic_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.2,0.85000002},
								1
							};
							right[]=
							{
								{0.22,0.85000002},
								1
							};
							down[]=
							{
								{0.2,0.87},
								1
							};
						};
						class CurrentTimeHour
						{
							source="time";
							scale=1;
							align="right";
							pos[]=
							{
								{0.25,0.85000002},
								1
							};
							right[]=
							{
								{0.27000001,0.85000002},
								1
							};
							down[]=
							{
								{0.25,0.87},
								1
							};
						};
						class TimeStatic2_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.27000001,0.85000002},
								1
							};
							right[]=
							{
								{0.28999999,0.85000002},
								1
							};
							down[]=
							{
								{0.27000001,0.87},
								1
							};
						};
						class CurrentTimeMinute: CurrentTimeHour
						{
							pos[]=
							{
								{0.28,0.85000002},
								1
							};
							right[]=
							{
								{0.30000001,0.85000002},
								1
							};
							down[]=
							{
								{0.28,0.87},
								1
							};
						};
						class SIGHT_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.2,0.89999998},
								1
							};
							right[]=
							{
								{0.22,0.89999998},
								1
							};
							down[]=
							{
								{0.2,0.92000002},
								1
							};
						};
						class CordX
						{
							source="coordinateX";
							sourceScale=0.0099999998;
							sourceLength=3;
							sourceOffset=-0.5;
							align="right";
							scale=1;
							pos[]=
							{
								{0.25999999,0.89999998},
								1
							};
							right[]=
							{
								{0.28,0.89999998},
								1
							};
							down[]=
							{
								{0.25999999,0.92000002},
								1
							};
						};
						class CordY: CordX
						{
							source="coordinateY";
							pos[]=
							{
								{0.30000001,0.89999998},
								1
							};
							right[]=
							{
								{0.31999999,0.89999998},
								1
							};
							down[]=
							{
								{0.30000001,0.92000002},
								1
							};
						};
						class Tgt_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.41,0.89999998},
								1
							};
							right[]=
							{
								{0.43000001,0.89999998},
								1
							};
							down[]=
							{
								{0.41,0.92000002},
								1
							};
						};
						class TgtPos_Value
						{
							source="userText";
							sourceIndex=2;
							sourceScale=1;
							sourceLength=3;
							scale=1;
							align="right";
							pos[]=
							{
								{0.46000001,0.89999998},
								1
							};
							right[]=
							{
								{0.47999999,0.89999998},
								1
							};
							down[]=
							{
								{0.46000001,0.92000002},
								1
							};
						};
						class AZ_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.67000002,0.89999998},
								1
							};
							right[]=
							{
								{0.69,0.89999998},
								1
							};
							down[]=
							{
								{0.67000002,0.92000002},
								1
							};
						};
						class AZ_Value
						{
							source="[x]turretworld";
							sourceIndex=1;
							sourceScale=1;
							sourceLength=3;
							scale=1;
							align="left";
							pos[]=
							{
								{0.73000002,0.89999998},
								1
							};
							right[]=
							{
								{0.75,0.89999998},
								1
							};
							down[]=
							{
								{0.73000002,0.92000002},
								1
							};
						};
						class EL_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.75,0.89999998},
								1
							};
							right[]=
							{
								{0.76999998,0.89999998},
								1
							};
							down[]=
							{
								{0.75,0.92000002},
								1
							};
						};
						class EL_Value
						{
							source="[y]turretworld";
							sourceIndex=1;
							sourceScale=1;
							sourceLength=1;
							scale=1;
							align="left";
							pos[]=
							{
								{0.80000001,0.89999998},
								1
							};
							right[]=
							{
								{0.81999999,0.89999998},
								1
							};
							down[]=
							{
								{0.80000001,0.92000002},
								1
							};
						};
						class ZoomLevel_4
						{
							condition="(user1 >= 4) * (user1 <= 4)";
							class StaticDraw
							{
								width=1;
								points[]=
								{
									
									{
										"Cross",
										{0.048999999,0},
										1
									},
									
									{
										"Cross",
										{0.0104,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.048999999,0},
										1
									},
									
									{
										"Cross",
										{-0.0104,0},
										1
									},
									{},
									
									{
										"Cross",
										{0.0104,0.016000001},
										1
									},
									
									{
										"Cross",
										{0.0104,-0.016000001},
										1
									},
									
									{
										"Cross",
										{-0.0104,-0.016000001},
										1
									},
									
									{
										"Cross",
										{-0.0104,0.016000001},
										1
									},
									
									{
										"Cross",
										{0.0104,0.016000001},
										1
									},
									{},
									
									{
										"Cross",
										{0.00052,0.00079999998},
										1
									},
									
									{
										"Cross",
										{0.00052,-0.00079999998},
										1
									},
									
									{
										"Cross",
										{-0.00052,-0.00079999998},
										1
									},
									
									{
										"Cross",
										{-0.00052,0.00079999998},
										1
									},
									
									{
										"Cross",
										{0.00052,0.00079999998},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.016000001},
										1
									},
									
									{
										"Cross",
										{0,0.032000002},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.016000001},
										1
									},
									
									{
										"Cross",
										{0,-0.032000002},
										1
									},
									{},
									
									{
										"Cross",
										{-0.048999999,0.032000002},
										1
									},
									
									{
										"Cross",
										{-0.097999997,0.032000002},
										1
									},
									{},
									
									{
										"Cross",
										{0.048999999,0.032000002},
										1
									},
									
									{
										"Cross",
										{0.097999997,0.032000002},
										1
									},
									{},
									
									{
										"Cross",
										{-0.048999999,-0.032000002},
										1
									},
									
									{
										"Cross",
										{-0.097999997,-0.032000002},
										1
									},
									{},
									
									{
										"Cross",
										{0.048999999,-0.032000002},
										1
									},
									
									{
										"Cross",
										{0.097999997,-0.032000002},
										1
									},
									{},
									
									{
										"Cross",
										{0.1472,0},
										1
									},
									
									{
										"Cross",
										{0.19599999,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.1472,0},
										1
									},
									
									{
										"Cross",
										{-0.19599999,0},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.064000003},
										1
									},
									
									{
										"Cross",
										{0,0.092799999},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.064000003},
										1
									},
									
									{
										"Cross",
										{0,-0.092799999},
										1
									},
									{}
								};
							};
						};
						class ZoomLevel_8
						{
							condition="(user1 >= 8) * (user1 <= 8)";
							class StaticDraw
							{
								width=1;
								points[]=
								{
									
									{
										"Cross",
										{0.05635,0},
										1
									},
									
									{
										"Cross",
										{0.01196,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.05635,0},
										1
									},
									
									{
										"Cross",
										{-0.01196,0},
										1
									},
									{},
									
									{
										"Cross",
										{0.01196,0.0184},
										1
									},
									
									{
										"Cross",
										{0.01196,-0.0184},
										1
									},
									
									{
										"Cross",
										{-0.01196,-0.0184},
										1
									},
									
									{
										"Cross",
										{-0.01196,0.0184},
										1
									},
									
									{
										"Cross",
										{0.01196,0.0184},
										1
									},
									{},
									
									{
										"Cross",
										{0.00059800001,0.00092000002},
										1
									},
									
									{
										"Cross",
										{0.00059800001,-0.00092000002},
										1
									},
									
									{
										"Cross",
										{-0.00059800001,-0.00092000002},
										1
									},
									
									{
										"Cross",
										{-0.00059800001,0.00092000002},
										1
									},
									
									{
										"Cross",
										{0.00059800001,0.00092000002},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.0184},
										1
									},
									
									{
										"Cross",
										{0,0.036800001},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.0184},
										1
									},
									
									{
										"Cross",
										{0,-0.036800001},
										1
									},
									{},
									
									{
										"Cross",
										{-0.05635,0.036800001},
										1
									},
									
									{
										"Cross",
										{-0.1127,0.036800001},
										1
									},
									{},
									
									{
										"Cross",
										{0.05635,0.036800001},
										1
									},
									
									{
										"Cross",
										{0.1127,0.036800001},
										1
									},
									{},
									
									{
										"Cross",
										{-0.05635,-0.036800001},
										1
									},
									
									{
										"Cross",
										{-0.1127,-0.036800001},
										1
									},
									{},
									
									{
										"Cross",
										{0.05635,-0.036800001},
										1
									},
									
									{
										"Cross",
										{0.1127,-0.036800001},
										1
									},
									{},
									
									{
										"Cross",
										{0.16927999,0},
										1
									},
									
									{
										"Cross",
										{0.2254,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.16927999,0},
										1
									},
									
									{
										"Cross",
										{-0.2254,0},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.073600002},
										1
									},
									
									{
										"Cross",
										{0,0.10672},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.073600002},
										1
									},
									
									{
										"Cross",
										{0,-0.10672},
										1
									},
									{}
								};
							};
						};
						class ZoomLevel_12
						{
							condition="(user1 >= 12) * (user1 <= 12)";
							class StaticDraw
							{
								width=1;
								points[]=
								{
									
									{
										"Cross",
										{0.063699998,0},
										1
									},
									
									{
										"Cross",
										{0.01352,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.063699998,0},
										1
									},
									
									{
										"Cross",
										{-0.01352,0},
										1
									},
									{},
									
									{
										"Cross",
										{0.01352,0.0208},
										1
									},
									
									{
										"Cross",
										{0.01352,-0.0208},
										1
									},
									
									{
										"Cross",
										{-0.01352,-0.0208},
										1
									},
									
									{
										"Cross",
										{-0.01352,0.0208},
										1
									},
									
									{
										"Cross",
										{0.01352,0.0208},
										1
									},
									{},
									
									{
										"Cross",
										{0.00067600003,0.00104},
										1
									},
									
									{
										"Cross",
										{0.00067600003,-0.00104},
										1
									},
									
									{
										"Cross",
										{-0.00067600003,-0.00104},
										1
									},
									
									{
										"Cross",
										{-0.00067600003,0.00104},
										1
									},
									
									{
										"Cross",
										{0.00067600003,0.00104},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.0208},
										1
									},
									
									{
										"Cross",
										{0,0.0416},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.0208},
										1
									},
									
									{
										"Cross",
										{0,-0.0416},
										1
									},
									{},
									
									{
										"Cross",
										{-0.063699998,0.0416},
										1
									},
									
									{
										"Cross",
										{-0.1274,0.0416},
										1
									},
									{},
									
									{
										"Cross",
										{0.063699998,0.0416},
										1
									},
									
									{
										"Cross",
										{0.1274,0.0416},
										1
									},
									{},
									
									{
										"Cross",
										{-0.063699998,-0.0416},
										1
									},
									
									{
										"Cross",
										{-0.1274,-0.0416},
										1
									},
									{},
									
									{
										"Cross",
										{0.063699998,-0.0416},
										1
									},
									
									{
										"Cross",
										{0.1274,-0.0416},
										1
									},
									{},
									
									{
										"Cross",
										{0.19136,0},
										1
									},
									
									{
										"Cross",
										{0.25479999,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.19136,0},
										1
									},
									
									{
										"Cross",
										{-0.25479999,0},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.0832},
										1
									},
									
									{
										"Cross",
										{0,0.12064},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.0832},
										1
									},
									
									{
										"Cross",
										{0,-0.12064},
										1
									},
									{}
								};
							};
						};
						class ZoomLevel_24
						{
							condition="(user1 >= 24) * (user1 <= 24)";
							class StaticDraw
							{
								width=1;
								points[]=
								{
									
									{
										"Cross",
										{0.085749999,0},
										1
									},
									
									{
										"Cross",
										{0.018200001,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.085749999,0},
										1
									},
									
									{
										"Cross",
										{-0.018200001,0},
										1
									},
									{},
									
									{
										"Cross",
										{0.018200001,0.028000001},
										1
									},
									
									{
										"Cross",
										{0.018200001,-0.028000001},
										1
									},
									
									{
										"Cross",
										{-0.018200001,-0.028000001},
										1
									},
									
									{
										"Cross",
										{-0.018200001,0.028000001},
										1
									},
									
									{
										"Cross",
										{0.018200001,0.028000001},
										1
									},
									{},
									
									{
										"Cross",
										{0.00091,0.0014},
										1
									},
									
									{
										"Cross",
										{0.00091,-0.0014},
										1
									},
									
									{
										"Cross",
										{-0.00091,-0.0014},
										1
									},
									
									{
										"Cross",
										{-0.00091,0.0014},
										1
									},
									
									{
										"Cross",
										{0.00091,0.0014},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.028000001},
										1
									},
									
									{
										"Cross",
										{0,0.056000002},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.028000001},
										1
									},
									
									{
										"Cross",
										{0,-0.056000002},
										1
									},
									{},
									
									{
										"Cross",
										{-0.085749999,0.056000002},
										1
									},
									
									{
										"Cross",
										{-0.1715,0.056000002},
										1
									},
									{},
									
									{
										"Cross",
										{0.085749999,0.056000002},
										1
									},
									
									{
										"Cross",
										{0.1715,0.056000002},
										1
									},
									{},
									
									{
										"Cross",
										{-0.085749999,-0.056000002},
										1
									},
									
									{
										"Cross",
										{-0.1715,-0.056000002},
										1
									},
									{},
									
									{
										"Cross",
										{0.085749999,-0.056000002},
										1
									},
									
									{
										"Cross",
										{0.1715,-0.056000002},
										1
									},
									{},
									
									{
										"Cross",
										{0.25760001,0},
										1
									},
									
									{
										"Cross",
										{0.34299999,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.25760001,0},
										1
									},
									
									{
										"Cross",
										{-0.34299999,0},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.112},
										1
									},
									
									{
										"Cross",
										{0,0.16240001},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.112},
										1
									},
									
									{
										"Cross",
										{0,-0.16240001},
										1
									},
									{}
								};
							};
						};
						class ZoomLevel_48
						{
							condition="(user1 >= 48) * (user1 <= 48)";
							class StaticDraw
							{
								width=1;
								points[]=
								{
									
									{
										"Cross",
										{0.18375,0},
										1
									},
									
									{
										"Cross",
										{0.039000001,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.18375,0},
										1
									},
									
									{
										"Cross",
										{-0.039000001,0},
										1
									},
									{},
									
									{
										"Cross",
										{0.039000001,0.059999999},
										1
									},
									
									{
										"Cross",
										{0.039000001,-0.059999999},
										1
									},
									
									{
										"Cross",
										{-0.039000001,-0.059999999},
										1
									},
									
									{
										"Cross",
										{-0.039000001,0.059999999},
										1
									},
									
									{
										"Cross",
										{0.039000001,0.059999999},
										1
									},
									{},
									
									{
										"Cross",
										{0.0019499999,0.003},
										1
									},
									
									{
										"Cross",
										{0.0019499999,-0.003},
										1
									},
									
									{
										"Cross",
										{-0.0019499999,-0.003},
										1
									},
									
									{
										"Cross",
										{-0.0019499999,0.003},
										1
									},
									
									{
										"Cross",
										{0.0019499999,0.003},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.059999999},
										1
									},
									
									{
										"Cross",
										{0,0.12},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.059999999},
										1
									},
									
									{
										"Cross",
										{0,-0.12},
										1
									},
									{},
									
									{
										"Cross",
										{-0.18375,0.12},
										1
									},
									
									{
										"Cross",
										{-0.36750001,0.12},
										1
									},
									{},
									
									{
										"Cross",
										{0.18375,0.12},
										1
									},
									
									{
										"Cross",
										{0.36750001,0.12},
										1
									},
									{},
									
									{
										"Cross",
										{-0.18375,-0.12},
										1
									},
									
									{
										"Cross",
										{-0.36750001,-0.12},
										1
									},
									{},
									
									{
										"Cross",
										{0.18375,-0.12},
										1
									},
									
									{
										"Cross",
										{0.36750001,-0.12},
										1
									},
									{},
									
									{
										"Cross",
										{0.55199999,0},
										1
									},
									
									{
										"Cross",
										{0.73500001,0},
										1
									},
									{},
									
									{
										"Cross",
										{-0.55199999,0},
										1
									},
									
									{
										"Cross",
										{-0.73500001,0},
										1
									},
									{},
									
									{
										"Cross",
										{0,0.23999999},
										1
									},
									
									{
										"Cross",
										{0,0.34799999},
										1
									},
									{},
									
									{
										"Cross",
										{0,-0.23999999},
										1
									},
									
									{
										"Cross",
										{0,-0.34799999},
										1
									},
									{}
								};
							};
						};
					};
				};
			};
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
					ambient[]={3,3,3,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						pos[]={0.5,0.47999999};
					};
					class Static_Offset
					{
						pos[]={0.5,0.5};
					};
					class LimitWaypoint
					{
						limits[]={0.22,0.059999999,0.77999997,0.059999999};
					};
					class Sensor_Rotation
					{
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
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.70999998,0.764};
					};
					class Direction_Center
					{
						pos[]={0.5,0.5};
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
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
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=1.25714;
					};
					class MovementY
					{
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
									source="static";
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
								class TargetLines: TargetLines
								{
								};
							};
							class rwr
							{
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class rwrEnemy: rwr
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrGroup: rwr
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrDestroyed
							{
							};
							class markedTarget
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class target
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetEnemy: target
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroup: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetDestroyed
							{
							};
							class targetGround: target
							{
								class TargetLines: TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
								class StaticDraw: StaticDraw
								{
								};
							};
							class targetGroundDestroyed
							{
							};
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteGroup: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteDestroyed
							{
							};
							class targetLaser: target
							{
								class TargetLines: TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserGroup: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVG: targetLaser
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetMan: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManFriendly: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManEnemy: targetMan
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManGroup: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteFriendly: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteEnemy: targetManRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteGroup: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirDestroyed
							{
							};
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirRemoteDestroyed
							{
							};
						};
					};
				};
			};
		};
		class Damage
		{
		};
		class TextureSources
		{
			class Olive
			{
			};
			class Tan
			{
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-20;
				maxElev=60;
				animationSourceHatch="Hatch_Commander_A";
				LODTurnedOut=1;
				LODTurnedin=1201;
				LODOpticsIn=0;
				LODOpticsOut=0;
				stabilizedInAxes=0;
				startEngine=0;
				usePip=0;
				selectionFireAnim="";
				weapons[]={};
				class ViewOptics: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-25;
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
				class OpticsIn
				{
				};
				magazines[]=
				{
					"rhsusf_mag_L8A3_16"
				};
			};
			class Turret_Weapon: MainTurret
			{
				soundServoVertical[]=
				{
					"",
					0.39810717,
					1,
					30
				};
				isPersonTurret=0;
				dontCreateAI=1;
				personturretAction="";
				proxyIndex=2;
				canHideGunner=0;
				initTurn=-20;
				minTurn=-180;
				maxTurn=180;
				minElev=-9;
				maxElev=30;
				maxhorizontalrotspeed=0.60000002;
				maxverticalrotspeed=0.44;
				LODTurnedOut=1000;
				LODTurnedin=1000;
				LODOpticsIn=1000;
				LODOpticsOut=1000;
				animationSourceStickX="Weapon_Turret_inertia";
				animationSourceStickY="Weapon_Gun_Inertia";
				selectionFireAnim="muzzleFlash";
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
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-1;
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
				class Hitpoints
				{
					class HitTurret_M2
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_M2_Turret";
						armorComponent="Hit_M2_Turret";
						passThrough=0;
						radius=0.2;
					};
					class HitGun_M2
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_M2_Gun";
						armorComponent="Hit_M2_Gun";
						passThrough=0;
						radius=0.2;
					};
				};
			};
			class Turret_LRAS: Turret_Weapon
			{
				proxyIndex=3;
				initTurn=20;
				minTurn=-180;
				maxTurn=180;
				minElev=-20;
				maxElev=30;
				animationSourceStickX="";
				animationSourceStickY="";
				selectionFireAnim="";
				weapons[]=
				{
					"rhs_weap_laserDesignator_AI"
				};
				magazines[]=
				{
					"rhs_LaserMag_ai"
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-5;
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
				class Components
				{
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
						hitpoint="Hit_Optic_LRAS3";
					};
					class WideZoom: Wide
					{
						initFov=0.087499999;
						minFov=0.087499999;
						maxFov=0.087499999;
					};
					class Narrow: Wide
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class NarrowZoom: Wide
					{
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class NarrowDoubleZoom: Wide
					{
						initFov=0.0145833;
						minFov=0.0145833;
						maxFov=0.0145833;
					};
				};
				class OpticsOut
				{
					class Wide: ViewOptics
					{
						initFov=0.89999998;
						minFov=0.25;
						maxFov=1.25;
						hitpoint="Hit_Optic_LRAS3";
					};
				};
				class Hitpoints
				{
					class HitTurret_LRAS3
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_LRAS3_Turret";
						armorComponent="Hit_LRAS3_Turret";
						passThrough=0;
						radius=0.1;
					};
					class HitGun_LRAS3
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_LRAS3_Gun";
						armorComponent="Hit_LRAS3_Gun";
						passThrough=0;
						radius=0.1;
					};
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
		class Hitpoints: HitPoints
		{
			class Hit_Optic_LRAS3
			{
				armor=-40;
				explosionShielding=0.1;
				radius=0.2;
				name="Hit_Optic_LRAS3";
				armorComponent="Hit_Optic_LRAS3";
				passThrough=0;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHSUSF_m1127_EventHandlers
			{
				init="_this call rhs_fnc_stryker_m1127_init";
				getin="_this call rhs_fnc_stryker_m1127_turret_getin_eh";
				getout="_this spawn rhs_fnc_stryker_m1127_turret_getout_eh";
				turnIn="(_this + [false])  spawn rhs_fnc_stryker_m1127_turret_turnout;";
				turnOut="(_this + [true]) spawn rhs_fnc_stryker_m1127_turret_turnout;";
			};
		};
	};
	class rhsusf_stryker_m1127_m2_base: rhsusf_stryker_m1127_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class Turret_Weapon: Turret_Weapon
			{
			};
			class Turret_LRAS: Turret_LRAS
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
		};
	};
	class rhsusf_stryker_m1127_m2_wd: rhsusf_stryker_m1127_m2_base
	{
		side=1;
	};
	class rhsusf_stryker_m1127_m2_d: rhsusf_stryker_m1127_m2_base
	{
		side=1;
	};
	class rhsusf_stryker_m1132_m2_base: rhsusf_stryker_m1126_m2_base
	{
		class Damage
		{
		};
		weapons[]={};
		magazines[]=
		{
			"rhsusf_mag_laneMarkerSystem"
		};
		class TextureSources
		{
			class Olive
			{
			};
			class Tan
			{
			};
		};
		class Hitpoints: HitPoints
		{
			class Hit_MinePlow_1
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_1";
				armorComponent="MinePlow_1";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
			class Hit_MinePlow_2
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_2";
				armorComponent="MinePlow_2";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
			class Hit_MinePlow_3
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_3";
				armorComponent="MinePlow_3";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
			class Hit_MinePlow_4
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_4";
				armorComponent="MinePlow_4";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
			class Hit_MinePlow_5
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_5";
				armorComponent="MinePlow_5";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
			class Hit_MinePlow_6
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_6";
				armorComponent="MinePlow_6";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
			class Hit_MinePlow_7
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_7";
				armorComponent="MinePlow_7";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
			class Hit_MinePlow_8
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_8";
				armorComponent="MinePlow_8";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
			class Hit_MinePlow_9
			{
				armor=-300;
				explosionShielding=0.1;
				name="MinePlow_9";
				armorComponent="MinePlow_9";
				simulation="RHS_MinePlow";
				passThrough=0;
				radius=0.2;
			};
		};
	};
	class rhsusf_stryker_m1132_m2_wd: rhsusf_stryker_m1132_m2_base
	{
		side=1;
	};
	class rhsusf_stryker_m1132_m2_d: rhsusf_stryker_m1132_m2_base
	{
		side=1;
	};
	class rhsusf_stryker_m1134_base: rhsusf_stryker_m1126_m2_base
	{
		defaultUserMFDvalues[]={1000,1};
		class MFD
		{
			class MFD_CROWS
			{
				topLeft="PIP_3_TL";
				topRight="PIP_3_TR";
				bottomLeft="PIP_3_BL";
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
						pos[]={0.079999998,0.89999998};
					};
					class Cross
					{
						pos[]={0,-0.145};
					};
					class TurretRotation
					{
						source="weaponHeading";
						sourceIndex=0;
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
						source="static";
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
						source="static";
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
						source="static";
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
						source="userText";
						sourceIndex=1;
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
						source="static";
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
			class MFD_MITAS
			{
				topLeft="MFD_MITAS_TL";
				topRight="MFD_MITAS_TR";
				bottomLeft="MFD_MITAS_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
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
					class Static_Offset
					{
						pos[]={0.079999998,0.89999998};
					};
					class Cross
					{
						pos[]={0,-0.145};
					};
				};
				class Draw
				{
					color[]={1,0,0,1};
					alpha=1;
					class StaticDraw
					{
						width=3;
						points[]={};
					};
					class Reticle_1
					{
						condition="(user1 >= 1) * (user1 <= 1)";
						class StaticDrawBold
						{
							width=5;
							points[]=
							{
								
								{
									"Cross",
									{0.34999999,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.47999999,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.51999998,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.64999998,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.45185199},
									1
								},
								
								{
									"Cross",
									{0.5,0.61968303},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.671323},
									1
								},
								
								{
									"Cross",
									{0.5,0.83915299},
									1
								},
								{}
							};
						};
					};
					class Reticle_2
					{
						condition="(user1 >= 2) * (user1 <= 2)";
						class StaticDraw
						{
							width=0.5;
							points[]=
							{
								
								{
									"Cross",
									{0.44999999,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.55000001,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.58095199},
									1
								},
								
								{
									"Cross",
									{0.5,0.71005303},
									1
								},
								{}
							};
						};
						class StaticDrawBold
						{
							width=5;
							points[]=
							{
								
								{
									"Cross",
									{0,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.44999999,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.55000001,0.64550298},
									1
								},
								
								{
									"Cross",
									{1,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0},
									1
								},
								
								{
									"Cross",
									{0.5,0.58095199},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.71005303},
									1
								},
								
								{
									"Cross",
									{0.5,1.12317},
									1
								},
								{}
							};
						};
					};
					class Reticle_3
					{
						condition="(user1 >= 3) * (user1 <= 4)";
						color[]={0,1,0};
						alpha=0.2;
						class StaticDraw
						{
							width=0.5;
							points[]=
							{
								
								{
									"Cross",
									{0.47999999,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.51999998,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.61968303},
									1
								},
								
								{
									"Cross",
									{0.5,0.671323},
									1
								},
								{}
							};
						};
						class StaticDrawBold
						{
							width=5;
							points[]=
							{
								
								{
									"Cross",
									{0.34999999,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.47999999,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.51999998,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.64999998,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.45185199},
									1
								},
								
								{
									"Cross",
									{0.5,0.61968303},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.671323},
									1
								},
								
								{
									"Cross",
									{0.5,0.83915299},
									1
								},
								{}
							};
						};
					};
					class Reticle_4
					{
						condition="(user1 >= 5) * (user1 <= 6)";
						color[]={0,1,0};
						alpha=0.2;
						class StaticDraw
						{
							width=0.5;
							points[]=
							{
								
								{
									"Cross",
									{0.44999999,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.55000001,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.58095199},
									1
								},
								
								{
									"Cross",
									{0.5,0.71005303},
									1
								},
								{}
							};
						};
						class StaticDrawBold
						{
							width=5;
							points[]=
							{
								
								{
									"Cross",
									{0,0.64550298},
									1
								},
								
								{
									"Cross",
									{0.44999999,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.55000001,0.64550298},
									1
								},
								
								{
									"Cross",
									{1,0.64550298},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0},
									1
								},
								
								{
									"Cross",
									{0.5,0.58095199},
									1
								},
								{},
								
								{
									"Cross",
									{0.5,0.71005303},
									1
								},
								
								{
									"Cross",
									{0.5,1.12317},
									1
								},
								{}
							};
						};
					};
					class Green
					{
						color[]={0,1,0};
						alpha=0.1;
						class ManualEngage_1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.2,0.0099999998},
								1
							};
							right[]=
							{
								{0.23,0.0099999998},
								1
							};
							down[]=
							{
								{0.2,0.039999999},
								1
							};
						};
						class ManualEngage_2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.2,0.039999999},
								1
							};
							right[]=
							{
								{0.23,0.039999999},
								1
							};
							down[]=
							{
								{0.2,0.07},
								1
							};
						};
						class Mode_Value
						{
							source="userText";
							sourceIndex=1;
							sourceScale=1;
							sourceLength=3;
							scale=1;
							align="right";
							refreshRate=0.079999998;
							pos[]=
							{
								{0.80000001,0.0099999998},
								1
							};
							right[]=
							{
								{0.82999998,0.0099999998},
								1
							};
							down[]=
							{
								{0.80000001,0.039999999},
								1
							};
						};
						class FOV_Value
						{
							source="userText";
							sourceIndex=2;
							sourceScale=1;
							sourceLength=3;
							scale=1;
							align="right";
							refreshRate=0.079999998;
							pos[]=
							{
								{0.80000001,0.039999999},
								1
							};
							right[]=
							{
								{0.82999998,0.039999999},
								1
							};
							down[]=
							{
								{0.80000001,0.07},
								1
							};
						};
						class LASER_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.80000001,0.07},
								1
							};
							right[]=
							{
								{0.82999998,0.07},
								1
							};
							down[]=
							{
								{0.80000001,0.1},
								1
							};
						};
						class Range_Value
						{
							source="laserDist";
							sourceScale=1;
							sourceLength=3;
							scale=1;
							align="right";
							refreshRate=0.079999998;
							pos[]=
							{
								{0.50999999,0.80000001},
								1
							};
							right[]=
							{
								{0.54000002,0.80000001},
								1
							};
							down[]=
							{
								{0.50999999,0.82999998},
								1
							};
						};
						class TOW_Type_Value
						{
							source="userText";
							sourceIndex=3;
							sourceScale=1;
							sourceLength=3;
							scale=1;
							align="right";
							refreshRate=0.079999998;
							pos[]=
							{
								{0.2,0.89999998},
								1
							};
							right[]=
							{
								{0.23,0.89999998},
								1
							};
							down[]=
							{
								{0.2,0.93000001},
								1
							};
						};
						class StaticDraw
						{
							width=3;
							points[]=
							{
								
								{
									{0.19499999,0.0049999999},
									1
								},
								
								{
									{0.19499999,0.11},
									1
								},
								
								{
									{0.28999999,0.11},
									1
								},
								
								{
									{0.28999999,0.0049999999},
									1
								},
								
								{
									{0.19499999,0.0049999999},
									1
								},
								{},
								
								{
									{0.79500002,0.0049999999},
									1
								},
								
								{
									{0.79500002,0.15000001},
									1
								},
								
								{
									{0.88999999,0.15000001},
									1
								},
								
								{
									{0.88999999,0.0049999999},
									1
								},
								
								{
									{0.79500002,0.0049999999},
									1
								},
								{},
								
								{
									{0.18000001,0.88},
									1
								},
								
								{
									{0.18000001,0.94},
									1
								},
								
								{
									{0.30000001,0.94},
									1
								},
								
								{
									{0.315,0.93000001},
									1
								},
								
								{
									{0.31999999,0.92000002},
									1
								},
								
								{
									{0.322,0.91500002},
									1
								},
								
								{
									{0.322,0.90499997},
									1
								},
								
								{
									{0.31999999,0.89999998},
									1
								},
								
								{
									{0.315,0.88999999},
									1
								},
								
								{
									{0.30000001,0.88},
									1
								},
								
								{
									{0.18000001,0.88},
									1
								},
								{},
								
								{
									{0.18799999,0.88},
									1
								},
								
								{
									{0.18799999,0.86000001},
									1
								},
								
								{
									{0.2,0.86000001},
									1
								},
								
								{
									{0.2,0.88},
									1
								},
								
								{
									{0.18799999,0.88},
									1
								},
								{},
								
								{
									{0.18799999,0.94},
									1
								},
								
								{
									{0.18799999,0.95999998},
									1
								},
								
								{
									{0.2,0.95999998},
									1
								},
								
								{
									{0.2,0.94},
									1
								},
								
								{
									{0.18799999,0.94},
									1
								}
							};
						};
					};
				};
			};
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
					ambient[]={3,3,3,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						pos[]={0.5,0.47999999};
					};
					class Static_Offset
					{
						pos[]={0.5,0.5};
					};
					class LimitWaypoint
					{
						limits[]={0.22,0.059999999,0.77999997,0.059999999};
					};
					class Sensor_Rotation
					{
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
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.70999998,0.764};
					};
					class Direction_Center
					{
						pos[]={0.5,0.5};
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
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
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=1.25714;
					};
					class MovementY
					{
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
										source="static";
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
									source="static";
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
								class TargetLines: TargetLines
								{
								};
							};
							class rwr
							{
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class rwrEnemy: rwr
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrGroup: rwr
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrDestroyed
							{
							};
							class markedTarget
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class target
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetEnemy: target
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroup: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetDestroyed
							{
							};
							class targetGround: target
							{
								class TargetLines: TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
								class StaticDraw: StaticDraw
								{
								};
							};
							class targetGroundDestroyed
							{
							};
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteGroup: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteDestroyed
							{
							};
							class targetLaser: target
							{
								class TargetLines: TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserGroup: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVG: targetLaser
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetMan: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManFriendly: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManEnemy: targetMan
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManGroup: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteFriendly: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteEnemy: targetManRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteGroup: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirDestroyed
							{
							};
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
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
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirRemoteDestroyed
							{
							};
						};
					};
				};
			};
		};
		class Damage
		{
		};
		class TextureSources
		{
			class Olive
			{
			};
			class Tan
			{
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
				minElev=-20;
				maxElev=30;
				personturretAction="vehicle_turnout_2";
				isPersonTurret=1;
				LODTurnedOut=1;
				LODTurnedin=1100;
				LODOpticsIn=0;
				LODOpticsOut=0;
				maxhorizontalrotspeed=0.86000001;
				maxverticalrotspeed=0.54000002;
				stabilizedInAxes=3;
				startEngine=0;
				usePip=2;
				animationSourceStickX="gunner_stick_trav";
				animationSourceStickY="gunner_stick_elev";
				animationSourceHatch="Hatch_Front";
				weapons[]=
				{
					"Rhs_weap_TOW_Launcher",
					"rhsusf_weap_M6"
				};
				magazines[]=
				{
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2B",
					"rhs_mag_2Rnd_TOW2B",
					"rhs_mag_2Rnd_TOW2B",
					"rhsusf_mag_L8A3_16"
				};
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-16;
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
				class OpticsIn
				{
					class DaysightWFOV: ViewOptics
					{
						camPos="View_CROWS";
						initFov=0.162791;
						minFov=0.162791;
						maxFov=0.162791;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_MITAS_Day";
					};
					class DaysightNFOV: DaysightWFOV
					{
						initFov=0.077777803;
						minFov=0.077777803;
						maxFov=0.077777803;
					};
					class ThermalWFOV: DaysightWFOV
					{
						camPos="View_CROWS_TI";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={2,3};
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
						hitpoint="Hit_Optic_MITAS_TI";
					};
					class ThermalWFOV2X: ThermalWFOV
					{
						initFov=0.087499999;
						minFov=0.087499999;
						maxFov=0.087499999;
					};
					class ThermalNFOV: ThermalWFOV
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class DaysightNFOV2X: ThermalNFOV
					{
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_Turret";
						armorComponent="Hit_Turret";
						passThrough=0;
						radius=0.2;
					};
					class HitGun
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_Gun";
						armorComponent="Hit_Gun";
						passThrough=0;
						radius=0.2;
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
								range[]={8000,16000,25000,4000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
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
								range[]={8000,4000,2000,1000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class Turret_Weapon: MainTurret
			{
				soundServoVertical[]=
				{
					"",
					0.39810717,
					1,
					30
				};
				isPersonTurret=0;
				dontCreateAI=1;
				personturretAction="";
				proxyIndex=2;
				canHideGunner=0;
				initTurn=-20;
				minTurn=-45;
				maxTurn=9;
				initElev=5;
				minElev=-9;
				maxElev=30;
				maxhorizontalrotspeed=0.60000002;
				maxverticalrotspeed=0.44;
				LODTurnedOut=1000;
				LODTurnedin=1000;
				LODOpticsIn=1000;
				LODOpticsOut=1000;
				animationSourceStickX="Weapon_Turret_inertia";
				animationSourceStickY="Weapon_Gun_Inertia";
				selectionFireAnim="muzzleFlash";
				weapons[]=
				{
					"rhs_weap_m240_m1134"
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
				class OpticsIn
				{
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-1;
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
				class Hitpoints
				{
					class HitTurret_Weapon
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="";
						armorComponent="Hit_Turret_Weapon";
						passThrough=0;
					};
					class HitGun_Weapon
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="";
						armorComponent="Hit_Gun_Weapon";
						passThrough=0;
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				dontCreateAI=0;
				proxyType="CPCargo";
				proxyIndex=1;
				animationSourceHatch="";
				rhs_hatch="Hatch_Loader";
				rhs_hatch_control=1;
				enabledByAnimationSource="Hatch_Loader";
			};
		};
		class Hitpoints: HitPoints
		{
			class Hit_Optic_MITAS_Day
			{
				armor=-40;
				explosionShielding=0;
				name="Hit_Optic_MITAS_Day";
				armorComponent="Hit_Optic_MITAS_Day";
				passThrough=0;
				radius=0.079999998;
			};
			class Hit_Optic_MITAS_TI
			{
				armor=-40;
				explosionShielding=0;
				name="Hit_Optic_MITAS_TI";
				armorComponent="Hit_Optic_MITAS_TI";
				passThrough=0;
				radius=0.1;
			};
			class Hit_Optic_MITAS_LRF
			{
				armor=-40;
				explosionShielding=0;
				name="Hit_Optic_MITAS_LRF";
				armorComponent="Hit_Optic_MITAS_LRF";
				passThrough=0;
				radius=0.07;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHSUSF_m1134_EventHandlers
			{
				init="_this call rhs_fnc_stryker_m1134_init";
				getout="_this spawn rhs_fnc_stryker_m1134_turret_getout_eh";
			};
		};
	};
	class rhsusf_stryker_m1134_wd: rhsusf_stryker_m1134_base
	{
		side=1;
	};
	class rhsusf_stryker_m1134_d: rhsusf_stryker_m1134_base
	{
		side=1;
	};
};
