class CfgPatches
{
	class rhs_c_heavyweapons
	{
		units[]=
		{
			"rhs_casing_30mm",
			"RHS_ZU23_MSV",
			"RHS_ZU23_VDV",
			"RHS_ZU23_VMF",
			"RHS_NSV_TriPod_MSV",
			"RHS_NSV_TriPod_VDV",
			"RHS_NSV_TriPod_INS",
			"rhs_KORD_MSV",
			"rhs_KORD_VDV",
			"rhs_KORD_VMF",
			"rhs_KORD_INS",
			"rhs_KORD_high_MSV",
			"rhs_KORD_high_VDV",
			"rhs_KORD_high_VMF",
			"rhs_KORD_high_INS",
			"rhs_DSHKM_ins",
			"rhs_DSHKM_Mini_TriPod_ins",
			"RHS_AGS30_TriPod_MSV",
			"RHS_AGS30_TriPod_VDV",
			"RHS_AGS30_TriPod_VMF",
			"RHS_AGS30_TriPod_INS",
			"rhs_SPG9_INS",
			"rhs_SPG9M_MSV",
			"rhs_SPG9M_VDV",
			"rhs_SPG9M_VMF",
			"rhs_SPG9M_INS",
			"rhs_Igla_AA_pod_msv",
			"rhs_Igla_AA_pod_vdv",
			"rhs_Igla_AA_pod_vmf",
			"rhs_Igla_AA_pod_ins",
			"rhs_2b14_82mm_msv",
			"rhs_2b14_82mm_vdv",
			"rhs_2b14_82mm_vmf",
			"rhs_2b14_82mm_ins",
			"rhs_Metis_9k115_2_msv",
			"rhs_Metis_9k115_2_vdv",
			"rhs_Metis_9k115_2_vmf",
			"rhs_Metis_9k115_2_ins",
			"rhs_Metis_9k115_1_ins",
			"rhs_Kornet_9M133_2_msv",
			"rhs_Kornet_9M133_2_vdv",
			"rhs_Kornet_9M133_2_vmf",
			"rhs_Kornet_9M133_2_ins",
			"rhs_D30_msv",
			"rhs_D30_vdv",
			"rhs_D30_vmf",
			"rhs_D30_ins",
			"rhs_D30_AT_msv",
			"rhs_D30_AT_vdv",
			"rhs_D30_AT_vmf",
			"rhs_D30_AT_ins",
			"RHS_NSV_Gun_Bag",
			"RHS_NSV_Tripod_Bag",
			"RHS_DShkM_Gun_Bag",
			"RHS_DShkM_TripodHigh_Bag",
			"RHS_DShkM_TripodLow_Bag",
			"RHS_Kord_Gun_Bag",
			"RHS_Kord_Tripod_Bag",
			"RHS_Metis_Gun_Bag",
			"RHS_Metis_Tripod_Bag",
			"RHS_Kornet_Gun_Bag",
			"RHS_Kornet_Tripod_Bag",
			"RHS_AGS30_Gun_Bag",
			"RHS_AGS30_Tripod_Bag",
			"RHS_SPG9_Gun_Bag",
			"RHS_SPG9_Tripod_Bag",
			"RHS_Podnos_Gun_Bag",
			"RHS_Podnos_Bipod_Bag"
		};
		weapons[]=
		{
			"rhs_weap_pkt",
			"rhs_weap_nsvt",
			"rhs_weap_dshkm",
			"rhs_weap_kpvt",
			"rhs_weap_2a26",
			"rhs_weap_2a46_2",
			"rhs_weap_2a46m_2",
			"rhs_weap_2a46m_4",
			"rhs_weap_d10t2s_2",
			"rhs_weap_d10tg",
			"rhs_weap_d10t2s",
			"rhs_weap_u5ts",
			"rhs_weap_2a42",
			"rhs_weap_2a28",
			"rhs_weap_2a41",
			"rhs_weap_9k11",
			"rhs_weap_9m111",
			"rhs_weap_9k133",
			"rhs_weap_s8",
			"rhs_weap_902a",
			"rhs_weap_2p130"
		};
		name="Heavy weapons pack";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class DefaultEventhandlers;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
	class SmokeLauncherAmmo;
	class SubmunitionCore;
	class SubmunitionBase;
	class SubmunitionBullet;
	class rhs_ammo_recoil: SubmunitionBullet
	{
		tracerScale=0;
		tracerStartTime=0;
		tracerEndTime=0;
		muzzleEffect="";
		explosive=0;
		caliber=0;
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		typicalspeed=1000;
		submunitionAmmo="";
		triggerTime=0.001;
		timeToLive=0.1;
		class HitEffects
		{
		};
	};
	class Default;
	class BulletCore;
	class BulletBase;
	class ShellBase;
	class MissileCore: Default
	{
	};
	class MissileBase: MissileCore
	{
		class EventHandlers;
	};
	class rhs_ammo_902a: SmokeLauncherAmmo
	{
	};
	class rhs_ammo_3d17: SmokeLauncherAmmo
	{
		rhs_smokeShell="rhs_ammo_3d17_shell";
		muzzleEffect="";
		weaponLockSystem="1 + 2 + 4";
		simulation="shotCM";
		AIAmmoUsageFlags="4 + 8";
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		class EventHandlers
		{
			class RHS_CM
			{
				fired="_this call RHS_fnc_effectFiredSmokeLauncher";
			};
		};
	};
	class rhs_ammo_3d17_902B: rhs_ammo_3d17
	{
		rhs_smokeShell="rhs_ammo_3d17_shell_902B";
	};
	class rhs_ammo_smokegen: SmokeLauncherAmmo
	{
		muzzleEffect="";
		weaponLockSystem="2";
		simulation="shotCM";
		AIAmmoUsageFlags="4";
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		class EventHandlers
		{
			class RHS_CM
			{
				fired="_this call RHS_fnc_effectFiredSmokeGenerator";
			};
		};
	};
	class rhs_ammo_dazzler: rhs_ammo_smokegen
	{
		muzzleEffect="";
		class EventHandlers
		{
			class RHS_CM
			{
				fired="_this call RHS_fnc_effectFiredDazzler";
			};
		};
	};
	class Grenade;
	class GrenadeHand;
	class rhs_ammo_3d17_shell: Grenade
	{
		simulation="shotShell";
		AIAmmoUsageFlags="4";
		hit=3;
		indirectHit=3;
		indirectHitRange=3;
		suppressionRadiusHit=60;
		typicalspeed=50;
		airFriction=-0.012;
		deflecting=30;
		fuseDistance=0;
		explosionEffects="RHS_3D17Effect";
		CraterEffects="";
		explosionTime=0.69999999;
		timeToLive=1;
		coefGravity=2.5;
	};
	class rhs_ammo_3d17_shell_902B: rhs_ammo_3d17_shell
	{
		explosionEffects="RHS_3D17Effect_902B";
	};
	class RHS_Ammo_DIRCM_Vitebsk: BulletBase
	{
		cost=1;
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		timeToLive=2.0999999;
		thrustTime=2;
		airFriction=-0.0099999998;
		simulation="shotCM";
		weaponLockSystem="2";
		maxControlRange=-1;
		initTime=0;
		aiAmmoUsageFlags=8;
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			0.1,
			1
		};
		supersonicCrackNear[]=
		{
			"A3\sounds_f\dummysound",
			0,
			1,
			0
		};
		supersonicCrackFar[]=
		{
			"A3\sounds_f\dummysound",
			0,
			1,
			0
		};
		effectsSmoke="EmptyEffect";
	};
	class CMflareAmmo;
	class rhs_CMflare_Ammo: CMflareAmmo
	{
		effectsSmoke="rhs_CounterMeasureFlare";
	};
	class Sh_125mm_APFSDS;
	class Sh_125mm_HE;
	class Laserbeam;
	class rhs_Laserbeam: Laserbeam
	{
		hit=0;
		cost=1000000;
	};
	class rhs_laserbeam_fcs: BulletBase
	{
		simulation="shotSubmunitions";
		hit=145;
		indirectHit=1;
		indirectHitRange=0;
		cost=1;
		airFriction=-9.9999999e-009;
		triggerTime=0.001;
		triggerSpeedCoef=0.001;
		submunitionConeAngle=0;
		submunitionCount=1;
		submunitionAmmo="rhs_fakeAmmo";
		airLock=1;
		aiAmmoUsageFlags="64+32+128+256+512";
	};
	class rhs_fakeAmmo: BulletBase
	{
		tracerScale=0;
		tracerStartTime=0;
		tracerEndTime=0;
		whistleOnFire=0;
		whistleDist=0;
		muzzleEffect="";
		explosive=0;
		caliber=0;
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		typicalspeed=1;
		timeToLive=0.0020000001;
		simulationStep=0.001;
	};
	class rhs_ammo_spall: BulletBase
	{
		caliber=10;
		hit=20;
		indirectHit=0;
		indirectHitRange=0.15000001;
		typicalSpeed=50;
		airfriction=-9.9999997e-006;
		deflecting=90;
		deflectionSlowDown=2;
		deflectionDirDistribution=1;
		penetrationDirDistribution=1;
		timeToLive=0.5;
	};
	class rhs_ammo_thermobaric_wave: rhs_ammo_spall
	{
		caliber=6.6666698;
		hit=10;
		indirectHit=20;
		indirectHitRange=2.1500001;
		explosive=0.80000001;
		timeToLive=0.30000001;
	};
	class rhs_ammo_he_fragments: BulletBase
	{
		caliber=0.88888901;
		hit=20;
		indirectHit=0;
		indirectHitRange=0.15000001;
		typicalSpeed=1500;
		deflecting=9;
		timeToLive=0.5;
	};
	class rhs_ammo_br_base: Sh_125mm_APFSDS
	{
		hit=320;
		indirectHit=20;
		indirectHitRange=1;
		typicalSpeed=895;
		cost=500;
		deflecting=15;
	};
	class rhs_ammo_br412: rhs_ammo_br_base
	{
	};
	class rhs_ammo_bm_base: Sh_125mm_APFSDS
	{
		cost=500;
		hit=250;
		indirectHit=0;
		indirectHitRange=0;
		typicalspeed=1430;
		explosive=0;
		deflecting=10;
		caliber=33.330002;
		timeToLive=15;
		whistleOnFire=1;
		whistleDist=14;
		muzzleEffect="";
	};
	class rhs_ammo_3bm_base: rhs_ammo_bm_base
	{
		indirectHit=40;
		indirectHitRange=0.5;
		typicalSpeed=1700;
		simulationStep=0.0099999998;
		effectFly="RHS_125mm_Sabot_Eject";
	};
	class rhs_ammo_base_penetrator: rhs_ammo_3bm_base
	{
		caliber=6.6666698;
		warheadName="HEAT";
		hit=290;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		typicalSpeed=1000;
		deflecting=0;
		deflectionDirDistribution=0;
		penetrationDirDistribution=0;
		timeToLive=0.0099999998;
		simulationStep=0.00050000002;
		airFriction=-0.5;
		whistleOnFire=0;
		whistleDist=0;
		effectFly="";
		submunitionConeType[]=
		{
			"randomcenter",
			30
		};
		submunitionAmmo="rhs_ammo_spall";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.40000001};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=200;
		deleteParentWhenTriggered=0;
		triggerTime=0.003;
		SoundSetExplosion[]=
		{
			"Silence_SoundSet"
		};
	};
	class rhs_ammo_cluster_penetrator: Sh_125mm_APFSDS
	{
		caliber=6.6666698;
		warheadName="HEAT";
		hit=150;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		deflecting=0;
		typicalSpeed=1000;
		simulationStep=0.00050000002;
		airFriction=-0.5;
		whistleOnFire=0;
		whistleDist=0;
		submunitionConeType[]=
		{
			"randomcenter",
			4
		};
		submunitionAmmo="rhs_ammo_spall";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.40000001};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=200;
		deleteParentWhenTriggered=0;
		triggerTime=0.003;
		SoundSetExplosion[]=
		{
			"Silence_SoundSet"
		};
	};
	class rhs_ammo_ap_penetrator: Sh_125mm_APFSDS
	{
		warheadName="AP";
		indirectHit=11;
		indirectHitRange=0.34999999;
		timetolive=5;
		simulationStep=0.00050000002;
		airFriction=-0.079999998;
		submunitionConeType[]=
		{
			"randomcenter",
			30
		};
		submunitionAmmo="rhs_ammo_spall";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.40000001};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=200;
		deleteParentWhenTriggered=0;
		triggerTime=0.0020000001;
		soundVehiclePlateInt1[]=
		{
			"rhsafrf\addons\rhs_c_heavyweapons\sounds\Inhit.wav",
			4.2387199,
			1,
			100
		};
		hitArmorInt[]=
		{
			"soundVehiclePlateInt1",
			1
		};
		hitDefaultInt[]=
		{
			"soundVehiclePlateInt1",
			1
		};
		hitMetalInt[]=
		{
			"soundVehiclePlateInt1",
			1
		};
		hitMetalPlateInt[]=
		{
			"soundVehiclePlateInt1",
			1
		};
		multiSoundHitInt[]=
		{
			"soundVehiclePlateInt1",
			1
		};
		SoundSetExplosion[]={};
	};
	class rhs_ammo_bm25: rhs_ammo_bm_base
	{
		hit=520;
		typicalspeed=1425;
		caliber=16.316999;
	};
	class rhs_ammo_bm8: rhs_ammo_bm_base
	{
		hit=470;
		typicalspeed=1425;
		caliber=12.2497;
	};
	class rhs_ammo_bm4: rhs_ammo_bm_base
	{
		hit=520;
		typicalspeed=1650;
		caliber=10.8761;
	};
	class rhs_ammo_bm23: rhs_ammo_bm_base
	{
		hit=645;
		typicalspeed=1650;
		caliber=12.1212;
	};
	class rhs_ammo_3bm9: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm9_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm9_penetrator: rhs_ammo_ap_penetrator
	{
		hit=190;
		typicalSpeed=1800;
		caliber=9.07407;
	};
	class rhs_ammo_3bm12: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm12_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm12_penetrator: rhs_ammo_ap_penetrator
	{
		hit=215;
		typicalSpeed=1800;
		caliber=10.3704;
	};
	class rhs_ammo_3bm15: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm15_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm15_penetrator: rhs_ammo_ap_penetrator
	{
		hit=240;
		typicalSpeed=1780;
		caliber=11.6105;
	};
	class rhs_ammo_3bm17: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm17_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm17_penetrator: rhs_ammo_ap_penetrator
	{
		hit=230;
		typicalSpeed=1760;
		caliber=10.9848;
	};
	class rhs_ammo_3bm22: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm22_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm22_penetrator: rhs_ammo_ap_penetrator
	{
		hit=200;
		typicalSpeed=1760;
		caliber=14.3939;
	};
	class rhs_ammo_3bm26: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm26_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm26_penetrator: rhs_ammo_ap_penetrator
	{
		hit=230;
		typicalSpeed=1720;
		caliber=15.8915;
	};
	class rhs_ammo_3bm29: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm29_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm29_penetrator: rhs_ammo_ap_penetrator
	{
		hit=230;
		caliber=16.8627;
	};
	class rhs_ammo_3bm32: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm32_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm32_penetrator: rhs_ammo_ap_penetrator
	{
		hit=230;
		caliber=21.1765;
	};
	class rhs_ammo_3bm42: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm42_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm42_penetrator: rhs_ammo_ap_penetrator
	{
		hit=250;
		caliber=19.2157;
	};
	class rhs_ammo_3bm42m: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm42m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm42m_penetrator: rhs_ammo_ap_penetrator
	{
		hit=270;
		typicalSpeed=1750;
		caliber=24.7619;
		airFriction=-2.4999999e-005;
	};
	class rhs_ammo_3bm46: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm46_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm46_penetrator: rhs_ammo_ap_penetrator
	{
		hit=300;
		typicalSpeed=1700;
		caliber=26.7059;
		airFriction=-3.2e-005;
	};
	class rhs_ammo_3bm59: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm59_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm59_penetrator: rhs_ammo_ap_penetrator
	{
		hit=300;
		typicalSpeed=1700;
		caliber=30.5882;
		airFriction=-3.2e-005;
	};
	class rhs_ammo_3bm60: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm60_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm60_penetrator: rhs_ammo_ap_penetrator
	{
		hit=300;
		typicalSpeed=1700;
		caliber=27.0588;
		airFriction=-3.2e-005;
	};
	class rhs_ammo_3bm69: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm69_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm69_penetrator: rhs_ammo_ap_penetrator
	{
		hit=300;
		typicalSpeed=2050;
		caliber=33.6842;
		airFriction=-3.2e-005;
	};
	class rhs_ammo_3bm70: rhs_ammo_3bm_base
	{
		caliber=0.1;
		submunitionAmmo="rhs_ammo_3bm70_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bm70_penetrator: rhs_ammo_ap_penetrator
	{
		hit=300;
		typicalSpeed=2050;
		caliber=31.2281;
		airFriction=-3.2e-005;
	};
	class rhs_ammo_bk_base: rhs_ammo_bm_base
	{
		rhs_ce_round=1;
		explosive=0.40000001;
		caliber=0.5;
		cost=260;
		hit=200;
		indirectHit=15;
		indirectHitRange=2;
		typicalspeed=900;
		airLock=1;
	};
	class rhs_ammo_bk4: rhs_ammo_bk_base
	{
		typicalspeed=1000;
	};
	class rhs_ammo_bk5: rhs_ammo_bk_base
	{
		submunitionAmmo="rhs_ammo_bk5_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_bk5_penetrator: rhs_ammo_base_penetrator
	{
		caliber=25.3333;
	};
	class rhs_ammo_bk6m: rhs_ammo_bk_base
	{
		submunitionAmmo="rhs_ammo_bk6m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_bk6m_penetrator: rhs_ammo_base_penetrator
	{
		caliber=30.6667;
	};
	class rhs_ammo_bk13: rhs_ammo_bk_base
	{
		typicalspeed=1060;
		submunitionAmmo="rhs_ammo_bk13_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_bk13_penetrator: rhs_ammo_base_penetrator
	{
		caliber=33.333302;
	};
	class rhs_ammo_bk15: rhs_ammo_bk_base
	{
		typicalspeed=1060;
		submunitionAmmo="rhs_ammo_3bk12_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_bk15_penetrator: rhs_ammo_base_penetrator
	{
		caliber=28;
	};
	class rhs_ammo_bk17: rhs_ammo_bk_base
	{
		submunitionAmmo="rhs_ammo_bk17_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_bk17_penetrator: rhs_ammo_base_penetrator
	{
		caliber=41.333302;
	};
	class rhs_ammo_3bk_base: rhs_ammo_bk_base
	{
		warheadName="HEAT";
		indirectHit=20;
		indirectHitRange=3.5999999;
		typicalSpeed=905;
		deflecting=7;
	};
	class rhs_ammo_3bk12: rhs_ammo_3bk_base
	{
		hit=200;
		submunitionAmmo="rhs_ammo_3bk12_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk12_penetrator: rhs_ammo_base_penetrator
	{
		caliber=28;
	};
	class rhs_ammo_3bk14: rhs_ammo_3bk_base
	{
		hit=210;
		submunitionAmmo="rhs_ammo_3bk14_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk14_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=30;
	};
	class rhs_ammo_3bk18: rhs_ammo_3bk_base
	{
		hit=210;
		submunitionAmmo="rhs_ammo_3bk18_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk18_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=33.333302;
	};
	class rhs_ammo_3bk18M: rhs_ammo_3bk_base
	{
		hit=215;
		submunitionAmmo="rhs_ammo_3bk18m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk18m_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=36.666698;
	};
	class rhs_ammo_3bk21: rhs_ammo_3bk_base
	{
		hit=220;
		submunitionAmmo="rhs_ammo_3bk21_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk21_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=36.666698;
	};
	class rhs_ammo_3bk29: rhs_ammo_3bk_base
	{
		hit=230;
		typicalSpeed=915;
		warheadName="TandemHEAT";
		submunitionAmmo="rhs_ammo_3bk29_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk29_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=53.333302;
	};
	class rhs_ammo_3bk31: rhs_ammo_3bk_base
	{
		hit=235;
		typicalSpeed=915;
		warheadName="TandemHEAT";
		submunitionAmmo="rhs_ammo_3bk31_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk31_penetrator: rhs_ammo_3bk12_penetrator
	{
		warheadName="TandemHEAT";
		caliber=56.666698;
	};
	class rhs_ammo_of_base: Sh_125mm_HE
	{
		explosive=0.69999999;
		hit=150;
		indirectHit=40;
		indirectHitRange=8;
		typicalspeed=750;
		deflecting=1;
		cost=300;
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="ArtyShellExplosion";
	};
	class rhs_ammo_of412: rhs_ammo_of_base
	{
	};
	class rhs_ammo_of11: rhs_ammo_of_base
	{
		hit=170;
		indirectHit=55;
	};
	class rhs_ammo_of28: rhs_ammo_of_base
	{
		hit=180;
		indirectHit=60;
		typicalspeed=800;
	};
	class rhs_ammo_of29: rhs_ammo_of_base
	{
		hit=180;
		indirectHit=60;
		typicalspeed=800;
	};
	class rhs_ammo_3of_base: rhs_ammo_of_base
	{
		hit=200;
		indirectHit=100;
		indirectHitRange=15;
		typicalSpeed=850;
		caliber=5;
		whistleDist=60;
		rhs_ammo_airburst="rhs_ammo_3of_airburst";
	};
	class rhs_ammo_3of_airburst: ShellBase
	{
		explosive=1;
		typicalSpeed=100;
		hit=200;
		indirectHit=100;
		indirectHitRange=45;
		explosionEffects="RHS_Airburst_Explosion";
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="";
		CraterWaterEffects="";
		timeToLive=1;
		explosionTime=0.001;
		soundFly[]=
		{
			"",
			1,
			1
		};
		soundEngine[]=
		{
			"",
			1,
			4
		};
		airFriction=0;
	};
	class rhs_ammo_3of11: rhs_ammo_3of_base
	{
		airFriction=-0.00019999999;
		indirectHit=70;
		indirectHitRange=14;
	};
	class rhs_ammo_3of26: rhs_ammo_3of_base
	{
		airFriction=-0.00019999999;
	};
	class rhs_ammo_9m41: ShellBase
	{
		hit=5;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		ExplosionEffects="";
		soundHit[]=
		{
			"",
			0,
			1
		};
		CraterEffects="";
		whistleDist=0;
	};
	class rhs_ammo_3UOF17: rhs_ammo_3of_base
	{
		hit=210;
		indirectHit=50;
		indirectHitRange=12;
		typicalSpeed=250;
		explosive=0.80000001;
		cost=300;
		airFriction=-9.9999997e-006;
		simulationStep=0.0099999998;
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="ArtyShellExplosion";
		caliber=6;
		whistleDist=40;
		timeToLive=35;
	};
	class rhs_ammo_3UOF19: rhs_ammo_3UOF17
	{
		hit=180;
		indirectHit=40;
		indirectHitRange=20;
		typicalSpeed=355;
		explosive=1.2;
		timeToLive=35;
	};
	class rhs_ammo_3UOF191: rhs_ammo_3UOF19
	{
		simulation="shotSubmunitions";
		submunitionAmmo="rhs_ammo_3UOF191_airburst";
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionConeAngle=1;
		triggerDistance=15;
		weaponType="cannon";
	};
	class rhs_ammo_3UOF191_airburst: rhs_ammo_3UOF19
	{
		indirectHitRange=34;
		timeToLive=1;
		explosionTime=0.001;
		simulationStep=0.00050000002;
		airFriction=0;
	};
	class G_40mm_HE;
	class rhs_ammo_VOG30: G_40mm_HE
	{
		hit=40;
		indirectHit=7;
		indirectHitRange=4.1739998;
		dangerRadiusHit=50;
		suppressionRadiusHit=20;
		class CamShakeExplode
		{
			power="(30*0.2)";
			duration="((round (30^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((3 + 30^0.5)*8)";
		};
		class CamShakeHit
		{
			power=20;
			duration="((round (30^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(0^0.25)";
			duration="((round (0^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((0^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_GPD30: rhs_ammo_VOG30
	{
		hit=50;
		indirectHit=7;
		airFriction=-0.00079000002;
		indirectHitRange=5.1919999;
	};
	class rhs_ammo_VOG17m: rhs_ammo_VOG30
	{
		hit=35;
		indirectHit=4;
		indirectHitRange=3.3280001;
	};
	class Sh_155mm_AMOS;
	class rhs_ammo_3WOF27: Sh_155mm_AMOS
	{
		cost=100;
		artilleryLock=1;
		hit=300;
		indirectHit=105;
		indirectHitRange=28;
		timetolive=220;
	};
	class rhs_ammo_3WB3: rhs_ammo_3WOF27
	{
		cost=100;
		artilleryLock=1;
		simulation="shotSubmunitions";
		submunitionAmmo="rhs_ammo_3WB3_submunition";
		submunitionConeType[]=
		{
			"poissondisc",
			1
		};
		submunitionConeAngle=1;
		simulationStep=0.0099999998;
		triggerDistance=15;
		aimAboveTarget[]={10};
		aimAboveDefault=0;
	};
	class rhs_ammo_3WB3_submunition: rhs_ammo_3WOF27
	{
		hit=3000;
		indirectHit=3000;
		indirectHitRange=500;
		explosionTime=0.0099999998;
		ExplosionEffects="RHS_NukeExplosion5";
		CraterEffects="";
		SoundSetExplosion[]=
		{
			"rhs_nuke_explosion_soundset",
			"Shell155mm_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		class CamShakeExplode
		{
			power=100;
			duration=4.4000001;
			frequency=20;
			distance=13098.9;
		};
		class CamShakeHit
		{
			power=500;
			duration=1;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=4.7287102;
			duration=4.4000001;
			frequency=20;
			distance=178.88499;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_152_WP: rhs_ammo_3WOF27
	{
		hit=60;
		indirectHit=50;
		indirectHitRange=30;
		explosive=0.80000001;
		ExplosionEffects="WPExplosion";
		CraterEffects="ExploAmmoCrater";
	};
	class Sh_155mm_AMOS_LG;
	class rhs_ammo_3WOF93: Sh_155mm_AMOS_LG
	{
	};
	class Flare_82mm_AMOS_White;
	class rhs_ammo_3WS23: Flare_82mm_AMOS_White
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		ExplosionEffects="";
		soundHit[]=
		{
			"",
			0,
			1
		};
		CraterEffects="";
		whistleDist=0;
		intensity="10000 * 7";
		timeToLive=90;
	};
	class Smoke_120mm_AMOS_White;
	class rhs_ammo_53WD546U: Smoke_120mm_AMOS_White
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="";
		soundHit[]=
		{
			"",
			0,
			1
		};
		CraterEffects="";
		whistleDist=0;
	};
	class rhs_ammo_of462: Sh_155mm_AMOS
	{
		cost=10;
		artilleryLock=1;
		hit=150;
		indirectHit=105;
		indirectHitRange=28;
		timetolive=220;
		class CamShakeExplode
		{
			power="(122*0.2)*10";
			duration="((round (122^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((30 + 122^0.5))";
		};
		class CamShakeHit
		{
			power="122 * 10";
			duration="((round (122^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(122^0.25)*10";
			duration="((round (122^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((122^0.5))";
		};
		aiAmmoUsageFlags="64+32+128+256";
	};
	class rhs_ammo_3of56: rhs_ammo_of462
	{
		hit=160;
		indirectHit=50;
		indirectHitRange=30;
	};
	class rhs_ammo_3of69m: Sh_155mm_AMOS_LG
	{
	};
	class rhs_ammo_s463: Flare_82mm_AMOS_White
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
		ExplosionEffects="";
		soundHit[]=
		{
			"",
			0,
			1
		};
		CraterEffects="";
		whistleDist=0;
		intensity="10000 * 6";
		timeToLive=90;
	};
	class rhs_ammo_d462: Smoke_120mm_AMOS_White
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="";
		soundHit[]=
		{
			"",
			0,
			1
		};
		CraterEffects="";
		whistleDist=0;
	};
	class Sh_82mm_AMOS;
	class rhs_ammo_3vo18: Sh_82mm_AMOS
	{
		hit=145;
		indirectHit=42;
		indirectHitRange=18;
	};
	class rhs_ammo_3vs25m: Flare_82mm_AMOS_White
	{
		intensity="10000 * 5";
		timeToLive=90;
	};
	class rhs_ammo_d832du: Smoke_120mm_AMOS_White
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0.1;
		ExplosionEffects="";
		soundHit[]=
		{
			"",
			0,
			1
		};
		CraterEffects="";
		whistleDist=0;
	};
	class M_Titan_AT: MissileBase
	{
		class Components;
	};
	class rhs_ammo_atgmCore_base: M_Titan_AT
	{
		hit=240;
		indirectHit=20;
		indirectHitRange=4.1999998;
		missileManualControlCone=50;
		canLock=0;
		manualControl=1;
		maxControlRange=4500;
		trackOversteer=0.30000001;
		trackLead=0.2;
		weaponLockSystem=1;
		maneuvrability=8;
		timeToLive=25;
		simulationStep=0.0049999999;
		sideAirFriction=0.050000001;
		maxSpeed=200;
		initTime=0;
		thrustTime=1.5;
		thrust=250;
		deflecting=0;
		fuseDistance=50;
		whistleDist=2;
		class Direct;
		flightProfiles[]=
		{
			"Direct"
		};
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="RocketBackEffectsNLAW";
		effectsMissile="missile2";
		lockType=0;
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1,
			800
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						nightRangeCoef=0.80000001;
						angleRangeHorizontal=5;
						angleRangeVertical=5;
					};
				};
			};
		};
		class EventHandlers;
	};
	class rhs_ammo_atgmBase_base: M_Titan_AT
	{
		flightProfiles[]=
		{
			"Direct"
		};
		hit=240;
		indirectHit=20;
		indirectHitRange=4.1999998;
		cost=800;
		maxSpeed=115;
		canlock=0;
		lockType=0;
		irLock=1;
		weaponLockSystem=1;
		trackOversteer=0.30000001;
		trackLead=0.85000002;
		manualControl=1;
		maxControlRange=3000;
		initTime=0;
		missileManualControlCone=50;
		airfriction=-1.9999999e-005;
		sideairfriction=0.14;
		thrustTime=2.5;
		thrust=100;
		maneuvrability=4;
		typicalSpeed=115;
		fuseDistance=100;
		effectsMissileInit="RocketBackEffectsNLAW";
		timeToLive=26;
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1,
			800
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						nightRangeCoef=0.80000001;
						angleRangeHorizontal=5;
						angleRangeVertical=5;
					};
				};
			};
		};
		class EventHandlers;
	};
	class rhs_ammo_9m14: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_9m14m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		proxyShape="rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m14";
		thrustTime=1.5;
		thrust=80;
		manualControl=0;
		missileManualControlCone=30;
		lockType=0;
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_mclosGuide";
			};
		};
	};
	class rhs_ammo_9m14m: rhs_ammo_9m14
	{
		thrustTime=2.5;
		thrust=100;
		submunitionAmmo="rhs_ammo_9m14m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m14m_penetrator: rhs_ammo_base_penetrator
	{
		caliber=26.6667;
	};
	class rhs_ammo_mclos_training: rhs_ammo_9m14m
	{
		hit=24;
		submunitionAmmo="rhs_ammo_mclos_training_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_mclos_training_penetrator: rhs_ammo_base_penetrator
	{
		caliber=0.66666698;
	};
	class rhs_ammo_9m17: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_9m17_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		proxyShape="rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m17";
		typicalSpeed=115;
		thrustTime=2.5;
		thrust=150;
		maxSpeed=125;
		manualControl=0;
		lockType=0;
		maverickWeaponIndexOffset=40;
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_mclosGuide";
			};
		};
	};
	class rhs_ammo_9m17_penetrator: rhs_ammo_base_penetrator
	{
		caliber=33.333302;
	};
	class rhs_ammo_9m17p: rhs_ammo_9m17
	{
		submunitionAmmo="rhs_ammo_9m17p_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxControlRange=4000;
		missileManualControlCone=120;
		maxSpeed=175;
		thrust=170;
		rhs_saclos=1;
		rhs_ballisticMode=1;
		rhs_guideMode="WIRE";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m17p_penetrator: rhs_ammo_base_penetrator
	{
		caliber=36.666698;
	};
	class rhs_ammo_9m112: rhs_ammo_atgmCore_base
	{
		warheadName="TandemHEAT";
		submunitionAmmo="rhs_ammo_9m112_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		manualcontrol=0;
		airLock=1;
		trackLead=0;
		effectsMissileInit="RHS_ATGM_Pusher_Eject";
		rhs_saclos=1;
		rhs_ballisticMode=1;
		rhs_guideMode="RADIO";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m112m: rhs_ammo_9m112
	{
		submunitionAmmo="rhs_ammo_9m112m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		inittime=0;
		irlock=1;
		laserlock=0;
		maneuvrability=9;
		sideairfriction=0.1;
		maxcontrolrange=4000;
		maxspeed=500;
		thrust=112;
		thrusttime=6;
		timetolive=30;
	};
	class rhs_ammo_9m112m2: rhs_ammo_9m112m
	{
		submunitionAmmo="rhs_ammo_9m112m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m124: rhs_ammo_9m112m
	{
		submunitionAmmo="rhs_ammo_9m124_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m112_penetrator: rhs_ammo_base_penetrator
	{
		warheadName="TandemHEAT";
		caliber=40;
	};
	class rhs_ammo_9m112m_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=48;
	};
	class rhs_ammo_9m112m2_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=56;
	};
	class rhs_ammo_9m124_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=62.666698;
	};
	class rhs_ammo_9m128: rhs_ammo_atgmCore_base
	{
		submunitionAmmo="rhs_ammo_9m128_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxControlRange=5000;
	};
	class rhs_ammo_9m128_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		hit=250;
		caliber=50;
	};
	class rhs_ammo_9m111: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_9m111_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		indirectHit=20;
		indirectHitRange=4.1999998;
		initTime=0.25;
		maneuvrability=8;
		trackOversteer=0.30000001;
		trackLead=0;
		sideairfriction=0.050000001;
		simulationstep=0.001;
		thrustTime=1.5;
		thrust=200;
		typicalSpeed=900;
		fuseDistance=70;
		timeToLive=20;
		maxSpeed=186;
		manualControl=0;
		missileManualControlCone=60;
		maxControlRange=2000;
		rhs_saclos=1;
		rhs_ballisticMode=0;
		rhs_guideMode="WIRE";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m111m: rhs_ammo_9m111
	{
		submunitionAmmo="rhs_ammo_9m111m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxControlRange=2500;
	};
	class rhs_ammo_9m111_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=26.6667;
	};
	class rhs_ammo_9m111m_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=40;
	};
	class rhs_ammo_9m113: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_9m113_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		indirectHit=20;
		indirectHitRange=4.1999998;
		initTime=0.25;
		maneuvrability=14;
		trackOversteer=0.60000002;
		trackLead=0.60000002;
		sideairfriction=0.050000001;
		simulationstep=0.001;
		thrustTime=1.5;
		thrust=200;
		typicalSpeed=900;
		fuseDistance=70;
		timeToLive=20;
		maxSpeed=200;
		manualControl=0;
		missileManualControlCone=60;
		maxControlRange=4000;
		rhs_saclos=1;
		rhs_ballisticMode=0;
		rhs_guideMode="WIRE";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m113m: rhs_ammo_9m113
	{
		submunitionAmmo="rhs_ammo_9m113m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m113_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=40;
	};
	class rhs_ammo_9m113m_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		caliber=50;
	};
	class rhs_ammo_9m117: rhs_ammo_atgmCore_base
	{
		submunitionAmmo="rhs_ammo_9m117_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		indirectHitRange=4.1999998;
		cost=100;
		canlock=1;
		irlock=1;
		airLock=1;
		laserlock=0;
		manualControl=0;
		missileManualControlCone=20;
		maxcontrolrange=5000;
		weaponLockSystem="1+4";
		maxSpeed=300;
		typicalSpeed=120;
		inittime=0;
		thrust=112;
		thrusttime=6;
		timetolive=30;
		sideairfriction=0.1;
		trackOversteer=0.30000001;
		trackLead=1;
		maneuvrability=17;
		rhs_saclos=1;
		rhs_ballisticMode=1;
		rhs_guideMode="BEAMRIDER";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m117_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=40;
	};
	class rhs_ammo_9m117m: rhs_ammo_9m117
	{
		warheadName="TandemHEAT";
		submunitionAmmo="rhs_ammo_9m117m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m117m_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		caliber=43.333302;
	};
	class rhs_ammo_9m117m1: rhs_ammo_9m117
	{
		warheadName="TandemHEAT";
		submunitionAmmo="rhs_ammo_9m117m1_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxcontrolrange=5500;
	};
	class rhs_ammo_9m117m1_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		caliber=50;
	};
	class rhs_ammo_9m118: rhs_ammo_9m117
	{
		submunitionAmmo="rhs_ammo_9m118_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m118_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=43.333302;
	};
	class rhs_ammo_9m119: rhs_ammo_atgmCore_base
	{
		submunitionAmmo="rhs_ammo_9m119_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxControlRange=5000;
		trackOversteer=0.30000001;
		trackLead=0.30000001;
		maneuvrability=9;
		typicalSpeed=120;
		maxSpeed=420;
		inittime=0.1;
		airLock=1;
		irlock=1;
		laserlock=0;
		manualControl=0;
		sideairfriction=0.1;
		thrust=112;
		thrusttime=6;
		timetolive=30;
		weaponLockSystem="1+4";
		effectsMissileInit="RHS_ATGM_Pusher_Eject";
		rhs_saclos=1;
		rhs_guideMode="BEAMRIDER";
		rhs_ballisticMode=1;
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m119_penetrator: rhs_ammo_9m112_penetrator
	{
		hit=250;
		caliber=46.666698;
	};
	class rhs_ammo_9m119m: rhs_ammo_9m119
	{
		submunitionAmmo="rhs_ammo_9m119m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m119m_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		caliber=56.666698;
	};
	class rhs_ammo_9m119f: rhs_ammo_9m119
	{
		AIAmmoUsageFlags="64+128+256";
		submunitionAmmo[]={};
		hit=100;
		indirectHit=70;
		indirectHitRange=12;
		cost=100;
		explosive=1;
		allowAgainstInfantry=1;
		CraterEffects="ArtyShellCrater";
		explosionEffects="RHS_FAE_Explosion";
		effectsMissile="missile3";
		class CamShakeExplode
		{
			power="(210*0.2)";
			duration="((round (210^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5 + 210^0.5)*8)";
		};
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
	};
	class rhs_ammo_9m115: rhs_ammo_9m119
	{
		submunitionAmmo="rhs_ammo_9m115_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxControlRange=1000;
		initTime=0.25;
		maxSpeed=223;
		timetolive=12;
		effectsMissileInit="RocketBackEffectsStaticRPG";
		effectsMissile="missile2";
		class CamShakeExplode
		{
			power="(55*0.2)";
			duration="((round (55^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power=110;
			duration="((round (110^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(60^0.25)";
			duration="((round (60^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		rhs_saclos=1;
		rhs_ballisticMode=1;
		rhs_guideMode="WIRE";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m115_penetrator: rhs_ammo_9m112_penetrator
	{
		caliber=36.666698;
	};
	class rhs_ammo_9m131: rhs_ammo_9m115
	{
		submunitionAmmo="rhs_ammo_9m131_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxControlRange=1500;
		airFriction=0.14;
		thrusttime=2;
	};
	class rhs_ammo_9m131_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		caliber=56.666698;
	};
	class rhs_ammo_9m131m: rhs_ammo_9m131
	{
		submunitionAmmo="rhs_ammo_9m131m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxControlRange=2000;
	};
	class rhs_ammo_9m131m_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		caliber=63.333302;
	};
	class rhs_ammo_9m131f: rhs_ammo_9m131m
	{
		AIAmmoUsageFlags="64+128+256";
		submunitionAmmo="";
		hit=120;
		indirectHit=100;
		indirectHitRange=12;
		cost=100;
		explosive=1;
		allowAgainstInfantry=1;
		CraterEffects="ArtyShellCrater";
		explosionEffects="RHS_FAE_Explosion";
		effectsMissile="missile3";
		class CamShakeExplode
		{
			power="(210*0.2)";
			duration="((round (210^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5 + 210^0.5)*8)";
		};
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
	};
	class rhs_ammo_9m133: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_9m133_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		indirectHit=18;
		indirectHitRange=4.5;
		whistleDist=3;
		canlock=1;
		irLock=1;
		trackOversteer=0.30000001;
		trackLead=1;
		maneuvrability=9;
		typicalSpeed=120;
		maxSpeed=300;
		inittime=0.25;
		laserlock=0;
		manualControl=0;
		missileManualControlCone=20;
		airFriction=0.13;
		sideairfriction=0.1;
		maxcontrolrange=5000;
		thrust=152;
		thrusttime=3;
		timetolive=30;
		rhs_saclos=1;
		rhs_ballisticMode=1;
		rhs_guideMode="BEAMRIDER";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m133_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		hit=290;
		caliber=66.666702;
	};
	class rhs_ammo_9m133f: rhs_ammo_9m131f
	{
		hit=125;
		indirectHit=100;
		indirectHitRange=12;
	};
	class rhs_ammo_9m1331: rhs_ammo_9m133
	{
		submunitionAmmo="rhs_ammo_9m1331_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m1331_penetrator: rhs_ammo_9m133_penetrator
	{
		warheadName="TandemHEAT";
		caliber=73.333298;
	};
	class rhs_ammo_9m133m2: rhs_ammo_9m133
	{
		submunitionAmmo="rhs_ammo_9m133m2_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_9m133m2_penetrator: rhs_ammo_9m133_penetrator
	{
		warheadName="TandemHEAT";
		caliber=86.666702;
	};
	class rhs_ammo_3m7: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_9m7_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		indirectHit=20;
		indirectHitRange=3.2;
		whistleDist=3;
		canlock=1;
		irLock=1;
		trackOversteer=0.30000001;
		trackLead=1;
		maneuvrability=17;
		typicalSpeed=120;
		maxSpeed=781;
		inittime=0;
		laserlock=0;
		manualcontrol=1;
		sideairfriction=0.1;
		maxcontrolrange=5000;
		thrust=112;
		thrusttime=2.5;
		timetolive=30;
		proxyShape="rhsafrf\addons\rhs_heavyweapons\atgm\rhs_3m7";
	};
	class rhs_ammo_9m7_penetrator: rhs_ammo_9m112_penetrator
	{
		hit=250;
		caliber=16.6667;
	};
	class rhs_proxy_ags30_mag: rhs_ammo_atgmBase_base
	{
		maverickWeaponIndexOffset=0;
		proxyShape="\rhsafrf\addons\rhs_heavyweapons\AGS30\AGS_magazine.p3d";
	};
	class rhs_proxy_pkm_mag: rhs_ammo_atgmBase_base
	{
		maverickWeaponIndexOffset=19;
		proxyShape="\rhsafrf\addons\rhs_tigr\sts_proxies\sts_pkm_mag_proxy.p3d";
	};
	class R_230mm_HE;
	class R_230mm_fly;
	class Mo_cluster_AP;
	class rhs_ammo_m21OF_HE: R_230mm_HE
	{
		submunitionAmmo="rhs_m21OF_fly";
		proxyShape="\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF_in";
		class CamShakeExplode
		{
			power=24.4;
			duration=2.2;
			frequency=20;
			distance=328.36301;
		};
		class CamShakeHit
		{
			power=122;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.3234601;
			duration=2.2;
			frequency=20;
			distance=88.3629;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_m21OF_fly: R_230mm_fly
	{
		hit=900;
		indirectHit=500;
		indirectHitRange=25;
		class CamShakeExplode
		{
			power=24.4;
			duration=2.2;
			frequency=20;
			distance=328.36301;
		};
		class CamShakeHit
		{
			power=122;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.3234601;
			duration=2.2;
			frequency=20;
			distance=88.3629;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_9m28f: rhs_ammo_m21OF_HE
	{
		submunitionAmmo="rhs_9m28f_fly";
	};
	class rhs_9m28f_fly: rhs_m21OF_fly
	{
		hit=1100;
		indirectHit=500;
		indirectHitRange=45;
	};
	class rhs_ammo_9m28k: rhs_ammo_m21OF_HE
	{
		triggerDistance=250;
		triggerSpeedCoef[]={0.5,1};
		submunitionConeAngle=19;
		submunitionConeType[]=
		{
			"randomcenter",
			3
		};
		submunitionAmmo[]=
		{
			"rhs_ammo_ptm3_deploy",
			0.93000001,
			"Mo_cluster_AP_UXO_deploy",
			0.07
		};
	};
	class rhs_ammo_9m218: rhs_ammo_m21OF_HE
	{
		triggerDistance=250;
		triggerSpeedCoef[]={0.5,1};
		submunitionConeAngle=19;
		submunitionConeType[]=
		{
			"randomcenter",
			45
		};
		submunitionAmmo[]=
		{
			"rhs_ammo_9m218_submunition",
			0.93000001,
			"Mo_cluster_AP_UXO_deploy",
			0.07
		};
	};
	class rhs_ammo_9m218_submunition: Mo_cluster_AP
	{
		submunitionAmmo="rhs_ammo_9m218_submunition_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHitRange=4;
	};
	class rhs_ammo_9m218_submunition_penetrator: rhs_ammo_cluster_penetrator
	{
		hit=130;
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=8;
	};
	class rhs_ammo_9m521: rhs_ammo_m21OF_HE
	{
		submunitionAmmo="rhs_9m521_fly";
	};
	class rhs_9m521_fly: rhs_m21OF_fly
	{
		hit=1100;
		indirectHit=500;
		indirectHitRange=35;
	};
	class rhs_ammo_9m522: rhs_ammo_m21OF_HE
	{
		submunitionAmmo="rhs_9m2522_fly";
	};
	class rhs_9m2522_fly: rhs_m21OF_fly
	{
		hit=1400;
		indirectHit=800;
		indirectHitRange=45;
	};
	class RocketBase;
	class rhs_ammo_rpgShell_base: RocketBase
	{
		hit=85;
		indirectHit=45;
		indirectHitRange=6;
		cost=250;
		typicalspeed=700;
		explosive=0.80000001;
		maxSpeed=700;
		airfriction=0.44999999;
		sideAirFriction=0.0099999998;
		initTime=0.15000001;
		fuseDistance=12;
		thrustTime=0.34999999;
		thrust=1400;
		timeToLive=8;
		whistleOnFire=1;
		whistleDist=14;
		tracerScale=2;
		tracerStartTime=0.1;
		tracerEndTime=2.3;
		effectsmissileinit="";
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1.1,
			0.69999999,
			250
		};
	};
	class rhs_ammo_og9v: rhs_ammo_rpgShell_base
	{
		AIAmmoUsageFlags="64+128+256";
		thrustTime=0;
		thrust=0;
		airfriction=0.074000001;
		sideAirFriction=0.5;
		smokeTrail=2;
		whistleDist=2;
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="HEShellExplosion";
		effectsMissile="missile3";
		effectsmissileinit="RocketBackEffectsStaticRPG";
		warheadName="HE";
	};
	class rhs_ammo_og9vm: rhs_ammo_og9v
	{
		hit=95;
		indirectHit=55;
	};
	class rhs_ammo_pg9v: rhs_ammo_rpgShell_base
	{
		hit=205;
		indirectHit=20;
		indirectHitRange=4.1999998;
		cost=200;
		aiAmmoUsageFlags="128+512";
		smokeTrail=2;
		whistleDist=2;
		effectsMissile="missile3";
		effectsmissileinit="RocketBackEffectsStaticRPG";
		warheadName="HEAT";
		submunitionAmmo="rhs_ammo_pg9v_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_pg9v_penetrator: rhs_ammo_base_penetrator
	{
		hit=220;
		caliber=20;
	};
	class rhs_ammo_pg9n: rhs_ammo_pg9v
	{
		warheadName="TandemHEAT";
		submunitionAmmo="rhs_ammo_pg9n_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_pg9n_penetrator: rhs_ammo_base_penetrator
	{
		hit=230;
		caliber=26.6667;
	};
	class rhs_ammo_pg9vnt: rhs_ammo_pg9v
	{
		warheadName="TandemHEAT";
		submunitionAmmo="rhs_ammo_pg9n_penetrator";
	};
	class rhs_ammo_pg9vnt_penetrator: rhs_ammo_base_penetrator
	{
		hit=280;
		caliber=36.666698;
	};
	class rhs_ammo_rpg15Shell_base: ShellBase
	{
		simulation="shotShell";
		hit=85;
		indirectHit=45;
		indirectHitRange=5;
		typicalspeed=350;
		explosive=0.80000001;
		deflecting=2;
		cost=250;
		tracerScale=1;
		tracerStartTime=0.001;
		tracerEndTime=12;
		initTime=-1;
		airfriction=-0.00017;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1.1,
			0.69999999,
			250
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",
			1.77828,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",
			1.77828,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",
			1.77828,
			1,
			1800
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",
			1.77828,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
	};
	class rhs_ammo_og15v: rhs_ammo_rpg15Shell_base
	{
		AIAmmoUsageFlags="64+128+256";
		airfriction=-0.00011934;
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="HEShellExplosion";
		warheadName="HE";
	};
	class rhs_ammo_og15v_rocket: rhs_ammo_og9v
	{
		effectsmissileinit="";
	};
	class rhs_ammo_pg15v: rhs_ammo_rpg15Shell_base
	{
		hit=205;
		indirectHit=20;
		indirectHitRange=4.1999998;
		airfriction=-0.00083999999;
		warheadName="HEAT";
		submunitionAmmo="rhs_ammo_pg15v_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_pg15v_rocket: rhs_ammo_pg9v
	{
		hit=205;
		indirectHit=20;
		indirectHitRange=4.1999998;
		typicalspeed=800;
		cost=500;
		effectsmissileinit="";
	};
	class rhs_ammo_pg15v_penetrator: rhs_ammo_base_penetrator
	{
		hit=230;
		caliber=26.6667;
	};
	class B_30mm_AP;
	class rhs_ammo_30x165mm_base: B_30mm_AP
	{
		hit=72;
		indirectHit=0;
		indirectHitRange=0;
		cost=55;
		irLock=1;
		tracerScale=2;
		tracerStartTime=0.1;
		tracerEndTime=3.5;
		airFriction=-0.00085499999;
		muzzleEffect="";
		caliber=4.1700001;
		airLock=1;
		timeToLive=25;
		weaponType="special";
		missileLockMaxDistance=1000;
		missileLockMinDistance=80;
		aiAmmoUsageFlags="128 + 512 + 256";
	};
	class rhs_ammo_3ubr6: rhs_ammo_30x165mm_base
	{
		hit=60;
		caliber=3.7800701;
		typicalspeed=1120;
		airfriction=-0.00056000001;
	};
	class rhs_ammo_3ubr8: rhs_ammo_30x165mm_base
	{
		hit=90;
		caliber=3.92857;
		typicalspeed=1120;
		airfriction=-0.00056000001;
		cost=75;
		class HitEffects
		{
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="ImpactConcreteSabotSmall";
			hitConcrete="ImpactConcreteSabotSmall";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitMan="ImpactEffectsBlood";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power="(45^0.5)";
			duration="((round (45^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((45^0.5)*3)";
		};
		class CamShakeHit
		{
			power=45;
			duration="((round (45^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(30^0.25)";
			duration="((round (30^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((30^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_gsh30_bt: rhs_ammo_3ubr8
	{
		cost=10;
		AIAmmoUsageFlags="64 + 128 + 256";
		weaponType="mgun";
	};
	class rhs_ammo_gsh30_mixed: SubmunitionBase
	{
		hit=90;
		typicalspeed=1120;
		airfriction=-0.00056000001;
		airLock=1;
		AIAmmoUsageFlags="64 + 128 + 256";
		cost=10;
		submunitionAmmo[]=
		{
			"rhs_ammo_3ubr8",
			0.33000001,
			"rhs_ammo_3uof8",
			0.33000001,
			"rhs_ammo_3uor6",
			0.33000001
		};
		weaponType="mgun";
		simulation="shotSubmunitions";
		triggerTime=0.0099999998;
		missileLockMaxDistance=1000;
		missileLockMinDistance=80;
	};
	class rhs_ammo_3ubr11: rhs_ammo_3ubr8
	{
		hit=95;
		caliber=5.4761901;
	};
	class B_30mm_HE;
	class rhs_ammo_3uor6: B_30mm_HE
	{
		hit=45;
		indirectHit=25;
		indirectHitRange=4;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		cost=20;
		explosive=0.60000002;
		airfriction=-0.00019999999;
		caliber=1.39;
		timeToLive=15;
		tracerScale=2;
		tracerStartTime=0.1;
		tracerEndTime=10;
		allowAgainstInfantry=1;
		aiAmmoUsageFlags="64 + 128 + 256";
		weaponType="special";
		class CamShakeExplode
		{
			power=6;
			duration=1;
			frequency=20;
			distance=83.817802;
		};
		class CamShakeHit
		{
			power=30;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.3403499;
			duration=1;
			frequency=20;
			distance=43.817799;
		};
		class CamShakePlayerFire
		{
			power=30;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_3uof8: rhs_ammo_3uor6
	{
		hit=50;
		indirectHit=33;
	};
	class B_127x108_Ball;
	class rhs_ammo_127x107mm: B_127x108_Ball
	{
		hit=25;
		timeToLive=25;
		tracerEndTime=3;
	};
	class rhs_ammo_127x108mm: rhs_ammo_127x107mm
	{
	};
	class rhs_ammo_127x108mm_notracer: rhs_ammo_127x108mm
	{
	};
	class rhs_ammo_127x108mm_x5: SubmunitionBase
	{
		explosive=0;
		allowAgainstInfantry=1;
		airlock=1;
		airfriction=-0.00089999998;
		audiblefire=22;
		visiblefire=22;
		visiblefiretime=3;
		submunitionAmmo[]=
		{
			"rhs_ammo_127x108mm_notracer",
			0.85000002,
			"rhs_ammo_127x108mm",
			0.15000001
		};
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		cost=10;
		submunitionConeAngle=0.44999999;
		triggerTime=0.0099999998;
		triggerSpeedCoef[]={0.80000001,1};
		explosionEffects="";
		CraterEffects="";
		hit=25;
		timeToLive=15;
		class CamShakeExplode
		{
			power=2.4000001;
			duration=0.60000002;
			frequency=20;
			distance=51.712799;
		};
		class CamShakeHit
		{
			power=12;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=1;
			duration=0.2;
			frequency=20;
			distance=8;
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_127x108mm_1SLT: rhs_ammo_127x108mm_x5
	{
		submunitionConeType[]=
		{
			"randomcenter",
			2
		};
		submunitionConeAngle=0.207;
		weaponType="mGun";
	};
	class rhs_ammo_127x108mm_1SLT_x5: rhs_ammo_127x108mm_x5
	{
		submunitionConeType[]=
		{
			"randomcenter",
			10
		};
		submunitionConeAngle=0.54000002;
	};
	class rhs_ammo_145x115mm: rhs_ammo_127x107mm
	{
		tracerEndTime=2.3499999;
		typicalSpeed=988;
		airFriction=-0.00052;
		caliber=2.76653;
	};
	class rhs_ammo_BS32_145x115mm: rhs_ammo_145x115mm
	{
		caliber=2.0580299;
	};
	class B_35mm_AA;
	class RHS_ammo_23mm_AA: B_35mm_AA
	{
		hit=60;
		indirectHit=40;
		indirectHitRange=1.8;
		explosive=0.60000002;
		airLock=1;
		cost=15;
		tracerScale=1.85;
		tracerStartTime=0.1;
		tracerEndTime=5.5;
		airFriction=-0.00082399999;
		muzzleEffect="";
		caliber=1.11;
	};
	class RHS_ammo_23mm_AA_mixed: SubmunitionBase
	{
		airLock=1;
		AIAmmoUsageFlags="256+128+64";
		airFriction=-0.00082399999;
		cost=10;
		submunitionAmmo[]=
		{
			"rhs_ammo_bzt_23x115mm",
			0.25,
			"rhs_ammo_ofz_23x115mm",
			0.75
		};
		weaponType="cannon";
		simulation="shotSubmunitions";
		triggerTime=0.0099999998;
	};
	class rhs_ammo_ofz_23x115mm: RHS_ammo_23mm_AA
	{
	};
	class rhs_ammo_ofzt_23x115mm: rhs_ammo_ofz_23x115mm
	{
		indirectHit=30;
		indirectHitRange=1.1;
	};
	class rhs_ammo_bzt_23x115mm: rhs_ammo_30x165mm_base
	{
		explosive=0;
		hit=80;
		indirectHit=1;
		indirectHitRange=0.30000001;
		tracerEndTime=5.5;
		caliber=3.65854;
	};
	class rhs_ammo_mixed_23x115mm: SubmunitionBase
	{
		hit=60;
		indirectHit=40;
		indirectHitRange=1.8;
		airlock=1;
		airFriction=-0.00082399999;
		typicalSpeed=960;
		AIAmmoUsageFlags="256+128+64";
		cost=10;
		submunitionAmmo[]=
		{
			"rhs_ammo_bzt_23x115mm",
			0.80000001,
			"rhs_ammo_ofz_23x115mm",
			0.2
		};
		weaponType="cannon";
		simulation="shotSubmunitions";
		triggerTime=0.0099999998;
	};
};
class CfgMagazines
{
	class SmokeLauncherMag;
	class CA_Magazine;
	class VehicleMagazine;
	class rhs_mag_902a: SmokeLauncherMag
	{
		count=1;
		ammo="rhs_ammo_902a";
	};
	class rhs_mag_3d17: SmokeLauncherMag
	{
		count=8;
		initSpeed=50;
		ammo="rhs_ammo_3d17";
	};
	class rhs_mag_3d17_4: rhs_mag_3d17
	{
		count=4;
	};
	class rhs_mag_3d17_6: rhs_mag_3d17
	{
		count=6;
	};
	class rhs_mag_3d17_12: rhs_mag_3d17
	{
		ammo="rhs_ammo_3d17_902B";
		count=12;
	};
	class rhs_mag_smokegen: SmokeLauncherMag
	{
		count=999;
		ammo="rhs_ammo_smokegen";
	};
	class rhs_mag_dazzler: rhs_mag_smokegen
	{
		count=999;
		ammo="rhs_ammo_dazzler";
	};
	class 60Rnd_CMFlare_Chaff_Magazine;
	class rhs_128Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=128;
	};
	class rhs_60Rnd_CMFlare_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		ammo="rhs_CMflare_Ammo";
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhs_weap_CMDispenser_ASO2";
		displayname="1x32 PPI-26 Flare/PPR-26 Chaff";
		hardpoints[]=
		{
			"RHS_cm_ASO2"
		};
		count=16;
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine_x2: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		displayname="2x32 PPI-26 Flare/PPR-26 Chaff";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x2"
		};
		count=32;
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		displayname="4x32 PPI-26 Flare/PPR-26 Chaff";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x4"
		};
		count=64;
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine_x6: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		displayname="6x32 PPI-26 Flare/PPR-26 Chaff";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x6"
		};
		count=96;
	};
	class rhs_ASO2_CMFlare_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		displayname="1x32 PPI-26 Flare";
		count=32;
		ammo="rhs_CMflare_Ammo";
	};
	class rhs_ASO2_CMFlare_Magazine_x2: rhs_ASO2_CMFlare_Magazine
	{
		displayname="2x32 PPI-26 Flare";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x2"
		};
		count=64;
	};
	class rhs_ASO2_CMFlare_Magazine_x4: rhs_ASO2_CMFlare_Magazine
	{
		displayname="4x32 PPI-26 Flare";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x4"
		};
		count=128;
	};
	class rhs_ASO2_CMFlare_Magazine_x6: rhs_ASO2_CMFlare_Magazine
	{
		displayname="6x32 PPI-26 Flare";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x6"
		};
		count=192;
	};
	class rhs_BVP3026_CMFlare_Chaff_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhs_weap_CMDispenser_BVP3026";
		hardpoints[]=
		{
			"RHS_cm_BVP3026"
		};
		displayname="1x30 PPI-26 Flare/PPR-26 Chaff";
		count=15;
	};
	class rhs_BVP3026_CMFlare_Chaff_Magazine_x2: rhs_BVP3026_CMFlare_Chaff_Magazine
	{
		hardpoints[]=
		{
			"RHS_cm_BVP3026_x2"
		};
		displayname="2x30 PPI-26 Flare/PPR-26 Chaff";
		count=30;
	};
	class rhs_BVP3026_CMFlare_Magazine: rhs_BVP3026_CMFlare_Chaff_Magazine
	{
		displayname="1x30 PPI-26 Flare";
		count=30;
		ammo="rhs_CMflare_Ammo";
	};
	class rhs_BVP3026_CMFlare_Magazine_x2: rhs_BVP3026_CMFlare_Magazine
	{
		hardpoints[]=
		{
			"RHS_cm_BVP3026_x2"
		};
		displayname="2x30 PPI-26 Flare";
		count=60;
	};
	class rhs_UV26_CMFlare_Chaff_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26"
		};
	};
	class rhs_UV26_CMFlare_Chaff_Magazine_x2: rhs_ASO2_CMFlare_Chaff_Magazine_x2
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26_x2"
		};
	};
	class rhs_UV26_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine_x4
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26_x4"
		};
	};
	class rhs_UV26_CMFlare_Magazine: rhs_ASO2_CMFlare_Magazine
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26"
		};
	};
	class rhs_UV26_CMFlare_Magazine_x2: rhs_ASO2_CMFlare_Magazine_x2
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26_x2"
		};
	};
	class rhs_UV26_CMFlare_Magazine_x4: rhs_ASO2_CMFlare_Magazine_x4
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26_x4"
		};
	};
	class rhs_mag_DIRCM_Vitebsk: CA_Magazine
	{
		count=120;
		ammo="RHS_Ammo_DIRCM_Vitebsk";
		initSpeed=30;
		weight=0;
	};
	class rhs_mag_DIRCM_Lipa: rhs_mag_DIRCM_Vitebsk
	{
		count=80;
	};
	class rhs_mag_aps_afganit: rhs_mag_smokegen
	{
		count=1;
		ammo="rhs_ammo_dazzler";
	};
	class Laserbatteries;
	class rhs_LaserMag: Laserbatteries
	{
		ammo="rhs_laserbeam";
	};
	class rhs_LaserFCSMag: Laserbatteries
	{
		ammo="rhs_laserbeam_FCS";
		count=99;
		initSpeed=600;
	};
	class rhs_mag_bm_base: VehicleMagazine
	{
		reloadTime=12;
		magazineReloadTime=12;
		count=14;
		initSpeed=900;
		rhs_magazineIndex=1;
		muzzleImpulseFactor[]=
		{
			"14*0.2",
			14
		};
	};
	class rhs_mag_br412_14: rhs_mag_bm_base
	{
		ammo="rhs_ammo_br412";
		initSpeed=1450;
	};
	class rhs_mag_br412_17: rhs_mag_br412_14
	{
		count=17;
	};
	class rhs_mag_bm25_14: rhs_mag_bm_base
	{
		ammo="rhs_ammo_bm25";
		initSpeed=1430;
	};
	class rhs_mag_bm8_14: rhs_mag_bm_base
	{
		ammo="rhs_ammo_bm8";
		initSpeed=1415;
	};
	class rhs_mag_bm4_15: rhs_mag_bm_base
	{
		ammo="rhs_ammo_bm4";
		count=15;
		initSpeed=1411;
	};
	class rhs_mag_bm23_15: rhs_mag_bm_base
	{
		ammo="rhs_ammo_bm23";
		initSpeed=1450;
		count=15;
	};
	class rhs_mag_3bm_base: rhs_mag_bm_base
	{
		reloadTime=6.5;
		magazineReloadTime=6.5;
		lastRoundsTracer=5;
		tracersEvery=1;
		count=10;
	};
	class rhs_mag_dummy: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm9";
	};
	class rhs_mag_3bm9_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm9";
		initSpeed=1800;
	};
	class rhs_mag_3bm9: rhs_mag_3bm9_10
	{
		count=40;
	};
	class rhs_mag_3bm12_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm12";
		initSpeed=1800;
	};
	class rhs_mag_3bm12: rhs_mag_3bm12_10
	{
		count=40;
	};
	class rhs_mag_3bm15_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm15";
		initSpeed=1785;
	};
	class rhs_mag_3bm15: rhs_mag_3bm15_10
	{
		count=40;
	};
	class rhs_mag_3bm17_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm17";
		initSpeed=1760;
	};
	class rhs_mag_3bm17_14: rhs_mag_3bm17_10
	{
		count=14;
	};
	class rhs_mag_3bm17: rhs_mag_3bm17_10
	{
		count=40;
	};
	class rhs_mag_3bm22_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm22";
		initSpeed=1760;
	};
	class rhs_mag_3bm22_14: rhs_mag_3bm22_10
	{
		count=14;
	};
	class rhs_mag_3bm22_7: rhs_mag_3bm22_10
	{
		count=7;
	};
	class rhs_mag_3bm22: rhs_mag_3bm22_10
	{
		count=40;
	};
	class rhs_mag_3bm26_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm26";
		initSpeed=1720;
	};
	class rhs_mag_3bm26_7: rhs_mag_3bm26_10
	{
		count=7;
	};
	class rhs_mag_3bm26: rhs_mag_3bm26_10
	{
		count=40;
	};
	class rhs_mag_3bm29_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm29";
		initSpeed=1660;
	};
	class rhs_mag_3bm29_7: rhs_mag_3bm29_10
	{
		count=7;
	};
	class rhs_mag_3bm29: rhs_mag_3bm29_10
	{
		count=40;
	};
	class rhs_mag_3bm32_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm32";
		initSpeed=1700;
	};
	class rhs_mag_3bm32_7: rhs_mag_3bm32_10
	{
		count=7;
	};
	class rhs_mag_3bm32: rhs_mag_3bm32_10
	{
		count=40;
	};
	class rhs_mag_3bm42_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm42";
		initSpeed=1700;
	};
	class rhs_mag_3bm42_7: rhs_mag_3bm42_10
	{
		count=7;
	};
	class rhs_mag_3bm42: rhs_mag_3bm42_10
	{
		count=40;
	};
	class rhs_mag_3bm42m_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm42m";
		initSpeed=1750;
	};
	class rhs_mag_3bm42m: rhs_mag_3bm42m_10
	{
		count=40;
	};
	class rhs_mag_3bm46_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm46";
		initSpeed=1700;
	};
	class rhs_mag_3bm46_8: rhs_mag_3bm46_10
	{
		count=8;
	};
	class rhs_mag_3bm46: rhs_mag_3bm46_10
	{
		count=40;
	};
	class rhs_mag_3bm59_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm59";
		initSpeed=1700;
	};
	class rhs_mag_3bm59: rhs_mag_3bm59_10
	{
		count=40;
	};
	class rhs_mag_3bm60_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm60";
		initSpeed=1700;
	};
	class rhs_mag_3bm60: rhs_mag_3bm60_10
	{
		count=40;
	};
	class rhs_mag_3bm69_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm69";
		initSpeed=2050;
	};
	class rhs_mag_3bm69_17: rhs_mag_3bm69_10
	{
		count=17;
	};
	class rhs_mag_3bm69: rhs_mag_3bm69_10
	{
		count=40;
	};
	class rhs_mag_3bm70_10: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm70";
		initSpeed=2050;
	};
	class rhs_mag_3bm70: rhs_mag_3bm70_10
	{
		count=40;
	};
	class rhs_mag_bk_base: VehicleMagazine
	{
		reloadTime=12;
		magazineReloadTime=12;
		count=8;
		initSpeed=900;
		rhs_magazineIndex=2;
		muzzleImpulseFactor=0.0099999998;
	};
	class rhs_mag_bk4_5: rhs_mag_bk_base
	{
		ammo="rhs_ammo_bk4";
		count=5;
		initSpeed=1750;
	};
	class rhs_mag_bk5_8: rhs_mag_bk_base
	{
		ammo="rhs_ammo_bk5";
		initSpeed=900;
	};
	class rhs_mag_bk6m: rhs_mag_bk_base
	{
		ammo="rhs_ammo_bk6m";
		initSpeed=740;
		count=1;
	};
	class rhs_mag_bk6m_5: rhs_mag_bk6m
	{
		count=5;
	};
	class rhs_mag_bk6m_26: rhs_mag_bk6m
	{
		count=26;
	};
	class rhs_mag_bk13: rhs_mag_bk_base
	{
		ammo="rhs_ammo_bk13";
		initSpeed=726;
		count=1;
	};
	class rhs_mag_bk13_26: rhs_mag_bk13
	{
		count=26;
	};
	class rhs_mag_bk13_5: rhs_mag_bk13
	{
		count=5;
	};
	class rhs_mag_bk15_5: rhs_mag_bk_base
	{
		ammo="rhs_ammo_bk15";
		count=5;
		initSpeed=1750;
	};
	class rhs_mag_bk17_8: rhs_mag_bk_base
	{
		ammo="rhs_ammo_bk17";
		initSpeed=850;
	};
	class rhs_mag_3bk_base: rhs_mag_bk_base
	{
		reloadTime=6.5;
		magazineReloadTime=6.5;
		count=8;
		tracersEvery=1;
		muzzleImpulseFactor[]=
		{
			"14*0.2",
			14
		};
	};
	class rhs_mag_3bk12_8: rhs_mag_3bk_base
	{
		ammo="rhs_ammo_3bk12";
		initSpeed=905;
	};
	class rhs_mag_3bk12: rhs_mag_3bk12_8
	{
		count=40;
	};
	class rhs_mag_3bk14_8: rhs_mag_3bk_base
	{
		ammo="rhs_ammo_3bk14";
		initSpeed=905;
	};
	class rhs_mag_3bk14_6: rhs_mag_3bk14_8
	{
		count=6;
	};
	class rhs_mag_3bk14: rhs_mag_3bk14_8
	{
		count=40;
	};
	class rhs_mag_3bk18_8: rhs_mag_3bk_base
	{
		ammo="rhs_ammo_3bk18";
		initSpeed=905;
	};
	class rhs_mag_3bk18_6: rhs_mag_3bk18_8
	{
		count=6;
	};
	class rhs_mag_3bk18: rhs_mag_3bk18_8
	{
		count=40;
	};
	class rhs_mag_3bk18m_8: rhs_mag_3bk_base
	{
		ammo="rhs_ammo_3bk18M";
		initSpeed=905;
	};
	class rhs_mag_3bk18m_6: rhs_mag_3bk18m_8
	{
		count=6;
	};
	class rhs_mag_3bk18m: rhs_mag_3bk18m_8
	{
		count=40;
	};
	class rhs_mag_3bk21_8: rhs_mag_3bk_base
	{
		ammo="rhs_ammo_3bk21";
		initSpeed=905;
	};
	class rhs_mag_3bk21: rhs_mag_3bk21_8
	{
		count=40;
	};
	class rhs_mag_3bk29_8: rhs_mag_3bk_base
	{
		ammo="rhs_ammo_3bk29";
		initSpeed=905;
	};
	class rhs_mag_3bk29: rhs_mag_3bk29_8
	{
		count=40;
	};
	class rhs_mag_3bk31_8: rhs_mag_3bk_base
	{
		ammo="rhs_ammo_3bk31";
		initSpeed=905;
	};
	class rhs_mag_3bk31_6: rhs_mag_3bk31_8
	{
		count=6;
	};
	class rhs_mag_3bk31_3: rhs_mag_3bk31_8
	{
		count=3;
	};
	class rhs_mag_3bk31: rhs_mag_3bk31_8
	{
		count=40;
	};
	class rhs_mag_of_base: VehicleMagazine
	{
		reloadTime=12;
		magazineReloadTime=12;
		count=17;
		initSpeed=900;
		rhs_magazineIndex=3;
		muzzleImpulseFactor=0.001;
	};
	class rhs_mag_of412_17: rhs_mag_of_base
	{
		ammo="rhs_ammo_of412";
	};
	class rhs_mag_of412_21: rhs_mag_of412_17
	{
		count=21;
	};
	class rhs_mag_of412_18: rhs_mag_of412_17
	{
		count=18;
	};
	class rhs_mag_of11_20: rhs_mag_of_base
	{
		ammo="rhs_ammo_of11";
		count=20;
		muzzleImpulseFactor[]={1,0.1};
	};
	class rhs_mag_of28_20: rhs_mag_of_base
	{
		ammo="rhs_ammo_of28";
		count=20;
		muzzleImpulseFactor[]={1,0.1};
	};
	class rhs_mag_3of_base: rhs_mag_of_base
	{
		reloadTime=6.5;
		magazineReloadTime=6.5;
		count=6;
		tracersEvery=1;
		muzzleImpulseFactor[]=
		{
			"14*0.5",
			14
		};
	};
	class rhs_mag_3of11_6: rhs_mag_3of_base
	{
		ammo="rhs_ammo_3of11";
	};
	class rhs_mag_3of11: rhs_mag_3of11_6
	{
		count=40;
	};
	class rhs_mag_3of26_6: rhs_mag_3of_base
	{
		ammo="rhs_ammo_3of26";
		initSpeed=850;
		tracersEvery=0;
	};
	class rhs_mag_3of26_5: rhs_mag_3of26_6
	{
		count=5;
	};
	class rhs_mag_3of26_7: rhs_mag_3of26_6
	{
		count=7;
	};
	class rhs_mag_3of26: rhs_mag_3of26_6
	{
		count=40;
	};
	class rhs_mag_3UOF17_22: VehicleMagazine
	{
		ammo="rhs_ammo_3UOF17";
		count=22;
		initSpeed=250;
		nameSound="heat";
		tracersEvery=0;
		rhs_magazineIndex=3;
	};
	class rhs_mag_3UOF19_22: VehicleMagazine
	{
		ammo="rhs_ammo_3UOF19";
		count=22;
		initSpeed=355;
		nameSound="heat";
		tracersEvery=1;
		rhs_magazineIndex=3;
	};
	class rhs_mag_3UOF191_22: rhs_mag_3UOF19_22
	{
		ammo="rhs_ammo_3UOF191";
	};
	class rhs_mag_9m41_20: VehicleMagazine
	{
		ammo="Flare_82mm_AMOS_White";
		count=20;
		initSpeed=200;
	};
	class 32Rnd_155mm_Mo_shells;
	class rhs_mag_HE_2a33: 32Rnd_155mm_Mo_shells
	{
		ammo="rhs_ammo_3WOF27";
		count=26;
		nameSound="heat";
	};
	class rhs_mag_HE_2a33_26: 32Rnd_155mm_Mo_shells
	{
		count=26;
	};
	class rhs_mag_WP_2a33: rhs_mag_HE_2a33
	{
		count=5;
		ammo="rhs_ammo_152_WP";
	};
	class rhs_mag_WP_2a33_26: rhs_mag_WP_2a33
	{
		count=26;
	};
	class rhs_mag_Atomic_2a33: rhs_mag_HE_2a33
	{
		ammo="rhs_ammo_3WB3";
	};
	class rhs_mag_Atomic_2a33_26: rhs_mag_Atomic_2a33
	{
		count=26;
	};
	class rhs_mag_LASER_2a33: rhs_mag_HE_2a33
	{
		count=5;
		ammo="rhs_ammo_3WOF93";
	};
	class rhs_mag_LASER_2a33_26: rhs_mag_LASER_2a33
	{
		count=26;
	};
	class rhs_mag_SMOKE_2a33: rhs_mag_HE_2a33
	{
		count=5;
		ammo="rhs_ammo_53WD546U";
	};
	class rhs_mag_SMOKE_2a33_26: rhs_mag_SMOKE_2a33
	{
		count=26;
	};
	class rhs_mag_ILLUM_2a33: rhs_mag_HE_2a33
	{
		count=5;
		ammo="rhs_ammo_3WS23";
	};
	class rhs_mag_ILLUM_2a33_26: rhs_mag_ILLUM_2a33
	{
		count=26;
	};
	class rhs_mag_of462: 32Rnd_155mm_Mo_shells
	{
		ammo="rhs_ammo_of462";
		count=1;
		nameSound="heat";
		rhs_magazineIndex=3;
		muzzleImpulseFactor=0.1;
	};
	class rhs_mag_of462_10: rhs_mag_of462
	{
		count=10;
	};
	class rhs_mag_3of56: rhs_mag_of462
	{
		ammo="rhs_ammo_3of56";
	};
	class rhs_mag_3of56_10: rhs_mag_3of56
	{
		count=10;
	};
	class rhs_mag_3of56_5: rhs_mag_3of56
	{
		count=5;
	};
	class rhs_mag_d462: rhs_mag_of462
	{
		ammo="rhs_ammo_d462";
		rhs_magazineIndex=-1;
	};
	class rhs_mag_d462_2: rhs_mag_d462
	{
		count=2;
	};
	class rhs_mag_s463: rhs_mag_of462
	{
		ammo="rhs_ammo_s463";
		rhs_magazineIndex=-1;
	};
	class rhs_mag_s463_2: rhs_mag_s463
	{
		count=2;
	};
	class rhs_mag_3of69m: rhs_mag_of462
	{
		ammo="rhs_ammo_3of69m";
		rhs_magazineIndex=-1;
	};
	class rhs_mag_3of69m_2: rhs_mag_3of69m
	{
		count=2;
	};
	class rhs_mag_3vo18_10: 32Rnd_155mm_Mo_shells
	{
		ammo="rhs_ammo_3vo18";
		count=10;
		initSpeed=211;
	};
	class rhs_mag_3vs25m_10: rhs_mag_3vo18_10
	{
		ammo="rhs_ammo_3vs25m";
	};
	class rhs_mag_53_va_832a_10: rhs_mag_3vo18_10
	{
		ammo="rhs_ammo_3vs25m";
	};
	class rhs_mag_d832du_10: rhs_mag_3vo18_10
	{
		ammo="rhs_ammo_d832du";
	};
	class rhs_mag_9m14m: VehicleMagazine
	{
		ammo="rhs_ammo_9m14m";
		count=1;
		initSpeed=80;
		maxleadspeed=30;
		nameSound="missiles";
	};
	class rhs_mag_9m14m_3: rhs_mag_9m14m
	{
		count=3;
	};
	class rhs_mag_9m14m_4: rhs_mag_9m14m
	{
		count=4;
	};
	class rhs_mag_MCLOS_Training: rhs_mag_9m14m
	{
		displayname="MCLOS training round";
		count=999;
		ammo="rhs_ammo_mclos_training";
	};
	class rhs_mag_9m14: rhs_mag_9m14m
	{
		ammo="rhs_ammo_9m14";
	};
	class rhs_mag_9m17: VehicleMagazine
	{
		ammo="rhs_ammo_9m17";
		count=1;
		initSpeed=80;
		maxleadspeed=40;
		nameSound="missiles";
	};
	class rhs_mag_9m17p: rhs_mag_9m17
	{
		ammo="rhs_ammo_9m17p";
	};
	class rhs_mag_9M17_Mi24_2x: rhs_mag_9m17
	{
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m17_Mi24"
		};
		pylonWeapon="rhs_weap_2K8_launcher";
	};
	class rhs_mag_9M17p_Mi24_2x: rhs_mag_9M17_Mi24_2x
	{
		ammo="rhs_ammo_9m17p";
	};
	class rhs_mag_9m112_6: VehicleMagazine
	{
		reloadTime=30;
		magazineReloadTime=30;
		ammo="rhs_ammo_9m112";
		count=6;
		initSpeed=125;
		maxleadspeed=50;
		nameSound="missiles";
		rhs_magazineIndex=4;
	};
	class rhs_mag_9m112m_6: rhs_mag_9m112_6
	{
		ammo="rhs_ammo_9m112m";
	};
	class rhs_mag_9m112m_4: rhs_mag_9m112m_6
	{
		count=4;
	};
	class rhs_mag_9m112m2_6: rhs_mag_9m112_6
	{
		ammo="rhs_ammo_9m112m2";
	};
	class rhs_mag_9m124_6: rhs_mag_9m112_6
	{
		ammo="rhs_ammo_9m124";
	};
	class rhs_mag_9m128_6: rhs_mag_9m112_6
	{
		canLock=0;
		ammo="rhs_ammo_9m128";
		count=6;
	};
	class rhs_mag_9m113: VehicleMagazine
	{
		ammo="rhs_ammo_9m113";
		count=1;
		initSpeed=80;
		maxleadspeed=80;
		nameSound="missiles";
		rhs_magazineIndex=4;
	};
	class rhs_mag_9m113_3: rhs_mag_9m113
	{
		count=3;
	};
	class rhs_mag_9m113_4: rhs_mag_9m113
	{
		count=4;
	};
	class rhs_mag_9m113_5: rhs_mag_9m113
	{
		count=5;
	};
	class rhs_mag_9m113M: rhs_mag_9m113
	{
		ammo="rhs_ammo_9m113M";
	};
	class rhs_mag_9m113M_3: rhs_mag_9m113M
	{
		count=3;
	};
	class rhs_mag_9m113M_4: rhs_mag_9m113M
	{
		count=4;
	};
	class rhs_mag_9m113M_5: rhs_mag_9m113M
	{
		count=5;
	};
	class rhs_mag_9m111: rhs_mag_9m113
	{
		ammo="rhs_ammo_9m111";
	};
	class rhs_mag_9m111_3: rhs_mag_9m111
	{
		count=4;
	};
	class rhs_mag_9m111_4: rhs_mag_9m111
	{
		count=4;
	};
	class rhs_mag_9m111_5: rhs_mag_9m111
	{
		count=5;
	};
	class rhs_mag_9m111M: rhs_mag_9m111
	{
		ammo="rhs_ammo_9m111M";
	};
	class rhs_mag_9m111M_3: rhs_mag_9m111M
	{
		count=3;
	};
	class rhs_mag_9m111M_4: rhs_mag_9m111M
	{
		count=4;
	};
	class rhs_mag_9m111M_5: rhs_mag_9m111M
	{
		count=5;
	};
	class rhs_mag_9m117_3: VehicleMagazine
	{
		ammo="rhs_ammo_9m117";
		reloadTime=12;
		magazineReloadTime=12;
		count=3;
		initSpeed=80;
		maxleadspeed=70;
		nameSound="missiles";
		rhs_magazineIndex=2;
	};
	class rhs_mag_9m117_8: rhs_mag_9m117_3
	{
		count=8;
	};
	class rhs_mag_9m117m_3: rhs_mag_9m117_3
	{
		ammo="rhs_ammo_9m117m";
		count=3;
	};
	class rhs_mag_9m117m_8: rhs_mag_9m117m_3
	{
		count=8;
	};
	class rhs_mag_9m117m1_3: rhs_mag_9m117_3
	{
		ammo="rhs_ammo_9m117m";
		count=3;
	};
	class rhs_mag_9m117m1_8: rhs_mag_9m117m1_3
	{
		count=8;
	};
	class rhs_mag_9m118_3: rhs_mag_9m117_3
	{
		canlock=1;
		ammo="rhs_ammo_9m118";
		count=3;
		initSpeed=100;
	};
	class rhs_mag_9m119_6: rhs_mag_9m112_6
	{
		canLock=0;
		ammo="rhs_ammo_9m119";
		count=6;
	};
	class rhs_mag_9m119_4: rhs_mag_9m119_6
	{
		count=4;
	};
	class rhs_mag_9m119rx_6: rhs_mag_9m119_6
	{
		canLock=0;
		reloadTime=8;
		magazineReloadTime=8;
		ammo="rhs_ammo_9m119";
		count=6;
		initSpeed=120;
		maxleadspeed=50;
		nameSound="missiles";
	};
	class rhs_mag_9m119m_6: rhs_mag_9m112_6
	{
		canLock=0;
		ammo="rhs_ammo_9m119m";
		count=6;
	};
	class rhs_mag_9m119m_4: rhs_mag_9m119m_6
	{
		count=4;
	};
	class rhs_mag_9m119f_6: rhs_mag_9m112_6
	{
		ammo="rhs_ammo_9m119f";
	};
	class rhs_mag_9m133_2: VehicleMagazine
	{
		canLock=1;
		reloadTime=8;
		magazineReloadTime=8;
		ammo="rhs_ammo_9m133";
		count=2;
		initSpeed=100;
		maxleadspeed=60;
		nameSound="missiles";
		rhs_magazineIndex=4;
	};
	class rhs_mag_9m133: rhs_mag_9m133_2
	{
		count=1;
		canLock=0;
	};
	class rhs_mag_9m133f_2: rhs_mag_9m133_2
	{
		ammo="rhs_ammo_9m133f";
	};
	class rhs_mag_9m133f: rhs_mag_9m133f_2
	{
		count=1;
		canLock=0;
	};
	class rhs_mag_9m1331_2: rhs_mag_9m133_2
	{
		ammo="rhs_ammo_9m1331";
	};
	class rhs_mag_9m1331: rhs_mag_9m1331_2
	{
		count=1;
		canLock=0;
	};
	class rhs_mag_9m133m2_2: rhs_mag_9m133_2
	{
		ammo="rhs_ammo_9m133m2";
	};
	class rhs_mag_9m133m2: rhs_mag_9m133m2_2
	{
		count=1;
		canLock=0;
	};
	class rhs_mag_3m7_12: VehicleMagazine
	{
		canLock=1;
		reloadTime=10;
		magazineReloadTime=8.5;
		ammo="rhs_ammo_3m7";
		count=12;
		initSpeed=100;
		maxleadspeed=40;
		nameSound="missiles";
	};
	class Titan_AA;
	class rhs_mag_2Rnd_Igla: Titan_AA
	{
		displayname="9K32";
		descriptionshort="Range: 800-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
		ammo="rhs_ammo_9k38";
		count=2;
		initspeed=40;
		maxleadspeed=320;
		nameSound="missiles";
	};
	class rhs_mag_9M115: VehicleMagazine
	{
		canLock=0;
		reloadTime=8;
		magazineReloadTime=8;
		ammo="rhs_ammo_9m115";
		count=1;
		initSpeed=80;
		maxleadspeed=60;
		nameSound="missiles";
		rhs_magazineIndex=4;
	};
	class rhs_mag_9M131: rhs_mag_9M115
	{
		ammo="rhs_ammo_9m131";
	};
	class rhs_mag_9M131M: rhs_mag_9M115
	{
		ammo="rhs_ammo_9m131m";
	};
	class rhs_mag_9M131F: rhs_mag_9M115
	{
		ammo="rhs_ammo_9m131f";
	};
	class rhs_mag_9M114: VehicleMagazine
	{
		count=1;
		initspeed=55;
		namesound="missiles";
		displayname="9M114";
		displaynameshort="9M114";
		maxleadspeed=120;
		ammo="rhs_ammo_9M114";
		mass=42.5;
		weight=42.5;
		pylonWeapon="rhs_weap_9K114_launcher";
		hardpoints[]=
		{
			""
		};
	};
	class rhs_mag_9M114_Mi24_2x: rhs_mag_9M114
	{
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m114_Mi24"
		};
	};
	class rhs_mag_9M114M_Mi24_2x: rhs_mag_9M114_Mi24_2x
	{
		displayname="9M114M";
		displaynameshort="9M114M";
		ammo="rhs_ammo_9m114m";
	};
	class rhs_mag_9M114F_Mi24_2x: rhs_mag_9M114_Mi24_2x
	{
		displayname="9M114F";
		displaynameshort="9M114F";
		ammo="rhs_ammo_9m114f";
		pylonWeapon="rhs_weap_9K114f_launcher";
	};
	class rhs_mag_9M114M1_Mi24_2x: rhs_mag_9M114_Mi24_2x
	{
		displayname="9M114M1";
		displaynameshort="9M114M1";
		ammo="rhs_ammo_9m114m1";
	};
	class rhs_mag_9M114M2_Mi24_2x: rhs_mag_9M114_Mi24_2x
	{
		displayname="9M114M2";
		displaynameshort="9M114M2";
		ammo="rhs_ammo_9m114m2";
	};
	class rhs_mag_9m120: rhs_mag_9M114
	{
		ammo="rhs_ammo_9m120";
		displayname="9M120";
		displaynameshort="9M120";
		weight=42.5;
		pylonWeapon="rhs_weap_9m120_launcher";
	};
	class rhs_mag_9M120_Mi24_2x: rhs_mag_9m120
	{
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi24"
		};
	};
	class rhs_mag_9M120_Mi28_8x: rhs_mag_9m120
	{
		count=8;
		mass=340;
		weight=340;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi28"
		};
	};
	class rhs_mag_9M120_8: rhs_mag_9m120
	{
		count=8;
		weight=340;
	};
	class rhs_mag_9M120_16: rhs_mag_9m120
	{
		count=16;
		weight=680;
	};
	class rhs_mag_9m120m: rhs_mag_9M114
	{
		ammo="rhs_ammo_9m120m";
		displayname="9M120M";
		displaynameshort="9M120M";
		weight=42.5;
		pylonWeapon="rhs_weap_9m120_launcher";
	};
	class rhs_mag_9M120M_Mi24_2x: rhs_mag_9m120m
	{
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi24"
		};
	};
	class rhs_mag_9M120M_Mi28_8x: rhs_mag_9m120m
	{
		count=8;
		mass=340;
		weight=340;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi28"
		};
	};
	class rhs_mag_9M120m_8: rhs_mag_9m120m
	{
		count=8;
		weight="42.5*8";
	};
	class rhs_mag_9M120m_16: rhs_mag_9m120m
	{
		count=16;
		weight=680;
	};
	class rhs_mag_9m120f: rhs_mag_9M114
	{
		ammo="rhs_ammo_9m120f";
		displayname="9M120F HE";
		displaynameshort="9M120F HE";
		weight=42.5;
		pylonWeapon="rhs_weap_9m120f_launcher";
	};
	class rhs_mag_9M120F_Mi24_2x: rhs_mag_9m120f
	{
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi24"
		};
	};
	class rhs_mag_9M120f_Mi28_8x: rhs_mag_9m120f
	{
		count=8;
		mass=340;
		weight=340;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi28"
		};
	};
	class rhs_mag_9M120f_8: rhs_mag_9m120f
	{
		count=8;
		weight=340;
	};
	class rhs_mag_9M120f_16: rhs_mag_9m120f
	{
		count=16;
		weight=680;
	};
	class rhs_mag_9m120o: rhs_mag_9M114
	{
		ammo="rhs_ammo_9m120o";
		displayname="9M120O Proximity";
		displaynameshort="9M120O Proximity";
		weight=42.5;
		pylonWeapon="rhs_weap_9m120o_launcher";
	};
	class rhs_mag_9M120O_Mi24_2x: rhs_mag_9m120o
	{
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi24"
		};
	};
	class rhs_mag_9M120O_Mi28_8x: rhs_mag_9m120o
	{
		count=8;
		mass=340;
		weight=340;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi28"
		};
	};
	class rhs_mag_mi24_empty: VehicleMagazine
	{
		ammo="rhs_ammo_ptb1500";
		count=1;
		mass=8.5;
		weight=8.5;
		nameSound="";
		pylonweapon="rhs_weap_DummyLauncher";
		hardpoints[]=
		{
			"RHS_HP_Empty_Mi24"
		};
	};
	class rhs_proxy_ags30_mag: VehicleMagazine
	{
		ammo="rhs_proxy_ags30_mag";
		count=1;
		weight=7;
	};
	class rhs_proxy_ags30_12_mag: rhs_proxy_ags30_mag
	{
		count=12;
		weight=84;
	};
	class rhs_proxy_pkm_18_mag: VehicleMagazine
	{
		ammo="rhs_proxy_pkm_mag";
		count=18;
		weight=7;
	};
	class rhs_mag_9m112: rhs_mag_9m112_6
	{
		count=40;
	};
	class rhs_mag_9m112m: rhs_mag_9m112m_6
	{
		count=40;
	};
	class rhs_mag_9m112m2: rhs_mag_9m112m2_6
	{
		count=40;
	};
	class rhs_mag_9m124: rhs_mag_9m124_6
	{
		count=40;
	};
	class rhs_mag_9m128: rhs_mag_9m128_6
	{
		count=40;
	};
	class rhs_mag_9m119: rhs_mag_9m119_4
	{
		count=40;
	};
	class rhs_mag_9m119rx: rhs_mag_9m119rx_6
	{
		count=40;
	};
	class rhs_mag_9m119m: rhs_mag_9m119m_4
	{
		count=40;
	};
	class rhs_mag_9m119f: rhs_mag_9m119f_6
	{
		count=40;
	};
	class rhs_mag_40Rnd_122mm_rockets: VehicleMagazine
	{
		count=40;
		initspeed=690;
		ammo="rhs_ammo_m21OF_HE";
		displayname="$STR_RHS_122MMGRAD_NAME";
		nameSound="rockets";
		muzzleImpulseFactor[]={0.5,2};
	};
	class rhs_mag_bm21_base: VehicleMagazine
	{
		pylonWeapon="rhs_weap_bm21";
		nameSound="rockets";
		muzzleImpulseFactor[]={0.5,2};
		count=1;
		initspeed=690;
	};
	class rhs_mag_m21of_1: rhs_mag_bm21_base
	{
		ammo="rhs_ammo_m21OF_HE";
		displayname="M-21OF";
		displaynameShort="HE";
		hardpoints[]=
		{
			"RHS_HP_BM21"
		};
	};
	class rhs_mag_9m28f_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m28f";
		displayname="9M28F";
		displaynameShort="HE FRAG";
		pylonWeapon="rhs_weap_bm21_9m28f";
	};
	class rhs_mag_9m28k_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m28k";
		displayname="9M28K";
		displaynameShort="Cluster AT Mine";
		pylonWeapon="rhs_weap_bm21_9m28k";
	};
	class rhs_mag_9m218_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m218";
		displayname="9M218";
		displaynameShort="Cluster HEAT";
		pylonWeapon="rhs_weap_bm21_9m218";
	};
	class rhs_mag_9m521_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m521";
		displayname="9M521";
		displaynameShort="HE";
		pylonWeapon="rhs_weap_bm21_9m521";
	};
	class rhs_mag_9m522_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m522";
		displayname="9M522";
		displaynameShort="HE FRAG";
		pylonWeapon="rhs_weap_bm21_9m522";
	};
	class rhs_mag_pg15v_24: VehicleMagazine
	{
		ammo="rhs_ammo_pg15v";
		count=24;
		initSpeed=690;
	};
	class rhs_mag_pg15v_20: rhs_mag_pg15v_24
	{
		count=20;
	};
	class rhs_mag_pg15v_12: rhs_mag_pg15v_24
	{
		count=12;
	};
	class rhs_mag_og15v_16: VehicleMagazine
	{
		ammo="rhs_ammo_og15v";
		count=16;
		initSpeed=290;
	};
	class rhs_mag_og15v_20: rhs_mag_og15v_16
	{
		count=20;
	};
	class rhs_mag_og15v_8: rhs_mag_og15v_16
	{
		count=8;
	};
	class rhs_mag_pg9v: rhs_mag_pg15v_24
	{
		ammo="rhs_ammo_pg9v";
		count=1;
		initSpeed=435;
	};
	class rhs_mag_pg9n: rhs_mag_pg9v
	{
		ammo="rhs_ammo_pg9n";
	};
	class rhs_mag_pg9vnt: rhs_mag_pg9v
	{
		ammo="rhs_ammo_pg9vnt";
		initSpeed=400;
	};
	class rhs_mag_og9v: rhs_mag_og15v_16
	{
		ammo="rhs_ammo_og9v";
		count=1;
		initSpeed=316;
	};
	class rhs_mag_og9vm: rhs_mag_og9v
	{
		ammo="rhs_ammo_og9vm";
	};
	class 450Rnd_127x108_Ball;
	class rhs_mag_3uor6_230: 450Rnd_127x108_Ball
	{
		nameSound="heat";
		ammo="rhs_ammo_3uor6";
		count=230;
		initSpeed=1120;
		tracersEvery=4;
		weight="0.385*230";
		rhs_magazineIndex=5;
	};
	class rhs_mag_3uor6_125: rhs_mag_3uor6_230
	{
		count=125;
		weight=48.125;
	};
	class rhs_mag_3uor6_150: rhs_mag_3uor6_230
	{
		count=150;
		weight=57.75;
	};
	class rhs_mag_3uor6_180: rhs_mag_3uor6_230
	{
		count=180;
		weight=69.300003;
	};
	class rhs_mag_3uor6_200: rhs_mag_3uor6_230
	{
		count=200;
		weight=77;
	};
	class rhs_mag_3uor6_237: rhs_mag_3uor6_230
	{
		count=237;
		weight=91.245003;
	};
	class rhs_mag_3uor6_250: rhs_mag_3uor6_230
	{
		count=250;
		weight=96.25;
	};
	class rhs_mag_3uor6_305: rhs_mag_3uor6_230
	{
		count=305;
		weight=117.425;
	};
	class rhs_mag_3uor6_340: rhs_mag_3uor6_230
	{
		count=340;
		weight=130.89999;
	};
	class rhs_mag_3uof8_230: rhs_mag_3uor6_230
	{
		ammo="rhs_ammo_3uof8";
		initSpeed=960;
		weight=89.470001;
	};
	class rhs_mag_3uof8_125: rhs_mag_3uof8_230
	{
		count=125;
		weight=48.625;
	};
	class rhs_mag_3uof8_150: rhs_mag_3uof8_230
	{
		count=150;
		weight=58.349998;
	};
	class rhs_mag_3uof8_180: rhs_mag_3uof8_230
	{
		count=180;
		weight=70.019997;
	};
	class rhs_mag_3uof8_200: rhs_mag_3uof8_230
	{
		count=200;
		weight=77.800003;
	};
	class rhs_mag_3uof8_237: rhs_mag_3uof8_230
	{
		count=237;
		weight=92.193001;
	};
	class rhs_mag_3uof8_250: rhs_mag_3uof8_230
	{
		count=250;
		weight=97.25;
	};
	class rhs_mag_3uof8_305: rhs_mag_3uof8_230
	{
		count=305;
		weight=118.645;
	};
	class rhs_mag_3uof8_340: rhs_mag_3uof8_230
	{
		count=340;
		weight=132.25999;
	};
	class rhs_mag_3ubr6_230: rhs_mag_3uor6_230
	{
		ammo="rhs_ammo_3ubr6";
		nameSound="sabot";
		weight=92;
		tracersEvery=3;
		rhs_magazineIndex=6;
	};
	class rhs_mag_3ubr6_100: rhs_mag_3ubr6_230
	{
		count=100;
		weight=40;
	};
	class rhs_mag_3ubr6_120: rhs_mag_3ubr6_230
	{
		count=120;
		weight=48;
	};
	class rhs_mag_3ubr6_125: rhs_mag_3ubr6_230
	{
		count=125;
		weight=50;
	};
	class rhs_mag_3ubr6_150: rhs_mag_3ubr6_230
	{
		count=150;
		weight=60;
	};
	class rhs_mag_3ubr6_160: rhs_mag_3ubr6_230
	{
		count=160;
		weight=64;
	};
	class rhs_mag_3ubr6_195: rhs_mag_3ubr6_230
	{
		count=195;
		weight=78;
	};
	class rhs_mag_3ubr6_227: rhs_mag_3ubr6_230
	{
		count=227;
		weight=90.800003;
	};
	class rhs_mag_3ubr6_250: rhs_mag_3ubr6_230
	{
		count=250;
		weight=100;
	};
	class rhs_mag_3ubr8_230: rhs_mag_3ubr6_230
	{
		ammo="rhs_ammo_3ubr8";
		weight=69;
	};
	class rhs_mag_3ubr8_100: rhs_mag_3ubr8_230
	{
		count=100;
		weight=40;
	};
	class rhs_mag_3ubr8_120: rhs_mag_3ubr8_230
	{
		count=120;
		weight=48;
	};
	class rhs_mag_3ubr8_125: rhs_mag_3ubr8_230
	{
		count=125;
		weight=37.5;
	};
	class rhs_mag_3ubr8_150: rhs_mag_3ubr8_230
	{
		count=150;
		weight=45;
	};
	class rhs_mag_3ubr8_160: rhs_mag_3ubr8_230
	{
		count=160;
		weight=48;
	};
	class rhs_mag_3ubr8_195: rhs_mag_3ubr8_230
	{
		count=195;
		weight=58.5;
	};
	class rhs_mag_3ubr8_227: rhs_mag_3ubr8_230
	{
		count=227;
		weight=68.099998;
	};
	class rhs_mag_3ubr8_250: rhs_mag_3ubr8_230
	{
		count=250;
		weight=75;
	};
	class rhs_mag_3ubr11_230: rhs_mag_3ubr6_230
	{
		ammo="rhs_ammo_3ubr11";
		weight=69;
	};
	class rhs_mag_3ubr11_100: rhs_mag_3ubr11_230
	{
		count=100;
		weight=40;
	};
	class rhs_mag_3ubr11_120: rhs_mag_3ubr11_230
	{
		count=120;
		weight=48;
	};
	class rhs_mag_3ubr11_125: rhs_mag_3ubr11_230
	{
		count=125;
		weight=37.5;
	};
	class rhs_mag_3ubr11_150: rhs_mag_3ubr11_230
	{
		count=150;
		weight=45;
	};
	class rhs_mag_3ubr11_160: rhs_mag_3ubr11_230
	{
		count=160;
		weight=48;
	};
	class rhs_mag_3ubr11_195: rhs_mag_3ubr11_230
	{
		count=195;
		weight=58.5;
	};
	class rhs_mag_3ubr11_227: rhs_mag_3ubr11_230
	{
		count=227;
		weight=68.099998;
	};
	class rhs_mag_3ubr11_250: rhs_mag_3ubr11_230
	{
		count=250;
		weight=75;
	};
	class rhs_mag_AZP23_250: VehicleMagazine
	{
		ammo="RHS_ammo_23mm_AA";
		count=250;
		initSpeed=980;
		nameSound="cannon";
		tracersEvery=1;
	};
	class rhs_mag_AZP23_250_mixed: rhs_mag_AZP23_250
	{
		ammo="RHS_ammo_23mm_AA_mixed";
	};
	class rhs_mag_AZP23_250_ap: rhs_mag_AZP23_250
	{
		ammo="rhs_ammo_bzt_23x115mm";
	};
	class rhs_mag_AZP23_2000: rhs_mag_AZP23_250
	{
		count=2000;
	};
	class rhs_mag_AZP23_2000_mixed: rhs_mag_AZP23_2000
	{
		ammo="RHS_ammo_23mm_AA_mixed";
	};
	class rhs_mag_AZP23_100: rhs_mag_AZP23_250
	{
		count=100;
	};
	class rhs_mag_AZP23_100_ap: rhs_mag_AZP23_250_ap
	{
		count=100;
	};
	class rhs_mag_AM23_500: rhs_mag_AZP23_250
	{
		initSpeed=720;
		count=500;
	};
	class rhs_mag_gsh30_ofzt_750: rhs_mag_3ubr6_230
	{
		ammo="rhs_ammo_3uof8";
		count=750;
		tracersEvery=1;
		initSpeed=817;
		weight="0.390*750";
	};
	class rhs_mag_gsh30_bt_750: rhs_mag_3uor6_230
	{
		ammo="rhs_ammo_gsh30_bt";
		count=750;
		weight="0.390*750";
	};
	class rhs_mag_gsh30_ofzt_250: rhs_mag_gsh30_ofzt_750
	{
		count=250;
		weight="0.390*250";
	};
	class rhs_mag_gsh30_bt_250: rhs_mag_gsh30_bt_750
	{
		count=250;
		weight="0.390*250";
	};
	class rhs_mag_gsh30_bt_150: rhs_mag_gsh30_bt_250
	{
		count=150;
		weight="0.390*150";
	};
	class rhs_mag_gsh30_mixed_150: rhs_mag_gsh30_bt_150
	{
		ammo="rhs_ammo_gsh30_mixed";
	};
	class rhs_mag_762x54mm_100: VehicleMagazine
	{
		count=100;
		ammo="rhs_B_762x54_Ball";
		initSpeed=855;
		tracersEvery=4;
		nameSound="mgun";
		rhs_magazineIndex=7;
	};
	class rhs_mag_762x54mm_250: rhs_mag_762x54mm_100
	{
		count=250;
	};
	class rhs_mag_762x54mm_500: rhs_mag_762x54mm_100
	{
		count=500;
	};
	class rhs_mag_762x54mm_1000: rhs_mag_762x54mm_100
	{
		count=1000;
	};
	class rhs_mag_762x54mm_2000: rhs_mag_762x54mm_100
	{
		count=2000;
	};
	class rhs_mag_127x108mm_50: VehicleMagazine
	{
		count=50;
		ammo="rhs_ammo_127x108mm";
		initSpeed=817;
		tracersEvery=4;
		nameSound="mgun";
		weight="0.13*50";
	};
	class rhs_mag_127x108mm_100: rhs_mag_127x108mm_50
	{
		count=100;
		weight=13;
	};
	class rhs_mag_127x108mm_150: rhs_mag_127x108mm_50
	{
		count=150;
		weight=19.5;
	};
	class rhs_mag_127x108mm_300: rhs_mag_127x108mm_50
	{
		count=300;
		weight=39;
	};
	class rhs_mag_127x108mm_1470: rhs_mag_127x108mm_50
	{
		ammo="rhs_ammo_127x108mm_x5";
		tracersEvery=1;
		count=1470;
		weight=191.10001;
	};
	class rhs_mag_127x108mm_1slt_1470: rhs_mag_127x108mm_1470
	{
		ammo="rhs_ammo_127x108mm_1SLT";
		tracersEvery=1;
		weight=208.74001;
		initSpeed=735;
	};
	class rhs_mag_145x115mm_50: VehicleMagazine
	{
		count=50;
		ammo="rhs_ammo_145x115mm";
		initSpeed=988;
		tracersEvery=4;
		nameSound="mgun";
	};
	class RHS_mag_VOG30_30: VehicleMagazine
	{
		count=30;
		ammo="rhs_ammo_VOG30";
		initSpeed=185;
		nameSound="handgrenade";
	};
	class RHS_mag_GPD30_30: RHS_mag_VOG30_30
	{
		ammo="rhs_ammo_GPD30";
	};
	class RHS_mag_VOG17m_30: RHS_mag_VOG30_30
	{
		ammo="rhs_ammo_VOG17m";
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class SmokeLauncher;
	class MGun;
	class rhs_weap_MASTERSAFE: Default
	{
		magazines[]={};
	};
	class rhs_weap_MASTERSAFE_Holdster15: rhs_weap_MASTERSAFE
	{
		holdsterAnimValue=1.502;
	};
	class rhs_weap_902a: SmokeLauncher
	{
		magazines[]=
		{
			"rhs_mag_902a",
			"rhs_mag_3d17_4",
			"rhs_mag_3d17_6",
			"rhs_mag_3d17_12",
			"rhs_mag_3d17"
		};
		reloadTime=0.098999999;
		autoFire=1;
	};
	class rhs_weap_902b: rhs_weap_902a
	{
		class Double: rhs_weap_902a
		{
			reloadTime=0.098999999;
			burst=2;
			multiplier=1;
			autoFire=1;
		};
		class Volley: Double
		{
			burst=6;
			autoFire=1;
		};
		class AIDouble: Double
		{
		};
		class AIVolley: Volley
		{
		};
	};
	class rhs_weap_smokegen: Default
	{
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		reloadTime=8;
		simulation="cmlauncher";
		class Single: Mode_SemiAuto
		{
			cursor="EmptyCursor";
			autoFire=1;
			burst=1;
			reloadTime=8;
		};
		class Continuos: Single
		{
			burst=999;
			reloadTime=8;
		};
	};
	class rhs_weap_dazzler: rhs_weap_smokegen
	{
		magazines[]=
		{
			"rhs_mag_dazzler"
		};
		reloadTime=20;
	};
	class CMFlareLauncher: SmokeLauncher
	{
		class Single;
		class Burst;
	};
	class rhs_weap_CMFlareLauncher: CMFlareLauncher
	{
		magazines[]=
		{
			"rhs_128Rnd_CMFlare_Chaff_Magazine",
			"rhs_60Rnd_CMFlare_Magazine",
			"60Rnd_CMFlareMagazine",
			"120Rnd_CMFlareMagazine",
			"240Rnd_CMFlareMagazine",
			"60Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"192Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"300Rnd_CMFlare_Chaff_Magazine"
		};
		class Timed: Single
		{
			burst=8;
			reloadTime=1.3;
		};
		class AITimed: Timed
		{
		};
		class LongTimed: Single
		{
			burst=8;
			reloadTime=4;
		};
	};
	class rhs_weap_CMDispenser_ASO2: rhs_weap_CMFlareLauncher
	{
		magazines[]=
		{
			"rhs_ASO2_CMFlare_Magazine",
			"rhs_ASO2_CMFlare_Magazine_x2",
			"rhs_ASO2_CMFlare_Magazine_x4",
			"rhs_ASO2_CMFlare_Magazine_x6",
			"rhs_ASO2_CMFlare_Chaff_Magazine",
			"rhs_ASO2_CMFlare_Chaff_Magazine_x2",
			"rhs_ASO2_CMFlare_Chaff_Magazine_x4",
			"rhs_ASO2_CMFlare_Chaff_Magazine_x6"
		};
	};
	class rhs_weap_CMDispenser_BVP3026: rhs_weap_CMFlareLauncher
	{
		magazines[]=
		{
			"rhs_BVP3026_CMFlare_Magazine",
			"rhs_BVP3026_CMFlare_Magazine_x2",
			"rhs_BVP3026_CMFlare_Chaff_Magazine",
			"rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
		};
	};
	class rhs_weap_CMDispenser_UV26: rhs_weap_CMFlareLauncher
	{
		magazines[]=
		{
			"rhs_UV26_CMFlare_Magazine",
			"rhs_UV26_CMFlare_Magazine_x2",
			"rhs_UV26_CMFlare_Magazine_x4",
			"rhs_UV26_CMFlare_Chaff_Magazine",
			"rhs_UV26_CMFlare_Chaff_Magazine_x2",
			"rhs_UV26_CMFlare_Chaff_Magazine_x4"
		};
	};
	class rhs_weap_DIRCM_Vitebsk: MGun
	{
		magazines[]=
		{
			"RHS_mag_DIRCM_Vitebsk"
		};
		magazineReloadTime=60;
		simulation="cmlauncher";
		class Burst1: Mode_Burst
		{
			reloadTime=0.5;
			burst=120;
			multiplier=1;
			soundContinuos=0;
		};
	};
	class rhs_weap_DIRCM_Lipa: rhs_weap_DIRCM_Vitebsk
	{
		magazines[]=
		{
			"rhs_mag_DIRCM_Lipa"
		};
		class Burst1: Mode_Burst
		{
			reloadTime=1;
			burst=80;
			multiplier=1;
			soundContinuos=0;
		};
	};
	class rhs_weap_afganit_base: MGun
	{
		autReload=0;
		class Single: Mode_SemiAuto
		{
			cursor="EmptyCursor";
			autoFire=1;
			burst=1;
			reloadTime=8;
		};
		class EventHandlers
		{
			class RHS_CM_EH
			{
				fired="_this call rhs_fnc_aps_afganit_fired";
			};
		};
	};
	class rhs_weap_afganit_1: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_2: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_3: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_4: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_5: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_6: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_7: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_8: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_9: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_10: rhs_weap_afganit_base
	{
		magazines[]=
		{
			"rhs_mag_aps_afganit"
		};
	};
	class rhs_weap_afganit_smoke: rhs_weap_902a
	{
		magazines[]=
		{
			"rhs_mag_afganit_smoke_12"
		};
		class Double: rhs_weap_902a
		{
			reloadTime=0.098999999;
			burst=2;
			multiplier=1;
			autoFire=1;
		};
		class Volley: Double
		{
			burst=6;
			autoFire=1;
		};
		class AIDouble: Double
		{
		};
		class AIVolley: Volley
		{
		};
	};
	class PKT: MGun
	{
		reloadTime=0.075000003;
		autoFire=1;
		dispersion=0.003;
		magazineReloadTime=7;
		canLock=0;
	};
	class rhs_weap_pkt: PKT
	{
		showAimCursorInternal=1;
		magazines[]=
		{
			"rhs_mag_762x54mm_100",
			"rhs_mag_762x54mm_250",
			"rhs_mag_762x54mm_500",
			"rhs_mag_762x54mm_1000",
			"rhs_mag_762x54mm_2000"
		};
		initSpeed=0;
		class manual: MGun
		{
			autoFire=1;
			reloadTime=0.075000003;
			dispersion=0.00125;
			burst=1;
			aiBurstTerminable=1;
		};
		class far: close
		{
			burst=6;
		};
	};
	class rhs_weap_pktm: rhs_weap_pkt
	{
		class manual: manual
		{
		};
	};
	class rhs_weap_pkt_v1: rhs_weap_pkt
	{
	};
	class rhs_weap_pkt_v2: rhs_weap_pkt
	{
	};
	class rhs_weap_pkt_v3: rhs_weap_pkt
	{
	};
	class rhs_weap_pkt_bmd_coax: rhs_weap_pkt
	{
		class gunParticles
		{
			class effect1
			{
				effectname="MachineGunCloud";
				positionname="Usti hlavne2";
				directionname="Konec hlavne2";
			};
		};
	};
	class rhs_weap_pkt_2s3: rhs_weap_pkt
	{
		class gunParticles
		{
			class effect1
			{
				effectname="MachineGunCloud";
				positionname="Usti hlavne3";
				directionname="Konec hlavne3";
			};
		};
	};
	class rhs_weap_pkt_bmd_bow1: rhs_weap_pkt
	{
		class gunParticles
		{
			class effect1
			{
				effectname="MachineGunCloud";
				positionname="muzzle2";
				directionname="end2";
			};
		};
	};
	class rhs_weap_pkt_bmd_bow2: rhs_weap_pkt
	{
		class gunParticles
		{
			class effect1
			{
				effectname="MachineGunCloud";
				positionname="muzzle3";
				directionname="end3";
			};
		};
	};
	class rhs_weap_pkt_btr: rhs_weap_pkt
	{
		class gunParticles
		{
			class effect1
			{
				effectname="MachineGunCloud";
				positionname="kulas";
				directionname="kulas end";
			};
		};
	};
	class rhs_weap_pkt_btr80a: rhs_weap_pkt
	{
		class gunParticles
		{
			class effect1
			{
				effectname="MachineGunCloud";
				positionname="kulas";
				directionname="kulas end";
			};
			class effect2
			{
				effectName="MachineGunCartridge2";
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
			};
		};
	};
	class rhs_weap_pkt_zeroing: rhs_weap_pkt
	{
		ballisticscomputer=2;
	};
	class rhs_weap_pkt_t90m_RWS: rhs_weap_pkt
	{
		ballisticsComputer="2 + 16";
	};
	class rhs_weap_pktm_t14_RWS: rhs_weap_pktm
	{
		ballisticsComputer="2 + 16";
	};
	class LMG_RCWS: MGun
	{
	};
	class rhs_weap_DSHKM: LMG_RCWS
	{
		initSpeed=0;
		autoFire=1;
		ballisticscomputer=2;
		magazineReloadTime=12;
		magazines[]=
		{
			"rhs_mag_127x108mm_50",
			"rhs_mag_127x108mm_150"
		};
		reloadTime=0.1;
		dispersion=0.0020000001;
		canLock=0;
		class manual: MGun
		{
			autoFire=1;
			reloadTime=0.1;
			dispersion=0.0020000001;
			burst=1;
			aiBurstTerminable=1;
		};
		class far: close
		{
			burst=5;
			burstRangeMax=9;
		};
	};
	class rhs_weap_dshkm_slow: rhs_weap_DSHKM
	{
		magazineReloadTime=30;
	};
	class rhs_weap_nsvt: rhs_weap_DSHKM
	{
		magazines[]=
		{
			"rhs_mag_127x108mm_50",
			"rhs_mag_127x108mm_100",
			"rhs_mag_127x108mm_150",
			"rhs_mag_127x108mm_300"
		};
		reloadTime=0.1;
		magazineReloadTime=10;
		flash="gunfire";
		flashSize=0.60000002;
		dispersion=0.0020000001;
		class manual: MGun
		{
			autoFire=1;
			reloadTime=0.086000003;
			dispersion=0.0020000001;
			burst=1;
		};
		class far: close
		{
			burst=5;
			burstRangeMax=8;
		};
	};
	class rhs_weap_nsvt_effects: rhs_weap_nsvt
	{
	};
	class rhs_weap_nsvt_t72_var1: rhs_weap_nsvt_effects
	{
	};
	class rhs_weap_nsvt_t72: rhs_weap_nsvt_effects
	{
	};
	class rhs_weap_nsvt_obj681: rhs_weap_nsvt_effects
	{
		holdsterAnimValue=1;
	};
	class rhs_weap_nsvt_t80: rhs_weap_nsvt_effects
	{
	};
	class rhs_weap_nsvt_t90m_RWS: rhs_weap_nsvt_t72
	{
		ballisticsComputer="2 + 16";
	};
	class rhs_weap_kord: rhs_weap_nsvt_effects
	{
		class manual: manual
		{
			reloadTime=0.094999999;
			dispersion=0.0020000001;
		};
		class far: close
		{
			burst=5;
			burstRangeMax=10;
		};
	};
	class rhs_weap_kpvt: MGun
	{
		autoFire=1;
		reloadTime=0.1;
		magazineReloadTime=12;
		shotFromTurret=1;
		canLock=0;
		initSpeed=0;
		class gunParticles
		{
			class effect1
			{
				effectname="MachineGunCloud";
				positionname="Usti hlavne";
				directionname="Konec hlavne";
			};
			class effect2
			{
				effectname="RHS_145mm_Catridge";
				positionname="machinegun_eject_pos";
				directionname="machinegun_eject_dir";
			};
		};
		magazines[]=
		{
			"rhs_mag_145x115mm_50"
		};
		selectionFireAnim="zasleh3";
		class manual: MGun
		{
			autoFire=1;
			reloadTime=0.1;
			dispersion=0.00069999998;
			burst=1;
			aiBurstTerminable=1;
		};
		class far: close
		{
			burst=5;
			burstRangeMax=9;
		};
	};
	class gatling_30mm;
	class rhs_weap_yakB: gatling_30mm
	{
		aidispersioncoefx=1.6;
		aidispersioncoefy=3;
		ballisticscomputer=0;
		canlock=0;
		cursor="";
		cursoraim="";
		displayname="$STR_RHS_YAKBYU_NAME";
		firespreadangle="0.5f";
		flash="gunfire";
		flashsize=0.1;
		magazines[]=
		{
			"rhs_mag_127x108mm_1470",
			"rhs_mag_127x108mm_1SLT_1470"
		};
		recoil="Empty";
		showaimcursorinternal=1;
		soundcontinuous=0;
		class gunParticles
		{
			class effect1
			{
				effectname="RHS_YakB_Catridge";
				positionname="machinegun_eject_pos";
				directionname="machinegun_eject_dir";
			};
			class effect2
			{
				directionname="muzzle_1_dir";
				positionname="muzzle_1";
				effectname="AutoCannonFired";
			};
		};
		class manual: Mode_FullAuto
		{
			airateoffire=0.5;
			airateoffiredistance=50;
			autofire=1;
			burst=1;
			dispersion=0.0089999996;
			displayname="$STR_RHS_YAKBYU_NAME";
			maxrange=3;
			maxrangeprobab=0.0099999998;
			midrange=2;
			midrangeprobab=0.0099999998;
			minrange=1;
			minrangeprobab=0.0099999998;
			multiplier=2;
			reloadTime=0.029999999;
			showtoplayer=1;
			soundburst=0;
			soundcontinuous=1;
		};
		class far: close
		{
			airateoffire=4;
			airateoffiredistance=800;
			burst=12;
			burstRangeMax=16;
			maxrange=1200;
			maxrangeprobab=0.0099999998;
			midrange=1000;
			midrangeprobab=0.40000001;
			minrange=800;
			minrangeprobab=0.050000001;
		};
	};
	class GMG_F;
	class GMG_20mm;
	class RHS_weap_Ags30: GMG_20mm
	{
		ballisticsComputer=2;
		magazines[]=
		{
			"RHS_mag_VOG30_30",
			"RHS_mag_GPD30_30",
			"RHS_mag_VOG17m_30"
		};
		autoreload=1;
		canlock=0;
		dispersion=0.0060000001;
		magazinereloadtime=6;
		reloadtime=0.15000001;
		class manual: GMG_F
		{
			displayname="AGS-30 Grenade Launcher";
			aiBurstTerminable=1;
			reloadtime=0.15000001;
		};
		class far: close
		{
			burst=2;
			burstRangeMax=6;
		};
	};
	class rhs_weap_pkm_tigr: rhs_weap_pkt
	{
		ballisticscomputer=2;
		magazineReloadTime=5;
		class manual: manual
		{
			autoFire=1;
			reloadTime=0.075000003;
			dispersion=0.00125;
			burst=1;
			aiBurstTerminable=1;
		};
		class far: close
		{
			burst=6;
			burstRangeMax=10;
		};
	};
	class RHS_weap_Ags30_tigr: RHS_weap_Ags30
	{
	};
	class CannonCore;
	class cannon_120mm: CannonCore
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class rhs_weap_fcs: cannon_120mm
	{
		displayname="";
		magazines[]=
		{
			"rhs_laserfcsmag"
		};
		reloadTime=2;
		magazineReloadTime=2;
		class gunParticles
		{
		};
		class Eventhandlers
		{
			fired="[_this select 0,_this select 1,true] call rhs_fnc_firedFCS";
		};
	};
	class rhs_weap_fcs_noLRF: rhs_weap_fcs
	{
		class Eventhandlers
		{
			fired="[_this select 0,_this select 1] call rhs_fnc_firedFCS";
		};
	};
	class rhs_weap_fcs_ammo: rhs_weap_fcs
	{
		class Eventhandlers
		{
			fired="[_this select 0,_this select 1,true,true] call rhs_fnc_firedFCS";
		};
	};
	class rhs_weap_fcs_nolrf_ammo: rhs_weap_fcs
	{
		class Eventhandlers
		{
			fired="[_this select 0,_this select 1,false,true] call rhs_fnc_firedFCS";
		};
	};
	class rhs_weap_fcs_mi24: rhs_weap_fcs
	{
		class Eventhandlers
		{
			fired="_this call rhs_fnc_firedFCS_mi24";
		};
	};
	class rhs_weap_fcs_su25: rhs_weap_fcs
	{
		reloadTime=6;
		class Eventhandlers
		{
			fired="_this call rhs_fnc_Su25_AI_fire";
		};
	};
	class Laserdesignator_mounted;
	class RHS_T72_FCS: Laserdesignator_mounted
	{
		cursor="EmptyCursor";
		cursoraim="EmptyCursor";
		cursoraimon="EmptyCursor";
		displayname="$STR_RHS_FIRECONTROLSYSTEM_NAME";
		magazines[]=
		{
			"rhs_lasermag"
		};
	};
	class rhs_weap_PL1: RHS_T72_FCS
	{
		displayname="$STR_RHS_PL1LASERDESIGNATOR_NAME";
	};
	class rhs_weap_klen_ps: RHS_T72_FCS
	{
		showtoplayer=0;
		displayname="Klen-PS";
	};
	class rhs_weap_d81: cannon_120mm
	{
		aiDispersioncoefX=4;
		aiDispersioncoefY=8;
		canLock=0;
		nameSound="cannon";
		showaimcursorinternal=0;
		cursor="EmptyCursor";
		cursoraim="cannon";
		cursoraimon="cannon";
		reloadSound[]=
		{
			"",
			1,
			1,
			200
		};
		ballisticsComputer=0;
		flash="gunfire";
		flashSize=10;
		reloadTime=6.5;
		magazineReloadTime=6.5;
		autoReload=0;
		magazines[]=
		{
			"rhs_mag_dummy"
		};
		magazineWell[]=
		{
			"RHS_Cannon_125mm_D81"
		};
		class player: player
		{
			autoReload=0;
		};
		class far: far
		{
		};
	};
	class rhs_weap_2a26: rhs_weap_d81
	{
		aiDispersioncoefX=5;
		aiDispersioncoefY=9;
		magazines[]=
		{
			"rhs_mag_dummy",
			"rhs_mag_3bm9_10",
			"rhs_mag_3bm12_10",
			"rhs_mag_3bm15_10",
			"rhs_mag_3bm17_10",
			"rhs_mag_3bm17_14",
			"rhs_mag_3bm22_10",
			"rhs_mag_3bm22_14",
			"rhs_mag_3bm26_10",
			"rhs_mag_3bk12_8",
			"rhs_mag_3bk14_8",
			"rhs_mag_3bk18_8",
			"rhs_mag_3bk18m_8",
			"rhs_mag_3of11_6",
			"rhs_mag_3of26_6"
		};
		magazineWell[]={};
	};
	class rhs_weap_2a46_2: rhs_weap_d81
	{
		aiDispersioncoefX=3.5;
		aiDispersioncoefY=6.5;
	};
	class rhs_weap_2a46m_2: rhs_weap_d81
	{
		aiDispersioncoefX=3.5;
		aiDispersioncoefY=5;
		magazineWell[]=
		{
			"RHS_Cannon_125mm_D81",
			"RHS_Cannon_125mm_2A46M"
		};
	};
	class rhs_weap_2a46m: rhs_weap_2a46m_2
	{
		aiDispersioncoefX=4;
		aiDispersioncoefY=7;
	};
	class rhs_weap_2a46m_4: rhs_weap_2a46m_2
	{
		aiDispersioncoefX=3.5;
		aiDispersioncoefY=5;
	};
	class rhs_weap_2a46m_5: rhs_weap_2a46m_2
	{
		aiDispersioncoefX=3;
		aiDispersioncoefY=5;
		magazineWell[]=
		{
			"RHS_Cannon_125mm_D81",
			"RHS_Cannon_125mm_2A46M",
			"RHS_Cannon_125mm_2A46M_5"
		};
		class player: player
		{
			reloadtime=6;
		};
		class far: far
		{
			reloadtime=6;
		};
		magazineReloadTime=6;
	};
	class rhs_weap_2a82: rhs_weap_2a46m_2
	{
		aiDispersioncoefX=2.5;
		aiDispersioncoefY=4;
		magazineWell[]=
		{
			"RHS_Cannon_125mm_D81",
			"RHS_Cannon_125mm_2A46M",
			"RHS_Cannon_125mm_2A46M_5",
			"RHS_Cannon_125mm_2A82"
		};
	};
	class rhs_weap_2a82_1m: rhs_weap_2a82
	{
		aiDispersioncoefX=2.5;
		aiDispersioncoefY=3;
		magazineReloadTime=5.5;
		class player: player
		{
			reloadtime=5.5;
		};
		class far: far
		{
			reloadtime=5.5;
		};
		ballisticsComputer="2 + 16";
	};
	class rhs_weap_d10t2s_2: rhs_weap_d81
	{
		magazines[]=
		{
			"rhs_mag_bm25_14",
			"rhs_mag_of412_17",
			"rhs_mag_of412_21",
			"rhs_mag_9m117_3",
			"rhs_mag_bk17_8"
		};
		magazineWell[]={};
		reloadTime=12;
		magazineReloadTime=6.5;
	};
	class rhs_weap_d10tg: rhs_weap_d10t2s_2
	{
		magazines[]=
		{
			"rhs_mag_br412_14",
			"rhs_mag_br412_17",
			"rhs_mag_of412_17",
			"rhs_mag_of412_18",
			"rhs_mag_of412_21"
		};
	};
	class rhs_weap_d10t2s: rhs_weap_d10t2s_2
	{
		magazines[]=
		{
			"rhs_mag_br412_14",
			"rhs_mag_br412_17",
			"rhs_mag_of412_17",
			"rhs_mag_of412_18",
			"rhs_mag_of412_21",
			"rhs_mag_bk5_8",
			"rhs_mag_bk17_8",
			"rhs_mag_bm25_14",
			"rhs_mag_bm8_14",
			"rhs_mag_9m117_3"
		};
	};
	class rhs_weap_u5ts: rhs_weap_d81
	{
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_u5ts.ogg",
			2.5118864,
			1,
			1500
		};
		reloadSound[]=
		{
			"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_u5ts_reload.ogg",
			1,
			1
		};
		magazines[]=
		{
			"rhs_mag_bm4_15",
			"rhs_mag_of11_20",
			"rhs_mag_of28_20",
			"rhs_mag_bk4_5",
			"rhs_mag_bk15_5",
			"rhs_mag_bm23_15",
			"rhs_mag_9m118_3"
		};
		magazineWell[]={};
		reloadTime=12;
		magazineReloadTime=8.5;
		class gunParticles
		{
			class Effect
			{
				positionname="Usti hlavne";
				directionname="Konec hlavne";
				effectname="CannonFired";
			};
		};
	};
	class autocannon_30mm_CTWS;
	class rhs_weap_2a42_base: autocannon_30mm_CTWS
	{
		aiDispersioncoefX=2;
		aiDispersioncoefY=3;
		airateoffire=1;
		airateoffiredistance=1000;
		nameSound="cannon";
		reloadTime=0.02;
		magazinereloadtime=0.2;
		autoFire=1;
		canLock=0;
		magazines[]={};
		magazineWell[]=
		{
			"RHS_AutoCannon_30mm_2A42_AP",
			"RHS_AutoCannon_30mm_2A42_HE"
		};
		cursor="EmptyCursor";
		cursorAim="mg";
		cursorSize=1;
		ballisticsComputer=0;
		class gunParticles
		{
			class Shell
			{
				positionName="ejector_30mm";
				directionName="ejector_30mm_dir";
				effectName="RHS_30mm_Catridge";
			};
			class Effect
			{
				positionname="Usti hlavne";
				directionname="Konec hlavne";
				effectname="AutoCannonFired";
			};
			class EffectL
			{
				positionname="barrel_smoke_l";
				directionname="barrel_smoke_l_dir";
				effectname="RHS_2a42_Fired";
			};
			class EffectR
			{
				positionname="barrel_smoke_r";
				directionname="barrel_smoke_r_dir";
				effectname="RHS_2a42_Fired";
			};
		};
		class LowROFBMD2: Mode_FullAuto
		{
			reloadTime=0.2;
			flash="gunfire";
			flashSize=0.1;
			aiBurstTerminable=1;
			dispersion=0.00093749998;
		};
		class HighROFBMD2: LowROFBMD2
		{
			reloadTime=0.1;
			dispersion=0.0032500001;
		};
		class farBMD2: mediumBMD2
		{
			burst=4;
			burstRangeMax=9;
		};
	};
	class rhs_weap_2a42: rhs_weap_2a42_base
	{
		class HE: rhs_weap_2a42_base
		{
		};
		class AP: rhs_weap_2a42_base
		{
			magazineWell[]=
			{
				"RHS_AutoCannon_30mm_2A42_HE"
			};
		};
	};
	class rhs_weap_2a72_base: rhs_weap_2a42
	{
		class gunParticles
		{
			class Shell
			{
				positionName="ejector_30mm";
				directionName="ejector_30mm_dir";
				effectName="RHS_30mm_Catridge";
			};
			class Effect
			{
				positionname="Usti hlavne3";
				directionname="Konec hlavne3";
				effectname="AutoCannonFired";
			};
		};
		cursor="EmptyCursor";
		cursorAim="mg";
		cursorSize=1;
		ballisticsComputer=0;
		class LowROFBMD2: LowROFBMD2
		{
			reloadTime=0.2;
			autofire=0;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			dispersion=0.000714286;
		};
		class HighROFBMD2: LowROFBMD2
		{
			reloadTime=0.18181799;
			autofire=1;
		};
		class farBMD2: mediumBMD2
		{
			burst=4;
			burstRangeMax=9;
		};
	};
	class rhs_weap_2a72: rhs_weap_2a72_base
	{
		class HE: rhs_weap_2a72_base
		{
		};
		class AP: rhs_weap_2a72_base
		{
			magazineWell[]=
			{
				"RHS_AutoCannon_30mm_2A42_HE"
			};
		};
	};
	class rhs_weap_2a72_btr: rhs_weap_2a72_base
	{
		class HE: rhs_weap_2a72_base
		{
			class LowROFBMD2: LowROFBMD2
			{
				dispersion=0.00107143;
			};
			class HighROFBMD2: HighROFBMD2
			{
				dispersion=0.0049999999;
			};
		};
		class AP: rhs_weap_2a72_base
		{
			class LowROFBMD2: LowROFBMD2
			{
				dispersion=0.00107143;
			};
			class HighROFBMD2: HighROFBMD2
			{
				dispersion=0.0049999999;
			};
			magazineWell[]=
			{
				"RHS_AutoCannon_30mm_2A42_AP"
			};
		};
	};
	class rhs_weap_2a70: rhs_weap_d81
	{
		aiDispersioncoefX=2;
		aiDispersioncoefY=4;
		magazineReloadTime=5.5;
		magazines[]=
		{
			"rhs_mag_3UOF17_22",
			"rhs_mag_3UOF19_22",
			"rhs_mag_3UOF191_22",
			"rhs_mag_9m117_3",
			"rhs_mag_9m117_8",
			"rhs_mag_9m117m_3",
			"rhs_mag_9m117m_8",
			"rhs_mag_9m117m1_3",
			"rhs_mag_9m117m1_8"
		};
		magazineWell[]=
		{
			"RHS_Cannon_100mm_2A70"
		};
		reloadSound[]=
		{
			"\rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",
			3.1622777,
			1,
			200
		};
		class gunParticles
		{
			class Effect
			{
				positionname="Usti hlavne";
				directionname="Konec hlavne";
				effectname="CannonFired";
			};
		};
		class player: player
		{
			reloadTime=5.5;
			dispersion=0.00275;
		};
		class far: far
		{
			reloadTime=5.5;
			dispersion=0.00275;
		};
	};
	class rhs_weap_2a75: rhs_weap_d81
	{
		aiDispersioncoefX=3;
		aiDispersioncoefY=4;
		magazineReloadTime=7.5;
		class player: player
		{
			reloadTime=7.5;
			dispersion="0.00025*2.6";
		};
		class far: far
		{
			reloadTime=7.5;
			dispersion="0.00025*2.6";
		};
	};
	class rhs_weap_2a28_base: cannon_120mm
	{
		aiDispersioncoefX=7;
		aiDispersioncoefY=12;
		canLock=0;
		ballisticsComputer=0;
		cursor="EmptyCursor";
		reloadSound[]=
		{
			"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_3",
			3.1622777,
			1,
			10
		};
		magazines[]=
		{
			"rhs_mag_pg15v_24",
			"rhs_mag_pg15v_20",
			"rhs_mag_pg15v_12",
			"rhs_mag_og15v_16",
			"rhs_mag_og15v_20",
			"rhs_mag_og15v_8"
		};
		reloadTime=7;
		magazineReloadTime=5.5;
		class gunParticles
		{
			class Effect
			{
				positionname="Usti hlavne";
				directionname="Konec hlavne";
				effectname="CannonFired";
			};
		};
		class player: player
		{
			dispersion="0.00025*15";
		};
		class far: far
		{
			dispersion="0.00025*15";
		};
	};
	class rhs_weap_2a28: rhs_weap_2a28_base
	{
		class AP: rhs_weap_2a28_base
		{
		};
		class HE: rhs_weap_2a28_base
		{
			magazines[]=
			{
				"rhs_mag_og15v_16",
				"rhs_mag_og15v_20",
				"rhs_mag_og15v_8"
			};
		};
	};
	class rhs_weap_2a41_base: rhs_weap_2a28_base
	{
		class player: player
		{
			dispersion="0.00025*10";
		};
		class far: far
		{
			dispersion="0.00025*10";
		};
	};
	class rhs_weap_2a41: rhs_weap_2a41_base
	{
		class AP: rhs_weap_2a41_base
		{
		};
		class HE: rhs_weap_2a41_base
		{
			magazines[]=
			{
				"rhs_mag_og15v_16",
				"rhs_mag_og15v_20",
				"rhs_mag_og15v_8"
			};
		};
	};
	class mortar_155mm_AMOS;
	class rhs_weap_2a33: mortar_155mm_AMOS
	{
		displayname="2A33";
		magazinereloadtime=6;
		magazines[]=
		{
			"rhs_mag_HE_2a33",
			"rhs_mag_WP_2a33",
			"rhs_mag_Atomic_2a33",
			"rhs_mag_LASER_2a33",
			"rhs_mag_SMOKE_2a33",
			"rhs_mag_ILLUM_2a33",
			"rhs_mag_HE_2a33_26",
			"rhs_mag_WP_2a33_26",
			"rhs_mag_Atomic_2a_2633_26",
			"rhs_mag_LASER_2a33_26",
			"rhs_mag_SMOKE_2a33_26",
			"rhs_mag_ILLUM_2a33_26"
		};
		class Single1: Mode_SemiAuto
		{
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=8;
			artilleryDispersion=7.1999998;
			artilleryCharge=0.19;
		};
		class Single2: Single1
		{
			artilleryCharge=0.30000001;
		};
		class Single3: Single1
		{
			artilleryCharge=0.47999999;
		};
		class Burst1: Mode_Burst
		{
			burst=6;
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			weaponSoundEffect="DefaultRifle";
			reloadTime=6;
			artilleryDispersion=5.3000002;
			artilleryCharge=0.19;
		};
		class Burst2: Burst1
		{
			artilleryCharge=0.30000001;
		};
		class Burst3: Burst1
		{
			artilleryCharge=0.47999999;
		};
	};
	class rhs_weap_2a31: rhs_weap_2a33
	{
		displayname="2A31";
		magazinereloadtime=6;
		magazines[]=
		{
			"rhs_mag_of462",
			"rhs_mag_of462_10",
			"rhs_mag_3of56",
			"rhs_mag_3of56_10",
			"rhs_mag_3of56_5",
			"rhs_mag_bk6m",
			"rhs_mag_bk6m_26",
			"rhs_mag_bk6m_5",
			"rhs_mag_bk13",
			"rhs_mag_bk13_26",
			"rhs_mag_bk13_5",
			"rhs_mag_d462",
			"rhs_mag_d462_2",
			"rhs_mag_s463",
			"rhs_mag_s463_2",
			"rhs_mag_3of69m",
			"rhs_mag_3of69m_2"
		};
	};
	class rhs_weap_d30: mortar_155mm_AMOS
	{
		ballisticscomputer=2;
		reloadTime=6;
		magazineReloadTime=6;
		magazines[]=
		{
			"rhs_mag_of462",
			"rhs_mag_of462_10",
			"rhs_mag_3of56",
			"rhs_mag_3of56_10",
			"rhs_mag_3of56_5",
			"rhs_mag_bk6m",
			"rhs_mag_bk6m_26",
			"rhs_mag_bk6m_5",
			"rhs_mag_bk13",
			"rhs_mag_bk13_26",
			"rhs_mag_bk13_5",
			"rhs_mag_d462",
			"rhs_mag_d462_2",
			"rhs_mag_s463",
			"rhs_mag_s463_2",
			"rhs_mag_3of69m",
			"rhs_mag_3of69m_2"
		};
	};
	class rhs_weap_d30_at: rhs_weap_d81
	{
		magazines[]=
		{
			"rhs_mag_of462",
			"rhs_mag_of462_10",
			"rhs_mag_3of56",
			"rhs_mag_3of56_10",
			"rhs_mag_3of56_5",
			"rhs_mag_bk6m",
			"rhs_mag_bk6m_26",
			"rhs_mag_bk6m_5",
			"rhs_mag_bk13",
			"rhs_mag_bk13_26",
			"rhs_mag_bk13_5",
			"rhs_mag_d462",
			"rhs_mag_d462_2",
			"rhs_mag_s463",
			"rhs_mag_s463_2",
			"rhs_mag_3of69m",
			"rhs_mag_3of69m_2"
		};
		magazineWell[]={};
		reloadTime=6;
		magazineReloadTime=6;
		autoReload=1;
		reloadSound[]=
		{
			"",
			3.1622777,
			1,
			200
		};
	};
	class rhs_weap_gsh30: gatling_30mm
	{
		canlock=2;
		cursor="mg";
		cursoraim="EmptyCursor";
		cursorsize=0;
		displayname="$STR_RHS_GSH302K_NAME";
		initspeed=940;
		shotFromTurret=0;
		ballisticsComputer=8;
		class gunParticles
		{
			class effect2
			{
				directionname="chamber_1_dir";
				positionname="chamber_1";
				effectname="RHS_AutoCannonFired";
			};
			class effect1
			{
				effectname="RHS_30mm_Catridge";
				directionname="mgun_eject_dir";
				positionname="mgun_eject_pos";
			};
		};
		magazines[]=
		{
			"rhs_mag_gsh30_ofzt_750",
			"rhs_mag_gsh30_ofzt_250",
			"rhs_mag_gsh30_bt_750",
			"rhs_mag_gsh30_bt_250",
			"rhs_mag_gsh30_bt_150",
			"rhs_mag_gsh30_mixed_150"
		};
		namesound="cannon";
		soundcontinuous=1;
		flash="gunfire";
		flashSize=0.5;
		class manual: Mode_FullAuto
		{
			airateoffire=0.5;
			airateoffiredistance=50;
			autofire=1;
			burst=2;
			dispersion=0.0060000001;
			displayname="$STR_RHS_GSH302K_NAME";
			maxrange=3;
			maxrangeprobab=0.0099999998;
			midrange=2;
			midrangeprobab=0.0099999998;
			minrange=1;
			minrangeprobab=0.0099999998;
			multiplier=1;
			reloadtime=0.025;
			flash="gunfire";
			flashSize=0.5;
			showtoplayer=1;
			sound[]=
			{
				"",
				10,
				1
			};
			soundburst=0;
			soundcontinuous=0;
		};
		class manual_low: manual
		{
			reloadtime=0.2;
			burst=0;
		};
		class far: medium
		{
			airateoffire=4;
			airateoffiredistance=1000;
			burst=4;
			burstRangeMax=9;
			maxrange=1250;
			maxrangeprobab=0.11;
			midrange=1050;
			midrangeprobab=0.40000001;
			minrange=850;
			minrangeprobab=0.15000001;
		};
	};
	class rhs_weap_gsh302: rhs_weap_gsh30
	{
		initspeed=870;
		displayname="$STR_RHS_GSH302_NAME";
		class manual: manual
		{
			displayname="$STR_RHS_GSH302_NAME";
			reloadtime=0.02;
			dispersion=0.003;
		};
		class far: close
		{
			airateoffire=4;
			airateoffiredistance=1000;
			burst=4;
			burstRangeMax=9;
			maxrange=1250;
			maxrangeprobab=0.11;
			midrange=1050;
			midrangeprobab=0.40000001;
			minrange=850;
			minrangeprobab=0.15000001;
		};
	};
	class rhs_weap_gsh301: rhs_weap_gsh30
	{
		initspeed=900;
		holdsterAnimValue=1.5;
		displayname="$STR_RHS_GSH301_NAME";
		ballisticscomputer="4 + 8";
		class gunParticles
		{
			class effect2
			{
				directionname="chamber_1_dir";
				positionname="chamber_1";
				effectname="AutoCannonFired";
			};
		};
		class rhs_burst_safe: rhs_weap_gsh30
		{
			class manual: manual
			{
				showtoplayer=0;
				autofire=0;
				maxrangeprobab=0;
				midrangeprobab=0;
				minrangeprobab=0;
				maxrange=0;
				midrange=0;
				minrange=0;
			};
		};
		class manual: manual
		{
			autofire=1;
			displayname="$STR_RHS_GSH301_NAME";
			reloadtime=0.039999999;
			dispersion=0.003;
			burst=1;
		};
		class far: close
		{
			airateoffire=4;
			airateoffiredistance=1000;
			burst=4;
			burstRangeMax=9;
			maxrange=1250;
			maxrangeprobab=0.11;
			midrange=1050;
			midrangeprobab=0.40000001;
			minrange=850;
			minrangeprobab=0.15000001;
		};
	};
	class rhs_weap_gsh23l: rhs_weap_gsh30
	{
		initspeed=715;
		displayname="$STR_RHS_GSH23L_NAME";
		magazines[]=
		{
			"rhs_mag_AM23_500",
			"rhs_mag_upk23_ofz",
			"rhs_mag_upk23_ofzt",
			"rhs_mag_upk23_btz",
			"rhs_mag_upk23_mixed",
			"rhs_mag_upk23_ka52_ofz",
			"rhs_mag_upk23_ka52_ofzt",
			"rhs_mag_upk23_ka52_btz",
			"rhs_mag_upk23_ka52_mixed"
		};
		namesound="cannon";
		shotFromTurret=0;
		soundcontinuous=1;
		class manual: manual
		{
			airateoffire=0.5;
			airateoffiredistance=50;
			burst=4;
			dispersion=0.0035000001;
			displayname="$STR_RHS_GSH23L_NAME";
			maxrange=3;
			maxrangeprobab=0.0099999998;
			midrange=2;
			midrangeprobab=0.0099999998;
			minrange=1;
			minrangeprobab=0.0099999998;
			multiplier=1;
			reloadtime=0.018750001;
		};
		class far: close
		{
			airateoffire=4;
			airateoffiredistance=1000;
			burst=4;
			burstRangeMax=9;
			maxrange=1250;
			maxrangeprobab=0.0099999998;
			midrange=1050;
			midrangeprobab=0.40000001;
			minrange=850;
			minrangeprobab=0.050000001;
		};
		class gunParticles
		{
			class mg1
			{
				positionName="chase01";
				directionName="chase01dir";
				effectName="MachineGun1";
			};
			class mg2
			{
				positionName="chase03";
				directionName="chase03dir";
				effectName="MachineGun1";
			};
			class mg3
			{
				positionName="chase03";
				directionName="chase03dir";
				effectName="MachineGun1";
			};
			class mg4
			{
				positionName="chase04";
				directionName="chase04dir";
				effectName="MachineGun1";
			};
		};
	};
	class rhs_weap_gsh23lx2: rhs_weap_gsh23l
	{
		class manual: manual
		{
			reloadtime=0.0093750004;
		};
		class far: far
		{
			reloadtime=0.0093750004;
		};
	};
	class rhs_weap_azp23: CannonCore
	{
		ballisticsComputer=4;
		nameSound="cannon";
		cursor="emptyCursor";
		cursorAim="mg";
		cursorAimOn="";
		cursorSize=1;
		canLock=2;
		weaponLockSystem=8;
		flash="gunfire";
		flashSize=0.1;
		class gunParticles
		{
			class effect1
			{
				positionName="eject1";
				directionName="eject1dir";
				effectName="MachineGunCartridge2";
			};
			class effect2
			{
				positionName="eject2";
				directionName="eject2dir";
				effectName="MachineGunCartridge2";
			};
			class effect3
			{
				positionName="eject3";
				directionName="eject3dir";
				effectName="MachineGunCartridge2";
			};
			class effect4
			{
				positionName="eject4";
				directionName="eject4dir";
				effectName="MachineGunCartridge2";
			};
			class mg1
			{
				positionName="chase01e";
				directionName="chase01dir";
				effectName="MachineGun1";
			};
			class mg2
			{
				positionName="chase03e";
				directionName="chase03dir";
				effectName="MachineGun1";
			};
			class mg3
			{
				positionName="chase03e";
				directionName="chase03dir";
				effectName="MachineGun1";
			};
			class mg4
			{
				positionName="chase04e";
				directionName="chase04dir";
				effectName="MachineGun1";
			};
		};
		magazines[]=
		{
			"rhs_mag_AZP23_2000",
			"rhs_mag_AZP23_2000_mixed",
			"RHS_mag_AZP23_250",
			"RHS_mag_AZP23_250_mixed",
			"rhs_mag_AZP23_250_ap"
		};
		magazineReloadTime=14;
		class manual: CannonCore
		{
			autoFire=1;
			reloadTime=0.024;
			dispersion=0.0049999999;
			multiplier=2;
			burst=1;
		};
		class far: close
		{
			burst=9;
			burstRangeMax=18;
		};
	};
	class rhs_weap_2a14: rhs_weap_azp23
	{
		ballisticsComputer=2;
		canLock=0;
		weaponLockSystem=1;
		class gunParticles
		{
			class effect1
			{
				positionName="cartridge_pos";
				directionName="cartridge_dir";
				effectName="MachineGunCartridge1";
			};
		};
		magazineReloadTime=9;
		magazines[]=
		{
			"RHS_mag_AZP23_100",
			"rhs_mag_AZP23_100_ap"
		};
		class manual: manual
		{
			reloadTime=0.029999999;
		};
	};
	class mortar_82mm: CannonCore
	{
		class Burst1;
		class Burst2;
		class Burst3;
		class Single1;
		class Single2;
		class Single3;
	};
	class rhs_weap_2p130: mortar_82mm
	{
		magazines[]=
		{
			"rhs_mag_9m41_20"
		};
		class Burst1: Burst1
		{
			reloadTime=5.8000002;
		};
		class Burst2: Burst3
		{
			reloadTime=5.8000002;
		};
		class Burst3: Burst3
		{
			reloadTime=5.8000002;
		};
		class Single1: Single1
		{
			reloadTime=5.8000002;
		};
		class Single2: Single2
		{
			reloadTime=5.8000002;
		};
		class Single3: Single3
		{
			reloadTime=5.8000002;
		};
	};
	class rhs_weap_2b14: mortar_82mm
	{
		magazines[]=
		{
			"rhs_mag_3vo18_10",
			"rhs_mag_3vs25m_10",
			"rhs_mag_53_va_832a_10",
			"rhs_mag_d832du_10"
		};
	};
	class MissileLauncher;
	class rhs_weap_9k11: MissileLauncher
	{
		reloadTime=3;
		magazineReloadTime=30;
		magazines[]=
		{
			"rhs_mag_9m14",
			"rhs_mag_9m14m",
			"rhs_mag_9m14m_3",
			"rhs_mag_9m14m_4",
			"rhs_mag_mclos_training"
		};
		autoreload=0;
	};
	class missiles_Zephyr;
	class missiles_titan;
	class rhs_weap_9m111: MissileLauncher
	{
		canLock=1;
		reloadTime=30;
		magazineReloadTime=30;
		magazines[]=
		{
			"rhs_mag_9m111",
			"rhs_mag_9m111_3",
			"rhs_mag_9m111_4",
			"rhs_mag_9m111_5",
			"rhs_mag_9m111m",
			"rhs_mag_9m111m_3",
			"rhs_mag_9m111m_4",
			"rhs_mag_9m111m_5",
			"rhs_mag_9m113",
			"rhs_mag_9m113_3",
			"rhs_mag_9m113_4",
			"rhs_mag_9m113_5"
		};
		autoreload=0;
		holdsterAnimValue=1;
	};
	class rhs_weap_9m113: rhs_weap_9m111
	{
		autoreload=0;
		magazines[]=
		{
			"rhs_mag_9m113m",
			"rhs_mag_9m113M_3",
			"rhs_mag_9m113M_4",
			"rhs_mag_9m113M_5",
			"rhs_mag_9m113",
			"rhs_mag_9m113_3",
			"rhs_mag_9m113_4",
			"rhs_mag_9m113_5"
		};
	};
	class rhs_weap_9P148: rhs_weap_9m111
	{
		autoreload=0;
		reloadTime=1.5;
		class gunParticles
		{
			class effect1
			{
				effectname="RHS_ATGM_Cap";
				positionname="spice rakety";
				directionname="cap_ejection_dir1";
			};
			class effect2
			{
				effectName="RHS_ATGM_Cap";
				positionname="konec rakety";
				directionname="cap_ejection_dir2";
			};
		};
	};
	class rhs_weap_9m119: rhs_weap_9m111
	{
		reloadTime=30;
		magazineReloadTime=30;
		magazines[]=
		{
			"rhs_mag_9m113_3",
			"rhs_mag_9m113_4"
		};
	};
	class rhs_weap_2k4: rhs_weap_9m111
	{
		reloadTime=10;
		magazineReloadTime=8.5;
		reloadSound[]=
		{
			"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_2a37_reload.ogg",
			1,
			1
		};
		magazines[]=
		{
			"rhs_mag_3m7_12"
		};
	};
	class rhs_weap_9k133: rhs_weap_9m111
	{
		magazines[]=
		{
			"rhs_mag_9m133_2"
		};
		reloadTime=0.1;
	};
	class RocketPods;
	class rhs_weap_SPG9: RocketPods
	{
		canlock=0;
		reloadTime=3;
		magazineReloadTime=10;
		magazines[]=
		{
			"rhs_mag_PG9V",
			"rhs_mag_PG9N",
			"rhs_mag_PG9VNT",
			"rhs_mag_OG9VM",
			"rhs_mag_OG9V"
		};
		recoil="launcherBase";
		cursor="Rocket";
		cursorSize=1;
	};
	class rhs_weap_9K114_launcher: MissileLauncher
	{
		canlock=1;
		cursoraim="";
		weaponLockSystem=1;
		displayname="9K114";
		magazines[]=
		{
			"rhs_mag_9M114",
			"rhs_mag_9M114_Mi24_2x",
			"rhs_mag_9M114M_Mi24_2x",
			"rhs_mag_9M114M1_Mi24_2x",
			"rhs_mag_9M114M2_Mi24_2x"
		};
		airateoffire=4;
		airateoffiredistance=700;
		maxrange=6000;
		maxrangeprobab=0.87;
		midrange=2700;
		midrangeprobab=0.94999999;
		minrange=400;
		minrangeprobab=0.64999998;
		reloadtime=1;
	};
	class rhs_weap_9K114F_launcher: rhs_weap_9K114_launcher
	{
		displayname="9K114F";
		magazines[]=
		{
			"rhs_mag_9M114F_Mi24_2x"
		};
	};
	class rhs_weap_2K8_launcher: rhs_weap_9K114_launcher
	{
		displayname="2K8";
		magazines[]=
		{
			"rhs_mag_9m17",
			"rhs_mag_9m17p",
			"rhs_mag_9M17_Mi24_2x",
			"rhs_mag_9M17p_Mi24_2x"
		};
		maxrange=4000;
		maxrangeprobab=0.1;
		midrange=2000;
		midrangeprobab=0.69999999;
		minrange=400;
		minrangeprobab=0.34999999;
	};
	class rhs_weap_9K115_launcher: rhs_weap_9K114_launcher
	{
		displayname="9K115 Metis";
		magazines[]=
		{
			"rhs_mag_9M115"
		};
		maxrange=1000;
		midrange=500;
		minrange=80;
		magazineReloadTime=15;
		autoReload=0;
		class gunParticles
		{
			class effect1
			{
				effectname="RHS_ATGM_Cap_x2";
				positionname="spice rakety";
				directionname="cap_ejection_dir1";
			};
			class effect2
			{
				effectName="RHS_ATGM_Cap_x2";
				positionname="konec rakety";
				directionname="cap_ejection_dir2";
			};
		};
	};
	class rhs_weap_9K115_1_launcher: rhs_weap_9K115_launcher
	{
		displayname="9K115-1 Metis-M";
		magazines[]=
		{
			"rhs_mag_9M131"
		};
		maxrange=1500;
		midrange=500;
		minrange=80;
	};
	class rhs_weap_9K115_2_launcher: rhs_weap_9K115_launcher
	{
		displayname="9K115-2 Metis-M1";
		magazines[]=
		{
			"rhs_mag_9M131M",
			"rhs_mag_9M131F"
		};
		maxrange=2000;
		midrange=500;
		minrange=80;
	};
	class rhs_weap_9K133_launcher: rhs_weap_9K115_launcher
	{
		displayname="$STR_rhs_DN_kornet";
		magazines[]=
		{
			"rhs_mag_9m133",
			"rhs_mag_9m133f",
			"rhs_mag_9m1331",
			"rhs_mag_9m133m2"
		};
		maxrange=5500;
		midrange=2500;
		minrange=80;
	};
	class rhs_weap_9M120_launcher: rhs_weap_9K114_launcher
	{
		displayname="9M120";
		magazines[]=
		{
			"rhs_mag_9M120",
			"rhs_mag_9M120_8",
			"rhs_mag_9M120_16",
			"rhs_mag_9M120M",
			"rhs_mag_9M120M_8",
			"rhs_mag_9M120M_16",
			"rhs_mag_9M120_Mi24_2x",
			"rhs_mag_9M120M_Mi24_2x",
			"rhs_mag_9M120_Mi28_8x",
			"rhs_mag_9M120M_Mi28_8x"
		};
		maxrange=8000;
		midrange=3500;
	};
	class rhs_weap_9M120F_launcher: rhs_weap_9M120_launcher
	{
		displayname="9M120F";
		magazines[]=
		{
			"rhs_mag_9M120F",
			"rhs_mag_9M120F_8",
			"rhs_mag_9M120F_16",
			"rhs_mag_9M120F_Mi24_2x",
			"rhs_mag_9M120F_Mi28_8x"
		};
	};
	class rhs_weap_9M120O_launcher: rhs_weap_9M120_launcher
	{
		displayname="9M120O";
		magazines[]=
		{
			"rhs_mag_9M120F",
			"rhs_mag_9M120F_8",
			"rhs_mag_9M120F_16",
			"rhs_mag_9M120O_Mi24_2x",
			"rhs_mag_9M120O_Mi28_8x"
		};
	};
	class missiles_titan_static;
	class rhs_weap_Igla_twice: missiles_titan_static
	{
		reloadTime=4;
		magazineReloadTime=20;
		magazines[]=
		{
			"rhs_mag_2Rnd_Igla"
		};
		weaponLockSystem=2;
	};
	class rockets_230mm_GAT;
	class rhs_weap_grad: rockets_230mm_GAT
	{
		displayname="$STR_RHS_122MMGRAD_NAME";
		magazines[]=
		{
			"rhs_mag_40Rnd_122mm_rockets"
		};
		magazineReloadTime=0.15000001;
		class Close: RocketPods
		{
			artillerycharge=0.17;
			artillerydispersion=0.89999998;
			dispersion=0.050000001;
			autofire=0;
			burst=1;
			salvo=1;
			maxrange=4600;
			maxrangeprobab=0.050000001;
			midrange=2500;
			midrangeprobab=0.64999998;
			minrange=800;
			minrangeprobab=0.15000001;
			reloadtime=0.2;
		};
		class Mode_1: Close
		{
			artilleryCharge=0.36500001;
		};
		class Mode_2: Close
		{
			artilleryCharge=0.41499999;
		};
		class Mode_3: Close
		{
			artilleryCharge=0.47;
		};
		class Mode_4: Close
		{
			artilleryCharge=0.51800001;
		};
		class Mode_5: Close
		{
			artilleryCharge=0.57999998;
		};
		class Mode_6: Close
		{
			artilleryCharge=0.64999998;
		};
		class EventHandlers
		{
			class RHS_EH
			{
				fired="_this call rhs_fnc_bm21_fired";
			};
		};
	};
	class rhs_weap_bm21: rhs_weap_grad
	{
		magazines[]=
		{
			"rhs_mag_m21of_1"
		};
	};
	class rhs_weap_bm21_9m28f: rhs_weap_grad
	{
		magazines[]=
		{
			"rhs_mag_9m28f_1"
		};
		class Mode_1: Close
		{
			artilleryCharge=0.2;
		};
		class Mode_2: Close
		{
			artilleryCharge=0.226;
		};
		class Mode_3: Close
		{
			artilleryCharge=0.255;
		};
		class Mode_4: Close
		{
			artilleryCharge=0.28799999;
		};
		class Mode_5: Close
		{
			artilleryCharge=0.33000001;
		};
		class Mode_6: Close
		{
			artilleryCharge=0.36500001;
		};
		class Mode_7: Close
		{
			artilleryCharge=0.41499999;
		};
		class Mode_8: Close
		{
			artilleryCharge=0.47;
		};
		class Mode_9: Close
		{
			artilleryCharge=0.51800001;
		};
		class Mode_10: Close
		{
			artilleryCharge=0.56;
		};
	};
	class rhs_weap_bm21_9m28k: rhs_weap_grad
	{
		magazines[]=
		{
			"rhs_mag_9m28k_1"
		};
		class Mode_1: Close
		{
			artilleryCharge=0.2;
		};
		class Mode_2: Close
		{
			artilleryCharge=0.226;
		};
		class Mode_3: Close
		{
			artilleryCharge=0.255;
		};
		class Mode_4: Close
		{
			artilleryCharge=0.28799999;
		};
		class Mode_5: Close
		{
			artilleryCharge=0.33000001;
		};
		class Mode_6: Close
		{
			artilleryCharge=0.36500001;
		};
		class Mode_7: Close
		{
			artilleryCharge=0.41499999;
		};
		class Mode_8: Close
		{
			artilleryCharge=0.47;
		};
		class Mode_9: Close
		{
			artilleryCharge=0.51800001;
		};
	};
	class rhs_weap_bm21_9m218: rhs_weap_grad
	{
		magazines[]=
		{
			"rhs_mag_9m218_1"
		};
		class Mode_1: Close
		{
			artilleryCharge=0.36500001;
		};
		class Mode_2: Close
		{
			artilleryCharge=0.41499999;
		};
		class Mode_3: Close
		{
			artilleryCharge=0.47;
		};
		class Mode_4: Close
		{
			artilleryCharge=0.51800001;
		};
		class Mode_5: Close
		{
			artilleryCharge=0.57999998;
		};
		class Mode_6: Close
		{
			artilleryCharge=0.64999998;
		};
		class Mode_7: Close
		{
			artilleryCharge=0.72000003;
		};
		class Mode_8: Close
		{
			artilleryCharge=0.79000002;
		};
	};
	class rhs_weap_bm21_9m521: rhs_weap_grad
	{
		magazines[]=
		{
			"rhs_mag_9m521_1"
		};
		class Mode_1: Close
		{
			artilleryCharge=0.36500001;
		};
		class Mode_2: Close
		{
			artilleryCharge=0.41499999;
		};
		class Mode_3: Close
		{
			artilleryCharge=0.47;
		};
		class Mode_4: Close
		{
			artilleryCharge=0.51800001;
		};
		class Mode_5: Close
		{
			artilleryCharge=0.57999998;
		};
		class Mode_6: Close
		{
			artilleryCharge=0.64999998;
		};
		class Mode_7: Close
		{
			artilleryCharge=0.72000003;
		};
		class Mode_8: Close
		{
			artilleryCharge=0.79000002;
		};
		class Mode_9: Close
		{
			artilleryCharge=0.85000002;
		};
		class Mode_10: Close
		{
			artilleryCharge=0.91000003;
		};
	};
	class rhs_weap_bm21_9m522: rhs_weap_grad
	{
		magazines[]=
		{
			"rhs_mag_9m522_1"
		};
		class Mode_1: Close
		{
			artilleryCharge=0.36500001;
		};
		class Mode_2: Close
		{
			artilleryCharge=0.41499999;
		};
		class Mode_3: Close
		{
			artilleryCharge=0.47;
		};
		class Mode_4: Close
		{
			artilleryCharge=0.51800001;
		};
		class Mode_5: Close
		{
			artilleryCharge=0.57999998;
		};
		class Mode_6: Close
		{
			artilleryCharge=0.64999998;
		};
		class Mode_7: Close
		{
			artilleryCharge=0.72000003;
		};
		class Mode_8: Close
		{
			artilleryCharge=0.79000002;
		};
		class Mode_9: Close
		{
			artilleryCharge=0.87900001;
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
			class fired_IglaAA
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_igla_aa_fired.sqf";
				description="AINET smart fuse for HE-FRAG rounds";
			};
			class fired_D30
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_d30_fired.sqf";
				description="AINET smart fuse for HE-FRAG rounds";
			};
			class firedFCS
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_firedFCS.sqf";
				description="LRF marking & ammo changing";
			};
			class firedFCS_mi24
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_firedFCS_mi24.sqf";
			};
			class d30_pack
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_d30_pack.sqf";
				description="Prepare D30 for towing or air lifting";
			};
			class bm21_fired
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_bm21_fired.sqf";
			};
			class burstLimiter
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_burstLimiter.sqf";
				description="Burst limiter for air cannons";
			};
			class eden_defineLoadout
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_defineLoadout.sqf";
				description="3den";
			};
		};
		class WeaponsEH
		{
			class saclosGuide
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_saclosGuide.sqf";
				description="SACLOS guidance";
			};
			class mclosGuide
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_mclosGuide.sqf";
				description="MCLOS guidance";
			};
			class klenPSGuide
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_klenPSGuide.sqf";
				description="Klen-PS laser guidance";
			};
			class 9m14_fired
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_9m14_fired.sqf";
				description="Maljutka Hide";
			};
			class 9m14_reload
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_9m14_reload.sqf";
				description="Maljutka Reload";
			};
			class at14_fired
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_at14coverejection.sqf";
				description="Cover Ejection for At14";
			};
			class atgm_spentTube
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_atgm_spentTube.sqf";
				description="Spent tubes for atgm";
			};
			class effectFiredSmokeLauncher
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_effectFiredSmokeLauncher.sqf";
				description="Effects for smoke launcher";
			};
			class effectFiredSmokeGenerator
			{
				file="\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_effectFiredSmokeGenerator.sqf";
				description="Effects for smoke generator";
			};
		};
	};
};
class CfgRemoteExec
{
	class Functions
	{
		mode=2;
		jip=1;
		class RHS_fnc_effectFiredSmokeGenerator
		{
			allowedTargets=0;
		};
		class RHS_fnc_effectFiredSmokeLauncher
		{
			allowedTargets=0;
		};
	};
};
class CfgSounds
{
	class RHS_ERA_EXPLOSION_1
	{
		name="ERA Explosion 1";
		sound[]=
		{
			"A3\Sounds_F\weapons\Explosion\explosion_mine_1",
			1,
			1
		};
		titles[]={};
	};
	class RHS_Autoloader
	{
		name="Autoloader sound";
		sound[]=
		{
			"\rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",
			1.4125376,
			1,
			200
		};
		titles[]={};
	};
};
class cfgSFX
{
	class RHS_ERA_Explosion_Sound
	{
		sound0[]=
		{
			"A3\Sounds_F\weapons\Explosion\explosion_mine_1",
			1.1220185,
			1,
			200,
			1,
			10,
			10,
			10
		};
		titles[]={};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
};
class CfgCloudlets
{
	class FireSparks;
	class RHS_FireSparks: FireSparks
	{
		emissiveColor[]=
		{
			{500,75,35,0},
			{50,7.5,3.5,0},
			{0,0,0,0},
			{0,0,0,0}
		};
	};
	class Default;
	class MachineGunCartridge1;
	class SmallFireF;
	class RHS_YakB_Catridge: MachineGunCartridge1
	{
		interval="0.06/10";
	};
	class MachineGunCartridge2;
	class RHS_Tank_Catridge: MachineGunCartridge2
	{
		interval=5.5599999;
		lifeTime=60;
		size[]={2};
		sizeVar=0;
		position[]={0,0,0};
		moveVelocity[]={-3,-3,-6};
		particleShape="\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_30mm.p3d";
	};
	class RHS_30mm_Catridge: MachineGunCartridge2
	{
		moveVelocity[]=
		{
			"-directionX * 3",
			"- directionY * 3",
			"- directionZ * 3"
		};
		particleShape="\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_30mm.p3d";
		size[]={1};
		sizeVar=0;
		damping=0.050000001;
		externalAcceleration=1.2;
		restitution=0.40000001;
		dynamicFriction=0.2;
		staticFriction=0.2;
		collisionSize=0.050000001;
		maxMotionDist=4;
	};
	class RHS_145mm_Catridge: RHS_30mm_Catridge
	{
		particleShape="\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_30mm.p3d";
		size[]={0.85000002};
	};
	class RHS_ATGM_Cap: RHS_30mm_Catridge
	{
		interval=0.059999999;
		particleShape="\rhsafrf\addons\rhs_bmd\rhs_berezhok_cover.p3d";
		size[]={1};
		rotationVelocity=3;
		rotationVelocityVar=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
	};
	class RHS_ATGM_Cap_x2: RHS_ATGM_Cap
	{
		moveVelocity[]=
		{
			"-directionX * 6",
			"- directionY * 6",
			"- directionZ * 6"
		};
	};
	class RHS_ATGM_Pusher_Eject: MachineGunCartridge2
	{
		interval=0.94999999;
		lifeTime=60;
		size[]={1};
		sizeVar=0;
		position[]={0,0,0};
		moveVelocity[]=
		{
			"speedX  * 0.3",
			"speedY  * 0.3",
			"speedZ  * 0.3"
		};
		particleShape="\rhsafrf\addons\rhs_heavyweapons\atgmpush\atgmpush.p3d";
	};
	class RHS_125mm_Sabot_1_Eject: MachineGunCartridge2
	{
		particleShape="\rhsafrf\addons\rhs_heavyweapons\sabot\sabot.p3d";
		interval=0.1;
		lifeTime=60;
		size[]={1};
		sizeVar=0;
		position[]={0,0,0};
		moveVelocity[]=
		{
			"speedX  * 0.06",
			"speedY  * 0.12",
			"speedZ  * 0.06"
		};
		forcedInitialOrientationDir[]=
		{
			"3*speedX",
			"3*speedY",
			"3*speedZ"
		};
		rotationVelocity=3;
		rotationVelocityVar=1;
		bounceOnSurface=0.5;
		bounceOnSurfaceVar=0.15000001;
		randomDirectionPeriodVar=0.40000001;
		randomDirectionIntensityVar=1;
	};
	class RHS_125mm_Sabot_2_Eject: RHS_125mm_Sabot_1_Eject
	{
		moveVelocity[]=
		{
			"speedX  * 0.05",
			"speedY  * 0.06",
			"speedZ  * 0.06"
		};
	};
	class RHS_125mm_Sabot_3_Eject: RHS_125mm_Sabot_1_Eject
	{
		moveVelocity[]=
		{
			"speedX  * 0.07",
			"speedY  * 0.06",
			"speedZ  * 0.06"
		};
	};
	class RHS_NukeConeFire: Default
	{
		interval=0.0099999998;
		CircleRadius=22.1;
		CircleVelocity[]={0,0.1,-0.55000001};
		particleShape="\a3\Data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=4;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angle=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=23.5;
		lifeTimeVar=0;
		weight=10;
		volume=7.6500001;
		rubbing=0;
		size[]={4.1999998,3,2};
		sizeVar=0.25;
		sizeCoef=1;
		animationSpeed[]={1};
		animationSpeedCoef=1;
		position[]={0,8,0};
		positionVar[]={0.25,0.25,0};
		positionVarConst[]={0,0,0};
		moveVelocity[]={0,6,0};
		moveVelocityVar[]={0,0.175,0};
		moveVelocityVarConst[]={0,0,0};
		rotationVelocity=0;
		rotationVelocityVar=0;
		color[]=
		{
			{0.25,0.25,0.25,0.34999999},
			{0.25,0.25,0.25,0.25},
			{0.25,0.25,0.25,0}
		};
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		destroyOnWaterSurface=0;
		destroyOnWaterSurfaceOffset=0;
		onSurface=0;
		keepOnSurface=0;
		surfaceOffset=0;
		bounceOnSurface=0.60000002;
		bounceOnSurfaceVar=0;
		postEffects="";
		particleEffects="";
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
	};
	class RHS_NukeConeSmokeBottom: Default
	{
		interval=0.0049999999;
		CircleRadius=12;
		CircleVelocity[]={5,0.1,5};
		particleShape="\a3\Data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=8;
		particleFSFrameCount=18;
		particleFSLoop=0;
		angle=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=24.5;
		lifeTimeVar=0;
		weight=10;
		volume=7.6500001;
		rubbing=0;
		size[]={7.1999998,4,1};
		sizeVar=0.25;
		sizeCoef=1;
		animationSpeed[]={1};
		animationSpeedCoef=1;
		position[]={0,0,0};
		positionVar[]={0.25,0.25,0};
		positionVarConst[]={0,0,0};
		moveVelocity[]={0,0,0};
		moveVelocityVar[]={0,0.175,0};
		moveVelocityVarConst[]={0,0,0};
		rotationVelocity=0;
		rotationVelocityVar=0;
		color[]=
		{
			{0.1,0.1,0.1,1},
			{0.25,0.25,0.25,0.5},
			{0.5,0.5,0.5,0}
		};
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		destroyOnWaterSurface=0;
		destroyOnWaterSurfaceOffset=0;
		onSurface=0;
		keepOnSurface=0;
		surfaceOffset=0;
		bounceOnSurface=0.60000002;
		bounceOnSurfaceVar=0;
		postEffects="";
		particleEffects="";
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
	};
	class RHS_NukeConeSmokeTop: Default
	{
		interval=0.0049999999;
		CircleRadius=22;
		CircleVelocity[]={0,0,-0.55000001};
		particleShape="\a3\Data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=8;
		particleFSFrameCount=18;
		particleFSLoop=0;
		angle=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=24.5;
		lifeTimeVar=0;
		weight=10;
		volume=7.6500001;
		rubbing=0;
		size[]={7.1999998,4,4};
		sizeVar=0.25;
		sizeCoef=1;
		animationSpeed[]={1};
		animationSpeedCoef=1;
		position[]={0,8,0};
		positionVar[]={0.25,0.25,0};
		positionVarConst[]={0,0,0};
		moveVelocity[]={0,6,0};
		moveVelocityVar[]={0,0.175,0};
		moveVelocityVarConst[]={0,0,0};
		rotationVelocity=0;
		rotationVelocityVar=0;
		color[]=
		{
			{0.1,0.1,0.1,0.69999999},
			{0.25,0.25,0.25,0.44999999},
			{0.5,0.5,0.5,0}
		};
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		destroyOnWaterSurface=0;
		destroyOnWaterSurfaceOffset=0;
		onSurface=0;
		keepOnSurface=0;
		surfaceOffset=0;
		bounceOnSurface=0.60000002;
		bounceOnSurfaceVar=0;
		postEffects="";
		particleEffects="";
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
	};
	class RHS_NukeSmokeChimney: Default
	{
		interval=0.0099999998;
		CircleRadius=0;
		CircleVelocity[]={0,0,0};
		particleShape="\a3\Data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=8;
		particleFSFrameCount=16;
		particleFSLoop=1;
		angle=0;
		angleVar=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=23.5;
		lifeTimeVar=0;
		weight=10;
		volume=7.75;
		rubbing=0;
		size[]={9,8,6,1};
		sizeVar=0.25;
		sizeCoef=1;
		animationSpeed[]={1};
		animationSpeedCoef=1;
		position[]={0,0,0};
		positionVar[]={0.25,6.25,0};
		positionVarConst[]={0,0,0};
		moveVelocity[]={0,3,0};
		moveVelocityVar[]={0.175,2.175,0};
		moveVelocityVarConst[]={0,0,0};
		rotationVelocity=0;
		rotationVelocityVar=0;
		color[]=
		{
			{0.25,0.25,0.25,0.69999999},
			{0.15000001,0.15000001,0.15000001,0.30000001}
		};
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		destroyOnWaterSurface=0;
		destroyOnWaterSurfaceOffset=0;
		onSurface=0;
		keepOnSurface=0;
		surfaceOffset=0;
		bounceOnSurface=0.60000002;
		bounceOnSurfaceVar=0;
		postEffects="";
		particleEffects="";
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
	};
	class MachineGun2;
	class RHS_MachineGun2: MachineGun2
	{
		color[]=
		{
			{0.57999998,0.57999998,0.49000001,0.079999998},
			{0.57999998,0.57999998,0.49000001,0.066},
			{0.57999998,0.57999998,0.49000001,0.012},
			{0.57999998,0.57999998,0.49000001,0.001}
		};
		size[]={1.3,3,5,7};
		sizeCoef=1;
	};
	class AutoCannonFired;
	class RHS_AutoCannon_Fired: AutoCannonFired
	{
		color[]=
		{
			{0.54000002,0.51999998,0.47999999,0.12},
			{0.54000002,0.51999998,0.47999999,0.066},
			{0.20999999,0.20999999,0.28,0.022},
			{0.20999999,0.20999999,0.2,0.001}
		};
		size[]={3,6,9,10};
		sizeCoef=1;
	};
	class RHS_2A42_Fired: AutoCannonFired
	{
		color[]=
		{
			{0.54000002,0.51999998,0.47999999,0.12},
			{0.54000002,0.51999998,0.47999999,0.035999998},
			{0.20999999,0.20999999,0.28,0.012},
			{0.20999999,0.20999999,0.2,0.001}
		};
		size[]={0.1,3,6,4};
		sizeCoef=1;
		lifeTime=3.0999999;
		lifeTimeVar=2.4000001;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.64999998;
		moveVelocity[]=
		{
			"17*directionX",
			"17*directionY",
			"17*directionZ"
		};
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
	};
	class RHS_KPVT_Flash: AutoCannonFired
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.13500001;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		moveVelocity[]=
		{
			"1*directionX",
			"2*directionY",
			"1*directionZ"
		};
		rotationVelocity=0;
		weight=10;
		volume=0.5;
		rubbing=0.075000003;
		size[]={0.34999999,0.34999999};
		color[]=
		{
			{1,1,1,-2},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={3};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0,0,0,0.1};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		angleVar=0;
	};
	class ExhaustSmokeTank2;
	class RHS_ExhaustSmokeTankGas: ExhaustSmokeTank2
	{
		color[]=
		{
			{0.86000001,0.95999998,0.95999998,0.039999999},
			{0.80000001,0.80000001,0.80000001,0.050000001},
			{0.82999998,0.93000001,0.93000001,0.0049999999},
			{0.82999998,0.93000001,0.93000001,0.001}
		};
	};
	class RHS_ERA_Flash: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.15000001;
		moveVelocity[]={0,1,0};
		rotationVelocity=1;
		weight=1.277;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,1.4,1.8};
		color[]=
		{
			{1,1,1,-6},
			{1,0.5,0.5,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.2,0.5,0.2};
		rotationVelocityVar=1;
		sizeVar=0.60000002;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RHS_ERA_Smoke: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3;
		moveVelocity[]={0,2.5,0};
		rotationVelocity=0;
		weight=0.061000001;
		volume=0.045000002;
		rubbing=0.2;
		size[]={3,4,7};
		color[]=
		{
			{0.89999998,0.80000001,0.80000001,0.69999999},
			{0.80000001,0.80000001,0.80000001,0.2},
			{1,1,1,0}
		};
		animationSpeed[]={1.5,0.5,0.2};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.69999999;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1.5,0.5,1.5};
		rotationVelocityVar=2;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RHS_ERA_Shard: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=1;
		lifeTime=40;
		moveVelocity[]={0,2,0};
		rotationVelocity=3;
		weight=40;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.30000001};
		color[]=
		{
			{1,0.80000001,0.40000001,-10},
			{1,1,1,1}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		bounceOnSurface=0.039999999;
		bounceOnSurfaceVar=0.02;
		blockAIVisibility=0;
		lifeTimeVar=10;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={10,12,10};
		rotationVelocityVar=2.5;
		sizeVar=0.25;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RHS_3D17SparksBig: Default
	{
		interval=0.0020000001;
		color[]=
		{
			{1,0.30000001,0.1,-500},
			{1,0.30000001,0.1,-500}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{250,50,25,0},
			{0,0,0,0}
		};
		lifeTime=3;
		lifeTimeVar=5;
		weight=100;
		volume=0.0099999998;
		rubbing=0.050000001;
		size[]={0.15000001,0.075000003,0};
		sizeVar=0.1;
		moveVelocity[]=
		{
			"inDirX * inSpeed * 0.35",
			"inDirY * inSpeed * 0.35",
			"inDirZ * inSpeed * 0.35"
		};
		moveVelocityVar[]={7,7,7};
		bounceOnSurface=0.5;
		bounceOnSurfaceVar=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		rotationVelocity=1;
		sizeCoef=1;
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		rotationVelocityVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RHS_3D17SparksSlow: RHS_3D17SparksBig
	{
		interval=0.003;
		weight=1.277;
		volume=0.80000001;
		emissiveColor[]=
		{
			{50,15,10,0},
			{0,0,0,0}
		};
		moveVelocity[]=
		{
			"inDirX * inSpeed * 0.15",
			"inDirY * inSpeed * 0.15",
			"inDirZ * inSpeed * 0.15"
		};
		moveVelocityVar[]={2,2,2};
		particleEffects="RHS_3D17ParticleLight";
	};
	class RHS_3D17SparksTail: RHS_3D17SparksBig
	{
		interval=0.001;
		color[]=
		{
			{1,0.2,0.1,-500},
			{1,0.2,0.1,-500}
		};
		emissiveColor[]=
		{
			{50000,7500,3500,0},
			{0,0,0,0}
		};
		lifeTime=3;
		lifeTimeVar=5;
		weight=100;
		volume=0.0099999998;
		rubbing=0.0099999998;
		size[]={0.15000001,0.1,0};
		sizeVar=0.1;
		moveVelocity[]=
		{
			"inDirX * inSpeed * 0.35",
			"inDirY * inSpeed * 0.35",
			"inDirZ * inSpeed * 0.35"
		};
		moveVelocityVar[]={7,7,7};
		bounceOnSurface=0.40000001;
		bounceOnSurfaceVar=0.1;
		particleEffects="RHS_3D17ParticleTail";
	};
	class RHS_3D17SparksTail_902B: RHS_3D17SparksTail
	{
		interval=0.0015;
		moveVelocity[]=
		{
			"inDirX * inSpeed * 0.45",
			"inDirY * inSpeed * 0.45",
			"inDirZ * inSpeed * 0.45"
		};
		moveVelocityVar[]={9,9,9};
		bounceOnSurface=0.64999998;
		bounceOnSurfaceVar=0.1;
		particleEffects="RHS_3D17ParticleTail_902B";
	};
	class RHS_3D17SparksSmall: RHS_3D17SparksBig
	{
		interval=0.0020000001;
		color[]=
		{
			{1,0.30000001,0.1,-500},
			{1,0.30000001,0.1,-500}
		};
		emissiveColor[]=
		{
			{250,50,25,0},
			{0,0,0,0}
		};
		lifeTime=0.30000001;
		lifeTimeVar=5;
		weight=100;
		volume=0.0099999998;
		rubbing=0.050000001;
		size[]={0.2,0.1,0};
		sizeVar=0.15000001;
		moveVelocity[]=
		{
			"inDirX * inSpeed * 0.15",
			"inDirY * inSpeed * 0.15",
			"inDirZ * inSpeed * 0.15"
		};
		moveVelocityVar[]={15,15,15};
	};
	class RHS_3D17SparksBack: RHS_3D17SparksSmall
	{
		interval=0.0060000001;
		moveVelocity[]=
		{
			"inDirX * inSpeed * -0.25",
			"inDirY * inSpeed * -0.25",
			"inDirZ * inSpeed * -0.25"
		};
		moveVelocityVar[]={1,1,1};
		lifeTime=0.60000002;
		lifeTimeVar=5;
	};
	class RHS_3D17TrailEffect: Default
	{
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		moveVelocity[]={0,0,0};
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		onTimerScript="";
		beforeDestroyScript="";
		MoveVelocityVar[]={0,0,0};
		interval=0.30000001;
		emissiveColor[]=
		{
			{0.5,0.5,0.5,0},
			{0,0,0,0}
		};
		colorVar[]={0,0,0,0};
		lifeTime=3.5;
		lifeTimeVar=0.25;
		weight=1.277;
		volume="0.99 + randomValue / 40";
		rubbing=0.075000003;
		size[]={2.8125,5.625,7.875};
		sizeVar=0.5;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0},
			{0.5,0.5,0.5,0.30000001},
			{0.5,0.5,0.5,0.40000001},
			{0.5,0.5,0.5,0.30000001},
			{0.5,0.5,0.5,0.2},
			{0.80000001,0.80000001,0.80000001,0.050000001},
			{1,1,1,0}
		};
		rotationVelocity=0.75;
		rotationVelocityVar=0.25;
		randomDirectionPeriod=1.25;
		randomDirectionIntensity=0.25;
		randomDirectionIntensityVar=0.1;
		position[]={0,0,0};
		positionVar[]={0.1,0.1,0.1};
		blockAIVisibility=0;
	};
	class RHS_3D17TrailEffect1: RHS_3D17TrailEffect
	{
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0},
			{0.5,0.5,0.5,0.2},
			{0.5,0.5,0.5,0.25},
			{0.5,0.5,0.5,0.30000001},
			{0.5,0.5,0.5,0.1},
			{0.80000001,0.80000001,0.80000001,0.02},
			{1,1,1,0}
		};
		size[]={1.875,3.75,5.25};
		interval=0.15000001;
	};
	class RHS_3D17TrailEffect2: RHS_3D17TrailEffect
	{
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0},
			{0.5,0.5,0.5,0.12},
			{0.5,0.5,0.5,0.15000001},
			{0.5,0.5,0.5,0.2},
			{0.5,0.5,0.5,0.1},
			{0.80000001,0.80000001,0.80000001,0.02},
			{1,1,1,0}
		};
		size[]={1.25,2.5,3.5};
		interval=0.075000003;
	};
	class RHS_3D17TrailEffectLong: RHS_3D17TrailEffect
	{
		particleShape="\A3\data_f\cl_basic.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		animationSpeed[]={0};
		circleRadius=0;
		circleVelocity[]={0,0,0};
		interval=0.30000001;
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.60000002,0.60000002,0.60000002,0.5},
			{0.60000002,0.60000002,0.60000002,0.30000001},
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.80000001,0.80000001,0.80000001,0.050000001},
			{1,1,1,0}
		};
		emissiveColor[]=
		{
			{0.5,0.5,0.5,0},
			{0,0,0,0}
		};
		lifeTime=22;
		lifeTimeVar=1;
		size[]={4.5,7.875,14.625};
		sizeVar=0.5;
		weight=1.277;
		volume="0.99 + randomValue / 40";
		rotationVelocity=1.25;
		rotationVelocityVar=1;
		randomDirectionPeriod=1.5;
		randomDirectionIntensity=0.15000001;
		bounceOnSurface=-1;
		bounceOnSurfaceVar=0;
		blockAIVisibility=1;
	};
	class RHS_3D17TrailEffectLong1: RHS_3D17TrailEffectLong
	{
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.60000002,0.60000002,0.60000002,0.44999999},
			{0.60000002,0.60000002,0.60000002,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.25},
			{0.60000002,0.60000002,0.60000002,0.1},
			{0.80000001,0.80000001,0.80000001,0.02},
			{1,1,1,0}
		};
		size[]={3,5.25,9.75};
		interval=0.15000001;
	};
	class RHS_3D17TrailEffectLong2: RHS_3D17TrailEffectLong
	{
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.60000002,0.60000002,0.60000002,0.34999999},
			{0.60000002,0.60000002,0.60000002,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.15000001},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.80000001,0.80000001,0.80000001,0.02},
			{1,1,1,0}
		};
		size[]={3,5.25,9.75};
		interval=0.125;
	};
	class RHS_3D17ExplosionCloud: RHS_3D17TrailEffect
	{
		moveVelocity[]={0,0,0.1};
		size[]={2.8125,5.625,7.875};
		weight=1.277;
		volume="1.25 + randomValue / 30";
		randomDirectionPeriod=1.5;
		randomDirectionIntensity=0.25;
		interval=0.02;
		lifeTime=4;
		lifeTimeVar=0.25;
		color[]=
		{
			{0.029999999,0.029999999,0.029999999,0.60000002},
			{0.029999999,0.029999999,0.029999999,0.5},
			{0.029999999,0.029999999,0.029999999,0.40000001},
			{0.029999999,0.029999999,0.029999999,0.2},
			{0.029999999,0.029999999,0.029999999,0.050000001},
			{0.029999999,0.029999999,0.029999999,0.0099999998},
			{1,1,1,0}
		};
	};
	class ExhaustSmokeRefractHeliBig;
	class ExhaustSmokeRefractGasTurbine: ExhaustSmokeRefractHeliBig
	{
		interval="0.002/(intensity + 0.001)/(vehicleSpeedSize interpolate [0,70,1,20])";
		moveVelocity[]=
		{
			"speedX * 0.98",
			"speedY * 0.98",
			"speedZ * 0.98"
		};
		lifeTime="0.4/(vehicleSpeedSize interpolate [0,70,1,10])";
		sizeCoef="(vehicleSpeedSize interpolate [0,80,1,3])";
	};
	class RHS_SmokeGenerator: Default
	{
		interval=0.15000001;
		particleShape="\A3\data_f\cl_basic.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		animationSpeed[]={0};
		circleRadius=0;
		circleVelocity[]={0,0,0};
		emissiveColor[]=
		{
			{0,0,0,0}
		};
		rotationVelocity=0;
		rotationVelocityVar=0;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		blockAIVisibility=1;
	};
	class RHS_RPS_K37_800_Smoke: RHS_ERA_Smoke
	{
		interval=0.0049999999;
		lifeTime=7;
		size[]={2,2,2};
	};
	class RHS_RPS_K37_800_Fire: RHS_ERA_Flash
	{
		interval=0.050000001;
		timerPeriod=1;
		lifeTime=0.25;
		weight=1.277;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,0.40000001,1.2};
		color[]=
		{
			{1,1,1,-6},
			{1,0.5,0.5,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.2,0.5,0.2};
		rotationVelocityVar=1;
	};
	class RHS_InternalFire: SmallFireF
	{
		coreIntensity=800;
		coreDistance=0.40000001;
		damageTime=0.1;
		constantDistance=0.02;
		damageType="Fire";
	};
	class RHS_Incendiary_Fire: SmallFireF
	{
		coreIntensity=300;
		coreDistance=0.89999998;
		damageTime=1.1;
		constantDistance=0.02;
		damageType="Fire";
	};
	class RHS_Incendiary_FireSparks: Default
	{
		interval=0.050000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=3.5;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=1;
		weight=1.85;
		volume=1;
		rubbing=0.17;
		size[]={0.1,0.1,0.1,0.1,0.1,0.079999998,0.079999998,0.079999998,0.079999998,0};
		color[]=
		{
			{1,0.30000001,0.30000001,-6.5},
			{1,0.30000001,0.30000001,-6},
			{1,0.30000001,0.30000001,-5.5},
			{1,0.30000001,0.30000001,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.55000001;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=2.5;
		positionVar[]={0,0.2,0};
		MoveVelocityVar[]={0.2,1,0.2};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0.30000001;
		randomDirectionIntensityVar=0.15000001;
		coreIntensity=0.1;
		coreDistance=4.5;
		damageTime=1.1;
		constantDistance=0.02;
		damageType="Fire";
	};
	class RHS_Rocket_Fired: Default
	{
		interval="0.003";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=7;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0;
		size[]={3,9};
		color[]=
		{
			{0,0,0,0.15000001},
			{0.050000001,0.050000001,0.050000001,0.1},
			{0.1,0.1,0.1,0.02}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=3;
		positionVar[]={0.60000002,0.60000002,0.60000002};
		MoveVelocityVar[]={0.80000001,0.80000001,0.80000001};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RocketBackfireRPGNT;
	class RHS_Rocket_Init_Fire: Default
	{
		interval=0.00089999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=1;
		particleFSLoop=0;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.18000001;
		moveVelocity[]=
		{
			"-0.16 * speedX + parentSpeedX",
			"-0.16 * speedY + parentSpeedY",
			"-0.16 * speedZ + parentSpeedZ"
		};
		rotationVelocity=1;
		weight=441.27499;
		volume=381;
		rubbing=0;
		size[]={0.1,0.5,1.5,1.8,1,0};
		sizeCoef=1;
		color[]=
		{
			{0.40000001,0.40000001,0.40000001,0.40000001},
			{0.44999999,0.44999999,0.44999999,0.34999999},
			{0.5,0.5,0.5,0.16},
			{0.55000001,0.55000001,0.55000001,0.12},
			{0.60000002,0.60000002,0.60000002,0.02}
		};
		colorCoef[]={1.2,1.2,1.2,0.89999998};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.5;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.5,0.1,0.5};
		rotationVelocityVar=30;
		position[]={0,0,-1};
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class PylonBacksmoke;
	class RHS_Rocket_Init_Smoke: PylonBacksmoke
	{
		interval=0.001;
		lifeTime=7;
		rubbing=0;
		rotationVelocityVar=4;
		sizeCoef=2;
		colorCoef[]={0,0,0,0.2};
		randomDirectionIntensity=0.40000001;
		moveVelocity[]=
		{
			"-0.25 * speedX + parentSpeedX",
			"-0.25 * speedY + parentSpeedY",
			"-0.25 * speedZ + parentSpeedZ"
		};
		positionVar[]={1,1,1};
		position[]={0,0,-1.2};
	};
	class ExhaustSmoke1PlaneHP;
	class RHS_ExhaustSmoke1PlaneHP: Default
	{
		interval="0.001 * (engineDamage interpolate [0,2.5,2,8]) * (vehicleSpeedSize interpolate [0,200,10,1])";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime="0.3 * (engineDamage interpolate [0,1,3,12])";
		moveVelocity[]=
		{
			"speedX",
			"speedY",
			"speedZ"
		};
		rotationVelocity=1;
		weight=1.4;
		volume=1;
		rubbing=0.1;
		size[]={0.30000001,3};
		sizeCoef="1.4 * (engineDamage interpolate [0,1,2,6])";
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.12},
			{0.1,0.1,0.1,0.039999999},
			{0.2,0.2,0.2,0.001},
			{0.30000001,0.30000001,0.30000001,9.9999997e-005}
		};
		colorCoef[]=
		{
			"15",
			"15",
			"15",
			"((intensity*1.4)/2 * (engineDamage interpolate [0.0,0.4,1.5,6])) * (vehicleSpeedSize interpolate [0,200,0.51,1])"
		};
		animationSpeed[]={2,1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.25;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.1;
		lifeTimeVar="0.15 * (engineDamage interpolate [0,1,1,4])";
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]=
		{
			"1 * (engineDamage interpolate [0,1,1,2.5])",
			"1 * (engineDamage interpolate [0,1,2,2.5])",
			"1 * (engineDamage interpolate [0,1,1,2.5])"
		};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RHS_HeavyBombSmk1: Default
	{
		interval=0.0070000002;
		circleRadius=9;
		circleVelocity[]={0.89999998,0,0.89999998};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=26;
		moveVelocity[]={0,12,0};
		rotationVelocity=1;
		weight=1.1;
		volume=1;
		rubbing=0.15000001;
		size[]={6,40};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.5,0.5,0.5,0.22},
			{0.60000002,0.60000002,0.60000002,0.15000001},
			{0.80000001,0.80000001,0.80000001,0.050000001}
		};
		animationSpeed[]={1.5,0.5,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={0.2,5.1999998,0.2};
		MoveVelocityVar[]={0.5,22,0.5};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class RHS_HeavyBombSmk2: RHS_HeavyBombSmk1
	{
		interval=0.0049999999;
		circleRadius=6.5;
		circleVelocity[]={8,0,8};
		lifeTime=29;
		moveVelocity[]={0,6,0};
		rotationVelocity=1;
		weight=1.175;
		volume=1;
		rubbing=0.15000001;
		size[]={12,26};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.5,0.5,0.5,0.22},
			{0.60000002,0.60000002,0.60000002,0.090000004},
			{0.80000001,0.80000001,0.80000001,0.0099999998}
		};
		animationSpeed[]={1.5,0.5,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		lifeTimeVar=0.5;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=20;
		sizeVar=1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class RHS_HeavyBombSmk3: RHS_HeavyBombSmk1
	{
		interval=0.02;
		circleRadius=7;
		circleVelocity[]={7,0,7};
		lifeTime=32;
		moveVelocity[]={0,2,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0.15000001;
		size[]={18,25};
		color[]=
		{
			{0.5,0.5,0.5,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.15000001},
			{0.69999999,0.69999999,0.69999999,0.059999999},
			{1,1,1,0.0099999998}
		};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		lifeTimeVar=2;
		positionVar[]={3,1,3};
		MoveVelocityVar[]={7,0.5,7};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class RHS_BombExp1: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,2.5,0};
		rotationVelocity=0;
		weight=2;
		volume=1;
		rubbing=0.1;
		size[]={25,38};
		color[]=
		{
			{1,1,1,-20},
			{1,1,1,-15},
			{1,1,1,-10},
			{1,1,1,-6},
			{1,1,1,-2}
		};
		animationSpeed[]={0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={5,6,5};
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=25;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class CircleDustTank;
	class CircleDustTankL;
	class rhs_CircleDustTank: CircleDustTank
	{
		interval=0.0049999999;
		color[]=
		{
			{0.205,0.185,0.15000001,0.039999999},
			{0.205,0.185,0.15000001,0.02},
			{0.205,0.185,0.15000001,0.0049999999}
		};
		weight=0.050999999;
		MoveVelocityVar[]={3.5,0.5,3.5};
		lifeTime=27.799999;
	};
	class rhs_CircleDustTankL: CircleDustTankL
	{
		interval=0.0080000004;
	};
};
class CfgLights
{
	class RHS_LightNuke
	{
		diffuse[]={0.40000001,0.28,0.15000001};
		color[]={1500,1200,1000};
		ambient[]={1500,1200,1000};
		brightness=10000000;
		size=1;
		intensity=450000;
		daylight=1;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0.5;
			constant=0;
			linear=0;
			quadratic=0.30000001;
			hardLimitStart=1500;
			hardLimitEnd=3000;
		};
		position[]={0,0,0};
	};
	class RHS_KPVT_Light
	{
		diffuse[]={0.40000001,0.28,0.15000001};
		color[]={1,0.5,0.2};
		ambient[]={0.80000001,0.60000002,0.2};
		brightness=0.02;
		size=1;
		intensity=45;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0.5;
			constant=0;
			linear=0;
			quadratic=0.30000001;
			hardLimitStart=15;
			hardLimitEnd=30;
		};
		position[]={0,0,0};
	};
	class RHS_3D17SparksLight
	{
		diffuse[]={0.93699998,0.80000001,0.69999999};
		color[]={0.93699998,0.80000001,0.69999999};
		ambient[]={0.93699998,0.80000001,0.69999999};
		brightness="10 + random 40";
		size=1;
		intensity=100;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=40;
			hardLimitEnd=80;
		};
		position[]={0,0,0};
	};
	class RHS_3D17ExplosionLight
	{
		lifetime=0.2;
		diffuse[]={0.93699998,0.69999999,0.60000002};
		color[]={0.93699998,0.69999999,0.60000002};
		ambient[]={0.93699998,0.69999999,0.60000002};
		brightness=1000;
		size=1;
		intensity=80000;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2.2;
			hardLimitStart=500;
			hardLimitEnd=1000;
		};
		position[]={0,0,0};
	};
};
class RHS_KPVT_Effect
{
	class Light1
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=0.079999998;
	};
	class RHS_KPVT_Flash
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class MachineGunCloud1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class MachineGunDust1
	{
		simulation="particles";
		position[]={0,0,0};
		enabled="(humidity interpolate [0.2,0.20001,1,0]) * isWaterSurface";
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RHS_Tank_Catridge
{
	class RHS_Tank_Catridge
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=5;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class RHS_Tank_CatridgeMed
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class RHS_30mm_Catridge
{
	class RHS_30mm_Catridge
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class RHS_30mm_Catridge_Simulated
{
	class RHS_30mm_Catridge
	{
		simulation="epeparticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RHS_145mm_Catridge
{
	class RHS_30mm_Catridge
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class RHS_ATGM_Cap
{
	class RHS_30mm_Catridge
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class RHS_ATGM_Cap_x2
{
	class RHS_30mm_Catridge
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class RHS_NukeExplosion5
{
	class Cone
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=5;
	};
	class SmokeBottom
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=17;
	};
	class SmokeTop
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
	class Smoke
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=7;
	};
	class Light
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		lifeTime=4;
	};
};
class RHS_ExhaustEffectTankGasBack
{
	class ExhaustsEffect01
	{
		simulation="particles";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
	};
	class ExhaustsEffectWater01
	{
		simulation="particles";
		qualityLevel=2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation="particles";
		qualityLevel=1;
	};
	class ExhaustsEffectWater02
	{
		simulation="particles";
		qualityLevel=2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation="particles";
		qualityLevel=1;
	};
};
class RHS_FAE_Explosion
{
	class Light1
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MortarExp1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MortarSmoke1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RHS_3D17ParticleTail
{
	class RHS_3D17TrailEffect
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime="2.4 + random 0.5";
		qualityLevel=0;
	};
	class RHS_3D17TrailEffect1: RHS_3D17TrailEffect
	{
		qualityLevel=1;
	};
	class RHS_3D17TrailEffect2: RHS_3D17TrailEffect
	{
		qualityLevel=2;
	};
	class RHS_3D17TrailEffectLong
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime="2.4 + random 0.5";
		qualityLevel=0;
	};
	class RHS_3D17TrailEffectLong1: RHS_3D17TrailEffectLong
	{
		qualityLevel=1;
	};
	class RHS_3D17TrailEffectLong2: RHS_3D17TrailEffectLong
	{
		qualityLevel=2;
	};
	class RHS_3D17SparksLight
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime="0 + random 3";
		qualityLevel=1;
	};
	class RHS_3D17SparksLight2: RHS_3D17SparksLight
	{
		qualityLevel=2;
	};
};
class RHS_3D17ParticleTail_902B: RHS_3D17ParticleTail
{
	class RHS_3D17TrailEffect
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime="2 + random 0.5";
		qualityLevel=0;
	};
	class RHS_3D17TrailEffect1: RHS_3D17TrailEffect
	{
		qualityLevel=1;
	};
	class RHS_3D17TrailEffect2: RHS_3D17TrailEffect
	{
		qualityLevel=2;
	};
	class RHS_3D17TrailEffectLong
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime="2 + random 0.5";
		qualityLevel=0;
	};
	class RHS_3D17TrailEffectLong1: RHS_3D17TrailEffectLong
	{
		qualityLevel=1;
	};
	class RHS_3D17TrailEffectLong2: RHS_3D17TrailEffectLong
	{
		qualityLevel=2;
	};
	class RHS_3D17SparksLight
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime="0 + random 3";
		qualityLevel=1;
	};
};
class RHS_3D17ParticleLight
{
	class RHS_3D17SparksLight
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0.001;
		interval=1;
		lifeTime="1 + random 2";
	};
};
class RHS_3D17Effect
{
	class ExplosionLight
	{
		simulation="light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ExplosionSparksBig
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ExplosionSparksSlow
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ExplosionSparksTail
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ExplosionSparksSmall
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=0;
	};
	class ExplosionSparksSmall1: ExplosionSparksSmall
	{
		lifeTime=0.075000003;
		qualityLevel=1;
	};
	class ExplosionSparksSmall2: ExplosionSparksSmall
	{
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ExplosionSparksBack
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class ExplosionCloud
	{
		simulation="particles";
		position[]={0,0,0.5};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeExp1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
};
class RHS_3D17Effect_902B
{
	class ExplosionLight
	{
		simulation="light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ExplosionSparksBig
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ExplosionSparksSlow
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ExplosionSparksTail
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ExplosionSparksSmall
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=0;
	};
	class ExplosionSparksBack
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class ExplosionSparksSmall1: ExplosionSparksSmall
	{
		lifeTime=0.075000003;
		qualityLevel=1;
	};
	class ExplosionSparksSmall2: ExplosionSparksSmall
	{
		lifeTime=0.1;
		qualityLevel=2;
	};
	class ExplosionCloud
	{
		simulation="particles";
		position[]={0,0,0.5};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeExp1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
};
class RHS_Airburst_Explosion
{
	class LightExp
	{
		simulation="light";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion2
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Smoke1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RHS_D30_Fired
{
	class CannonFired3
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class CannonFired3Med
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class CannonFiredDust1
	{
		simulation="particles";
		enabled="(distToSurface interpolate [10.099,10.1,1,-1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CannonFiredDust2
	{
		simulation="particles";
		enabled="(distToSurface interpolate [10.099,10.1,1,-1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class CannonFiredDust3
	{
		simulation="particles";
		enabled="(distToSurface interpolate [10.099,10.1,1,-1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class RHS_AutoCannonFired
{
	class MachineGun2
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
	class Light1
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=0.079999998;
	};
	class AutoCannonFired
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RHS_2A42_Fired
{
	class Light1
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=0.079999998;
	};
	class AutoCannonFired
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RHS_YakB_Catridge
{
	class MachineGunCartridge1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class MachineGunCartridge1Med
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class RHS_HeavyBombCrater
{
	class BombSmk1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1.7;
	};
	class BombSmk2
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1.7;
	};
	class BombSmk3
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
	class BombDust
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class RHS_HeavyBombExplosion
{
	class ExpSparksBig
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ShardsBig
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig1
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig2
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig3
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn1
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn2
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn3
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExpBig
	{
		simulation="light";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1Big
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BombExp1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke1Big
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1Big
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RHS_MissileExplosion
{
	class ExpSparksBig
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ShardsBig
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig1
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig2
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBig3
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn1
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn2
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBigBurn3
	{
		simulation="particles";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExpBig
	{
		simulation="light";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1Big
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion2Big
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class BombExp1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke1Big
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1Big
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RHS_CounterMeasureFlare
{
	class Cmeasures1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4.5;
		qualityLevel=2;
	};
	class Cmeasures1M
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4.5;
		qualityLevel=1;
	};
	class Cmeasures1L
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4.5;
		qualityLevel=0;
	};
	class Cmeasures2
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3.2;
	};
	class Light1
	{
		simulation="light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class RHS_Incendiary_Bomb
{
	class Flare1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class Fire
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class FireSparks
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
};
class RHS_Rocket_Fired
{
	class Light1
	{
		simulation="light";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class Missile
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RHS_Rocket_Init
{
	class RocketBackfire1
	{
		simulation="particles";
		start=1;
	};
	class MissileDARSmoke: RocketBackfire1
	{
		simulation="particles";
	};
};
class RHS_ExhaustsEffectPlaneHP
{
	class ExhaustsEffect01
	{
		simulation="particles";
	};
	class ExhaustsEffectRefract01
	{
		simulation="particles";
	};
};
class RHS_ATGM_Pusher_Eject
{
	class ATGM_Pusher
	{
		simulation="particles";
		start=1;
	};
};
class RHS_125mm_Sabot_Eject
{
	class FX_1
	{
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		enabled="flyTime interpolate [0,0.2,1,-1]";
	};
	class FX_2: FX_1
	{
	};
	class FX_3: FX_1
	{
	};
};
class CfgMagazineWells
{
	class RHS_Cannon_100mm_2A70
	{
		RHS_125mm_AP_Magazines[]=
		{
			"rhs_mag_3UOF17_22",
			"rhs_mag_3UOF19_22",
			"rhs_mag_3UOF191_22"
		};
		RHS_125mm_ATGM_Magazines[]=
		{
			"rhs_mag_9m117_3",
			"rhs_mag_9m117_8",
			"rhs_mag_9m117m_3",
			"rhs_mag_9m117m_8",
			"rhs_mag_9m117m1_3",
			"rhs_mag_9m117m1_8"
		};
	};
	class RHS_Cannon_125mm_D81
	{
		RHS_125mm_AP_Magazines[]=
		{
			"rhs_mag_3bm9",
			"rhs_mag_3bm12",
			"rhs_mag_3bm15",
			"rhs_mag_3bm17",
			"rhs_mag_3bm22",
			"rhs_mag_3bm26",
			"rhs_mag_3bm29",
			"rhs_mag_3bm32",
			"rhs_mag_3bm42",
			"rhs_mag_3bm46",
			"rhs_mag_3bm9_10",
			"rhs_mag_3bm12_10",
			"rhs_mag_3bm15_10",
			"rhs_mag_3bm17_10",
			"rhs_mag_3bm17_14",
			"rhs_mag_3bm22_10",
			"rhs_mag_3bm22_14",
			"rhs_mag_3bm26_10",
			"rhs_mag_3bm26_7",
			"rhs_mag_3bm29_10",
			"rhs_mag_3bm29_7",
			"rhs_mag_3bm32_10",
			"rhs_mag_3bm32_7",
			"rhs_mag_3bm42_10",
			"rhs_mag_3bm42_7",
			"rhs_mag_3bm42m_10",
			"rhs_mag_3bm46_10",
			"rhs_mag_3bm46_8"
		};
		RHS_125mm_HEAT_Magazines[]=
		{
			"rhs_mag_3bk12",
			"rhs_mag_3bk14",
			"rhs_mag_3bk18",
			"rhs_mag_3bk18m",
			"rhs_mag_3bk21",
			"rhs_mag_3bk29",
			"rhs_mag_3bk31",
			"rhs_mag_dummy",
			"rhs_mag_3bk12_8",
			"rhs_mag_3bk14_8",
			"rhs_mag_3bk14_6",
			"rhs_mag_3bk18_8",
			"rhs_mag_3bk18_6",
			"rhs_mag_3bk18m_8",
			"rhs_mag_3bk18m_6",
			"rhs_mag_3bk21_8",
			"rhs_mag_3bk29_8",
			"rhs_mag_3bk31_8",
			"rhs_mag_3bk31_6",
			"rhs_mag_3bk31_3"
		};
		RHS_125mm_HE_Magazines[]=
		{
			"rhs_mag_3of11",
			"rhs_mag_3of26",
			"rhs_mag_3of11_6",
			"rhs_mag_3of26_7",
			"rhs_mag_3of26_6",
			"rhs_mag_3of26_5"
		};
		RHS_125mm_ATGM_Magazines[]=
		{
			"rhs_mag_9m112",
			"rhs_mag_9m112m",
			"rhs_mag_9m112m2",
			"rhs_mag_9m124",
			"rhs_mag_9m128",
			"rhs_mag_9m119",
			"rhs_mag_9m119rx",
			"rhs_mag_9m119m",
			"rhs_mag_9m119f",
			"rhs_mag_9m112_6",
			"rhs_mag_9m112m_6",
			"rhs_mag_9m112m_4",
			"rhs_mag_9m112m2_6",
			"rhs_mag_9m124_6",
			"rhs_mag_9m128_6",
			"rhs_mag_9m119_4",
			"rhs_mag_9m119_6",
			"rhs_mag_9m119rx_6",
			"rhs_mag_9m119m_6",
			"rhs_mag_9m119f_6"
		};
	};
	class RHS_Cannon_125mm_2A46M
	{
		RHS_125mm_ATGM_Magazines[]=
		{
			"rhs_mag_9m112",
			"rhs_mag_9m112m",
			"rhs_mag_9m112m2",
			"rhs_mag_9m124",
			"rhs_mag_9m128",
			"rhs_mag_9m119",
			"rhs_mag_9m119rx",
			"rhs_mag_9m119m",
			"rhs_mag_9m119f",
			"rhs_mag_9m112_6",
			"rhs_mag_9m112m_6",
			"rhs_mag_9m112m_4",
			"rhs_mag_9m112m2_6",
			"rhs_mag_9m124_6",
			"rhs_mag_9m128_6",
			"rhs_mag_9m119_6",
			"rhs_mag_9m119rx_6",
			"rhs_mag_9m119m_6",
			"rhs_mag_9m119f_6"
		};
	};
	class RHS_Cannon_125mm_2A46M_5
	{
		RHS_125mm_AP_Magazines[]=
		{
			"rhs_mag_3bm59",
			"rhs_mag_3bm60",
			"rhs_mag_3bm59_10",
			"rhs_mag_3bm60_10"
		};
	};
	class RHS_Cannon_125mm_2A82
	{
		RHS_125mm_AP_Magazines[]=
		{
			"rhs_mag_3bm69",
			"rhs_mag_3bm70",
			"rhs_mag_3bm69_10",
			"rhs_mag_3bm69_17",
			"rhs_mag_3bm70_10"
		};
	};
	class RHS_AutoCannon_30mm_2A42_AP
	{
		RHS_30mm_AP_Magazines[]=
		{
			"rhs_mag_3ubr6_100",
			"rhs_mag_3ubr6_120",
			"rhs_mag_3ubr6_125",
			"rhs_mag_3ubr6_150",
			"rhs_mag_3ubr6_160",
			"rhs_mag_3ubr6_195",
			"rhs_mag_3ubr6_227",
			"rhs_mag_3ubr6_230",
			"rhs_mag_3ubr6_250",
			"rhs_mag_3ubr8_100",
			"rhs_mag_3ubr8_120",
			"rhs_mag_3ubr8_125",
			"rhs_mag_3ubr8_150",
			"rhs_mag_3ubr8_160",
			"rhs_mag_3ubr8_195",
			"rhs_mag_3ubr8_227",
			"rhs_mag_3ubr8_230",
			"rhs_mag_3ubr8_250",
			"rhs_mag_3ubr11_100",
			"rhs_mag_3ubr11_120",
			"rhs_mag_3ubr11_125",
			"rhs_mag_3ubr11_150",
			"rhs_mag_3ubr11_160",
			"rhs_mag_3ubr11_195",
			"rhs_mag_3ubr11_227",
			"rhs_mag_3ubr11_230",
			"rhs_mag_3ubr11_250"
		};
	};
	class RHS_AutoCannon_30mm_2A42_HE
	{
		RHS_30mm_HE_Magazines[]=
		{
			"rhs_mag_3uor6_125",
			"rhs_mag_3uor6_150",
			"rhs_mag_3uor6_180",
			"rhs_mag_3uor6_200",
			"rhs_mag_3uor6_230",
			"rhs_mag_3uor6_237",
			"rhs_mag_3uor6_250",
			"rhs_mag_3uor6_305",
			"rhs_mag_3uor6_305",
			"rhs_mag_3uor6_340",
			"rhs_mag_3uof8_125",
			"rhs_mag_3uof8_150",
			"rhs_mag_3uof8_180",
			"rhs_mag_3uof8_200",
			"rhs_mag_3uof8_230",
			"rhs_mag_3uof8_237",
			"rhs_mag_3uof8_250",
			"rhs_mag_3uof8_305",
			"rhs_mag_3uof8_305",
			"rhs_mag_3uof8_340"
		};
	};
};
class CfgVehicles
{
	class House;
	class ThingX;
	class rhs_casing_30mm: House
	{
		nameSound="";
		accuracy=0.2;
		armor=5;
	};
	class rhs_casing_122mm: ThingX
	{
		editorCategory="EdCat_Things";
	};
	class rhs_weap_9m113_used: rhs_casing_122mm
	{
	};
	class rhs_weap_9m111_used: rhs_weap_9m113_used
	{
	};
	class rhs_weap_9K115_launcher_used: rhs_weap_9m111_used
	{
	};
	class rhs_weap_9K133_launcher_used: rhs_weap_9m111_used
	{
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
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
	class RHS_ZU23_base: StaticCannon
	{
		displayname="ZU-23-2";
		icon="\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_zu23_CA.paa";
		memoryPointsGetInCargo="pos_cargo_dir";
		memoryPointsGetInCargoDir="pos_cargo";
		memoryPointsGetInDriver="pos_driver_dir";
		memoryPointsGetInDriverDir="pos_driver";
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
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				minElev=-10;
				maxElev=85;
				initElev=0;
				weapons[]=
				{
					"rhs_weap_2A14"
				};
				canUseScanner=0;
				magazines[]=
				{
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100"
				};
				selectionFireAnim="zasleh";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memoryPointGun[]=
				{
					"muzzle_1",
					"muzzle_2"
				};
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
			};
		};
		class Damage
		{
		};
	};
	class RHS_ZU23_MSV: RHS_ZU23_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class RHS_ZU23_VDV: RHS_ZU23_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class RHS_ZU23_VMF: RHS_ZU23_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class AT_01_base_F: StaticMGWeapon
	{
	};
	class rhs_nsv_tripod_base: StaticMGWeapon
	{
		icon="\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\icomap_kord_CA.paa";
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
				selectionFireAnim="zasleh";
				minElev=-15;
				maxelev=15;
				maxturn=30;
				minturn=-30;
				weapons[]=
				{
					"rhs_weap_nsvt_effects"
				};
				magazines[]=
				{
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50"
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
				"RHS_NSV_Gun_Bag",
				"RHS_NSV_Tripod_Bag"
			};
		};
	};
	class RHS_NSV_TriPod_MSV: rhs_nsv_tripod_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class RHS_NSV_TriPod_VDV: rhs_nsv_tripod_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class RHS_NSV_TriPod_VMF: rhs_nsv_tripod_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class RHS_NSV_TriPod_INS: rhs_nsv_tripod_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class RHS_KORD_Base: rhs_nsv_tripod_base
	{
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord_CA.paa";
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
				minElev=-20;
				maxelev=15;
				weapons[]=
				{
					"rhs_weap_KORD"
				};
				magazines[]=
				{
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50"
				};
				minTurn=-60;
				maxTurn=60;
				initTurn=0;
				selectionFireAnim="zasleh";
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
		armorStructural=10;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"rhs_Kord_Gun_Bag",
				"rhs_Kord_Tripod_Bag"
			};
		};
	};
	class rhs_KORD_MSV: RHS_KORD_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_KORD_VDV: RHS_KORD_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_KORD_VMF: RHS_KORD_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_KORD_INS: RHS_KORD_Base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class RHS_KORD_high_base: RHS_KORD_Base
	{
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord6u16sp_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-7;
				maxelev=45;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
			};
		};
	};
	class rhs_KORD_high_MSV: RHS_KORD_high_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_KORD_high_VDV: RHS_KORD_high_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_KORD_high_VMF: RHS_KORD_high_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_KORD_high_INS: RHS_KORD_high_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class rhs_DSHKM_base: StaticMGWeapon
	{
		icon="\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_DShKM_CA.paa";
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
				minElev=-20;
				maxelev=60;
				minturn=-180;
				maxturn=180;
				weapons[]=
				{
					"rhs_weap_DSHKM"
				};
				magazines[]=
				{
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50"
				};
				selectionFireAnim="zasleh";
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
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"rhs_DShkM_Gun_Bag",
				"rhs_DShkM_TripodHigh_Bag"
			};
		};
	};
	class rhs_DSHKM_ins: rhs_DSHKM_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class rhs_DSHkM_Mini_TriPod_base: rhs_DSHKM_base
	{
		displayname="DSHkM Minitripod";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initturn=0;
				maxturn=90;
				minturn=-90;
				maxelev=20;
				memorypointsgetingunner="pos_gunner";
				memorypointsgetingunnerdir="pos_gunner_dir";
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"rhs_DShkM_Gun_Bag",
				"rhs_DShkM_TripodLow_Bag"
			};
		};
	};
	class rhs_DSHKM_Mini_TriPod_ins: rhs_DSHkM_Mini_TriPod_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class RHS_AGS30_TriPod_base: StaticGrenadeLauncher
	{
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_ags_CA.paa";
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
				minElev=-10;
				maxelev=32;
				minTurn=-78;
				maxTurn=78;
				initTurn=0;
				weapons[]=
				{
					"RHS_weap_AGS30"
				};
				magazines[]=
				{
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30"
				};
				selectionFireAnim="zasleh";
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
				class ViewOptics: ViewOptics
				{
					initFov=0.25;
					minFov=0.25;
					maxFov=0.25;
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
				"RHS_AGS30_Gun_Bag",
				"RHS_AGS30_Tripod_Bag"
			};
		};
	};
	class RHS_AGS30_TriPod_MSV: RHS_AGS30_TriPod_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class RHS_AGS30_TriPod_VDV: RHS_AGS30_TriPod_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"RHS_mag_GPD30_30",
					"RHS_mag_GPD30_30",
					"RHS_mag_GPD30_30",
					"RHS_mag_GPD30_30"
				};
			};
		};
	};
	class RHS_AGS30_TriPod_VMF: RHS_AGS30_TriPod_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class RHS_AGS30_TriPod_INS: RHS_AGS30_TriPod_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"RHS_mag_VOG17m_30",
					"RHS_mag_VOG17m_30",
					"RHS_mag_VOG17m_30",
					"RHS_mag_VOG17m_30"
				};
			};
		};
	};
	class rhs_SPG9_base: AT_01_base_F
	{
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icon_spg9_CA.paa";
		nameSound="cannon";
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
		hiddenSelections[]={};
		class Damage
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_SPG9"
				};
				magazines[]=
				{
					"rhs_mag_PG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V"
				};
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2",
					"TankGunnerOptics1"
				};
				minTurn=-45;
				maxTurn=45;
				initTurn=0;
				minElev=-10;
				maxElev=40;
				initElev=0;
				ejectDeadGunner=0;
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
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.111;
					minFov=0.111;
					maxFov=0.111;
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
				"rhs_SPG9_Gun_Bag",
				"rhs_SPG9_Tripod_Bag"
			};
		};
	};
	class rhs_SPG9M_base: rhs_SPG9_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_OG9VM",
					"rhs_mag_OG9VM",
					"rhs_mag_OG9VM",
					"rhs_mag_OG9VM",
					"rhs_mag_OG9VM",
					"rhs_mag_OG9VM",
					"rhs_mag_OG9VM",
					"rhs_mag_PG9N",
					"rhs_mag_PG9N",
					"rhs_mag_PG9N",
					"rhs_mag_PG9N",
					"rhs_mag_PG9VNT",
					"rhs_mag_PG9VNT"
				};
				class OpticsIn
				{
					class HEAT: ViewOptics
					{
					};
					class HE: ViewOptics
					{
					};
				};
			};
		};
	};
	class rhs_SPG9_INS: rhs_SPG9_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class rhs_SPG9M_MSV: rhs_SPG9M_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_SPG9M_VDV: rhs_SPG9M_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_SPG9M_VMF: rhs_SPG9M_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_Igla_AA_pod_Base: StaticAAWeapon
	{
		mapsize=2.8;
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_igla_aa_pod_CA.paa";
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				gunneropticseffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				weapons[]=
				{
					"rhs_weap_Igla_twice"
				};
				magazines[]=
				{
					"rhs_mag_2Rnd_Igla",
					"rhs_mag_2Rnd_Igla",
					"rhs_mag_2Rnd_Igla",
					"rhs_mag_2Rnd_Igla",
					"rhs_mag_2Rnd_Igla"
				};
				maxelev=120;
				memorypointsgetingunner="pos_gunner";
				memorypointsgetingunnerdir="pos_gunner_dir";
				minelev=-10;
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
			class RHS_EventHandlers
			{
				fired="_this call rhs_fnc_fired_IglaAA";
			};
		};
	};
	class rhs_Igla_AA_pod_msv: rhs_Igla_AA_pod_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_Igla_AA_pod_vdv: rhs_Igla_AA_pod_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_Igla_AA_pod_vmf: rhs_Igla_AA_pod_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_Igla_AA_pod_ins: rhs_Igla_AA_pod_Base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class rhs_2b14_82mm_Base: StaticMortar
	{
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		displayname="$STR_rhs_DN_2B14";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
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
				class ViewOptics;
				weapons[]=
				{
					"rhs_weap_2b14"
				};
				magazines[]=
				{
					"rhs_mag_3vo18_10",
					"rhs_mag_3vo18_10",
					"rhs_mag_3vs25m_10",
					"rhs_mag_d832du_10"
				};
				elevationMode=1;
				initCamElev=0;
				minCamElev=-15;
				maxCamElev=35;
				initElev=0;
				initTurn=0;
				minElev=-15;
				maxElev=30;
				minTurn=-180;
				maxTurn=180;
				usePiP=2;
			};
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
				"rhs_Podnos_Gun_Bag",
				"rhs_Podnos_Bipod_Bag"
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
					class rhs_mag_3vo18_10
					{
						name="$STR_rhs_mag_3vo18";
						value="rhs_mag_3vo18_10";
						defaultValue="rhs_mag_3vo18_10";
					};
				};
			};
			class rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #2 slot [Illumination rounds]";
				property="rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_3vs25m_10
					{
						name="$STR_rhs_mag_3vs25m";
						value="rhs_mag_3vs25m_10";
						defaultValue="rhs_mag_3vs25m_10";
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
				tooltip="Define type of shell for #3 slot [Smoke rounds]";
				property="rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_d832du_10
					{
						name="$STR_rhs_mag_d832du";
						value="rhs_mag_d832du_10";
						defaultValue="rhs_mag_d832du_10";
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
	class rhs_2b14_82mm_msv: rhs_2b14_82mm_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_2b14_82mm_vdv: rhs_2b14_82mm_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_2b14_82mm_vmf: rhs_2b14_82mm_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_2b14_82mm_ins: rhs_2b14_82mm_Base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class rhs_Metis_Base: AT_01_base_F
	{
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"rhs_Metis_Gun_Bag",
				"rhs_Metis_Tripod_Bag"
			};
		};
		displayname="$STR_rhs_DN_AT13M";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_metis_at13_CA.paa";
		hiddenSelections[]={};
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
				weapons[]=
				{
					"rhs_weap_9K115_2_launcher"
				};
				magazines[]=
				{
					"rhs_mag_9M131m",
					"rhs_mag_9M131m",
					"rhs_mag_9M131m",
					"rhs_mag_9M131f"
				};
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memorypointgunneroptics="gunnerview";
				minTurn=-45;
				maxTurn=45;
				initTurn=0;
				minElev=-10;
				maxElev=40;
				initElev=0;
				ejectDeadGunner=0;
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
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.078000002;
					minFov=0.078000002;
					maxFov=0.078000002;
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={4,5};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				reloaded="[_this select 0,_this select 1,_this select 4,'rhs_weap_9K115_2_launcher','rhs_weap_9K115_launcher_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
			};
		};
	};
	class rhs_Metis_9k115_2_msv: rhs_Metis_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_Metis_9k115_2_vdv: rhs_Metis_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_Metis_9k115_2_vmf: rhs_Metis_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_Metis_9k115_2_ins: rhs_Metis_Base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class rhs_Metis_9k115_1_ins: rhs_Metis_Base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
		displayname="$STR_rhs_DN_AT13";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_9K115_1_launcher"
				};
				magazines[]=
				{
					"rhs_mag_9M131",
					"rhs_mag_9M131",
					"rhs_mag_9M131",
					"rhs_mag_9M131"
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				reloaded="[_this select 0,_this select 1,'rhs_weap_9K115_1_launcher','rhs_weap_9K115_launcher_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
			};
		};
	};
	class rhs_D30_base: StaticCannon
	{
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3"
		};
		accuracy=0.12;
		cost=10000;
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		artilleryScanner=1;
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_d30_CA.paa";
		typicalCargo[]={};
		driveOnComponent[]=
		{
			"leftw",
			"slide"
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_D30"
				};
				magazines[]=
				{
					"rhs_mag_3of56_10",
					"rhs_mag_d462_2",
					"rhs_mag_s463_2",
					"rhs_mag_3of69m_2"
				};
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				elevationMode=1;
				maxHorizontalRotSpeed=0.34999999;
				maxVerticalRotSpeed=0.25;
				minElev=-9;
				maxelev=80;
				minTurn=-180;
				maxTurn=180;
				class ViewOptics: ViewOptics
				{
					initFov=0.096000001;
					minFov=0.096000001;
					maxFov=0.096000001;
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
		tBody=450;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				fired="_this spawn rhs_fnc_fired_d30";
			};
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
					class rhs_mag_3of56_10
					{
						name="$STR_rhs_mag_3of56";
						value="rhs_mag_3of56_10";
						defaultValue="rhs_mag_3of56_10";
					};
					class rhs_mag_of462_10
					{
						name="$STR_rhs_mag_of462";
						value="rhs_mag_of462_10";
						defaultValue="rhs_mag_of462_10";
					};
				};
			};
			class rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #2 slot [Smoke rounds]";
				property="rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_d462_2
					{
						name="$STR_rhs_mag_d462";
						value="rhs_mag_d462_2";
						defaultValue="rhs_mag_d462_2";
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
					class rhs_mag_s463_2
					{
						name="$STR_rhs_mag_s463";
						value="rhs_mag_s463_2";
						defaultValue="rhs_mag_s463_2";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #4 slot [Laser guided rounds]";
				property="rhs_ammoslot_4_type";
				class values
				{
					class rhs_mag_3of69m_2
					{
						name="$STR_rhs_mag_3of69m";
						value="rhs_mag_3of69m_2";
						defaultValue="rhs_mag_3of69m_2";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #4. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_4";
			};
		};
	};
	class rhs_tow_pin: ThingX
	{
		collisionEffect="";
		accuracy=1000;
		animated=0;
		countsForScoreboard=0;
	};
	class rhs_D30_msv: rhs_D30_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_D30_vdv: rhs_D30_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_D30_vmf: rhs_D30_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_D30_ins: rhs_D30_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_of462_10",
					"rhs_mag_d462_2",
					"rhs_mag_s463_2",
					"rhs_mag_3of69m_2"
				};
			};
		};
	};
	class rhs_D30_AT_base: rhs_D30_base
	{
		availableForSupportTypes[]={};
		artilleryScanner=0;
		sensorPosition="gunnerView";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode=0;
				maxVerticalRotSpeed=0.105;
				weapons[]=
				{
					"rhs_weap_D30_at",
					"rhs_weap_fcs_noLRF"
				};
				magazines[]=
				{
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_bk13",
					"rhs_mag_of462",
					"rhs_mag_of462",
					"rhs_mag_of462",
					"rhs_mag_of462",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_caseDeleteTime: rhs_caseDeleteTime
			{
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
					class rhs_mag_3of56_10
					{
						name="$STR_rhs_mag_3of56";
						value="rhs_mag_3of56_10";
						defaultValue="rhs_mag_3of56_10";
					};
					class rhs_mag_of462_10
					{
						name="$STR_rhs_mag_of462";
						value="rhs_mag_of462_10";
						defaultValue="rhs_mag_of462_10";
					};
				};
			};
			class rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #2 slot [Smoke rounds]";
				property="rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_d462_2
					{
						name="$STR_rhs_mag_d462";
						value="rhs_mag_d462_2";
						defaultValue="rhs_mag_d462_2";
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
					class rhs_mag_s463_2
					{
						name="$STR_rhs_mag_s463";
						value="rhs_mag_s463_2";
						defaultValue="rhs_mag_s463_2";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #4 slot [Laser guided rounds]";
				property="rhs_ammoslot_4_type";
				class values
				{
					class rhs_mag_3of69m_2
					{
						name="$STR_rhs_mag_3of69m";
						value="rhs_mag_3of69m_2";
						defaultValue="rhs_mag_3of69m_2";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #4. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_4";
			};
			class rhs_ammoslot_5_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #5 slot [HEAT rounds]";
				property="rhs_ammoslot_5_type";
				class values
				{
					class rhs_mag_bk6m_26
					{
						name="$STR_rhs_mag_bk6m";
						value="rhs_mag_bk6m_26";
						defaultValue="rhs_mag_bk6m_26";
					};
					class rhs_mag_bk13_26
					{
						name="$STR_rhs_mag_bk13";
						value="rhs_mag_bk13_26";
						defaultValue="rhs_mag_bk13_26";
					};
				};
			};
			class rhs_ammoslot_5: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #5. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_5";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				fired="_this spawn rhs_fnc_fired_d30;";
			};
		};
	};
	class rhs_D30_at_msv: rhs_D30_AT_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_D30_at_vdv: rhs_D30_AT_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_D30_at_vmf: rhs_D30_AT_base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_D30_at_ins: rhs_D30_AT_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_bk6m",
					"rhs_mag_of462",
					"rhs_mag_of462",
					"rhs_mag_of462",
					"rhs_mag_of462"
				};
			};
		};
	};
	class rhs_Kornet_Base: AT_01_base_F
	{
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"rhs_Kornet_Gun_Bag",
				"rhs_Kornet_Tripod_Bag"
			};
		};
		displayname="$STR_rhs_DN_kornet";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_metis_at13_CA.paa";
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
		hiddenSelections[]={};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_9K133_launcher"
				};
				magazines[]=
				{
					"rhs_mag_9m133",
					"rhs_mag_9m133",
					"rhs_mag_9m133"
				};
				memorypointgunneroptics="gunnerview";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				maxHorizontalRotSpeed=0.34999999;
				maxVerticalRotSpeed=0.34999999;
				minTurn=-45;
				maxTurn=45;
				initTurn=0;
				minElev=-10;
				maxElev=20;
				initElev=0;
				ejectDeadGunner=0;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-10;
					maxAngleX=20;
					initAngleY=0;
					minAngleY=-60;
					maxAngleY=60;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=5;
					minAngleX=-10;
					maxAngleX=20;
					initAngleY=0;
					minAngleY=-60;
					maxAngleY=60;
					initFov=0.057999998;
					minFov=0.057999998;
					maxFov=0.057999998;
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={4,5};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
					};
					class Medium: Wide
					{
						initFov=0.029200001;
						minFov=0.029200001;
						maxFov=0.029200001;
					};
					class Narrow: Wide
					{
						initFov=0.0175;
						minFov=0.0175;
						maxFov=0.0175;
					};
				};
				class OpticsOut
				{
					class ViewGunner: ViewGunner
					{
					};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				reloaded="[_this select 0,_this select 1,_this select 4,'rhs_weap_9K133_launcher','rhs_weap_9K133_launcher_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
			};
		};
	};
	class rhs_Kornet_9M133_2_msv: rhs_Kornet_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_rifleman"
		};
	};
	class rhs_Kornet_9M133_2_vdv: rhs_Kornet_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vdv_rifleman"
		};
	};
	class rhs_Kornet_9M133_2_vmf: rhs_Kornet_Base
	{
		side=0;
		typicalCargo[]=
		{
			"rhs_vmf_flora_rifleman"
		};
	};
	class rhs_Kornet_9M133_2_ins: rhs_Kornet_Base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
	};
	class rhs_Kornet_9M133_1_ins: rhs_Kornet_Base
	{
		side=2;
		typicalCargo[]=
		{
			"rhs_g_Soldier_F"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_9K115_1_launcher"
				};
				magazines[]=
				{
					"rhs_mag_9M131",
					"rhs_mag_9M131",
					"rhs_mag_9M131",
					"rhs_mag_9M131"
				};
			};
		};
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class RHS_NSV_Gun_Bag: Weapon_Bag_Base
	{
		mass=382;
		icon="\rhsafrf\addons\rhs_heavyweapons\bags\mapIcon_backpack_CA.paa";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
		};
	};
	class RHS_NSV_Tripod_Bag: Weapon_Bag_Base
	{
		mass=250;
		icon="\rhsafrf\addons\rhs_heavyweapons\bags\mapIcon_backpack_CA.paa";
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_NSV_TriPod_MSV";
			base[]=
			{
				"RHS_NSV_Gun_Bag"
			};
		};
	};
	class RHS_DShkM_Gun_Bag: RHS_NSV_Gun_Bag
	{
		mass=380;
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
		};
	};
	class RHS_DShkM_TripodHigh_Bag: RHS_NSV_Tripod_Bag
	{
		mass=420;
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_DSHKM_INS";
			base[]=
			{
				"RHS_DShkM_Gun_Bag"
			};
		};
	};
	class RHS_DShkM_TripodLow_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=300;
		class assembleInfo: assembleInfo
		{
			assembleTo="rhs_DSHKM_Mini_TriPod_ins";
		};
	};
	class RHS_Kord_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		mass=250;
	};
	class RHS_Kord_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=450;
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_Kord_MSV";
			base[]=
			{
				"RHS_Kord_Gun_Bag"
			};
		};
	};
	class RHS_Metis_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		mass=80;
	};
	class RHS_Metis_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=70;
		class assembleInfo: assembleInfo
		{
			assembleTo="rhs_Metis_9k115_2_msv";
			base[]=
			{
				"RHS_Metis_Gun_Bag"
			};
		};
	};
	class RHS_Kornet_Gun_Bag: RHS_NSV_Gun_Bag
	{
		mass=80;
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_heavyweapons\kornet\data\rhs_kornet_tube_CO.paa"
		};
	};
	class RHS_Kornet_Tripod_Bag: RHS_NSV_Tripod_Bag
	{
		mass=70;
		class assembleInfo: assembleInfo
		{
			assembleTo="rhs_Kornet_9M133_2_msv";
			base[]=
			{
				"RHS_Kornet_Gun_Bag"
			};
		};
	};
	class RHS_AGS30_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		mass=100;
	};
	class RHS_AGS30_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=60;
		class assembleInfo: assembleInfo
		{
			assembleTo="RHS_AGS30_TriPod_MSV";
			base[]=
			{
				"RHS_AGS30_Gun_Bag"
			};
		};
	};
	class RHS_SPG9_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		mass=470;
	};
	class RHS_SPG9_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=110;
		class assembleInfo: assembleInfo
		{
			assembleTo="rhs_SPG9_INS";
			base[]=
			{
				"RHS_SPG9_Gun_Bag"
			};
		};
	};
	class RHS_Podnos_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		mass=162;
	};
	class RHS_Podnos_Bipod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		mass=139;
		class assembleInfo: assembleInfo
		{
			assembleTo="rhs_2b14_82mm_msv";
			base[]=
			{
				"RHS_Podnos_Gun_Bag"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class Proxyrhs_9m14: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class ProxyAGS_magazine: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxysts_pkm_mag_proxy: ProxyWeapon
	{
		simulation="maverickweapon";
	};
};
