class DefaultEventhandlers;
class CfgPatches
{
	class rhs_c_kamaz
	{
		units[]=
		{
			"rhs_kamaz5350_msv",
			"rhs_kamaz5350_vdv",
			"rhs_kamaz5350_vmf",
			"rhs_kamaz5350_vv",
			"rhs_kamaz5350_open_msv",
			"rhs_kamaz5350_open_vdv",
			"rhs_kamaz5350_open_vmf",
			"rhs_kamaz5350_open_vv",
			"rhs_kamaz5350_flatbed_msv",
			"rhs_kamaz5350_flatbed_vdv",
			"rhs_kamaz5350_flatbed_vmf",
			"rhs_kamaz5350_flatbed_vv",
			"rhs_kamaz5350_flatbed_cover_msv",
			"rhs_kamaz5350_flatbed_cover_vdv",
			"rhs_kamaz5350_flatbed_cover_vmf",
			"rhs_kamaz5350_flatbed_cover_vv"
		};
		weapons[]={};
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_c_troops"
		};
		name="KamAZ 5350";
		author="$STR_RHS_AUTHOR_FULL";
		url="http://www.rhsmods.org/";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_Kamaz_Cargo01="RHS_Kamaz_Cargo01";
		RHS_Kamaz_Turnout01="RHS_Kamaz_Turnout01";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_RHS_Kamaz_Cargo01: DefaultDie
		{
			actions="DeadActions";
			file="\rhsafrf\addons\rhs_c_kamaz\anims\rhs_kamaz_cargo01_KIA.rtm";
			speed=1;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class RHS_Kamaz_Cargo01: Crew
		{
			file="\rhsafrf\addons\rhs_c_kamaz\anims\rhs_kamaz_cargo01.rtm";
			speed=0.049917001;
			interpolateTo[]=
			{
				"KIA_RHS_Kamaz_Cargo01",
				1
			};
		};
		class passenger_inside_7_Aim;
		class RHS_Kamaz_Turnout01: passenger_inside_7_Aim
		{
			actions="passenger_inside_7Actions";
			file="\A3\cargoposes_F_heli\anim\vehicle_passenger_stand_1aim_passenger_flatground_4aim.rtm";
			speed=-1.1;
			looped=0;
			minplaytime=0.94999999;
			InterpolateTo[]=
			{
				"passenger_inside_7_aim",
				0.1
			};
			ConnectTo[]={};
			variantsAI[]={};
			variantsPlayer[]={};
		};
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class carLightToggle
			{
				file="\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_lightToggle.sqf";
				description="Decal init";
			};
			class adjustSearchlight
			{
				file="\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_adjustSearchlight.sqf";
				description="Adjust searchlight position";
			};
			class hatch_control
			{
				file="\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_hatch_control.sqf";
				description="Hatch control";
			};
			class hatch_control_ui_eh
			{
				file="\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_hatch_control_ui_eh.sqf";
				description="Hatch control";
			};
			class turretAction
			{
				file="\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_turretAction.sqf";
				description="Hatch control";
			};
		};
	};
};
class RscPicture;
class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};
	class rhs_kamaz_hatch: RscWeaponZeroing
	{
		idd=300;
		controls[]=
		{
			"CA_Zeroing",
			"RHS_tigr_handler"
		};
		class RHS_tigr_handler: RscPicture
		{
			idc=59999;
		};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0] call RHS_fnc_hatch_control";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
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
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
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
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};
	class Truck_02_base_F: Truck_F
	{
		class HitPoints: HitPoints
		{
			class HitFuel;
			class HitEngine;
		};
		class AnimationSources: AnimationSources;  //found empty after stripping
	};
	class O_Truck_02_covered_F: Truck_02_base_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_01;  //found empty after stripping
		};
		class EventHandlers;
	};
	class rhs_kamaz5350: O_Truck_02_covered_F
	{
		dlc="RHS_AFRF";
		scope=1;
		displayName="KamAZ-5350";
		model="rhsafrf\addons\rhs_kamaz\rhs_kamaz5350";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.44999999;
		terrainCoef=1.2;
		turnCoef=4;
		simulation="carx";
		dampersBumpCoef=6;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=90;
		fuelCapacity=40;
		RHS_fuelCapacity=350;
		wheelCircumference=3.776;
		brakeIdleSpeed=2;
		canFloat=0;
		waterLeakiness=2.5;
		waterSpeedFactor=0.80000001;
		maxFordingDepth=0.029999999;
		waterResistance=0.5;
		waterDamageEngine=0.89999998;
		waterAngularDampingCoef=10;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterPPInVehicle=0;
		waterResistanceCoef=0.22499999;
		engineShiftY=0.30000001;
		engineShiftZ=-3;
		rudderForceCoef=1.5;
		rudderForceCoefAtMaxSpeed=0.30000001;
		switchTime=0.75;
		latency=1;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1.34091,0.45454499,0.31818199,0.227273,0.93181801,0.27272701,0.95454502,0.45454499,0.909091,0.63636398,0.95454502,0.63636398,0.99545503,0.63636398,1,0.75};
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
				2.8599999,
				"D3",
				1.92,
				"D4",
				1.35,
				"D5",
				0.82999998,
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
			transmissionDelay=1;
		};
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.8;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=75;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.36363599,0.87368399},
			{0.45454499,0.99473703},
			{0.54545498,1},
			{0.63636398,1},
			{0.72727299,0.98421103},
			{0.81818199,0.96842098},
			{0.909091,0.92631602},
			{1.09864,0}
		};
		engineMOI=9;
		enginePower=194;
		peakTorque=950;
		minOmega=75;
		maxOmega=230.38;
		idleRPM=800;
		redRPM=2200;
		thrustDelay=0.5;
		engineLosses=35;
		engineBrakeCoef=0.25;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=8;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=50;
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
				width=0.34999999;
				steering=1;
				mass=80;
				MOI=14.4;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=15000;
				maxHandBrakeTorque=0;
				maxCompression=0.2;
				maxDroop=0.2;
				sprungMass=2000;
				springStrength=114000;
				springDamperRate=9000;
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
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				sprungMass=1500;
				springStrength=64000;
				springDamperRate=9000;
			};
			class L3: L2
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=300000;
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
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				maxHandBrakeTorque=0;
			};
			class R3: R2
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=300000;
			};
		};
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']"
		};
		category="Car";
		vehicleClass="rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"",
			"n1",
			"n2",
			"n3",
			"n4",
			"i2",
			"i4"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_kamaz\data\Kamaz5350_cabin_co.paa",
			"\rhsafrf\addons\rhs_kamaz\data\Kamaz5350_cargo_co.paa",
			"\rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_co.paa",
			"\rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed_co.paa",
			"\rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover_co.paa"
		};
		hideProxyInCombat=1;
		canHideDriver=0;
		viewDriverInExternal=1;
		driverAction="driver_Truck_02";
		driverInAction="driver_Truck_02";
		driverLeftLegAnimName="pedalL";
		driverRightLegAnimName="pedalR";
		driverRightHandAnimName="shift";
		tf_hasLRradio_api=0;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama_damage.rvmat",
				"rhsafrf\addons\rhs_a2port_car\Ural\Data\rhs_kama_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_destruct.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cabin.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cabin_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cabin_destruct.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cargo.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cargo_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_cargo_destruct.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_in.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_destruct.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover_damage.rvmat",
				"rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_VP.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_int_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_destruct.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_VP.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_panel_destruct.rvmat"
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
				intensity=0.80000001;
				useFlare=0;
				dayLight=0;
				flareSize=1;
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
				useFlare=1;
				position="light_R_flare";
			};
			class Left2: Left
			{
				useFlare=1;
				position="light_L_flare";
			};
			class Searchlight: Left
			{
				position="Searchlight_pos";
				direction="Searchlight_dir";
				hitpoint="Searchlight";
				selection="Searchlight";
				useFlare=1;
				intensity=0.5;
				innerAngle=35;
				outerAngle=179;
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
				outerAngle=29;
				coneFadeCoef=1;
				intensity=100;
				useFlare=0;
				dayLight=0;
				flareSize=1.5;
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
				intensity=5;
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
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=11;
				intensity=5;
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
			class cabin
			{
				color[]={800,900,650};
				ambient[]={5,0,0};
				intensity=4;
				size=1;
				innerAngle=90;
				outerAngle=165;
				coneFadeCoef=1;
				position="cabin_light";
				direction="cabin_light_dir";
				hitpoint="cabin_light";
				selection="cabin_light";
				useFlare=1;
				flareSize=1;
				flareMaxDistance=5;
				dayLight=0;
				blinking=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=50;
					hardLimitStart=1.5;
					hardLimitEnd=2;
				};
			};
			class reverse_light: Left
			{
				color[]={1900,1300,950};
				ambient[]={5,0,0};
				intensity=0.80000001;
				useFlare=1;
				innerAngle=50;
				outerAngle=179;
				position="reverse_light_pos";
				direction="reverse_light_dir";
				hitpoint="reverse_light_hit";
				selection="reverse_light";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			},
			
			{
				"Long_Left2",
				"Long_Right2"
			}
		};
		armorLights=0.0099999998;
		class AnimationSources: AnimationSources
		{
			class Door_LF
			{
				source="door";
				animPeriod=0.80000001;
				sound="RHS_Ural_Door";
				soundPosition="DoorL_axis";
				mass=1;
				displayName="open left door";
			};
			class Door_RF: Door_LF
			{
				displayName="open right door";
				soundPosition="DoorR_axis";
			};
			class Hatch: Door_LF
			{
				sound="";
				soundPosition="";
				displayName="open top hatch";
			};
			class gearbox: Door_LF
			{
				sound="RHS_gearbox";
				soundPosition="gear_axis";
				displayName="";
			};
			class HitSpare
			{
				source="Hit";
				hitpoint="HitSpare";
				raw=1;
			};
			class UseSpare: HitSpare
			{
				hitpoint="UseSpare";
			};
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
			class searchlight_hide: longlights_hide;  //found empty after stripping
			class cabinlights_hide: longlights_hide;  //found empty after stripping
			class searchlight_rot
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class turnout1
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class turnout2: turnout1;  //found empty after stripping
			class spare_hide
			{
				mass=1;
				source="user";
				displayName="hide spare wheel";
				animPeriod=0.1;
				initPhase=0;
			};
			class bench_hide: spare_hide
			{
				displayName="hide cargo bench";
				onPhaseChanged="(_this select 0) animateSource ['bench_hide',(_this select 1),true];";
			};
			class cover_hide: spare_hide
			{
				displayName="hide cover";
				onPhaseChanged="(_this select 0) animateSource ['cover_hide',(_this select 1),true];";
			};
			class back_door: spare_hide
			{
				displayName="open back door";
				onPhaseChanged="(_this select 0) animateSource ['back_door',(_this select 1),true];";
			};
			class cover_end_hide: spare_hide
			{
				displayName="open cover end";
				source="door";
				initPhase=1;
				onPhaseChanged="(_this select 0) animateDoor ['cover_end_hide',(_this select 1),true];";
			};
		};
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor=8;
				passThrough=1;
				minimalHit=0.0099999998;
				explosionShielding=1.5;
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				passThrough=1;
				minimalHit=0.0099999998;
				explosionShielding=0.5;
				radius=0.12;
				visual="zbytek";
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
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke
					{
						position="engine_smoke4";
					};
				};
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.25;
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.25;
				visual="wheel_1_2_damage";
				armorComponent="wheel_1_2_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius=0.25;
				visual="wheel_1_3_damage";
				armorComponent="wheel_1_3_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLBWheel: HitLBWheel
			{
				radius=0.25;
				visual="wheel_1_4_damage";
				armorComponent="wheel_1_4_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.25;
				visual="wheel_2_1_damage";
				armorComponent="wheel_2_1_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.25;
				visual="wheel_2_2_damage";
				armorComponent="wheel_2_2_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius=0.25;
				visual="wheel_2_3_damage";
				armorComponent="wheel_2_3_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRBWheel: HitRBWheel
			{
				radius=0.25;
				visual="wheel_2_4_damage";
				armorComponent="wheel_2_4_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.1;
				passThrough=0;
				explosionShielding=3;
				radius=0.33000001;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.1;
				passThrough=0;
				explosionShielding=3;
				radius=0.33000001;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.1;
				passThrough=0;
				explosionShielding=3;
				radius=0.33000001;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.1;
				passThrough=0;
				explosionShielding=3;
				radius=0.33000001;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.1;
				passThrough=0;
				explosionShielding=3;
				radius=0.33000001;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.1;
				passThrough=0;
				explosionShielding=3;
				radius=0.33000001;
			};
			class HitSpare: HitRF2Wheel
			{
				name="spare1";
			};
			class UseSpare: HitSpare
			{
				name="";
				visual="-";
				armor=1;
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				textures[]=
				{
					"\rhsafrf\addons\rhs_kamaz\data\Kamaz5350_cabin_co.paa",
					"\rhsafrf\addons\rhs_kamaz\data\Kamaz5350_cargo_co.paa",
					"\rhsafrf\addons\rhs_kamaz\data\kamaz5350_base_co.paa",
					"\rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_bed_co.paa",
					"\rhsafrf\addons\rhs_kamaz\data\bed\rhs_kamaz_cover_co.paa"
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
		class Attributes
		{
			class ObjectTexture
			{
				control="ObjectTexture";
				data="ObjectTexture";
				displayName="Skin";
				tooltip="Texture and material set applied on the object.";
			};
			class rhs_decalNumber_type
			{
				displayName="Define font type of plate number";
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', [5,6,7,8], _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				typeName="STRING";
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
				displayName="Set plate number";
				tooltip="Set plate number. 4 numbers are required. If 0, random number will be generated";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				typeName="Number";
				defaultValue="-1";
				expression="if(_value >= 0)then{[_this,[['Number', [5,6,7,8], _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type
			{
				displayName="Define large door roundel type";
				tooltip="Decal type";
				property="rhs_decalArmy_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				typeName="STRING";
				class values
				{
					class Army
					{
						name="Army";
						value="Army";
						defaultValue="Army";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
					};
					class HonorGDR
					{
						name="Honor GDR";
						value="HonorGDR";
					};
					class Platoon
					{
						name="Platoon";
						value="Platoon";
					};
					class PlatoonGDR
					{
						name="Platoon GDR";
						value="PlatoonGDR";
					};
					class PlatoonVDV
					{
						name="Platoon VDV";
						value="PlatoonVDV";
					};
				};
			};
			class rhs_decalArmy
			{
				displayName="Set large door roundel symbol";
				tooltip="Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [9],  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoon_type: rhs_decalArmy_type
			{
				displayName="Define small door roundel type";
				property="rhs_decalPlatoon_type";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
			};
			class rhs_decalPlatoon: rhs_decalArmy
			{
				displayName="Set small door roundel symbol";
				tooltip="Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [10],  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_hidespare
			{
				displayName="Remove spare wheel";
				property="rhs_hidespare";
				control="CheckboxNumber";
				expression="_this animate ['spare_hide',_value,true]";
				defaultValue="0";
			};
			class rhs_hidebench: rhs_hidespare
			{
				displayName="Remove cargo bench";
				property="rhs_hidebench";
				expression="_this animateSource ['bench_hide',_value,true];";
			};
			class Door_LF: rhs_hidespare
			{
				displayName="Open front left door";
				property="Door_LF";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class Door_RF: Door_LF
			{
				displayName="Open front right door";
				property="Door_RF";
			};
			class back_door: Door_LF
			{
				displayName="Open back door";
				property="back_door";
			};
		};
		class UserActions
		{
			class lights_toggle
			{
				displayName="Toggle short/long lights";
				position="";
				shortcut="vehLockTargets";
				radius=12;
				priority=1.5;
				showWindow=0;
				onlyForplayer=1;
				condition="(player == driver this) AND (isLightOn this)";
				statement="[this,0] call rhs_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut="lockTarget";
				displayName="Toggle cabin lights";
				statement="[this,1] call rhs_fnc_carLightToggle";
			};
			class searchlight_toggle: lights_toggle
			{
				shortcut="";
				displayName="Toggle searchlight";
				statement="[this,3] call rhs_fnc_carLightToggle";
			};
			class searchlight_adjust: lights_toggle
			{
				shortcut="";
				displayName="Adjust searchlight";
				condition="((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this) AND (this animationPhase 'searchlight_hide' == 0)";
				statement="[this] spawn rhs_fnc_adjustSearchlight";
			};
			class open_rear: lights_toggle
			{
				shortcut="";
				displayName="Lower rear cover";
				condition="(((call rhs_fnc_findPlayer)) in (crew this)) && (this doorPhase 'cover_end_hide' > 0)";
				statement="this animateDoor ['cover_end_hide',0,true]";
			};
			class close_rear: open_rear
			{
				displayName="Raise rear cover";
				condition="(((call rhs_fnc_findPlayer)) in (crew this)) && (this doorPhase 'cover_end_hide' < 1)";
				statement="this animateDoor ['cover_end_hide',1,true]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_decalsReadParams;(_this select 0) animateDoor ['cover_end_hide',1,true]";
				turnIn="([0] + _this)  call rhs_fnc_turretAction;";
				turnOut="([1] + _this) call rhs_fnc_turretAction;";
				engine="if(_this select 1)then{_this call RHS_fnc_gearSound};";
				dammaged="_this call rhs_fnc_wheelDamaged";
				getout="if( (_this select 3) isEqualTo [2] )then{(_this select 0) animateDoor ['hatch',0]}";
			};
		};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			""
		};
		transportSoldier=13;
		cargoProxyIndexes[]={2,3,4,5,6,7,8,9,10,11,12,13,14};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03still_ns",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_leanright",
			"passenger_apc_generic01",
			"passenger_apc_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_generic01_leanleft",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic02",
			"passenger_apc_generic01",
			"passenger_generic01_foldhands",
			"passenger_apc_generic04",
			"passenger_generic01_leanleft"
		};
		getInAction="GetInMRAP_01";
		getOutAction="GetOutLow";
		cargoIsCoDriver[]={1,0};
		cargoGetInAction[]=
		{
			"GetInMRAP_01",
			"GetInHemttBack"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutHighZamak"
		};
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment2"
		};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
				gunnerForceOptics=0;
				gunnerInAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				gunnerGetInAction="GetInHemttBack";
				gunnerGetOutAction="GetOutHighZamak";
				enabledByAnimationSource="cover_end_hide";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{-5.9650998,-65.868103},
						{17.3442,-42.642502},
						{19.092899,-7.8701},
						{-2.3450999,2.5708001}
					};
					limitsArrayBottom[]=
					{
						{-44.4687,-70.9972},
						{-23.562599,5.0429001}
					};
				};
				commanding=-2;
				forceHideGunner=1;
				viewGunnerInExternal=1;
				class Hitpoints;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerInAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{-9.8149996,-4.5300999},
						{-1.5719,-1.2185},
						{17.504999,16.3857},
						{19.004,46.8344},
						{-14.3588,76.119301},
						{-21.8244,80}
					};
					limitsArrayBottom[]=
					{
						{-22.8074,-7.2107},
						{-44.752102,10.6169},
						{-44.846699,80}
					};
				};
				gunnerGetInAction="GetInHemttBack";
				gunnerGetOutAction="GetOutHighZamak";
				enabledByAnimationSource="cover_end_hide";
				forceHideGunner=1;
				viewGunnerInExternal=1;
				commanding=-2;
				class Hitpoints;  //found empty after stripping
			};
			class CargoTurret_03: CargoTurret_01
			{
				animationSourceHatch="hatch_h";
				isPersonTurret=1;
				canHideGunner=1;
				forceHideGunner=0;
				gunnerInAction="RHS_Kamaz_Cargo01";
				gunnerAction="vehicle_turnout_2";
				personTurretAction="vehicle_turnout_2";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutLow";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				enabledByAnimationSource="hatch";
				rhs_hatch_control=1;
				gunnerCompartments="Compartment1";
				gunnerName="Passenger (Cabin Seat)";
				proxyIndex=1;
				gunnerDoor="Door_RF";
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{-5.9650998,-65.868103},
						{17.3442,-42.642502},
						{19.092899,-7.8701},
						{-2.3450999,2.5708001}
					};
					limitsArrayBottom[]=
					{
						{-44.4687,-70.9972},
						{-23.562599,5.0429001}
					};
				};
			};
		};
		class RenderTargets
		{
			class mirrorL
			{
				renderTarget="rendertarget0";
				class mirror
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
				BBoxes[]=
				{
					"PIP_0_TL",
					"PIP_0_TR",
					"PIP_0_BL",
					"PIP_0_BR"
				};
			};
			class mirrorR
			{
				renderTarget="rendertarget1";
				class mirror
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class mirror_low
			{
				renderTarget="rendertarget2";
				class mirror
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.5;
				};
				BBoxes[]=
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
		};
	};
	class rhs_kamaz5350_msv: rhs_kamaz5350
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_msv.paa";
		faction="rhs_faction_msv";
		crew="rhs_msv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Platoon', 12]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_vdv: rhs_kamaz5350
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_vdv.paa";
		faction="rhs_faction_vdv";
		crew="rhs_vdv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', 2]",
			"['Label', [10], 'Platoon',11]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_vmf: rhs_kamaz5350
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_vmf.paa";
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', [3,1]]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_vv: rhs_kamaz5350
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_vv.paa";
		faction="rhs_faction_vv";
		crew="rhs_msv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', [6,1]]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_open: rhs_kamaz5350
	{
		scope=1;
		displayName="KamAZ-5350 (Open)";
		hideProxyInCombat=1;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_02
			{
				gunnerInAction="RHS_Kamaz_Turnout01";
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				animationSourceHatch="turnout1";
				gunnerGetInAction="GetInHemttBack";
				gunnerGetOutAction="GetOutHighZamak";
				gunnerName="Passenger (Right Front Seat)";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerCompartments="Compartment2";
				proxyIndex=23;
				maxElev=45;
				minElev=-45;
				maxTurn=60;
				minTurn=-85;
				isPersonTurret=2;
				canHideGunner=1;
				allowLauncherOut=1;
				forceHideGunner=0;
				viewGunnerInExternal=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{45,-85},
						"",
						{35,-17},
						{15,-15}
					};
					limitsArrayBottom[]=
					{
						{10.85,-85},
						{6,-31},
						{-22,-25},
						{-13.5,-15}
					};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{35,-85},
						{35,80}
					};
					limitsArrayBottom[]=
					{
						{-25,-65},
						{-25,-49},
						{-3,-46},
						{-2,-41},
						{-0.40000001,11},
						{-1.6,52},
						{-4.5,55},
						{-45,60},
						{-42,74},
						{-29,78},
						{-15,80}
					};
					turnOffset=-90;
				};
			};
			class CargoTurret_05: CargoTurret_04
			{
				gunnerName="Passenger (Left Front Seat)";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				animationSourceHatch="turnout2";
				proxyIndex=24;
				maxTurn=25;
				minTurn=-60;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{25,20},
						{55,94}
					};
					limitsArrayBottom[]=
					{
						{-14,20},
						{-10,23},
						{-14,28},
						{4.21,30},
						{9.2700005,81},
						{7,94}
					};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{35,-60},
						{35,95}
					};
					limitsArrayBottom[]=
					{
						{-28,-66},
						{-21,-55},
						{-0.40000001,-54},
						{-0.31999999,-37},
						{-0.2,-1},
						{-2,40},
						{-4,43},
						{-14,47},
						{-42,54},
						{-45,61},
						{-15,95}
					};
					turnOffset=-90;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class cover_hide: cover_hide
			{
				initPhase=1;
			};
		};
		transportSoldier=12;
		cargoProxyIndexes[]={2,5,6,7,8,9,10,11,12,13,14};
		getInProxyOrder[]={1,2,5,6,7,8,9,10,11,12,13,14,15,16,23,24};
		class UserActions
		{
			class lights_toggle
			{
				displayName="Toggle short/long lights";
				position="";
				shortcut="vehLockTargets";
				radius=12;
				priority=1.5;
				showWindow=0;
				onlyForplayer=1;
				condition="(player == driver this) AND (isLightOn this)";
				statement="[this,0] call rhs_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut="lockTarget";
				displayName="Toggle cabin lights";
				statement="[this,1] call rhs_fnc_carLightToggle";
			};
			class searchlight_toggle: lights_toggle
			{
				shortcut="";
				displayName="Toggle searchlight";
				statement="[this,3] call rhs_fnc_carLightToggle";
			};
			class searchlight_adjust: lights_toggle
			{
				shortcut="";
				displayName="Adjust searchlight";
				condition="((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this) AND (this animationPhase 'searchlight_hide' == 0)";
				statement="[this] spawn rhs_fnc_adjustSearchlight";
			};
		};
	};
	class rhs_kamaz5350_open_msv: rhs_kamaz5350_open
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_open_msv.paa";
		faction="rhs_faction_msv";
		crew="rhs_msv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Platoon', 12]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_open_vdv: rhs_kamaz5350_open
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_open_vdv.paa";
		faction="rhs_faction_vdv";
		crew="rhs_vdv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', 2]",
			"['Label', [10], 'Platoon',11]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_open_vmf: rhs_kamaz5350_open
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_open_vmf.paa";
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', [3,1]]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_open_vv: rhs_kamaz5350_open
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_open_vv.paa";
		faction="rhs_faction_vv";
		crew="rhs_msv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', [6,1]]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_flatbed: rhs_kamaz5350_open
	{
		displayName="KamAZ-5350 (Open/Flatbed)";
		transportSoldier=1;
		cargoProxyIndexes[]={2};
		getInProxyOrder[]={1,2};
		class Turrets: Turrets
		{
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
		};
		class AnimationSources: AnimationSources
		{
			class bench_hide: bench_hide
			{
				initPhase=1;
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="O_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VVT_cargo_1",
					"VVT_cargo_2"
				};
				disableHeightLimit=1;
				maxLoadMass=25000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VVT_exit"
				};
				unloadingInterval=2;
				loadingDistance=5;
				loadingAngle=60;
				parachuteClassDefault="O_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhs_kamaz5350_flatbed_msv: rhs_kamaz5350_flatbed
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_flatbed_msv.paa";
		faction="rhs_faction_msv";
		crew="rhs_msv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Platoon', 12]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_flatbed_vdv: rhs_kamaz5350_flatbed
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_flatbed_vdv.paa";
		faction="rhs_faction_vdv";
		crew="rhs_vdv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', 2]",
			"['Label', [10], 'Platoon',11]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_flatbed_vmf: rhs_kamaz5350_flatbed
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_flatbed_vmf.paa";
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', [3,1]]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_flatbed_vv: rhs_kamaz5350_flatbed
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_flatbed_vv.paa";
		faction="rhs_faction_vv";
		crew="rhs_msv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', [6,1]]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_flatbed_cover: rhs_kamaz5350_flatbed
	{
		displayName="KamAZ-5350 (Flatbed)";
		class AnimationSources: AnimationSources
		{
			class cover_hide: cover_hide
			{
				initPhase=0;
			};
		};
		class VehicleTransport: VehicleTransport
		{
			class Cargo: Cargo;  //found empty after stripping
			class Carrier: Carrier
			{
				disableHeightLimit=0;
			};
		};
	};
	class rhs_kamaz5350_flatbed_cover_msv: rhs_kamaz5350_flatbed_cover
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_flatbed_cover_msv.paa";
		faction="rhs_faction_msv";
		crew="rhs_msv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Platoon', 12]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_flatbed_cover_vdv: rhs_kamaz5350_flatbed_cover
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_flatbed_cover_vdv.paa";
		faction="rhs_faction_vdv";
		crew="rhs_vdv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', 2]",
			"['Label', [10], 'Platoon',11]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_flatbed_cover_vmf: rhs_kamaz5350_flatbed_cover
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_flatbed_cover_vmf.paa";
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', [3,1]]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_kamaz5350_flatbed_cover_vv: rhs_kamaz5350_flatbed_cover
	{
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_kamaz5350_flatbed_cover_vv.paa";
		faction="rhs_faction_vv";
		crew="rhs_msv_driver";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9], 'Army', [6,1]]"
		};
		scope=2;
		author="$STR_RHS_AUTHOR_FULL";
	};
};
