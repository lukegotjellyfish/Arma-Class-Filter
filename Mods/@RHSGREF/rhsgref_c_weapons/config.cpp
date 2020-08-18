class CfgPatches
{
	class rhsgref_c_weapons
	{
		units[]=
		{
			"rhsgref_weapons_crate",
			"rhs_mine_smine35_press",
			"rhs_mine_smine35_trip",
			"rhs_mine_smine44_trip",
			"rhs_mine_smine44_press",
			"rhs_mine_m2a3b_press",
			"rhs_mine_m2a3b_trip",
			"rhs_mine_glasmine43_hz",
			"rhs_mine_glasmine43_bz",
			"rhs_mine_a200_bz",
			"rhs_mine_a200_dz35",
			"rhs_mine_stockmine43_2m",
			"rhs_mine_stockmine43_4m",
			"rhs_mine_TM43",
			"rhs_mine_m3_pressure",
			"rhs_mine_M3_tripwire",
			"rhs_mine_mk2_pressure",
			"rhs_mine_Mk2_tripwire",
			"rhs_mine_M7A2",
			"rhs_mine_smine35_press_module",
			"rhs_mine_smine35_trip_module",
			"rhs_mine_smine44_trip_module",
			"rhs_mine_smine44_press_module",
			"rhs_mine_m2a3b_press_module",
			"rhs_mine_m2a3b_trip_module",
			"rhs_mine_glasmine43_hz_module",
			"rhs_mine_glasmine43_bz_module",
			"rhs_mine_a200_bz_module",
			"rhs_mine_a200_dz35_module",
			"rhs_mine_stockmine43_2m_module",
			"rhs_mine_stockmine43_4m_module",
			"rhs_mine_m3_pressure_module",
			"rhs_mine_M3_tripwire_module",
			"rhs_mine_mk2_pressure_module",
			"rhs_mine_Mk2_tripwire_module",
			"rhs_mine_M7A2_module",
			"rhs_mine_TM43_module"
		};
		weapons[]=
		{
			"rhs_mtz_slot",
			"rhs_weap_kar98k",
			"rhs_weap_m38",
			"rhs_weap_m38_rail",
			"rhs_weap_mosin_sbr",
			"rhs_weap_dsr1",
			"rhs_weap_m76",
			"rhs_weap_savz61",
			"rhs_weap_savz61_folded",
			"rhs_weap_savz58p",
			"rhs_weap_savz58v",
			"rhs_weap_savz58v_fold",
			"rhs_weap_savz58p_rail",
			"rhs_weap_savz58v_rail",
			"rhs_weap_savz58v_rail_fold",
			"rhs_weap_savz58v_ris",
			"rhs_weap_savz58v_ris_fold",
			"rhs_weap_savz58v_ris_grip1",
			"rhs_weap_savz58v_ris_grip2",
			"rhs_weap_savz58v_ris_grip3",
			"rhs_weap_savz58v_ris_fold_grip1",
			"rhs_weap_savz58v_ris_fold_grip2",
			"rhs_weap_savz58v_ris_fold_grip3",
			"rhs_weap_savz58p_black",
			"rhs_weap_savz58v_black",
			"rhs_weap_savz58v_fold_black",
			"rhs_weap_savz58p_rail_black",
			"rhs_weap_savz58v_rail_black",
			"rhs_weap_savz58v_rail_fold_black",
			"rhs_weap_Izh18",
			"rhs_weap_stgw57",
			"rhs_weap_m3a1",
			"rhs_weap_MP44",
			"rhs_weap_K98k_byf43",
			"rhs_weap_m1garand_sa43",
			"rhs_weap_mg42",
			"rhs_weap_mg42_aa",
			"rhs_weap_vhsd2",
			"rhs_weap_vhsd2_bg",
			"rhs_weap_vhsd2_ct15x",
			"rhs_weap_vhsd2_bg_ct15x",
			"rhs_weap_vhsk2",
			"rhs_weap_tt33",
			"rhs_weap_rpg75",
			"rhs_weap_panzerfaust60"
		};
		magazines[]={};
		name="GREF Weapons";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class rhs_picattinny_russian_rifle_scopes_slot;
class rhs_picattinny_russian_rifle_scopes_slot_long;
class rhs_russian_ak_barrel_slot;
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class CfgRecoils
{
	class recoil_default;
	class rhs_recoil_fnfal: recoil_default
	{
		muzzleOuter[]={0.30000001,1.2,0.30000001,0.30000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.015;
	};
};
class CfgOpticsEffect
{
	class rhs_ANPVS2_Abera
	{
		params[]={0.039999999,0.039999999,1};
	};
	class rhs_ANPVS2_Blur
	{
		params[]={0.40000001,0,0,0};
	};
	class rhs_ANPVS2_FilmGrain
	{
		params[]={0.15000001,0.40000001,1.5700001,0.5,0.5,1};
	};
};
class rhsgref_792CartridgeEject
{
	class rhsgref_792Cartridge_FX1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class rhsgref_792Cartridge_FX1Med
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class rhsgref_792LinkEject
{
	class rhsgref_792Link_FX1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class CfgCloudlets
{
	class MachineGunCartridge;
	class MachineGunEject;
	class rhsgref_792Link: MachineGunEject
	{
		interval=0.050000001;
		particleShape="\A3\data_f\ParticleEffects\Universal\AmmoBelt_Links.p3d";
		size[]={1};
	};
	class rhsgref_792Cartridge: MachineGunCartridge
	{
		interval=0.050000001;
		particleShape="\rhsgref\addons\rhsgref_c_weapons\data\casing_792_SmE.p3d";
		size[]={1};
	};
};
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	class compatibleItems
	{
		rhsgref_acc_RX01_camo=1;
		rhsgref_acc_RX01_NoFilter_camo=1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
	};
};
class asdg_OpticRail1913_long: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
	};
};
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems;
};
class rhs_russian_rifle_scopes_slot: asdg_OpticSideMount
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
};
class rhs_russian_rifle_scopes_slot_npz: rhs_russian_rifle_scopes_slot
{
	class compatibleItems: compatibleItems
	{
	};
};
class asdg_UnderSlot: asdg_SlotInfo
{
	linkProxy="\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture="\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint="Bottom";
	class compatibleItems
	{
	};
};
class asdg_OpticRailL1A1: asdg_OpticRail
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	class compatibleItems
	{
		rhsgref_acc_l1a1_l2a2=1;
		rhsgref_acc_l1a1_l2a2_3d=1;
		rhsgref_acc_l1a1_anpvs2=1;
	};
};
class rhs_l1a1_rifle_scopes_slot: asdg_OpticRailL1A1;  //found empty after stripping
	iconScale=1;
	iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
	iconPinPoint="Left";
};
class rhs_western_rifle_scopes_slot_short: asdg_OpticRail1913_short;  //found empty after stripping
class rhs_western_rifle_scopes_slot_long: asdg_OpticRail1913_long;  //found empty after stripping
class rhs_western_rifle_underbarrel_slot_bis: UnderBarrelSlot;  //found empty after stripping
class rhs_rifle_gripod_slot: UnderBarrelSlot
{
	class compatibleItems
	{
	};
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot
{
	linkProxy="rhsusf\addons\rhsusf_weapons\rhs_grip_proxy";
};
class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot
{
	class compatibleItems: compatibleItems
	{
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
	};
};
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556
{
	class compatibleItems: compatibleItems
	{
	};
};
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
		rhsgref_sdn6_suppressor=1;
	};
};
class rhs_western_762rifle_muzzle_slot: asdg_MuzzleSlot_762
{
	class compatibleItems: compatibleItems
	{
	};
};
class rhs_FAL_muzzle_slot: rhs_western_762rifle_muzzle_slot
{
	class compatibleItems: compatibleItems
	{
		rhsgref_acc_falMuzzle_l1a1=1;
	};
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
	};
};
class rhs_western_9mmpistol_muzzle_slot: asdg_MuzzleSlot_9MM
{
	class compatibleItems: compatibleItems
	{
	};
};
class rhs_western_rifle_underbarrel_slot: asdg_UnderSlot
{
	class compatibleItems: compatibleItems
	{
	};
};
class rhs_western_46mmsmg_muzzle_slot: asdg_MuzzleSlot
{
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
	};
};
class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot
{
	class compatibleItems
	{
	};
};
class rhs_western_rifle_scopes_slot: CowsSlot;  //found empty after stripping
};
class asdg_FrontSideRail: asdg_SlotInfo
{
	linkProxy="\a3\data_f\proxies\weapon_slots\side";
	class compatibleItems
	{
	};
};
class rhs_western_rifle_laser_slot_top: asdg_FrontSideRail;  //found empty after stripping
class rhs_western_rifle_laser_slot: rhs_western_rifle_laser_slot_top
{
	class compatibleItems: compatibleItems
	{
	};
};
class asdg_PistolUnderRail: asdg_SlotInfo
{
	linkProxy="\a3\data_f\proxies\weapon_slots\SIDE";
	iconPicture="\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint="Bottom";
	class compatibleItems
	{
	};
};
class rhs_western_pistol_laser_slot: asdg_PistolUnderRail;  //found empty after stripping
class rhs_optics_debug: rhs_rifle_gripod_slot
{
	class compatibleItems
	{
		rhsgref_acc_l1a1_l2a2=1;
		rhsgref_acc_l1a1_anpvs2=1;
	};
};
class CfgMineTriggers
{
	class Default;
	class WireTrigger;
	class RangeTrigger;
	class rhsgref_glmi43_trigger: Default
	{
		mineTriggerType="radius";
		mineTriggerRange=0.1;
		mineTriggerMass=9;
		mineMagnetic=0;
	};
	class rhsgref_sMine_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-2,0.050000001,0};
		mineWireEnd[]={2,0.050000001,0};
		mineTriggerMass=14;
	};
	class rhsgref_StMi43_2m_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-1,0,0};
		mineWireEnd[]={1,0.25,0};
		mineTriggerMass=14;
	};
	class rhsgref_StMi43_4m_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-2,0.1,0};
		mineWireEnd[]={2,0.25,0};
		mineTriggerMass=14;
	};
	class rhsgref_Mk2_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-2,0.025,-0.1};
		mineWireEnd[]={2,0.025,-0.1};
		mineTriggerMass=14;
	};
	class rhsgref_M2A3_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-2,0.023,0.050000001};
		mineWireEnd[]={2,0.023,0.050000001};
		mineTriggerMass=14;
	};
	class rhsgref_pressure_trigger: RangeTrigger
	{
		mineTriggerRange=0.60000002;
		mineTriggerActivationRange=1;
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_9x21_Ball;
	class rhs_ammo_9x17: B_9x21_Ball
	{
		hit=4.8699999;
		typicalSpeed=272;
		airFriction=-0.0017671455;
		caliber=0.338;
		deflecting=37;
	};
	class rhs_ammo_762x25_Ball: BulletBase
	{
		hit=4.9457779;
		indirectHit=0;
		indirectHitRange=0;
		caliber=0.77399999;
		deflecting=29;
		cost=100;
		typicalSpeed=390.10001;
		airFriction=-0.0027667;
	};
	class rhs_ammo_8mm_mhp: BulletBase
	{
		hit=3.4313264;
		indirectHit=0;
		indirectHitRange=0;
		caliber=0.53333336;
		deflecting=30;
		cost=100;
		typicalSpeed=290;
		airFriction=-0.0018;
	};
	class rhs_ammo_792x57_Ball: BulletBase
	{
		hit=11.55;
		indirectHit=0;
		indirectHitRange=0;
		cost=1.2;
		airLock=1;
		caliber=0.44999999;
		tracerScale=1.2;
		tracerStartTime=0.045000002;
		tracerEndTime=1.5;
		airFriction=-0.00068140001;
		typicalSpeed=838;
	};
	class rhs_ammo_75x55_Ball: BulletBase
	{
		hit=11.55;
		indirectHit=0;
		indirectHitRange=0;
		cost=1.2;
		airLock=1;
		caliber=0.44999999;
		tracerScale=1.2;
		tracerStartTime=0.045000002;
		tracerEndTime=1.5;
		airFriction=-0.00068140001;
		typicalSpeed=838;
	};
	class rhs_ammo_762x63_M2B_ball: BulletBase
	{
		hit=13.75;
		indirectHit=0;
		indirectHitRange=0;
		cost=1.2;
		airLock=1;
		caliber=0.44999999;
		airFriction=-0.00068140001;
		typicalSpeed=838;
	};
	class rhs_ammo_762x63_M1T_tracer: BulletBase
	{
		hit=13.75;
		indirectHit=0;
		indirectHitRange=0;
		cost=1.2;
		airLock=1;
		caliber=0.44999999;
		tracerScale=0.60000002;
		tracerStartTime=0.045000002;
		tracerEndTime=1.5;
		airFriction=-0.00068140001;
		typicalSpeed=838;
	};
	class rhs_ammo_792x33_SmE_ball: BulletBase
	{
		hit=7.5;
		indirectHit=0;
		indirectHitRange=0;
		cost=1.2;
		airLock=1;
		caliber=0.44;
		tracerScale=1.2;
		tracerStartTime=0.045000002;
		tracerEndTime=1.5;
		airFriction=-0.00101;
		typicalSpeed=685;
	};
	class GrenadeHand;
	class SmokeShell;
	class rhs_ammo_f1: GrenadeHand
	{
		explosionTime=4;
	};
	class rhsgref_ammo_rkg3em: GrenadeHand
	{
		rhs_submunition="rhsgref_ammo_rkg3em_fly";
		rhs_submunition_uxo="rhsgref_ammo_rkg3em_uxo";
		rhs_fuseTime[]={0.30000001,0.34999999,0.40000001};
		simulationStep=0.001;
		explosionTime=-1;
		timeToLive=5;
		explosionEffects="";
		CraterEffects="";
		SoundSetExplosion[]={};
		multiSoundHit[]={};
		hit=0.1;
		indirectHit=0;
	};
	class rhsgref_ammo_rkg3em_uxo: SmokeShell
	{
		smokeColor[]={0,0,0,0};
		explosionTime=0.001;
		grenadeFireSound[]={};
		grenadeBurningSound[]={};
	};
	class rhsgref_ammo_rkg3em_fly: GrenadeHand
	{
		rhs_submunition="rhsgref_ammo_rkg3em_explosion";
		hit=180;
		indirectHit=12;
		indirectHitRange=3;
		explosionTime=-1;
		SoundSetExplosion[]={};
	};
	class rhsgref_ammo_rkg3em_explosion: BulletBase
	{
		hit=140;
		indirectHit=8;
		indirectHitRange=3;
		simulationStep=9.9999997e-006;
		simulation="shotShell";
		deflecting=0;
		explosive=1;
		timeToLive=1;
		explosionTime=0;
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
		submunitionAmmo="rhsgref_ammo_rkg3em_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk12_penetrator;
	class rhsgref_ammo_rkg3em_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=29.3333;
	};
	class rhs_grenade_m1939e_ammo: GrenadeHand
	{
		defaultMagazine="rhs_grenade_m1939e_mag";
		explosionTime=4.5;
	};
	class rhs_grenade_m1939l_ammo: rhs_grenade_m1939e_ammo
	{
		defaultMagazine="rhs_grenade_m1939l_mag";
	};
	class rhs_grenade_m1939e_f_ammo: rhs_grenade_m1939e_ammo
	{
		defaultMagazine="rhs_grenade_m1939e_f_mag";
	};
	class rhs_grenade_m1939l_f_ammo: rhs_grenade_m1939e_ammo
	{
		defaultMagazine="rhs_grenade_m1939l_f_mag";
	};
	class rhs_grenade_nbhgr39_ammo: SmokeShell
	{
		explosionTime=7;
	};
	class rhs_grenade_nbhgr39B_ammo: rhs_grenade_nbhgr39_ammo
	{
	};
	class rhs_grenade_sthgr24_ammo: GrenadeHand
	{
		explosionTime=5;
	};
	class rhs_grenade_sthgr24_heerfrag_ammo: rhs_grenade_sthgr24_ammo
	{
	};
	class rhs_grenade_sthgr24_ssfrag_ammo: rhs_grenade_sthgr24_ammo
	{
	};
	class rhs_grenade_sthgr24_x7bundle_ammo: GrenadeHand
	{
		explosionTime=5;
		hit=56;
		indirectHit=56;
		IndirecthitRange=7;
	};
	class rhs_grenade_sthgr43_ammo: rhs_grenade_sthgr24_ammo
	{
		explosionTime=4.5;
	};
	class rhs_grenade_sthgr43_heerfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		explosionTime=4.5;
	};
	class rhs_grenade_sthgr43_ssfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		explosionTime=4.5;
	};
	class rhs_grenade_mkii_ammo: GrenadeHand
	{
		explosionTime=4.5;
	};
	class rhs_grenade_mkiiia1_ammo: GrenadeHand
	{
		explosionTime=4.5;
	};
	class rhs_grenade_anm8_ammo: SmokeShell
	{
		smokeColor[]={1,1,1,1};
	};
	class rhs_grenade_m15_ammo: GrenadeHand
	{
		explosionTime=4.5;
		hit=2;
		indirectHit=2;
		indirectHitRange=2;
		explosionEffects="RHS_GDM40Effect";
	};
	class rhs_grenade_mki_ammo: SmokeShell
	{
		AIAmmoUsageFlags="1+4";
		smokeColor[]={1,1,1,0.5};
		lightColor[]={0.5,0.5,0.5,0.5};
		effectsSmoke="EmptyEffect";
		effectFlare="CounterMeasureFlare";
		intensity=55000;
		brightness=12;
		size=1;
		useFlare=1;
		flareSize=2;
		timeToLive=30;
		triggerTime=5;
		triggerSpeedCoef=1;
		deflecting=10;
		simulation="shotIlluminating";
	};
	class RocketBase;
	class R_PG32V_F: RocketBase
	{
	};
	class rhs_ammo_rpg75_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags="128+256+512";
		submunitionAmmo="rhs_ammo_rpg75_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		cost=100;
		hit=200;
		indirectHit=10;
		indirectHitRange=1;
		explosive=0.34999999;
		caliber=0.1;
		airFriction=0.63999999;
		sideAirFriction=9.9999997e-006;
		simulationStep=0.0099999998;
		maxSpeed=189;
		initTime=0;
		thrustTime=0;
		thrust=0;
		fuseDistance=5;
		whistleDist=4;
		timeToLive=6;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="RocketBackEffectsNLAW";
		effectsMissile="missile3";
		class CamShakeFire
		{
			power=10;
			duration=0.5;
			frequency=20;
			distance=30;
		};
		class CamShakePlayerFire
		{
			power=5;
			duration=0.1;
			frequency=20;
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1.1,
			0.69999999,
			250
		};
	};
	class rhs_ammo_rpg75_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=22;
	};
	class rhs_ammo_panzerfaust60_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags="128+256+512";
		submunitionAmmo="rhs_ammo_panzerfaust60_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		cost=60;
		hit=200;
		indirectHit=10;
		indirectHitRange=1;
		explosive=0.34999999;
		caliber=0.1;
		airFriction=0.60000002;
		sideAirFriction=0.2;
		simulationStep=0.001;
		maxSpeed=189;
		initTime=0;
		thrustTime=0;
		thrust=0;
		fuseDistance=5;
		whistleDist=4;
		timeToLive=6;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="RocketBackEffectsNLAW";
		effectsMissile="missile3";
		class CamShakeFire
		{
			power=10;
			duration=0.5;
			frequency=20;
			distance=30;
		};
		class CamShakePlayerFire
		{
			power=5;
			duration=0.1;
			frequency=20;
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1.1,
			0.69999999,
			250
		};
	};
	class rhs_ammo_panzerfaust60_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=13.3333;
		submunitionConeType[]=
		{
			"randomcenter",
			45
		};
	};
	class ShellBase;
	class APERSBoundingMine_Range_Ammo;
	class APERSMine_Range_Ammo;
	class rhs_mine_bounding_trigger_base: APERSMine_Range_Ammo
	{
		soundHit1[]={};
		soundHit2[]={};
		multiSoundHit[]={};
		soundTrigger[]={};
		SoundSetExplosion[]={};
		soundActivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Placement_01",
			0.39810699,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_01",
			1.41254,
			1,
			20
		};
		explosionEffects="";
		CraterEffects="";
		deleteParentWhenTriggered=1;
		submunitionConeAngle[]={0,10};
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			1
		};
		submunitionInitSpeed=5;
		mineJumpEffects="MineJumpEffect";
		class CamShakeExplode
		{
			power=0;
			duration=0.2;
			frequency=20;
			distance=0;
		};
		class CamShakeHit
		{
			power=0;
			duration=0.2;
			frequency=20;
			distance=1;
		};
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
	};
	class rhs_mine_smine35_press_ammo: APERSBoundingMine_Range_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_PRESS";
		defaultMagazine="rhs_mine_smine35_press_mag";
		cost=200;
		mineBoundingDist=1.25;
		mineBoundingTime=0.5;
		mineDiveSpeed=1;
		minePlaceDist=0.5;
	};
	class rhs_mine_smine35_trip_ammo: rhs_mine_bounding_trigger_base
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_TRIP";
		defaultMagazine="rhs_mine_smine35_trip_mag";
		cost=200;
		mineTrigger="rhsgref_sMine_tripwire_trigger";
		minePlaceDist=0.5;
		submunitionAmmo[]=
		{
			"rhs_mine_smine35_trip_explo_ammo",
			1
		};
		submunitionInitSpeed=4;
	};
	class rhs_mine_smine35_trip_explo_ammo: ShellBase
	{
		SoundSetExplosion[]=
		{
			"M6slamMine_Exp_SoundSet",
			"M6slamMine_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		explosionTime=0.3125;
		hit=20;
		indirectHit=20;
		indirectHitRange=20;
	};
	class rhs_mine_smine44_trip_ammo: rhs_mine_smine35_trip_ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_TRIP";
		defaultMagazine="rhs_mine_smine44_trip_mag";
		submunitionAmmo[]=
		{
			"rhs_mine_smine44_trip_explo_ammo",
			1
		};
	};
	class rhs_mine_smine44_trip_explo_ammo: rhs_mine_smine35_trip_explo_ammo
	{
		explosionTime=0.25;
		hit=20;
		indirectHit=20;
		indirectHitRange=20;
	};
	class rhs_mine_smine44_press_ammo: APERSBoundingMine_Range_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_PRESS";
		defaultMagazine="rhs_mine_smine44_press_mag";
		mineTrigger="rhsgref_pressure_trigger";
		cost=200;
		mineBoundingDist=0.91439998;
		mineBoundingTime=0.5;
		mineDiveSpeed=1;
		minePlaceDist=0.5;
	};
	class rhs_mine_m2a3b_press_ammo: rhs_mine_bounding_trigger_base
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_DISABLED";
		defaultMagazine="rhs_mine_m2a3b_press_mag";
		cost=200;
		minePlaceDist=0.5;
		mineTrigger="rhsgref_pressure_trigger";
		soundActivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Placement_01",
			1,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Deactivate_01",
			1.99526,
			1,
			20
		};
		soundTrigger[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Trigger_01",
			3.98107,
			1,
			20
		};
		deleteParentWhenTriggered=1;
		submunitionAmmo[]=
		{
			"rhs_mine_m2a3b_explo_ammo",
			1
		};
		submunitionConeAngle[]={0,10};
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			1
		};
		submunitionInitSpeed=5;
		explosionEffects="BoundingMineExplosion";
	};
	class rhs_mine_m2a3b_trip_ammo: rhs_mine_m2a3b_press_ammo
	{
		defaultMagazine="rhs_mine_m2a3b_trip_mag";
		mineTrigger="rhsgref_M2A3_tripwire_trigger";
	};
	class rhs_mine_m2a3b_explo_ammo: ShellBase
	{
		SoundSetExplosion[]=
		{
			"M6slamMine_Exp_SoundSet",
			"M6slamMine_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		explosionTime=0.40000001;
		hit=15;
		indirectHit=15;
		indirectHitRange=10;
	};
	class rhs_mine_glasmine43_hz_ammo: APERSMine_Range_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_DISABLED";
		defaultMagazine="rhs_mine_glasmine43_hz_mag";
		cost=200;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class rhs_mine_glasmine43_bz_ammo: rhs_mine_glasmine43_hz_ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_DISABLED";
		defaultMagazine="rhs_mine_glasmine43_bz_mag";
	};
	class rhs_mine_a200_bz_ammo: APERSMine_Range_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DISABLED";
		defaultMagazine="rhs_mine_a200_bz_mag";
		cost=200;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class rhs_mine_a200_dz35_ammo: rhs_mine_a200_bz_ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DISABLED";
		defaultMagazine="rhs_mine_a200_dz35_mag";
	};
	class rhs_mine_M3_pressure_ammo: APERSMine_Range_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_DISABLED";
		defaultMagazine="rhs_mine_m3_pressure_mag";
		cost=200;
		hit=20;
		indirectHit=20;
		IndirecthitRange=10;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class rhs_mine_Mk2_pressure_ammo: APERSMine_Range_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_DISABLED";
		defaultMagazine="rhs_mine_mk2_pressure_mag";
		cost=200;
		hit=8;
		indirectHit=8;
		IndirecthitRange=6;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class rhs_mine_M7A2_ammo: APERSMine_Range_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_DISABLED";
		defaultMagazine="rhs_mine_M7A2_mag";
		cost=200;
		hit=852;
		indirectHit=852;
		indirectHitRange=3;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class APERSTripMine_Wire_Ammo;
	class rhs_mine_stockmine43_2m_ammo: APERSTripMine_Wire_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_DISABLED_2M";
		defaultMagazine="rhs_mine_stockmine43_2m_mag";
		cost=200;
		hit=8;
		indirectHit=8;
		indirectHitRange=4;
		mineTrigger="rhsgref_StMi43_2m_tripwire_trigger";
	};
	class rhs_mine_stockmine43_4m_ammo: rhs_mine_stockmine43_2m_ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_DISABLED_4M";
		defaultMagazine="rhs_mine_stockmine43_4m_mag";
		mineTrigger="rhsgref_StMi43_4m_tripwire_trigger";
	};
	class rhs_mine_M3_tripwire_ammo: rhs_mine_M3_pressure_ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_DISABLED";
		defaultMagazine="rhs_mine_M3_tripwire_mag";
		mineTrigger="rhsgref_Mk2_tripwire_trigger";
	};
	class rhs_mine_Mk2_tripwire_ammo: rhs_mine_Mk2_pressure_ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_DISABLED";
		defaultMagazine="rhs_mine_Mk2_tripwire_mag";
		mineTrigger="rhsgref_Mk2_tripwire_trigger";
	};
	class ATMine_Range_Ammo;
	class rhs_mine_TM43_ammo: ATMine_Range_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43";
		defaultMagazine="rhs_mine_TM43_mag";
	};
	class DemoCharge_Remote_Ammo;
	class rhs_charge_tnt_x2_ammo: GrenadeHand
	{
		explosionTime=4.5;
		hit=210;
		indirectHit=170;
		IndirecthitRange=3;
		defaultMagazine="rhs_charge_tnt_x2_mag";
	};
	class rhs_charge_sb3kg_ammo: GrenadeHand
	{
		explosionTime=5;
		hit=210;
		indirectHit=300;
		IndirecthitRange=10;
		defaultMagazine="rhs_charge_sb3kg_mag";
	};
	class rhs_charge_M2tet_x2_ammo: DemoCharge_Remote_Ammo
	{
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_ITEM";
		defaultMagazine="rhs_charge_M2tet_x2_mag";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class rhs_mag_m1garand_ads: CA_Magazine
	{
		count=1;
		mass=0;
	};
	class rhs_mag_762x25_8: CA_Magazine
	{
		ammo="rhs_ammo_762x25_Ball";
		count=8;
		initSpeed=450;
		mass=4.29;
	};
	class rhs_mag_6x8mm_mhp: CA_Magazine
	{
		ammo="rhs_ammo_8mm_mhp";
		count=6;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class rhsgref_30rnd_1143x23_M1911B_SMG: CA_Magazine
	{
		ammo="rhs_ammo_45ACP_MHP";
		count=30;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=17.469999;
	};
	class rhsgref_30rnd_1143x23_M1911B_2mag_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
	};
	class rhsgref_30rnd_1143x23_M1T_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
		ammo="rhs_ammo_45ACP_MHPT_Orange";
		tracersEvery=1;
	};
	class rhsgref_30rnd_1143x23_M1T_2mag_SMG: rhsgref_30rnd_1143x23_M1T_SMG
	{
	};
	class rhsgref_20rnd_1143x23_M1911B_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
		count=20;
	};
	class rhsgref_20rnd_1143x23_M1T_SMG: rhsgref_30rnd_1143x23_M1T_SMG
	{
		count=20;
	};
	class rhsgref_20rnd_765x17_vz61: CA_Magazine
	{
		mass=5.5;
		ammo="rhs_ammo_9x17";
		count=20;
		initSpeed=320;
	};
	class rhsgref_10rnd_765x17_vz61: rhsgref_20rnd_765x17_vz61
	{
		count=10;
		mass=3.5;
	};
	class rhsgref_30rnd_556x45_m21: CA_Magazine
	{
		ammo="rhs_ammo_556x45_M855_Ball";
		mass=10.35;
		count=30;
		initSpeed=925;
		tracersEvery=0;
		lastRoundsTracer=0;
		magazineGroup[]=
		{
			"rhs_m21_mag_group"
		};
	};
	class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21
	{
		tracersEvery=1;
		lastRoundsTracer=30;
		displaynameshort="Tracers";
		magazineGroup[]=
		{
			"rhs_m21_mag_group"
		};
	};
	class rhsgref_30rnd_556x45_vhs2: CA_Magazine
	{
		displaynameshort="M855A1";
		ammo="rhs_ammo_556x45_M855A1_Ball";
		mass=7.6999998;
		count=30;
		initSpeed=910;
		tracersEvery=0;
		lastRoundsTracer=4;
		magazineGroup[]=
		{
			"rhs_vhs2_mag_group"
		};
	};
	class rhsgref_30rnd_556x45_vhs2_t: rhsgref_30rnd_556x45_vhs2
	{
		tracersEvery=1;
		lastRoundsTracer=30;
		displaynameshort="Tracers";
		magazineGroup[]=
		{
			"rhs_vhs2_mag_group"
		};
	};
	class rhsgref_5Rnd_792x57_kar98k: CA_Magazine
	{
		ammo="rhs_ammo_792x57_Ball";
		count=5;
		initSpeed=869;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=2.97;
	};
	class rhsgref_10Rnd_792x57_m76: CA_Magazine
	{
		ammo="rhs_ammo_792x57_Ball";
		count=10;
		initSpeed=730;
		tracersEvery=0;
		lastRoundsTracer=0;
		magazineGroup[]=
		{
			"rhs_m76_mag_group"
		};
		mass=6.9400001;
	};
	class rhsgref_5Rnd_762x54_m38: CA_Magazine
	{
		ammo="rhs_B_762x54_Ball";
		count=5;
		initSpeed=823;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=2.6400001;
	};
	class rhs_30Rnd_762x39mm;
	class rhs_30Rnd_762x39mm_Savz58: rhs_30Rnd_762x39mm
	{
		mass=13.53;
		ammo="rhs_B_762x39_Ball";
		count=30;
		initSpeed=718;
	};
	class rhs_30Rnd_762x39mm_tracer;
	class rhs_30Rnd_762x39mm_Savz58_tracer: rhs_30Rnd_762x39mm_tracer
	{
		tracersEvery=1;
		ammo="rhs_B_762x39_Tracer";
	};
	class rhsgref_24rnd_75x55_Stgw57: CA_Magazine
	{
		ammo="rhs_ammo_75x55_Ball";
		mass=7.6999998;
		count=24;
		initSpeed=750;
		tracersEvery=0;
		lastRoundsTracer=4;
	};
	class rhsgref_8Rnd_762x63_M2B_M1rifle: CA_Magazine
	{
		ammo="rhs_ammo_762x63_M2B_ball";
		count=8;
		initSpeed=770;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=5.2800002;
	};
	class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhsgref_8Rnd_762x63_M2B_M1rifle
	{
		ammo="rhs_ammo_762x63_M1T_tracer";
		initSpeed=770;
		tracersEvery=1;
		lastRoundsTracer=0;
		mass=5.2800002;
	};
	class rhsgref_30Rnd_792x33_SmE_StG: CA_Magazine
	{
		ammo="rhs_ammo_792x33_SmE_ball";
		count=30;
		initSpeed=685;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=11.66;
	};
	class rhsgref_25Rnd_792x33_SmE_StG: CA_Magazine
	{
		ammo="rhs_ammo_792x33_SmE_ball";
		count=25;
		initSpeed=685;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=11.66;
	};
	class rhsgref_50Rnd_792x57_SmE_drum: CA_Magazine
	{
		ammo="rhs_ammo_792x57_Ball";
		count=50;
		initSpeed=770;
		tracersEvery=5;
		lastRoundsTracer=0;
		mass=17.799999;
	};
	class rhsgref_50Rnd_792x57_SmE_notracers_drum: rhsgref_50Rnd_792x57_SmE_drum
	{
		tracersEvery=0;
	};
	class rhsgref_50Rnd_792x57_SmK_drum: rhsgref_50Rnd_792x57_SmE_drum
	{
		ammo="rhs_ammo_792x57_Ball";
		initSpeed=798;
		tracersEvery=5;
	};
	class rhsgref_50Rnd_792x57_SmK_alltracers_drum: rhsgref_50Rnd_792x57_SmK_drum
	{
		tracersEvery=1;
	};
	class rhsgref_296Rnd_792x57_SmE_belt: CA_Magazine
	{
		ammo="rhs_ammo_792x57_Ball";
		count=296;
		initSpeed=770;
		tracersEvery=5;
		lastRoundsTracer=0;
		mass=105.5;
	};
	class rhsgref_296Rnd_792x57_SmE_notracers_belt: rhsgref_296Rnd_792x57_SmE_belt
	{
		tracersEvery=0;
	};
	class rhsgref_296Rnd_792x57_SmK_belt: rhsgref_296Rnd_792x57_SmE_belt
	{
		ammo="rhs_ammo_792x57_Ball";
		initSpeed=798;
		tracersEvery=5;
	};
	class rhsgref_296Rnd_792x57_SmK_alltracers_belt: rhsgref_296Rnd_792x57_SmK_belt
	{
		tracersEvery=1;
	};
	class HandGrenade;
	class rhs_mag_f1: HandGrenade
	{
		ammo="rhs_ammo_f1";
		descriptionshort="$STR_RHS_F1_DES";
		mass=13.2;
	};
	class rhsgref_mag_rkg3em: HandGrenade
	{
		ammo="rhsgref_ammo_rkg3em";
		descriptionshort="$STR_RHS_RKG3EM_DES";
		mass=23.540001;
		initSpeed=15;
	};
	class rhs_grenade_m1939e_mag: HandGrenade
	{
		ammo="rhs_grenade_m1939e_ammo";
		deflecting=60;
		initSpeed=20;
		mass=7.48;
	};
	class rhs_grenade_m1939l_mag: rhs_grenade_m1939e_mag
	{
		ammo="rhs_grenade_m1939l_ammo";
	};
	class rhs_grenade_m1939e_f_mag: rhs_grenade_m1939e_mag
	{
		ammo="rhs_grenade_m1939e_f_ammo";
	};
	class rhs_grenade_m1939l_f_mag: rhs_grenade_m1939e_mag
	{
		ammo="rhs_grenade_m1939l_f_ammo";
	};
	class SmokeShell;
	class rhs_grenade_nbhgr39_mag: SmokeShell
	{
		ammo="rhs_grenade_nbhgr39_ammo";
		initSpeed=17;
		mass=13.09;
	};
	class rhs_grenade_nbhgr39B_mag: rhs_grenade_nbhgr39_mag
	{
		ammo="rhs_grenade_nbhgr39B_ammo";
		mass=10;
	};
	class rhs_grenade_sthgr24_mag: HandGrenade
	{
		ammo="rhs_grenade_sthgr24_ammo";
		initSpeed=18;
		mass=13.09;
	};
	class rhs_grenade_sthgr24_heerfrag_mag: rhs_grenade_sthgr24_mag
	{
		ammo="rhs_grenade_sthgr24_heerfrag_ammo";
	};
	class rhs_grenade_sthgr24_SSfrag_mag: rhs_grenade_sthgr24_mag
	{
		ammo="rhs_grenade_sthgr24_ssfrag_ammo";
	};
	class rhs_grenade_sthgr24_x7bundle_mag: HandGrenade
	{
		ammo="rhs_grenade_sthgr24_x7bundle_ammo";
		initSpeed=11;
		mass=50;
	};
	class rhs_grenade_sthgr43_mag: rhs_grenade_sthgr24_mag
	{
		ammo="rhs_grenade_sthgr43_ammo";
	};
	class rhs_grenade_sthgr43_heerfrag_mag: rhs_grenade_sthgr24_mag
	{
		ammo="rhs_grenade_sthgr43_heerfrag_ammo";
	};
	class rhs_grenade_sthgr43_SSfrag_mag: rhs_grenade_sthgr24_mag
	{
		ammo="rhs_grenade_sthgr43_ssfrag_ammo";
	};
	class rhs_grenade_mkii_mag: HandGrenade
	{
		ammo="rhs_grenade_mkii_ammo";
		mass=13.09;
	};
	class rhs_grenade_mkiiia1_mag: HandGrenade
	{
		ammo="rhs_grenade_mkiiia1_ammo";
		initSpeed=22;
		mass=6.8860002;
	};
	class rhs_grenade_anm8_mag: HandGrenade
	{
		ammo="rhs_grenade_anm8_ammo";
		mass=12;
	};
	class rhs_grenade_m15_mag: HandGrenade
	{
		ammo="rhs_grenade_m15_ammo";
		mass=19;
	};
	class rhs_grenade_mki_mag: HandGrenade
	{
		ammo="rhs_grenade_mki_ammo";
		initSpeed=22;
		mass=4;
	};
	class rhsgref_1Rnd_00Buck: CA_Magazine
	{
		descriptionshort="Caliber: 12 gauge<br />Rounds: 1<br />Used in: IZh-18";
		ammo="rhs_ammo_12g_00buckshot";
		count=1;
		mass=1;
		deleteIfEmpty=0;
		initSpeed=336;
	};
	class rhsgref_1Rnd_Slug: rhsgref_1Rnd_00Buck
	{
		ammo="rhs_ammo_12g_slug";
		initSpeed=395;
	};
	class FakeMagazine;
	class rhs_rpg75_mag: FakeMagazine
	{
		ammo="rhs_ammo_rpg75_rocket";
		initSpeed=189;
		mass=17.6;
	};
	class rhs_panzerfaust60_mag: FakeMagazine
	{
		ammo="rhs_ammo_panzerfaust60_rocket";
		initSpeed=45;
		mass=3;
	};
	class APERSBoundingMine_Range_Mag;
	class rhs_mine_smine35_press_mag: APERSBoundingMine_Range_Mag
	{
		ammo="rhs_mine_smine35_press_ammo";
		mass=80;
	};
	class rhs_mine_smine35_trip_mag: rhs_mine_smine35_press_mag
	{
		ammo="rhs_mine_smine35_trip_ammo";
	};
	class rhs_mine_smine44_trip_mag: APERSBoundingMine_Range_Mag
	{
		ammo="rhs_mine_smine44_trip_ammo";
		mass=80;
	};
	class rhs_mine_smine44_press_mag: rhs_mine_smine44_trip_mag
	{
		ammo="rhs_mine_smine44_press_ammo";
	};
	class rhs_mine_m2a3b_press_mag: APERSBoundingMine_Range_Mag
	{
		ammo="rhs_mine_m2a3b_press_ammo";
		mass=40;
	};
	class rhs_mine_m2a3b_trip_mag: rhs_mine_m2a3b_press_mag
	{
		ammo="rhs_mine_m2a3b_trip_ammo";
	};
	class APERSMine_Range_Mag;
	class rhs_mine_glasmine43_hz_mag: APERSMine_Range_Mag
	{
		ammo="rhs_mine_glasmine43_hz_ammo";
		mass=26.4;
	};
	class rhs_mine_glasmine43_bz_mag: rhs_mine_glasmine43_hz_mag
	{
		ammo="rhs_mine_glasmine43_bz_ammo";
	};
	class rhs_mine_a200_bz_mag: APERSMine_Range_Mag
	{
		ammo="rhs_mine_a200_bz_ammo";
		mass=25;
		maxThrowHoldTime=2;
		maxThrowIntensityCoef=1.4;
		minThrowIntensityCoef=0.30000001;
	};
	class rhs_mine_a200_dz35_mag: rhs_mine_a200_bz_mag
	{
		ammo="rhs_mine_a200_dz35_ammo";
	};
	class rhs_mine_m3_pressure_mag: APERSMine_Range_Mag
	{
		ammo="rhs_mine_M3_pressure_ammo";
		mass=60;
		maxThrowHoldTime=2;
		maxThrowIntensityCoef=1.4;
		minThrowIntensityCoef=0.30000001;
	};
	class rhs_mine_mk2_pressure_mag: APERSMine_Range_Mag
	{
		ammo="rhs_mine_Mk2_pressure_ammo";
		mass=13.09;
	};
	class rhs_mine_M7A2_mag: APERSMine_Range_Mag
	{
		ammo="rhs_mine_M7A2_ammo";
		mass=48.400002;
	};
	class APERSTripMine_Wire_Mag;
	class rhs_mine_stockmine43_2m_mag: APERSTripMine_Wire_Mag
	{
		ammo="rhs_mine_stockmine43_2m_ammo";
		mass=44;
	};
	class rhs_mine_stockmine43_4m_mag: rhs_mine_stockmine43_2m_mag
	{
		ammo="rhs_mine_stockmine43_4m_ammo";
	};
	class rhs_mine_M3_tripwire_mag: APERSTripMine_Wire_Mag
	{
		ammo="rhs_mine_M3_tripwire_ammo";
		mass=60;
	};
	class rhs_mine_Mk2_tripwire_mag: APERSTripMine_Wire_Mag
	{
		ammo="rhs_mine_Mk2_tripwire_ammo";
		mass=13.09;
	};
	class ATMine_Range_Mag;
	class rhs_mine_TM43_mag: ATMine_Range_Mag
	{
		ammo="rhs_mine_TM43_ammo";
		mass=100;
	};
	class DemoCharge_Remote_Mag;
	class rhs_charge_tnt_x2_mag: HandGrenade
	{
		ammo="rhs_charge_tnt_x2_ammo";
		initSpeed=18;
		mass=10;
	};
	class rhs_charge_sb3kg_mag: HandGrenade
	{
		ammo="rhs_charge_sb3kg_ammo";
		initSpeed=10;
		mass=66;
	};
	class rhs_charge_M2tet_x2_mag: DemoCharge_Remote_Mag
	{
		ammo="rhs_charge_M2tet_x2_ammo";
		mass=25;
	};
	class rhs_mag_20Rnd_762x51_m80_fnfal: CA_Magazine
	{
		count=20;
		ammo="rhs_ammo_762x51_M80_Ball";
		mass=16.5;
		initSpeed=844;
	};
	class rhs_mag_20Rnd_762x51_m80a1_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
	};
	class rhs_mag_20Rnd_762x51_m62_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		ammo="rhs_ammo_762x51_M62_tracer";
		tracersEvery=1;
	};
	class rhs_mag_20Rnd_762x51_m61_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		ammo="rhs_ammo_762x51_M61_AP";
	};
	class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		count=30;
		mass=22.24;
	};
	class rhs_mag_30Rnd_762x51_m80a1_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
	};
	class rhs_mag_30Rnd_762x51_m62_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		ammo="rhs_ammo_762x51_M62_tracer";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_762x51_m61_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		ammo="rhs_ammo_762x51_M61_AP";
	};
};
class CfgMagazineWells
{
	class CBA_762x25_TT
	{
		RHSGREF_Magazines[]=
		{
			"rhs_mag_762x25_8"
		};
	};
	class CBA_32ACP_Vz61
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_20rnd_765x17_vz61",
			"rhsgref_10rnd_765x17_vz61"
		};
	};
	class CBA_45ACP_Grease
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_30rnd_1143x23_M1911B_SMG",
			"rhsgref_30rnd_1143x23_M1T_SMG",
			"rhsgref_30rnd_1143x23_M1911B_2mag_SMG",
			"rhsgref_30rnd_1143x23_M1T_2mag_SMG"
		};
	};
	class CBA_556x45_G36
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_30rnd_556x45_vhs2",
			"rhsgref_30rnd_556x45_vhs2_t"
		};
	};
	class CBA_556x45_M21
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21_t"
		};
	};
	class CBA_75x55_STGW57
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_24rnd_75x55_Stgw57"
		};
	};
	class CBA_762x39_VZ58
	{
		RHSGREF_Magazines[]=
		{
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58_tracer"
		};
	};
	class CBA_762x51_FAL
	{
		RHSGREF_Magazines[]=
		{
			"rhs_mag_20Rnd_762x51_m61_fnfal",
			"rhs_mag_20Rnd_762x51_m62_fnfal",
			"rhs_mag_20Rnd_762x51_m80_fnfal",
			"rhs_mag_20Rnd_762x51_m80a1_fnfal"
		};
	};
	class CBA_762x51_FAL_L
	{
		RHSGREF_Magazines[]=
		{
			"rhs_mag_30Rnd_762x51_m61_fnfal",
			"rhs_mag_30Rnd_762x51_m62_fnfal",
			"rhs_mag_30Rnd_762x51_m80_fnfal",
			"rhs_mag_30Rnd_762x51_m80a1_fnfal"
		};
	};
	class CBA_762x54R_Mosin
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_5Rnd_762x54_m38"
		};
	};
	class CBA_792x33_StG
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_30Rnd_792x33_SmE_StG",
			"rhsgref_25Rnd_792x33_SmE_StG"
		};
	};
	class CBA_792x57_K98
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_5Rnd_792x57_kar98k"
		};
	};
	class CBA_792x57_M76
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_10Rnd_792x57_m76"
		};
	};
};
class CfgVehicles
{
	class Box_Syndicate_Wps_F;
	class rhsgref_weapons_crate: Box_Syndicate_Wps_F
	{
		transportMaxWeapons=70;
		transportMaxMagazines=40;
		class EventHandlers
		{
			init="[_this select 0,0] call rhs_fnc_virtualAmmoBoxGREF;";
		};
		SLX_XEH_DISABLED=1;
	};
	class Weapon_Base_F;
	class rhs_weapon_base: Weapon_Base_F
	{
	};
	class rhs_weapon_kar98k: rhs_weapon_base
	{
	};
	class rhs_weapon_m38: rhs_weapon_base
	{
	};
	class rhs_weapon_m38_rail: rhs_weapon_m38
	{
	};
	class rhs_weapon_mosin_sbr: rhs_weapon_m38
	{
	};
	class rhs_weapon_vhsd2: rhs_weapon_base
	{
	};
	class rhs_weapon_vhsd2_bg: rhs_weapon_vhsd2
	{
	};
	class rhs_weapon_vhsd2_ct15x: rhs_weapon_vhsd2
	{
	};
	class rhs_weapon_vhsd2_bg_ct15x: rhs_weapon_vhsd2
	{
	};
	class rhs_weapon_vhsk2: rhs_weapon_vhsd2
	{
	};
	class rhs_weapon_dsr1: rhs_weapon_base
	{
	};
	class rhs_weapon_m70ab2: rhs_weapon_base
	{
	};
	class rhs_weapon_m70ab2_fold: rhs_weapon_m70ab2
	{
	};
	class rhs_weapon_m70b1: rhs_weapon_m70ab2
	{
	};
	class rhs_weapon_m92: rhs_weapon_m70ab2
	{
	};
	class rhs_weapon_m92_fold: rhs_weapon_m70ab2
	{
	};
	class rhs_weapon_m21a: rhs_weapon_base
	{
	};
	class rhs_weapon_m21a_pr: rhs_weapon_m21a
	{
	};
	class rhs_weapon_m21a_fold: rhs_weapon_m21a
	{
	};
	class rhs_weapon_m21s: rhs_weapon_m21a
	{
	};
	class rhs_weapon_m21s_pr: rhs_weapon_m21a
	{
	};
	class rhs_weapon_m21s_fold: rhs_weapon_m21a
	{
	};
	class rhs_weapon_m76: rhs_weapon_base
	{
	};
	class rhs_weapon_savz58p: rhs_weapon_base
	{
	};
	class rhs_weapon_savz58v: rhs_weapon_savz58p
	{
	};
	class rhs_weapon_savz58v_fold: rhs_weapon_savz58p
	{
	};
	class rhs_weapon_savz58p_rail: rhs_weapon_savz58p
	{
	};
	class rhs_weapon_savz58v_rail: rhs_weapon_savz58p
	{
	};
	class rhs_weapon_savz58v_rail_fold: rhs_weapon_savz58p
	{
	};
	class rhs_weapon_savz58v_ris: rhs_weapon_savz58p
	{
	};
	class rhs_weapon_savz58v_ris_fold: rhs_weapon_savz58p
	{
	};
	class rhs_weapon_tt33: rhs_weapon_base
	{
	};
	class rhs_weapon_savz61: rhs_weapon_base
	{
	};
	class rhs_weapon_Izh18: rhs_weapon_base
	{
	};
	class MineBase;
	class ModuleMine_APERSMine_F;
	class rhs_mine_smine35_press: MineBase
	{
		ammo="rhs_mine_smine35_press_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_smine35_press_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_smine35_press_ammo";
	};
	class rhs_mine_smine35_trip: MineBase
	{
		ammo="rhs_mine_smine35_trip_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_smine35_trip_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_smine35_trip_ammo";
	};
	class rhs_mine_smine44_trip: MineBase
	{
		ammo="rhs_mine_smine44_trip_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_smine44_trip_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_smine44_trip_ammo";
	};
	class rhs_mine_smine44_press: MineBase
	{
		ammo="rhs_mine_smine44_press_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_smine44_press_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_smine44_press_ammo";
	};
	class rhs_mine_m2a3b_press: MineBase
	{
		ammo="rhs_mine_m2a3b_press_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_m2a3b_press_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_m2a3b_press_ammo";
	};
	class rhs_mine_m2a3b_trip: MineBase
	{
		ammo="rhs_mine_m2a3b_trip_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_m2a3b_trip_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_m2a3b_trip_ammo";
	};
	class rhs_mine_glasmine43_hz: MineBase
	{
		ammo="rhs_mine_glasmine43_hz_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_glasmine43_hz_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_glasmine43_hz_ammo";
	};
	class rhs_mine_glasmine43_bz: MineBase
	{
		ammo="rhs_mine_glasmine43_bz_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_glasmine43_bz_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_glasmine43_bz_ammo";
	};
	class rhs_mine_a200_bz: MineBase
	{
		ammo="rhs_mine_a200_bz_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_a200_bz_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_a200_bz_ammo";
	};
	class rhs_mine_a200_dz35: MineBase
	{
		ammo="rhs_mine_a200_dz35_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_a200_dz35_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_a200_dz35_ammo";
	};
	class rhs_mine_stockmine43_2m: MineBase
	{
		ammo="rhs_mine_stockmine43_2m_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_stockmine43_2m_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_stockmine43_2m_ammo";
	};
	class rhs_mine_stockmine43_4m: MineBase
	{
		ammo="rhs_mine_stockmine43_4m_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_stockmine43_4m_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_stockmine43_4m_ammo";
	};
	class rhs_mine_TM43: MineBase
	{
		ammo="rhs_mine_TM43_ammo";
		icon="iconExplosiveAT";
	};
	class rhs_mine_TM43_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_TM43_ammo";
	};
	class rhs_mine_m3_pressure: MineBase
	{
		ammo="rhs_mine_M3_pressure_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_m3_pressure_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_M3_pressure_ammo";
	};
	class rhs_mine_M3_tripwire: MineBase
	{
		ammo="rhs_mine_M3_tripwire_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_M3_tripwire_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_M3_tripwire_ammo";
	};
	class rhs_mine_mk2_pressure: MineBase
	{
		ammo="rhs_mine_Mk2_pressure_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_mk2_pressure_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_Mk2_pressure_ammo";
	};
	class rhs_mine_Mk2_tripwire: MineBase
	{
		ammo="rhs_mine_Mk2_tripwire_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_Mk2_tripwire_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_Mk2_tripwire_ammo";
	};
	class rhs_mine_M7A2: MineBase
	{
		ammo="rhs_mine_M7A2_ammo";
		icon="iconExplosiveAP";
	};
	class rhs_mine_M7A2_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_mine_M7A2_ammo";
	};
	class Site_F;
	class Site_Minefield: Site_F
	{
		class Arguments
		{
			class minesType
			{
				class values
				{
					class rhs_smine35_press_mine
					{
						name="S.Mi.35 (S.Mi.Z.35) APB Mine";
						value="rhs_mine_smine35_press";
						default=0;
					};
					class rhs_smine35_trip_mine
					{
						name="S.Mi.35 (W) APB Mine";
						value="rhs_mine_smine35_trip";
						default=0;
					};
					class rhs_smine44_trip_mine
					{
						name="S.Mi.44 (W) APB Mine";
						value="rhs_mine_smine44_trip";
						default=0;
					};
					class rhs_smine44_press_mine
					{
						name="S.Mi.44 (S.Mi.Z.44) APB Mine";
						value="rhs_mine_smine44_press";
						default=0;
					};
					class rhs_m2a3b_press_mine
					{
						name="M2A3B APB Mine";
						value="rhs_mine_m2a3b_press";
						default=0;
					};
					class rhs_m2a3b_trip_mine
					{
						name="M2A3B (Tripwire) APB Mine";
						value="rhs_mine_m2a3b_trip";
						default=0;
					};
					class rhs_glasmine43_hz_mine
					{
						name="Gl.Mi.43 (H.Z.44) AP Mine";
						value="rhs_mine_glasmine43_hz";
						default=0;
					};
					class rhs_glasmine43_bz_mine
					{
						name="Gl.Mi.43 (B.Z.) AP Mine";
						value="rhs_mine_glasmine43_bz";
						default=0;
					};
					class rhs_a200_bz_mine
					{
						name="Beh.Schu.Mi.A200 (B.Z.) AP Mine";
						value="rhs_mine_a200_bz";
						default=0;
					};
					class rhs_a200_dz35_mine
					{
						name="Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
						value="rhs_mine_a200_dz35";
						default=0;
					};
					class rhs_stockmine43_2m_mine
					{
						name="St.Mi.43/I (2m) AP Mine";
						value="rhs_mine_stockmine43_2m";
						default=0;
					};
					class rhs_stockmine43_4m_mine
					{
						name="St.Mi.43/II (4m) AP Mine";
						value="rhs_mine_stockmine43_4m";
						default=0;
					};
					class rhs_TM43_mine
					{
						name="Tellermine 43";
						value="rhs_mine_TM43";
						default=0;
					};
					class rhs_m3_pressure_mine
					{
						name="M3 AP Mine";
						value="rhs_mine_m3_pressure";
						default=0;
					};
					class rhs_M3_tripwire_mine
					{
						name="M3 (Tripwire) AP Mine";
						value="rhs_mine_M3_tripwire";
						default=0;
					};
					class rhs_mk2_pressure_mine
					{
						name="Mk 2 AP Mine";
						value="rhs_mine_mk2_pressure";
						default=0;
					};
					class rhs_Mk2_tripwire_mine
					{
						name="Mk 2 (Tripwire) AP Mine";
						value="rhs_mine_Mk2_tripwire";
						default=0;
					};
					class rhs_M7A2_mine
					{
						name="M7A2 AP Mine";
						value="rhs_mine_M7A2";
						default=0;
					};
				};
			};
		};
	};
	class Item_Base_F;
	class Item_rhsgref_sdn6_suppressor: Item_Base_F
	{
		editorCategory="EdCat_WeaponAttachments";
	};
	class WeaponHolder_Single_limited_item_F;
	class rhs_magazine_base: WeaponHolder_Single_limited_item_F
	{
		editorCategory="EdCat_Weapons";
	};
	class rhs_magazine_rhs_mag_762x25_8: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_30rnd_1143x23_M1911B_SMG: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_30rnd_1143x23_M1911B_2mag_SMG: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_30rnd_1143x23_M1T_SMG: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_30rnd_1143x23_M1T_2mag_SMG: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_20rnd_765x17_vz61: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_10rnd_765x17_vz61: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_30rnd_556x45_vhs2: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_30rnd_556x45_vhs2_t: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_5Rnd_792x57_kar98k: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_10Rnd_792x57_m76: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_5Rnd_762x54_m38: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_30Rnd_762x39mm_Savz58: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_30Rnd_762x39mm_Savz58_tracer: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_8Rnd_762x63_M2B_M1rifle: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_30Rnd_792x33_SmE_StG: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_25Rnd_792x33_SmE_StG: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_50Rnd_792x57_SmE_drum: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_50Rnd_792x57_SmE_notracers_drum: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_50Rnd_792x57_SmK_drum: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_50Rnd_792x57_SmK_alltracers_drum: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_296Rnd_792x57_SmE_belt: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_296Rnd_792x57_SmE_notracers_belt: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_296Rnd_792x57_SmK_belt: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_296Rnd_792x57_SmK_alltracers_belt: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_mag_rkg3em: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mag_f1: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_m1939e_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_m1939l_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_m1939e_f_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_m1939l_f_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_nbhgr39_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_nbhgr39B_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_sthgr24_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_sthgr24_heerfrag_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_sthgr24_SSfrag_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_sthgr24_x7bundle_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_sthgr43_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_sthgr43_heerfrag_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_sthgr43_SSfrag_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_mkii_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_mkiiia1_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_anm8_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_m15_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_grenade_mki_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_charge_tnt_x2_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_charge_sb3kg_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_1Rnd_00Buck: rhs_magazine_base
	{
	};
	class rhs_magazine_rhsgref_1Rnd_Slug: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_smine35_press_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_smine35_trip_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_smine44_trip_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_smine44_press_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_m2a3b_press_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_m2a3b_trip_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_glasmine43_hz_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_glasmine43_bz_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_a200_bz_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_a200_dz35_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_stockmine43_2m_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_stockmine43_4m_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_m3_pressure_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_M3_tripwire_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_mk2_pressure_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_Mk2_tripwire_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_M7A2_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_mine_TM43_mag: rhs_magazine_base
	{
	};
	class rhs_magazine_rhs_charge_M2tet_x2_mag: rhs_magazine_base
	{
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class SMG_01_Base;
	class SMG_01_F: SMG_01_Base
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class RHS_SAFE_BASE;
	class GP25_Base;
	class RifleGrenade_Base: GP25_Base
	{
		useModelOptics=0;
		useExternalOptic=0;
		reloadaction="RHS_GestureReloadGP30";
		magazines[]={};
		magazineWell[]={};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"rhs_gp25_shot_SoundSet",
				"UGL_Tail_SoundSet",
				"UGL_InteriorTail_SoundSet"
			};
			recoil="M240Recoil";
			recoilProne="M240Recoil";
		};
	};
	class rhs_weap_kar98k_Base_F: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_5Rnd_792x57_kar98k"
		};
		magazineWell[]=
		{
			"CBA_792x57_K98"
		};
		recoil="recoil_dmr_01";
		maxZeroing=2000;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=1.6;
			dispersion=0.0002909;
		};
		class Eventhandlers: Eventhandlers
		{
			class RHS_BoltAction
			{
				fired="[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
			};
		};
		rhs_boltActionSound[]=
		{
			"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt.wss",
			1.42,
			1,
			20
		};
		rhs_boltActionAnim="RHS_GestureRechamberM1903A1";
	};
	class rhs_weap_kar98k: rhs_weap_kar98k_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=81.400002;
		};
		class ItemInfo
		{
		};
	};
	class rhs_weap_m38_Base_F: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_5Rnd_762x54_m38"
		};
		magazineWell[]=
		{
			"CBA_762x54R_Mosin"
		};
		recoil="recoil_dmr_01";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=1.6;
			dispersion=0.000235;
		};
		class Eventhandlers: Eventhandlers
		{
			class RHS_BoltAction
			{
				fired="[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
			};
		};
		rhs_boltActionSound[]=
		{
			"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt.wss",
			1.42,
			1,
			20
		};
		rhs_boltActionAnim="RHS_GestureRechamberM38";
	};
	class rhs_weap_m38: rhs_weap_m38_Base_F
	{
		initSpeed=-0.95999998;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=74.800003;
		};
		class ItemInfo
		{
		};
	};
	class rhs_weap_m38_rail: rhs_weap_m38
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			icon="\rhsgref\addons\rhsgref_weapons\icons\w_m382_inv_ca.paa";
			mass=74.800003;
		};
	};
	class rhs_weap_mosin_sbr: rhs_weap_m38_rail
	{
		initSpeed=-0.89999998;
		recoil="recoil_mmg_02";
		class Single: Single
		{
			reloadTime=1.6;
			dispersion=0.001635;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=74.800003;
		};
	};
	class rhs_weap_XM2010_Base_F;
	class rhs_weap_dsr1: rhs_weap_XM2010_Base_F
	{
		magazines[]=
		{
			"rhsusf_5Rnd_762x51_m118_special_Mag",
			"rhsusf_5Rnd_762x51_m993_Mag",
			"rhsusf_5Rnd_762x51_m62_Mag"
		};
		initSpeed=-0.95999998;
		class WeaponSlotsInfo
		{
			class rhs_mtz_slot
			{
			};
			mass=129.8;
		};
		class ItemInfo
		{
		};
	};
	class rhs_weap_m70_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
		magazineWell[]=
		{
			"CBA_762x39_AK"
		};
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class rhs_npz_slot
			{
			};
		};
		class SAFE: RHS_SAFE_BASE
		{
		};
		class RGMuzzle: RifleGrenade_Base
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.0020999999;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.0020999999;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			burst=3;
		};
	};
	class rhs_weap_m70ab2: rhs_weap_m70_base
	{
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		magazineWell[]=
		{
			"AK_762x39"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=87.339996;
		};
		rhs_fold="rhs_weap_m70ab2_fold";
	};
	class rhs_weap_m70ab2_fold: rhs_weap_m70ab2
	{
		recoil="recoil_mmg_01";
		rhs_fold="rhs_weap_m70ab2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=65.510002;
		};
	};
	class rhs_weap_m70b1: rhs_weap_m70ab2
	{
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=91.739998;
		};
	};
	class rhs_weap_m92: rhs_weap_m70_base
	{
		magazineWell[]=
		{
			"AK_762x39"
		};
		initSpeed=-0.92000002;
		recoil="recoil_akm";
		class Single: Single
		{
			dispersion=0.0025500001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.0025500001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=78.540001;
		};
		rhs_fold="rhs_weap_m92_fold";
	};
	class rhs_weap_m92_fold: rhs_weap_m92
	{
		recoil="recoil_mmg_02";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=58.91;
		};
		rhs_fold="rhs_weap_m92";
	};
	class rhs_weap_m76: rhs_weap_m70_base
	{
		magazines[]=
		{
			"rhsgref_10Rnd_792x57_m76"
		};
		magazineWell[]=
		{
			"CBA_792x57_M76"
		};
		recoil="recoil_akm";
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00095000002;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95.699997;
		};
	};
	class rhs_weap_m21_base: rhs_weap_m70_base
	{
		magazines[]=
		{
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21_t"
		};
		magazineWell[]=
		{
			"CBA_556x45_M21"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.0020999999;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.0020999999;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			burstRangeMax=3;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			burst=3;
			burstRangeMax=3;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class rhs_mtz_slot: SlotInfo
			{
				compatibleItems[]=
				{
					"rhs_acc_mtz"
				};
			};
			mass=91.300003;
		};
	};
	class rhs_weap_m21a: rhs_weap_m21_base
	{
		rhs_mtz="rhs_weap_m21a_pr";
		rhs_fold="rhs_weap_m21a_fold";
	};
	class rhs_weap_m21a_pr: rhs_weap_m21_base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=91.300003;
			class rhs_mtz_slot
			{
			};
		};
		rhs_mtz="rhs_weap_m21a";
	};
	class rhs_weap_m21a_fold: rhs_weap_m21a
	{
		recoil="recoil_mxc";
		rhs_fold="rhs_weap_m21a";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.480003;
		};
	};
	class rhs_weap_m21s: rhs_weap_m21_base
	{
		initSpeed=-0.98000002;
		class Single: Single
		{
			dispersion=0.0032500001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.0032500001;
		};
		rhs_mtz="rhs_weap_m21s_pr";
		rhs_fold="rhs_weap_m21s_fold";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=89.540001;
		};
	};
	class rhs_weap_m21s_pr: rhs_weap_m21a_pr
	{
		initSpeed=-0.98000002;
		class Single: Single
		{
			dispersion=0.0032500001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.0032500001;
		};
		rhs_mtz="rhs_weap_m21s";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=89.540001;
		};
	};
	class rhs_weap_m21s_fold: rhs_weap_m21s
	{
		recoil="recoil_mxc";
		rhs_fold="rhs_weap_m21s";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=67.160004;
		};
	};
	class rhs_weap_savz61: SMG_01_F
	{
		rhs_fold="rhs_weap_savz61_folded";
		magazines[]=
		{
			"rhsgref_20rnd_765x17_vz61",
			"rhsgref_10rnd_765x17_vz61"
		};
		magazineWell[]=
		{
			"CBA_32ACP_Vz61"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=28.16;
		};
		selectionfireanim="zasleh";
		class Single: Single
		{
			reloadTime=0.075000003;
			dispersion=0.00050000002;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.075000003;
			dispersion=0.00050000002;
		};
	};
	class rhs_weap_savz61_folded: rhs_weap_savz61
	{
		mass=28.16;
		recoil="recoil_ebr";
		handAnim[]={};
		class SAFE_PISTOL: RHS_SAFE_BASE
		{
		};
		rhs_fold="rhs_weap_savz61";
	};
	class rhs_weap_savz58_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58_tracer"
		};
		magazineWell[]=
		{
			"CBA_762x39_VZ58"
		};
		recoil="recoil_ktbc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.199997;
		};
		class SAFE: RHS_SAFE_BASE
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075000003;
			dispersion=0.0020999999;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.075000003;
			dispersion=0.0020999999;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			burstRangeMax=3;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			burst=3;
			burstRangeMax=3;
		};
	};
	class rhs_weap_savz58_rail_base: rhs_weap_savz58_base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=69.199997;
		};
	};
	class rhs_weap_savz58_ris_base: rhs_weap_savz58_base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
			};
		};
	};
	class rhs_weap_savz58p: rhs_weap_savz58_base
	{
	};
	class rhs_weap_savz58v: rhs_weap_savz58_base
	{
		recoil="recoil_mxc";
		rhs_fold="rhs_weap_savz58v_fold";
	};
	class rhs_weap_savz58v_fold: rhs_weap_savz58v
	{
		recoil="recoil_mmg_01";
		rhs_fold="rhs_weap_savz58v";
	};
	class rhs_weap_savz58p_rail: rhs_weap_savz58_rail_base
	{
	};
	class rhs_weap_savz58v_rail: rhs_weap_savz58_rail_base
	{
		recoil="recoil_mxc";
		rhs_fold="rhs_weap_savz58v_rail_fold";
	};
	class rhs_weap_savz58v_rail_fold: rhs_weap_savz58v_rail
	{
		recoil="recoil_mmg_01";
		rhs_fold="rhs_weap_savz58v_rail";
	};
	class rhs_weap_savz58v_ris: rhs_weap_savz58_ris_base
	{
		recoil="recoil_mxc";
		rhs_fold="rhs_weap_savz58v_ris_fold";
	};
	class rhs_weap_savz58v_ris_fold: rhs_weap_savz58v_ris
	{
		recoil="recoil_mmg_01";
		rhs_fold="rhs_weap_savz58v_ris";
	};
	class rhs_weap_savz58v_ris_grip1: rhs_weap_savz58v_ris
	{
	};
	class rhs_weap_savz58v_ris_grip2: rhs_weap_savz58v_ris
	{
	};
	class rhs_weap_savz58v_ris_grip3: rhs_weap_savz58v_ris
	{
	};
	class rhs_weap_savz58v_ris_fold_grip1: rhs_weap_savz58v_ris_fold
	{
	};
	class rhs_weap_savz58v_ris_fold_grip2: rhs_weap_savz58v_ris_fold
	{
	};
	class rhs_weap_savz58v_ris_fold_grip3: rhs_weap_savz58v_ris_fold
	{
	};
	class rhs_weap_savz58p_black: rhs_weap_savz58p
	{
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
		};
	};
	class rhs_weap_savz58v_black: rhs_weap_savz58v
	{
		rhs_fold="rhs_weap_savz58v_fold_black";
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
		};
	};
	class rhs_weap_savz58v_fold_black: rhs_weap_savz58v_fold
	{
		rhs_fold="rhs_weap_savz58v_black";
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
		};
	};
	class rhs_weap_savz58p_rail_black: rhs_weap_savz58p_rail
	{
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
		};
	};
	class rhs_weap_savz58v_rail_black: rhs_weap_savz58v_rail
	{
		rhs_fold="rhs_weap_savz58v_rail_fold_black";
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
		};
	};
	class rhs_weap_savz58v_rail_fold_black: rhs_weap_savz58v_rail_fold
	{
		rhs_fold="rhs_weap_savz58v_rail_black";
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
		};
	};
	class rhs_weap_Izh18: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_1Rnd_00Buck",
			"rhsgref_1Rnd_Slug"
		};
		displayname="$STR_RHS_WEAP_IZH18_DISPLAYNAME";
		reloadSound[]=
		{
			"A3\sounds_f\weapons\M320\M320_reload",
			0.1,
			1,
			30
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.5;
		};
		fireSpreadAngle=0.94999999;
		class WeaponSlotsInfo
		{
			mass=71.720001;
		};
	};
	class rhs_weap_vhs2_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_30rnd_556x45_vhs2",
			"rhsgref_30rnd_556x45_vhs2_t"
		};
		magazineWell[]=
		{
			"CBA_556x45_G36"
		};
		recoil="recoil_ktbc";
		memoryPointCamera="eye";
		class SAFE: RHS_SAFE_BASE
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.071000002;
			dispersion=0.0020999999;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.071000002;
			dispersion=0.0020999999;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			burstRangeMax=3;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			burst=3;
			burstRangeMax=3;
		};
		class VHS_BG: UGL_F
		{
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"rhs_mag_M441_HE",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M397_HET",
				"rhs_mag_M4009",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_M661_green",
				"rhs_mag_M662_red",
				"rhs_mag_M713_red",
				"rhs_mag_M714_white",
				"rhs_mag_M715_green",
				"rhs_mag_M716_yellow"
			};
			magazineWell[]=
			{
				"UGL_40x36"
			};
		};
	};
	class rhs_weap_vhsd2: rhs_weap_vhs2_base
	{
		class WeaponSlotsInfo
		{
			mass=85.800003;
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
			};
		};
	};
	class rhs_weap_vhsd2_grip1: rhs_weap_vhsd2
	{
	};
	class rhs_weap_vhsd2_grip2: rhs_weap_vhsd2
	{
	};
	class rhs_weap_vhsd2_grip3: rhs_weap_vhsd2
	{
	};
	class rhs_weap_vhsd2_bg: rhs_weap_vhs2_base
	{
		class WeaponSlotsInfo
		{
			mass=127.6;
		};
	};
	class rhs_weap_vhsd2_ct15x: rhs_weap_vhs2_base
	{
		class WeaponSlotsInfo
		{
			mass=94.599998;
			class GripodSlot: rhs_western_rifle_gripod_slot
			{
			};
		};
	};
	class rhs_weap_vhsd2_ct15x_grip1: rhs_weap_vhsd2_ct15x
	{
	};
	class rhs_weap_vhsd2_ct15x_grip2: rhs_weap_vhsd2_ct15x
	{
	};
	class rhs_weap_vhsd2_ct15x_grip3: rhs_weap_vhsd2_ct15x
	{
	};
	class rhs_weap_vhsd2_bg_ct15x: rhs_weap_vhsd2_ct15x
	{
		class WeaponSlotsInfo
		{
			mass=136.39999;
		};
	};
	class rhs_weap_vhsk2: rhs_weap_vhsd2
	{
		initspeed=-0.96700001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=82.5;
		};
	};
	class rhs_weap_vhsk2_grip1: rhs_weap_vhsk2
	{
	};
	class rhs_weap_vhsk2_grip2: rhs_weap_vhsk2
	{
	};
	class rhs_weap_vhsk2_grip3: rhs_weap_vhsk2
	{
	};
	class rhs_weap_stgw57_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_24rnd_75x55_Stgw57"
		};
		magazineWell[]=
		{
			"CBA_75x55_STGW57"
		};
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=125.4;
		};
		class SAFE: RHS_SAFE_BASE
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.12;
			dispersion=0.0020999999;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.12;
			dispersion=0.0020999999;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
		class fullauto_medium: FullAuto
		{
			burst=3;
		};
	};
	class rhs_weap_stgw57: rhs_weap_stgw57_base
	{
	};
	class rhs_weap_m3a1_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_30rnd_1143x23_M1911B_SMG",
			"rhsgref_30rnd_1143x23_M1T_SMG",
			"rhsgref_30rnd_1143x23_M1911B_2mag_SMG",
			"rhsgref_30rnd_1143x23_M1T_2mag_SMG"
		};
		magazineWell[]=
		{
			"CBA_45ACP_Grease"
		};
		class SAFE: RHS_SAFE_BASE
		{
		};
		recoil="recoil_mx";
		cursor="smg";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.15000001;
			dispersion=0.00131;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_auto_prone_smg_01";
		};
	};
	class rhs_weap_m3a1: rhs_weap_m3a1_base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79.400002;
		};
		initSpeed=280;
	};
	class rhs_weap_m3a1_specops: rhs_weap_m3a1_base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79.400002;
		};
		initSpeed=280;
	};
	class rhs_weap_MP44_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_30Rnd_792x33_SmE_StG",
			"rhsgref_25Rnd_792x33_SmE_StG"
		};
		magazineWell[]=
		{
			"CBA_792x33_StG"
		};
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.2;
		};
		class SAFE: RHS_SAFE_BASE
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.103448;
			dispersion=0.0020999999;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.103448;
			dispersion=0.0020999999;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
		class fullauto_medium: FullAuto
		{
			burst=3;
		};
	};
	class rhs_weap_MP44: rhs_weap_MP44_base
	{
	};
	class rhs_weap_M1garand_Base_F: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle"
		};
		magazineWell[]={};
		class SAFE: RHS_SAFE_BASE
		{
		};
		class ADS: RHS_SAFE_BASE
		{
			magazines[]=
			{
				"rhs_mag_m1garand_ads"
			};
		};
		recoil="recoil_dmr_01";
		maxZeroing=1200;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.00044999999;
		};
		class Eventhandlers: Eventhandlers
		{
			class RHSGREF_garandPing
			{
				fired="_this call RHS_fnc_m1Handler;";
			};
		};
	};
	class rhs_weap_m1garand_sa43: rhs_weap_M1garand_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=94.800003;
		};
		class ItemInfo
		{
		};
	};
	class rhs_weap_mg42_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhsgref_50Rnd_792x57_SmE_drum",
			"rhsgref_50Rnd_792x57_SmE_notracers_drum",
			"rhsgref_50Rnd_792x57_SmK_drum",
			"rhsgref_50Rnd_792x57_SmK_alltracers_drum",
			"rhsgref_296Rnd_792x57_SmE_belt",
			"rhsgref_296Rnd_792x57_SmE_notracers_belt",
			"rhsgref_296Rnd_792x57_SmK_belt",
			"rhsgref_296Rnd_792x57_SmK_alltracers_belt"
		};
		maxZeroing=2000;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=254.5;
		};
		recoil="recoil_zafir";
		class manual: Mode_FullAuto
		{
			reloadTime=0.050000001;
			dispersion=0.00079999998;
		};
		class far: close
		{
			burst=5;
			burstRangeMax=12;
		};
		rhs_deployedHandAnim="RHS_GestureHoldMG42";
	};
	class rhs_weap_mg42: rhs_weap_mg42_base
	{
	};
	class rhs_weap_mg42_aa: rhs_weap_mg42
	{
	};
	class rhs_weap_m79: Rifle_Base_F
	{
		displayname="M79";
		magazines[]=
		{
			"rhs_mag_M441_HE",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M781_Practice",
			"rhs_mag_M397_HET",
			"rhs_mag_M4009",
			"rhs_mag_m576",
			"rhs_mag_M585_white",
			"rhs_mag_M661_green",
			"rhs_mag_M662_red",
			"rhs_mag_M713_red",
			"rhs_mag_M714_white",
			"rhs_mag_M715_green",
			"rhs_mag_M716_yellow"
		};
		magazineWell[]=
		{
			"UGL_40x36"
		};
		recoil="recoil_gm6";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.400002;
		};
		class SAFE: RHS_SAFE_BASE
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075000003;
			dispersion=0.0002909;
		};
	};
	class rhs_weap_fnfal_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhs_mag_20Rnd_762x51_m80_fnfal"
		};
		magazineWell[]=
		{
			"CBA_762x51_FAL",
			"CBA_762x51_FAL_L"
		};
		recoil="rhs_recoil_fnfal";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95;
		};
		class SAFE: RHS_SAFE_BASE
		{
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.085714303;
			dispersion=0.0020999999;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.085714303;
			dispersion=0.0020999999;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			burstRangeMax=3;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			burst=3;
			burstRangeMax=3;
		};
	};
	class rhs_weap_fnfal50_61_base: rhs_weap_fnfal_base
	{
	};
	class rhs_weap_fnfal50_62_base: rhs_weap_fnfal_base
	{
	};
	class rhs_weap_fnfal50_63_base: rhs_weap_fnfal_base
	{
	};
	class rhs_weap_fnfal50_64_base: rhs_weap_fnfal_base
	{
	};
	class rhs_weap_l1a1_base: rhs_weap_fnfal_base
	{
		displayname="L1A1 (Polymer)";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class Single: Single
		{
			reloadTime=0.088888898;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			burstRangeMax=3;
		};
		class single_medium_optics1: Single
		{
		};
		class single_far_optics2: single_medium_optics1
		{
		};
	};
	class rhs_weap_l1a1_wood_base: rhs_weap_l1a1_base
	{
		displayname="L1A1 (Wood)";
	};
	class rhs_weap_l1a1: rhs_weap_l1a1_base
	{
	};
	class rhs_weap_l1a1_wood: rhs_weap_l1a1_wood_base
	{
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};
	class rhs_weap_rpg75: Launcher_Base_F
	{
		rhs_disposable=1;
		reloadTime=1;
		magazineReloadTime=1;
		recoil="recoil_single_law";
		magazines[]=
		{
			"rhs_rpg75_mag"
		};
		dispersion=0.15000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=52.799999;
		};
		class ItemInfo
		{
		};
		class Eventhandlers: EventHandlers
		{
			class RHS_DisposableWeapon
			{
				fired="_this call rhs_fnc_disposable;";
			};
		};
	};
	class rhs_weap_rpg75_used: rhs_weap_rpg75
	{
		displayname="RPG-75 (used)";
		magazines[]=
		{
			"rhs_launcher_dummy_mag"
		};
	};
	class rhs_weap_panzerfaust60: Launcher_Base_F
	{
		displayname="Panzerfaust 60";
		recoil="recoil_single_law";
		rhs_disposable=1;
		reloadTime=1;
		magazineReloadTime=1;
		dispersion=0.25;
		magazines[]=
		{
			"rhs_panzerfaust60_mag"
		};
		class Eventhandlers: EventHandlers
		{
			class RHS_DisposableWeapon
			{
				fired="_this call rhs_fnc_disposable;";
			};
		};
	};
	class rhs_weap_panzerfaust60_used: rhs_weap_panzerfaust60
	{
		displayname="Panzerfaust 60 (used)";
		magazines[]=
		{
			"rhs_launcher_dummy_mag"
		};
	};
	class acc_pointer_IR;
	class acc_flashlight;
	class muzzle_snds_H;
	class rhsusf_acc_compm4;
	class rhs_acc_scope_base: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13.64;
		};
	};
	class rhsgref_acc_RX01_camo: rhsusf_acc_compm4
	{
	};
	class rhsgref_acc_RX01_NoFilter_camo: rhsusf_acc_compm4
	{
	};
	class rhs_acc_mtz: rhs_acc_scope_base
	{
	};
	class rhsgref_muzzleFlash_L1A1: ItemCore
	{
	};
	class rhsgref_silencer_base: muzzle_snds_H
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=7;
			class MagazineCoef
			{
				initSpeed=1.01;
			};
			class AmmoCoef
			{
				hit=1;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
		};
	};
	class rhsgref_sdn6_suppressor: rhsgref_silencer_base
	{
	};
	class rhsgref_acc_zendl: rhsgref_silencer_base
	{
		class ItemInfo: ItemInfo
		{
			mass=5;
			soundTypeIndex=0;
			class MagazineCoef: MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef: AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				cost=1;
			};
			class MuzzleCoef: MuzzleCoef
			{
				dispersionCoef="0.96f";
				fireLightCoef="0.9f";
				recoilCoef="0.79f";
				recoilProneCoef="0.79f";
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
		};
	};
	class rhsgref_acc_falMuzzle_l1a1: rhsgref_silencer_base
	{
		class ItemInfo: ItemInfo
		{
			mass=5;
			soundTypeIndex=0;
			class MagazineCoef: MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef: AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				cost=1;
			};
			class MuzzleCoef: MuzzleCoef
			{
				dispersionCoef="0.97f";
				fireLightCoef="0.9f";
				recoilCoef="0.95f";
				recoilProneCoef="0.95f";
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="rhsgref_muzzleFlash_L1A1";
		};
	};
	class rhsgref_K98k_acc_sighthood_add: acc_flashlight
	{
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=2;
			class Pointer
			{
			};
			class FlashLight
			{
				color[]={0,0,0};
				ambient[]={0,0,0};
				size=0;
				innerAngle=0;
				outerAngle=0;
				coneFadeCoef=10;
				intensity=0;
				dayLight=0;
				useFlare=0;
				FlareSize=0;
				flareMaxDistance="100.0f";
				onlyInNvg=0;
				position="flashdir";
				direction="flash";
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=0;
					hardLimitEnd=0;
				};
				scale[]={0};
			};
		};
	};
	class rhsgref_mg42_acc_AAsight: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
		};
	};
	class rhsgref_acc_l2a2: rhs_acc_scope_base
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=17.6;
		};
	};
	class rhsgref_acc_l2a2_3d: rhsgref_acc_l2a2
	{
		class ItemInfo: ItemInfo
		{
		};
	};
	class rhsgref_acc_l1a1_l2a2: rhsgref_acc_l2a2
	{
		rhs_optic_base="rhsgref_acc_l1a1_l2a2";
	};
	class rhsgref_acc_l1a1_l2a2_3d: rhsgref_acc_l2a2_3d
	{
		rhs_optic_base="rhsgref_acc_l1a1_l2a2";
	};
	class rhsgref_acc_anpvs2_base: rhs_acc_scope_base
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=14;
		};
	};
	class rhsgref_acc_l1a1_anpvs2: rhsgref_acc_anpvs2_base
	{
	};
	class rhs_weap_m21s_eo: rhs_weap_m21s_pr
	{
	};
	class rhs_weap_m76_pso: rhs_weap_m76
	{
	};
	class rhs_weap_vhsd2_eo: rhs_weap_vhsd2
	{
	};
	class rhs_weap_l1a1_suit: rhs_weap_l1a1
	{
	};
	class rhs_weap_l1a1_pvs2: rhs_weap_l1a1
	{
	};
	class rhs_weap_pya;
	class rhs_weap_tt33: rhs_weap_pya
	{
		class SAFE_PISTOL: RHS_SAFE_BASE
		{
		};
		class WeaponSlotsInfo
		{
			mass=18.26;
		};
		maxZeroing=25;
		magazines[]=
		{
			"rhs_mag_762x25_8"
		};
		magazineWell[]=
		{
			"CBA_762x25_TT"
		};
		dispersion=0.02;
		ffCount=1;
	};
	class rhs_weap_type94_new: rhs_weap_pya
	{
		class WeaponSlotsInfo
		{
			mass=18.26;
		};
		maxZeroing=25;
		magazines[]=
		{
			"rhs_mag_6x8mm_mhp"
		};
		dispersion=0.02;
		ffCount=1;
	};
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher
		{
		};
		class rhsgref_Throw_Grenade: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_mag_f1"
			};
		};
		class rhsgref_throw_ATGrenade: ThrowMuzzle
		{
			magazines[]=
			{
				"rhsgref_mag_rkg3em"
			};
			class Eventhandlers
			{
				class RHS_ThrowAction
				{
					fired="[_this select 0, _this select 6] call RHS_FNC_RKG3_IMPACT;";
				};
			};
		};
		class rhsgref_Throw_tnt_x2: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_charge_tnt_x2_mag"
			};
		};
		class rhsgref_Throw_sb3kg: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_charge_sb3kg_mag"
			};
		};
		class rhsgref_Throw_m1939: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_m1939e_mag",
				"rhs_grenade_m1939l_mag"
			};
		};
		class rhsgref_Throw_m1939_f: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_m1939e_f_mag",
				"rhs_grenade_m1939l_f_mag"
			};
		};
		class rhsgref_Throw_nbhgr39: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_nbhgr39_mag",
				"rhs_grenade_nbhgr39B_mag"
			};
		};
		class rhsgref_Throw_sthgr24: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr24_mag"
			};
		};
		class rhsgref_Throw_sthgr24_f: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr24_heerfrag_mag",
				"rhs_grenade_sthgr24_SSfrag_mag"
			};
		};
		class rhsgref_Throw_sthgr24_x7bundle: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr24_x7bundle_mag"
			};
		};
		class rhsgref_Throw_sthgr43: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr43_mag"
			};
		};
		class rhsgref_Throw_sthgr43_f: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr43_heerfrag_mag",
				"rhs_grenade_sthgr43_SSfrag_mag"
			};
		};
		class rhsgref_Throw_mki: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_mki_mag"
			};
		};
		class rhsgref_Throw_mkii: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_mkii_mag"
			};
		};
		class rhsgref_Throw_mkiii: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_mkiiia1_mag"
			};
		};
		class rhsgref_Throw_anm8: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_anm8_mag"
			};
		};
		class rhsgref_Throw_m15: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_m15_mag"
			};
		};
	};
	class Default;
	class Put: Default
	{
		class PutMuzzle: Default
		{
		};
		class rhsgref_Mine_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"rhs_mine_smine35_press_mag",
				"rhs_mine_smine35_trip_mag",
				"rhs_mine_smine44_press_mag",
				"rhs_mine_smine44_trip_mag",
				"rhs_mine_glasmine43_hz_mag",
				"rhs_mine_glasmine43_bz_mag",
				"rhs_mine_stockmine43_2m_mag",
				"rhs_mine_stockmine43_4m_mag",
				"rhs_mine_a200_bz_mag",
				"rhs_mine_a200_dz35_mag",
				"rhs_mine_TM43_mag",
				"rhs_mine_m2a3b_press_mag",
				"rhs_mine_m2a3b_trip_mag",
				"rhs_mine_m3_pressure_mag",
				"rhs_mine_mk2_pressure_mag",
				"rhs_mine_M3_tripwire_mag",
				"rhs_mine_Mk2_tripwire_mag",
				"rhs_mine_M7A2_mag",
				"rhs_charge_M2tet_x2_mag"
			};
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
			class acc_mtz
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_mtz.sqf";
				description="MTZ mounting handler";
			};
			class acc_mtz_handler
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_mtz_dismount.sqf";
				description="MTZ dismounting handler";
			};
			class rkg3_impact
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_rkg3_impact.sqf";
			};
			class sight_l2a2
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_sight_l2a2.sqf";
			};
			class virtualAmmoBoxGREF
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\virtualAmmoBox.sqf";
				description="[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxGREF, make a object virtual ammo box with GREF gear inside";
			};
			class m1Handler
			{
				file="RHSGREF\addons\rhsgref_c_weapons\scripts\rhs_m1Handler.sqf";
				description="Handles the Ping Sound.";
			};
			class m1garand_ads
			{
				file="RHSGREF\addons\rhsgref_c_weapons\scripts\rhs_m1garand_ads.sqf";
			};
		};
	};
};
class CfgSounds;  //found empty after stripping
	class rhs_kar98k_bolt
	{
		name="rhs_m2010_bolt";
		sound[]=
		{
			"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt",
			0.41999999,
			1,
			20
		};
		titles[]={};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class RHS_GestureRechamberM1903A1: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\rechamber_1903a1_standing.rtm";
			speed=0.59998;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class RHS_GestureRechamberM1903A1_Prone: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\rechamber_1903a1_prone.rtm";
			speed=0.59998;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.0099999998;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class RHS_GestureRechamberM1903A1_Context: RHS_GestureRechamberM1903A1
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM1903A1: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_1903a1_standing.rtm";
			speed=0.1875;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.02667,0,0.93333,0,0.94889998,1};
			leftHandIKEnd=1;
		};
		class RHS_GestureReloadM1903A1_Prone: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_1903a1_prone.rtm";
			speed=0.1875;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.02667,0,0.93333,0,0.94889998,1};
			leftHandIKEnd=1;
		};
		class RHS_GestureReloadM1903A1_Context: RHS_GestureReloadM1903A1
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureRechamberM38: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\9130_rechamber_standing.rtm";
			speed=0.59998;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class RHS_GestureRechamberM38_Prone: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\9130_rechamber_prone.rtm";
			speed=0.59998;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.0099999998;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class RHS_GestureRechamberM38_Context: RHS_GestureRechamberM38
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM38: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\9130_reload_standing.rtm";
			speed=-4.9333;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.033,0,0.91000003,0,0.94,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.033,0,0.96600002,0,0.99000001,1};
			leftHandIKEnd=1;
		};
		class RHS_GestureReloadM38_Prone: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\9130_reload_prone.rtm";
			speed=0.1875;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.02667,0,0.93333,0,0.94889998,1};
			leftHandIKEnd=1;
		};
		class RHS_GestureReloadM38_Context: RHS_GestureReloadM38
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM1Garand: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_m1_garand.rtm";
			speed=0.240385;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.03125,0,0.88999999,0,0.9375,1};
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
		};
		class RHS_GestureReloadM1Garand_Prone: RHS_GestureReloadM1Garand
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_m1_garand_prone.rtm";
		};
		class RHS_GestureReloadM1Garand_Context: RHS_GestureReloadM1Garand
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM3Grease: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_M3A1.rtm";
			speed=0.28999999;
			leftHandIKCurve[]={0,1,0.050000001,0,0.93000001,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.30000001,0,0.98000002,0,0.99900001,1};
		};
		class RHS_GestureReloadM3Grease_prone: RHS_GestureReloadM3Grease
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_M3A1_prone.rtm";
		};
		class RHS_GestureReloadM3Grease_Context: RHS_GestureReloadM3Grease_prone
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadMG42: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_mg42_standing.rtm";
			speed=-10.233334;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.029315,0,0.120521,0,0.14005999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.146579,1,0.16611999,0,0.94462001,0,0.97068,1};
		};
		class RHS_GestureReloadMG42_Prone: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_mg42_prone.rtm";
			speed=-10.233334;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.029315,0,0.120521,0,0.14005999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.146579,1,0.16611999,0,0.94462001,0,0.97068,1};
		};
		class RHS_GestureReloadMG42_Context: RHS_GestureReloadMG42
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadMP44: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_MP44.rtm";
			speed=0.243902;
			leftHandIKCurve[]={0,1,0.050000001,0,0.93000001,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.89999998,0,0.94999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadMP44_prone: RHS_GestureReloadMP44
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_MP44_prone.rtm";
		};
		class RHS_GestureReloadMP44_Context: RHS_GestureReloadMP44
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadFNFAL: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_FNFAL.rtm";
			speed=0.25;
			leftHandIKCurve[]={0,1,0.029999999,0,0.93000001,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.94,0,0.99000001,1};
		};
		class RHS_GestureReloadFNFAL_prone: RHS_GestureReloadFNFAL
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_fnfal_prone.rtm";
			mask="handsWeapon";
		};
		class RHS_GestureReloadFNFAL_Context: RHS_GestureReloadFNFAL_prone
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadIZh18: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_IZh18.rtm";
			speed=0.20999999;
			leftHandIKCurve[]={0,1,0.050000001,0,0.93000001,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.89999998,0,0.94999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadIZh18_prone: RHS_GestureReloadIZh18
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_izh18_prone.rtm";
		};
		class RHS_GestureReloadIZh18_Context: RHS_GestureReloadIZh18_prone
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM79GL: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_M79GL.rtm";
			speed=0.27026999;
			leftHandIKCurve[]={0,1,0.2,0,0.94999999,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,0.99000001,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadM79GL_prone: RHS_GestureReloadM79GL
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_M79GL_prone.rtm";
			mask="handsWeapon";
		};
		class RHS_GestureReloadM79GL_Context: RHS_GestureReloadM79GL_prone
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureHoldMG42: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\rhs_gesture_MG42.rtm";
			looped=1;
			speed=1;
			mask="leftHand";
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0};
			enableOptics=1;
			canPullTrigger=1;
			disableWeapons=0;
		};
		class RHS_GestureHoldMG42_prone: RHS_GestureHoldMG42
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\rhs_gesture_MG42_prone.rtm";
		};
		class RHS_GestureHoldMG42_Context: RHS_GestureHoldMG42
		{
			mask="handsWeapon_context";
		};
	};
};
