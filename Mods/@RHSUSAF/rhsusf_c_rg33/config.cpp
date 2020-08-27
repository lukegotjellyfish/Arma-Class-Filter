class CfgPatches
{
	class rhsusf_c_RG33
	{
		units[]=
		{
			"rhsusf_M1238A1_socom_d",
			"rhsusf_M1238A1_socom_wd",
			"rhsusf_M1238A1_M2_socom_d",
			"rhsusf_M1238A1_M2_socom_wd",
			"rhsusf_M1238A1_Mk19_socom_d",
			"rhsusf_M1238A1_Mk19_socom_wd"
		};
		weapons[]={};
		requiredVersion=1.38;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_troops"
		};
		name="SOCOM 4X4 MRAP";
		author="$STR_RHSUSF_AUTHOR_FULL";
		url="http://www.rhsmods.org/";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class RscPicture;
class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};
	class rhs_rg33l_hatch: RscWeaponZeroing
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
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0] call RHSusf_fnc_hatch_control";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_4X4_Driver="RHS_AUV_Driver";
		RHS_4X4_CoDriver="RHS_AUV_CoDriver";
		RHS_4X4_CROWSgunner="RHS_AUV_CROWSgunner";
		RHS_4X4_Cargo01="RHS_4X4_Cargo01";
		RHS_4X4_Cargo01_FFV="RHS_4X4_Cargo01_FFV";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_4X4_Cargo01: Crew
		{
			file="\rhsusf\addons\rhsusf_c_rg33\anims\rhs_ASV_cargo";
			interpolateTo[]=
			{
				"RHS_4X4_KIA_Cargo01",
				1
			};
		};
		class RHS_4X4_KIA_Cargo01: DefaultDie
		{
			actions="DeadActions";
			file="\rhsusf\addons\rhsusf_c_rg33\anims\rhs_ASV_KIA_cargo";
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
		class RHS_4X4_Cargo01_FFV: Crew
		{
			file="\rhsusf\addons\rhsusf_c_rg33\anims\rhs_ASV_ffvpos";
			interpolateTo[]=
			{
				"RHS_4X4_KIA_Cargo01_FFV",
				1
			};
		};
		class RHS_4X4_KIA_Cargo01_FFV: DefaultDie
		{
			actions="DeadActions";
			file="\rhsusf\addons\rhsusf_c_rg33\anims\rhs_ASV_KIA_ffvpos";
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
		class EventHandlers;
		class ViewOptics;
	};
	class MRAP_01_base_F: Car_F
	{
		class EventHandlers;
	};
	class rhsusf_RG33_base: MRAP_01_base_F
	{
		dlc="RHS_USAF";
		category="Car";
		side=1;
		editorSubcategory="rhs_EdSubcat_mrap";
		vehicleClass="rhs_vehclass_MRAP";
		insideSoundCoef=0.40000001;
		displayName="RG33 4X4 SOCOM";
		unitInfoType="RscUnitInfo";
		weapons[]=
		{
			"TruckHorn2",
			"rhsusf_weap_duke"
		};
		magazines[]=
		{
			"rhsusf_mag_duke"
		};
		model="\rhsusf\addons\rhsusf_RG33\M1238A1";
		picture="\rhsusf\addons\rhsusf_rg33\pictures\rhs_rg33asv_unarmed_pic_ca.paa";
		Icon="\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";
		mapSize=12.02;
		transportSoldier=3;
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
		driverAction="RHS_4X4_Driver";
		driverInAction="RHS_4X4_Driver";
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		cargoAction[]=
		{
			"RHS_4X4_CoDriver",
			"RHS_4X4_CoDriver",
			"RHS_4X4_Cargo01"
		};
		cargoProxyIndexes[]={1,2,5};
		getInProxyOrder[]={1,2,3,4,5};
		memoryPointsGetInCargo[]=
		{
			"pos codriver",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos codriver dir",
			"pos cargo dir"
		};
		getInAction="GetInMRAP_01";
		getOutAction="GetOutMRAP_01";
		hideProxyInCombat=1;
		canHideDriver=0;
		viewDriverInExternal=1;
		LODDriverTurnedOut=1000;
		LODDriverTurnedIn=1000;
		driverDoor="DoorL";
		cargoDoors[]=
		{
			"DoorR",
			"DoorB"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		class textureSources
		{
			class rhs_desert
			{
				displayName="Desert";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_CO.paa",
					"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_CO.paa",
					"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
					"rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
				};
				factions[]={};
			};
			class rhs_woodland
			{
				displayName="Woodland";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_WD_CO.paa",
					"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_WD_CO.paa",
					"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
					"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
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
			class rhino
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Lower Rhino";
				property="Rhino_down";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class DoorB
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Open rear door";
				property="Door_B";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class DoorL: DoorB
			{
				displayName="Open left door";
				property="Door_L";
			};
			class DoorR: DoorB
			{
				displayName="Open right door";
				property="Door_R";
			};
		};
		cargoCompartments[]={1,1};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				weapons[]=
				{
					"rhsusf_weap_DummyLauncher"
				};
				gunnerAction="vehicle_passenger_stand_2";
				gunnerInAction="RHS_4X4_Cargo01_FFV";
				animationSourceHatch="hatch1";
				enabledByAnimationSource="hatch1_door";
				isPersonTurret=2;
				gunnerGetInAction="GetInMantis";
				gunnerGetOutAction="GetOutMantis";
				memoryPointsGetInGunner="pos cargoFFV1";
				memoryPointsGetInGunnerDir="pos cargoFFV1 dir";
				rhs_hatch_control=1;
				gunnerName="Passenger (Left Hatch)";
				gunnerCompartments="Compartment1";
				gunnerDoor="DoorB";
				memoryPointGunnerOptics="";
				selectionFireAnim="";
				canHideGunner=1;
				commanding=-2;
				LODTurnedIn=1200;
				LODTurnedOut=0;
				proxyIndex=3;
				maxElev=45;
				minElev=-35;
				maxTurn=70;
				minTurn=-70;
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
						{45,-35.283401},
						{45,95.211403}
					};
					limitsArrayBottom[]=
					{
						{-18.2509,-37.002499},
						{-21.1141,-18.564501},
						{-24.3277,22.018},
						{-33.629101,62.8428},
						{-11.3282,78.297699},
						{-7.9629998,97.133301}
					};
				};
				class Hitpoints;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=4;
				gunnerInAction="RHS_4X4_Cargo01_FFV";
				enabledByAnimationSource="hatch2_door";
				animationSourceHatch="hatch2";
				gunnerName="Passenger (Right Hatch)";
				memoryPointsGetInGunner="pos cargoFFV2";
				memoryPointsGetInGunnerDir="pos cargoFFV2 dir";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{44.910599,-89.8554},
						{45,70.8554}
					};
					limitsArrayBottom[]=
					{
						{-6.4587998,-93.059998},
						{-10.9755,-71.812401},
						{-21.242201,-17.739201},
						{-23.755301,20.682699},
						{-32.957401,64.965897}
					};
				};
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
				initPhase=0;
			};
			class light_stop: light_bo;  //found empty after stripping
			class light_svc: light_bo
			{
				initPhase=1;
			};
			class DoorL
			{
				source="door";
				animPeriod=0.80000001;
				sound="RHSUSF_Truck_Door";
				soundPosition="osa_dvere_lp";
			};
			class DoorR: DoorL
			{
				soundPosition="osa_dvere_pp";
			};
			class DoorB: DoorL
			{
				animPeriod=1.8;
				soundPosition="osa_dvere_pp";
			};
			class hatch1_door: DoorL
			{
				soundPosition="osa_dvere_pp";
				initPhase=0;
			};
			class hatch2_door: DoorL
			{
				soundPosition="osa_dvere_pp";
				initPhase=0;
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
			class rhino
			{
				source="door";
				animPeriod=6;
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
			class hide_spare
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide spare wheel";
				source="user";
				mass=-20;
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class hide_ammoboxes
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide ammo boxes";
				source="user";
				animPeriod=9.9999997e-006;
				minValue=0;
				maxValue=1;
				hideValue=0.5;
				initPhase=1;
			};
			class hide_towbar
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide tow bar";
				source="user";
				mass=-20;
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class hide_srchlight_cvr
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="hide IR light dome";
				source="user";
				mass=0;
				animPeriod=9.9999997e-006;
				initPhase=0;
			};
			class dve_fold
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
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
				condition="(player == driver this) && this animationPhase 'light_bo'<0.5;";
				statement="this animate ['light_bo', 1];this animate ['light_brake_bo', 1]";
			};
			class toggle_dve: light_bo_off
			{
				displayName="Toggle DVE monitor";
				position="zamerny";
				radius=12;
				showwindow=0;
				condition="((driver this) isEqualTo (call rhs_fnc_findPlayer))";
				statement="this animateSource ['dve_fold',abs((this AnimationSourcePhase 'dve_fold') - 1)]";
			};
			class light_bo_on: light_bo_off
			{
				displayName="B.O. Light on";
				condition="(player == driver this) && this animationPhase 'light_bo'==1;";
				statement="this animate ['light_bo', 0];this animate ['light_brake_bo', 0]";
			};
			class light_stop_off: light_bo_off
			{
				displayName="Stop Light off";
				condition="(player == driver this) && this animationPhase 'light_stop'<0.5";
				statement="this animate ['light_stop', 1]";
			};
			class light_stop_on: light_bo_off
			{
				displayName="Stop Light on";
				condition="(player == driver this) && this animationPhase 'light_stop'==1";
				statement="this animate ['light_stop', 0]";
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
				condition="(player == driver this) AND (isLightOn this)";
				statement="[this,0] call rhsusf_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut="lockTarget";
				displayName="Toggle cabin lights";
				statement="[this,1] call rhsusf_fnc_carLightToggle";
			};
			class OpenCargoDoor
			{
				displayName="Open Rear Door";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'DoorB' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['DoorB', 1];this setVariable ['ramp_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close Rear Door";
				condition="this doorPhase 'DoorB' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['DoorB', 0];this setVariable ['ramp_handler',0,true]";
			};
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
		};
		hullDamageCauseExplosion=1;
		armorStructural=8;
		class HitPoints: HitPoints
		{
			class HitHull: HitBody
			{
				armor=0.75;
				passThrough=1;
				name="karoserie";
				visual="zbytek";
				minimalhit=0.050000001;
				explosionShielding=0.0099999998;
				radius=0.22;
			};
			class HitFuel
			{
				armor=1.5;
				material=-1;
				name="palivo";
				visual="-";
				explosionShielding=0.5;
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.89999998;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0.2;
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
				visual="-";
				passThrough=0;
				MinimalHit=0.050000001;
				explosionShielding=0.0099999998;
				radius=0.15000001;
			};
			class HitDuke2: HitDuke1;  //found empty after stripping
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
			class cabin1
			{
				color[]={800,900,650};
				ambient[]={5,5,5};
				intensity=4;
				size=1;
				innerAngle=90;
				outerAngle=165;
				coneFadeCoef=1;
				position="cabin_light1";
				direction="cabin_light1_dir";
				hitpoint="cabin_light1";
				selection="cabin_light1";
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
					quadratic=70;
					hardLimitStart=2;
					hardLimitEnd=2.5;
				};
			};
			class cabin2: cabin1
			{
				position="cabin_light2";
				direction="cabin_light2_dir";
				hitpoint="cabin_light2";
				selection="cabin_light2";
			};
		};
		armorLights=0.0099999998;
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="m1p";
					pointDirection="m1d";
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
					pointPosition="m2p";
					pointDirection="m2d";
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
		normalSpeedForwardCoef=0.89999998;
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
				0.55000001
			};
			TransmissionRatios[]=
			{
				"High",
				8.1999998
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
		enginePower=336;
		peakTorque=2277.8;
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
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
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
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main.rvmat",
				"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_Dam.rvmat",
				"rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
				"rhsusf\addons\rhsusf_rg33\data\M1238A1_Int.rvmat",
				"rhsusf\addons\rhsusf_rg33\data\M1238A1_Int.rvmat",
				"rhsusf\addons\rhsusf_rg33\data\M1238A1_Int_Dam.rvmat",
				"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels.rvmat",
				"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_Dam.rvmat",
				"rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
				"rhsusf\addons\rhsusf_caiman\data\crows.rvmat",
				"rhsusf\addons\rhsusf_caiman\data\crows.rvmat",
				"rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
				"rhsusf\addons\rhsusf_rg33\data\glass.rvmat",
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
			class RHSUSF_EventHandlers
			{
				seatSwitched="if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]}";
				turnIn="([0] + _this)  call rhsusf_fnc_turretAction;";
				turnOut="([1] + _this) call rhsusf_fnc_turretAction;";
			};
		};
		transportMaxBackpacks=25;
		class TransportBackpacks
		{
			class _xx_rhsusf_falconii
			{
				backpack="rhsusf_falconii";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=10;
			};
			class _xx_rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=2;
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
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m4_carryhandle
			{
				weapon="rhs_weap_m4_carryhandle";
				count=4;
			};
		};
	};
	class rhsusf_RG33_CROWS_base: rhsusf_RG33_base
	{
		displayName="$STR_RHS_M1238A1_M153_M2_NAME";
		picture="\rhsusf\addons\rhsusf_rg33\pictures\rhs_rg33asv_armed_pic_ca.paa";
		model="\rhsusf\addons\rhsusf_rg33\M1238A1_M2";
		transportSoldier=2;
		cargoProxyIndexes[]={1,5};
		getInProxyOrder[]={1,3,4,5};
		cargoAction[]=
		{
			"RHS_4X4_CoDriver",
			"RHS_4X4_Cargo01"
		};
		threat[]={0.89999998,0.30000001,0.1};
		showNVGGunner=1;
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
		class MFD
		{
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
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				gunnerForceOptics=0;
				gunnerOutOpticsShowCursor=0;
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
				minElev=-20;
				maxElev=60;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				gunnerAction="RHS_AUV_CROWSgunner";
				gunnerInAction="RHS_AUV_CROWSgunner";
				viewGunnerInExternal=1;
				gunnerGetInAction="GetInMRAP_01_cargo";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerDoor="DoorB";
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
			class CargoTurret_01: CargoTurret_01;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
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
			class DVE_Monitor: DVE_Monitor
			{
				renderTarget="rendertarget_dve";
				class CameraView1: CameraView1;  //found empty after stripping
				BBoxes[]=
				{
					"PIP_DVE_TL",
					"PIP_DVE_TR",
					"PIP_DVE_BL",
					"PIP_DVE_BR"
				};
			};
		};
	};
	class rhsusf_RG33_CROWSMK19_base: rhsusf_RG33_CROWS_base
	{
		displayName="$STR_RHS_M1238A1_M153_MK19_NAME";
		model="\rhsusf\addons\rhsusf_rg33\M1238A1_MK19";
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
			class CargoTurret_01: CargoTurret_01;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
		};
	};
	class rhsusf_M1238A1_socom_d: rhsusf_RG33_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_socom_d.paa";
		displayName="$STR_RHS_M1238A1_NAME";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
		};
	};
	class rhsusf_M1238A1_M2_socom_d: rhsusf_RG33_CROWS_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_M2_socom_d.paa";
		displayName="$STR_RHS_M1238A1_M153_M2_NAME";
		picture="\rhsusf\addons\rhsusf_rg33\pictures\rhs_rg33asv_armed_pic_ca.paa";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
		};
	};
	class rhsusf_M1238A1_Mk19_socom_d: rhsusf_RG33_CROWSMK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_MK19_socom_d.paa";
		displayName="$STR_RHS_M1238A1_M153_MK19_NAME";
		picture="\rhsusf\addons\rhsusf_rg33\pictures\rhs_rg33asv_armed_pic_ca.paa";
		scope=2;
		accuracy=0.5;
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
		};
	};
	class rhsusf_M1238A1_socom_wd: rhsusf_M1238A1_socom_d
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_socom_wd.paa";
		scope=1;
		accuracy=0.5;
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
	};
	class rhsusf_M1238A1_M2_socom_wd: rhsusf_M1238A1_M2_socom_d
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_M2_socom_wd.paa";
		scope=1;
		accuracy=0.5;
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
	};
	class rhsusf_M1238A1_Mk19_socom_wd: rhsusf_RG33_CROWSMK19_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_MK19_socom_d.paa";
		displayName="$STR_RHS_M1238A1_M153_MK19_NAME";
		scope=1;
		accuracy=0.5;
		faction="rhs_faction_socom";
		crew="rhsusf_infantry_socom_armysf_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
	};
	class rhsusf_rg33_d: rhsusf_RG33_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_socom_d.paa";
		displayName="$STR_RG33_Name";
		scope=1;
		transportSoldier=5;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class hide_rhino: hide_rhino
			{
				initPhase=1;
			};
			class hide_spare: hide_spare
			{
				initPhase=1;
			};
			class hide_towbar: hide_towbar
			{
				initPhase=1;
			};
		};
	};
	class rhsusf_rg33_wd: rhsusf_rg33_d
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_socom_wd.paa";
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
	};
	class rhsusf_rg33_usmc_d: rhsusf_rg33_d
	{
		faction="rhs_faction_usmc_d";
		crew="rhsusf_usmc_marpat_d_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
	};
	class rhsusf_rg33_usmc_wd: rhsusf_rg33_wd
	{
		faction="rhs_faction_usmc_wd";
		crew="rhsusf_usmc_marpat_wd_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
	};
	class rhsusf_rg33_m2_d: rhsusf_RG33_CROWS_base
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_M2_socom_d.paa";
		displayName="$STR_RG33_M2_Name";
		scope=1;
		transportSoldier=5;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class hide_rhino: hide_rhino
			{
				initPhase=1;
			};
			class hide_spare: hide_spare
			{
				initPhase=1;
			};
			class hide_towbar: hide_towbar
			{
				initPhase=1;
			};
		};
	};
	class rhsusf_rg33_m2_wd: rhsusf_rg33_m2_d
	{
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1238A1_M2_socom_wd.paa";
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_rifleman";
		author="$STR_RHSUSF_AUTHOR_FULL";
		HiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
	};
	class rhsusf_rg33_m2_usmc_d: rhsusf_rg33_m2_d
	{
		faction="rhs_faction_usmc_d";
		crew="rhsusf_usmc_marpat_d_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
	};
	class rhsusf_rg33_m2_usmc_wd: rhsusf_rg33_m2_wd
	{
		faction="rhs_faction_usmc_wd";
		crew="rhsusf_usmc_marpat_wd_rifleman_m4";
		author="$STR_RHSUSF_AUTHOR_FULL";
	};
};
