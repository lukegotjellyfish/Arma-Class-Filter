class CfgPatches
{
	class rhsusf_c_m1a2
	{
		units[]=
		{
			"rhsusf_m1a2sep1d_usarmy",
			"rhsusf_m1a2sep1wd_usarmy",
			"rhsusf_m1a2sep1tuskid_usarmy",
			"rhsusf_m1a2sep1tuskiwd_usarmy",
			"rhsusf_m1a2sep1tuskiid_usarmy",
			"rhsusf_m1a2sep1tuskiiwd_usarmy"
		};
		weapons[]={};
		name="M1A2 Tanks";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class M1_hatch
			{
				file="\rhsusf\addons\rhsusf_c_m1a2\scripts\rhs_hatch.sqf";
				description="M1 hatch handler";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class MBT_01_base_F: Tank_F
	{
		class EventHandlers;
	};
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		class AnimationSources;
		class HitPoints;
		class EventHandlers: EventHandlers
		{
			class RHSUSF_EventHandlers;
		};
		class Attributes
		{
			class ObjectTexture;
			class rhs_hideIFFPanel;
			class rhs_hideMiles;
			class rhs_decalBarrel_type;
			class rhs_decalBarrel;
			class rhs_decalPlatoon_type;
			class rhs_decalPlatoon;
			class rhs_ammoslot_1_type;
			class rhs_ammoslot_1;
			class rhs_ammoslot_2_type;
			class rhs_ammoslot_2;
			class rhs_ammoslot_3_type;
			class rhs_ammoslot_3;
		};
	};
	class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		accuracy=0.30000001;
		typicalCargo[]={};
		side=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed=1.3;
						maxVerticalRotSpeed=0.47999999;
						stabilizedInAxes=3;
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							1,
							1,
							30
						};
						minElev=-5;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						LodTurnedOut=1200;
						weapons[]=
						{
							"rhsusf_weap_M250"
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal"
							};
							thermalMode[]={2,3};
						};
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide
							{
								initFov=0.23333301;
								minFov=0.23333301;
								maxFov=0.23333301;
								hitpoint="Hit_Optic_CITV";
							};
							class Medium: Medium
							{
								initFov=0.116667;
								minFov=0.116667;
								maxFov=0.116667;
								hitpoint="Hit_Optic_CITV";
							};
							class Medium_TI: Medium
							{
								initFov=0.053846199;
								minFov=0.053846199;
								maxFov=0.053846199;
								visionMode[]=
								{
									"Ti"
								};
							};
							class Medium2_TI: Medium_TI
							{
								initFov=0.028000001;
								minFov=0.028000001;
								maxFov=0.028000001;
							};
							class Narrow_TI: Medium_TI
							{
								initFov=0.014;
								minFov=0.014;
								maxFov=0.014;
							};
						};
						startEngine=0;
						class HitPoints
						{
							class HitTurretCom
							{
								armor=0.30000001;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isTurret=1;
							};
							class HitGunCom
							{
								armor=0.30000001;
								material=-1;
								name="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isGun=1;
							};
							class Hit_Optic_CITV
							{
								armor=-40;
								explosionShielding=0;
								name="";
								armorComponent="Hit_Optic_CITV";
								passThrough=0;
							};
						};
						selectionFireAnim="";
					};
					class Loader: CommanderOptics
					{
						animationSourceHatch="HatchGunner";
						weapons[]=
						{
							"rhs_weap_m240_abrams"
						};
						minTurn=48;
						maxTurn=140;
						isPersonTurret=0;
						lockWhenDriverOut=0;
						commanding=-3;
						primaryObserver=0;
						soundAttenuationTurret="HeliAttenuationGunner";
						stabilizedInAxes=0;
						proxyindex=2;
						memoryPointGun="usti hlavne5";
						selectionFireAnim="zasleh5";
						class HitPoints
						{
							class HitTurretLoader
							{
								armor=0.30000001;
								material=-1;
								name="LoaderTurret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isTurret=1;
							};
							class HitGunLoader
							{
								armor=0.30000001;
								material=-1;
								name="LoaderGun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isGun=1;
							};
							class Hit_Optic_LoaderPeriscope
							{
								armor=-40;
								explosionShielding=0;
								name="";
								armorComponent="Hit_Optic_LoaderPeriscope";
								passThrough=0;
							};
						};
					};
					class CommanderMG: CommanderOptics
					{
						proxyindex=3;
						dontCreateAi=1;
						cantCreateAI=1;
						isPersonTurret=0;
						stabilizedInAxes=0;
						canHideGunner=0;
						soundAttenuationTurret="HeliAttenuationGunner";
						minElev=-8;
						maxElev=30;
						minTurn=-61;
						maxTurn=61;
						weapons[]=
						{
							"RHS_M2_Abrams_Commander"
						};
						selectionFireAnim="zasleh3";
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide
							{
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.34999999;
								minFov=0.34999999;
								maxFov=0.34999999;
							};
						};
						class HitPoints
						{
							class HitTurretComM2
							{
								armor=0.30000001;
								material=-1;
								name="com_m2_turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isTurret=1;
							};
							class HitGunComM2
							{
								armor=0.30000001;
								material=-1;
								name="com_m2_gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isGun=1;
							};
						};
					};
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zaslehCoax";
				weapons[]=
				{
					"rhs_weap_m256",
					"rhs_weap_m240_abrams_coax",
					"rhs_weap_fcs"
				};
				minElev=-10;
				maxElev=22;
				initElev=5;
				maxhorizontalrotspeed=0.69999999;
				maxverticalrotspeed=0.44;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal"
						};
						thermalMode[]={2,3};
						hitpoint="Hit_Optic_GPS";
					};
					class Medium: Wide
					{
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Wide_TI: Wide
					{
						visionMode[]=
						{
							"Ti"
						};
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						hitpoint="Hit_Optic_GPS_TI";
					};
					class Wide2_TI: Wide_TI
					{
						initFov=0.116667;
						minFov=0.116667;
						maxFov=0.116667;
					};
					class Medium_TI: Wide_TI
					{
						initFov=0.053846199;
						minFov=0.053846199;
						maxFov=0.053846199;
					};
					class Medium2_TI: Wide_TI
					{
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
					class Narrow_TI: Wide_TI
					{
						initFov=0.014;
						minFov=0.014;
						maxFov=0.014;
					};
				};
				forceHideGunner=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.2;
						material=-1;
						name="vez";
						passThrough=0;
						minimalHit=0.34;
						explosionShielding=0.001;
						radius=0.18000001;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="zbran";
						armorComponent="Hit_Gun";
						passThrough=0;
						minimalHit=0.15000001;
						explosionShielding=0;
						radius=0.12;
					};
					class Hit_GPS_HeadMirror
					{
						armor=-40;
						explosionShielding=0;
						name="";
						armorComponent="Hit_HeadMirror";
						passThrough=0;
					};
					class Hit_GPS_Optical: Hit_GPS_HeadMirror
					{
						armorComponent="Hit_Optic_GPS";
					};
					class Hit_GPS_TIS: Hit_GPS_HeadMirror
					{
						armorComponent="Hit_Optic_GPS_TI";
					};
					class Hit_Optic_GPS: Hit_GPS_Optical
					{
						armorComponent="-";
						depends="Hit_GPS_HeadMirror max Hit_GPS_Optical";
					};
					class Hit_Optic_GPS_TI: Hit_GPS_TIS
					{
						armorComponent="-";
						depends="Hit_GPS_HeadMirror max Hit_GPS_TIS";
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"",
			"",
			"",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"i3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
		};
		class textureSources
		{
			class woodland
			{
			};
			class desert: woodland
			{
			};
		};
		class Damage
		{
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class EventHandlers: EventHandlers
		{
		};
	};
	class rhsusf_m1a2sep1d_usarmy: rhsusf_m1a2tank_base
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_01_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa"
		};
	};
	class rhsusf_m1a2sep1wd_usarmy: rhsusf_m1a2tank_base
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
	};
	class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
					class Loader: Loader
					{
						maxTurn=117;
					};
					class CommanderMG: CommanderMG
					{
						maxTurn=2;
					};
				};
				weapons[]=
				{
					"rhs_weap_m256",
					"RHS_M2_Abrams_Gunner",
					"rhs_weap_m240_abrams_coax",
					"rhs_weap_fcs"
				};
				armorLights=0.0099999998;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"i3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_d_01_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_d_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_d_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa"
		};
		class textureSources
		{
			class woodland
			{
			};
			class desert: woodland
			{
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_2_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_3_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_4_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_5_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_6_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_7_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_8_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_9_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_10_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_11_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_12_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_13_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_14_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_15_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_16_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_17_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_18_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_19_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_20_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_21_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_22_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_23_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_25_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e27";
				armorComponent="e27";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e28";
				armorComponent="e28";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_29_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e29";
				armorComponent="e29";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_30_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e30";
				armorComponent="e30";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_31_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e31";
				armorComponent="e31";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_32_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_33_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e33";
				armorComponent="e33";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_34_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e34";
				armorComponent="e34";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class SLAT_1_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="SLAT_1";
				armorComponent="SLAT_1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
			};
		};
	};
	class rhsusf_m1a2sep1tuskiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_01_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"
		};
	};
	class rhsusf_m1a2sep1tuskiiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy
	{
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"
		};
		rhs_duke_type="rhsusf_duke_m1a2";
		class HitPoints: HitPoints
		{
			class HitDuke1
			{
				armor=0.75;
				material=-1;
				name="duke1";
				passThrough=0;
				MinimalHit=0.050000001;
				explosionShielding=0.0099999998;
				radius=0.15000001;
			};
			class HitDuke2: HitDuke1
			{
				name="duke2";
			};
			class era_1_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_2_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_3_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_4_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_5_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_6_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_7_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_8_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_9_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_10_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_11_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_12_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_13_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_14_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_15_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_16_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_17_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_18_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_19_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_20_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_21_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_22_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_23_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_25_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e27";
				armorComponent="e27";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e28";
				armorComponent="e28";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_29_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e29";
				armorComponent="e29";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_30_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e30";
				armorComponent="e30";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_31_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e31";
				armorComponent="e31";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_32_hitpoint
			{
				simulation="RHS_ERA_Arat2_Mixed";
				armor=-150;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_33_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e33";
				armorComponent="e33";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_34_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e34";
				armorComponent="e34";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_35_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e35";
				armorComponent="e35";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_36_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e36";
				armorComponent="e36";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_37_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e37";
				armorComponent="e37";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_38_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e38";
				armorComponent="e38";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_39_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e39";
				armorComponent="e39";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_40_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e40";
				armorComponent="e40";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_41_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e41";
				armorComponent="e41";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_42_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e42";
				armorComponent="e42";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_43_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e43";
				armorComponent="e43";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_44_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e44";
				armorComponent="e44";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_45_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e45";
				armorComponent="e45";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_46_hitpoint
			{
				simulation="RHS_ERA_Arat2";
				armor=-150;
				material=-1;
				name="e46";
				armorComponent="e46";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"duke_tex",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2",
			"i3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_01_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
		class textureSources
		{
			class woodland
			{
			};
			class desert: woodland
			{
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"rhsusf_weap_M250",
							"rhsusf_weap_duke"
						};
					};
					class Loader: Loader
					{
					};
					class CommanderMG: CommanderMG
					{
					};
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_hideIFFPanel: rhs_hideIFFPanel
			{
			};
			class rhs_hideMiles: rhs_hideMiles
			{
			};
			class rhs_hideDUKE: rhs_hideMiles
			{
				property="rhs_hideDUKE";
				expression="_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[0,0]]}";
			};
			class rhs_decalBarrel_type: rhs_decalBarrel_type
			{
			};
			class rhs_decalBarrel: rhs_decalBarrel
			{
			};
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type
			{
			};
			class rhs_decalPlatoon: rhs_decalPlatoon
			{
			};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
			};
			class rhs_ammoslot_1: rhs_ammoslot_1
			{
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
			};
			class rhs_ammoslot_2: rhs_ammoslot_2
			{
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
			};
			class rhs_ammoslot_3: rhs_ammoslot_3
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class rhs_duke
			{
				handleDamage="_this call rhs_fnc_duke_destruction";
			};
		};
	};
	class rhsusf_m1a2sep1tuskiid_usarmy: rhsusf_m1a2sep1tuskiiwd_usarmy
	{
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_d_01_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_d_02_co.paa",
			"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
			"rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_d_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
		};
		rhs_decalParameters[]=
		{
			"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']",
			"['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"
		};
	};
};
