class CfgPatches
{
	class rhssaf_c_weapons
	{
		units[]=
		{
			"rhssaf_weapons_crate",
			"Item_rhssaf_zrak_rd7j"
		};
		weapons[]=
		{
			"rhs_weap_cz99",
			"rhs_weap_m21a",
			"rhs_weap_m21a_pr",
			"rhs_weap_m21a_fold",
			"rhs_weap_m21a_pbg40",
			"rhs_weap_m21a_pr_pbg40",
			"rhs_weap_m21s",
			"rhs_weap_m21s_fold",
			"rhs_weap_m21s_pr",
			"rhs_weap_m70ab2",
			"rhs_weap_m70ab2_fold",
			"rhs_weap_m70b1",
			"rhs_weap_m70b1n",
			"rhs_weap_m70b3n",
			"rhs_weap_m70b3n_pbg40",
			"rhs_weap_m76",
			"rhs_weap_m84",
			"rhs_weap_m92",
			"rhs_weap_m92_fold",
			"rhs_weap_scorpion",
			"rhs_weap_g36c",
			"rhs_weap_g36kv",
			"rhs_weap_g36kv_ag36",
			"rhs_weap_m82a1",
			"rhs_weap_minimi_para_railed",
			"rhssaf_zrak_rd7j"
		};
		magazines[]=
		{
			"rhssaf_mag_15Rnd_9x19_FMJ",
			"rhssaf_mag_15Rnd_9x19_JHP",
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21_t",
			"rhssaf_30rnd_556x45_EPR_G36",
			"rhssaf_30rnd_556x45_SOST_G36",
			"rhssaf_30rnd_556x45_SPR_G36",
			"rhssaf_100rnd_556x45_EPR_G36",
			"rhssaf_30rnd_556x45_Tracers_G36",
			"rhssaf_30rnd_556x45_TDIM_G36",
			"rhssaf_30rnd_556x45_MDIM_G36",
			"rhssaf_10Rnd_792x57_m76",
			"rhssaf_10Rnd_792x57_m76_tracer",
			"rhssaf_250Rnd_762x54R",
			"rhssaf_mine_pma3_mag",
			"rhssaf_mine_tma4_mag",
			"rhssaf_mine_mrud_a_mag",
			"rhssaf_mine_mrud_b_mag",
			"rhssaf_mine_mrud_c_mag",
			"rhssaf_mine_mrud_d_mag",
			"rhssaf_tm100_mag",
			"rhssaf_tm200_mag",
			"rhssaf_tm500_mag",
			"rhssaf_mag_br_m75",
			"rhssaf_mag_br_m84",
			"rhssaf_mag_brd_m83_white",
			"rhssaf_mag_brd_m83_yellow",
			"rhssaf_mag_brd_m83_green",
			"rhssaf_mag_brd_m83_red",
			"rhssaf_mag_brd_m83_blue",
			"rhssaf_mag_brd_m83_orange",
			"rhssaf_mag_brk_m79",
			"rhssaf_mag_rshb_p98",
			"rhssaf_mag_brz_m88",
			"rhsgref_20rnd_765x17_vz61",
			"rhsgref_10rnd_765x17_vz61"
		};
		ammo[]=
		{
			"rhssaf_ammo_556x45_EPR",
			"rhssaf_ammo_556x45_EPR_Tracer",
			"rhssaf_ammo_556x45_SOST",
			"rhssaf_ammo_556x45_SPR",
			"rhssaf_ammo_556x45_Ball_Tracer_Dim",
			"rhs_ammo_792x57_Ball",
			"rhssaf_ammo_br_m75",
			"rhssaf_ammo_br_m84",
			"rhssaf_ammo_brd_m83_white",
			"rhssaf_ammo_brd_m83_yellow",
			"rhssaf_ammo_brd_m83_green",
			"rhssaf_ammo_brd_m83_red",
			"rhssaf_mag_brd_m83_blue",
			"rhssaf_mag_brd_m83_orange",
			"rhssaf_ammo_rshb_p98",
			"rhssaf_ammo_brz_m88",
			"rhssaf_ammo_brk_m79",
			"rhssaf_ammo_brk_m79_fly",
			"rhssaf_ammo_brk_m79_impact",
			"rhssaf_ammo_brk_m79_penetrator"
		};
		name="RHS: SAF Weapons configuration";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class rhs_russian_rifle_scopes_slot;
class rhs_picattinny_russian_rifle_scopes_slot;
class rhs_russian_ak_barrel_slot;
class rhs_western_rifle_underbarrel_slot;
class rhs_western_rifle_scopes_slot;
class rhs_western_rifle_scopes_slot_short;
class rhs_western_rifle_laser_slot;
class rhs_western_rifle_muzzle_slot;
class rhs_western_rifle_gripod_slot;
class rhs_western_mg_gripod_slot;
class rhs_Underslot_m249_ris;
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class CfgGesturesMale
{
	class Default;
	class States
	{
		class RHS_GestureReloadG36A1: Default
		{
			file="rhssaf\addons\rhssaf_m_weapon_g36\anim\standard\reload_G36_standing.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadG36A1_Prone: Default
		{
			file="rhssaf\addons\rhssaf_m_weapon_g36\anim\standard\reload_G36_prone.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.15000001;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadG36A1_Context: RHS_GestureReloadG36A1
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadG36V: Default
		{
			file="rhssaf\addons\rhssaf_m_weapon_g36\anim\varient\reload_G36V_standing.rtm";
			speed=0.25641027;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKCurve[]={0,1,0.65450001,0,0.72727001,0,0.75449997,1};
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadG36V_Prone: Default
		{
			file="rhssaf\addons\rhssaf_m_weapon_g36\anim\varient\reload_G36V_prone.rtm";
			speed=0.25641027;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.15000001;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKCurve[]={0,1,0.65450001,0,0.72727001,0,0.75449997,1};
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadG36V_Context: RHS_GestureReloadG36V
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadAG36: Default
		{
			file="rhssaf\addons\rhssaf_m_weapon_g36\anim\ag36\reload_aG36_standing.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadAG36_Prone: Default
		{
			file="rhssaf\addons\rhssaf_m_weapon_g36\anim\ag36\reload_aG36_prone.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.15000001;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadAG36_Context: RHS_GestureReloadAG36
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadG36MLI: Default
		{
			file="rhssaf\addons\rhssaf_m_weapon_g36\anim\mli\reload_g36mli_standing.rtm";
			speed=0.27272728;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKCurve[]={0,1,0.65450001,0,0.72727001,0,0.75449997,1};
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadG36MLI_Prone: Default
		{
			file="rhssaf\addons\rhssaf_m_weapon_g36\anim\mli\reload_g36mli_prone.rtm";
			looped=0;
			speed=0.27272728;
			mask="handsWeapon";
			headBobStrength=0.15000001;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.07,0,0.81,0,0.86000001,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.65450001,0,0.72727001,0,0.75449997,1};
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadG36MLI_Context: RHS_GestureReloadG36MLI
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM21GP: Default
		{
			file="\rhssaf\addons\rhssaf_c_weapons\anims\reload_m21_gp.rtm";
			looped=0;
			speed=-4.8000002;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0.631944,1,0.65792203,0,0.84027803,0,0.875,1};
			leftHandIKCurve[]={0,1,0.03125,0,0.868056,0,0.95999998,1};
			leftHandIKBeg=0;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadM21GP_Prone: Default
		{
			file="\rhssaf\addons\rhssaf_c_weapons\anims\reload_m21_gp_prone.rtm";
			looped=0;
			speed=-4.8000002;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,1,0.075000003,0,0.85000002,0,0.93000001,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadM21GP_Context: RHS_GestureReloadM21GP
		{
			mask="handsWeapon_context";
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class rhs_ammo_base_penetrator;
	class B_9x21_Ball;
	class rhs_ammo_9x17: B_9x21_Ball
	{
		hit=5.0700002;
		typicalSpeed=272;
		airFriction=-0.0017671455;
		caliber=0.838;
		deflecting=37;
	};
	class B_556x45_Ball;
	class rhs_B_762x39_Ball;
	class rhssaf_ammo_762x39_m82_api: rhs_B_762x39_Ball
	{
		hit=8.8000002;
		typicalSpeed=718;
		airFriction=-0.0016519;
		caliber=0.91299999;
		deflecting=15;
		tracerStartTime=0.15099999;
		tracerEndTime=1;
	};
	class rhssaf_ammo_556x45_EPR: B_556x45_Ball
	{
		hit=8.1145811;
		typicalSpeed=905.25598;
		airFriction=-0.0011543788;
		caliber=0.85500002;
		deflecting=21;
	};
	class rhssaf_ammo_556x45_EPR_Tracer: rhssaf_ammo_556x45_EPR
	{
		nvgOnly=0;
	};
	class rhssaf_ammo_556x45_SOST: B_556x45_Ball
	{
		hit=9.038702;
		typicalSpeed=857.0976;
		airFriction=-0.0012817576;
		caliber=0.755;
		deflecting=18;
	};
	class rhssaf_ammo_556x45_SPR: B_556x45_Ball
	{
		hit=11.570251;
		typicalSpeed=868.67999;
		airFriction=-0.0010867938;
		caliber=0.61500001;
		deflecting=16;
	};
	class B_556x45_Ball_Tracer_Red;
	class rhssaf_ammo_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Red
	{
		nvgOnly=1;
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
	class GrenadeBase;
	class rhssaf_ammo_ttm_m60: GrenadeBase
	{
		simulation="shotShell";
		hit=100;
		indirectHit=25;
		indirectHitRange=15;
		explosive=1;
		cost=500;
		deflecting=5;
		airFriction=-0.0015;
		fuseDistance=30;
		whistleDist=5;
	};
	class rhssaf_ammo_tkm_m60: GrenadeBase
	{
		simulation="shotShell";
		hit=150;
		indirectHit=25;
		indirectHitRange=25;
		explosive=1;
		cost=530;
		deflecting=5;
		airFriction=-0.0015;
		fuseDistance=30;
		whistleDist=5;
	};
	class rhs_ammo_m80_penetrator: rhs_ammo_base_penetrator
	{
		caliber="(300/((15*1000)/1000))";
	};
	class rhs_rpg26_rocket;
	class rhs_ammo_m80_rocket: rhs_rpg26_rocket
	{
		warheadName="HEAT";
		submunitionAmmo="rhs_ammo_m80_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		airFriction=0.25999999;
		sideAirFriction=0.001;
		hit=180;
		indirectHit=21;
		maxSpeed=190;
		timeToLive=4;
	};
	class GrenadeHand;
	class rhssaf_ammo_br_m75: GrenadeHand
	{
		explosionTime=4;
	};
	class rhssaf_ammo_br_m84: GrenadeHand
	{
		explosionTime=4;
	};
	class SmokeShell;
	class rhssaf_ammo_brd_m83_white: SmokeShell;  //found empty after stripping
	class rhssaf_ammo_brd_m83_yellow: rhssaf_ammo_brd_m83_white
	{
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
	};
	class rhssaf_ammo_brd_m83_green: rhssaf_ammo_brd_m83_white
	{
		smokeColor[]={0.21250001,0.62580001,0.48910001,1};
	};
	class rhssaf_ammo_brd_m83_red: rhssaf_ammo_brd_m83_white
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	class rhssaf_ammo_brd_m83_blue: rhssaf_ammo_brd_m83_white
	{
		smokeColor[]={0.25490001,0.41170001,1,1};
	};
	class rhssaf_ammo_brd_m83_orange: rhssaf_ammo_brd_m83_white
	{
		smokeColor[]={1,0.64700001,0,1};
	};
	class rhssaf_ammo_rshb_p98: GrenadeHand
	{
		hit=0.1;
		indirectHit=0.1;
		indirectHitRange=15;
		ExplosionEffects="RHSUSF_flashbang_15";
		craterEffects="RHSUSF_flashbang_Crater";
		explosionTime=1.5;
		cost=10;
	};
	class rhssaf_ammo_brz_m88: SmokeShell
	{
		cost=150;
		timeToLive=25;
		effectsSmoke="RHS_Incendenary_Grenade";
		SmokeShellSoundLoop1[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop1",
			0.12589253,
			1,
			16.5
		};
		SmokeShellSoundLoop2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop2",
			0.12589253,
			1,
			16.5
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			0.5,
			"SmokeShellSoundLoop2",
			0.5
		};
		aiAmmoUsageFlags="1 + 2 + 64";
	};
	class rhssaf_ammo_brk_m79: GrenadeHand
	{
		rhs_submunition="rhssaf_ammo_brk_m79_fly";
		rhs_submunition_uxo="rhssaf_ammo_brk_m79_uxo";
		rhs_fuseTime[]={0.30000001,0.34999999,0.40000001};
		simulationStep=0.001;
		explosionTime=-1;
		timeToLive=5;
		SoundSetExplosion[]={};
		multiSoundHit[]={};
		hit=0.1;
		indirectHit=0;
	};
	class rhssaf_ammo_brk_m79_uxo: SmokeShell
	{
		smokeColor[]={0,0,0,0};
		grenadeFireSound[]={};
		grenadeBurningSound[]={};
	};
	class rhssaf_ammo_brk_m79_fly: GrenadeHand
	{
		rhs_submunition="rhssaf_ammo_brk_m79_explosion";
		hit=180;
		indirectHit=12;
		indirectHitRange=3;
		explosionTime=-1;
		SoundSetExplosion[]={};
	};
	class rhssaf_ammo_brk_m79_explosion: BulletBase
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
		submunitionAmmo="rhssaf_ammo_brk_m79_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk12_penetrator;
	class rhssaf_ammo_brk_m79_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber="(440/((15* 1000)/1000))";
	};
	class Sh_82mm_AMOS;
	class rhssaf_mortar_M73_HE: Sh_82mm_AMOS
	{
		hit=100;
		indirectHit=30;
		indirectHitRange=10;
	};
	class MineBase;
	class DirectionalBombBase;
	class PipeBombBase;
	class rhssaf_mine_pma3_ammo: MineBase
	{
		hit=3;
		indirectHit=40;
		indirectHitRange=0.1;
		mineModelDisabled="\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_d";
		icon="iconExplosiveAP";
		defaultMagazine="rhssaf_mine_pma3_mag";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\mines\mine_debris_2",
			3.1622777,
			1,
			2000
		};
		whistleDist=8;
		cost=200;
		mineInconspicuousness=3;
		mineTrigger="RangeTriggerShort";
	};
	class rhssaf_mine_tma4_ammo: MineBase
	{
		hit=2200;
		indirectHit=1250;
		indirectHitRange=2;
		mineModelDisabled="\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_d";
		icon="iconExplosiveAT";
		defaultMagazine="rhssaf_mine_tma4_mag";
		SoundSetExplosion[]=
		{
			"ATmine_Exp_SoundSet",
			"ATmine_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		whistleDist=8;
		cost=200;
		mineInconspicuousness=30;
		mineTrigger="rhssaf_tma4Trigger";
		deleteParentWhenTriggered=0;
		submunitionAmmo[]=
		{
			"rhssaf_mine_tma4_penetrator",
			1
		};
		submunitionConeAngle[]={0,4};
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			1
		};
		submunitionInitSpeed=100;
	};
	class rhssaf_mine_tma4_penetrator: rhs_ammo_base_penetrator
	{
		hit=240;
		typicalspeed=100;
		caliber="(200/((15*100)/1000))";
	};
	class rhssaf_mine_mrud_a_ammo: DirectionalBombBase
	{
		hit=15;
		indirectHit=15;
		indirectHitRange=10;
		mineModelDisabled="\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
		icon="iconExplosiveAP";
		defaultMagazine="rhssaf_mine_mrud_a_mag";
		soundTrigger[]=
		{
			"A3\Sounds_F\weapons\mines\mech_trigger_2",
			3.1622777,
			1,
			50
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\mines\mech_activate_mine_1",
			0.56234133,
			1,
			30
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\mines\deactivate_mine_3a",
			0.56234133,
			1,
			30
		};
		soundHit[]=
		{
			"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine",
			3.1622777,
			1,
			1500
		};
		whistleDist=8;
		cost=200;
		mineInconspicuousness=30;
		mineTrigger="rhssaf_mrud_a_Trigger";
	};
	class rhssaf_mine_mrud_b_ammo: rhssaf_mine_mrud_a_ammo
	{
		defaultMagazine="rhssaf_mine_mrud_b_mag";
		mineTrigger="rhssaf_mrud_b_Trigger";
	};
	class rhssaf_mine_mrud_c_ammo: rhssaf_mine_mrud_a_ammo
	{
		defaultMagazine="rhssaf_mine_mrud_c_mag";
		mineTrigger="rhssaf_mrud_c_Trigger";
	};
	class rhssaf_mine_mrud_d_ammo: rhssaf_mine_mrud_a_ammo
	{
		mineModelDisabled="\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_d";
		icon="iconExplosiveAPDirectional";
		defaultMagazine="rhssaf_mine_mrud_d_mag";
		cost=400;
		mineTrigger="RemoteTrigger";
	};
	class rhssaf_tm100_ammo: PipeBombBase
	{
		hit=200;
		indirectHit=200;
		indirectHitRange=1;
		mineModelDisabled="\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_d";
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
			3.1622777,
			1,
			1500
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		SoundSetExplosion[]=
		{
			"ExplosiveCharge_Exp_SoundSet",
			"ExplosiveCharge_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		defaultMagazine="rhssaf_tm100_mag";
		ExplosionEffects="MineNondirectionalExplosionSmall";
		whistleDist=32;
		mineInconspicuousness=5;
		mineTrigger="RemoteTrigger";
	};
	class rhssaf_tm100_ammo_scripted: rhssaf_tm100_ammo;  //found empty after stripping
	class rhssaf_tm200_ammo: rhssaf_tm100_ammo
	{
		hit=400;
		indirectHit=400;
		indirectHitRange=3;
		mineModelDisabled="\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_d";
		defaultMagazine="rhssaf_tm200_mag";
	};
	class rhssaf_tm200_ammo_scripted: rhssaf_tm200_ammo;  //found empty after stripping
	class rhssaf_tm500_ammo: rhssaf_tm100_ammo
	{
		hit=1000;
		indirectHit=1000;
		indirectHitRange=5;
		mineModelDisabled="\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_d";
		ExplosionEffects="MineNondirectionalExplosion";
		defaultMagazine="rhssaf_tm500_mag";
		SoundSetExplosion[]=
		{
			"ClaymoreMine_Exp_SoundSet",
			"ClaymoreMine_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class rhssaf_tm500_ammo_scripted: rhssaf_tm500_ammo;  //found empty after stripping
};
class CfgMineTriggers
{
	class WireTrigger;
	class rhssaf_tma4Trigger: WireTrigger
	{
		mineTriggerRange=0;
		mineTriggerMass=200;
		mineMagnetic=0;
		mineWireStart[]={0,0,0};
		mineWireEnd[]={0,0.30000001,0};
		restrictZoneCenter[]={0,0,0};
		restrictZoneRadius=5;
	};
	class rhssaf_mrud_a_Trigger: WireTrigger
	{
		mineTriggerRange=1;
		mineTriggerActivationRange=2;
		mineWireStart[]={0,0.1,0};
		mineWireEnd[]={0,0.1,3};
		timerStep=30;
		mineDelay=0;
	};
	class rhssaf_mrud_b_Trigger: rhssaf_mrud_a_Trigger
	{
		mineWireStart[]={0,0.1,0};
		mineWireEnd[]={0,0.1,6};
	};
	class rhssaf_mrud_c_Trigger: rhssaf_mrud_a_Trigger
	{
		mineWireStart[]={0,0.1,0};
		mineWireEnd[]={0,0.1,10};
	};
};
class CfgVehicles
{
	class I_supplyCrate_F;
	class rhssaf_virtual_crate: I_supplyCrate_F
	{
		transportMaxWeapons=70;
		transportMaxMagazines=40;
		class EventHandlers
		{
			init="[_this select 0,0] call rhs_fnc_virtualAmmoBoxSAF;";
		};
		SLX_XEH_DISABLED=1;
	};
	class Weapon_Base_F;
	class rhssaf_weapon_base: Weapon_Base_F
	{
		editorCategory="EdCat_Weapons";
	};
	class rhssaf_weapon_cz99: rhssaf_weapon_base;  //found empty after stripping
	class rhssaf_weapon_m92: rhssaf_weapon_base;  //found empty after stripping
	class rhssaf_weapon_m92_fold: rhssaf_weapon_m92;  //found empty after stripping
	class rhssaf_weapon_scorpion: rhssaf_weapon_m92;  //found empty after stripping
	class rhssaf_weapon_m76: rhssaf_weapon_base;  //found empty after stripping
	class rhssaf_weapon_m82a1: rhssaf_weapon_m76;  //found empty after stripping
	class rhssaf_weapon_minimi: rhssaf_weapon_base;  //found empty after stripping
	class rhssaf_weapon_m84: rhssaf_weapon_minimi;  //found empty after stripping
	class rhssaf_weapon_m70ab2: rhssaf_weapon_base;  //found empty after stripping
	class rhssaf_weapon_m70ab2_fold: rhssaf_weapon_m70ab2;  //found empty after stripping
	class rhssaf_weapon_m70b1: rhssaf_weapon_m70ab2;  //found empty after stripping
	class rhssaf_weapon_m70b1n: rhssaf_weapon_m70ab2;  //found empty after stripping
	class rhssaf_weapon_m70b3n: rhssaf_weapon_m70ab2;  //found empty after stripping
	class rhssaf_weapon_m70b3n_pbg40: rhssaf_weapon_m70ab2;  //found empty after stripping
	class rhssaf_weapon_m21a: rhssaf_weapon_base;  //found empty after stripping
	class rhssaf_weapon_m21a_pr: rhssaf_weapon_m21a;  //found empty after stripping
	class rhssaf_weapon_m21a_fold: rhssaf_weapon_m21a;  //found empty after stripping
	class rhssaf_weapon_m21a_pbg40: rhssaf_weapon_m21a;  //found empty after stripping
	class rhssaf_weapon_m21a_pr_pbg40: rhssaf_weapon_m21a;  //found empty after stripping
	class rhssaf_weapon_m21s: rhssaf_weapon_m21a;  //found empty after stripping
	class rhssaf_weapon_m21s_pr: rhssaf_weapon_m21a;  //found empty after stripping
	class rhssaf_weapon_m21s_fold: rhssaf_weapon_m21a;  //found empty after stripping
	class rhssaf_weapon_g36c: rhssaf_weapon_m21a;  //found empty after stripping
	class rhssaf_weapon_g36kv: rhssaf_weapon_g36c;  //found empty after stripping
	class rhssaf_weapon_g36kv_ag36: rhssaf_weapon_g36c;  //found empty after stripping
	class rhssaf_weapon_m80: rhssaf_weapon_base;  //found empty after stripping
	class WeaponHolder_Single_limited_item_F;
	class rhssaf_magazine_base: WeaponHolder_Single_limited_item_F
	{
		editorCategory="EdCat_Weapons";
	};
	class rhssaf_magazine_rhssaf_mag_br_m75: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_br_m84: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_rshb_p98: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_brz_m88: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_brd_m83_white: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_brd_m83_green: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_brd_m83_red: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_brd_m83_yellow: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_brd_m83_blue: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_brd_m83_orange: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_brk_m79: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhsgref_20rnd_765x17_vz61: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhsgref_10rnd_765x17_vz61: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_15Rnd_9x19_FMJ: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mag_15Rnd_9x19_JHP: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhsgref_30rnd_556x45_m21: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhsgref_30rnd_556x45_m21_t: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30rnd_556x45_EPR_G36: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30rnd_556x45_SOST_G36: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30rnd_556x45_SPR_G36: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_100rnd_556x45_EPR_G36: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30rnd_556x45_Tracers_G36: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30rnd_556x45_TDIM_G36: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30rnd_556x45_MDIM_G36: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30Rnd_762x39mm_M67: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30Rnd_762x39mm_M78_tracer: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_30Rnd_762x39_M82_api: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhsgref_10Rnd_792x57_m76: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_10Rnd_792x57_m76_tracer: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_250Rnd_762x54R: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mine_pma3_mag: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mine_tma4_mag: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mine_mrud_a_mag: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mine_mrud_b_mag: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mine_mrud_c_mag: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_mine_mrud_d_mag: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_tm100_mag: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_tm200_mag: rhssaf_magazine_base;  //found empty after stripping
	class rhssaf_magazine_rhssaf_tm500_mag: rhssaf_magazine_base;  //found empty after stripping
	class MineBase;
	class rhssaf_mine_pma3: MineBase
	{
		ammo="rhssaf_mine_pma3_ammo";
		icon="iconExplosiveAP";
	};
	class rhssaf_mine_tma4: MineBase
	{
		ammo="rhssaf_mine_tma4_ammo";
		icon="iconExplosiveAT";
	};
	class rhssaf_mine_mrud_a: MineBase
	{
		ammo="rhssaf_mine_mrud_a_ammo";
		icon="iconExplosiveAT";
	};
	class rhssaf_mine_mrud_b: MineBase
	{
		ammo="rhssaf_mine_mrud_b_ammo";
		icon="iconExplosiveAP";
	};
	class rhssaf_mine_mrud_c: MineBase
	{
		ammo="rhssaf_mine_mrud_c_ammo";
		icon="iconExplosiveAP";
	};
	class rhssaf_mine_mrud_d: rhssaf_mine_mrud_a
	{
		ammo="rhssaf_mine_mrud_d_ammo";
		icon="iconExplosiveAPDirectional";
	};
	class rhssaf_tm100: MineBase
	{
		ammo="rhssaf_tm100_ammo";
		icon="iconExplosiveGP";
	};
	class rhssaf_tm200: rhssaf_tm100
	{
		ammo="rhssaf_tm200_ammo";
		icon="iconExplosiveGP";
	};
	class rhssaf_tm500: rhssaf_tm100
	{
		ammo="rhssaf_tm500_ammo";
		icon="iconExplosiveGP";
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
					class rhssaf_pma3_mine
					{
						name="$STR_RHSSAF_PMA3_DISPLAYNAME";
						value="rhssaf_mine_pma3";
						default=0;
					};
					class rhssaf_tma4_mine
					{
						name="$STR_RHSSAF_TMA4_DISPLAYNAME";
						value="rhssaf_mine_tma4";
						default=0;
					};
					class rhssaf_mrud_a_mine
					{
						name="$STR_RHSSAF_MRUD_A_DISPLAYNAME";
						value="rhssaf_mine_mrud_a";
						default=0;
					};
				};
			};
		};
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class EventHandlers;
	};
	class StaticMortar: StaticWeapon;  //found empty after stripping
	class rhs_m70c_60mm_base: StaticMortar
	{
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		displayname="M70C";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
		class Damage;  //found empty after stripping
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_m70c"
				};
				magazines[]=
				{
					"rhssaf_mag_m73_HE"
				};
				animationSourceElevation="ObsElevation";
				elevationAnimSourceSpeed=0.2;
				minElev=-85;
				maxelev=5;
				minturn=-180;
				maxturn=180;
				ejectDeadGunner=1;
				usePIP=2;
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
			};
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		artilleryScanner=1;
		class EventHandlers: EventHandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class rhs_m70c_60mm_army: rhs_m70c_60mm_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhssaf_army_m10_para_rifleman_g36"
		};
	};
	class Item_Base_F;
	class Item_rhssaf_zrak_rd7j: Item_Base_F
	{
		editorCategory="EdCat_Equipment";
	};
};
class cfgRecoils
{
	class recoil_default;
	class rhs_recoil_g36: recoil_default
	{
		muzzleOuter[]={0.30000001,0.89999998,0.40000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.02;
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
	class SMG_01_Base;
	class SMG_01_F: SMG_01_Base
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class GP25_Base: UGL_F
	{
		class Single;
	};
	class RHS_SAFE_BASE;
	class PBG40_Base: GP25_Base
	{
		useModelOptics=0;
		useExternalOptic=0;
		reloadaction="RHS_GestureReloadGP30";
		magazines[]=
		{
			"rhs_VOG25",
			"rhs_VOG25p",
			"rhs_vg40tb",
			"rhs_vg40sz",
			"rhs_vg40op_white",
			"rhs_vg40op_green",
			"rhs_vg40op_red",
			"rhs_GRD40_white",
			"rhs_GRD40_green",
			"rhs_GRD40_red",
			"rhs_VG40MD_White",
			"rhs_VG40MD_Green",
			"rhs_VG40MD_Red",
			"rhs_GDM40"
		};
		class Single: Single
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
	class RifleGrenade_Base: GP25_Base
	{
		useModelOptics=0;
		useExternalOptic=0;
		reloadaction="RHS_GestureReloadGP30";
		magazines[]={};
		magazineWell[]={};
		class Single: Mode_SemiAuto
		{
			recoil="M240Recoil";
			recoilProne="M240Recoil";
		};
	};
	class rhs_weap_m70_base: Rifle_Base_F
	{
		magazines[]=
		{
			"rhssaf_30Rnd_762x39mm_M67",
			"rhssaf_30Rnd_762x39mm_M78_tracer",
			"rhssaf_30Rnd_762x39_M82_api",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_kaybhar";
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class rhs_npz_slot;  //found empty after stripping
		};
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		class PBG40Muzzle: PBG40_Base;  //found empty after stripping
		class RGMuzzle: RifleGrenade_Base;  //found empty after stripping
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
		class single_medium_optics1: Single;  //found empty after stripping
		class single_far_optics2: single_medium_optics1;  //found empty after stripping
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=87.339996;
		};
		rhs_fold="rhs_weap_m70ab2_fold";
	};
	class rhs_weap_m70ab2_fold: rhs_weap_m70ab2
	{
		recoil="recoil_mmg_01";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=65.510002;
		};
		rhs_fold="rhs_weap_m70ab2";
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
	class rhs_weap_m70b1n: rhs_weap_m70ab2
	{
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=91.739998;
		};
	};
	class rhs_weap_m70b3n: rhs_weap_m70ab2
	{
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=91.739998;
		};
	};
	class rhs_weap_m70b3n_pbg40: rhs_weap_m70ab2
	{
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=124.74;
		};
	};
	class rhs_weap_m92: rhs_weap_m70_base
	{
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
			"rhsgref_10Rnd_792x57_m76",
			"rhssaf_10Rnd_792x57_m76_tracer"
		};
		recoil="recoil_akm";
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00095000002;
		};
		class single_medium_optics1: Single;  //found empty after stripping
		class single_far_optics2: single_medium_optics1;  //found empty after stripping
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
		class single_medium_optics1: Single;  //found empty after stripping
		class single_far_optics2: single_medium_optics1;  //found empty after stripping
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			burst=3;
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
			class rhs_mtz_slot;  //found empty after stripping
			mass=91.300003;
		};
		rhs_mtz="rhs_weap_m21a";
	};
	class rhs_weap_m21a_pr_pbg40: rhs_weap_m21_base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=124.3;
			class rhs_mtz_slot;  //found empty after stripping
		};
		rhs_mtz="rhs_weap_m21a_pbg40";
	};
	class rhs_weap_m21a_fold: rhs_weap_m21a
	{
		recoil="recoil_mxc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.480003;
		};
		rhs_fold="rhs_weap_m21a";
	};
	class rhs_weap_m21a_pbg40: rhs_weap_m21a
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=124.3;
		};
		rhs_mtz="rhs_weap_m21a_pr_pbg40";
		rhs_fold="rhs_weap_m21a_pbg40_fold";
	};
	class rhs_weap_m21a_pbg40_fold: rhs_weap_m21a_pbg40
	{
		recoil="recoil_mxc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.480003;
		};
		rhs_fold="rhs_weap_m21a_pbg40";
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=89.540001;
		};
		rhs_mtz="rhs_weap_m21s_pr";
		rhs_fold="rhs_weap_m21s_fold";
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=89.540001;
		};
		rhs_mtz="rhs_weap_m21s";
	};
	class rhs_weap_m21s_fold: rhs_weap_m21s
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=67.160004;
		};
		recoil="recoil_mxc";
		rhs_fold="rhs_weap_m21s";
	};
	class rhs_weap_M107;
	class rhs_weap_m82a1: rhs_weap_M107
	{
		displayname="$STR_RHSSAF_WEAP_M82A1";
	};
	class rhs_weap_scorpion: SMG_01_F
	{
		magazines[]=
		{
			"rhsgref_20rnd_765x17_vz61",
			"rhsgref_10rnd_765x17_vz61"
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
	class rhs_weap_ag36_base: UGL_F
	{
		cameradir="gl_look";
		displayname="$STR_RHS_WEAP_AG36_BASE_DISPLAYNAME";
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
			"rhs_mag_M716_yellow",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};
		useModelOptics=0;
		useExternalOptic=0;
		cursoraim="gl";
		magazinereloadtime=2;
		reloadtime=0.1;
		class Single: Mode_SemiAuto
		{
			class SoundTails
			{
				class TailInterior
				{
					sound[]=
					{
						"\rhssaf\addons\rhssaf_sounds\G36\AG36_indoor",
						1,
						1,
						200
					};
					frequency=1;
					volume="interior";
				};
			};
			recoil="M240Recoil";
			recoilProne="M240Recoil";
		};
	};
	class rhs_weap_g36_base: Rifle_Base_F
	{
		recoil="rhs_recoil_g36";
		maxZeroing=1600;
		deployedpivot="deploypivot";
		magazines[]=
		{
			"rhssaf_30rnd_556x45_EPR_G36",
			"rhssaf_30rnd_556x45_SOST_G36",
			"rhssaf_100rnd_556x45_EPR_G36",
			"rhssaf_30rnd_556x45_SPR_G36",
			"rhssaf_30rnd_556x45_Tracers_G36",
			"rhssaf_30rnd_556x45_MDIM_G36",
			"rhssaf_30rnd_556x45_TDIM_G36",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F"
		};
		aidispersioncoefx=4;
		aidispersioncoefy=6;
		drysound[]=
		{
			"rhssaf\addons\rhssaf_sounds\G36\g36_dryfire",
			1.01,
			1,
			10
		};
		soundbullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		class AG36Muzzle: rhs_weap_ag36_base;  //found empty after stripping
		class WeaponSlotsInfo: WeaponSlotsInfo;  //found empty after stripping
		class Single: Mode_SemiAuto
		{
			dispersion=0.00055559602;
			reloadtime=0.079999998;
		};
		class Burst: Mode_Burst
		{
			dispersion=0.00055559602;
			reloadtime=0.079999998;
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion=0.00055559602;
			reloadtime=0.079999998;
		};
		class Burst2rnd: Burst
		{
			burst=2;
		};
		class fullauto_medium: FullAuto
		{
			burst=5;
		};
		class single_medium_optics1: Single;  //found empty after stripping
		class single_far_optics2: single_medium_optics1;  //found empty after stripping
	};
	class rhs_weap_g36c: rhs_weap_g36_base
	{
		deployedpivot="deploypivot";
		discretedistanceinitindex=0;
		memoryPointCamera="eye";
		class WeaponSlotsInfo
		{
			mass=65.739998;
			class GripodSlot: rhs_western_rifle_gripod_slot;  //found empty after stripping
		};
		class Single: Single
		{
			dispersion=0.00087270001;
			reloadtime=0.079999998;
		};
		class Burst: Burst
		{
			burst=2;
			dispersion=0.00087270001;
			reloadtime=0.079999998;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00087270001;
			reloadtime=0.079999998;
		};
		class single_medium_optics1: Single;  //found empty after stripping
		class single_far_optics2: single_medium_optics1;  //found empty after stripping
	};
	class rhs_weap_g36c_grip1: rhs_weap_g36c;  //found empty after stripping
	class rhs_weap_g36c_grip2: rhs_weap_g36c;  //found empty after stripping
	class rhs_weap_g36c_grip3: rhs_weap_g36c;  //found empty after stripping
	class rhs_weap_g36kv: rhs_weap_g36_base
	{
		discretedistanceinitindex=0;
		class WeaponSlotsInfo
		{
			mass=74.139999;
			class GripodSlot: rhs_western_rifle_gripod_slot;  //found empty after stripping
		};
	};
	class rhs_weap_g36kv_grip1: rhs_weap_g36kv;  //found empty after stripping
	class rhs_weap_g36kv_grip2: rhs_weap_g36kv;  //found empty after stripping
	class rhs_weap_g36kv_grip3: rhs_weap_g36kv;  //found empty after stripping
	class rhs_weap_g36kv_ag36: rhs_weap_g36kv
	{
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"rhssaf\addons\rhssaf_m_weapon_g36\anim\handpose_ag36.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=107.14;
			class GripodSlot;  //found empty after stripping
		};
	};
	class rhs_weap_SCAR_H_Base;
	class rhs_weap_SCAR_H_CQC_Base: rhs_weap_SCAR_H_Base
	{
		class WeaponSlotsInfo;
		class Single;
		class Fullauto;
	};
	class rhs_weap_SCAR_H_STD_Base: rhs_weap_SCAR_H_Base
	{
		class WeaponSlotsInfo;
		class Single;
		class Fullauto;
	};
	class rhs_weap_SCAR_H_LB_Base: rhs_weap_SCAR_H_Base
	{
		class WeaponSlotsInfo;
		class Single;
		class Fullauto;
	};
	class rhs_weap_SCARH_CQC: rhs_weap_SCAR_H_CQC_Base
	{
		magazines[]=
		{
			"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"
		};
		baseweapon="rhs_weap_SCARH_CQC";
		rhs_fold="rhs_weap_SCARH_CQC_Folded";
	};
	class rhs_weap_SCARH_CQC_grip: rhs_weap_SCARH_CQC
	{
		rhs_fold="rhs_weap_SCARH_CQC_Folded_grip";
	};
	class rhs_weap_SCARH_CQC_grip2: rhs_weap_SCARH_CQC
	{
		rhs_fold="rhs_weap_SCARH_CQC_Folded_grip2";
	};
	class rhs_weap_SCARH_CQC_grip3: rhs_weap_SCARH_CQC
	{
		rhs_fold="rhs_weap_SCARH_CQC_Folded_grip3";
	};
	class rhs_weap_SCARH_STD: rhs_weap_SCAR_H_STD_Base
	{
		magazines[]=
		{
			"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"
		};
		baseweapon="rhs_weap_SCARH_STD";
		rhs_fold="rhs_weap_SCARH_STD_Folded";
	};
	class rhs_weap_SCARH_STD_grip: rhs_weap_SCARH_STD
	{
		rhs_fold="rhs_weap_SCARH_STD_Folded_grip";
	};
	class rhs_weap_SCARH_STD_grip2: rhs_weap_SCARH_STD
	{
		rhs_fold="rhs_weap_SCARH_STD_Folded_grip2";
	};
	class rhs_weap_SCARH_STD_grip3: rhs_weap_SCARH_STD
	{
		rhs_fold="rhs_weap_SCARH_STD_Folded_grip3";
	};
	class rhs_weap_SCARH_LB: rhs_weap_SCAR_H_LB_Base
	{
		magazines[]=
		{
			"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"
		};
		baseweapon="rhs_weap_SCARH_LB";
		rhs_fold="rhs_weap_SCARH_LB_Folded";
	};
	class rhs_weap_SCARH_LB_grip: rhs_weap_SCARH_LB
	{
		rhs_fold="rhs_weap_SCARH_LB_Folded_grip";
	};
	class rhs_weap_SCARH_LB_grip2: rhs_weap_SCARH_LB
	{
		rhs_fold="rhs_weap_SCARH_LB_Folded_grip2";
	};
	class rhs_weap_SCARH_LB_grip3: rhs_weap_SCARH_LB
	{
		rhs_fold="rhs_weap_SCARH_LB_Folded_grip3";
	};
	class rhs_weap_SCARH_FDE_CQC: rhs_weap_SCARH_CQC
	{
		baseweapon="rhs_weap_SCARH_FDE_CQC";
		rhs_fold="rhs_weap_SCARH_FDE_CQC_Folded";
	};
	class rhs_weap_SCARH_FDE_CQC_grip: rhs_weap_SCARH_FDE_CQC
	{
		rhs_fold="rhs_weap_SCARH_FDE_CQC_Folded_grip";
	};
	class rhs_weap_SCARH_FDE_CQC_grip2: rhs_weap_SCARH_FDE_CQC
	{
		rhs_fold="rhs_weap_SCARH_FDE_CQC_Folded_grip2";
	};
	class rhs_weap_SCARH_FDE_CQC_grip3: rhs_weap_SCARH_FDE_CQC
	{
		rhs_fold="rhs_weap_SCARH_FDE_CQC_Folded_grip3";
	};
	class rhs_weap_SCARH_FDE_STD: rhs_weap_SCARH_STD
	{
		baseweapon="rhs_weap_SCARH_FDE_STD";
		rhs_fold="rhs_weap_SCARH_FDE_STD_Folded";
	};
	class rhs_weap_SCARH_FDE_STD_grip: rhs_weap_SCARH_FDE_STD
	{
		rhs_fold="rhs_weap_SCARH_FDE_STD_Folded_grip";
	};
	class rhs_weap_SCARH_FDE_STD_grip2: rhs_weap_SCARH_FDE_STD
	{
		rhs_fold="rhs_weap_SCARH_FDE_STD_Folded_grip2";
	};
	class rhs_weap_SCARH_FDE_STD_grip3: rhs_weap_SCARH_FDE_STD
	{
		rhs_fold="rhs_weap_SCARH_FDE_STD_Folded_grip3";
	};
	class rhs_weap_SCARH_FDE_LB: rhs_weap_SCARH_LB
	{
		baseweapon="rhs_weap_SCARH_FDE_LB";
		rhs_fold="rhs_weap_SCARH_FDE_LB_Folded";
	};
	class rhs_weap_SCARH_FDE_LB_grip: rhs_weap_SCARH_FDE_LB
	{
		rhs_fold="rhs_weap_SCARH_FDE_LB_Folded_grip";
	};
	class rhs_weap_SCARH_FDE_LB_grip2: rhs_weap_SCARH_FDE_LB
	{
		rhs_fold="rhs_weap_SCARH_FDE_LB_Folded_grip2";
	};
	class rhs_weap_SCARH_FDE_LB_grip3: rhs_weap_SCARH_FDE_LB
	{
		rhs_fold="rhs_weap_SCARH_FDE_LB_Folded_grip3";
	};
	class rhs_weap_SCARH_CQC_Folded: rhs_weap_SCARH_CQC
	{
		baseweapon="rhs_weap_SCARH_CQC";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.779999;
		};
		initSpeed=-0.93000001;
		recoil="rhs_weap_scarh_folded_recoil";
		rhs_fold="rhs_weap_SCARH_CQC";
		rhs_fold_anim="RHS_GestureUnfoldSCAR";
	};
	class rhs_weap_SCARH_CQC_Folded_grip: rhs_weap_SCARH_CQC_Folded
	{
		rhs_fold="rhs_weap_SCARH_CQC_grip";
	};
	class rhs_weap_SCARH_CQC_Folded_grip2: rhs_weap_SCARH_CQC_Folded
	{
		rhs_fold="rhs_weap_SCARH_CQC_grip2";
	};
	class rhs_weap_SCARH_CQC_Folded_grip3: rhs_weap_SCARH_CQC_Folded
	{
		rhs_fold="rhs_weap_SCARH_CQC_grip3";
	};
	class rhs_weap_SCARH_STD_Folded: rhs_weap_SCARH_STD
	{
		baseweapon="rhs_weap_SCARH_STD";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.779999;
		};
		initSpeed=-0.93000001;
		recoil="rhs_weap_scarh_folded_recoil";
		rhs_fold="rhs_weap_SCARH_STD";
		rhs_fold_anim="RHS_GestureUnfoldSCAR";
	};
	class rhs_weap_SCARH_STD_Folded_grip: rhs_weap_SCARH_STD_Folded
	{
		rhs_fold="rhs_weap_SCARH_STD_grip";
	};
	class rhs_weap_SCARH_STD_Folded_grip2: rhs_weap_SCARH_STD_Folded
	{
		rhs_fold="rhs_weap_SCARH_STD_grip2";
	};
	class rhs_weap_SCARH_STD_Folded_grip3: rhs_weap_SCARH_STD_Folded
	{
		rhs_fold="rhs_weap_SCARH_STD_grip3";
	};
	class rhs_weap_SCARH_LB_Folded: rhs_weap_SCARH_LB
	{
		baseweapon="rhs_weap_SCARH_LB";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.779999;
		};
		initSpeed=-0.93000001;
		recoil="rhs_weap_scarh_folded_recoil";
		rhs_fold="rhs_weap_SCARH_LB";
		rhs_fold_anim="RHS_GestureUnfoldSCAR";
	};
	class rhs_weap_SCARH_LB_Folded_grip: rhs_weap_SCARH_LB_Folded
	{
		rhs_fold="rhs_weap_SCARH_LB_grip";
	};
	class rhs_weap_SCARH_LB_Folded_grip2: rhs_weap_SCARH_LB_Folded
	{
		rhs_fold="rhs_weap_SCARH_LB_grip2";
	};
	class rhs_weap_SCARH_LB_Folded_grip3: rhs_weap_SCARH_LB_Folded
	{
		rhs_fold="rhs_weap_SCARH_LB_grip3";
	};
	class rhs_weap_SCARH_FDE_CQC_Folded: rhs_weap_SCARH_FDE_CQC
	{
		baseweapon="rhs_weap_SCARH_FDE_CQC";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.779999;
		};
		initSpeed=-0.93000001;
		recoil="rhs_weap_scarh_folded_recoil";
		rhs_fold="rhs_weap_SCARH_FDE_CQC";
		rhs_fold_anim="RHS_GestureUnfoldSCAR";
	};
	class rhs_weap_SCARH_FDE_CQC_Folded_grip: rhs_weap_SCARH_FDE_CQC_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_CQC_grip";
	};
	class rhs_weap_SCARH_FDE_CQC_Folded_grip2: rhs_weap_SCARH_FDE_CQC_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_CQC_grip2";
	};
	class rhs_weap_SCARH_FDE_CQC_Folded_grip3: rhs_weap_SCARH_FDE_CQC_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_CQC_grip3";
	};
	class rhs_weap_SCARH_FDE_STD_Folded: rhs_weap_SCARH_FDE_STD
	{
		baseweapon="rhs_weap_SCARH_FDE_STD";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.779999;
		};
		initSpeed=-0.93000001;
		recoil="rhs_weap_scarh_folded_recoil";
		rhs_fold="rhs_weap_SCARH_FDE_STD";
		rhs_fold_anim="RHS_GestureUnfoldSCAR";
	};
	class rhs_weap_SCARH_FDE_STD_Folded_grip: rhs_weap_SCARH_FDE_STD_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_STD_grip";
	};
	class rhs_weap_SCARH_FDE_STD_Folded_grip2: rhs_weap_SCARH_FDE_STD_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_STD_grip2";
	};
	class rhs_weap_SCARH_FDE_STD_Folded_grip3: rhs_weap_SCARH_FDE_STD_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_STD_grip3";
	};
	class rhs_weap_SCARH_FDE_LB_Folded: rhs_weap_SCARH_FDE_LB
	{
		baseweapon="rhs_weap_SCARH_FDE_LB";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76.779999;
		};
		initSpeed=-0.93000001;
		recoil="rhs_weap_scarh_folded_recoil";
		rhs_fold="rhs_weap_SCARH_FDE_LB";
		rhs_fold_anim="RHS_GestureUnfoldSCAR";
	};
	class rhs_weap_SCARH_FDE_LB_Folded_grip: rhs_weap_SCARH_FDE_LB_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_LB_grip";
	};
	class rhs_weap_SCARH_FDE_LB_Folded_grip2: rhs_weap_SCARH_FDE_LB_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_LB_grip2";
	};
	class rhs_weap_SCARH_FDE_LB_Folded_grip3: rhs_weap_SCARH_FDE_LB_Folded
	{
		rhs_fold="rhs_weap_SCARH_FDE_LB_grip3";
	};
	class rhs_weap_m84: Rifle_Long_Base_F
	{
		magazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR_green",
			"rhssaf_250Rnd_762x54R",
			"rhs_100Rnd_762x54mmR_7N13",
			"rhs_100Rnd_762x54mmR_7N26",
			"rhs_100Rnd_762x54mmR_7BZ3"
		};
		recoil="recoil_zafir";
		maxZeroing=1500;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhssaf\addons\rhssaf_m_weapon_m84\data\anim\m84.rtm"
		};
		nameSound="Mgun";
		cursor="mg";
		cursorAim="EmptyCursor";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=193.60001;
		};
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.707946,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.707946,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.707946,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.707946,
			1,
			20
		};
		jsrs_soundeffect="JSRS2_Distance_Effects_PK";
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.085714288;
			dispersion=0.00086999999;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			class SilencedSound;  //found empty after stripping
		};
	};
	class rhs_weap_lmg_minimipara;
	class rhs_weap_minimi_para_railed: rhs_weap_lmg_minimipara
	{
		initspeed=-1;
		class WeaponSlotsInfo
		{
			mass=149.49001;
			class GripodSlot: rhs_western_mg_gripod_slot;  //found empty after stripping
		};
		rhs_fold_checkOptic=0;
		rhs_fold="rhs_weap_minimi_para_railed_folded";
	};
	class rhs_weap_minimi_para_railed_vfg1: rhs_weap_minimi_para_railed
	{
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="rhs_weap_minimi_para_railed_folded_vfg1";
	};
	class rhs_weap_minimi_para_railed_vfg2: rhs_weap_minimi_para_railed
	{
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
		rhs_fold="rhs_weap_minimi_para_railed_folded_vfg2";
	};
	class rhs_weap_minimi_para_railed_vfg3: rhs_weap_minimi_para_railed
	{
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="rhs_weap_minimi_para_railed_folded_vfg3";
	};
	class rhs_weap_minimi_para_railed_folded: rhs_weap_minimi_para_railed
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=145.44;
		};
		recoil="rhs_recoil_m240";
		rhs_fold="rhs_weap_minimi_para_railed";
	};
	class rhs_weap_minimi_para_railed_folded_vfg1: rhs_weap_minimi_para_railed_folded
	{
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="rhs_weap_minimi_para_railed_vfg1";
	};
	class rhs_weap_minimi_para_railed_folded_vfg2: rhs_weap_minimi_para_railed_folded
	{
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
		rhs_fold="rhs_weap_minimi_para_railed_vfg2";
	};
	class rhs_weap_minimi_para_railed_folded_vfg3: rhs_weap_minimi_para_railed_folded
	{
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
		rhs_fold="rhs_weap_minimi_para_railed_vfg3";
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class Eventhandlers;
	};
	class rhs_weap_m80: Launcher_Base_F
	{
		magazines[]=
		{
			"rhs_m80_mag"
		};
		recoil="recoil_single_law";
		rhs_disposable=1;
		reloadTime=1;
		magazineReloadTime=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=66;
		};
		class ItemInfo;  //found empty after stripping
		class Eventhandlers: Eventhandlers
		{
			class RHS_DisposableWeapon
			{
				fired="_this call rhs_fnc_disposable;";
			};
		};
	};
	class rhs_weap_m80_used: rhs_weap_m80
	{
		displayname="$STR_RHSSAF_WEAP_M80_USED";
		magazines[]=
		{
			"rhs_launcher_dummy_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=34.759998;
		};
	};
	class hgun_P07_F;
	class rhs_weap_cz99: hgun_P07_F
	{
		magazines[]=
		{
			"rhssaf_mag_15Rnd_9x19_FMJ",
			"rhssaf_mag_15Rnd_9x19_JHP"
		};
		initSpeed=-0.89999998;
		dispersion=0.02;
		reloadTime=0.13;
		class WeaponSlotsInfo
		{
			mass=20.9;
		};
	};
	class rhs_acc_scope_base: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13.64;
		};
	};
	class rhs_acc_mtz: rhs_acc_scope_base;  //found empty after stripping
	class rhs_weap_m21s_eo: rhs_weap_m21s_pr;  //found empty after stripping
	class rhs_weap_m21a_pr_aco: rhs_weap_m21a_pr;  //found empty after stripping
	class rhs_weap_m21a_pkas: rhs_weap_m21a;  //found empty after stripping
	class rhs_weap_m21s_pkas: rhs_weap_m21s;  //found empty after stripping
	class rhs_weap_m21a_pr_mrco: rhs_weap_m21a_pr;  //found empty after stripping
	class rhs_weap_m21a_pr_hamr: rhs_weap_m21a_pr;  //found empty after stripping
	class rhs_weap_m21a_pr_sos: rhs_weap_m21a_pr;  //found empty after stripping
	class rhs_weap_m21s_pr_aco: rhs_weap_m21s_pr;  //found empty after stripping
	class rhs_weap_m21s_pr_mrco: rhs_weap_m21s_pr;  //found empty after stripping
	class rhs_weap_m21s_pr_hamr: rhs_weap_m21s_pr;  //found empty after stripping
	class rhs_weap_m21s_pr_sos: rhs_weap_m21s_pr;  //found empty after stripping
	class rhs_weap_m76_pso: rhs_weap_m76;  //found empty after stripping
	class rhs_weap_minimi_para_railed_eot552_m952v_sfmb: rhs_weap_minimi_para_railed;  //found empty after stripping
	class rhs_weap_g36c_compm4: rhs_weap_g36c;  //found empty after stripping
	class rhs_weap_g36c_grip3_eo: rhs_weap_g36c_grip3;  //found empty after stripping
	class rhs_weap_g36kv_compm4: rhs_weap_g36kv;  //found empty after stripping
	class rhs_weap_g36kv_ag36_eo: rhs_weap_g36kv_ag36;  //found empty after stripping
	class rhs_weap_g36kv_grip3_eo: rhs_weap_g36kv_grip3;  //found empty after stripping
	class rhs_weap_m82a1_leu: rhs_weap_m82a1;  //found empty after stripping
	class rhs_weap_hk416d10;
	class rhs_weap_hk416d10_compm4: rhs_weap_hk416d10;  //found empty after stripping
	class rhs_weap_SCARH_STD_grip2_su230a: rhs_weap_SCARH_STD_grip2;  //found empty after stripping
	class rhs_weap_SCARH_LB_bipod_m8541: rhs_weap_SCARH_LB;  //found empty after stripping
	class Default;
	class Put: Default
	{
		class PutMuzzle: Default;  //found empty after stripping
		class Rhssaf_Mine_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"rhssaf_mine_pma3_mag",
				"rhssaf_mine_tma4_mag",
				"rhssaf_mine_mrud_a_mag",
				"rhssaf_mine_mrud_b_mag",
				"rhssaf_mine_mrud_c_mag",
				"rhssaf_mine_mrud_d_mag"
			};
		};
		class rhssaf_tm100_muzzle: PutMuzzle
		{
			autoreload=0;
			magazines[]=
			{
				"rhssaf_tm100_mag"
			};
			enableAttack=1;
		};
		class rhssaf_tm200_muzzle: PutMuzzle
		{
			autoreload=0;
			magazines[]=
			{
				"rhssaf_tm200_mag"
			};
			enableAttack=1;
		};
		class rhssaf_tm500_muzzle: PutMuzzle
		{
			autoreload=0;
			magazines[]=
			{
				"rhssaf_tm500_mag"
			};
			enableAttack=1;
		};
	};
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher;  //found empty after stripping
		class rhssaff_throw_flashbang: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_rshb_p98"
			};
		};
		class rhssaf_throw_incendiary: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_brz_m88"
			};
		};
		class rhssaf_throw_smoke_white: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_brd_m83_white"
			};
		};
		class rhssaf_throw_smoke_yellow: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_brd_m83_yellow"
			};
		};
		class rhssaf_throw_smoke_green: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_brd_m83_green"
			};
		};
		class rhssaf_throw_smoke_red: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_brd_m83_red"
			};
		};
		class rhssaf_throw_smoke_blue: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_brd_m83_blue"
			};
		};
		class rhssaf_throw_smoke_orange: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_brd_m83_orange"
			};
		};
		class rhssaf_throw_grenade: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_br_m75",
				"rhssaf_mag_br_m84"
			};
		};
		class rhssaf_throw_at_grenade: ThrowMuzzle
		{
			magazines[]=
			{
				"rhssaf_mag_brk_m79"
			};
			class Eventhandlers
			{
				class RHS_ThrowAction
				{
					fired="[_this select 0, _this select 6] call RHS_FNC_RKG3_IMPACT;";
				};
			};
		};
	};
	class CannonCore;
	class mortar_82mm;
	class rhs_weap_m70c: mortar_82mm
	{
		magazines[]=
		{
			"rhssaf_mag_m73_HE"
		};
		class Single0: Mode_SemiAuto
		{
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			reloadTime=1.8;
			dispersion=0;
			artilleryDispersion=0;
			artilleryCharge=0.56599998;
		};
		class Single1: Single0
		{
			artilleryCharge=0.81;
		};
		class Single2: Single0
		{
			artilleryCharge=1;
		};
		class Burst0: Mode_Burst
		{
			burst=4;
			aiBurstTerminable=1;
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			reloadTime=1.8;
			artilleryDispersion=2.2;
			artilleryCharge=0.2;
		};
		class Burst1: Burst0
		{
			artilleryCharge=1;
		};
	};
	class Binocular;
	class rhssaf_zrak_rd7j: Binocular
	{
		weaponPoolAvailable=1;
		simulation="Binocular";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[]=
		{
			"Normal"
		};
		forceOptics=0;
		useAsBinocular=1;
		primary=0;
		magazines[]={};
		class WeaponSlotsInfo
		{
			mass=10;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class 32Rnd_155mm_Mo_shells;
	class rhssaf_mag_15Rnd_9x19_FMJ: CA_Magazine
	{
		ammo="rhs_ammo_9x19_FMJ";
		count=15;
		mass=6;
		initSpeed=390.10001;
	};
	class rhssaf_mag_15Rnd_9x19_JHP: rhssaf_mag_15Rnd_9x19_FMJ
	{
		ammo="rhs_ammo_9x19_JHP";
		initSpeed=301.79999;
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
		displaynameshort="$STR_RHSSAF_30RND_556X45_M21_DISPLAYNAMESHORT";
		ammo="rhs_ammo_556x45_M855_Ball";
		count=30;
		initSpeed=925;
		mass=10.35;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionshort="Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: M21 Series Rifles";
		magazineGroup[]=
		{
			"rhs_m21_mag_group"
		};
	};
	class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21
	{
		tracersEvery=3;
		lastRoundsTracer=0;
		displaynameshort="$STR_RHSSAF_30RND_556X45_M21_T_DISPLAYNAMESHORT";
		descriptionshort="Caliber: 5.56x45mm Tracer<br />Rounds: 30<br />Used in: M21 Series Rifles";
		magazineGroup[]=
		{
			"rhs_m21_mag_group"
		};
	};
	class rhssaf_30rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_556x45_M855A1_Ball";
		count=30;
		descriptionshort="Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
		displayname="$STR_RHSSAF_30RND_556X45_EPR_G36_DISPLAYNAME";
		magazineGroup[]=
		{
			"G36_maggroup"
		};
		initspeed=920;
		mass=5.9499998;
		lastroundstracer=0;
		tracersevery=0;
		displaynameshort="$STR_RHSSAF_30RND_556X45_EPR_G36_DISPLAYNAMESHORT";
	};
	class rhssaf_30rnd_556x45_SOST_G36: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_556x45_Mk318_Ball";
		count=30;
		descriptionshort="Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
		displayname="$STR_RHSSAF_30RND_556X45_SOST_G36_DISPLAYNAME";
		magazineGroup[]=
		{
			"G36_maggroup"
		};
		initspeed=910;
		mass=5.9499998;
		lastroundstracer=0;
		tracersevery=0;
		displaynameshort="$STR_RHSSAF_30RND_556X45_SOST_G36_DISPLAYNAMESHORT";
	};
	class rhssaf_30rnd_556x45_SPR_G36: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_556x45_Mk262_Ball";
		count=30;
		descriptionshort="Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
		displayname="$STR_RHSSAF_30RND_556X45_SPR_G36_DISPLAYNAME";
		magazineGroup[]=
		{
			"G36_maggroup"
		};
		initspeed=818.20001;
		mass=5.9499998;
		lastroundstracer=0;
		tracersevery=0;
		displaynameshort="$STR_RHSSAF_30RND_556X45_SPR_G36_DISPLAYNAMESHORT";
	};
	class rhssaf_100rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_556x45_M855A1_Ball";
		count=100;
		descriptionshort="Caliber: 5.56x45mm <br />Rounds: 100<br />Used in: G36 Series Rifles";
		displayname="$STR_RHSSAF_100RND_556X45_EPR_G36_DISPLAYNAME";
		magazineGroup[]=
		{
			"G36_maggroup"
		};
		initspeed=920;
		mass=35.240002;
		lastroundstracer=0;
		tracersevery=0;
		displaynameshort="$STR_RHSSAF_100RND_556X45_EPR_G36_DISPLAYNAMESHORT";
	};
	class rhssaf_30rnd_556x45_Tracers_G36: 30Rnd_556x45_Stanag
	{
		ammo="rhs_ammo_556x45_M855_Ball_Red";
		count=30;
		descriptionshort="Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
		displayname="$STR_RHSSAF_30RND_556X45_TRACERS_G36_DISPLAYNAME";
		magazineGroup[]=
		{
			"G36_maggroup"
		};
		initspeed=920;
		mass=5.9499998;
		lastroundstracer=0;
		tracersevery=3;
		displaynameshort="$STR_RHSSAF_30RND_556X45_TRACERS_G36_DISPLAYNAMESHORT";
	};
	class rhssaf_30rnd_556x45_TDIM_G36: 30Rnd_556x45_Stanag
	{
		ammo="rhssaf_ammo_556x45_Ball_Tracer_Dim";
		count=30;
		descriptionshort="Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
		displayname="$STR_RHSSAF_30RND_556X45_TDIM_G36_DISPLAYNAME";
		magazineGroup[]=
		{
			"G36_maggroup"
		};
		initspeed=920;
		mass=5.9499998;
		lastroundstracer=0;
		tracersevery=3;
		displaynameshort="$STR_RHSSAF_30RND_556X45_TDIM_G36_DISPLAYNAMESHORT";
	};
	class rhssaf_30rnd_556x45_MDIM_G36: 30Rnd_556x45_Stanag
	{
		ammo="rhssaf_ammo_556x45_Ball_Tracer_Dim";
		count=30;
		descriptionshort="Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
		displayname="$STR_RHSSAF_30RND_556X45_MDIM_G36_DISPLAYNAME";
		magazineGroup[]=
		{
			"G36_maggroup"
		};
		initspeed=920;
		mass=5.9499998;
		lastroundstracer=0;
		tracersevery=3;
		displaynameshort="$STR_RHSSAF_30RND_556X45_MDIM_G36_DISPLAYNAMESHORT";
	};
	class rhs_30Rnd_545x39_AK;
	class rhssaf_30Rnd_762x39mm_M67: rhs_30Rnd_545x39_AK
	{
		ammo="rhs_B_762x39_Ball";
		count=30;
		initSpeed=718;
		mass=13.53;
	};
	class rhssaf_30Rnd_762x39mm_M78_tracer: rhssaf_30Rnd_762x39mm_M67
	{
		tracersEvery=3;
		lastroundstracer=0;
		ammo="rhs_B_762x39_Tracer";
	};
	class rhssaf_30Rnd_762x39_M82_api: rhssaf_30Rnd_762x39mm_M67
	{
		tracersevery=1;
		lastroundstracer=1;
		ammo="rhssaf_ammo_762x39_m82_api";
		displayname="$STR_RHSSAF_30RND_762X39_M82_API_DISPLAYNAME";
		displaynameshort="$STR_RHSSAF_30RND_762X39_M82_API_DISPLAYNAMESHORT";
		descriptionshort="$STR_RHSSAF_30RND_762X39_M82_API_DESCRIPTIONSHORT";
	};
	class rhs_mag_20Rnd_SCAR_762x51_m80_ball;
	class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr;
	class rhs_mag_20Rnd_SCAR_762x51_m62_tracer;
	class rhs_mag_20Rnd_SCAR_762x51_m61_ap;
	class rhs_mag_20Rnd_SCAR_762x51_m118_special;
	class rhs_mag_20Rnd_SCAR_762x51_mk316_special;
	class rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk: rhs_mag_20Rnd_SCAR_762x51_m80_ball;  //found empty after stripping
	class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk: rhs_mag_20Rnd_SCAR_762x51_m80a1_epr;  //found empty after stripping
	class rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk: rhs_mag_20Rnd_SCAR_762x51_m62_tracer;  //found empty after stripping
	class rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk: rhs_mag_20Rnd_SCAR_762x51_m61_ap;  //found empty after stripping
	class rhs_mag_20Rnd_SCAR_762x51_m118_special_bk: rhs_mag_20Rnd_SCAR_762x51_m118_special;  //found empty after stripping
	class rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk: rhs_mag_20Rnd_SCAR_762x51_mk316_special;  //found empty after stripping
	class rhsgref_10Rnd_792x57_m76: CA_Magazine
	{
		displaynameshort="$STR_RHSSAF_10RND_792X57_M76_DISPLAYNAMESHORT";
		ammo="rhs_ammo_792x57_Ball";
		count=10;
		initSpeed=730;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionshort="Caliber: 7.92x57mm Mauser <br />Rounds: 10<br />Used in: M76 Rifle";
		magazineGroup[]=
		{
			"rhs_m76_mag_group"
		};
		mass=6.9400001;
	};
	class rhssaf_10Rnd_792x57_m76_tracer: CA_Magazine
	{
		displaynameshort="$STR_RHSSAF_10RND_792X57_M76_TRACER_DISPLAYNAMESHORT";
		ammo="rhs_ammo_792x57_Ball";
		count=10;
		initSpeed=730;
		tracersEvery=3;
		lastRoundsTracer=0;
		descriptionshort="Caliber: 7.92x57mm Mauser/Tracer <br />Rounds: 10<br />Used in: M76 Rifle";
		magazineGroup[]=
		{
			"rhs_m76_mag_group"
		};
		mass=6.9400001;
	};
	class rhs_100Rnd_762x54mmR;
	class rhssaf_250Rnd_762x54R: rhs_100Rnd_762x54mmR
	{
		descriptionshort="Caliber: 7.62x54Rmm <br />Rounds: 250<br />Used in: M84 LMG";
		ammo="rhs_B_762x54_Ball";
		count=250;
		mass=128.7;
	};
	class rhs_rpg26_mag;
	class rhs_m80_mag: rhs_rpg26_mag
	{
		ammo="rhs_ammo_m80_rocket";
		descriptionshort="Caliber: 64mm HEAT <br />Rounds: 1<br />Preloaded in: RBR M80";
		initSpeed=190;
		mass=31.24;
	};
	class rhssaf_mag_m73_HE: 32Rnd_155mm_Mo_shells
	{
		ammo="rhssaf_mortar_M73_HE";
		count=10;
		initSpeed=126.5;
	};
	class ATMine_Range_Mag;
	class rhssaf_mine_pma3_mag: ATMine_Range_Mag
	{
		mass=3.96;
		ammo="rhssaf_mine_pma3_ammo";
		descriptionUse="$STR_A3_use_mine";
	};
	class rhssaf_mine_tma4_mag: ATMine_Range_Mag
	{
		mass=69.300003;
		ammo="rhssaf_mine_tma4_ammo";
		descriptionUse="$STR_A3_use_mine";
	};
	class rhssaf_mine_mrud_a_mag: ATMine_Range_Mag
	{
		mass=48.400002;
		ammo="rhssaf_mine_mrud_a_ammo";
		descriptionUse="$STR_A3_use_mine";
	};
	class rhssaf_mine_mrud_b_mag: rhssaf_mine_mrud_a_mag
	{
		ammo="rhssaf_mine_mrud_b_ammo";
		descriptionUse="$STR_A3_use_mine";
	};
	class rhssaf_mine_mrud_c_mag: rhssaf_mine_mrud_a_mag
	{
		ammo="rhssaf_mine_mrud_b_ammo";
		descriptionUse="$STR_A3_use_mine";
	};
	class rhssaf_mine_mrud_d_mag: rhssaf_mine_mrud_a_mag
	{
		ammo="rhssaf_mine_mrud_d_ammo";
	};
	class rhssaf_tm100_mag: CA_Magazine
	{
		descriptionUse="$STR_A3_use_charge";
		value=5;
		ammo="rhssaf_tm100_ammo";
		mass=3.3;
		count=1;
		initSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useAction=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
	};
	class rhssaf_tm200_mag: rhssaf_tm100_mag
	{
		mass=6.5999999;
		ammo="rhssaf_tm200_ammo";
	};
	class rhssaf_tm500_mag: rhssaf_tm100_mag
	{
		mass=14.3;
		ammo="rhssaf_tm500_ammo";
	};
	class HandGrenade;
	class rhssaf_mag_br_m75: HandGrenade
	{
		ammo="rhssaf_ammo_br_m75";
		descriptionshort="Type: Defensive Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
		mass=4.3299999;
	};
	class rhssaf_mag_br_m84: rhssaf_mag_br_m75
	{
		ammo="rhssaf_ammo_br_m84";
		descriptionshort="Type: Defensive Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
	};
	class rhssaf_mag_brd_m83_white: HandGrenade
	{
		ammo="rhssaf_ammo_brd_m83_white";
		descriptionshort="Type: Smoke Grenade White<br />Rounds: 1<br />Used in: Hand";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhssaf_mag_brd_m83_yellow: HandGrenade
	{
		ammo="rhssaf_ammo_brd_m83_yellow";
		descriptionshort="Type: Smoke Grenade Yellow<br />Rounds: 1<br />Used in: Hand";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhssaf_mag_brd_m83_green: HandGrenade
	{
		ammo="rhssaf_ammo_brd_m83_green";
		descriptionshort="Type: Smoke Grenade Green<br />Rounds: 1<br />Used in: Hand";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhssaf_mag_brd_m83_red: HandGrenade
	{
		ammo="rhssaf_ammo_brd_m83_red";
		descriptionshort="Type: Smoke Grenade Red<br />Rounds: 1<br />Used in: Hand";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhssaf_mag_brd_m83_blue: HandGrenade
	{
		ammo="rhssaf_ammo_brd_m83_blue";
		descriptionshort="Type: Smoke Grenade Blue<br />Rounds: 1<br />Used in: Hand";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhssaf_mag_brd_m83_orange: HandGrenade
	{
		ammo="rhssaf_ammo_brd_m83_orange";
		descriptionshort="Type: Smoke Grenade Orange<br />Rounds: 1<br />Used in: Hand";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhssaf_mag_rshb_p98: HandGrenade
	{
		ammo="rhssaf_ammo_rshb_p98";
		descriptionshort="Type: Flashbang grenade<br />Rounds: 1<br />Used in: Hand";
		mass=4.1999998;
	};
	class rhssaf_mag_brz_m88: HandGrenade
	{
		ammo="rhssaf_ammo_brz_m88";
		descriptionshort="Type: Incendiary Grenade<br />Rounds: 1<br />Used in: Hand";
		mass=11.54;
	};
	class rhssaf_mag_brk_m79: HandGrenade
	{
		ammo="rhssaf_ammo_brk_m79";
		descriptionshort="Type: Anti Armor Grenade<br />Rounds: 1<br />Used in: Hand";
		mass=23.540001;
		initSpeed=15;
	};
	class rhssaf_mag_ttm_m60: CA_Magazine
	{
		initSpeed=70;
		ammo="rhssaf_ammo_ttm_m60";
		count=1;
	};
	class rhssaf_mag_tkm_m60: CA_Magazine
	{
		initSpeed=70;
		ammo="rhssaf_ammo_tkm_m60";
		count=1;
	};
};
class CfgMagazineWells
{
	class CBA_32ACP_Vz61
	{
		RHSSAF_Magazines[]=
		{
			"rhsgref_20rnd_765x17_vz61",
			"rhsgref_10rnd_765x17_vz61"
		};
	};
	class CZ99_9x19_PARA
	{
		RHSSAF_Magazines[]=
		{
			"rhssaf_mag_15Rnd_9x19_FMJ",
			"rhssaf_mag_15Rnd_9x19_JHP"
		};
	};
	class CBA_556x45_G36
	{
		RHSSAF_Magazines[]=
		{
			"rhssaf_30rnd_556x45_EPR_G36",
			"rhssaf_30rnd_556x45_SOST_G36",
			"rhssaf_30rnd_556x45_SPR_G36",
			"rhssaf_30rnd_556x45_Tracers_G36",
			"rhssaf_30rnd_556x45_MDIM_G36",
			"rhssaf_30rnd_556x45_TDIM_G36",
			"rhssaf_100rnd_556x45_EPR_G36"
		};
	};
	class CBA_556x45_M21
	{
		RHSSAF_Magazines[]=
		{
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21_t"
		};
	};
	class AK_762x39
	{
		RHSSAF_Magazines[]=
		{
			"rhssaf_30Rnd_762x39mm_M67",
			"rhssaf_30Rnd_762x39mm_M78_tracer",
			"rhssaf_30Rnd_762x39_M82_api"
		};
	};
	class CBA_762x39_AK
	{
		RHSSAF_Magazines[]=
		{
			"rhssaf_30Rnd_762x39mm_M67",
			"rhssaf_30Rnd_762x39mm_M78_tracer",
			"rhssaf_30Rnd_762x39_M82_api"
		};
	};
	class CBA_762x51_SCAR
	{
		RHSSAF_Magazines[]=
		{
			"rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
			"rhs_mag_20Rnd_SCAR_762x51_m118_special_bk",
			"rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk"
		};
	};
	class CBA_792x57_M76
	{
		RHSSAF_Magazines[]=
		{
			"rhsgref_10Rnd_792x57_m76"
		};
	};
	class AK_Rifle_Grenades
	{
		RHSSAF_RG_Magazines[]=
		{
			"rhssaf_mag_ttm_m60",
			"rhssaf_mag_tkm_m60"
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
				file="\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_mtz.sqf";
				description="MTZ mounting handler";
			};
			class acc_mtz_handler
			{
				file="\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_mtz_dismount.sqf";
				description="MTZ dismounting handler";
			};
			class rkg3_impact
			{
				file="\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_rkg3_impact.sqf";
			};
			class virtualAmmoBoxSAF
			{
				file="\rhssaf\addons\rhssaf_c_weapons\scripts\virtualAmmoBox.sqf";
				description="[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxSAF, make a object virtual ammo box with SAF gear inside";
			};
			class mine_damage_handler
			{
				file="\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_apers_mine_dmg_handler.sqf";
				description="AP mine damage handler";
			};
		};
	};
};
