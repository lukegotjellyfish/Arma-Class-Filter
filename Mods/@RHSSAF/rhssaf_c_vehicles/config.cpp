class CfgPatches
{
	class rhssaf_c_vehicles
	{
		name="RHS: SAF vehicles";
		units[]=
		{
			"rhssaf_m998_olive_2dr_halftop",
			"rhssaf_m998_olive_2dr_fulltop",
			"rhssaf_m1025_olive",
			"rhssaf_m1025_olive_m2",
			"rhssaf_army_ural",
			"rhssaf_army_ural_open",
			"rhssaf_army_ural_fuel",
			"rhssaf_un_ural",
			"rhssaf_army_d30",
			"rhssaf_army_ags30_tripod",
			"rhssaf_army_nsv_tripod",
			"rhssaf_army_m252",
			"rhssaf_army_metis_9k115",
			"rhssaf_army_m2staticmg_minitripod",
			"rhssaf_airforce_ht40",
			"rhssaf_airforce_ht48",
			"rhssaf_army_t72s",
			"rhssaf_army_2s1",
			"rhssaf_airforce_l_18_101",
			"rhssaf_airforce_l_18"
		};
		weapons[]={};
		version="VERSION";
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class rhs_d30_base;
	class rhs_nsv_tripod_base;
	class RHS_AGS30_TriPod_base;
	class rhs_Metis_Base;
	class RHS_M252_Base;
	class RHS_M2StaticMG_MiniTripod_base;
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class CargoTurret;
	};
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class NewTurret;
		class Turrets;
		class ViewPilot;
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
	};
	class Heli_Light_02_base_F;
	class RHS_Mi8_base: Heli_Light_02_base_F
	{
		class TextureSources
		{
			class RHS_SAF_Green
			{
				factions[]=
				{
					"rhssaf_faction_airforce"
				};
			};
		};
	};
	class rhs_mi8t_base: RHS_Mi8_base
	{
		class TextureSources
		{
			class RHS_SAF_Camo
			{
				factions[]=
				{
					"rhssaf_faction_airforce"
				};
			};
			class RHS_SAF_Green
			{
				factions[]=
				{
					"rhssaf_faction_airforce"
				};
			};
		};
	};
	class LandVehicle;
	class Car: LandVehicle
	{
	class Car_F: Car
	{
		class AnimationSources;
		class EventHandlers;
		class Turrets
		{
			class MainTurret: NewTurret
			{
	};
	class Tank: LandVehicle
	{
		class NewTurret;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
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
		class Sounds: Sounds
		{
		class EventHandlers;
	};
	class RHS_UAZ_Base: Offroad_01_base_F
	{
	};
	class Truck_F: Car_F
	{
	class MRAP_01_base_F: Car_F
	{
	class rhsusf_hmmwe_base: MRAP_01_base_F
	{
	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01;
	};
	class rhsusf_m998_w_2dr_halftop: rhsusf_m998_w_2dr
	{
		class Turrets: Turrets
		{
	};
	class rhsusf_m998_w_2dr_fulltop: rhsusf_m998_w_2dr_halftop
	{
		class Sounds: Sounds
		{
		class Turrets: Turrets
		{
	};
	class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
	};
	class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr
	{
		class CargoTurret;
		class Turrets: Turrets
		{
	};
	class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop
	{
		class Sounds: Sounds
		{
		class Turrets;
	};
	class RHS_Ural_BaseTurret: Truck_F
	{
		class Turrets;
	};
	class rhs_a3t72tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
			};
		};
	};
	class rhs_t72bd_tv: rhs_a3t72tank_base
	{
		class EventHandlers;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class EventHandlers;
	};
	class rhs_2s1tank_base: Tank_F
	{
		class TextureSources
		{
			class RHS_SAF_Camo
			{
				factions[]=
				{
					"rhssaf_faction_army"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
			};
		};
	};
	class rhs_mig29s_base: Plane_Base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylon1;
					class pylon2;
					class pylon3;
					class pylon4;
					class pylon5;
					class pylon6;
			};
		};
		class TextureSources
		{
			class RHS_SAF_Gray
			{
				factions[]=
				{
					"rhssaf_faction_airforce"
				};
			};
			class RHS_SAF_Blue
			{
				factions[]=
				{
					"rhssaf_faction_airforce"
				};
			};
		};
	};
	class rhssaf_m998_olive_2dr_halftop: rhsusf_m998_w_2dr
	{
		side=2;
		typicalCargo[]=
		{
			"rhssaf_army_m10_digital_crew"
		};
		displayname="$STR_RHSSAF_M998_OLIVE_2DR_HALFTOP_DISPLAYNAME";
	};
	class rhssaf_m998_olive_2dr_fulltop: rhssaf_m998_olive_2dr_halftop
	{
		displayname="$STR_RHSSAF_M998_OLIVE_2DR_FULLTOP_DISPLAYNAME";
		attenuationEffectType="RHS_CarAttenuation";
		soundAttenuationCargo[]={1};
		class Sounds: Sounds
		{
			class RainIn
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_sounds\misc\rain.wss",
					1.4125376,
					1
				};
				frequency=1;
				volume="rain*(1-camPos)";
			};
			class RainExt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_sounds\misc\rain.wss",
					1.4125376,
					1
				};
				frequency=1;
				volume="rain*camPos";
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02
			{
				maxElev=15;
			};
		};
	};
	class rhssaf_m1025_olive: rhsusf_m1025_w
	{
		side=2;
		displayname="$STR_RHSSAF_M1025_OLIVE_DISPLAYNAME";
	};
	class rhssaf_m1025_olive_m2: rhsusf_m1025_w_m2
	{
		side=2;
		displayname="$STR_RHSSAF_M1025_OLIVE_M2_DISPLAYNAME";
	};
	class rhssaf_army_ural: RHS_Ural_Civ_Base
	{
		side=2;
		rhs_decalParameters[]={};
	};
	class rhssaf_army_ural_open: RHS_Ural_Open_MSV_01
	{
		side=2;
		rhs_decalParameters[]={};
	};
	class rhssaf_army_ural_fuel: RHS_Ural_Fuel_MSV_01
	{
		side=2;
		rhs_decalParameters[]={};
	};
		side=2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
			};
		};
	};
	class rhssaf_army_2s1: rhs_2s1tank_base
	{
		side=2;
		textureList[]=
		{
			"RHS_SAF_Camo",
			1,
			"light",
			0.30000001
		};
		rhs_decalParameters[]=
		{
			"['Number', cRHS2S1SerbianNumberPlaces,'CDF']"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
			};
		};
	};
	class rhssaf_army_pts: rhs_pts_vmf
	{
		side=2;
		rhs_decalParameters[]=
		{
			"['Number',cRHSPTSNumberPlaces,'Default']"
		};
	};
	class rhssaf_un_ural: rhssaf_army_ural
	{
		side=2;
	};
	class rhssaf_un_uaz: RHS_UAZ_Base
	{
		side=2;
		accuracy=0.5;
		rhs_decalParameters[]={};
	};
	class rhssaf_un_uaz_open: rhs_uaz_open_Base
	{
		side=2;
		accuracy=0.5;
		rhs_decalParameters[]={};
	};
	class rhssaf_army_d30: rhs_d30_base
	{
		displayname="$STR_RHSSAF_ARMY_D30_DISPLAYNAME";
		side=2;
	};
	class rhssaf_army_ags30_tripod: RHS_AGS30_TriPod_base
	{
		displayname="$STR_RHSSAF_ARMY_AGS30_TRIPOD_DISPLAYNAME";
		side=2;
	};
	class rhssaf_army_nsv_tripod: rhs_nsv_tripod_base
	{
		displayname="$STR_RHSSAF_ARMY_NSV_TRIPOD_DISPLAYNAME";
		side=2;
	};
	class rhssaf_army_m252: RHS_M252_Base
	{
		displayname="$STR_RHSSAF_ARMY_M252_DISPLAYNAME";
		side=2;
	};
	class rhssaf_army_metis_9k115: rhs_Metis_Base
	{
		side=2;
	};
	class rhssaf_army_m2staticmg_minitripod: RHS_M2StaticMG_MiniTripod_base
	{
		displayname="$STR_RHSSAF_ARMY_M2STATICMG_MINITRIPOD_DISPLAYNAME";
		side=2;
	};
	class rhssaf_airforce_ht40: rhs_mi8t_base
	{
		displayname="$STR_RHSSAF_AIRFORCE_HT40_DISPLAYNAME";
		rhs_decalParameters[]={};
		side=2;
		hiddenselectionstextures[]=
		{
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_body_camo_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_tv2_camo_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
		};
	};
	class rhssaf_airforce_ht48: RHS_Mi8mt_Cargo_vvs
	{
		displayname="$STR_RHSSAF_AIRFORCE_HT48_DISPLAYNAME";
		rhs_decalParameters[]={};
		side=2;
		hiddenselectionstextures[]=
		{
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi17\data\rhssaf_mi8_body_green_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
		};
	};
	class rhssaf_airforce_l_18_101: rhs_mig29sm_base
	{
		side=2;
		hiddenselectionstextures[]=
		{
			"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_01_gray_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_02_gray_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_03_gray_co.paa"
		};
		textureList[]=
		{
			"RHS_SAF_Gray",
			1
		};
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMIG29SerbianTailStaticNumberPlaces,'AviaSerbianTail', 18]",
			"['Number',[cRHSAIRMIG29SerbianTailDynamicNumberPlaces,cRHSAIRMIG29SerbianIntakeNumberPlaces],['AviaSerbianTail','AviaSerbianIntake'], [101]]"
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_R27R_APU470";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_R27R_APU470";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_R73M_APU73";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_R73M_APU73";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_R73M_APU73";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_R73M_APU73";
					};
				};
			};
		};
	};
	class rhssaf_airforce_l_18: rhs_mig29sm_base
	{
		side=2;
		hiddenselectionstextures[]=
		{
			"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_01_blue_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_02_blue_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_03_blue_co.paa"
		};
		textureList[]=
		{
			"RHS_SAF_Gray",
			0.60000002,
			"RHS_SAF_Blue",
			0.40000001
		};
		rhs_decalParameters[]=
		{
			"['Number', cRHSAIRMIG29SerbianTailStaticNumberPlaces,'AviaSerbianTail',  18]",
			"['Number', [cRHSAIRMIG29SerbianTailDynamicNumberPlaces,cRHSAIRMIG29SerbianIntakeNumberPlaces],['AviaSerbianTail','AviaSerbianIntake'],  [102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124]]"
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_b8m1_bd3_umk2a_s8kom";
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_b8m1_bd3_umk2a_s8kom";
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8m1_bd3_umk2a_s8df";
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8m1_bd3_umk2a_s8df";
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_R60M_APU60";
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_R60M_APU60";
					};
				};
			};
		};
	};
	class rhssaf_army_o_m998_olive_2dr_halftop: rhssaf_m998_olive_2dr_halftop
	{
		side=0;
	};
	class rhssaf_army_o_m998_olive_2dr_fulltop: rhssaf_m998_olive_2dr_fulltop
	{
		side=0;
	};
	class rhssaf_army_o_m1025_olive: rhssaf_m1025_olive
	{
		side=0;
	};
	class rhssaf_army_o_m1025_olive_m2: rhssaf_m1025_olive_m2
	{
		side=0;
	};
	class rhssaf_army_o_ural: rhssaf_army_ural
	{
		side=0;
	};
	class rhssaf_army_o_ural_open: rhssaf_army_ural_open
	{
		side=0;
	};
	class rhssaf_army_o_ural_fuel: rhssaf_army_ural_fuel
	{
		side=0;
	};
	class rhssaf_army_o_t72s: rhssaf_army_t72s
	{
		side=0;
	};
	class rhssaf_army_o_2s1: rhssaf_army_2s1
	{
		side=0;
	};
	class rhssaf_army_o_pts: rhssaf_army_pts
	{
		side=0;
	};
	class rhssaf_army_o_d30: rhssaf_army_d30
	{
		side=0;
	};
	class rhssaf_army_o_ags30_tripod: rhssaf_army_ags30_tripod
	{
		side=0;
	};
	class rhssaf_army_o_nsv_tripod: rhssaf_army_nsv_tripod
	{
		side=0;
	};
	class rhssaf_army_o_m252: rhssaf_army_m252
	{
		side=0;
	};
	class rhssaf_army_o_metis_9k115: rhssaf_army_metis_9k115
	{
		side=0;
	};
	class rhssaf_army_o_m2staticmg_minitripod: rhssaf_army_m2staticmg_minitripod
	{
		side=0;
	};
	class rhssaf_airforce_o_ht40: rhssaf_airforce_ht40
	{
		side=0;
	};
	class rhssaf_airforce_o_ht48: rhssaf_airforce_ht48
	{
		side=0;
	};
	class rhssaf_airforce_o_l_18_101: rhssaf_airforce_l_18_101
	{
		side=0;
	};
	class rhssaf_airforce_o_l_18: rhssaf_airforce_l_18
	{
		side=0;
	};
};
