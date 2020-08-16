class CfgPatches
{
	class rhs_c_rva
	{
		units[]=
		{
			"rhs_9k79",
			"rhs_9k79_K",
			"rhs_9k79_b"
		};
		weapons[]={};
		name="Tochka-U Launcher";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class ss21_dialog_control
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\dialog_control.sqf";
				description="";
			};
			class ss21_AI_launch
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\AI_launch.sqf";
				description="";
			};
			class ss21_AI_prepare
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\AI_prepare.sqf";
				description="Prepare tochka for launch";
			};
			class ss21_AI_waitForTarget
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\AI_waitForTarget.sqf";
				description="";
			};
			class ss21_missile_control
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\missile_control.sqf";
				description="";
			};
			class ss21_missile_warhead
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\missile_warhead.sqf";
				description="";
			};
			class ss21_effects
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\effects_ss21.sqf";
				description="";
			};
			class ss21_anim
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\anim_ss21.sqf";
				description="";
			};
			class ss21_deploy
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\deploy.sqf";
				description="";
			};
			class ss21_nuke
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\nuke\nuke.sqf";
				description="";
			};
			class ss21_nuke_fx_light
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_light_effects.sqf";
				description="";
			};
			class ss21_nuke_fx_smoke
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_smoke.sqf";
				description="";
			};
			class ss21_nuke_fx_shockwave
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_shockwave.sqf";
				description="";
			};
			class ss21_nuke_fx_postprocessing
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_postprocessing.sqf";
				description="";
			};
			class ss21_nuke_fx_damage
			{
				file="\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_damage.sqf";
				description="";
			};
		};
	};
};
class cfgWaypoints
{
	class RHS
	{
		class wpTochkaDeploy
		{
			tooltip="Deploys Tochka-U to ready to fire state";
			file="\rhsafrf\addons\rhs_c_rva\scripts\WP_TochkaDeploy.sqf";
			icon="\a3\3DEN\Data\CfgWaypoints\TransportUnload_ca.paa";
		};
		class wpTochkaFire: wpTochkaDeploy
		{
			tooltip="Tochka-U will fire missile at waypoint position";
			file="\rhsafrf\addons\rhs_c_rva\scripts\WP_TochkaFire.sqf";
			icon="\a3\3DEN\Data\CfgWaypoints\Destroy_ca.paa";
		};
	};
};
class DefaultEventhandlers;
class CfgAmmo
{
	class rhs_ammo_kh29_base;
	class rhs_ammo_m21OF_HE;
	class RHS_9M79_1_F: rhs_ammo_kh29_base
	{
		hit=1500;
		indirectHit=1000;
		indirectHitRange=50;
		airFriction=0;
		sideAirFriction=0.079999998;
		initTime=0;
		timeToLive=300;
		cost=400;
		maxSpeed=700;
		thrustTime=25;
		thrust=80;
		fuseDistance=5;
		CraterEffects="RHS_HeavyBombCrater";
		explosionEffects="RHS_HeavyBombExplosion";
		effectsMissile="missile5";
		whistleOnFire=2;
		whistleDist=60;
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			2.5,
			1.5,
			10800
		};
		RHS_WarheadType="REPLACE";
		RHS_FuseRange=25;
		SoundSetExplosion[]=
		{
			"BombsHeavy_Exp_SoundSet",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class RHS_9N123F: RHS_9M79_1_F
	{
		timeToLive=0.0099999998;
		thrustTime=0;
	};
	class RHS_9M79B: RHS_9M79_1_F
	{
		RHS_Yield=10000;
		RHS_WarheadType="NUKE";
		RHS_FuseRange=100;
	};
	class RHS_9M79_1_K: RHS_9M79_1_F
	{
		RHS_WarheadType="CLUSTER";
		RHS_FuseRange=300;
	};
	class RHS_9N123K: RHS_9N123F
	{
		hit=140;
		indirectHit=40;
	};
	class RHS_9N24: rhs_ammo_m21OF_HE
	{
		hit=280;
		indirectHit=52;
		indirectHitRange=22;
		timeToLive=60;
	};
};
class cfgWeapons
{
	class RocketPods;
	class RHS_9M79_1Launcher: RocketPods
	{
		sound[]=
		{
			"\rhsafrf\addons\rhs_ss21\sound\launchA",
			10,
			1,
			1100
		};
		recoil="launcherBase";
		reloadTime=14;
		cursor="Rocket";
		cursorSize=1;
		initSpeed=50;
	};
	};
};
class CfgMagazines
{
	class rhs_mag_40Rnd_122mm_rockets;
	class 1_Rnd_RHS_9M79_1_F: rhs_mag_40Rnd_122mm_rockets
	{
		ammo="RHS_9M79_1_F";
		count=1;
		initSpeed=44;
		maxLeadSpeed=200;
	};
	class 1_Rnd_RHS_9M79_1_K: 1_Rnd_RHS_9M79_1_F
	{
		ammo="RHS_9M79_1_K";
		count=1;
	};
	class 1_Rnd_RHS_9M79B: 1_Rnd_RHS_9M79_1_F
	{
		ammo="RHS_9M79B";
		count=1;
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
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
		class AnimationSources;
	};
	class OTR21_Base: Truck_F
	{
		rhs_decalParameters[]=
		{
			"['Number', SS21NumberPlaces, 'Default']"
		};
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		turnCoef=3.5;
		terrainCoef=1.5;
		simulation="carx";
		dampersBumpCoef=6;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=60;
		fuelCapacity=20;
		RHS_fuelCapacity=300;
		wheelCircumference=3.7690001;
		brakeIdleSpeed=0;
		canFloat=1;
		waterLeakiness=250;
		waterSpeedFactor=0.133;
		maxFordingDepth=0.40000001;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		waterAngularDampingCoef=10;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterPPInVehicle=0;
		waterResistanceCoef=0.40000001;
		engineShiftY=0.30000001;
		engineShiftZ=-3;
		rudderForceCoef=1.5;
		rudderForceCoefAtMaxSpeed=0.30000001;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.3000002,
				"N",
				0,
				"D1",
				5.6199999,
				"D2",
				2.8900001,
				"D3",
				1.64,
				"D4",
				1,
				"D5",
				0.72399998
			};
			TransmissionRatios[]=
			{
				"High",
				10.62
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.94999999,0.94999999,0.94999999,0.85000002,0.85000002};
		switchTime=0.81;
		latency=1.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=3.3;
		rearBias=3.5999999;
		centreBias=1;
		clutchStrength=175;
		transmissionLosses=12;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.24561401,0},
			{0.42105299,0.95310903},
			{0.52631599,1},
			{0.56140399,1},
			{0.63157898,0.95310903},
			{0.77192998,0.897044},
			{0.91228098,0.82670701},
			{1.08807,0}
		};
		maxOmega=298.45001;
		minOmega=60;
		enginePower=280;
		peakTorque=1226.25;
		idleRPM=700;
		redRPM=2850;
		engineLosses=14;
		thrustDelay=2.4000001;
		engineBrakeCoef=0.30000001;
		antiRollbarForceCoef=25;
		antiRollbarForceLimit=45.5;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=60;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.40000001;
				mass=90;
				MOI=14;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				maxCompression=0.25;
				MaxDroop=0.25;
				sprungMass=3000;
				springStrength=111813;
				springDamperRate=15872;
				longitudinalStiffnessPerUnitGravity=54582;
				latStiffX=3.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1.2},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=20000;
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
			};
			class RR: RF
			{
				maxHandBrakeTorque=20000;
			};
			class RR2: RR
			{
				steering=0;
			};
		};
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		mFact=0;
		tBody=0;
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"num1",
			"num2",
			"num3"
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_rva"
				};
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', SS21NumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class Default
					{
						name="Default";
						value="Default";
						defaultValue="Default";
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
					class LicensePlate
					{
						name="License Plate";
						value="LicensePlate";
					};
				};
			};
			class rhs_decalNumber
			{
				collapsed=1;
				tooltip="Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach SS21NumberPlaces}else{[_this, [['Number', SS21NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_deploy
			{
				tooltip="Deploys Tochka in ready to launch state. In order to fire Tochka use following command Tochka doTarget enemyTarget (may be laser target or vehicle).";
				property="rhs_deploy";
				control="Checkbox";
				expression="if(_value)then{[_this,_value] call rhs_fnc_ss21_deploy}";
				defaultValue=0;
			};
		};
		attenuationEffectType="RHS_CarAttenuation";
		enableManualFire=0;
		side=0;
		threat[]={0.5,0.5,0.1};
		accuracy=0.30000001;
		artilleryScanner=0;
		hideProxyInCombat=0;
		transportAmmo=0;
		transportRepair=0;
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		cost=50000;
		armor=32;
		damageResistance=0.0024300001;
		armorWheels=0.12;
		initCargoAngleY=185;
		viewDriverShadow=1;
		viewGunnerShadow=1;
		viewCargoShadow=1;
		typicalCargo[]={};
		hasGunner=1;
		hasCommander=0;
		cargoIsCoDriver[]={1,1,0};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		class Exhausts
		{
			class Exhaust
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffectBig";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding=0;
				usePiP=1;
				minElev=74;
				maxElev=78;
				initElev=75;
				minTurn=-0.0099999998;
				maxTurn=0.0099999998;
				weapons[]=
				{
					"RHS_ss21_dummy_launcher"
				};
				weaponsOnUnDeploy[]=
				{
					"RHS_ss21_dummy_launcher"
				};
				weaponsOnDeploy[]=
				{
					"RHS_9M79_1Launcher"
				};
				stabilizedInAxes=0;
				forceHideGunner=1;
				forceHideCommander=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
				};
				lockWhenVehicleSpeed=1;
				class ViewCargo
				{
					initAngleX=5;
					minAngleX=-75;
					maxAngleX=85;
					initAngleY=0;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.69999999;
					minFov=0.41999999;
					maxFov=0.85000002;
					minMoveX=0;
					maxMoveX=0;
					minMoveY=0;
					maxMoveY=0;
					minMoveZ=0;
					maxMoveZ=0;
				};
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-2;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.1;
				material=-1;
				name="glass5";
				passThrough=0;
			};
			class HitGlass2
			{
				armor=0.1;
				material=-1;
				passThrough=0;
				name="glass2";
			};
			class HitGlass3
			{
				armor=0.1;
				material=-1;
				passThrough=0;
				name="glass3";
			};
			class HitGlass4
			{
				armor=0.1;
				material=-1;
				passThrough=0;
				name="glass4";
			};
			class HitGlass5
			{
				armor=0.1;
				material=-1;
				passThrough=0;
				name="glass5";
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.5;
				passThrough=0.30000001;
				name="wheel_1_1";
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.5;
				passThrough=0.30000001;
				name="wheel_1_2";
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.5;
				passThrough=0.30000001;
				name="wheel_1_3";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5;
				passThrough=0.30000001;
				name="wheel_2_1";
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.5;
				passThrough=0.30000001;
				name="wheel_2_2";
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.5;
				passThrough=0.30000001;
				name="wheel_2_3";
			};
			class HitBody
			{
				armor=1;
				material=-1;
				name="ammo";
				passThrough=1;
			};
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
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="[_this select 0] execVM 'rhsafrf\addons\rhs_c_rva\scripts\init.sqf';(_this select 0) addeventhandler ['HandleDamage',{[_this,0.5,0.025,0.8,0.2] spawn rhs_fnc_activeTirePressure; _this select 2;}];";
			};
		};
	};
	class rhs_9k79_K: rhs_9k79
	{
		class Turrets: Turrets
		{
		};
	};
	class rhs_9k79_B: rhs_9k79
	{
		class Turrets: Turrets
		{
		};
	};
};
class CfgSounds
{
	class RHS_SS21prepS
	{
		name="RHS_SS21prepS";
		sound[]=
		{
			"\rhsafrf\addons\rhs_ss21\sound\prepS",
			0.1,
			1
		};
		titles[]={};
	};
	class RHS_SS21wipers
	{
		name="RHS_SS21wipers";
		sound[]=
		{
			"\rhsafrf\addons\rhs_ss21\sound\wipers.wss",
			0.1,
			1
		};
		titles[]={};
	};
	class RHS_tochkaLoop
	{
		name="RHS_tochkaLoop";
		sound[]=
		{
			"\rhsafrf\addons\rhs_ss21\sound\tochkaLoop.wss",
			0.1,
			1
		};
		titles[]={};
	};
	class RHS_tochkaStart
	{
		name="RHS_tochkaStart";
		sound[]=
		{
			"\rhsafrf\addons\rhs_ss21\sound\tochkaStart.wss",
			0.1,
			1
		};
		titles[]={};
	};
	class nuclear_boom
	{
		name="nuclear_boom";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_rva\scripts\nuke\boom.ogg",
			15.848932,
			1
		};
		titles[]={};
	};
	class nuclear_geiger
	{
		name="nuclear_geiger";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_rva\scripts\nuke\geiger.ogg",
			1,
			1
		};
		titles[]={};
	};
};
class RscMapControl;
class RscShortcutButton;
class RscButton;
class RscPicture;
class RscText;
class RscListBox;
class RscEdit;
class ss21_main_dialog
{
	idd=61461;
	name="ss21_main_dialog";
	movingEnable=0;
	onUnload="[1] call rhs_fnc_ss21_dialog_control";
	controlsBackground[]=
	{
		"ss21_backgroundCover",
		"ss21_background"
	};
	objects[]={};
	class RHS_ss21_control_group
	{
		idc=-1;
		style=0;
			width=0.021;
			autoScrollSpeed=-1;
			autoScrollDelay=5;
			autoScrollRewind=0;
		};
			height=0.028000001;
		};
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,0.30000001};
			arrowEmpty="\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull="\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border="#(argb,8,8,3)color(0,0,0,0.1)";
			thumb="#(argb,8,8,3)color(1,1,1,1)";
		};
		x=0;
		w=1;
		y=0;
		h=1;
	};
	class RHS_ss21_text: RscText
	{
		idc=-1;
		style=0;
		x=0;
		w=0.30000001;
		y=0;
		h=0.039999999;
		sizeEx=0.039209999;
		colorBackground[]={0.5,0.5,0.5,0};
		colorText[]={0.85000002,0.85000002,0.85000002,1};
		font="PuristaMedium";
	};
	class RHS_ss21_text_border: RscPicture
	{
		idc=-1;
		style=0;
		x=0;
		w=0.30000001;
		y=0;
		h=0.035;
		sizeEx=0.039209999;
		colorBackground[]={0,0,0,0.2};
		colorText[]={0.85000002,0.85000002,0.85000002,1};
		font="PuristaMedium";
	};
	class RHS_ss21_edit: RscEdit
	{
		style="0x00+16";
		idc=-1;
		font="PuristaMedium";
		sizeEx=0.026000001;
		htmlControl=1;
		lineSpacing=0.0040000002;
		x=0;
		w=0.30000001;
		y=0;
		h=0.059999999;
		colorText[]={0.85000002,0.85000002,0.85000002,1};
		colorSelection[]={1,1,1,1};
	};
	class RHS_ss21_image: RscPicture
	{
		idc=-1;
		style="48+0x800";
		x=0.25;
		w=0.1;
		y=0.1;
		h=0.1;
		colorText[]={1,1,1,1};
		colorBackground[]={0,0,0,0};
		font="PuristaMedium";
		sizeEx=0.032000002;
	};
	class RHS_ss21_btn: RscShortcutButton
	{
		idc=-1;
		style=0;
		action="";
		x=0;
		y=0;
		w=0.23;
		h=0.1;
		size=0.039209999;
		sizeEx=0.039209999;
		color[]={0.54299998,0.57419997,0.4102,1};
		color2[]={0.94999999,0.94999999,0.94999999,1};
		colorBackground[]={1,1,1,1};
		colorbackground2[]={1,1,1,0.40000001};
		colorDisabled[]={1,1,1,0.25};
		periodFocus=1.2;
		periodOver=0.80000001;
		class HitZone
		{
			left=0.0040000002;
			top=0.028999999;
			right=0.0040000002;
			bottom=0.028999999;
		};
		class ShortcutPos
		{
			left=0.0145;
			top=0.026000001;
			w=0.039215699;
			h=0.052287601;
		};
		class TextPos
		{
			left=0.025;
			top=0.029999999;
			right=0.0049999999;
			bottom=0.0049999999;
		};
		animTextureNormal="#(argb,8,8,3)color(1,1,1,0)";
		animTextureDisabled="#(argb,8,8,3)color(1,1,1,0)";
		animTextureOver="#(argb,8,8,3)color(1,1,1,0.0)";
		animTextureFocused="#(argb,8,8,3)color(1,1,1,0)";
		animTexturePressed="#(argb,8,8,3)color(1,1,1,0)";
		animTextureDefault="#(argb,8,8,3)color(1,1,1,0)";
		period=0.40000001;
		font="PuristaMedium";
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
			0.090000004,
			1
		};
		soundEscape[]=
		{
			"\A3\ui_f\data\sound\RscButton\soundEscape",
			0.090000004,
			1
		};
		class Attributes
		{
			font="PuristaMedium";
			color="#E5E5E5";
			align="left";
			shadow="true";
		};
		class AttributesImage
		{
			font="PuristaMedium";
			color="#E5E5E5";
			align="left";
			shadow="true";
		};
	};
	class RHS_ss21_list: RscListBox
	{
		style=16;
		idc=-1;
		w=0.27500001;
		h=0.039999999;
		colorSelect[]={1,1,1,1};
		colorText[]={1,1,1,1};
		colorBackground[]={0.80000001,0.80000001,0.80000001,1};
		colorSelectBackground[]={0.40000001,0.43000001,0.28,0.5};
		colorScrollbar[]={0.2,0.2,0.2,1};
		arrowEmpty="\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
		arrowFull="\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
		wholeHeight=0.44999999;
		rowHeight=0.039999999;
		color[]={0.69999999,0.69999999,0.69999999,1};
		colorActive[]={0,0,0,1};
		colorDisabled[]={0,0,0,0.30000001};
		font="PuristaMedium";
		sizeEx=0.023;
		soundSelect[]=
		{
			"",
			0.1,
			1
		};
		soundExpand[]=
		{
			"",
			0.1,
			1
		};
		soundCollapse[]=
		{
			"",
			0.1,
			1
		};
		maxHistoryDelay=1;
		autoScrollSpeed=-1;
		autoScrollDelay=5;
		autoScrollRewind=0;
			colorActive[]={1,1,1,1};
			colorDisabled[]={1,1,1,1};
			thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
			arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
			arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
			border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		};
	};
	class RHS_ss21_map: RscMapControl
	{
		idc=-1;
		style=48;
		x=0;
		y=0;
		w=1;
		h=1;
		colorBackground[]={1,1,1,1};
		colorOutside[]={0,0,0,1};
		colorSea[]={0.40000001,0.60000002,0.80000001,0.5};
		colorForest[]={0.60000002,0.80000001,0.40000001,0.5};
		colorForestBorder[]={0.60000002,0.80000001,0.40000001,1};
		colorRocks[]={0,0,0,0.30000001};
		colorRocksBorder[]={0,0,0,1};
		colorLevels[]={0.30000001,0.2,0.1,0.5};
		colorMainCountlines[]={0.60000002,0.40000001,0.2,0.5};
		colorCountlines[]={0.60000002,0.40000001,0.2,0.30000001};
		colorMainCountlinesWater[]={0.5,0.60000002,0.69999999,0.60000002};
		colorCountlinesWater[]={0.5,0.60000002,0.69999999,0.30000001};
		colorPowerLines[]={0.1,0.1,0.1,1};
		colorRailWay[]={0.80000001,0.2,0,1};
		colorNames[]={1.1,0.1,1.1,0.89999998};
		colorInactive[]={1,1,0,0.5};
		colorTracks[]={0.80000001,0.80000001,0.69999999,0.2};
		colorTracksFill[]={0.80000001,0.69999999,0.69999999,1};
		colorRoads[]={0.69999999,0.69999999,0.69999999,1};
		colorRoadsFill[]={1,1,1,1};
		colorMainRoads[]={0.89999998,0.5,0.30000001,1};
		colorMainRoadsFill[]={1,0.60000002,0.40000001,1};
		colorGrid[]={0.1,0.1,0.1,0.60000002};
		colorGridMap[]={0.1,0.1,0.1,0.60000002};
		font="PuristaMedium";
		sizeEx=0.039999999;
		stickX[]=
		{
			0.2,
			
			{
				"Gamma",
				1,
				1.5
			}
		};
		stickY[]=
		{
			0.2,
			
			{
				"Gamma",
				1,
				1.5
			}
		};
		ptsPerSquareSea=6;
		ptsPerSquareTxt=8;
		ptsPerSquareCLn=8;
		ptsPerSquareExp=8;
		ptsPerSquareCost=8;
		ptsPerSquareFor="4.0f";
		ptsPerSquareForEdge="10.0f";
		ptsPerSquareRoad=2;
		ptsPerSquareObj=10;
		fontLabel="PuristaMedium";
		sizeExLabel=0.034000002;
		fontGrid="PuristaMedium";
		sizeExGrid=0.034000002;
		fontUnits="PuristaMedium";
		sizeExUnits=0.034000002;
		fontNames="PuristaMedium";
		sizeExNames=0.056000002;
		fontInfo="PuristaMedium";
		sizeExInfo=0.034000002;
		fontLevel="PuristaMedium";
		sizeExLevel=0.034000002;
		maxSatelliteAlpha=0;
		alphaFadeStartScale=1;
		alphaFadeEndScale=1.1;
		showCountourInterval=2;
		scaleDefault=0.1;
		onMouseButtonClick="";
		onMouseButtonDblClick="";
			color[]={0,0,0,1};
			x="SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y="SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			font="PuristaMedium";
			sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		};
			size=50;
		};
			icon="\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
			size=18;
			importance=1;
			coefMin=1;
			coefMax=1;
		};
			colorCanceled[]={0.69999999,0.69999999,0.69999999,1};
			colorDone[]={0.69999999,1,0.30000001,1};
			colorFailed[]={1,0.30000001,0.2,1};
			color[]=
			{
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
			};
			icon="\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
			iconCreated="\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
			iconCanceled="\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
			iconDone="\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
			iconFailed="\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
			size=27;
			importance=1;
			coefMin=1;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
			size=24;
			importance=1;
			coefMin=1;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
			size=12;
			importance="0.9 * 16 * 0.05";
			coefMin=0.25;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
			size=12;
			importance="0.6 * 12 * 0.05";
			coefMin=0.25;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
			size="14/2";
			importance="0.2 * 14 * 0.05 * 0.05";
			coefMin=0.25;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\church_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
			size=12;
			importance="0.5 * 12 * 0.05";
			coefMin=0.25;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
			size=14;
			importance="1.5 * 14 * 0.05";
			coefMin=0.25;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
			size=16;
			importance="2 * 16 * 0.05";
			coefMin=0.25;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
			size=11;
			importance="1 * 12 * 0.05";
			coefMin=0.25;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
			size=16;
			importance="2.5 * 16 * 0.05";
			coefMin=0.5;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			icon="\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
			size=20;
			importance="2 * 16 * 0.05";
			coefMin=0.89999998;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
			size=16;
			importance="1.2 * 16 * 0.05";
			coefMin=1;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
			size=16;
			importance="1 * 16 * 0.05";
			coefMin=0.69999999;
			coefMax=4;
		};
			icon="\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
		};
			size=24;
			importance=1;
			coefMin=1;
			coefMax=1;
			icon="\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		};
			size=24;
			importance=1;
			coefMin=1;
			coefMax=1;
			icon="\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
		};
		class power
		{
			icon="\A3\ui_f\data\map\mapcontrol\power_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
			color[]={1,1,1,1};
		};
		class powersolar
		{
			icon="\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
			color[]={1,1,1,1};
		};
		class powerwave
		{
			icon="\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
			color[]={1,1,1,1};
		};
		class powerwind
		{
			icon="\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
			color[]={1,1,1,1};
		};
		class Shipwreck
		{
			icon="\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
			size=24;
			importance=1;
			coefMin=0.85000002;
			coefMax=1;
			color[]={0,0,0,1};
		};
	};
	class ss21_backgroundCover: RHS_ss21_text
	{
		h="SafeZoneH";
		w="SafeZoneW";
		x="SafeZoneX";
		y="SafeZoneY";
		colorBackground[]={0,0,0,1};
	};
	class ss21_background
	{
		idc=-1;
		style=48;
		x="0.1-0.03";
		w="0.3*3 + 0.03*4";
		y=0;
		h="1+0.01*2+0.043*4";
		colorText[]={1,1,1,1};
		colorBackground[]={0,0,0,0};
		font="PuristaMedium";
		sizeEx=0.032000002;
	};
	class ss21_label: RHS_ss21_text
	{
		style=2;
		x=0.1;
		w="0.9 - 0.01";
		y=0.050000001;
		h=0.050000001;
		sizeEx=0.050000001;
	};
	class ss21_map: RHS_ss21_map
	{
		idc="(61461 + 1)";
		x=0.1;
		w="0.3*2 - 0.01";
		y="0.1 + 0.2";
		h="1 - (0.1 + 0.2*2) + 0.04";
	};
	class ss21_status: RHS_ss21_text_border
	{
		idc="(61461 + 2)";
		x=0.1;
		w="0.9 - 0.01";
		y="1-0.1- 0.02";
	};
	class ss21_coord_control_group: RHS_ss21_control_group
	{
		x=0.1;
		w=1;
		y="0.1+0.025";
		h="0.04*5";
		class Controls
		{
			class ss21_coord_desc: RHS_ss21_text
			{
				style=1;
				x=0;
				w="0.17 - 0.01";
				y=0;
			};
			class ss21_latitude_desc: RHS_ss21_text
			{
				style=1;
				x=0;
				w="0.17 - 0.01";
				y=0.039999999;
			};
			class ss21_longitude_desc: RHS_ss21_text
			{
				style=1;
				x=0;
				w="0.17 - 0.01";
				y="0.04*2";
			};
			class ss21_elevation_desc: RHS_ss21_text
			{
				style=1;
				x=0;
				w="0.17 - 0.01";
				y="0.04*3";
				h=0.039999999;
			};
			class ss21_target_desc: RHS_ss21_text
			{
				x=0.17;
				w="0.17 - 0.01";
				y=0;
			};
			class ss21_target_x: RHS_ss21_text_border
			{
				idc="(61461 + 3)";
				x=0.17;
				w="0.17 - 0.01";
				y="0.04*1";
			};
			class ss21_target_y: RHS_ss21_text_border
			{
				idc="(61461 + 4)";
				x=0.17;
				w="0.17 - 0.01";
				y="0.04*2";
			};
			class ss21_target_z: RHS_ss21_text_border
			{
				idc="(61461 + 5)";
				x=0.17;
				w="0.17 - 0.01";
				y="0.04*3";
			};
			class ss21_tochka_desc: RHS_ss21_text
			{
				x="0.17*2";
				w="0.17 - 0.01";
				y=0;
			};
			class ss21_tochka_x: RHS_ss21_text_border
			{
				idc="(61461 + 6)";
				x="0.17*2";
				w="0.17 - 0.01";
				y="0.04*1";
			};
			class ss21_tochka_y: RHS_ss21_text_border
			{
				idc="(61461 + 7)";
				x="0.17*2";
				w="0.17 - 0.01";
				y="0.04*2";
			};
			class ss21_tochka_z: RHS_ss21_text_border
			{
				idc="(61461 + 8)";
				x="0.17*2";
				w="0.17 - 0.01";
				y="0.04*3";
			};
			class ss21_rel_desc: RHS_ss21_text
			{
				style=2;
				x="0.17*4.3 - 0.03";
				w="0.17 - 0.01 + 0.03";
				y=0;
			};
			class ss21_dir_desc: RHS_ss21_text
			{
				style=1;
				x="0.17*3.3";
				w="0.17 - 0.01";
				y=0.039999999;
			};
			class ss21_dist_desc: RHS_ss21_text
			{
				style=1;
				x="0.17*3.3";
				w="0.17 - 0.01";
				y="0.04*2";
			};
			class ss21_elevation_rel_desc: RHS_ss21_text
			{
				style=1;
				x="0.17*3.3";
				w="0.17 - 0.01";
				y="0.04*3";
			};
			class ss21_rel_dir: RHS_ss21_text_border
			{
				idc="(61461 + 9)";
				x="0.17*4.3";
				w="0.17 - 0.01";
				y="0.04*1";
			};
			class ss21_rel_dist: RHS_ss21_text_border
			{
				idc="(61461 + 10)";
				x="0.17*4.3";
				w="0.17 - 0.01";
				y="0.04*2";
			};
			class ss21_rel_elev: RHS_ss21_text_border
			{
				idc="(61461 + 11)";
				x="0.17*4.3";
				w="0.17 - 0.01";
				y="0.04*3";
			};
		};
	};
	class ss21_btn_control_group: RHS_ss21_control_group
	{
		x="0.1 + 0.3*2";
		w=0.30000001;
		y="0.1 + 0.2 - 0.05";
		h=1;
		class Controls
		{
			class ss21_stable_desc: RHS_ss21_text
			{
				style=2;
				x=0;
				w=0.30000001;
				y="0.043*1 + 0.032";
			};
			class ss21_stable_up_btn: RHS_ss21_btn
			{
				idc="(61461 + 12)";
				x=0;
				w="0.3/2";
				y="0.043*2";
				action="[2] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_stable_down_btn: RHS_ss21_btn
			{
				idc="(61461 + 13)";
				x="0.3/2";
				w="0.3/2";
				y="0.043*2";
				action="[3] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_bay_desc: RHS_ss21_text
			{
				style=2;
				x=0;
				w=0.30000001;
				y="0.043*3 + 0.032";
			};
			class ss21_bay_close_btn: RHS_ss21_btn
			{
				idc="(61461 + 15)";
				x=0;
				w="0.3/2";
				y="0.043*4";
				action="[4] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_bay_open_btn: RHS_ss21_btn
			{
				idc="(61461 + 14)";
				x="0.3/2";
				w="0.3/2";
				y="0.043*4";
				action="[5] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_pylon_desc: RHS_ss21_text
			{
				style=2;
				x=0;
				w=0.30000001;
				y="0.043*5 + 0.032";
			};
			class ss21_pylon_down_btn: RHS_ss21_btn
			{
				idc="(61461 + 16)";
				x=0;
				w="0.3/2";
				y="0.043*6";
				action="[6] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_pylon_up_btn: RHS_ss21_btn
			{
				idc="(61461 + 17)";
				x="0.3/2";
				w="0.3/2";
				y="0.043*6";
				action="[7] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_designate_target_btn: RHS_ss21_btn
			{
				x=0;
				w=0.30000001;
				y=0.34999999;
				action="[10] call rhs_fnc_ss21_dialog_control";
			};
			class ss21_firing_position_btn: RHS_ss21_btn
			{
				idc="(61461 + 18)";
				x=0;
				w=0.30000001;
				y="0.35+0.043*1";
				action="[8] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_launch_btn: RHS_ss21_btn
			{
				idc="(61461 + 19)";
				x=0;
				w=0.30000001;
				y="0.35+0.043*2";
				action="[12] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_running_position_btn: RHS_ss21_btn
			{
				idc="(61461 + 20)";
				x=0;
				w=0.30000001;
				y="0.35+0.043*3";
				action="[9] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_close_btn: RHS_ss21_btn
			{
				x=0;
				w=0.30000001;
				y="0.35+0.043*4";
				action="closeDialog 0";
			};
		};
	};
};
