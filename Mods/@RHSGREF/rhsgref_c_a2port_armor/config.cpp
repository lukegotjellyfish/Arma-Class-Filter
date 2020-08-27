class CfgPatches
{
	class rhsgref_c_a2port_armor
	{
		units[]=
		{
			"rhsgref_BRDM2",
			"rhsgref_BRDM2_ATGM",
			"rhsgref_BRDM2UM",
			"rhsgref_BRDM2_HQ",
			"rhsgref_BRDM2_b",
			"rhsgref_BRDM2_ATGM_b",
			"rhsgref_BRDM2UM_b",
			"rhsgref_BRDM2_HQ_b",
			"rhsgref_BRDM2_ins",
			"rhsgref_BRDM2_ATGM_ins",
			"rhsgref_BRDM2UM_ins",
			"rhsgref_BRDM2_HQ_ins",
			"rhsgref_BRDM2_ins_g",
			"rhsgref_BRDM2_ATGM_ins_g",
			"rhsgref_BRDM2UM_ins_g",
			"rhsgref_BRDM2_HQ_ins_g",
			"rhsgref_BRDM2_msv",
			"rhsgref_BRDM2_ATGM_msv",
			"rhsgref_BRDM2UM_msv",
			"rhsgref_BRDM2_HQ_msv",
			"rhsgref_BRDM2_vdv",
			"rhsgref_BRDM2_ATGM_vdv",
			"rhsgref_BRDM2UM_vdv",
			"rhsgref_BRDM2_HQ_vdv",
			"rhsgref_BRDM2_vmf",
			"rhsgref_BRDM2_ATGM_vmf",
			"rhsgref_BRDM2UM_vmf",
			"rhsgref_BRDM2_HQ_vmf"
		};
		weapons[]={};
		requiredVersion=1.3200001;
		requiredAddons[]=
		{
			"rhsgref_main",
			"rhsgref_c_troops"
		};
		name="BRDM-2";
		author="$STR_RHS_AUTHOR_FULL";
		url="http://www.rhsmods.org/";
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		rhsgref_BRDM2_Driver="rhsgref_BRDM2_Driver";
		rhsgref_BRDM2_Gunner="rhsgref_BRDM2_Gunner";
		rhsgref_BRDM2_Cargo01="rhsgref_BRDM2_Cargo01";
		rhsgref_BRDM2_Cargo02="rhsgref_BRDM2_Cargo02";
		rhsgref_GAZ_Gunner="rhsgref_GAZ_Gunner";
		rhsgref_GAZ_GunnerIN="rhsgref_GAZ_GunnerIN";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class rhsgref_KIA_BRDM2_Driver: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped=0;
			terminal=1;
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_BRDM2_Driver.rtm";
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class rhsgref_BRDM2_Driver: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_Driver.rtm";
			interpolateTo[]=
			{
				"rhsgref_KIA_BRDM2_Driver",
				1
			};
		};
		class rhsgref_KIA_BRDM2_Gunner: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped=0;
			terminal=1;
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_BRDM2_Gunner.rtm";
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class rhsgref_BRDM2_Gunner: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_Gunner.rtm";
			interpolateTo[]=
			{
				"rhsgref_KIA_BRDM2_Gunner",
				1
			};
		};
		class rhsgref_KIA_BRDM2_Cargo01: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped=0;
			terminal=1;
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_BRDM2_Cargo01.rtm";
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class rhsgref_BRDM2_Cargo01: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_Cargo01.rtm";
			interpolateTo[]=
			{
				"rhsgref_KIA_BRDM2_Cargo01",
				1
			};
		};
		class rhsgref_KIA_BRDM2_Cargo02: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped=0;
			terminal=1;
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_BRDM2_Cargo02.rtm";
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class rhsgref_BRDM2_Cargo02: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_Cargo02.rtm";
			interpolateTo[]=
			{
				"rhsgref_KIA_BRDM2_Cargo02",
				1
			};
		};
		class rhsgref_KIA_GAZ_Gunner: DefaultDie
		{
			actions="DeadActions";
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\KIA_GAZ_Gunner.rtm";
			speed=0.5;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class rhsgref_GAZ_Gunner: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\Stryker_GunnerOut.rtm";
			interpolateTo[]=
			{
				"rhsgref_KIA_GAZ_Gunner",
				1
			};
		};
		class rhsgref_GAZ_GunnerIN: Crew
		{
			file="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\Anim\BRDM2_HQ_GunnerIn.rtm";
			interpolateTo[]=
			{
				"rhsgref_KIA_GAZ_Gunner",
				1
			};
		};
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class Functions
		{
			class brdm2_atgmReload
			{
				file="\rhsgref\addons\rhsgref_c_a2port_armor\scripts\brdm2_atgmReload.sqf";
				description="BRDM-2 ATGM reload script";
			};
			class brdm2_atgmFire
			{
				file="\rhsgref\addons\rhsgref_c_a2port_armor\scripts\brdm2_atgmFire.sqf";
				description="ATGM offset fix";
			};
			class brdm2_atgmSafe
			{
				file="\rhsgref\addons\rhsgref_c_a2port_armor\scripts\brdm2_atgmSafe.sqf";
				description="BRDM-2 ATGM safe mode script";
			};
		};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CommanderOptics;
		class Components;
	};
	class rhsgref_BRDM2: Wheeled_APC_F
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2.paa";
		dlc="RHS_GREF";
		displayName="BRDM-2";
		author="RHS (A2 port)";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'CDF']"
		};
		scope=2;
		scopeCurator=2;
		vehicleClass="Armored";
		editorSubcategory="rhs_EdSubcat_mrap";
		model="\rhsgref\addons\rhsgref_a2port_armor\brdm2\BRDM2.p3d";
		picture="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_CA.paa";
		Icon="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\icomap_brdm_CA.paa";
		mapSize=6;
		side=2;
		faction="rhsgref_faction_cdf_ground";
		crew="rhsgref_cdf_reg_crew";
		typicalCargo[]=
		{
			"rhsgref_cdf_reg_crew"
		};
		crewVulnerable=0;
		crewCrashProtection=0.15000001;
		crewExplosionProtection=0.995;
		transportSoldier=2;
		cargoProxyIndexes[]={1,2};
		getInProxyOrder[]={1,2,7,8,9,10,11,12};
		transportAmmo=0;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		memoryPointDriverOptics="driverview";
		driverDoor="hatchD";
		transportMaxMagazines=100;
		transportMaxWeapons=10;
		selectionDashboard="podsvit pristroju";
		viewDriverInExternal=1;
		viewGunnerInExternal=1;
		viewCargoInExternal=1;
		radarType=0;
		commanderCanSee="4+8+2+32";
		driverCanSee="4+8+2+32";
		gunnerCanSee="4+8+2+32";
		enableGPS=0;
		incomingMissileDetectionSystem=0;
		cost=100000;
		threat[]={0.5,0.5,0.1};
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		damageResistance=0.024089999;
		driveOnComponent[]=
		{
			"belly_w1",
			"belly_w2"
		};
		driverAction="rhsgref_BRDM2_Driver";
		driverInAction="rhsgref_BRDM2_Driver";
		cargoAction[]=
		{
			"rhsgref_BRDM2_Cargo02"
		};
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInHigh"
		};
		cargoGetOutAction[]=
		{
			"GetOutHigh"
		};
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		hideProxyInCombat=0;
		forceHideDriver=0;
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N6_AK
			{
				magazine="rhs_30Rnd_545x39_7N6_AK";
				count=30;
			};
			class _xx_rhs_10Rnd_762x54mmR_7N1
			{
				magazine="rhs_10Rnd_762x54mmR_7N1";
				count=10;
			};
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=3;
			};
			class _xx_rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=2;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine="rhs_mag_rgd5";
				count=9;
			};
			class _xx_rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=20;
			};
			class _xx_rhs_vg40op_white
			{
				magazine="rhs_vg40op_white";
				count=5;
			};
			class _xx_rhs_GRD40_white
			{
				magazine="rhs_GRD40_white";
				count=5;
			};
			class _xx_rhs_mag_9k38_rocket
			{
				magazine="rhs_mag_9k38_rocket";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_igla
			{
				weapon="rhs_weap_igla";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_rhs_sidor
			{
				backpack="rhs_sidor";
				count=3;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CommanderOptics: NewTurret
			{
				usePiP=1;
				gunnerDoor="hatchCommander";
				gunnerName="$STR_POSITION_COMMANDER";
				body="com_optics";
				gun="com_light";
				viewGunnerInExternal=1;
				weapons[]={};
				magazines[]={};
				animationSourceHatch="";
				animationSourceBody="obsTurret";
				animationSourceGun="obsGun";
				memoryPointGunnerOptics="commanderview";
				memoryPointGunnerOutOptics="commander_out_view";
				nightVision=1;
				proxyType="CPCommander";
				proxyIndex=1;
				lockWhenDriverOut=0;
				primaryGunner=0;
				primaryObserver=1;
				gunBeg="Mgun_end";
				gunEnd="Mgun_start";
				gunnerAction="rhsgref_BRDM2_Cargo01";
				gunnerInAction="rhsgref_BRDM2_Cargo01";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				stabilizedInAxes="StabilizedInAxesBoth";
				minElev=-4;
				maxElev=12;
				initElev=0;
				minTurn=-75;
				maxTurn=75;
				initTurn=0;
				gunnerOutForceOptics=0;
				gunnerForceoptics=0;
				gunnerOutOpticsModel="";
				gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tpku2b.p3d";
				soundServo[]={};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				startEngine=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					opticsZoomMin=0.14;
					opticsZoomMax=0.14;
					initFov=0.14;
					minFov=0.14;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tpku2b";
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_TPKU2B";
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
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
					class VehicleSystemsDisplayManagerComponentRight
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
				class Hitpoints;  //found empty after stripping
			};
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				body="mainTurret";
				gun="mainGun";
				memoryPointGun="machinegun";
				selectionFireAnim="zasleh3";
				gunnerLeftHandAnimName="handle_Elev2";
				gunnerRightHandAnimName="handle_Horiz2";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"rhs_weap_kpvt",
					"rhs_weap_pkt_btr"
				};
				magazines[]=
				{
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250"
				};
				soundServoVertical[]=
				{
					"rhsafrf\addons\rhs_btr70\sounds\hand_turret_servo_elev",
					1.1412539,
					1,
					30
				};
				gunnerAction="rhsgref_BRDM2_Gunner";
				gunnerInAction="rhsgref_BRDM2_Gunner";
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=0;
				castGunnerShadow=0;
				stabilizedInAxes=0;
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				minElev=-5;
				maxElev=30;
				maxHorizontalRotSpeed=0.64999998;
				maxVerticalRotSpeed=0.34999999;
				primaryGunner=1;
				startEngine=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				usePiP=2;
				canUseScanners=0;
				allowTabLock=0;
				class ViewOptics: RCWSOptics;  //found empty after stripping
				class ViewGunner: ViewOptics
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
					gunnerOpticsEffect[]=
					{
						"TankGunnerOptics1",
						"OpticsBlur2",
						"OpticsCHAbera2"
					};
					visionMode[]=
					{
						"Normal"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
						initFov=0.26923099;
						maxFov=0.26923099;
						minFov=0.26923099;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_PP61AM";
					};
					class Night: Wide
					{
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am_night";
					};
					class RearView: Wide
					{
						camPos="view_turret_rear";
						camDir="view_turret_rear_dir";
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
						initFov=0.69999999;
						maxFov=0.69999999;
						minFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_Turret_Rear";
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armorComponent="Hit_Turret";
						armor=-55;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=1;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.25;
					};
					class HitGun
					{
						armorComponent="Hit_Gun";
						armor=-55;
						material=-1;
						name="zbran";
						visual="zbran";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
					};
				};
				class Turrets;  //found empty after stripping
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
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
					class VehicleSystemsDisplayManagerComponentRight
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
			class CargoTurret_01: CargoTurret
			{
				gunnerName="Passenger (Right)";
				gunnerCompartments="Compartment3";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				memoryPointGunnerOptics="";
				LODTurnedIn=0;
				LODTurnedOut=0;
				LODOpticsIn=0;
				LODOpticsOut=0;
				CanHideGunner=0;
				gunnerAction="passenger_inside_1";
				memoryPointsGetInGunner="cargo7";
				memoryPointsGetInGunnerDir="cargo7_dir";
				maxElev=45;
				minElev=-35;
				maxTurn=61;
				minTurn=-65;
				proxyIndex=7;
				class Hitpoints;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_1";
				gunnerName="Passenger (Left)";
				memoryPointsGetInGunner="cargo8";
				memoryPointsGetInGunnerDir="cargo8_dir";
				proxyIndex=8;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_flatground_2";
				gunnerName="Passenger (Left Rear)";
				memoryPointsGetInGunner="cargo9";
				memoryPointsGetInGunnerDir="cargo9_dir";
				proxyIndex=9;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction="passenger_flatground_3";
				gunnerName="Passenger (Rear)";
				memoryPointsGetInGunner="cargo10";
				memoryPointsGetInGunnerDir="cargo10_dir";
				proxyIndex=10;
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerAction="passenger_flatground_4";
				gunnerName="Passenger (Right Rear)";
				memoryPointsGetInGunner="cargo11";
				memoryPointsGetInGunnerDir="cargo11_dir";
				proxyIndex=11;
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerAction="passenger_boat_3";
				gunnerName="Passenger (Center)";
				memoryPointsGetInGunner="cargo12";
				memoryPointsGetInGunnerDir="cargo12_dir";
				maxElev=45;
				minElev=-15;
				maxTurn=81;
				minTurn=-25;
				proxyIndex=12;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Unhide_vis_optic_d_periscope1
			{
				source="hit";
				hitpoint="Hit_optic_periscope1";
			};
			class Unhide_vis_optic_d_periscope2
			{
				source="hit";
				hitpoint="Hit_optic_periscope2";
			};
			class Unhide_vis_optic_d_periscope3
			{
				source="hit";
				hitpoint="Hit_optic_periscope3";
			};
			class Unhide_vis_optic_d_periscope4
			{
				source="hit";
				hitpoint="Hit_optic_periscope4";
			};
			class Unhide_vis_optic_d_periscope5
			{
				source="hit";
				hitpoint="Hit_optic_periscope5";
			};
			class Unhide_vis_optic_d_periscope6
			{
				source="hit";
				hitpoint="Hit_optic_periscope6";
			};
			class Unhide_vis_optic_d_periscope7
			{
				source="hit";
				hitpoint="Hit_optic_periscope7";
			};
			class Unhide_vis_optic_d_periscope8
			{
				source="hit";
				hitpoint="Hit_optic_periscope8";
			};
			class Unhide_vis_optic_d_periscope9
			{
				source="hit";
				hitpoint="Hit_optic_periscope9";
			};
			class Unhide_vis_optic_d_periscope10
			{
				source="hit";
				hitpoint="Hit_optic_periscope10";
			};
			class Unhide_vis_optic_d_periscope11
			{
				source="hit";
				hitpoint="Hit_optic_periscope11";
			};
			class Unhide_vis_optic_d_periscope12
			{
				source="hit";
				hitpoint="Hit_optic_periscope12";
			};
			class Unhide_vis_optic_d_periscope13
			{
				source="hit";
				hitpoint="Hit_optic_periscope13";
			};
			class Unhide_vis_optic_d_periscope14
			{
				source="hit";
				hitpoint="Hit_optic_periscope14";
			};
			class Unhide_vis_optic_d_periscope15
			{
				source="hit";
				hitpoint="Hit_optic_periscope15";
			};
			class Unhide_vis_optic_d_PP61AM
			{
				source="hit";
				hitpoint="Hit_Optic_PP61AM";
			};
			class Unhide_vis_optic_d_TPKU2B
			{
				source="hit";
				hitpoint="Hit_Optic_TPKU2B";
			};
			class Unhide_vis_optic_d_9Sh119
			{
				source="hit";
				hitpoint="Hit_Optic_9Sh119";
			};
			class Unhide_vis_optic_d_turret_rear
			{
				source="hit";
				hitpoint="Hit_Optic_turret_rear";
			};
			class Unhide_vis_optic_d_driver
			{
				source="hit";
				hitpoint="Hit_Optic_driver";
			};
			class recoil_source
			{
				source="reload";
				weapon="rhs_weap_kpvt";
			};
			class muzzle_rot_hmg: recoil_source
			{
				source="ammorandom";
			};
			class muzzle_rot_mg: muzzle_rot_hmg
			{
				weapon="rhs_weap_pkt_btr";
			};
			class big_numbers_hide
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class small_numbers_hide: big_numbers_hide;  //found empty after stripping
			class driverViewHatch
			{
				source="door";
				animPeriod=2;
				initPhase=1;
			};
			class commanderViewHatch: driverViewHatch;  //found empty after stripping
			class hatchD: driverViewHatch
			{
				animPeriod=2.0999999;
				initPhase=0;
			};
			class hatchCommander: hatchD;  //found empty after stripping
			class HitGlass1
			{
				source="Hit";
				hitpoint="Hit_Glass1";
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="Hit_Glass2";
			};
		};
		class UserActions
		{
			class openDriverViewHatch
			{
				displayName="$STR_RHS_BTR70_OpenShield";
				position="";
				radius=5;
				hideWindow=0;
				condition="((call rhs_fnc_findPlayer) == driver this) && (this animationPhase 'driverViewHatch' < 0.5)";
				statement="this animateDoor ['driverViewHatch',1];";
				onlyForPlayer=1;
			};
			class closeDriverViewHatch: openDriverViewHatch
			{
				displayName="$STR_RHS_BTR70_CloseShield";
				condition="((call rhs_fnc_findPlayer) == driver this) && (this animationPhase 'driverViewHatch' > 0.5)";
				statement="this animateDoor ['driverViewHatch',0];";
			};
			class openCommanderViewHatch: openDriverViewHatch
			{
				condition="((this turretUnit [0]) == (call rhs_fnc_findPlayer)) && (this animationPhase 'commanderViewHatch' < 0.5)";
				statement="this animateDoor ['commanderViewHatch',1];";
			};
			class closeCommanderViewHatch: closeDriverViewHatch
			{
				condition="((this turretUnit [0]) == (call rhs_fnc_findPlayer)) && (this animationPhase 'commanderViewHatch' > 0.5)";
				statement="this animateDoor ['commanderViewHatch',0];";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\periscope.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\periscope_int_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\periscope_int_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\auta_skla_in.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_01.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_01_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_destruct.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_destruct.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectMRAP_03";
			};
			class Exhaust2
			{
				position="vyfuk start 2";
				direction="vyfuk konec 2";
				effect="ExhaustEffectMRAP_03";
			};
		};
		dustFrontLeftPos="stopa PLL";
		dustFrontRightPos="stopa PPP";
		dustBackLeftPos="stopa ZLL";
		dustBackRightPos="stopa ZPP";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3"
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="L svetlo";
				direction="Konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
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
				position="P svetlo";
				direction="Konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Right2: Right
			{
				position="P svetlo";
				useFlare=1;
			};
			class Left2: Left
			{
				position="L svetlo";
				useFlare=1;
			};
		};
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		numberPhysicalWheels=8;
		terrainCoef=1.2;
		turnCoef=3;
		simulation="carx";
		dampersBumpCoef=3;
		maxSpeed=100;
		fuelCapacity=60;
		RHS_fuelCapacity=280;
		wheelCircumference=3.55;
		brakeIdleSpeed=1.78;
		canFloat=1;
		waterSpeedFactor=0.25;
		waterResistanceCoef=0.51499999;
		waterLeakiness=1.5;
		engineShiftY=0.69999999;
		engineShiftZ=3;
		maxFordingDepth=1.2;
		waterResistance=0.5;
		waterAngularDampingCoef=3;
		waterLinearDampingCoefX=2;
		waterLinearDampingCoefY=2;
		waterPPInVehicle=0;
		rudderForceCoef=3.5;
		rudderForceCoefAtMaxSpeed=0.30000001;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.1819999,
				"N",
				0,
				"D1",
				4.1820002,
				"D2",
				2.3180001,
				"D3",
				1.85,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				4.4489999
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				25
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.1;
		latency=1.4;
		differentialType="all_open";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=30;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.4;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0.19565199},
			{0.166667,0.576087},
			{0.3125,0.69565201},
			{0.41666701,0.826087},
			{0.52083302,0.91304302},
			{0.625,0.97826099},
			{0.83333302,1},
			{1.16958,0}
		};
		enginePower=220;
		engineMOI=1.3;
		peakTorque=910;
		minOmega=35;
		maxOmega=251.33;
		idleRPM=450;
		redRPM=2400;
		thrustDelay=0.5;
		engineLosses=14;
		engineBrakeCoef=0.69999999;
		antiRollbarForceCoef=5;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=5;
		antiRollbarSpeedMax=30;
		accelAidForceSpd=2.8;
		accelAidForceCoef=2;
		accelAidForceYOffset=-1.4;
		class Wheels
		{
			class LF
			{
				side="left";
				boneName="wheel_1_1_damper";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				suspTravelDirection[]={0,-1,0};
				steering=1;
				width=0.31999999;
				mass=150;
				MOI=13;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				maxCompression=0.15000001;
				maxDroop=0.25;
				sprungMass=-1;
				springStrength=96250;
				springDamperRate=6889;
				longitudinalStiffnessPerUnitGravity=3850;
				latStiffX=15;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=300000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=300000;
			};
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext",
					0.31622776,
					1,
					100
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext",
					0.39810717,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext",
					0.50118721,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext",
					0.63095737,
					1,
					250
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext_exhaust",
					0.56234133,
					1,
					150
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext_exhaust",
					0.63095737,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext_exhaust",
					0.70794576,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext_exhaust",
					1.1220185,
					1,
					300
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int",
					0.2238721,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int",
					0.25118864,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int",
					0.44668359,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int_exhaust",
					0.39810717,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int_exhaust",
					0.50118721,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int_exhaust",
					0.63095737,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int_exhaust",
					0.89125091,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.5848932,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class ViewPilot
		{
			initAngleX=10;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
		};
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
			};
		};
		class DriverOpticsOut
		{
			class OpticView: ViewPilot
			{
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
			};
		};
		armor=120;
		armorStructural=7;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=-60;
				explosionShielding=1;
				radius=0.30000001;
				armorComponent="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=-60;
				explosionShielding=1;
				radius=0.30000001;
				armorComponent="wheel_1_2_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=-60;
				explosionShielding=1;
				radius=0.30000001;
				armorComponent="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=-60;
				explosionShielding=1;
				radius=0.30000001;
				armorComponent="wheel_2_2_hide";
			};
			class Hit_Glass1
			{
				armor=-40;
				explosionShielding=0.1;
				name="Hit_Glass1";
				visual="Glass1";
				armorComponent="Hit_Glass1";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Glass2
			{
				armor=-40;
				explosionShielding=0.1;
				name="Hit_Glass2";
				visual="Glass2";
				armorComponent="Hit_Glass2";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_PP61AM
			{
				armor=-20;
				explosionShielding=0.2;
				name="Hit_GunnerOptics";
				visual="vis_optic_PP61AM";
				armorComponent="Hit_GunnerOptics";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Turret_Rear
			{
				armor=-20;
				explosionShielding=0.2;
				name="Hit_GunnerOptics";
				visual="vis_optic_turret_rear";
				armorComponent="Hit_TurretRear";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_TPKU2B
			{
				armor=-20;
				explosionShielding=0.2;
				name="Hit_CommanderOptics";
				visual="vis_optic_TPKU2B";
				armorComponent="Hit_CommanderOptics";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Driver
			{
				armor=-20;
				explosionShielding=0.2;
				name="Hit_DriverOptics";
				visual="vis_optic_driver";
				armorComponent="Hit_DriverOptics";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope1
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope1";
				visual="vis_optic_periscope1";
				armorComponent="Hit_Periscope1";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope2
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope2";
				visual="vis_optic_periscope2";
				armorComponent="Hit_Periscope2";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope3
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope3";
				visual="vis_optic_periscope3";
				armorComponent="Hit_Periscope3";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope4
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope4";
				visual="vis_optic_periscope4";
				armorComponent="Hit_Periscope4";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope5
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope5";
				visual="vis_optic_periscope5";
				armorComponent="Hit_Periscope5";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope6
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope6";
				visual="vis_optic_periscope6";
				armorComponent="Hit_Periscope6";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope7
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope7";
				visual="vis_optic_periscope7";
				armorComponent="Hit_Periscope7";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope8
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope8";
				visual="vis_optic_periscope8";
				armorComponent="Hit_Periscope8";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope9
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope9";
				visual="vis_optic_periscope9";
				armorComponent="Hit_Periscope9";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope10
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope10";
				visual="vis_optic_periscope10";
				armorComponent="Hit_Periscope10";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope11
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope11";
				visual="vis_optic_periscope11";
				armorComponent="Hit_Periscope11";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope12
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope12";
				visual="vis_optic_periscope12";
				armorComponent="Hit_Periscope12";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope13
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope13";
				visual="vis_optic_periscope13";
				armorComponent="Hit_Periscope13";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope14
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope14";
				visual="vis_optic_periscope14";
				armorComponent="Hit_Periscope14";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope15
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope15";
				visual="vis_optic_periscope15";
				armorComponent="Hit_Periscope15";
				passThrough=0;
				radius=0.050000001;
			};
			class HitFuel_Left
			{
				armorComponent="Hit_Fuel_Left";
				armor=-30;
				material=-1;
				name="Hit_Fuel_Left";
				visual="-";
				passThrough=0.2;
				minimalHit=0.25;
				explosionShielding=0.60000002;
				radius=0.25;
			};
			class HitFuel_Right: HitFuel_Left
			{
				armorComponent="Hit_Fuel_Right";
				name="Hit_Fuel_Right";
			};
			class HitFuel
			{
				armor=999;
				material=-1;
				name="palivo";
				visual="-";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0.60000002;
				radius=0.25;
				depends="(HitFuel_Left + HitFuel_Right)*0.5";
			};
			class HitEngine
			{
				armorComponent="Hit_Engine";
				armor=-70;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0.2;
				minimalHit=0.050000001;
				explosionShielding=0.30000001;
				radius=0.25;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke";
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
						type="FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation="sound";
						type="Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type="WeaponWreckSmoke";
						position="engine_smoke1";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position="engine_smoke2";
					};
				};
			};
			class HitBody
			{
				armor=1;
				material=-1;
				name="karoserie";
				visual="-";
				passThrough=0.40000001;
				minimalHit=0.25;
				explosionShielding=0.2;
				radius=0.33000001;
			};
		};
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.44999999;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"n1",
			"n2",
			"n3",
			"i1"
		};
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\cdf_brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="CDF";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\cdf_brdm2_01_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
				factions[]=
				{
					"rhsgref_faction_cdf_ground"
				};
			};
			class chdkz
			{
				displayName="CHDKZ 01";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
				factions[]={};
			};
			class khaki: chdkz
			{
				displayName="Khaki";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BDRM2_KHK_01_CO.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
			};
			class olive: chdkz
			{
				displayName="Green";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
			};
			class takistan: chdkz
			{
				displayName="Takistan";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_01_TKA_CO.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
			};
			class 3tone: chdkz
			{
				displayName="Tri-color";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_3tone_01_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_3tone_02_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
			};
			class chdkz02: chdkz
			{
				displayName="CHDKZ 02";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_chdkz_02_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
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
			class rhs_decalNumber_type
			{
				displayName="Define font type of plate number";
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', [3,4,5], _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				typeName="STRING";
				class values
				{
					class CDF
					{
						name="CDF";
						value="CDF";
					};
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
				displayName="Set side number";
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach [3,4,5]}else{[_this, [['Number', [3,4,5], _this getVariable ['rhs_decalNumber_type','CDF'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				displayName="Define platoon symbol type";
				tooltip="Decal type";
				property="rhs_decalPlatoon_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				typeName="STRING";
				class values
				{
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
					class Army
					{
						name="Army";
						value="Army";
						defaultValue="1";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
						defaultValue="0";
					};
					class HonorGDR
					{
						name="Honor GDR";
						value="HonorGDR";
					};
				};
			};
			class rhs_decalPlatoon
			{
				displayName="Set platoon symbol";
				tooltip="Set platoon symbol located on right & rear of vehicles. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [6],  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class big_numbers_hide
			{
				displayName="hide big decal numbers";
				property="big_numbers_hide";
				control="CheckboxNumber";
				expression="_this animate ['%s',_value,true]";
				defaultValue="0";
			};
			class small_numbers_hide: big_numbers_hide
			{
				displayName="hide small decal numbers";
				property="small_numbers_hide";
			};
			class driverViewHatch: big_numbers_hide
			{
				displayName="Open driver view hatch";
				property="driverViewHatch";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class commanderViewHatch: driverViewHatch
			{
				displayName="Open commander view hatch";
				property="commanderViewHatch";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_decalsReadParams;";
				engine="_this call rhs_fnc_btr_handleHatch";
			};
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft
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
			class VehicleSystemsDisplayManagerComponentRight
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
	class rhsgref_BRDM2_ATGM: rhsgref_BRDM2
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ATGM.paa";
		displayName="BRDM-2 (9P148)";
		author="RHS (A2 port)";
		model="\rhsgref\addons\rhsgref_a2port_armor\brdm2\BRDM2_ATGM.p3d";
		picture="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_CA.paa";
		Icon="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\icomap_brdm_atgm_CA.paa";
		faction="rhsgref_faction_cdf_ground";
		transportSoldier=0;
		accuracy=0.30000001;
		class textureSources
		{
			class standard
			{
				displayName="CDF";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\cdf_brdm2_atgm_01_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
				factions[]=
				{
					"rhsgref_faction_cdf_ground"
				};
			};
			class chdkz
			{
				displayName="CHDKZ";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_01_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
				factions[]={};
			};
			class khaki: chdkz
			{
				displayName="Khaki";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_ATGM_01_KHK_CO.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
			};
			class olive: chdkz
			{
				displayName="Green";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_ru_01_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
			};
			class takistan: chdkz
			{
				displayName="Takistan";
				author="$STR_RHS_AUTHOR_FULL";
				textures[]=
				{
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_ATGM_01_TKA_CO.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
					"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
				};
			};
		};
		textureList[]={};
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\cdf_brdm2_atgm_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\periscope.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\periscope_int_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\periscope_int_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\Kamaz_glass_in_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_01.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\BRDM2_01_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_destruct.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_destruct.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ATGM_01.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ATGM_01_damage.rvmat",
				"rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_01_destruct.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_9P148"
				};
				magazines[]=
				{
					"rhs_mag_9m113_5",
					"rhs_mag_9m113_5",
					"rhs_mag_9m113_5"
				};
				gunBeg="spice rakety";
				gunEnd="konec rakety";
				gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				gunnerAction="rhsgref_BRDM2_Cargo01";
				usePiP=1;
				class ViewOptics
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="0.7/10";
					minFov="0.7/10";
					maxFov="0.7/10";
				};
				lockWhenVehicleSpeed=5;
				class OpticsIn
				{
					class 9Sh119m1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
						hitpoint="Hit_Optic_9Sh119";
					};
				};
			};
			class CargoTurret_01: CargoTurret_01;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
			class CargoTurret_05: CargoTurret_05;  //found empty after stripping
		};
		class Hitpoints: HitPoints
		{
			class Hit_Optic_9Sh119
			{
				armor=-40;
				explosionShielding=0.2;
				name="Hit_9Sh119";
				visual="vis_optic_9Sh119";
				armorComponent="Hit_9Sh119";
				passThrough=0;
				radius=0.050000001;
			};
		};
		class AnimationSources: AnimationSources
		{
			class atgm_hide
			{
				initPhase=0;
				animPeriod=9;
				source="door";
				sound="ServoRampSound_2";
				soundPosition="OsaHlavne";
			};
			class revolving
			{
				source="revolving";
				weapon="rhs_weap_9P148";
			};
			class MainTurret_fix
			{
				initPhase=0;
				animPeriod=3;
				source="user";
			};
			class MainGun_fix: MainTurret_fix
			{
				animPeriod=1;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_BRDM2_ATGM_EventHandlers
			{
				fired="_this call rhs_fnc_brdm2_atgmFire;";
				reloaded="_this spawn rhs_fnc_brdm2_atgmReload;";
			};
		};
	};
	class rhsgref_BRDM2UM: rhsgref_BRDM2
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2UM.paa";
		author="RHS (A2 port)";
		displayName="BRDM-2UM";
		model="\rhsgref\addons\rhsgref_a2port_armor\brdm2\BRDM2_HQ.p3d";
		picture="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_hq_CA.paa";
		Icon="\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\icomap_brdm_hq_CA.paa";
		transportSoldier=2;
		attenuationEffectType="OpenCarAttenuation";
		soundAttenuationCargo[]={1,1,1};
		threat[]={0.30000001,0,0.1};
		tf_range=25000;
		tf_hasLRradio_api=1;
		class Turrets: Turrets
		{
			class CommanderOptics: CommanderOptics
			{
				LODTurnedIn="VIEW_CARGO";
			};
			class CargoTurret_01: CargoTurret_01;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
			class CargoTurret_05: CargoTurret_05;  //found empty after stripping
			class CargoTurret_06: CargoTurret_06;  //found empty after stripping
		};
		class AnimationSources: AnimationSources
		{
			class Armed_unhide
			{
				initPhase=0;
				animPeriod=0;
				source="user";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="rhs_weap_pkt_zeroing";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="rhs_weap_pkt_zeroing";
			};
			class Revolving
			{
				source="revolving";
				weapon="rhs_weap_pkt_zeroing";
			};
		};
	};
	class rhsgref_BRDM2_HQ: rhsgref_BRDM2UM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_HQ.paa";
		author="RHS (A2 port)";
		displayName="BRDM-2UM (Armed)";
		transportSoldier=2;
		forceHideDriver=1;
		class AnimationSources: AnimationSources
		{
			class Armed_unhide: Armed_unhide
			{
				initPhase=1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				animationSourceHatch="hatchCommander";
				weapons[]=
				{
					"rhs_weap_pkt_zeroing"
				};
				magazines[]=
				{
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250"
				};
				class Turrets;  //found empty after stripping
				startEngine=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerAction="rhsgref_GAZ_Gunner";
				gunnerInAction="rhsgref_GAZ_GunnerIN";
				memoryPointGun="usti hlavne3";
				gunBeg="usti hlavne3";
				gunEnd="konec hlavne3";
				memoryPointGunnerOutOptics="eye";
				memoryPointGunnerOptics="";
				selectionFireAnim="zasleh";
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[]={420,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=0;
				LODTurnedIn=1200;
				LODTurnedOut=1000;
				viewGunnerInExternal=1;
				gunnerForceOptics=0;
				inGunnerMayFire=0;
				outGunnerMayFire=1;
				canHideGunner=1;
				canUseScanners=0;
				allowTabLock=0;
				stabilizedInAxes=0;
				castGunnerShadow=0;
				forceHideGunner=0;
				class ViewOptics
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
				minTurn=-90;
				maxTurn=90;
				minElev=-34.377499;
				maxElev=26.3561;
				commanding=1;
				primaryGunner=0;
				primaryObserver=1;
			};
			class CargoTurret_01: CargoTurret_01;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
			class CargoTurret_05: CargoTurret_05;  //found empty after stripping
			class CargoTurret_06: CargoTurret_06;  //found empty after stripping
		};
	};
	class rhsgref_BRDM2_b: rhsgref_BRDM2
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_b.paa";
		author="$STR_RHS_AUTHOR_FULL";
		faction="rhsgref_faction_cdf_ground_b";
		crew="rhsgref_cdf_b_reg_crew";
		side=1;
	};
	class rhsgref_BRDM2_ATGM_b: rhsgref_BRDM2_ATGM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ATGM_b.paa";
		author="$STR_RHS_AUTHOR_FULL";
		faction="rhsgref_faction_cdf_ground_b";
		crew="rhsgref_cdf_b_reg_crew";
		side=1;
	};
	class rhsgref_BRDM2UM_b: rhsgref_BRDM2UM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2UM_b.paa";
		author="$STR_RHS_AUTHOR_FULL";
		faction="rhsgref_faction_cdf_ground_b";
		crew="rhsgref_cdf_b_reg_crew";
		side=1;
	};
	class rhsgref_BRDM2_HQ_b: rhsgref_BRDM2_HQ
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_HQ_b.paa";
		author="$STR_RHS_AUTHOR_FULL";
		faction="rhsgref_faction_cdf_ground_b";
		crew="rhsgref_cdf_b_reg_crew";
		side=1;
	};
	class rhsgref_BRDM2_ins: rhsgref_BRDM2
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ins.paa";
		faction="rhsgref_faction_chdkz";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		crew="rhsgref_ins_crew";
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_ATGM_ins: rhsgref_BRDM2_ATGM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ATGM_ins.paa";
		faction="rhsgref_faction_chdkz";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		crew="rhsgref_ins_crew";
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2UM_ins: rhsgref_BRDM2UM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2UM_ins.paa";
		faction="rhsgref_faction_chdkz";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		crew="rhsgref_ins_crew";
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_HQ_ins: rhsgref_BRDM2_HQ
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_HQ_ins.paa";
		faction="rhsgref_faction_chdkz";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		crew="rhsgref_ins_crew";
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_ins_g: rhsgref_BRDM2
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ins_g.paa";
		faction="rhsgref_faction_chdkz_g";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=2;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		crew="rhsgref_ins_g_crew";
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_ATGM_ins_g: rhsgref_BRDM2_ATGM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ATGM_ins_g.paa";
		faction="rhsgref_faction_chdkz_g";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=2;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		crew="rhsgref_ins_g_crew";
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2UM_ins_g: rhsgref_BRDM2UM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2UM_ins_g.paa";
		faction="rhsgref_faction_chdkz_g";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=2;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		crew="rhsgref_ins_g_crew";
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_HQ_ins_g: rhsgref_BRDM2_HQ
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_HQ_ins_g.paa";
		faction="rhsgref_faction_chdkz_g";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=2;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		crew="rhsgref_ins_g_crew";
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_msv: rhsgref_BRDM2
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_msv.paa";
		faction="rhs_faction_msv";
		crew="rhs_msv_crew";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',12]"
		};
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_ATGM_msv: rhsgref_BRDM2_ATGM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ATGM_msv.paa";
		faction="rhs_faction_msv";
		crew="rhs_msv_crew";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',12]"
		};
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2UM_msv: rhsgref_BRDM2UM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2UM_msv.paa";
		faction="rhs_faction_msv";
		crew="rhs_msv_crew";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',12]"
		};
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_HQ_msv: rhsgref_BRDM2_HQ
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_HQ_msv.paa";
		faction="rhs_faction_msv";
		crew="rhs_msv_crew";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',12]"
		};
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_vdv: rhsgref_BRDM2
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_vdv.paa";
		faction="rhs_faction_vdv";
		crew="rhs_vdv_crew";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',11]"
		};
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_ATGM_vdv: rhsgref_BRDM2_ATGM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ATGM_vdv.paa";
		faction="rhs_faction_vdv";
		crew="rhs_vdv_crew";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',11]"
		};
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2UM_vdv: rhsgref_BRDM2UM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2UM_vdv.paa";
		faction="rhs_faction_vdv";
		crew="rhs_vdv_crew";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',11]"
		};
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_HQ_vdv: rhsgref_BRDM2_HQ
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_HQ_vdv.paa";
		faction="rhs_faction_vdv";
		crew="rhs_vdv_crew";
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',11]"
		};
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_vmf: rhsgref_BRDM2
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_vmf.paa";
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_crew";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Army',[3,1]]"
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_ATGM_vmf: rhsgref_BRDM2_ATGM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_ATGM_vmf.paa";
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_crew";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Army',[3,1]]"
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2UM_vmf: rhsgref_BRDM2UM
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2UM_vmf.paa";
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_crew";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Army',[3,1]]"
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_HQ_vmf: rhsgref_BRDM2_HQ
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_BRDM2_HQ_vmf.paa";
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_crew";
		class AnimationSources: AnimationSources
		{
			class small_numbers_hide: small_numbers_hide
			{
				initPhase=1;
			};
		};
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Army',[3,1]]"
		};
		side=0;
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class ProxyPSZ_BRDM2_wheel: ProxyRetex
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		model="\rhsgref\addons\rhsgref_a2port_armor\brdm2\PSZ_BRDM2_wheel";
	};
};
