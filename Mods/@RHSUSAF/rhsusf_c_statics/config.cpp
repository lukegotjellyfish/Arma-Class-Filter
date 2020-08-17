class CfgPatches
{
	class rhsusf_c_statics
	{
		units[]=
		{
			"RHS_M2StaticMG_D",
			"RHS_M2StaticMG_WD",
			"RHS_M2StaticMG_USMC_D",
			"RHS_M2StaticMG_USMC_WD",
			"RHS_M2StaticMG_MiniTripod_D",
			"RHS_M2StaticMG_MiniTripod_WD",
			"RHS_M2StaticMG_MiniTripod_USMC_D",
			"RHS_M2StaticMG_MiniTripod_USMC_WD",
			"RHS_MK19_TriPod_D",
			"RHS_MK19_TriPod_WD",
			"RHS_MK19_TriPod_USMC_D",
			"RHS_MK19_TriPod_USMC_WD",
			"RHS_TOW_TriPod_D",
			"RHS_TOW_TriPod_WD",
			"RHS_TOW_TriPod_USMC_D",
			"RHS_TOW_TriPod_USMC_WD",
			"RHS_Stinger_AA_pod_D",
			"RHS_Stinger_AA_pod_WD",
			"RHS_Stinger_AA_pod_USMC_D",
			"RHS_Stinger_AA_pod_USMC_WD",
			"RHS_M252_D",
			"RHS_M252_WD",
			"RHS_M252_USMC_D",
			"RHS_M252_USMC_WD",
			"RHS_M119_D",
			"RHS_M119_WD",
			"RHS_M2_Gun_Bag",
			"RHS_M2_Tripod_Bag",
			"RHS_M2_MiniTripod_Bag",
			"RHS_Mk19_Gun_Bag",
			"RHS_Mk19_Tripod_Bag",
			"rhs_Tow_Gun_Bag",
			"rhs_TOW_Tripod_Bag",
			"rhs_M252_Gun_Bag",
			"rhs_M252_Bipod_Bag"
		};
		weapons[]={};
		name="RHSUSF Static Weapons";
	};
};
class DefaultEventhandlers;
class Mode_SemiAuto;
class Mode_Burst;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class Functions
		{
			class fired_StingerAA
			{
				file="\rhsusf\addons\rhsusf_c_statics\scripts\rhs_stinger_aa_fired.sqf";
				description="AINET smart fuse for HE-FRAG rounds";
			};
			class fired_m119
			{
				file="\rhsusf\addons\rhsusf_c_statics\scripts\rhs_m119_fired.sqf";
				description="AINET smart fuse for HE-FRAG rounds";
			};
			class m119_fold
			{
				file="\rhsusf\addons\rhsusf_c_statics\scripts\rhs_m119_fold.sqf";
				description="fold/unfold m119 arty";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class ViewOptics;
		class EventHandlers;
		class ViewPilot;
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported=0;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
	};
	class StaticATWeapon: StaticWeapon
	{
	};
	class StaticAAWeapon: StaticWeapon
	{
	};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticMortar: StaticWeapon
	{
	};
	class rhs_m2staticmg_base: StaticMGWeapon
	{
		icon="\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_M2_CA.paa";
		sensorPosition="gunnerView";
		class Hitpoints
		{
			class HitHull
			{
				armor=1;
				passThrough=1;
				name="telo";
			};
		};
		class Damage
		{
		};
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				animationSourceStickX="MainTurret_Inertia";
				animationSourceStickY="MainGun_Inertia";
				selectionFireAnim="zasleh";
				minElev=-20;
				minTurn=-180;
				maxTurn=180;
				weapons[]=
				{
					"RHS_M2"
				};
				magazines[]=
				{
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
				};
			};
		};
		armorStructural=10;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RHS_M2_Gun_Bag",
				"RHS_M2_Tripod_Bag"
			};
		};
	};
	class RHS_M2StaticMG_MiniTripod_base: rhs_m2staticmg_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initturn=0;
				maxturn=90;
				minturn=-90;
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RHS_M2_Gun_Bag",
				"RHS_M2_MiniTripod_Bag"
			};
		};
	};
	class RHS_M2StaticMG_D: rhs_m2staticmg_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ocp_rifleman"
		};
	};
	class RHS_M2StaticMG_MiniTripod_D: RHS_M2StaticMG_MiniTripod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ocp_rifleman"
		};
	};
	class RHS_M2StaticMG_WD: rhs_m2staticmg_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ucp_rifleman"
		};
	};
	class RHS_M2StaticMG_MiniTripod_WD: RHS_M2StaticMG_MiniTripod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ucp_rifleman"
		};
	};
	class RHS_M2StaticMG_USMC_D: rhs_m2staticmg_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_d_rifleman"
		};
	};
	class RHS_M2StaticMG_MiniTripod_USMC_D: RHS_M2StaticMG_MiniTripod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_d_rifleman"
		};
	};
	class RHS_M2StaticMG_USMC_WD: rhs_m2staticmg_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_wd_rifleman"
		};
	};
	class RHS_M2StaticMG_MiniTripod_USMC_WD: RHS_M2StaticMG_MiniTripod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_wd_rifleman"
		};
	};
	class RHS_MK19_TriPod_base: StaticGrenadeLauncher
	{
		icon="\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_mk19_stat_CA.paa";
		sensorPosition="gunnerView";
		class Hitpoints
		{
			class HitHull
			{
				armor=1;
				passThrough=1;
				name="telo";
			};
		};
		class Damage
		{
		};
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-10;
				minTurn=-90;
				maxTurn=90;
				initTurn=0;
				weapons[]=
				{
					"RHS_MK19"
				};
				magazines[]=
				{
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1"
				};
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RHS_Mk19_Gun_Bag",
				"RHS_Mk19_Tripod_Bag"
			};
		};
	};
	class RHS_MK19_TriPod_D: RHS_MK19_TriPod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ocp_rifleman"
		};
	};
	class RHS_MK19_TriPod_WD: RHS_MK19_TriPod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ucp_rifleman"
		};
	};
	class RHS_MK19_TriPod_USMC_D: RHS_MK19_TriPod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_d_rifleman"
		};
	};
	class RHS_MK19_TriPod_USMC_WD: RHS_MK19_TriPod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_wd_rifleman"
		};
	};
	class RHS_TOW_TriPod_base: StaticATWeapon
	{
		icon="\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_tow_static_CA.paa";
		displayname="$STR_RHS_DN_tow_tripod";
		sensorPosition="gunnerView";
		class Hitpoints
		{
			class HitHull
			{
				armor=1;
				passThrough=1;
				name="telo";
			};
		};
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
		class Damage
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
				minElev=-10;
				minturn=-180;
				maxturn=180;
				weapons[]=
				{
					"Rhs_weap_TOW_Launcher_static"
				};
				magazines[]=
				{
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2bb"
				};
				animationSourceElevation="ObsElevation";
				maxHorizontalRotSpeed=0.25;
				maxVerticalRotSpeed=0.15000001;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal"
						};
						thermalMode[]={4};
					};
					class Narrow: Wide
					{
						initFov=0.053846199;
						minFov=0.053846199;
						maxFov=0.053846199;
					};
					class Wide_TI: Wide
					{
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
						visionMode[]=
						{
							"TI"
						};
					};
					class Narrow_TI: Wide_TI
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
				};
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RHS_Tow_Gun_Bag",
				"RHS_Tow_Tripod_Bag"
			};
		};
	};
	class RHS_TOW_TriPod_D: RHS_TOW_TriPod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ocp_rifleman"
		};
	};
	class RHS_TOW_TriPod_WD: RHS_TOW_TriPod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ucp_rifleman"
		};
	};
	class RHS_TOW_TriPod_USMC_D: RHS_TOW_TriPod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_d_rifleman"
		};
	};
	class RHS_TOW_TriPod_USMC_WD: RHS_TOW_TriPod_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_wd_rifleman"
		};
	};
	class RHS_Stinger_AA_pod_Base: StaticAAWeapon
	{
		threat[]={0.30000001,0.30000001,1};
		mapsize=2.8;
		icon="\rhsusf\addons\rhsusf_heavyweapons\Data\map_ico\icomap_FIM92_static_CA.paa";
		memoryPointMissile[]=
		{
			"Rocket_2",
			"Rocket_1"
		};
		memoryPointMissileDir[]=
		{
			"Rocket_2_End",
			"Rocket_1_End"
		};
		class Hitpoints
		{
			class HitHull
			{
				armor=1;
				passThrough=1;
				name="telo";
			};
		};
		class Damage
		{
		};
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunneropticseffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				weapons[]=
				{
					"Rhs_weap_stinger_Launcher_static"
				};
				magazines[]=
				{
					"Rhs_mag_2Rnd_stinger",
					"Rhs_mag_2Rnd_stinger",
					"Rhs_mag_2Rnd_stinger",
					"Rhs_mag_2Rnd_stinger",
					"Rhs_mag_2Rnd_stinger"
				};
				minTurn=-180;
				maxTurn=180;
				minelev=-10;
				maxelev=120;
				memorypointsgetingunner="pos_gunner";
				memorypointsgetingunnerdir="pos_gunner_dir";
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.155;
					maxanglex=30;
					maxangley=100;
					maxfov=0.155;
					minanglex=-30;
					minangley=-100;
					minfov=0.046999998;
				};
			};
		};
		class EventHandlers: EventHandlers
		{
		};
	};
	class RHS_Stinger_AA_pod_D: RHS_Stinger_AA_pod_Base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ocp_rifleman"
		};
	};
	class RHS_Stinger_AA_pod_WD: RHS_Stinger_AA_pod_Base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ucp_rifleman"
		};
	};
	class RHS_Stinger_AA_pod_USMC_D: RHS_Stinger_AA_pod_Base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_d_rifleman"
		};
	};
	class RHS_Stinger_AA_pod_USMC_WD: RHS_Stinger_AA_pod_Base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_wd_rifleman"
		};
	};
	class RHS_M252_Base: StaticMortar
	{
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		displayname="$STR_RHS_DN_m252";
		icon="\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_mortar_m251_CA.paa";
		class Hitpoints
		{
			class HitHull
			{
				armor=-200;
				minimalHit=-0.1;
				explosionShielding=0.2;
				name="hit_hull";
				passThrough=1;
				radius=0.2;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				weapons[]=
				{
					"rhs_mortar_81mm"
				};
				magazines[]=
				{
					"rhs_12Rnd_m821_HE"
				};
				elevationMode=3;
				initCamElev=0;
				minCamElev=-35;
				maxCamElev=35;
				initElev=0;
				initTurn=0;
				minElev=0.63;
				maxElev=40.830002;
				minTurn=-180;
				maxTurn=180;
				usePiP=2;
				class Hitpoints
				{
				};
			};
		};
		class Damage
		{
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		artilleryScanner=1;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RHS_M252_Gun_Bag",
				"RHS_M252_Bipod_Bag"
			};
		};
		class Attributes
		{
			class rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #1 slot [HE rounds]";
				property="rhs_ammoslot_1_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				class values
				{
					class rhs_1Rnd_m821_HE
					{
						name="He-FRAG M821";
						value="rhs_1Rnd_m821_HE";
						defaultValue="rhs_1Rnd_m821_HE";
					};
				};
			};
			class rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3']] spawn rhsusf_fnc_Eden_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #2 slot [Smoke rounds]";
				property="rhs_ammoslot_2_type";
				class values
				{
					class 8Rnd_82mm_Mo_Smoke_white
					{
						name="Smoke M819";
						value="8Rnd_82mm_Mo_Smoke_white";
						defaultValue="8Rnd_82mm_Mo_Smoke_white";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #3 slot [Illumination rounds]";
				property="rhs_ammoslot_3_type";
				class values
				{
					class 8Rnd_82mm_Mo_Flare_white
					{
						name="Illumination M853A1";
						value="8Rnd_82mm_Mo_Flare_white";
						defaultValue="8Rnd_82mm_Mo_Flare_white";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
		};
	};
	class RHS_M252_D: RHS_M252_Base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ocp_rifleman"
		};
	};
	class RHS_M252_WD: RHS_M252_Base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ucp_rifleman"
		};
	};
	class RHS_M252_USMC_D: RHS_M252_Base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_d_rifleman"
		};
	};
	class RHS_M252_USMC_WD: RHS_M252_Base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_usmc_marpat_wd_rifleman"
		};
	};
	class RHS_M119_base: StaticCannon
	{
		accuracy=0.12;
		cost=10000;
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		artilleryScanner=1;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3"
		};
		icon="\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_m119_CA.paa";
		driveOnComponent[]=
		{
			"wheel_1_1",
			"wheel_1_2"
		};
		typicalCargo[]=
		{
			"I_Soldier_F",
			"I_Soldier_F",
			"I_Soldier_F"
		};
		memoryPointsGetInCargo="pos_cargo_dir";
		memoryPointsGetInCargoDir="pos_cargo";
		class Hitpoints
		{
			class HitHull
			{
				armor=1;
				passThrough=1;
				name="telo";
			};
		};
		class Damage
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_weap_M119"
				};
				magazines[]=
				{
					"RHS_mag_m1_he_12",
					"rhs_mag_m314_ilum_4",
					"rhs_mag_m60a2_smoke_4"
				};
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				elevationMode=1;
				minElev=-9;
				maxelev=80;
				minTurn=-180;
				maxTurn=180;
				maxHorizontalRotSpeed=0.64999998;
				maxVerticalRotSpeed=0.44999999;
				class ViewOptics: ViewOptics
				{
					initFov=0.155;
					minFov=0.155;
					maxFov=0.155;
				};
			};
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=450;
		class EventHandlers: EventHandlers
		{
		};
		class Attributes
		{
			class rhs_caseDeleteTime
			{
				tooltip="Define how long spent caseses are rendred in game. Type -1 for infinitve time";
				property="rhs_caseDeleteTime";
				control="Edit";
				validate="Number";
				defaultValue="120";
				expression="_this setVariable ['rhs_caseDeleteTime',_value]";
			};
			class rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #1 slot [HE rounds]";
				property="rhs_ammoslot_1_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				class values
				{
					class RHS_mag_m1_he_12
					{
						name="He-FRAG M1";
						value="RHS_mag_m1_he_12";
						defaultValue="RHS_mag_m1_he_12";
					};
				};
			};
			class rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3']] spawn rhsusf_fnc_Eden_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #2 slot [Smoke rounds]";
				property="rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_m60a2_smoke_4
					{
						name="Smoke M60A2";
						value="rhs_mag_m60a2_smoke_4";
						defaultValue="rhs_mag_m60a2_smoke_4";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #3 slot [Illumination rounds]";
				property="rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_m314_ilum_4
					{
						name="Illumination M314";
						value="rhs_mag_m314_ilum_4";
						defaultValue="rhs_mag_m314_ilum_4";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
		};
	};
	class RHS_M119_D: RHS_M119_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ocp_rifleman"
		};
	};
	class RHS_M119_WD: RHS_M119_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ucp_rifleman"
		};
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class RHS_M2_Gun_Bag: Weapon_Bag_Base
	{
		mass=382;
		icon="\rhsusf\addons\rhsusf_heavyweapons\bags\mapIcon_backpack_CA.paa";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
		};
	};
	class RHS_M2_Tripod_Bag: Weapon_Bag_Base
	{
		mass=250;
		icon="\rhsusf\addons\rhsusf_heavyweapons\bags\mapIcon_backpack_CA.paa";
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_M2StaticMG_D";
			base[]=
			{
				"RHS_M2_Gun_Bag"
			};
		};
	};
	class RHS_M2_MiniTripod_Bag: RHS_M2_Tripod_Bag
	{
		mass=200;
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_M2StaticMG_MiniTripod_D";
			base[]=
			{
				"RHS_M2_Gun_Bag"
			};
		};
	};
	class RHS_Mk19_Gun_Bag: RHS_M2_Gun_Bag
	{
		mass=302;
	};
	class RHS_Mk19_Tripod_Bag: RHS_M2_Tripod_Bag
	{
		mass=139;
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_MK19_TriPod_D";
			base[]=
			{
				"RHS_Mk19_Gun_Bag"
			};
		};
	};
	class rhs_Tow_Gun_Bag: RHS_M2_Gun_Bag
	{
		mass=302;
	};
	class rhs_TOW_Tripod_Bag: RHS_M2_Tripod_Bag
	{
		mass=139;
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_TOW_TriPod_WD";
			base[]=
			{
				"rhs_TOW_Gun_Bag"
			};
		};
	};
	class rhs_M252_Gun_Bag: RHS_M2_Gun_Bag
	{
		mass=162;
	};
	class rhs_M252_Bipod_Bag: RHS_M2_Tripod_Bag
	{
		mass=339;
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_M252_WD";
			base[]=
			{
				"rhs_M252_Gun_Bag"
			};
		};
	};
};
