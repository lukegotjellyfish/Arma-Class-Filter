class CfgPatches
{
	class rhs_c_airweapons
	{
		units[]=
		{
			"rhs_mine_pfm1",
			"rhs_mine_ptm1",
			"rhs_uxo_ao1_1",
			"rhs_uxo_ao1_2",
			"rhs_uxo_ao1_3",
			"rhs_uxo_ptab1m_1",
			"rhs_uxo_ptab1m_2",
			"rhs_uxo_ptab1m_3",
			"rhs_uxo_ptab25m_1",
			"rhs_uxo_ptab25m_2",
			"rhs_uxo_ptab25m_3",
			"rhs_uxo_ptab25ko_1",
			"rhs_uxo_ptab25ko_2",
			"rhs_uxo_ptab25ko_3",
			"rhs_mine_pfm1_module",
			"rhs_mine_ptm1_module",
			"rhs_uxo_ao1_module",
			"rhs_uxo_ptab1m_module",
			"rhs_uxo_ptab25m_module",
			"rhs_uxo_ptab25ko_module"
		};
		weapons[]={};
		versionDesc="RHS";
	};
};
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
	class MissileBase;
	class R_80mm_HE;
	class M_Titan_AT;
	class rhs_ammo_atgmCore_base;
	class rhs_ammo_atgmBase_base: M_Titan_AT
	{
		class EventHandlers;
	};
	class rhs_ammo_base_penetrator;
	class rhs_ammo_cluster_penetrator;
	class Missile_AA_04_F: MissileBase
	{
		class Components;
	};
	class Missile_AGM_02_F: MissileBase
	{
		class Components;
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		class Components;
	};
	class rhs_ammo_s8: R_80mm_HE
	{
		AIAmmoUsageFlags="64+128+512";
		cost=100;
		initTime=0.02;
		sideAirFriction=0.003;
		proxyShape="\A3\Weapons_F_EPC\Ammo\Rocket_03_HE_F.p3d";
		effectsMissile="RHS_Rocket_Fired";
		effectsMissileInit="RHS_Rocket_Init";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		submunitionAmmo="rhs_ammo_s8_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		missileLockMaxDistance=4000;
		missileLockMinDistance=700;
	};
	class rhs_ammo_s8_penetrator: rhs_ammo_base_penetrator
	{
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=26.6667;
	};
	class rhs_ammo_s8DF: rhs_ammo_s8
	{
		AIAmmoUsageFlags="64+128";
		cost=100;
		submunitionAmmo="";
		hit=210;
		indirectHit=85;
		indirectHitRange=20;
		explosive=1;
		allowAgainstInfantry=1;
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=123.905;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		explosionEffects="RHS_FAE_Explosion";
	};
	class rhs_ammo_s8t: rhs_ammo_s8
	{
		AIAmmoUsageFlags="64+128+512";
		submunitionAmmo="rhs_ammo_s8t_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		indirectHit=40;
		indirectHitRange=7;
		craterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
	};
	class rhs_ammo_s8t_penetrator: rhs_ammo_base_penetrator
	{
		warheadName="TandemHEAT";
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=26.6667;
	};
	class rhs_ammo_s13b: rhs_ammo_s8
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\s13_rockets\rhs_r_s13_gasket";
		hit=470;
		indirectHit=240;
		indirectHitRange=10;
		dangerRadiusHit=1250;
		suppressionRadiusHit=120;
		sideAirFriction=0.001;
		thrusttime=0.60000002;
		class CamShakeExplode
		{
			power=24.4;
			duration=2.2;
			frequency=20;
			distance=208.36301;
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
		SoundSetExplosion[]=
		{
			"RocketsHeavy_Exp_SoundSet",
			"RocketsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class rhs_ammo_s13of: rhs_ammo_s13b
	{
		submunitionAmmo="";
		hit=270;
		indirectHit=120;
		indirectHitRange=25;
	};
	class rhs_ammo_s13D: rhs_ammo_s13b
	{
		AIAmmoUsageFlags="64+128";
		cost=100;
		submunitionAmmo="";
		hit=210;
		indirectHit=175;
		indirectHitRange=15;
		explosive=1;
		allowAgainstInfantry=1;
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=123.905;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		explosionEffects="RHS_FAE_Explosion";
	};
	class rhs_ammo_s13DF: rhs_ammo_s13D
	{
		hit=260;
		indirectHit=205;
		indirectHitRange=20;
	};
	class rhs_ammo_s13t: rhs_ammo_s13b
	{
		AIAmmoUsageFlags="64+128+512";
		submunitionAmmo="rhs_ammo_s13t_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		indirectHit=30;
		indirectHitRange=7;
		craterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
	};
	class rhs_ammo_s13t_penetrator: rhs_ammo_base_penetrator
	{
		warheadName="TandemHEAT";
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=40;
	};
	class rhs_ammo_s5: rhs_ammo_s8
	{
		submunitionAmmo="";
		proxyShape="\rhsafrf\addons\rhs_airweapons\s5_rockets\rhs_r_s5m1";
		hit=220;
		indirectHit=20;
		indirectHitRange=9;
		initTime=0.02;
		thrusttime=0.67500001;
		timetolive=12.5;
		sideAirFriction=0.0040000002;
		missileLockMaxDistance=1800;
		class CamShakeExplode
		{
			power=11.4;
			duration=1.6;
			frequency=20;
			distance=140.399;
		};
		class CamShakeHit
		{
			power=57;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.7477;
			duration=1.6;
			frequency=20;
			distance=60.398701;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_s5m1: rhs_ammo_s5
	{
		hit=200;
		indirectHit=40;
		indirectHitRange=12;
	};
	class rhs_ammo_s5k1: rhs_ammo_s5
	{
		AIAmmoUsageFlags="64+128+512";
		submunitionAmmo="rhs_ammo_s5k1_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		indirectHit=40;
		indirectHitRange=7;
		craterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
	};
	class rhs_ammo_s5k1_penetrator: rhs_ammo_base_penetrator
	{
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=8.6666698;
	};
	class rhs_ammo_s5ko: rhs_ammo_s5
	{
		AIAmmoUsageFlags="64+128+512";
		submunitionAmmo="rhs_ammo_s5ko_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_s5ko_penetrator: rhs_ammo_base_penetrator
	{
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=11.4667;
	};
	class rhs_ammo_s5_ub16: rhs_ammo_s5
	{
	};
	class rhs_ammo_s5_ub32: rhs_ammo_s5_ub16
	{
	};
	class rhs_ammo_s24_base: rhs_ammo_s13b
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_s24";
		hit=700;
		indirectHit=140;
		indirectHitRange=30;
		dangerRadiusHit=1250;
		suppressionRadiusHit=150;
		sideAirFriction=0.055;
		maxspeed=430;
		class CamShakeExplode
		{
			power=48;
			duration=3;
			frequency=20;
			distance=523.935;
		};
		class CamShakeHit
		{
			power=240;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.9359801;
			duration=3;
			frequency=20;
			distance=123.935;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		SoundSetExplosion[]=
		{
			"BombsHeavy_Exp_SoundSet",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class rhs_ammo_s24: rhs_ammo_s24_base
	{
		effectsMissile="RHS_Rocket_Fired";
	};
	class rhs_ammo_s24b: rhs_ammo_s24_base
	{
	};
	class rhs_ammo_s25_base: rhs_ammo_s24_base
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_s25of";
		hit=700;
		indirectHit=160;
		indirectHitRange=30;
		sideAirFriction=0.045000002;
		maxspeed=700;
		class CamShakeExplode
		{
			power=68;
			duration=3.5999999;
			frequency=20;
			distance=707.513;
		};
		class CamShakeHit
		{
			power=340;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=4.2940798;
			duration=3.5999999;
			frequency=20;
			distance=147.513;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_s25o: rhs_ammo_s25_base
	{
		proximityExplosionDistance=10;
	};
	class rhs_ammo_s25of: rhs_ammo_s25_base
	{
		hit=650;
		indirectHit=150;
		indirectHitRange=35;
	};
	class rhs_ammo_s25l: rhs_ammo_s25_base
	{
		maxControlRange=7000;
		missileLockMaxDistance=7000;
		missileLockMinDistance=1000;
		weaponLockSystem="4 + 16";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
				};
			};
		};
	};
	class rhs_ammo_s25ld: rhs_ammo_s25l
	{
		maxControlRange=10000;
		missileLockMaxDistance=10000;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
				};
			};
		};
	};
	class rhs_ammo_9m114: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_9m114_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		lockType=0;
		cost=100;
		hit=400;
		indirecthit=26;
		indirecthitrange=4.5999999;
		maneuvrability=13;
		manualcontrol=1;
		maxcontrolrange=5000;
		maxspeed=345;
		sideairfriction=0.30000001;
		thrust=172;
		thrusttime=3.5;
		timetolive=15;
		tracklead=0.94999999;
		trackoversteer=0.94999999;
		whistledist=3;
		proxyShape="\rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m114";
		maverickWeaponIndexOffset=30;
		rhs_saclos=2;
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
	class rhs_ammo_9m114_penetrator: rhs_ammo_base_penetrator
	{
		hit=300;
		caliber=37.333302;
	};
	class rhs_ammo_9m114m: rhs_ammo_9m114
	{
	};
	class rhs_ammo_9m114f: rhs_ammo_9m114
	{
		AIAmmoUsageFlags="64+128";
		allowAgainstInfantry=1;
		cost=100;
		submunitionAmmo="";
		hit=210;
		indirectHit=175;
		indirectHitRange=15;
		explosive=1;
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=403.905;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		explosionEffects="RHS_FAE_Explosion";
	};
	class rhs_ammo_9m114m1: rhs_ammo_9m114
	{
		maxcontrolrange=6000;
	};
	class rhs_ammo_9m114m2: rhs_ammo_9m114
	{
		maxcontrolrange=7000;
	};
	class rhs_ammo_9m120: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_9m120_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		lockType=0;
		cost=180;
		indirecthit=26;
		indirecthitrange=4.5999999;
		maneuvrability=13;
		manualcontrol=1;
		maxcontrolrange=6000;
		maxspeed=550;
		sideairfriction=0.30000001;
		thrust=172;
		thrusttime=3.5;
		timetolive=25;
		tracklead=0;
		trackoversteer=1;
		whistledist=3;
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_9m120";
		maverickWeaponIndexOffset=30;
		rhs_saclos=2;
		rhs_ballisticMode=0;
		rhs_guideMode="RADIO";
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_9m120_penetrator: rhs_ammo_base_penetrator
	{
		warheadName="TandemHEAT";
		caliber=53.333302;
	};
	class rhs_ammo_9m120m: rhs_ammo_9m120
	{
		submunitionAmmo="rhs_ammo_9m120m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maxcontrolrange=8000;
	};
	class rhs_ammo_9m120m_penetrator: rhs_ammo_base_penetrator
	{
		warheadName="TandemHEAT";
		hit=290;
		caliber=63.333302;
	};
	class rhs_ammo_9m120f: rhs_ammo_9m120
	{
		AIAmmoUsageFlags="64+128";
		allowAgainstInfantry=1;
		cost=100;
		submunitionAmmo="";
		hit=210;
		indirectHit=175;
		indirectHitRange=15;
		explosive=1;
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=403.905;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		explosionEffects="RHS_FAE_Explosion";
	};
	class rhs_ammo_9m120o: rhs_ammo_9m120
	{
		AIAmmoUsageFlags="64+128";
		allowAgainstInfantry=1;
		cost=100;
		hit=210;
		indirectHit=175;
		indirectHitRange=15;
		explosive=1;
		proximityExplosionDistance=12;
		simulation="shotMissile";
		triggerDistance=5;
		submunitionAmmo="rhs_ammo_spall";
		submunitionConeType[]=
		{
			"poissondisc",
			100
		};
		submunitionConeAngle=360;
	};
	class rhs_ammo_9m127: rhs_ammo_9m120
	{
	};
	class rhs_ammo_9m127m: rhs_ammo_9m127
	{
		indirecthit=86;
		indirecthitrange=9.6000004;
		cmImmunity=0.89999998;
		proxyShape="\rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m127";
		maverickWeaponIndexOffset=0;
		airlock=1;
		trackoversteer=1;
		trackLead=1;
		lockType=0;
		manualcontrol=0;
		maneuvrability=14;
		weaponLockSystem="1 + 4";
	};
	class rhs_ammo_r27_base: Missile_AA_04_F
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r27r";
		hit=180;
		indirecthit=170;
		indirecthitrange=19;
		proximityExplosionDistance=29;
		submunitionConeType[]=
		{
			"randomcenter",
			30
		};
		submunitionConeAngle=65;
		submunitionAmmo="rhs_ammo_he_fragments";
		submunitionDirectionType="SubmunitionTargetDirection";
		submunitionInitialOffset[]={0,0,0};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1500;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		irlock=1;
		maxspeed=850;
		maxcontrolrange=20000;
		maneuvrability=14;
		airFriction=0.014;
		sideAirFriction=0.18000001;
		simulationstep=0.001;
		initTime=0.1;
		thrust=340;
		thrusttime=5;
		timetolive=120;
	};
	class rhs_ammo_r27r: rhs_ammo_r27_base
	{
		cmimmunity=0.88499999;
		weaponLockSystem="8 + 16";
		missileLockCone=60;
		missileLockMaxDistance=16000;
		missileLockMinDistance=2000;
		missileLockMaxSpeed=972;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=45;
						angleRangeVertical=45;
						groundNoiseDistanceCoef=0.1;
						aimDown=0;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
					};
				};
			};
		};
	};
	class rhs_ammo_r27er: rhs_ammo_r27r
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r27er";
		missileLockMaxDistance=20000;
		timetolive=80;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=45;
						angleRangeVertical=45;
						groundNoiseDistanceCoef=0.1;
						aimDown=0;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
					};
				};
			};
		};
	};
	class rhs_ammo_r27t: rhs_ammo_r27_base
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r27t";
		weaponLockSystem="2 + 16";
		missileLockCone=15;
		missileLockMaxDistance=22000;
		missileLockMinDistance=1700;
		missileLockMaxSpeed=700;
		timetolive=55;
		autoSeekTarget=1;
		lockSeekRadius=1000;
		trackLead=0.5;
		flightProfiles[]=
		{
			"Direct",
			"LoalDistance"
		};
		class Direct
		{
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent=2000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
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
						angleRangeHorizontal=15;
						angleRangeVertical=15;
						maxTrackableSpeed=1200;
						aimDown=0;
					};
				};
			};
		};
	};
	class rhs_ammo_r27et: rhs_ammo_r27t
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r27et";
		timetolive=70;
		missileLockMaxDistance=26000;
	};
	class rhs_ammo_r60_base: Missile_AA_04_F
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r60";
		hit=180;
		indirecthit=50;
		indirecthitrange=9;
		proximityExplosionDistance=12;
		submunitionConeType[]=
		{
			"randomcenter",
			30
		};
		submunitionConeAngle=65;
		submunitionAmmo="rhs_ammo_he_fragments";
		submunitionDirectionType="SubmunitionTargetDirection";
		submunitionInitialOffset[]={0,0,0};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1500;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		irlock=1;
		maxspeed=850;
		maxcontrolrange=7000;
		maneuvrability=34;
		sideAirFriction=0.18000001;
		simulationstep=0.001;
		initTime=0.1;
		thrust=340;
		thrusttime=3;
		timetolive=18;
		weaponLockSystem="2 + 16";
	};
	class rhs_ammo_r60: rhs_ammo_r60_base
	{
		missileLockCone=24;
		missileKeepLockedCone=40;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
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
						angleRangeHorizontal=24;
						angleRangeVertical=24;
						maxTrackableSpeed=835;
						aimDown=0;
					};
				};
			};
		};
	};
	class rhs_ammo_r60m: rhs_ammo_r60_base
	{
		hit=180;
		indirecthit=80;
		indirecthitrange=9;
		maxcontrolrange=10000;
		missileLockCone=34;
		missileKeepLockedCone=60;
		timetolive=23;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
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
						angleRangeHorizontal=40;
						angleRangeVertical=40;
						maxTrackableSpeed=835;
						aimDown=0;
					};
				};
			};
		};
	};
	class rhs_ammo_r73: Missile_AA_04_F
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r73";
		cost=800;
		effectsmissile="missile3";
		cratereffects="AAMissileCrater";
		explosioneffects="AAMissileExplosion";
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		hit=150;
		indirecthit=90;
		indirecthitrange=9;
		initTime=0.1;
		irlock=1;
		maneuvrability=28;
		maxcontrolrange=20000;
		maxspeed=850;
		sideAirFriction=0.18000001;
		simulationstep=0.001;
		thrust=340;
		thrusttime=5;
		timetolive=20;
		submunitionConeType[]=
		{
			"randomcenter",
			30
		};
		submunitionConeAngle=65;
		submunitionAmmo="rhs_ammo_he_fragments";
		submunitionDirectionType="SubmunitionTargetDirection";
		submunitionInitialOffset[]={0,0,0};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1500;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		weaponLockSystem="1 + 2 + 16";
		missileLockCone=50;
		missileKeepLockedCone=90;
		missileLockMaxDistance=8000;
		missileLockMinDistance=300;
		missileLockMaxSpeed=700;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
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
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						maxTrackableSpeed=835;
						aimDown=0;
					};
				};
			};
		};
	};
	class rhs_ammo_r73m: rhs_ammo_r73
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r74";
		cmimmunity=0.92000002;
		missileLockCone=60;
		missileKeepLockedCone=120;
	};
	class rhs_ammo_r74: rhs_ammo_r73m
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r74";
		cost=900;
		hit=190;
		maneuvrability=47;
		indirecthit=135;
		inittime=0.5;
	};
	class rhs_ammo_r74m2: rhs_ammo_r74
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r74m2";
		maneuvrability=47;
		inittime=0.5;
		cmimmunity=0.92000002;
		missileLockCone=150;
		missileKeepLockedCone=150;
		missileLockMaxDistance=8000;
		missileLockMinDistance=150;
		missileLockMaxSpeed=700;
	};
	class rhs_ammo_r77: rhs_ammo_r73
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r77";
		inittime=0.5;
		cost=900;
		hit=270;
		indirecthit=150;
		indirecthitrange=12;
		proximityExplosionDistance=20;
		maxspeed=1111;
		timetolive=120;
		airFriction=0.014;
		sideairfriction=0.5;
		cmimmunity=0.88999999;
		weaponLockSystem="8 + 16";
		missileLockCone=60;
		missileKeepLockedCone=90;
		missileLockMaxDistance=22000;
		missileLockMinDistance=2000;
		missileLockMaxSpeed=972;
		autoSeekTarget=1;
		lockSeekRadius=1000;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=45;
						angleRangeVertical=45;
						groundNoiseDistanceCoef=0.1;
						aimDown=0;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
					};
				};
			};
		};
	};
	class rhs_ammo_r77m: rhs_ammo_r77
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_r77m";
		cost=1000;
		hit=330;
		indirecthit=80;
		missileLockMaxSpeed=1000;
		missileKeepLockedCone=120;
		cmimmunity=0.94;
	};
	class rhs_ammo_kh25_base: Missile_AGM_01_F
	{
		submunitionAmmo="rhs_ammo_kh25_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=530;
		indirectHit=85;
		indirectHitRange=8;
		maxspeed=870;
		inittime=0.80000001;
		thrust=350;
		thrusttime=2;
		timetolive=30;
		missileLockCone=30;
		missileKeepLockedCone=30;
		missileLockMaxDistance=10000;
		missileLockMinDistance=2000;
		missileLockMaxSpeed=55;
		cameraViewAvailable=0;
		effectsMissile="RHS_Rocket_Fired";
		class CamShakeExplode
		{
			power=102;
			duration=4.5999999;
			frequency=20;
			distance=900.66498;
		};
		class CamShakeHit
		{
			power=510;
			duration=1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_kh25: rhs_ammo_kh25_base
	{
		maxspeed=850;
		missileLockMaxDistance=7000;
		weaponLockSystem="4 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25ml: rhs_ammo_kh25_base
	{
		weaponLockSystem="4 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
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
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25ma: rhs_ammo_kh25_base
	{
		weaponLockSystem="8 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=-1;
						maxFogSeeThrough=0.80000001;
						minTrackableSpeed=0;
						maxTrackableSpeed=56;
						minTrackableATL=-1;
						maxTrackableATL=40;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25mt: rhs_ammo_kh25_base
	{
		maxspeed=870;
		missileLockCone=45;
		missileKeepLockedCone=45;
		missileLockMaxDistance=10000;
		missileLockMinDistance=1500;
		weaponLockSystem="1 + 16";
		cameraViewAvailable=1;
		rhs_tv_guidance="BW";
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
						angleRangeHorizontal=45;
						angleRangeVertical=45;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25mtp: rhs_ammo_kh25_base
	{
		weaponLockSystem="2 + 16";
		cameraViewAvailable=1;
		rhs_tv_guidance="TI";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
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
						maxTrackableSpeed=55;
						angleRangeHorizontal=30;
						angleRangeVertical=30;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25mp: rhs_ammo_kh25_base
	{
		maxspeed=920;
		weaponLockSystem=16;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
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
						maxTrackableSpeed=55;
						angleRangeHorizontal=30;
						angleRangeVertical=30;
					};
				};
			};
		};
	};
	class rhs_ammo_kh25_penetrator: rhs_ammo_base_penetrator
	{
		hit=310;
		typicalSpeed=800;
		caliber=60;
	};
	class rhs_ammo_kh29_base: Missile_AGM_02_F
	{
		submunitionAmmo="rhs_ammo_kh29_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		proxyShape="\rhsafrf\addons\rhs_a2port_air\data\rhs_m_kh29";
		maverickWeaponIndexOffset=0;
		hit=1330;
		indirecthit=300;
		indirecthitrange=17;
		cratereffects="BombCrater";
		effectsMissile="RHS_Rocket_Fired";
		explosioneffects="BombExplosion";
		maxspeed=720;
		maneuvrability=10;
		maxcontrolrange=10000;
		sideairfriction=0.1;
		simulationstep=0.001;
		inittime=0.80000001;
		thrust=350;
		thrusttime=2;
		timetolive=30;
		tracklead=0.94999999;
		trackoversteer=50;
		whistledist=18;
		irlock=1;
		laserlock=1;
		lockType=0;
		weaponLockSystem="4 + 16";
		lockSeekRadius=120;
		missileLockCone=30;
		missileKeepLockedCone=30;
		missileLockMaxDistance=9000;
		missileLockMinDistance=1500;
		missileLockMaxSpeed=55;
		cameraViewAvailable=0;
		class CamShakeExplode
		{
			power=180;
			duration=6;
			frequency=20;
			distance=1240;
		};
		class CamShakeHit
		{
			power=900;
			duration=1;
			frequency=20;
			distance=1;
		};
		SoundSetExplosion[]=
		{
			"BombsHeavy_Exp_SoundSet",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class rhs_ammo_kh29l: rhs_ammo_kh29_base
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29ml: rhs_ammo_kh29_base
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
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
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29t: rhs_ammo_kh29_base
	{
		missileLockCone=45;
		missileKeepLockedCone=45;
		missileLockMaxDistance=9000;
		missileLockMinDistance=1500;
		weaponLockSystem="1 + 16";
		cameraViewAvailable=1;
		rhs_tv_guidance="BW";
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
						nightRangeCoef=0.1;
						maxFogSeeThrough=0.1;
						angleRangeHorizontal=45;
						angleRangeVertical=45;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29mp: rhs_ammo_kh29_base
	{
		weaponLockSystem="8 + 16";
		missileLockCone=60;
		missileKeepLockedCone=60;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=60;
						angleRangeVertical=60;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29d: rhs_ammo_kh29_base
	{
		weaponLockSystem="2 + 16";
		rhs_tv_guidance="TI";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
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
						maxTrackableSpeed=55;
						angleRangeHorizontal=30;
						angleRangeVertical=30;
					};
				};
			};
		};
	};
	class rhs_ammo_kh29_penetrator: rhs_ammo_base_penetrator
	{
		hit=310;
		typicalSpeed=800;
		caliber=33.333302;
	};
	class rhs_ammo_kh38m_base: Missile_AGM_02_F
	{
		submunitionAmmo="rhs_ammo_kh38m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kh38m";
		hit=830;
		indirectHit=105;
		indirectHitRange=10;
		maxspeed=748;
		class CamShakeExplode
		{
			power=102;
			duration=4.5999999;
			frequency=20;
			distance=1060.67;
		};
		class CamShakeHit
		{
			power=510;
			duration=1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_kh38mle: rhs_ammo_kh38m_base
	{
		weaponLockSystem="4 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
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
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=30;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
				};
			};
		};
	};
	class rhs_ammo_kh38mle_ext: rhs_ammo_kh38mle
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kh38m_ext";
	};
	class rhs_ammo_kh38mae: rhs_ammo_kh38m_base
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae";
		weaponLockSystem="8 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=60;
						angleRangeVertical=60;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=-1;
						maxFogSeeThrough=0.80000001;
						minTrackableSpeed=0;
						maxTrackableSpeed=56;
						minTrackableATL=-1;
						maxTrackableATL=40;
					};
				};
			};
		};
	};
	class rhs_ammo_kh38mae_ext: rhs_ammo_kh38mae
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mae_ext";
	};
	class rhs_ammo_kh38mte: rhs_ammo_kh38m_base
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte";
		weaponLockSystem="2 + 16";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
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
						maxTrackableSpeed=55;
						angleRangeHorizontal=30;
						angleRangeVertical=30;
					};
				};
			};
		};
	};
	class rhs_ammo_kh38mte_ext: rhs_ammo_kh38mte
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kh38mte_ext";
	};
	class rhs_ammo_kh38m_penetrator: rhs_ammo_base_penetrator
	{
		hit=310;
		typicalSpeed=800;
		caliber=73.333298;
	};
	class rhs_ammo_kh55sm: rhs_ammo_kh29l
	{
		submunitionAmmo="";
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm";
		CraterEffects="RHS_HeavyBombCrater";
		explosionEffects="RHS_HeavyBombExplosion";
		effectsMissile="missile5";
		hit=9920;
		indirecthit=1300;
		indirecthitrange=56;
		inittime=6;
		maneuvrability=10;
		maxcontrolrange=350000;
		maxspeed=255;
		sideairfriction=0.001;
		simulationstep=0.001;
		thrust=20;
		thrusttime=180;
		timetolive=900;
		tracklead=0.94999999;
		trackoversteer=50;
		whistledist=25;
		weaponLockSystem=16;
		lockType=0;
		irlock=1;
		laserlock=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",
			2.5,
			1.5,
			10800
		};
		SoundSetExplosion[]=
		{
			"BombsHeavy_Exp_SoundSet",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		RHS_yield=50000;
		RHS_FuseRange=100;
		RHS_WarheadType="NUKE";
		class CamShakeExplode
		{
			power=140;
			duration=5.1999998;
			frequency=20;
			distance=2011.66;
		};
		class CamShakeHit
		{
			power=700;
			duration=1;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_kh55sm_nocamo: rhs_ammo_kh55sm
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kh55sm2";
	};
	class rhs_ammo_kh55sh: rhs_ammo_kh55sm
	{
		RHS_WarheadType="EXPLOSIVE";
		RHS_FuseRange=0;
	};
	class rhs_ammo_kh55sh_nocamo: rhs_ammo_kh55sm_nocamo
	{
		RHS_WarheadType="EXPLOSIVE";
	};
	class bomb_04_f;
	class Mo_cluster_AP;
	class UXO_deploy_BombCluster_base_F;
	class ShotDeployBase;
	class APERSMine_Range_Ammo;
	class ATMine_Range_Ammo;
	class rhs_ammo_fab100: bomb_04_f
	{
		cost=50;
		flightProfiles[]=
		{
			"Direct"
		};
		class Direct
		{
		};
		hit=1500;
		indirectHit=650;
		indirectHitRange=13;
		dangerRadiusHit=850;
		suppressionRadiusHit=80;
		explosionForceCoef=10;
		irLock=0;
		laserLock=0;
		allowAgainstInfantry=1;
		autoSeekTarget=0;
		aiAmmoUsageFlags="64 + 128 + 512";
		weaponLockSystem=1;
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_fab100";
		soundFakeFall0[]=
		{
			"a3\Sounds_F\weapons\falling_bomb\fall_01",
			3.1622801,
			1,
			1000
		};
		soundFakeFall1[]=
		{
			"a3\Sounds_F\weapons\falling_bomb\fall_02",
			3.1622801,
			1,
			1000
		};
		soundFakeFall2[]=
		{
			"a3\Sounds_F\weapons\falling_bomb\fall_03",
			3.1622801,
			1,
			1000
		};
		soundFakeFall3[]=
		{
			"a3\Sounds_F\weapons\falling_bomb\fall_04",
			3.1622801,
			1,
			1000
		};
		soundFakeFall[]=
		{
			"soundFakeFall0",
			0.25,
			"soundFakeFall1",
			0.25,
			"soundFakeFall2",
			0.25,
			"soundFakeFall3",
			0.25
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
	};
	class rhs_ammo_fab250: rhs_ammo_fab100
	{
		hit=5000;
		indirectHit=1140;
		indirectHitRange=15;
		dangerRadiusHit=1250;
		suppressionRadiusHit=100;
		proxyShape="\rhsafrf\addons\rhs_a2port_air\data\rhs_m_fab250";
	};
	class rhs_ammo_fab250_m62: rhs_ammo_fab250
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_fab250m62";
		sideAirFriction=0.1;
	};
	class rhs_ammo_ofab250: rhs_ammo_fab250
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_ofab250";
	};
	class rhs_ammo_kab250: bomb_04_f
	{
		flightProfiles[]=
		{
			"LoalAltitude"
		};
		class Direct
		{
		};
		class LoalAltitude
		{
			lockSeekAltitude=300;
		};
		hit=5000;
		indirectHit=1140;
		indirectHitRange=15;
		explosionForceCoef=10;
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_kab250.p3d";
		maverickWeaponIndexOffset=0;
	};
	class rhs_ammo_rbk250_ao1: rhs_ammo_fab250
	{
		laserLock=0;
		allowAgainstInfantry=1;
		autoSeekTarget=0;
		aiAmmoUsageFlags="64 + 128 + 512";
		weaponLockSystem=1;
		maverickWeaponIndexOffset=0;
		simulation="shotMissile";
		triggerDistance=250;
		triggerSpeedCoef[]={0.80000001,1};
		submunitionConeAngle=20;
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_ao1",
			0.94,
			"rhs_ammo_ao1_uxo_deploy",
			0.059999999
		};
		submunitionConeType[]=
		{
			"randomcenter",
			75
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				};
			};
		};
	};
	class rhs_ammo_rbk250_ptab25: rhs_ammo_rbk250_ao1
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
		submunitionConeAngle=8;
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_ptab25m",
			0.94,
			"rhs_ammo_ptab25m_uxo_deploy",
			0.059999999
		};
		submunitionConeType[]=
		{
			"randomcenter",
			60
		};
	};
	class rhs_ammo_rbk250_zab25t: rhs_ammo_rbk250_ao1
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_rbk250275";
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_zab25t_deploy",
			1
		};
		submunitionConeType[]=
		{
			"randomcenter",
			24
		};
	};
	class rhs_ammo_sub_ao1: Mo_cluster_AP
	{
		hit=15;
		indirectHit=8;
		indirectHitRange=5;
		effectFly="";
	};
	class rhs_ammo_ao1_uxo_deploy: UXO_deploy_BombCluster_base_F
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_uxo_ao1_1_deploy",
			0.34,
			"rhs_ammo_uxo_ao1_2_deploy",
			0.33000001,
			"rhs_ammo_uxo_ao1_3_deploy",
			0.33000001
		};
	};
	class rhs_ammo_uxo_ao1_1_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ao1_1";
	};
	class rhs_ammo_uxo_ao1_1: APERSMine_Range_Ammo
	{
		hit=15;
		indirectHit=8;
		indirectHitRange=5;
		icon="iconExplosiveUXO";
		mineModelDisabled="\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ao1sh_3";
		defaultMagazine="";
		mineTrigger="UXOTrigger1";
		mineCanBeReactivated=0;
		mineFloating=10000000;
	};
	class rhs_ammo_uxo_ao1_2_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ao1_2";
	};
	class rhs_ammo_uxo_ao1_2: rhs_ammo_uxo_ao1_1
	{
		mineTrigger="UXOTrigger2";
	};
	class rhs_ammo_uxo_ao1_3_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ao1_3";
	};
	class rhs_ammo_uxo_ao1_3: rhs_ammo_uxo_ao1_1
	{
		mineTrigger="UXOTrigger3";
	};
	class rhs_ammo_sub_ptab25m: rhs_ammo_sub_ao1
	{
		submunitionAmmo="rhs_ammo_sub_ptab25m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHitRange=4;
	};
	class rhs_ammo_sub_ptab25m_penetrator: rhs_ammo_cluster_penetrator
	{
		hit=130;
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=8;
	};
	class rhs_ammo_ptab25m_uxo_deploy: UXO_deploy_BombCluster_base_F
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_uxo_ptab25m_1_deploy",
			0.34,
			"rhs_ammo_uxo_ptab25m_2_deploy",
			0.33000001,
			"rhs_ammo_uxo_ptab25m_3_deploy",
			0.33000001
		};
	};
	class rhs_ammo_uxo_ptab25m_1_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab25m_1";
	};
	class rhs_ammo_uxo_ptab25m_1: APERSMine_Range_Ammo
	{
		hit=50;
		indirectHit=8;
		indirectHitRange=4;
		icon="iconExplosiveUXO";
		mineModelDisabled="\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25m_3";
		defaultMagazine="";
		mineTrigger="UXOTrigger1";
		mineCanBeReactivated=0;
		mineFloating=10000000;
	};
	class rhs_ammo_uxo_ptab25m_2_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab25m_2";
	};
	class rhs_ammo_uxo_ptab25m_2: rhs_ammo_uxo_ptab25m_1
	{
		mineTrigger="UXOTrigger2";
	};
	class rhs_ammo_uxo_ptab25m_3_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab25m_3";
	};
	class rhs_ammo_uxo_ptab25m_3: rhs_ammo_uxo_ptab25m_1
	{
		mineTrigger="UXOTrigger3";
	};
	class rhs_ammo_sub_ptab25ko: rhs_ammo_sub_ptab25m
	{
		submunitionAmmo="rhs_ammo_sub_ptab25ko_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=50;
		indirectHitRange=8;
	};
	class rhs_ammo_sub_ptab25ko_penetrator: rhs_ammo_cluster_penetrator
	{
		hit=130;
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=8;
	};
	class rhs_ammo_ptab25ko_uxo_deploy: UXO_deploy_BombCluster_base_F
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_uxo_ptab25ko_1_deploy",
			0.34,
			"rhs_ammo_uxo_ptab25ko_2_deploy",
			0.33000001,
			"rhs_ammo_uxo_ptab25ko_3_deploy",
			0.33000001
		};
	};
	class rhs_ammo_uxo_ptab25ko_1_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab25ko_1";
	};
	class rhs_ammo_uxo_ptab25ko_1: APERSMine_Range_Ammo
	{
		hit=50;
		indirectHit=8;
		indirectHitRange=8;
		icon="iconExplosiveUXO";
		mineModelDisabled="\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab25ko_3";
		defaultMagazine="";
		mineTrigger="UXOTrigger1";
		mineCanBeReactivated=0;
		mineFloating=10000000;
	};
	class rhs_ammo_uxo_ptab25ko_2_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab25ko_2";
	};
	class rhs_ammo_uxo_ptab25ko_2: rhs_ammo_uxo_ptab25ko_1
	{
		mineTrigger="UXOTrigger2";
	};
	class rhs_ammo_uxo_ptab25ko_3_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab25ko_3";
	};
	class rhs_ammo_uxo_ptab25ko_3: rhs_ammo_uxo_ptab25ko_1
	{
		mineTrigger="UXOTrigger3";
	};
	class rhs_ammo_sub_zab25t_deploy: rhs_ammo_rbk250_ao1
	{
		hit=1;
		indirectHit=1;
		indirectHitRange=1;
		triggerDistance=15;
		triggerSpeedCoef[]={0.1};
		submunitionConeAngle=1;
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_zab25t",
			1
		};
		submunitionConeType[]=
		{
			"randomcenter",
			1
		};
		effectFly="ArtilleryTrails";
		explosionEffects="";
	};
	class F_40mm_White;
	class rhs_ammo_sub_zab25t: F_40mm_White
	{
		hit=1;
		indirectHit=1;
		indirectHitRange=1;
		timetolive=180;
		effectFlare="RHS_Incendiary_Bomb";
		craterShape="\rhsafrf\addons\rhs_airweapons\rhs_m_zab25t";
		explosionEffects="";
	};
	class rhs_ammo_fab500: rhs_ammo_fab250
	{
		hit=8000;
		indirectHit=2400;
		indirectHitRange=25;
		CraterEffects="RHS_HeavyBombCrater";
		explosionEffects="RHS_HeavyBombExplosion";
		SoundSetExplosion[]=
		{
			"BombsHeavy_Exp_SoundSet",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		class CamShakeExplode
		{
			power=240;
			duration=7;
			frequency=20;
			distance=2077.1299;
		};
		class CamShakeHit
		{
			power=1200;
			duration=1.2;
			frequency=20;
			distance=1;
		};
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_fab500";
	};
	class rhs_ammo_fab500_m54: rhs_ammo_fab500
	{
		hit=8000;
		indirectHit=2000;
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_fab500_m54";
	};
	class rhs_ammo_kab500: rhs_ammo_kab250
	{
		hit=8000;
		indirectHit=2400;
		indirectHitRange=25;
		CraterEffects="RHS_HeavyBombCrater";
		explosionEffects="RHS_HeavyBombExplosion";
		SoundSetExplosion[]=
		{
			"BombsHeavy_Exp_SoundSet",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		class CamShakeExplode
		{
			power=240;
			duration=7;
			frequency=20;
			distance=2077.1299;
		};
		class CamShakeHit
		{
			power=1200;
			duration=1.2;
			frequency=20;
			distance=1;
		};
	};
	class rhs_ammo_kab500lk: rhs_ammo_kab500
	{
		simulation="shotMissile";
		triggerDistance=250;
		triggerSpeedCoef[]={0.80000001,1};
		submunitionConeAngle=20;
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_ao25",
			1
		};
		submunitionConeType[]=
		{
			"randomcenter",
			63
		};
	};
	class rhs_ammo_kab500od: rhs_ammo_kab500
	{
		flightProfiles[]=
		{
			"Direct"
		};
		missileLockMaxDistance=11000;
		missileLockMinDistance=2500;
		weaponLockSystem=1;
		cameraViewAvailable=1;
		rhs_tv_guidance="BW";
		class Components
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
	};
	class rhs_ammo_kab500kr: rhs_ammo_kab500od
	{
		hit=8000;
		indirectHitRange=15;
	};
	class rhs_ammo_kab500s: rhs_ammo_kab500
	{
		flightProfiles[]=
		{
			"Direct"
		};
		rhs_tv_guidance="";
	};
	class rhs_ammo_rbk500_ao25: rhs_ammo_rbk250_ao1
	{
		proxyShape="\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_ao25",
			1
		};
		submunitionConeType[]=
		{
			"randomcenter",
			63
		};
	};
	class rhs_ammo_rbk500_ofab50: rhs_ammo_rbk500_ao25
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_ofab50",
			1
		};
		submunitionConeType[]=
		{
			"randomcenter",
			10
		};
	};
	class rhs_ammo_rbk500_spbed: rhs_ammo_rbk500_ao25
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_spbed",
			1
		};
		submunitionConeType[]=
		{
			"randomcenter",
			12
		};
		submunitionConeAngle=60;
	};
	class rhs_ammo_rbk500_ptab1m: rhs_ammo_rbk250_ptab25
	{
		proxyShape="\a3\Weapons_F_Orange\Ammo\BombCluster_02_F";
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_ptab1m",
			0.94,
			"rhs_ammo_ptab1m_uxo_deploy",
			0.059999999
		};
		submunitionConeAngle=8;
		submunitionConeType[]=
		{
			"randomcenter",
			136
		};
	};
	class rhs_ammo_rbk500_zab25t: rhs_ammo_rbk500_ao25
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_zab25t_deploy",
			1
		};
		submunitionConeType[]=
		{
			"randomcenter",
			57
		};
	};
	class rhs_ammo_sub_ao25: rhs_ammo_sub_ao1
	{
		hit=20;
		indirectHit=15;
		indirectHitRange=7;
	};
	class rhs_ammo_sub_ofab50: rhs_ammo_sub_ao1
	{
		hit=400;
		indirectHit=215;
		indirectHitRange=12;
	};
	class M_Mo_155mm_AT;
	class rhs_ammo_sub_spbed: M_Mo_155mm_AT
	{
		submunitionAmmo="rhs_ammo_sub_spbed_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=60;
		indirectHitRange=5;
		autoSeekTarget=1;
		lockSeekRadius=450;
		weaponLockSystem=2;
		missileLockCone=30;
		missileKeepLockedCone=60;
		missileLockMaxDistance=400;
		missileLockMinDistance=10;
		missileLockMaxSpeed=35;
		weaponType="missileAA";
		class Components
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
						maxTrackableSpeed=15;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						nightRangeCoef=1;
					};
					class IRSensorComponent: SensorTemplateIR
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
						maxTrackableSpeed=15;
						angleRangeHorizontal=30;
						angleRangeVertical=30;
					};
				};
			};
		};
	};
	class rhs_ammo_sub_spbed_penetrator: rhs_ammo_cluster_penetrator
	{
		hit=130;
		submunitionConeType[]=
		{
			"randomcenter",
			12
		};
		caliber=23.4667;
	};
	class rhs_ammo_sub_ptab1m: rhs_ammo_sub_ptab25m
	{
		submunitionAmmo="rhs_ammo_sub_ptab1m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=60;
		indirectHitRange=5;
	};
	class rhs_ammo_sub_ptab1m_penetrator: rhs_ammo_cluster_penetrator
	{
		hit=130;
		submunitionConeType[]=
		{
			"randomcenter",
			5
		};
		caliber=17.866699;
	};
	class rhs_ammo_ptab1m_uxo_deploy: UXO_deploy_BombCluster_base_F
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_uxo_ptab1m_1_deploy",
			0.34,
			"rhs_ammo_uxo_ptab1m_2_deploy",
			0.33000001,
			"rhs_ammo_uxo_ptab1m_3_deploy",
			0.33000001
		};
	};
	class rhs_ammo_uxo_ptab1m_1_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab1m_1";
	};
	class rhs_ammo_uxo_ptab1m_1: APERSMine_Range_Ammo
	{
		hit=60;
		indirectHit=8;
		indirectHitRange=5;
		icon="iconExplosiveUXO";
		mineModelDisabled="\rhsafrf\addons\rhs_airweapons\uxo\rhs_uxo_ptab1m_3";
		defaultMagazine="";
		mineTrigger="UXOTrigger1";
		mineCanBeReactivated=0;
		mineFloating=10000000;
	};
	class rhs_ammo_uxo_ptab1m_2_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab1m_2";
	};
	class rhs_ammo_uxo_ptab1m_2: rhs_ammo_uxo_ptab1m_1
	{
		mineTrigger="UXOTrigger2";
	};
	class rhs_ammo_uxo_ptab1m_3_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_uxo_ptab1m_3";
	};
	class rhs_ammo_uxo_ptab1m_3: rhs_ammo_uxo_ptab1m_1
	{
		mineTrigger="UXOTrigger3";
	};
	class rhs_ammo_kmgu2_ao25: rhs_ammo_rbk250_ao1
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_ao25_x12";
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_ao25",
			1
		};
		submunitionConeType[]=
		{
			"poissondisccenter",
			12
		};
		triggerTime=2.5;
		submunitionConeAngle=14;
		triggerSpeedCoef[]={0.80000001,1.1};
	};
	class rhs_ammo_kmgu2_ptab1m: rhs_ammo_kmgu2_ao25
	{
		submunitionConeAngle=8;
		submunitionAmmo[]=
		{
			"rhs_ammo_sub_ptab1m",
			0.94,
			"rhs_ammo_ptab1m_uxo_deploy",
			0.059999999
		};
		submunitionConeType[]=
		{
			"random",
			12
		};
	};
	class rhs_ammo_kmgu2_pfm1: rhs_ammo_kmgu2_ao25
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_pfm1_deploy",
			1
		};
		submunitionConeType[]=
		{
			"random",
			40
		};
	};
	class rhs_ammo_kmgu2_ptm1: rhs_ammo_kmgu2_ao25
	{
		submunitionAmmo[]=
		{
			"rhs_ammo_ptm1_deploy",
			1
		};
		submunitionConeType[]=
		{
			"random",
			12
		};
	};
	class rhs_ammo_pfm1_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_pfm1";
	};
	class rhs_ammo_ptm1_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_ptm1";
	};
	class rhs_ammo_ptm3_deploy: ShotDeployBase
	{
		submunitionAmmo="rhs_ammo_ptm3";
	};
	class rhs_ammo_pfm1: APERSMine_Range_Ammo
	{
		hit=9;
		indirectHit=8;
		indirectHitRange=2;
		mineModelDisabled="\rhsafrf\addons\rhs_airweapons\rhs_m_pfm1_d";
		defaultMagazine="rhs_mag_mine_pfm1";
		cost=200;
		mineInconspicuousness=60;
		mineTrigger="RangeTriggerShort";
		mineFloating=10000000;
	};
	class rhs_ammo_ptm1: ATMine_Range_Ammo
	{
		hit=2000;
		indirectHit=1250;
		indirectHitRange=1;
		mineModelDisabled="\rhsafrf\addons\rhs_airweapons\rhs_m_ptm1_d";
		defaultMagazine="rhs_mag_mine_ptm1";
		mineTrigger="rhs_tm62Trigger";
		mineFloating=10000000;
	};
	class rhs_ammo_ptm3: rhs_ammo_ptm1
	{
		hit=3000;
		indirectHit=1250;
		indirectHitRange=1;
	};
	class rhs_ammo_ptb1150: rhs_ammo_fab250
	{
		proxyShape="\rhsafrf\addons\rhs_airweapons\rhs_m_ptb1150";
		sideAirFriction=-1;
		hit=50;
		indirectHit=10;
		weaponType="special";
		explosive=0;
	};
	class rhs_ammo_ptb1500: MissileBase
	{
		simulation="shotMissile";
		maverickWeaponIndexOffset=10;
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		thrustTime=0;
		thrust=0;
		maxspeed=0;
		timetolive=0;
		maneuvrability=0;
		proxyShape="\A3\Weapons_F\empty.p3d";
		airlock=0;
		laserLock=0;
		irLock=0;
		initTime=0;
		sideAirFriction=0;
	};
};
class CfgMagazines
{
	class SmokeLauncherMag;
	class VehicleMagazine;
	class rhs_mag_s5_32: VehicleMagazine
	{
		ammo="rhs_ammo_s5";
		count=64;
		maxleadspeed=200;
		initSpeed=44;
		nameSound="rockets";
		weight=256;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								
								{
									"Center",
									{0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{0.027000001,0},
									1
								},
								
								{
									"Center",
									{0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{0,0.030547399},
									1
								},
								
								{
									"Center",
									{-0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{-0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{-0.027000001,0},
									1
								},
								
								{
									"Center",
									{-0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{-0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{0.017550001,8.6792601e-010},
									1
								},
								
								{
									"Center",
									{0.01485,7.3439899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-1.53427e-009,0.019855799},
									1
								},
								
								{
									"Center",
									{-1.29823e-009,0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-0.017550001,-2.3677901e-010},
									1
								},
								
								{
									"Center",
									{-0.01485,-2.00351e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{3.0685401e-009,-0.019855799},
									1
								},
								
								{
									"Center",
									{2.5964599e-009,-0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,-0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,-0.0054000798},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s5_16: rhs_mag_s5_32
	{
		count=16;
		weight=84;
	};
	class rhs_mag_s5_64: rhs_mag_s5_32
	{
		count=64;
		weight=276;
	};
	class rhs_mag_s5_128: rhs_mag_s5_32
	{
		count=128;
		weight=532;
	};
	class rhs_mag_s5_192: rhs_mag_s5_32
	{
		count=192;
		weight=788;
	};
	class rhs_mag_s5_m1_32: rhs_mag_s5_32
	{
		ammo="rhs_ammo_s5m1";
		count=64;
		weight=247.03999;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								
								{
									"Center",
									{0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{0.027000001,0},
									1
								},
								
								{
									"Center",
									{0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{0,0.030547399},
									1
								},
								
								{
									"Center",
									{-0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{-0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{-0.027000001,0},
									1
								},
								
								{
									"Center",
									{-0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{-0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{0.017550001,8.6792601e-010},
									1
								},
								
								{
									"Center",
									{0.01485,7.3439899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-1.53427e-009,0.019855799},
									1
								},
								
								{
									"Center",
									{-1.29823e-009,0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-0.017550001,-2.3677901e-010},
									1
								},
								
								{
									"Center",
									{-0.01485,-2.00351e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{3.0685401e-009,-0.019855799},
									1
								},
								
								{
									"Center",
									{2.5964599e-009,-0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,-0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,-0.0054000798},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s5_m1_16: rhs_mag_s5_m1_32
	{
		count=16;
		weight=81.760002;
	};
	class rhs_mag_s5_m1_64: rhs_mag_s5_m1_32
	{
		count=64;
		weight=267.04001;
	};
	class rhs_mag_s5_m1_128: rhs_mag_s5_m1_32
	{
		count=128;
		weight=514.08002;
	};
	class rhs_mag_s5_m1_192: rhs_mag_s5_m1_32
	{
		count=192;
		weight=761.12;
	};
	class rhs_mag_s5_k1_32: rhs_mag_s5_32
	{
		ammo="rhs_ammo_s5k1";
		count=64;
		weight=232.96001;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								
								{
									"Center",
									{0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{0.027000001,0},
									1
								},
								
								{
									"Center",
									{0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{0,0.030547399},
									1
								},
								
								{
									"Center",
									{-0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{-0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{-0.027000001,0},
									1
								},
								
								{
									"Center",
									{-0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{-0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{0.017550001,8.6792601e-010},
									1
								},
								
								{
									"Center",
									{0.01485,7.3439899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-1.53427e-009,0.019855799},
									1
								},
								
								{
									"Center",
									{-1.29823e-009,0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-0.017550001,-2.3677901e-010},
									1
								},
								
								{
									"Center",
									{-0.01485,-2.00351e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{3.0685401e-009,-0.019855799},
									1
								},
								
								{
									"Center",
									{2.5964599e-009,-0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,-0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,-0.0054000798},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s5_k1_16: rhs_mag_s5_k1_32
	{
		count=16;
		weight=78.239998;
	};
	class rhs_mag_s5_k1_64: rhs_mag_s5_k1_32
	{
		count=64;
		weight=252.96001;
	};
	class rhs_mag_s5_k1_128: rhs_mag_s5_k1_32
	{
		count=128;
		weight=485.92001;
	};
	class rhs_mag_s5_k1_192: rhs_mag_s5_k1_32
	{
		count=192;
		weight=718.88;
	};
	class rhs_mag_s5_ko_32: rhs_mag_s5_32
	{
		ammo="rhs_ammo_s5ko";
		count=64;
		weight=283.51999;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								
								{
									"Center",
									{0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{0.027000001,0},
									1
								},
								
								{
									"Center",
									{0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{0,0.030547399},
									1
								},
								
								{
									"Center",
									{-0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{-0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{-0.027000001,0},
									1
								},
								
								{
									"Center",
									{-0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{-0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{0.017550001,8.6792601e-010},
									1
								},
								
								{
									"Center",
									{0.01485,7.3439899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-1.53427e-009,0.019855799},
									1
								},
								
								{
									"Center",
									{-1.29823e-009,0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-0.017550001,-2.3677901e-010},
									1
								},
								
								{
									"Center",
									{-0.01485,-2.00351e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{3.0685401e-009,-0.019855799},
									1
								},
								
								{
									"Center",
									{2.5964599e-009,-0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,-0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,-0.0054000798},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s5_ko_16: rhs_mag_s5_ko_32
	{
		count=16;
		weight=90.879997;
	};
	class rhs_mag_s5_ko_64: rhs_mag_s5_ko_32
	{
		count=64;
		weight=303.51999;
	};
	class rhs_mag_s5_ko_128: rhs_mag_s5_ko_32
	{
		count=128;
		weight=587.03998;
	};
	class rhs_mag_s5_ko_192: rhs_mag_s5_ko_32
	{
		count=192;
		weight=870.56;
	};
	class rhs_mag_s8_12: VehicleMagazine
	{
		ammo="rhs_ammo_s8";
		count=12;
		initSpeed=44;
		nameSound="rockets";
		maxleadspeed=30;
		weight=155.60001;
	};
	class rhs_mag_s8_20: rhs_mag_s8_12
	{
		count=20;
		weight=246;
	};
	class rhs_mag_s8_40: rhs_mag_s8_12
	{
		count=40;
		weight=472;
	};
	class rhs_mag_s8_80: rhs_mag_s8_12
	{
		count=80;
		weight=924;
	};
	class rhs_mag_s8_120: rhs_mag_s8_12
	{
		count=120;
		weight=1376;
	};
	class rhs_mag_s8_DF_20: rhs_mag_s8_12
	{
		count=20;
		weight=268;
		ammo="rhs_ammo_s8df";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								
								{
									"Center",
									{0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.029999999,0},
									1
								},
								
								{
									"Center",
									{0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{0,0.0339416},
									1
								},
								
								{
									"Center",
									{-0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{-0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.029999999,0},
									1
								},
								
								{
									"Center",
									{-0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{-0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{0.0195,9.6436303e-010},
									1
								},
								
								{
									"Center",
									{0.0165,8.1599899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-1.70474e-009,0.022062},
									1
								},
								
								{
									"Center",
									{-1.44248e-009,0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0195,-2.63087e-010},
									1
								},
								
								{
									"Center",
									{-0.0165,-2.22612e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{3.40949e-009,-0.022062},
									1
								},
								
								{
									"Center",
									{2.8849501e-009,-0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,-0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,0.0060000899},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,-0.0060000801},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s8_DF_40: rhs_mag_s8_DF_20
	{
		count=40;
		weight=556;
	};
	class rhs_mag_s8_DF_80: rhs_mag_s8_DF_20
	{
		count=80;
		weight=1092;
	};
	class rhs_mag_s8_T_20: rhs_mag_s8_12
	{
		count=20;
		weight=320;
		ammo="rhs_ammo_s8t";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								
								{
									"Center",
									{0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.029999999,0},
									1
								},
								
								{
									"Center",
									{0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{0,0.0339416},
									1
								},
								
								{
									"Center",
									{-0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{-0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.029999999,0},
									1
								},
								
								{
									"Center",
									{-0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{-0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{0.0195,9.6436303e-010},
									1
								},
								
								{
									"Center",
									{0.0165,8.1599899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-1.70474e-009,0.022062},
									1
								},
								
								{
									"Center",
									{-1.44248e-009,0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0195,-2.63087e-010},
									1
								},
								
								{
									"Center",
									{-0.0165,-2.22612e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{3.40949e-009,-0.022062},
									1
								},
								
								{
									"Center",
									{2.8849501e-009,-0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,-0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,0.0060000899},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,-0.0060000801},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s8_T_40: rhs_mag_s8_T_20
	{
		count=40;
		weight=620;
	};
	class rhs_mag_s8_T_80: rhs_mag_s8_T_20
	{
		count=80;
		weight=1220;
	};
	class rhs_mag_s13b_10: VehicleMagazine
	{
		ammo="rhs_ammo_s13b";
		count=10;
		maxleadspeed=200;
		initSpeed=44;
		nameSound="rockets";
		weight=600;
	};
	class rhs_mag_s13d_10: rhs_mag_s13b_10
	{
		ammo="rhs_ammo_s13d";
		weight=680;
	};
	class rhs_mag_s13df_10: rhs_mag_s13b_10
	{
		ammo="rhs_ammo_s13df";
		weight=680;
	};
	class rhs_mag_s13t_10: rhs_mag_s13b_10
	{
		ammo="rhs_ammo_s13t";
		weight=750;
	};
	class rhs_mag_s13of_10: rhs_mag_s13b_10
	{
		ammo="rhs_ammo_s13of";
		weight=690;
	};
	class rhs_mag_ub16_s5: rhs_mag_s5_32
	{
		ammo="rhs_ammo_s5";
		count=16;
		mass=118;
		weight=118;
		pylonWeapon="rhs_weap_s5";
		hardpoints[]=
		{
			"RHS_HP_UB16"
		};
	};
	class rhs_mag_ub16_s5m1: rhs_mag_ub16_s5
	{
		ammo="rhs_ammo_s5m1";
		mass=115.76;
		weight=115.76;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub16_s5k1: rhs_mag_ub16_s5
	{
		ammo="rhs_ammo_s5k1";
		mass=112.24;
		weight=112.24;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub16_s5ko: rhs_mag_ub16_s5
	{
		ammo="rhs_ammo_s5ko";
		mass=124.88;
		weight=124.88;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub16_ka52_s5: rhs_mag_ub16_s5
	{
		hardpoints[]=
		{
			"RHS_HP_UB16_KA52"
		};
	};
	class rhs_mag_ub16_ka52_s5m1: rhs_mag_ub16_ka52_s5
	{
		ammo="rhs_ammo_s5m1";
		mass=115.76;
		weight=115.76;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub16_ka52_s5k1: rhs_mag_ub16_ka52_s5
	{
		ammo="rhs_ammo_s5k1";
		mass=112.24;
		weight=112.24;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub16_ka52_s5ko: rhs_mag_ub16_ka52_s5
	{
		ammo="rhs_ammo_s5ko";
		mass=124.88;
		weight=124.88;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub16_bd3_umk2a_s5: rhs_mag_ub16_s5
	{
		hardpoints[]=
		{
			"RHS_HP_UB16_BD3_UMK2A"
		};
	};
	class rhs_mag_ub16_bd3_umk2a_s5m1: rhs_mag_ub16_bd3_umk2a_s5
	{
		ammo="rhs_ammo_s5m1";
		mass=115.76;
		weight=115.76;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub16_bd3_umk2a_s5k1: rhs_mag_ub16_bd3_umk2a_s5
	{
		ammo="rhs_ammo_s5k1";
		mass=112.24;
		weight=112.24;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub16_bd3_umk2a_s5ko: rhs_mag_ub16_bd3_umk2a_s5
	{
		ammo="rhs_ammo_s5ko";
		mass=124.88;
		weight=124.88;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub32_s5: rhs_mag_s5_32
	{
		ammo="rhs_ammo_s5";
		count=32;
		mass=237;
		weight=237;
		pylonWeapon="rhs_weap_s5";
		hardpoints[]=
		{
			"RHS_HP_UB32"
		};
	};
	class rhs_mag_ub32_s5m1: rhs_mag_ub32_s5
	{
		ammo="rhs_ammo_s5m1";
		mass=232.52;
		weight=232.52;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub32_s5k1: rhs_mag_ub32_s5
	{
		ammo="rhs_ammo_s5k1";
		mass=225.48;
		weight=225.48;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub32_s5ko: rhs_mag_ub32_s5
	{
		ammo="rhs_ammo_s5ko";
		mass=250.75999;
		weight=250.75999;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub32_ka52_s5: rhs_mag_ub32_s5
	{
		hardpoints[]=
		{
			"RHS_HP_UB32_KA52"
		};
	};
	class rhs_mag_ub32_ka52_s5m1: rhs_mag_ub32_ka52_s5
	{
		ammo="rhs_ammo_s5m1";
		mass=232.52;
		weight=232.52;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub32_ka52_s5k1: rhs_mag_ub32_ka52_s5
	{
		ammo="rhs_ammo_s5k1";
		mass=225.48;
		weight=225.48;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub32_ka52_s5ko: rhs_mag_ub32_ka52_s5
	{
		ammo="rhs_ammo_s5ko";
		mass=250.75999;
		weight=250.75999;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub32_bd3_umk2a_s5: rhs_mag_ub32_s5
	{
		hardpoints[]=
		{
			"RHS_HP_UB32_BD3_UMK2A"
		};
	};
	class rhs_mag_ub32_bd3_umk2a_s5m1: rhs_mag_ub32_bd3_umk2a_s5
	{
		ammo="rhs_ammo_s5m1";
		mass=115.76;
		weight=115.76;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub32_bd3_umk2a_s5k1: rhs_mag_ub32_bd3_umk2a_s5
	{
		ammo="rhs_ammo_s5k1";
		mass=112.24;
		weight=112.24;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub32_bd3_umk2a_s5ko: rhs_mag_ub32_bd3_umk2a_s5
	{
		ammo="rhs_ammo_s5ko";
		mass=124.88;
		weight=124.88;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_b8m1_s8kom: rhs_mag_s8_12
	{
		ammo="rhs_ammo_s8";
		count=20;
		mass=376;
		weight=376;
		pylonWeapon="rhs_weap_s8";
		hardpoints[]=
		{
			"RHS_HP_B8M1"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								
								{
									"Center",
									{0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.029999999,0},
									1
								},
								
								{
									"Center",
									{0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{0,0.0339416},
									1
								},
								
								{
									"Center",
									{-0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{-0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.029999999,0},
									1
								},
								
								{
									"Center",
									{-0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{-0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{0.0195,9.6436303e-010},
									1
								},
								
								{
									"Center",
									{0.0165,8.1599899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-1.70474e-009,0.022062},
									1
								},
								
								{
									"Center",
									{-1.44248e-009,0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0195,-2.63087e-010},
									1
								},
								
								{
									"Center",
									{-0.0165,-2.22612e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{3.40949e-009,-0.022062},
									1
								},
								
								{
									"Center",
									{2.8849501e-009,-0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,-0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,0.0060000899},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,-0.0060000801},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_b8m1_s8df: rhs_mag_b8m1_s8kom
	{
		ammo="rhs_ammo_s8df";
		mass=418;
		weight=418;
		pylonWeapon="rhs_weap_s8df";
	};
	class rhs_mag_b8m1_s8t: rhs_mag_b8m1_s8kom
	{
		ammo="rhs_ammo_s8t";
		mass=450;
		weight=450;
		pylonWeapon="rhs_weap_s8t";
	};
	class rhs_mag_b8m1_bd3_umk2a_s8kom: rhs_mag_b8m1_s8kom
	{
		hardpoints[]=
		{
			"RHS_HP_B8M1_BD3_UMK2A"
		};
	};
	class rhs_mag_b8m1_bd3_umk2a_s8df: rhs_mag_b8m1_bd3_umk2a_s8kom
	{
		ammo="rhs_ammo_s8df";
		mass=391;
		weight=391;
		pylonWeapon="rhs_weap_s8df";
	};
	class rhs_mag_b8m1_bd3_umk2a_s8t: rhs_mag_b8m1_bd3_umk2a_s8kom
	{
		ammo="rhs_ammo_s8t";
		mass=423;
		weight=423;
		pylonWeapon="rhs_weap_s8t";
	};
	class rhs_mag_b8v20a_s8kom: rhs_mag_b8m1_s8kom
	{
		ammo="rhs_ammo_s8";
		count=20;
		mass=349;
		weight=349;
		pylonWeapon="rhs_weap_s8";
		hardpoints[]=
		{
			"RHS_HP_B8V20"
		};
	};
	class rhs_mag_b8v20a_s8df: rhs_mag_b8v20a_s8kom
	{
		ammo="rhs_ammo_s8df";
		mass=391;
		weight=391;
		pylonWeapon="rhs_weap_s8df";
	};
	class rhs_mag_b8v20a_s8t: rhs_mag_b8v20a_s8kom
	{
		ammo="rhs_ammo_s8t";
		mass=423;
		weight=423;
		pylonWeapon="rhs_weap_s8t";
	};
	class rhs_mag_b8v20a_ka52_s8kom: rhs_mag_b8v20a_s8kom
	{
		hardpoints[]=
		{
			"RHS_HP_B8V20_KA52"
		};
	};
	class rhs_mag_b8v20a_ka52_s8df: rhs_mag_b8v20a_ka52_s8kom
	{
		ammo="rhs_ammo_s8df";
		mass=391;
		weight=391;
		pylonWeapon="rhs_weap_s8df";
	};
	class rhs_mag_b8v20a_ka52_s8t: rhs_mag_b8v20a_ka52_s8kom
	{
		ammo="rhs_ammo_s8t";
		mass=423;
		weight=423;
		pylonWeapon="rhs_weap_s8t";
	};
	class rhs_mag_b13l_s13b: rhs_mag_s13b_10
	{
		ammo="rhs_ammo_s13b";
		count=5;
		mass=501.5;
		weight=501.5;
		pylonWeapon="rhs_weap_s13";
		hardpoints[]=
		{
			"RHS_HP_B13L"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								
								{
									"Center",
									{0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.029999999,0},
									1
								},
								
								{
									"Center",
									{0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{0,0.0339416},
									1
								},
								
								{
									"Center",
									{-0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{-0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.029999999,0},
									1
								},
								
								{
									"Center",
									{-0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{-0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{0.0195,9.6436303e-010},
									1
								},
								
								{
									"Center",
									{0.0165,8.1599899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-1.70474e-009,0.022062},
									1
								},
								
								{
									"Center",
									{-1.44248e-009,0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0195,-2.63087e-010},
									1
								},
								
								{
									"Center",
									{-0.0165,-2.22612e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{3.40949e-009,-0.022062},
									1
								},
								
								{
									"Center",
									{2.8849501e-009,-0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,-0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,0.0060000899},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,-0.0060000801},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_b13l_s13d: rhs_mag_b13l_s13b
	{
		ammo="rhs_ammo_s13d";
		mass=500;
		weight=500;
		pylonWeapon="rhs_weap_s13d";
	};
	class rhs_mag_b13l_s13df: rhs_mag_b13l_s13b
	{
		ammo="rhs_ammo_s13df";
		mass=500;
		weight=500;
		pylonWeapon="rhs_weap_s13df";
	};
	class rhs_mag_b13l_s13t: rhs_mag_b13l_s13b
	{
		ammo="rhs_ammo_s13t";
		mass=535;
		weight=535;
		pylonWeapon="rhs_weap_s13t";
	};
	class rhs_mag_b13l_s13of: rhs_mag_b13l_s13b
	{
		ammo="rhs_ammo_s13of";
		mass=505;
		weight=505;
		pylonWeapon="rhs_weap_s13of";
	};
	class rhs_mag_b13l_bd3_umk2a_s13b: rhs_mag_b13l_s13b
	{
		hardpoints[]=
		{
			"RHS_HP_B13L_BD3_UMK2A"
		};
	};
	class rhs_mag_b13l_bd3_umk2a_s13d: rhs_mag_b13l_bd3_umk2a_s13b
	{
		ammo="rhs_ammo_s13d";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13d";
	};
	class rhs_mag_b13l_bd3_umk2a_s13df: rhs_mag_b13l_bd3_umk2a_s13b
	{
		ammo="rhs_ammo_s13df";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13df";
	};
	class rhs_mag_b13l_bd3_umk2a_s13t: rhs_mag_b13l_bd3_umk2a_s13b
	{
		ammo="rhs_ammo_s13t";
		mass=515;
		weight=515;
		pylonWeapon="rhs_weap_s13t";
	};
	class rhs_mag_b13l_bd3_umk2a_s13of: rhs_mag_b13l_bd3_umk2a_s13b
	{
		ammo="rhs_ammo_s13of";
		mass=485;
		weight=485;
		pylonWeapon="rhs_weap_s13of";
	};
	class rhs_mag_b13l1_s13b: rhs_mag_b13l_s13b
	{
		ammo="rhs_ammo_s13b";
		count=5;
		mass=481.5;
		weight=481.5;
		pylonWeapon="rhs_weap_s13";
		hardpoints[]=
		{
			"RHS_HP_B13L1"
		};
	};
	class rhs_mag_b13l1_s13d: rhs_mag_b13l1_s13b
	{
		ammo="rhs_ammo_s13d";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13d";
	};
	class rhs_mag_b13l1_s13df: rhs_mag_b13l1_s13b
	{
		ammo="rhs_ammo_s13df";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13df";
	};
	class rhs_mag_b13l1_s13t: rhs_mag_b13l1_s13b
	{
		ammo="rhs_ammo_s13t";
		mass=515;
		weight=515;
		pylonWeapon="rhs_weap_s13t";
	};
	class rhs_mag_b13l1_s13of: rhs_mag_b13l1_s13b
	{
		ammo="rhs_ammo_s13of";
		mass=485;
		weight=485;
		pylonWeapon="rhs_weap_s13of";
	};
	class rhs_mag_b13l1_ka52_s13b: rhs_mag_b13l1_s13b
	{
		hardpoints[]=
		{
			"RHS_HP_B13L1_KA52"
		};
	};
	class rhs_mag_b13l1_ka52_s13d: rhs_mag_b13l1_ka52_s13b
	{
		ammo="rhs_ammo_s13d";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13d";
	};
	class rhs_mag_b13l1_ka52_s13df: rhs_mag_b13l1_ka52_s13b
	{
		ammo="rhs_ammo_s13df";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13df";
	};
	class rhs_mag_b13l1_ka52_s13t: rhs_mag_b13l1_ka52_s13b
	{
		ammo="rhs_ammo_s13t";
		mass=515;
		weight=515;
		pylonWeapon="rhs_weap_s13t";
	};
	class rhs_mag_b13l1_ka52_s13of: rhs_mag_b13l1_ka52_s13b
	{
		ammo="rhs_ammo_s13of";
		mass=485;
		weight=485;
		pylonWeapon="rhs_weap_s13of";
	};
	class rhs_mag_apu68m3_s24: rhs_mag_s13b_10
	{
		ammo="rhs_ammo_s24";
		count=1;
		mass=280;
		weight=280;
		pylonWeapon="rhs_weap_s24";
		hardpoints[]=
		{
			"RHS_HP_APU68M3_S24"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_apu68m3_s24b: rhs_mag_apu68m3_s24
	{
		ammo="rhs_ammo_s24b";
		mass=280;
		weight=280;
		pylonWeapon="rhs_weap_s24b";
	};
	class rhs_mag_apu68_bd3_umk2a_s24: rhs_mag_apu68m3_s24
	{
		hardpoints[]=
		{
			"RHS_HP_APU68_BD3_UMK2A"
		};
	};
	class rhs_mag_apu68_bd3_umk2a_s24b: rhs_mag_apu68_bd3_umk2a_s24
	{
		ammo="rhs_ammo_s24b";
		mass=280;
		weight=280;
		pylonWeapon="rhs_weap_s24b";
	};
	class rhs_mag_o25l_s25o: rhs_mag_apu68m3_s24
	{
		ammo="rhs_ammo_s25o";
		count=1;
		mass=290;
		weight=290;
		pylonWeapon="rhs_weap_s25";
		hardpoints[]=
		{
			"RHS_HP_O25L"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_o25l_s25of: rhs_mag_o25l_s25o
	{
		ammo="rhs_ammo_s25of";
		mass=290;
		weight=290;
		pylonWeapon="rhs_weap_s25of";
	};
	class rhs_mag_o25l_s25l: rhs_mag_o25l_s25o
	{
		ammo="rhs_ammo_s25l";
		mass=290;
		weight=290;
		pylonWeapon="rhs_weap_s25l";
	};
	class rhs_mag_o25l_s25ld: rhs_mag_o25l_s25o
	{
		ammo="rhs_ammo_s25ld";
		mass=290;
		weight=290;
		pylonWeapon="rhs_weap_s25ld";
	};
	class rhs_mag_bd3_usk_a_o25l_s25o: rhs_mag_o25l_s25o
	{
		mass=310;
		weight=310;
		hardpoints[]=
		{
			"RHS_HP_BD3_USK_A_O25L"
		};
	};
	class rhs_mag_bd3_usk_a_o25l_s25of: rhs_mag_bd3_usk_a_o25l_s25o
	{
		ammo="rhs_ammo_s25of";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25of";
	};
	class rhs_mag_bd3_usk_a_o25l_s25l: rhs_mag_bd3_usk_a_o25l_s25o
	{
		ammo="rhs_ammo_s25l";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25l";
	};
	class rhs_mag_bd3_usk_a_o25l_s25ld: rhs_mag_bd3_usk_a_o25l_s25o
	{
		ammo="rhs_ammo_s25ld";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25ld";
	};
	class rhs_mag_bd3_umk2a_o25l_s25o: rhs_mag_o25l_s25o
	{
		mass=310;
		weight=310;
		hardpoints[]=
		{
			"RHS_HP_BD3_UMK2A_O25L"
		};
	};
	class rhs_mag_bd3_umk2a_o25l_s25of: rhs_mag_bd3_umk2a_o25l_s25o
	{
		ammo="rhs_ammo_s25of";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25of";
	};
	class rhs_mag_bd3_umk2a_o25l_s25l: rhs_mag_bd3_umk2a_o25l_s25o
	{
		ammo="rhs_ammo_s25l";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25l";
	};
	class rhs_mag_bd3_umk2a_o25l_s25ld: rhs_mag_bd3_umk2a_o25l_s25o
	{
		ammo="rhs_ammo_s25ld";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25ld";
	};
	class rhs_mag_R27R: VehicleMagazine
	{
		count=1;
		initspeed=100;
		maxleadspeed=900;
		namesound="missiles";
		ammo="rhs_ammo_r27r";
		displayname="$STR_RHS_R27R_NAME";
		displaynameshort="ARH";
		mass=44;
		hardpoints[]=
		{
			"RHS_HP_R27"
		};
		pylonWeapon="rhs_weap_r27r_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R27R_APU470: rhs_mag_R27R
	{
		hardpoints[]=
		{
			"RHS_HP_R27_APU470"
		};
	};
	class rhs_mag_R27ER: rhs_mag_R27R
	{
		displayname="$STR_RHS_R27ER_NAME";
		ammo="rhs_ammo_r27er";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R27ER_APU470: rhs_mag_R27ER
	{
		hardpoints[]=
		{
			"RHS_HP_R27_APU470"
		};
	};
	class rhs_mag_R27T: rhs_mag_R27ER
	{
		displayname="$STR_RHS_R27T_NAME";
		displaynameshort="IR";
		ammo="rhs_ammo_r27t";
		pylonWeapon="rhs_weap_r27t_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R27T_APU470: rhs_mag_R27T
	{
		hardpoints[]=
		{
			"RHS_HP_R27_APU470"
		};
	};
	class rhs_mag_R27ET: rhs_mag_R27T
	{
		displayname="$STR_RHS_R27ET_NAME";
		ammo="rhs_ammo_r27et";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R27ET_APU470: rhs_mag_R27ET
	{
		hardpoints[]=
		{
			"RHS_HP_R27_APU470"
		};
	};
	class rhs_mag_R60: VehicleMagazine
	{
		count=1;
		initspeed=100;
		maxleadspeed=900;
		namesound="missiles";
		ammo="rhs_ammo_r60";
		displayname="$STR_RHS_R60_NAME";
		displaynameshort="IR";
		mass=44;
		hardpoints[]=
		{
			"RHS_HP_R60"
		};
		pylonWeapon="rhs_weap_r60_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0135766},
									1
								},
								
								{
									"Center",
									{0.0060000001,-0.0117574},
									1
								},
								
								{
									"Center",
									{0.010392,-0.0067883199},
									1
								},
								
								{
									"Center",
									{0.012,0},
									1
								},
								
								{
									"Center",
									{0.010392,0.0067883199},
									1
								},
								
								{
									"Center",
									{0.0060000001,0.0117574},
									1
								},
								
								{
									"Center",
									{0,0.0135766},
									1
								},
								
								{
									"Center",
									{-0.0060000001,0.0117574},
									1
								},
								
								{
									"Center",
									{-0.010392,0.0067883199},
									1
								},
								
								{
									"Center",
									{-0.012,0},
									1
								},
								
								{
									"Center",
									{-0.010392,-0.0067883199},
									1
								},
								
								{
									"Center",
									{-0.0060000001,-0.0117574},
									1
								},
								
								{
									"Center",
									{0,-0.0135766},
									1
								},
								{},
								
								{
									"Center",
									{0.00848528,-0.0096001402},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{0.00848528,0.0096001402},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.00848528,0.0096001402},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.00848528,-0.0096001299},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.00848528,-0.0096001402},
										1
									},
									
									{
										"Center",
										{0.012,5.9345401e-010},
										1
									},
									
									{
										"Center",
										{0.00848528,0.0096001402},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.00848528,0.0096001402},
										1
									},
									
									{
										"Center",
										{-1.0490701e-009,0.0135766},
										1
									},
									
									{
										"Center",
										{-0.00848528,0.0096001402},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.00848528,0.0096001402},
										1
									},
									
									{
										"Center",
										{-0.012,-1.6189999e-010},
										1
									},
									
									{
										"Center",
										{-0.00848528,-0.0096001299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.00848528,-0.0096001299},
										1
									},
									
									{
										"Center",
										{2.0981501e-009,-0.0135766},
										1
									},
									
									{
										"Center",
										{0.0084852902,-0.0096001299},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R60_APU60: rhs_mag_R60
	{
		hardpoints[]=
		{
			"RHS_HP_R60_APU60"
		};
	};
	class rhs_mag_R60M: rhs_mag_R60
	{
		ammo="rhs_ammo_r60m";
		displayname="$STR_RHS_R60M_NAME";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0135766},
									1
								},
								
								{
									"Center",
									{0.0060000001,-0.0117574},
									1
								},
								
								{
									"Center",
									{0.010392,-0.0067883199},
									1
								},
								
								{
									"Center",
									{0.012,0},
									1
								},
								
								{
									"Center",
									{0.010392,0.0067883199},
									1
								},
								
								{
									"Center",
									{0.0060000001,0.0117574},
									1
								},
								
								{
									"Center",
									{0,0.0135766},
									1
								},
								
								{
									"Center",
									{-0.0060000001,0.0117574},
									1
								},
								
								{
									"Center",
									{-0.010392,0.0067883199},
									1
								},
								
								{
									"Center",
									{-0.012,0},
									1
								},
								
								{
									"Center",
									{-0.010392,-0.0067883199},
									1
								},
								
								{
									"Center",
									{-0.0060000001,-0.0117574},
									1
								},
								
								{
									"Center",
									{0,-0.0135766},
									1
								},
								{},
								
								{
									"Center",
									{0.00848528,-0.0096001402},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{0.00848528,0.0096001402},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.00848528,0.0096001402},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.00848528,-0.0096001299},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.00848528,-0.0096001402},
										1
									},
									
									{
										"Center",
										{0.012,5.9345401e-010},
										1
									},
									
									{
										"Center",
										{0.00848528,0.0096001402},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.00848528,0.0096001402},
										1
									},
									
									{
										"Center",
										{-1.0490701e-009,0.0135766},
										1
									},
									
									{
										"Center",
										{-0.00848528,0.0096001402},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.00848528,0.0096001402},
										1
									},
									
									{
										"Center",
										{-0.012,-1.6189999e-010},
										1
									},
									
									{
										"Center",
										{-0.00848528,-0.0096001299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.00848528,-0.0096001299},
										1
									},
									
									{
										"Center",
										{2.0981501e-009,-0.0135766},
										1
									},
									
									{
										"Center",
										{0.0084852902,-0.0096001299},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R60M_APU60: rhs_mag_R60M
	{
		hardpoints[]=
		{
			"RHS_HP_R60_APU60"
		};
	};
	class rhs_mag_R73: VehicleMagazine
	{
		count=1;
		initspeed=0;
		maxleadspeed=900;
		namesound="missiles";
		ammo="rhs_ammo_r73";
		displayname="$STR_RHS_R73_NAME";
		displaynameshort="IR";
		mass=105;
		hardpoints[]=
		{
			"RHS_HP_R73"
		};
		pylonWeapon="rhs_weap_r73_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								
								{
									"Center",
									{0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{0.0125,0},
									1
								},
								
								{
									"Center",
									{0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{0,0.0141423},
									1
								},
								
								{
									"Center",
									{-0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{-0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0125,0},
									1
								},
								
								{
									"Center",
									{-0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388296,0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{0.0125,6.1818101e-010},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									},
									
									{
										"Center",
										{-1.09278e-009,0.0141423},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									},
									
									{
										"Center",
										{-0.0125,-1.68646e-010},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{2.1855699e-009,-0.0141423},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R73_APU73: rhs_mag_R73
	{
		hardpoints[]=
		{
			"RHS_HP_R73_APU73"
		};
	};
	class rhs_mag_R73M: rhs_mag_R73
	{
		ammo="rhs_ammo_r73m";
		displayname="$STR_RHS_R73M_NAME";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								
								{
									"Center",
									{0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{0.0125,0},
									1
								},
								
								{
									"Center",
									{0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{0,0.0141423},
									1
								},
								
								{
									"Center",
									{-0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{-0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0125,0},
									1
								},
								
								{
									"Center",
									{-0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388296,0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{0.0125,6.1818101e-010},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									},
									
									{
										"Center",
										{-1.09278e-009,0.0141423},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									},
									
									{
										"Center",
										{-0.0125,-1.68646e-010},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{2.1855699e-009,-0.0141423},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
		pylonWeapon="rhs_weap_r73m_Launcher";
	};
	class rhs_mag_R73M_APU73: rhs_mag_R73M
	{
		hardpoints[]=
		{
			"RHS_HP_R73_APU73"
		};
	};
	class rhs_mag_R74: rhs_mag_R73
	{
		ammo="rhs_ammo_r74";
		displayname="$STR_RHS_R74_NAME";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								
								{
									"Center",
									{0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{0.0125,0},
									1
								},
								
								{
									"Center",
									{0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{0,0.0141423},
									1
								},
								
								{
									"Center",
									{-0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{-0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0125,0},
									1
								},
								
								{
									"Center",
									{-0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388296,0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{0.0125,6.1818101e-010},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									},
									
									{
										"Center",
										{-1.09278e-009,0.0141423},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									},
									
									{
										"Center",
										{-0.0125,-1.68646e-010},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{2.1855699e-009,-0.0141423},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
		pylonWeapon="rhs_weap_r74_Launcher";
		hardpoints[]=
		{
			"RHS_HP_R74"
		};
	};
	class rhs_mag_R74_APU73: rhs_mag_R74
	{
		hardpoints[]=
		{
			"RHS_HP_R74_APU73"
		};
	};
	class rhs_mag_R74M2: rhs_mag_R73
	{
		count=1;
		ammo="rhs_ammo_r74m2";
		displayname="$STR_RHS_R74M2_NAME";
		displaynameshort="IR";
		initspeed=0;
		hardpoints[]=
		{
			"RHS_HP_R74M2"
		};
		pylonWeapon="rhs_weap_r74m2_Launcher";
	};
	class rhs_mag_R74M2_int: rhs_mag_R74M2
	{
		hardpoints[]=
		{
			"RHS_HP_R74M2_INT"
		};
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class rhs_mag_R77: rhs_mag_R73
	{
		count=1;
		ammo="rhs_ammo_r77";
		displayname="$STR_RHS_R77_NAME";
		displaynameshort="ARH";
		hardpoints[]=
		{
			"RHS_HP_R77"
		};
		pylonWeapon="rhs_weap_r77_Launcher";
		mass=173;
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{0,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{0.0212132,0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.0240003},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{0.015,7.41817e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0169708},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-0.015,-2.0237501e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0169708},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R77_AKU170: rhs_mag_R77
	{
		hardpoints[]=
		{
			"RHS_HP_R77_AKU170"
		};
	};
	class rhs_mag_R77_AKU170_MIG29: rhs_mag_R77
	{
		hardpoints[]=
		{
			"RHS_HP_R77_AKU170_MIG29"
		};
	};
	class rhs_mag_R77M: rhs_mag_R77
	{
		count=1;
		ammo="rhs_ammo_r77m";
		displayname="$STR_RHS_R77M_NAME";
		displaynameshort="ARH";
		hardpoints[]=
		{
			"RHS_HP_R77M"
		};
		pylonWeapon="rhs_weap_r77m_Launcher";
		mass=190;
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{0,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{0.0212132,0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.0240003},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{0.015,7.41817e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0169708},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-0.015,-2.0237501e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0169708},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R77M_AKU170: rhs_mag_R77M
	{
		hardpoints[]=
		{
			"RHS_HP_R77M_AKU170"
		};
	};
	class rhs_mag_R77M_AKU170_MIG29: rhs_mag_R77M
	{
		hardpoints[]=
		{
			"RHS_HP_R77M_AKU170_MIG29"
		};
	};
	class rhs_mag_kh25: VehicleMagazine
	{
		ammo="rhs_ammo_kh25";
		displayname="$STR_RHS_KH25_NAME";
		displaynameshort="LG";
		namesound="missiles";
		count=1;
		initspeed=0;
		mass=320;
		hardpoints[]=
		{
			"RHS_HP_KH25"
		};
		pylonWeapon="rhs_weap_kh25_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0097978096},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0056569302},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0056569302},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0097978096},
									1
								},
								
								{
									"Center",
									{0,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0097978096},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0056569302},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0056569302},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0097978096},
									1
								},
								
								{
									"Center",
									{0,-0.0113139},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0080001103},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0080001103},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0080001103},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0080001103},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0080001103},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.9454502e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0080001103},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0113139},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0080001103},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.3491699e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0080001103},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0113139},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0080001103},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kh25ML: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25ML";
		displayname="$STR_RHS_KH25ML_NAME";
		mass=308;
		pylonWeapon="rhs_weap_kh25ml_Launcher";
	};
	class rhs_mag_kh25MA: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25MA";
		displayname="$STR_RHS_KH25MA_NAME";
		displaynameshort="AGM";
		mass=308;
		pylonWeapon="rhs_weap_kh25ma_Launcher";
	};
	class rhs_mag_kh25MT: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25MT";
		displayname="$STR_RHS_KH25MT_NAME";
		displaynameshort="TV";
		pylonWeapon="rhs_weap_kh25mt_Launcher";
	};
	class rhs_mag_kh25MTP: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25MTP";
		displayname="$STR_RHS_KH25MTP_NAME";
		displaynameshort="IR";
		pylonWeapon="rhs_weap_kh25mtp_Launcher";
	};
	class rhs_mag_kh25MP: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25MP";
		displayname="$STR_RHS_KH25MP_NAME";
		displaynameshort="Anti-Radar";
		mass=323;
		pylonWeapon="rhs_weap_kh25mp_Launcher";
	};
	class rhs_mag_kh25_apu68_mig29: rhs_mag_kh25
	{
		hardpoints[]=
		{
			"RHS_HP_KH25_APU68_MIG29"
		};
		pylonWeapon="rhs_weap_kh25_mig29_Launcher";
	};
	class rhs_mag_kh25ML_apu68_mig29: rhs_mag_kh25_apu68_mig29
	{
		ammo="rhs_ammo_kh25ML";
		displayname="$STR_RHS_KH25ML_NAME";
		mass=308;
		pylonWeapon="rhs_weap_kh25ml_mig29_Launcher";
	};
	class rhs_mag_kh25MT_apu68_mig29: rhs_mag_kh25_apu68_mig29
	{
		ammo="rhs_ammo_kh25MT";
		displayname="$STR_RHS_KH25MT_NAME";
		displaynameshort="TV";
		pylonWeapon="rhs_weap_kh25mt_Launcher";
	};
	class rhs_mag_kh25MTP_apu68_mig29: rhs_mag_kh25_apu68_mig29
	{
		ammo="rhs_ammo_kh25MTP";
		displayname="$STR_RHS_KH25MTP_NAME";
		displaynameshort="IR";
		pylonWeapon="rhs_weap_kh25mtp_Launcher";
	};
	class rhs_mag_kh25MP_apu68_mig29: rhs_mag_kh25_apu68_mig29
	{
		ammo="rhs_ammo_kh25MP";
		displayname="$STR_RHS_KH25MP_NAME";
		displaynameshort="Anti-Radar";
		mass=323;
		pylonWeapon="rhs_weap_kh25mp_Launcher";
	};
	class rhs_mag_kh29l: VehicleMagazine
	{
		ammo="rhs_ammo_kh29l";
		displayname="$STR_RHS_KH29L_NAME";
		displaynameshort="LG";
		namesound="missiles";
		count=1;
		initspeed=0;
		mass=660;
		hardpoints[]=
		{
			"RHS_HP_KH29"
		};
		pylonWeapon="rhs_weap_kh29_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kh29ML: rhs_mag_kh29l
	{
		ammo="rhs_ammo_kh29ML";
		displayname="$STR_RHS_KH29ML_NAME";
		displaynameshort="LG";
		pylonWeapon="rhs_weap_kh29ml_Launcher";
	};
	class rhs_mag_kh29T: rhs_mag_kh29l
	{
		ammo="rhs_ammo_kh29T";
		displayname="$STR_RHS_KH29T_NAME";
		displaynameshort="TV";
		mass=680;
		pylonWeapon="rhs_weap_kh29t_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kh29D: rhs_mag_kh29l
	{
		ammo="rhs_ammo_kh29D";
		displayname="$STR_RHS_KH29D_NAME";
		displaynameshort="IR";
		pylonWeapon="rhs_weap_kh29d_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kh29MP: rhs_mag_kh29l
	{
		ammo="rhs_ammo_kh29MP";
		displayname="$STR_RHS_KH29MP_NAME";
		displaynameshort="AGM";
		pylonWeapon="rhs_weap_kh29mp_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kh29l_aku58_mig29: rhs_mag_kh29l
	{
		pylonWeapon="rhs_weap_kh29_mig29_Launcher";
		hardpoints[]=
		{
			"RHS_HP_KH29_AKU58_MIG29"
		};
	};
	class rhs_mag_kh29ML_aku58_mig29: rhs_mag_kh29l_aku58_mig29
	{
		ammo="rhs_ammo_kh29ML";
		displayname="$STR_RHS_KH29ML_NAME";
		displaynameshort="LG";
		pylonWeapon="rhs_weap_kh29ml_mig29_Launcher";
	};
	class rhs_mag_kh29T_aku58_mig29: rhs_mag_kh29l_aku58_mig29
	{
		ammo="rhs_ammo_kh29T";
		displayname="$STR_RHS_KH29T_NAME";
		displaynameshort="TV";
		mass=680;
		pylonWeapon="rhs_weap_kh29t_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kh29MP_aku58_mig29: rhs_mag_kh29l_aku58_mig29
	{
		ammo="rhs_ammo_kh29MP";
		displayname="$STR_RHS_KH29MP_NAME";
		displaynameshort="AGM";
		pylonWeapon="rhs_weap_kh29mp_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_Kh38mle: VehicleMagazine
	{
		ammo="rhs_ammo_Kh38MLE_ext";
		displayname="$STR_RHS_KH38MLE_NAME";
		displaynameshort="LG";
		namesound="missiles";
		count=1;
		initspeed=0;
		mass=520;
		hardpoints[]=
		{
			"RHS_HP_Kh38"
		};
		pylonWeapon="rhs_weap_kh38mle_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_Kh38mle_int: rhs_mag_Kh38mle
	{
		ammo="rhs_ammo_Kh38MLE";
		hardpoints[]=
		{
			"RHS_HP_Kh38_INT"
		};
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class rhs_mag_Kh38mae: rhs_mag_Kh38mle
	{
		ammo="rhs_ammo_Kh38mae_ext";
		displayname="$STR_RHS_KH38MAE_NAME";
		displaynameshort="ARH";
		pylonWeapon="rhs_weap_kh38mae_Launcher";
	};
	class rhs_mag_Kh38mae_int: rhs_mag_Kh38mae
	{
		ammo="rhs_ammo_Kh38mae";
		hardpoints[]=
		{
			"RHS_HP_Kh38_INT"
		};
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class rhs_mag_Kh38mte: rhs_mag_Kh38mle
	{
		ammo="rhs_ammo_Kh38MTE_ext";
		displayname="$STR_RHS_KH38MTE_NAME";
		displaynameshort="IR";
		pylonWeapon="rhs_weap_kh38mte_Launcher";
	};
	class rhs_mag_Kh38mte_int: rhs_mag_Kh38mte
	{
		ammo="rhs_ammo_Kh38MTE";
		hardpoints[]=
		{
			"RHS_HP_Kh38_INT"
		};
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class rhs_mag_kh55sm: VehicleMagazine
	{
		ammo="rhs_ammo_kh55sm";
		count=1;
		displayname="$STR_RHS_MAG_KH55SM_CAMO";
		displaynameshort="Kh-55SM";
		initspeed=0;
		namesound="missiles";
		mass=1700;
		pylonWeapon="rhs_weap_kh55sm_Dummy_Launcher";
		hardpoints[]=
		{
			"RHS_HP_KH55SM_INT",
			"RHS_HP_TU95MS6_INT"
		};
	};
	class rhs_mag_kh55sm_6: rhs_mag_kh55sm
	{
		count=6;
		hardpoints[]={};
	};
	class rhs_mag_kh55sm_nocamo: rhs_mag_kh55sm
	{
		displayname="$STR_RHS_MAG_KH55SM";
		ammo="rhs_ammo_kh55sm_nocamo";
	};
	class rhs_mag_kh55sm_nocamo_6: rhs_mag_kh55sm_nocamo
	{
		count=6;
		hardpoints[]={};
	};
	class rhs_mag_kh55sh: rhs_mag_kh55sm
	{
		displayname="Kh-55Sh HE (camo)";
		displaynameshort="$STR_RHS_MAG_KH55SH_CAMO";
		ammo="rhs_ammo_kh55sh";
	};
	class rhs_mag_kh55sh_6: rhs_mag_kh55sh
	{
		count=6;
		hardpoints[]={};
	};
	class rhs_mag_kh55sh_nocamo: rhs_mag_kh55sh
	{
		displayname="$STR_RHS_MAG_KH55SH";
		ammo="rhs_ammo_kh55sh_nocamo";
	};
	class rhs_mag_kh55sh_nocamo_6: rhs_mag_kh55sh_nocamo
	{
		count=6;
		hardpoints[]={};
	};
	class rhs_mag_9m127: VehicleMagazine
	{
		ammo="rhs_ammo_9m127m";
		displayname="$STR_RHS_MAG_9M127M";
		displaynameshort="$STR_RHS_MAG_9M127M";
		namesound="missiles";
		count=6;
		initspeed=0;
		weight=270;
		mass=270;
	};
	class rhs_mag_9m127m: rhs_mag_9m127
	{
		ammo="rhs_ammo_9m127m";
	};
	class rhs_mag_apu6_9m127m_ka52: rhs_mag_9m127m
	{
		pylonWeapon="rhs_weap_9k121_Launcher";
		hardpoints[]=
		{
			"RHS_HP_APU6_9m127_KA52"
		};
	};
	class rhs_mag_fab100: VehicleMagazine
	{
		count=1;
		initspeed=0;
		maxleadspeed=5;
		namesound="";
		ammo="rhs_ammo_fab100";
		displayname="$STR_RHS_MAG_FAB100";
		hardpoints[]=
		{
			"RHS_HP_FAB100"
		};
		pylonWeapon="rhs_weap_fab100";
		weight=100;
		mass=100;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0097978096},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0056569302},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0056569302},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0097978096},
									1
								},
								
								{
									"Center",
									{0,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0097978096},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0056569302},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0056569302},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0097978096},
									1
								},
								
								{
									"Center",
									{0,-0.0113139},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0080001103},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0080001103},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0080001103},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0080001103},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0080001103},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.9454502e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0080001103},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0113139},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0080001103},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.3491699e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0080001103},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0113139},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0080001103},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_fab100_ka52: rhs_mag_fab100
	{
		hardpoints[]=
		{
			"RHS_HP_FAB100_KA52"
		};
	};
	class rhs_mag_fab100_bd3_umk2a: rhs_mag_fab100
	{
		hardpoints[]=
		{
			"RHS_HP_FAB100_BD3_UMK2A"
		};
	};
	class rhs_mag_fab100_MBD3_U4T: rhs_mag_fab100
	{
		displayname="FAB-100 MBD3-U4T";
		count=4;
		weight=400;
		mass=400;
		pylonweapon="rhs_weap_fab100_mbd3_u4t";
		hardpoints[]=
		{
			"RHS_HP_FAB100_MBD3_U4T"
		};
		mirrorMissilesIndexes[]={3,4,1,2};
	};
	class rhs_mag_fab100_MBD3_U6: rhs_mag_fab100
	{
		displayname="FAB-100 MBD3-U6";
		count=6;
		weight=600;
		mass=600;
		pylonweapon="rhs_weap_fab100_mbd3_u6";
		hardpoints[]=
		{
			"RHS_HP_FAB100_MBD3_U6"
		};
		mirrorMissilesIndexes[]={3,4,1,2,5,6};
	};
	class rhs_mag_fab250: VehicleMagazine
	{
		ammo="rhs_ammo_fab250";
		count=1;
		displayname="$STR_RHS_FAB250_NAME";
		initspeed=0;
		maxleadspeed=5;
		namesound="";
		hardpoints[]=
		{
			"RHS_HP_FAB250"
		};
		pylonWeapon="rhs_weap_fab250";
		weight=266;
		mass=266;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{0,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{0.015,7.41817e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0169708},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-0.015,-2.0237501e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0169708},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_fab250_2: rhs_mag_fab250
	{
		count=2;
		weight=532;
		mass=532;
		hardpoints[]=
		{
			""
		};
	};
	class rhs_mag_fab250_4: rhs_mag_fab250
	{
		count=4;
		weight=1064;
		mass=1064;
		hardpoints[]=
		{
			""
		};
	};
	class rhs_mag_fab250_ka52: rhs_mag_fab250
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_KA52"
		};
	};
	class rhs_mag_fab250_bd3_umk2a: rhs_mag_fab250
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_BD3_UMK2A"
		};
	};
	class rhs_mag_fab250_m62: rhs_mag_fab250
	{
		ammo="rhs_ammo_fab250_m62";
		displayname="$STR_RHS_MAG_FAB250_M62";
		pylonWeapon="rhs_weap_fab250_m62";
	};
	class rhs_mag_fab250_m62_ka52: rhs_mag_fab250_m62
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_KA52"
		};
	};
	class rhs_mag_fab250_m62_bd3_umk2a: rhs_mag_fab250_m62
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_BD3_UMK2A"
		};
	};
	class rhs_mag_ofab250: rhs_mag_fab250
	{
		ammo="rhs_ammo_ofab250";
		displayname="$STR_RHS_OFAB250_NAME";
		pylonWeapon="rhs_weap_ofab250";
	};
	class rhs_mag_ofab250_ka52: rhs_mag_ofab250
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_KA52"
		};
	};
	class rhs_mag_ofab250_bd3_umk2a: rhs_mag_ofab250
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_BD3_UMK2A"
		};
	};
	class rhs_mag_kab250: rhs_mag_fab250
	{
		ammo="rhs_ammo_kab250";
		displayname="$STR_RHS_KAB250_NAME";
		pylonWeapon="rhs_weap_kab250";
		hardpoints[]=
		{
			"RHS_HP_KAB250"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{0,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{0.015,7.41817e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0169708},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-0.015,-2.0237501e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0169708},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kab250_int: rhs_mag_kab250
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250",
			"RHS_HP_KAB250_INT"
		};
	};
	class rhs_mag_rbk250_ao1: rhs_mag_fab250
	{
		ammo="rhs_ammo_rbk250_ao1";
		displayname="$STR_RHS_MAG_RBK250_AO1";
		pylonWeapon="rhs_weap_rbk250_ao1";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{0,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{0.015,7.41817e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0169708},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-0.015,-2.0237501e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0169708},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_rbk250_ao1_ka52: rhs_mag_rbk250_ao1
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_KA52"
		};
	};
	class rhs_mag_rbk250_ao1_bd3_umk2a: rhs_mag_rbk250_ao1
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_BD3_UMK2A"
		};
	};
	class rhs_mag_rbk250_ptab25: rhs_mag_fab250
	{
		ammo="rhs_ammo_rbk250_ptab25";
		displayname="$STR_RHS_MAG_RBK250_PTAB25";
		pylonWeapon="rhs_weap_rbk250_ptab25";
	};
	class rhs_mag_rbk250_ptab25_ka52: rhs_mag_rbk250_ptab25
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_KA52"
		};
	};
	class rhs_mag_rbk250_ptab25_bd3_umk2a: rhs_mag_rbk250_ptab25
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_BD3_UMK2A"
		};
	};
	class rhs_mag_rbk250_zab25t: rhs_mag_fab250
	{
		ammo="rhs_ammo_rbk250_zab25t";
		displayname="$STR_RHS_MAG_RBK250_ZAB25T";
		pylonWeapon="rhs_weap_rbk250_zab25t";
	};
	class rhs_mag_rbk250_zab25t_ka52: rhs_mag_rbk250_zab25t
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_KA52"
		};
	};
	class rhs_mag_rbk250_zab25t_bd3_umk2a: rhs_mag_rbk250_zab25t
	{
		hardpoints[]=
		{
			"RHS_HP_FAB250_BD3_UMK2A"
		};
	};
	class rhs_mag_fab500: rhs_mag_fab250
	{
		ammo="rhs_ammo_fab500";
		displayname="$STR_RHS_FAB500_M62_NAME";
		weight=500;
		mass=500;
		hardpoints[]=
		{
			"RHS_HP_FAB500"
		};
		pylonWeapon="rhs_weap_fab500";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0247487,-0.028000399},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0247487,0.028000399},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0247487,0.028000399},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0247487,-0.028000399},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_fab500_bd3_usk_a: rhs_mag_fab500
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_USK_A"
		};
	};
	class rhs_mag_fab500_bd3_umk2a: rhs_mag_fab500
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_fab500_ka52: rhs_mag_fab500
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_KA52"
		};
	};
	class rhs_mag_fab500_m54: rhs_mag_fab500
	{
		ammo="rhs_ammo_fab500_m54";
		displayname="$STR_RHS_fab500_M54_NAME";
	};
	class rhs_mag_fab500_m54_bd3_usk_a: rhs_mag_fab500_m54
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_USK_A"
		};
	};
	class rhs_mag_fab500_m54_bd3_umk2a: rhs_mag_fab500_m54
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_fab500_m54_ka52: rhs_mag_fab500_m54
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_KA52"
		};
	};
	class rhs_mag_kab500: rhs_mag_fab500
	{
		ammo="rhs_ammo_kab500";
		displayname="$STR_RHS_KAB500L_NAME";
		pylonWeapon="rhs_weap_kab500";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0247487,-0.028000399},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0247487,0.028000399},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0247487,0.028000399},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0247487,-0.028000399},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kab500_bd3_umk2a: rhs_mag_kab500
	{
		hardpoints[]=
		{
			"RHS_HP_KAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_kab500LK: rhs_mag_fab500
	{
		ammo="rhs_ammo_kab500lk";
		displayname="$STR_RHS_KAB500LK_NAME";
		pylonWeapon="rhs_weap_kab500LK";
	};
	class rhs_mag_kab500LK_bd3_umk2a: rhs_mag_kab500LK
	{
		hardpoints[]=
		{
			"RHS_HP_KAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_kab500kr: rhs_mag_fab500
	{
		ammo="rhs_ammo_kab500kr";
		displayname="$STR_RHS_KAB500KR_NAME";
		pylonWeapon="rhs_weap_kab500kr";
	};
	class rhs_mag_kab500kr_bd3_umk2a: rhs_mag_kab500kr
	{
		hardpoints[]=
		{
			"RHS_HP_KAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_kab500od: rhs_mag_fab500
	{
		ammo="rhs_ammo_kab500od";
		displayname="$STR_RHS_KAB500OD_NAME";
		pylonWeapon="rhs_weap_kab500od";
	};
	class rhs_mag_kab500od_bd3_umk2a: rhs_mag_kab500od
	{
		hardpoints[]=
		{
			"RHS_HP_KAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_rbk500_ao25: rhs_mag_fab500
	{
		ammo="rhs_ammo_rbk500_ao25";
		displayname="$STR_RHS_MAG_RBK500_AO25";
		pylonWeapon="rhs_weap_rbk500_ao25";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
		};
	};
	class rhs_mag_rbk500_ao25_bd3_usk_a: rhs_mag_rbk500_ao25
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_USK_A"
		};
	};
	class rhs_mag_rbk500_ao25_bd3_umk2a: rhs_mag_rbk500_ao25
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_rbk500_ao25_ka52: rhs_mag_rbk500_ao25
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_KA52"
		};
	};
	class rhs_mag_rbk500_ofab50: rhs_mag_fab500
	{
		ammo="rhs_ammo_rbk500_ofab50";
		displayname="$STR_RHS_MAG_RBK500_OFAB50";
		pylonWeapon="rhs_weap_rbk500_ofab50";
	};
	class rhs_mag_rbk500_ofab50_bd3_usk_a: rhs_mag_rbk500_ofab50
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_USK_A"
		};
	};
	class rhs_mag_rbk500_ofab50_bd3_umk2a: rhs_mag_rbk500_ofab50
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_rbk500_ofab50_ka52: rhs_mag_rbk500_ofab50
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_KA52"
		};
	};
	class rhs_mag_rbk500_spbed: rhs_mag_fab500
	{
		ammo="rhs_ammo_rbk500_spbed";
		displayname="$STR_RHS_MAG_RBK500_SPBED";
		pylonWeapon="rhs_weap_rbk500_spbed";
	};
	class rhs_mag_rbk500_spbed_bd3_usk_a: rhs_mag_rbk500_spbed
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_USK_A"
		};
	};
	class rhs_mag_rbk500_spbed_bd3_umk2a: rhs_mag_rbk500_spbed
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_rbk500_spbed_ka52: rhs_mag_rbk500_spbed
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_KA52"
		};
	};
	class rhs_mag_rbk500_ptab1m: rhs_mag_fab500
	{
		ammo="rhs_ammo_rbk500_ptab1m";
		displayname="$STR_RHS_MAG_RBK500_PTAB1M";
		pylonWeapon="rhs_weap_rbk500_ptab1m";
	};
	class rhs_mag_rbk500_ptab1m_bd3_usk_a: rhs_mag_rbk500_ptab1m
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_USK_A"
		};
	};
	class rhs_mag_rbk500_ptab1m_bd3_umk2a: rhs_mag_rbk500_ptab1m
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_rbk500_ptab1m_ka52: rhs_mag_rbk500_ptab1m
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_KA52"
		};
	};
	class rhs_mag_rbk500_zab25t: rhs_mag_fab500
	{
		ammo="rhs_ammo_rbk500_zab25t";
		displayname="$STR_RHS_MAG_RBK500_ZAB25T";
		pylonWeapon="rhs_weap_rbk500_zab25t";
	};
	class rhs_mag_rbk500_zab25t_bd3_usk_a: rhs_mag_rbk500_zab25t
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_USK_A"
		};
	};
	class rhs_mag_rbk500_zab25t_bd3_umk2a: rhs_mag_rbk500_zab25t
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_BD3_UMK2A"
		};
	};
	class rhs_mag_rbk500_zab25t_ka52: rhs_mag_rbk500_zab25t
	{
		hardpoints[]=
		{
			"RHS_HP_FAB500_KA52"
		};
	};
	class rhs_mag_kmgu2_ao25: rhs_mag_fab250
	{
		ammo="rhs_ammo_kmgu2_ao25";
		displayname="$STR_RHS_MAG_KMGU2_AO25";
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-5;
		initSpeedZ=0;
		weight=500;
		mass=500;
		count=8;
		hardpoints[]=
		{
			"RHS_HP_KMGU2"
		};
		pylonWeapon="rhs_weap_kmgu2_ao25";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.028284701},
									1
								},
								
								{
									"Center",
									{0.0125,-0.024494501},
									1
								},
								
								{
									"Center",
									{0.02165,-0.0141423},
									1
								},
								
								{
									"Center",
									{0.025,0},
									1
								},
								
								{
									"Center",
									{0.02165,0.0141423},
									1
								},
								
								{
									"Center",
									{0.0125,0.024494501},
									1
								},
								
								{
									"Center",
									{0,0.028284701},
									1
								},
								
								{
									"Center",
									{-0.0125,0.024494501},
									1
								},
								
								{
									"Center",
									{-0.02165,0.0141423},
									1
								},
								
								{
									"Center",
									{-0.025,0},
									1
								},
								
								{
									"Center",
									{-0.02165,-0.0141423},
									1
								},
								
								{
									"Center",
									{-0.0125,-0.024494501},
									1
								},
								
								{
									"Center",
									{0,-0.028284701},
									1
								},
								{},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0176777,-0.020000299},
										1
									},
									
									{
										"Center",
										{0.025,1.23636e-009},
										1
									},
									
									{
										"Center",
										{0.0176777,0.020000299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0176777,0.020000299},
										1
									},
									
									{
										"Center",
										{-2.1855699e-009,0.028284701},
										1
									},
									
									{
										"Center",
										{-0.0176777,0.020000299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0176777,0.020000299},
										1
									},
									
									{
										"Center",
										{-0.025,-3.37291e-010},
										1
									},
									
									{
										"Center",
										{-0.0176777,-0.020000299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0176777,-0.020000299},
										1
									},
									
									{
										"Center",
										{4.3711399e-009,-0.028284701},
										1
									},
									
									{
										"Center",
										{0.0176777,-0.020000299},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kmgu2_ao25_bd3_umk2a: rhs_mag_kmgu2_ao25
	{
		hardpoints[]=
		{
			"RHS_HP_KMGU2_BD3_UMK2A"
		};
	};
	class rhs_mag_kmgu2_ao25_ka52: rhs_mag_kmgu2_ao25
	{
		hardpoints[]=
		{
			"RHS_HP_KMGU2_KA52"
		};
	};
	class rhs_mag_kmgu2_ptab1m: rhs_mag_kmgu2_ao25
	{
		ammo="rhs_ammo_kmgu2_ptab1m";
		displayname="$STR_RHS_MAG_KMGU2_PTAB1M";
		pylonWeapon="rhs_weap_kmgu2_ptab1m";
	};
	class rhs_mag_kmgu2_ptab1m_bd3_umk2a: rhs_mag_kmgu2_ptab1m
	{
		hardpoints[]=
		{
			"RHS_HP_KMGU2_BD3_UMK2A"
		};
	};
	class rhs_mag_kmgu2_ptab1m_ka52: rhs_mag_kmgu2_ptab1m
	{
		hardpoints[]=
		{
			"RHS_HP_KMGU2_KA52"
		};
	};
	class rhs_mag_kmgu2_pfm1: rhs_mag_kmgu2_ao25
	{
		ammo="rhs_ammo_kmgu2_pfm1";
		displayname="$STR_RHS_MAG_KMGU2_PFM1";
		pylonWeapon="rhs_weap_kmgu2_pfm1";
	};
	class rhs_mag_kmgu2_pfm1_bd3_umk2a: rhs_mag_kmgu2_pfm1
	{
		hardpoints[]=
		{
			"RHS_HP_KMGU2_BD3_UMK2A"
		};
	};
	class rhs_mag_kmgu2_pfm1_ka52: rhs_mag_kmgu2_pfm1
	{
		hardpoints[]=
		{
			"RHS_HP_KMGU2_KA52"
		};
	};
	class rhs_mag_kmgu2_ptm1: rhs_mag_kmgu2_ao25
	{
		ammo="rhs_ammo_kmgu2_ptm1";
		displayname="$STR_RHS_MAG_KMGU2_PTM1";
		pylonWeapon="rhs_weap_kmgu2_ptm1";
	};
	class rhs_mag_kmgu2_ptm1_bd3_umk2a: rhs_mag_kmgu2_ptm1
	{
		hardpoints[]=
		{
			"RHS_HP_KMGU2_BD3_UMK2A"
		};
	};
	class rhs_mag_kmgu2_ptm1_ka52: rhs_mag_kmgu2_ptm1
	{
		hardpoints[]=
		{
			"RHS_HP_KMGU2_KA52"
		};
	};
	class ATMine_Range_Mag;
	class rhs_mag_mine_pfm1: ATMine_Range_Mag
	{
		mass=4.2399998;
		ammo="rhs_ammo_pfm1";
	};
	class rhs_mag_mine_ptm1: ATMine_Range_Mag
	{
		mass=30;
		ammo="rhs_ammo_ptm1";
	};
	class rhs_mag_ptb1150_ptb: rhs_mag_ofab250_bd3_umk2a
	{
		ammo="rhs_ammo_ptb1150";
		displayname="$STR_RHS_PTB1150_NAME";
		hardpoints[]=
		{
			"RHS_HP_PTB1150"
		};
		pylonWeapon="rhs_weap_ptb1150";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{0,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{0.015,7.41817e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0169708},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-0.015,-2.0237501e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0169708},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_ptb1500: VehicleMagazine
	{
		ammo="rhs_ammo_ptb1500";
		count=1;
		initSpeed=0;
		sound[]={};
		reloadSound[]={};
		nameSound="";
		pylonweapon="rhs_weap_DummyLauncher";
		hardpoints[]=
		{
			"RHS_HP_PTB1500"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.028284701},
									1
								},
								
								{
									"Center",
									{0.0125,-0.024494501},
									1
								},
								
								{
									"Center",
									{0.02165,-0.0141423},
									1
								},
								
								{
									"Center",
									{0.025,0},
									1
								},
								
								{
									"Center",
									{0.02165,0.0141423},
									1
								},
								
								{
									"Center",
									{0.0125,0.024494501},
									1
								},
								
								{
									"Center",
									{0,0.028284701},
									1
								},
								
								{
									"Center",
									{-0.0125,0.024494501},
									1
								},
								
								{
									"Center",
									{-0.02165,0.0141423},
									1
								},
								
								{
									"Center",
									{-0.025,0},
									1
								},
								
								{
									"Center",
									{-0.02165,-0.0141423},
									1
								},
								
								{
									"Center",
									{-0.0125,-0.024494501},
									1
								},
								
								{
									"Center",
									{0,-0.028284701},
									1
								},
								{},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0176777,-0.020000299},
										1
									},
									
									{
										"Center",
										{0.025,1.23636e-009},
										1
									},
									
									{
										"Center",
										{0.0176777,0.020000299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0176777,0.020000299},
										1
									},
									
									{
										"Center",
										{-2.1855699e-009,0.028284701},
										1
									},
									
									{
										"Center",
										{-0.0176777,0.020000299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0176777,0.020000299},
										1
									},
									
									{
										"Center",
										{-0.025,-3.37291e-010},
										1
									},
									
									{
										"Center",
										{-0.0176777,-0.020000299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0176777,-0.020000299},
										1
									},
									
									{
										"Center",
										{4.3711399e-009,-0.028284701},
										1
									},
									
									{
										"Center",
										{0.0176777,-0.020000299},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_upk23_ofz: VehicleMagazine
	{
		ammo="rhs_ammo_ofz_23x115mm";
		count=250;
		displayname="UPK-23-250 OFZ";
		initspeed=720;
		maxleadspeed=5;
		namesound="";
		hardpoints[]=
		{
			"RHS_HP_UPK23"
		};
		pylonWeapon="RHS_Weap_GSh23L";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		weight=266;
		mass=266;
		tracersEvery=1;
	};
	class rhs_mag_upk23_ofzt: rhs_mag_upk23_ofz
	{
		ammo="rhs_ammo_ofzt_23x115mm";
		displayname="UPK-23-250 OFZT";
	};
	class rhs_mag_upk23_btz: rhs_mag_upk23_ofz
	{
		ammo="rhs_ammo_bzt_23x115mm";
		displayname="UPK-23-250 BZT";
	};
	class rhs_mag_upk23_mixed: rhs_mag_upk23_ofz
	{
		ammo="rhs_ammo_mixed_23x115mm";
		displayname="UPK-23-250 Mixed";
	};
	class rhs_mag_upk23_ka52_ofz: rhs_mag_upk23_ofz
	{
		hardpoints[]=
		{
			"RHS_HP_UPK23_KA52"
		};
	};
	class rhs_mag_upk23_ka52_ofzt: rhs_mag_upk23_ofzt
	{
		hardpoints[]=
		{
			"RHS_HP_UPK23_KA52"
		};
	};
	class rhs_mag_upk23_ka52_btz: rhs_mag_upk23_btz
	{
		hardpoints[]=
		{
			"RHS_HP_UPK23_KA52"
		};
	};
	class rhs_mag_upk23_ka52_mixed: rhs_mag_upk23_mixed
	{
		hardpoints[]=
		{
			"RHS_HP_UPK23_KA52"
		};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class SmokeLauncher;
	class MissileLauncher;
	class MGun;
	class RocketPods;
	class rockets_Skyfire: RocketPods
	{
		class Far_AI;
		class Medium_AI;
		class Close_AI;
		class Burst;
	};
	class rhs_weap_s5: rockets_Skyfire
	{
		cursor="missile";
		cursoraim="EmptyCursor";
		cursorsize=0;
		proxyShape="\rhsafrf\addons\rhs_a2port_air\data\proxy\ub16";
		class gunClouds
		{
		};
		fireLightAmbient[]={0,0,0};
		fireLightDiffuse[]={0.93000001,0.63,0.25};
		fireLightDuration=0.050999999;
		fireLightIntensity=0.2;
		canLock=1;
		weaponLockDelay=8;
		magazines[]=
		{
			"rhs_mag_s5_192",
			"rhs_mag_s5_128",
			"rhs_mag_s5_64",
			"rhs_mag_s5_32",
			"rhs_mag_s5_16",
			"rhs_mag_ub16_s5",
			"rhs_mag_ub32_s5",
			"rhs_mag_ub16_ka52_s5",
			"rhs_mag_ub32_ka52_s5",
			"rhs_mag_ub16_bd3_umk2a_s5",
			"rhs_mag_ub32_bd3_umk2a_s5"
		};
		class Far_AI: Far_AI
		{
		};
		class Medium_AI: Medium_AI
		{
		};
		class Close_AI: Close_AI
		{
		};
		class AI_Burst: RocketPods
		{
			dispersion=0.037999999;
		};
		class Burst: Burst
		{
			dispersion=0.037999999;
			burst=1;
			salvo=2;
		};
	};
	class rhs_weap_s5_ub32: rhs_weap_s5
	{
		magazines[]=
		{
			"rhs_mag_s5_16"
		};
	};
	class rhs_weap_s5ko: rhs_weap_s5
	{
		magazines[]=
		{
			"rhs_mag_s5_ko_192",
			"rhs_mag_s5_ko_128",
			"rhs_mag_s5_ko_64",
			"rhs_mag_s5_ko_32",
			"rhs_mag_s5_ko_16",
			"rhs_mag_ub16_s5ko",
			"rhs_mag_ub32_s5ko",
			"rhs_mag_ub16_ka52_s5ko",
			"rhs_mag_ub32_ka52_s5ko",
			"rhs_mag_ub16_bd3_umk2a_s5ko",
			"rhs_mag_ub32_bd3_umk2a_s5ko"
		};
	};
	class rhs_weap_s5k1: rhs_weap_s5
	{
		magazines[]=
		{
			"rhs_mag_s5_k1_192",
			"rhs_mag_s5_k1_128",
			"rhs_mag_s5_k1_64",
			"rhs_mag_s5_k1_32",
			"rhs_mag_s5_k1_16",
			"rhs_mag_ub16_s5k1",
			"rhs_mag_ub32_s5k1",
			"rhs_mag_ub16_ka52_s5k1",
			"rhs_mag_ub32_ka52_s5k1",
			"rhs_mag_ub16_bd3_umk2a_s5k1",
			"rhs_mag_ub32_bd3_umk2a_s5k1"
		};
	};
	class rhs_weap_s5m1: rhs_weap_s5
	{
		magazines[]=
		{
			"rhs_mag_s5_m1_192",
			"rhs_mag_s5_m1_128",
			"rhs_mag_s5_m1_64",
			"rhs_mag_s5_m1_32",
			"rhs_mag_s5_m1_16",
			"rhs_mag_ub16_s5m1",
			"rhs_mag_ub32_s5m1",
			"rhs_mag_ub16_ka52_s5m1",
			"rhs_mag_ub32_ka52_s5m1",
			"rhs_mag_ub16_bd3_umk2a_s5m1",
			"rhs_mag_ub32_bd3_umk2a_s5m1"
		};
	};
	class rhs_weap_s8: rhs_weap_s5
	{
		magazines[]=
		{
			"rhs_mag_s8_12",
			"rhs_mag_s8_20",
			"rhs_mag_s8_40",
			"rhs_mag_s8_80",
			"rhs_mag_s8_120",
			"rhs_mag_b8m1_s8kom",
			"rhs_mag_b8v20a_s8kom",
			"rhs_mag_b8v20a_ka52_s8kom",
			"rhs_mag_b8m1_bd3_umk2a_s8kom"
		};
		class Far_AI: Far_AI
		{
		};
		class Medium_AI: Medium_AI
		{
		};
		class Close_AI: Close_AI
		{
		};
		class AI_Burst: AI_Burst
		{
			dispersion=0.032000002;
		};
		class Burst: Burst
		{
			dispersion=0.032000002;
		};
	};
	class rhs_weap_s8df: rhs_weap_s8
	{
		magazines[]=
		{
			"rhs_mag_s8_df_20",
			"rhs_mag_s8_df_40",
			"rhs_mag_s8_df_80",
			"rhs_mag_b8m1_s8df",
			"rhs_mag_b8v20a_s8df",
			"rhs_mag_b8v20a_ka52_s8df",
			"rhs_mag_b8m1_bd3_umk2a_s8df"
		};
	};
	class rhs_weap_s8t: rhs_weap_s8
	{
		magazines[]=
		{
			"rhs_mag_s8_t_20",
			"rhs_mag_s8_t_40",
			"rhs_mag_s8_t_80",
			"rhs_mag_b8m1_s8t",
			"rhs_mag_b8v20a_s8t",
			"rhs_mag_b8v20a_ka52_s8t",
			"rhs_mag_b8m1_bd3_umk2a_s8t"
		};
	};
	class rhs_weap_s13: rhs_weap_s8
	{
		magazines[]=
		{
			"rhs_mag_s13b_10",
			"rhs_mag_b13l_s13b",
			"rhs_mag_b13l1_s13b",
			"rhs_mag_b13l1_ka52_s13b",
			"rhs_mag_b13l_bd3_umk2a_s13b"
		};
		class AI_Burst: AI_Burst
		{
			reloadtime=0.15000001;
			dispersion=0.02;
		};
		class Burst: Burst
		{
			reloadtime=0.15000001;
			dispersion=0.02;
		};
	};
	class rhs_weap_s13d: rhs_weap_s13
	{
		magazines[]=
		{
			"rhs_mag_s13d_10",
			"rhs_mag_b13l_s13d",
			"rhs_mag_b13l1_s13d",
			"rhs_mag_b13l1_ka52_s13d",
			"rhs_mag_b13l_bd3_umk2a_s13d"
		};
	};
	class rhs_weap_s13df: rhs_weap_s13
	{
		magazines[]=
		{
			"rhs_mag_s13df_10",
			"rhs_mag_b13l_s13df",
			"rhs_mag_b13l1_s13df",
			"rhs_mag_b13l1_ka52_s13df",
			"rhs_mag_b13l_bd3_umk2a_s13df"
		};
	};
	class rhs_weap_s13of: rhs_weap_s13
	{
		magazines[]=
		{
			"rhs_mag_s13of_10",
			"rhs_mag_b13l_s13of",
			"rhs_mag_b13l1_s13of",
			"rhs_mag_b13l1_ka52_s13of",
			"rhs_mag_b13l_bd3_umk2a_s13of"
		};
	};
	class rhs_weap_s13t: rhs_weap_s13
	{
		magazines[]=
		{
			"rhs_mag_s13t_10",
			"rhs_mag_b13l_s13t",
			"rhs_mag_b13l1_s13t",
			"rhs_mag_b13l1_ka52_s13t",
			"rhs_mag_b13l_bd3_umk2a_s13t"
		};
	};
	class rhs_weap_s24: rhs_weap_s13
	{
		magazines[]=
		{
			"rhs_mag_apu68m3_s24",
			"rhs_mag_apu68_bd3_umk2a_s24"
		};
		class AI_Burst: AI_Burst
		{
			dispersion=0.02;
		};
		class Burst: Burst
		{
			dispersion=0.02;
		};
		class Single: Burst
		{
			autofire=0;
			reloadTime=0.079999998;
			burst=1;
			salvo=1;
		};
	};
	class rhs_weap_s24b: rhs_weap_s24
	{
		magazines[]=
		{
			"rhs_mag_apu68m3_s24b",
			"rhs_mag_apu68_bd3_umk2a_s24b"
		};
	};
	class rhs_weap_s25: rhs_weap_s13
	{
		magazines[]=
		{
			"rhs_mag_o25l_s25o",
			"rhs_mag_bd3_usk_a_o25l_s25o",
			"rhs_mag_bd3_umk2a_o25l_s25o"
		};
		class AI_Burst: AI_Burst
		{
			dispersion=0.0099999998;
		};
		class Burst: Burst
		{
			dispersion=0.0099999998;
		};
		class Single: Burst
		{
			autofire=0;
			reloadTime=0.079999998;
			burst=1;
			salvo=1;
		};
	};
	class rhs_weap_s25of: rhs_weap_s25
	{
		magazines[]=
		{
			"rhs_mag_o25l_s25of",
			"rhs_mag_bd3_usk_a_o25l_s25of",
			"rhs_mag_bd3_umk2a_o25l_s25of"
		};
	};
	class rhs_weap_s25l: rhs_weap_s25
	{
		magazines[]=
		{
			"rhs_mag_o25l_s25l",
			"rhs_mag_bd3_usk_a_o25l_s25l",
			"rhs_mag_bd3_umk2a_o25l_s25l"
		};
		cursor="missile";
		canLock=2;
		weaponLockSystem=4;
		weaponLockDelay=0.5;
		cmImmunity=0.30000001;
		class EventHandlers
		{
			class RHS_KlenPS
			{
				fired="_this call rhs_fnc_klenpsGuide";
			};
		};
	};
	class rhs_weap_s25ld: rhs_weap_s25
	{
		magazines[]=
		{
			"rhs_mag_o25l_s25ld",
			"rhs_mag_bd3_usk_a_o25l_s25ld",
			"rhs_mag_bd3_umk2a_o25l_s25ld"
		};
	};
	class Missile_AA_04_Plane_CAS_01_F;
	class rhs_weap_r27r_Launcher: Missile_AA_04_Plane_CAS_01_F
	{
		cursor="EmptyCursor";
		cursoraim="EmptyCursor";
		cursorsize=0;
		displayname="$STR_RHS_R27R_NAME";
		magazines[]=
		{
			"rhs_mag_R27R",
			"rhs_mag_R27R_APU470",
			"rhs_mag_R27ER",
			"rhs_mag_R27ER_APU470"
		};
		airateoffire=5;
		airateoffiredistance=16000;
		maxrange=22000;
		maxrangeprobab=0.44999999;
		midrange=8000;
		midrangeprobab=0.80000001;
		minrange=2000;
		minrangeprobab=0.40000001;
		reloadtime=1;
		canLock=2;
		weaponLockSystem=8;
		weaponlockdelay=2;
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1.316228,
			2.5
		};
	};
	class rhs_weap_r27t_Launcher: rhs_weap_r27r_Launcher
	{
		displayname="$STR_RHS_R27T_NAME";
		magazines[]=
		{
			"rhs_mag_R27T",
			"rhs_mag_R27T_APU470",
			"rhs_mag_R27ET",
			"rhs_mag_R27ET_APU470"
		};
		airateoffire=5;
		airateoffiredistance=6000;
		maxrange=20000;
		maxrangeprobab=0.050000001;
		midrange=6000;
		midrangeprobab=0.80000001;
		minrange=300;
		minrangeprobab=0.40000001;
		weaponLockSystem=2;
		weaponlockdelay=3;
	};
	class rhs_weap_r60_Launcher: Missile_AA_04_Plane_CAS_01_F
	{
		cursor="EmptyCursor";
		cursoraim="EmptyCursor";
		cursorsize=0;
		displayname="$STR_RHS_R60_NAME";
		canLock=2;
		magazines[]=
		{
			"rhs_mag_R60",
			"rhs_mag_R60_APU60",
			"rhs_mag_R60M",
			"rhs_mag_R60M_APU60"
		};
		airateoffire=5;
		airateoffiredistance=7000;
		maxrange=7000;
		maxrangeprobab=0.050000001;
		midrange=4000;
		midrangeprobab=0.80000001;
		minrange=300;
		minrangeprobab=0.40000001;
		reloadtime=1;
		weaponlockdelay=3;
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1.316228,
			2.5
		};
	};
	class rhs_weap_r73_Launcher: Missile_AA_04_Plane_CAS_01_F
	{
		cursor="EmptyCursor";
		cursoraim="EmptyCursor";
		cursorsize=0;
		displayname="$STR_RHS_R73_NAME";
		canLock=2;
		magazines[]=
		{
			"rhs_mag_R73",
			"rhs_mag_R73_APU73"
		};
		airateoffire=5;
		airateoffiredistance=10000;
		maxrange=10000;
		maxrangeprobab=0.050000001;
		midrange=5000;
		midrangeprobab=0.80000001;
		minrange=300;
		minrangeprobab=0.40000001;
		reloadtime=1;
		weaponlockdelay=3;
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1.316228,
			2.5
		};
	};
	class rhs_weap_r73m_Launcher: rhs_weap_r73_Launcher
	{
		displayname="$STR_RHS_R73M_NAME";
		magazines[]=
		{
			"rhs_mag_R73M",
			"rhs_mag_R73M_APU73"
		};
	};
	class rhs_weap_r74_Launcher: rhs_weap_r73_Launcher
	{
		displayname="$STR_RHS_R74_NAME";
		magazines[]=
		{
			"rhs_mag_R74",
			"rhs_mag_R74_APU73"
		};
	};
	class rhs_weap_r74m2_Launcher: rhs_weap_r73_Launcher
	{
		displayname="$STR_RHS_R74M2_NAME";
		magazines[]=
		{
			"rhs_mag_R74M2",
			"rhs_mag_R74M2_int"
		};
	};
	class rhs_weap_r77_Launcher: rhs_weap_r74_Launcher
	{
		displayname="$STR_RHS_R77_NAME";
		magazines[]=
		{
			"rhs_mag_R77",
			"rhs_mag_R77_AKU170",
			"rhs_mag_R77_AKU170_MIG29"
		};
		weaponlockdelay=2;
		airateoffire=5;
		airateoffiredistance=16000;
		maxrange=25000;
		maxrangeprobab=0.44999999;
		midrange=12000;
		midrangeprobab=0.80000001;
		minrange=900;
		minrangeprobab=0.40000001;
	};
	class rhs_weap_r77m_Launcher: rhs_weap_r77_Launcher
	{
		displayname="$STR_RHS_R77M_NAME";
		magazines[]=
		{
			"rhs_mag_R77M",
			"rhs_mag_R77M_AKU170",
			"rhs_mag_R77M_AKU170_MIG29"
		};
		weaponlockdelay=2;
	};
	class Missile_AGM_02_Plane_CAS_01_F;
	class rhs_weap_kh25_Launcher: Missile_AGM_02_Plane_CAS_01_F
	{
		cursor="missile";
		cursoraim="EmptyCursor";
		cursorsize=0;
		displayname="$STR_RHS_KH25_NAME";
		magazines[]=
		{
			"rhs_mag_kh25"
		};
		airateoffire=5;
		airateoffiredistance=8000;
		maxrange=7000;
		maxrangeprobab=0.44999999;
		midrange=5000;
		midrangeprobab=0.89999998;
		minrange=1000;
		minrangeprobab=0.5;
		reloadtime=1;
		canLock=2;
		weaponLockSystem=4;
		weaponLockDelay=0.5;
		cmImmunity=0.30000001;
		class EventHandlers
		{
			class RHS_KlenPS
			{
				fired="_this call rhs_fnc_klenpsGuide";
			};
		};
	};
	class rhs_weap_kh25_mig29_Launcher: rhs_weap_kh25_Launcher
	{
		magazines[]=
		{
			"rhs_mag_kh25_apu68_mig29"
		};
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh25ml_Launcher: rhs_weap_kh25_Launcher
	{
		displayname="$STR_RHS_KH25ML_NAME";
		magazines[]=
		{
			"rhs_mag_kh25ml"
		};
		maxrange=10000;
		maxrangeprobab=0.44999999;
		midrange=5000;
		midrangeprobab=0.89999998;
		minrange=1000;
		minrangeprobab=0.5;
	};
	class rhs_weap_kh25ml_mig29_Launcher: rhs_weap_kh25ml_Launcher
	{
		magazines[]=
		{
			"rhs_mag_kh25ml_apu68_mig29"
		};
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh25ma_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH25MA_NAME";
		magazines[]=
		{
			"rhs_mag_kh25ma"
		};
		weaponLockSystem=8;
		weaponLockDelay=1.5;
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh25mt_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH25MT_NAME";
		magazines[]=
		{
			"rhs_mag_kh25mt",
			"rhs_mag_kh25mt_apu68_mig29"
		};
		weaponLockSystem="CM_Lock_TV";
		weaponLockDelay=1;
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh25mtp_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH25MTP_NAME";
		magazines[]=
		{
			"rhs_mag_kh25mtp",
			"rhs_mag_kh25mtp_apu68_mig29"
		};
		weaponLockSystem=2;
		weaponLockDelay=3;
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh25mp_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH25MP_NAME";
		magazines[]=
		{
			"rhs_mag_kh25mp",
			"rhs_mag_kh25mp_apu68_mig29"
		};
		weaponLockSystem=0;
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh29_Launcher: rhs_weap_kh25_Launcher
	{
		displayname="$STR_RHS_KH29L_NAME";
		magazines[]=
		{
			"rhs_mag_kh29l"
		};
		airateoffire=5;
		airateoffiredistance=8000;
		maxrange=10000;
		maxrangeprobab=0.050000001;
		midrange=5000;
		midrangeprobab=0.89999998;
		minrange=2000;
		minrangeprobab=0.5;
		canLock=2;
	};
	class rhs_weap_kh29_mig29_Launcher: rhs_weap_kh29_Launcher
	{
		magazines[]=
		{
			"rhs_mag_kh29l_aku58_mig29"
		};
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh29ml_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH29ML_NAME";
		magazines[]=
		{
			"rhs_mag_kh29ml"
		};
	};
	class rhs_weap_kh29ml_mig29_Launcher: rhs_weap_kh29ml_Launcher
	{
		magazines[]=
		{
			"rhs_mag_kh29ml_aku58_mig29"
		};
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh29t_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH29T_NAME";
		magazines[]=
		{
			"rhs_mag_kh29t",
			"rhs_mag_kh29t_aku58_mig29"
		};
		weaponLockSystem=1;
		weaponLockDelay=2;
		cmImmunity=0.5;
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh29mp_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH29MP_NAME";
		magazines[]=
		{
			"rhs_mag_kh29mp",
			"rhs_mag_kh29mp_aku58_mig29"
		};
		weaponLockSystem=8;
		weaponLockDelay=1.5;
		cmImmunity=0.30000001;
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh29d_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH29D_NAME";
		magazines[]=
		{
			"rhs_mag_kh29d"
		};
		weaponLockSystem=2;
		weaponLockDelay=3;
		cmImmunity=0.30000001;
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh38mle_Launcher: rhs_weap_kh29_Launcher
	{
		displayname="$STR_RHS_KH38MLE_NAME";
		magazines[]=
		{
			"rhs_mag_kh38mle",
			"rhs_mag_kh38mle_int"
		};
		airateoffire=5;
		airateoffiredistance=8000;
		maxrange=10000;
		maxrangeprobab=0.050000001;
		midrange=5000;
		midrangeprobab=0.89999998;
		minrange=2000;
		minrangeprobab=0.5;
		class EventHandlers
		{
		};
	};
	class rhs_weap_kh38mae_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH38MAE_NAME";
		magazines[]=
		{
			"rhs_mag_Kh38mae",
			"rhs_mag_Kh38mae_int"
		};
		weaponLockSystem=8;
		weaponLockDelay=3;
		cmImmunity=0.30000001;
	};
	class rhs_weap_kh38mte_Launcher: rhs_weap_kh25ml_Launcher
	{
		displayname="$STR_RHS_KH38MTE_NAME";
		magazines[]=
		{
			"rhs_mag_Kh38mte",
			"rhs_mag_Kh38mte_int"
		};
		weaponLockSystem=2;
		weaponLockDelay=3;
		cmImmunity=0.30000001;
	};
	class rhs_weap_kh55sm_Launcher: rhs_weap_kh29_Launcher
	{
		displayname="$STR_RHS_MKU56_NAME";
		magazines[]=
		{
			"rhs_mag_kh55sm",
			"rhs_mag_kh55sm_6",
			"rhs_mag_kh55sm_nocamo",
			"rhs_mag_kh55sm_nocamo_6",
			"rhs_mag_kh55sh",
			"rhs_mag_kh55sh_6",
			"rhs_mag_kh55sh_nocamo",
			"rhs_mag_kh55sh_nocamo_6"
		};
		reloadtime=5;
		class Eventhandlers: EventHandlers
		{
			class RHS_MissileDeploy
			{
				fired="_this call rhs_fnc_tu95_missile_control";
			};
		};
	};
	class rhs_weap_kh55sm_dummy_Launcher: rhs_weap_kh55sm_Launcher
	{
	};
	class rhs_weap_9k121_Launcher: rhs_weap_kh55sm_Launcher
	{
		airateoffire=5;
		airateoffiredistance=4000;
		displayname="9K121M";
		magazines[]=
		{
			"rhs_mag_apu6_9m127_ka52",
			"rhs_mag_apu6_9m127m_ka52"
		};
		canlock=1;
		reloadtime=1.5;
		weaponlockdelay=4;
		class Single: rhs_weap_kh29_Launcher
		{
			airateoffire=5;
			airateoffiredistance=4000;
			maxrange=11500;
			maxrangeprobab=0.64999998;
			midrange=4000;
			midrangeprobab=0.94999999;
			minrange=50;
			minrangeprobab=0.60000002;
			reloadtime=0.050000001;
		};
		class Burst: Single
		{
			reloadtime=0.050000001;
			multiplier=1;
			burst=2;
		};
		holdsterAnimValue=1;
		class Eventhandlers
		{
		};
	};
	class rhs_weap_fab250: MissileLauncher
	{
		cursor="bomb";
		cursoraim="EmptyCursor";
		cursorsize=0;
		displayname="$STR_RHS_FAB250_NAME";
		magazinereloadtime=0;
		magazines[]=
		{
			"rhs_mag_fab250",
			"rhs_mag_fab250_ka52",
			"rhs_mag_fab250_bd3_umk2a",
			"rhs_mag_fab250_bd3_usk_a",
			"rhs_mag_fab250_2",
			"rhs_mag_fab250_4"
		};
		canlock=0;
		airateoffire=1;
		airateoffiredistance=500;
		ballisticsComputer=8;
		salvo=1;
		reloadTime=0.1;
		sounds[]={};
		namesound="";
	};
	class rhs_weap_fab250_m62: rhs_weap_fab250
	{
		magazines[]=
		{
			"rhs_mag_fab250_m62",
			"rhs_mag_fab250_m62_ka52",
			"rhs_mag_fab250_m62_bd3_umk2a",
			"rhs_mag_fab250_m62_bd3_usk_a"
		};
	};
	class rhs_weap_ofab250: rhs_weap_fab250
	{
		magazines[]=
		{
			"rhs_mag_ofab250",
			"rhs_mag_ofab250_ka52",
			"rhs_mag_ofab250_bd3_umk2a",
			"rhs_mag_ofab250_bd3_usk_a"
		};
	};
	class rhs_weap_rbk250: rhs_weap_fab250
	{
		displayname="$STR_RHS_RBK250_NAME";
	};
	class rhs_weap_rbk250_ao1: rhs_weap_rbk250
	{
		magazines[]=
		{
			"rhs_mag_rbk250_ao1",
			"rhs_mag_rbk250_ao1_ka52",
			"rhs_mag_rbk250_ao1_bd3_umk2a",
			"rhs_mag_rbk250_ao1_bd3_usk_a"
		};
	};
	class rhs_weap_rbk250_ptab25: rhs_weap_rbk250
	{
		magazines[]=
		{
			"rhs_mag_rbk250_ptab25",
			"rhs_mag_rbk250_ptab25_ka52",
			"rhs_mag_rbk250_ptab25_bd3_umk2a",
			"rhs_mag_rbk250_ptab25_bd3_usk_a"
		};
	};
	class rhs_weap_rbk250_zab25t: rhs_weap_rbk250
	{
		magazines[]=
		{
			"rhs_mag_rbk250_zab25t",
			"rhs_mag_rbk250_zab25t_ka52",
			"rhs_mag_rbk250_zab25t_bd3_umk2a",
			"rhs_mag_rbk250_zab25t_bd3_usk_a"
		};
	};
	class rhs_weap_fab100: rhs_weap_fab250
	{
		displayname="$STR_RHS_MAG_FAB100";
		magazines[]=
		{
			"rhs_mag_fab100",
			"rhs_mag_fab100_ka52",
			"rhs_mag_fab100_bd3_umk2a",
			"rhs_mag_fab100_bd3_usk_a",
			"rhs_mag_fab100_mbd3_u4t",
			"rhs_mag_fab100_mbd3_u6"
		};
		reloadTime=0.1;
	};
	class rhs_weap_fab100_mbd3_u4t: rhs_weap_fab100
	{
		magazines[]=
		{
			"rhs_mag_fab100_mbd3_u4t"
		};
		class Single: rhs_weap_fab250
		{
		};
		class Burst: rhs_weap_fab250
		{
			minrange=200;
			burst=4;
			salvo=2;
			reloadTime=0.30000001;
		};
	};
	class rhs_weap_fab100_mbd3_u6: rhs_weap_fab100_mbd3_u4t
	{
		magazines[]=
		{
			"rhs_mag_fab100_mbd3_u6"
		};
		class Burst: Burst
		{
			burst=6;
		};
	};
	class rhs_weap_kab250: rhs_weap_fab250
	{
		displayname="$STR_RHS_KAB250_NAME";
		canlock=1;
		weaponLockDelay=0.1;
		weaponLockSystem=4;
		cmImmunity=0.30000001;
		magazines[]=
		{
			"rhs_mag_kab250",
			"rhs_mag_kab250_int"
		};
		class LoalAltitude: RocketPods
		{
		};
	};
	class rhs_weap_fab500: rhs_weap_fab250
	{
		displayname="$STR_RHS_FAB500_NAME";
		magazines[]=
		{
			"rhs_mag_fab500",
			"rhs_mag_fab500_bd3_usk_a",
			"rhs_mag_fab500_bd3_umk2a",
			"rhs_mag_fab500_ka52",
			"rhs_mag_fab500_m54",
			"rhs_mag_fab500_m54_bd3_usk_a",
			"rhs_mag_fab500_m54_bd3_umk2a",
			"rhs_mag_fab500_m54_ka52"
		};
	};
	class rhs_weap_ptb1150: rhs_weap_fab250
	{
		displayname="$STR_RHS_PTB1150_NAME";
		magazines[]=
		{
			"rhs_mag_ptb1150_ptb"
		};
		airateoffire=1;
		airateoffiredistance=200;
		minrange=100;
		burst=2;
		reloadTime=0;
		salvo=2;
	};
	class rhs_weap_kab500: rhs_weap_kab250
	{
		displayname="$STR_RHS_KAB500_NAME";
		magazines[]=
		{
			"rhs_mag_kab500",
			"rhs_mag_kab500_bd3_umk2a"
		};
	};
	class rhs_weap_kab500lk: rhs_weap_kab250
	{
		displayname="$STR_RHS_KAB500LK_NAME";
		magazines[]=
		{
			"rhs_mag_kab500lk",
			"rhs_mag_kab500lk_bd3_umk2a"
		};
	};
	class rhs_weap_kab500KR: rhs_weap_kab250
	{
		displayname="$STR_RHS_KAB500KR_NAME";
		magazines[]=
		{
			"rhs_mag_kab500KR",
			"rhs_mag_kab500KR_bd3_umk2a"
		};
		class Direct: rhs_weap_fab500
		{
		};
	};
	class rhs_weap_kab500OD: rhs_weap_kab250
	{
		displayname="$STR_RHS_KAB500OD_NAME";
		magazines[]=
		{
			"rhs_mag_kab500OD",
			"rhs_mag_kab500OD_bd3_umk2a"
		};
		class Direct: rhs_weap_fab500
		{
		};
	};
	class rhs_weap_rbk500: rhs_weap_fab500
	{
		displayname="$STR_RHS_RBK500_NAME";
	};
	class rhs_weap_rbk500_ao25: rhs_weap_rbk500
	{
		magazines[]=
		{
			"rhs_mag_rbk500_ao25",
			"rhs_mag_rbk500_ao25_ka52",
			"rhs_mag_rbk500_ao25_bd3_umk2a",
			"rhs_mag_rbk500_ao25_bd3_usk_a"
		};
	};
	class rhs_weap_rbk500_ofab50: rhs_weap_rbk500
	{
		magazines[]=
		{
			"rhs_mag_rbk500_ofab50",
			"rhs_mag_rbk500_ofab50_ka52",
			"rhs_mag_rbk500_ofab50_bd3_umk2a",
			"rhs_mag_rbk500_ofab50_bd3_usk_a"
		};
	};
	class rhs_weap_rbk500_spbed: rhs_weap_rbk500
	{
		magazines[]=
		{
			"rhs_mag_rbk500_spbed",
			"rhs_mag_rbk500_spbed_ka52",
			"rhs_mag_rbk500_spbed_bd3_umk2a",
			"rhs_mag_rbk500_spbed_bd3_usk_a"
		};
	};
	class rhs_weap_rbk500_ptab1m: rhs_weap_rbk500
	{
		magazines[]=
		{
			"rhs_mag_rbk500_ptab1m",
			"rhs_mag_rbk500_ptab1m_ka52",
			"rhs_mag_rbk500_ptab1m_bd3_umk2a",
			"rhs_mag_rbk500_ptab1m_bd3_usk_a"
		};
	};
	class rhs_weap_rbk500_zab25t: rhs_weap_rbk500
	{
		magazines[]=
		{
			"rhs_mag_rbk500_zab25t",
			"rhs_mag_rbk500_zab25t_ka52",
			"rhs_mag_rbk500_zab25t_bd3_umk2a",
			"rhs_mag_rbk500_zab25t_bd3_usk_a"
		};
	};
	class rhs_weap_kmgu2: rhs_weap_fab250
	{
		displayname="$STR_RHS_KMGU2_NAME";
		magazines[]=
		{
			"rhs_mag_kmgu2",
			"rhs_mag_kmgu2_ka52",
			"rhs_mag_kmgu2_bd3_umk2a",
			"rhs_mag_kmgu2_bd3_usk_a"
		};
		airateoffire=1;
		airateoffiredistance=200;
		minrange=100;
		burst=8;
		reloadTime=0.40000001;
		salvo=2;
		class Instant: rhs_weap_fab250
		{
			burst=8;
			reloadTime=0.050000001;
			salvo=2;
		};
		class Fast: Instant
		{
			reloadTime=0.2;
		};
		class Medium: Instant
		{
			reloadTime=1;
		};
		class Slow: Instant
		{
			reloadTime=1.5;
		};
	};
	class rhs_weap_kmgu2_ptab1m: rhs_weap_kmgu2
	{
		magazines[]=
		{
			"rhs_mag_kmgu2_ptab1m",
			"rhs_mag_kmgu2_ptab1m_bd3_umk2a",
			"rhs_mag_kmgu2_ptab1m_ka52"
		};
	};
	class rhs_weap_kmgu2_ao25: rhs_weap_kmgu2
	{
		magazines[]=
		{
			"rhs_mag_kmgu2_ao25",
			"rhs_mag_kmgu2_ao25_bd3_umk2a",
			"rhs_mag_kmgu2_ao25_ka52"
		};
	};
	class rhs_weap_kmgu2_ptm1: rhs_weap_kmgu2
	{
		magazines[]=
		{
			"rhs_mag_kmgu2_ptm1",
			"rhs_mag_kmgu2_ptm1_bd3_umk2a",
			"rhs_mag_kmgu2_ptm1_ka52"
		};
	};
	class rhs_weap_kmgu2_pfm1: rhs_weap_kmgu2
	{
		magazines[]=
		{
			"rhs_mag_kmgu2_pfm1",
			"rhs_mag_kmgu2_pfm1_bd3_umk2a",
			"rhs_mag_kmgu2_pfm1_ka52"
		};
	};
	class rhs_weap_DummyLauncher: MissileLauncher
	{
		magazines[]=
		{
			"rhs_mag_ptb1500"
		};
	};
	class Put: Default
	{
		class PutMuzzle: Default
		{
		};
		class Rhs_SmallMine_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"rhs_mag_mine_pfm1",
				"rhs_mag_mine_ptm1"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class Proxyrhs_r_s5m1: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_r_s13b: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_r_s13_gasket: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh55sm: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh55sm2: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh38m: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh38m_ext: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh38mae: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh38mae_ext: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh38mte: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh38mte_ext: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_r27r: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_r27t: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_r60: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_r73: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_r74: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_r74m2: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_r77: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_r77m: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_ao25_x12: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_fab100: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_fab250m62: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_rbk250275: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kab250: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_fab500: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_ptb1150: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_9m120: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_s24: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_s25o: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_s25of: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_s25l: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_fab250: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_kh29: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_9m17: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_9m114: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_m_9m127: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_pylon_dummy: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kh55sm: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kh38m: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kh38m_ext: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_mbd3_u4t: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_mbd3_u6: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kab250: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kab250_ext: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_fab500: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_fab500_ext: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kmgu2: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kmgu2_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_r73_ext: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_r74m2: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_r77: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_r77_ext: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_r77_MiG: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_r77m: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_9m120_8x: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_b13l: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_b13l1: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_apu68m3_s24: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_apu68_kh25: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_o25l: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500_ext: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500_ptab: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500_spbed: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500_ptab_ext: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500_spbed_ext: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_apu470_r27: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_apu60_r60: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_apu73_r73: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_ub16: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_ub32: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_b8m1: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_b13l: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_fab250: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_rbk500: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_rbk500_ptab: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_rbk500_spbed: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_kh25: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_s24: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_usk_a_o25l: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_ptb_ptb1150: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_ptb_ptb1500: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_bd3_umk2a_kmgu2: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_g_upk23: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_g_upk23_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_9m17_2x: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_9m114_2x: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_9m120_2x: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_9m127_6x: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_fab250: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_fab250_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500_ptab_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_rbk500_spbed_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kh29_aku58: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_kh29_aku58_MiG: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_r73: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_b8m1: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_b8v20a: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_ub16: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_ub32: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_b8v20a_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_ub16_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_r_ub32_ka52: ProxyWeapon
	{
		simulation="pylonpod";
	};
};
class cfgVehicles
{
	class MineBase;
	class rhs_mine_pfm1: MineBase
	{
		ammo="rhs_ammo_pfm1";
		icon="iconExplosiveAP";
	};
	class rhs_mine_ptm1: MineBase
	{
		ammo="rhs_ammo_ptm1";
		icon="iconExplosiveAT";
	};
	class rhs_uxo_ao1_1: MineBase
	{
		ammo="rhs_ammo_uxo_ao1_1";
		icon="iconExplosiveUXO";
	};
	class rhs_uxo_ao1_2: rhs_uxo_ao1_1
	{
		ammo="rhs_ammo_uxo_ao1_2";
	};
	class rhs_uxo_ao1_3: rhs_uxo_ao1_1
	{
		ammo="rhs_ammo_uxo_ao1_3";
	};
	class rhs_uxo_ptab1m_1: MineBase
	{
		ammo="rhs_ammo_uxo_ptab1m_1";
		icon="iconExplosiveUXO";
	};
	class rhs_uxo_ptab1m_2: rhs_uxo_ptab1m_1
	{
		ammo="rhs_ammo_uxo_ptab1m_2";
	};
	class rhs_uxo_ptab1m_3: rhs_uxo_ptab1m_1
	{
		ammo="rhs_ammo_uxo_ptab1m_3";
	};
	class rhs_uxo_ptab25m_1: MineBase
	{
		ammo="rhs_ammo_uxo_ptab25m_1";
		icon="iconExplosiveUXO";
	};
	class rhs_uxo_ptab25m_2: rhs_uxo_ptab25m_1
	{
		ammo="rhs_ammo_uxo_ptab25m_2";
	};
	class rhs_uxo_ptab25m_3: rhs_uxo_ptab25m_1
	{
		ammo="rhs_ammo_uxo_ptab25m_3";
	};
	class rhs_uxo_ptab25ko_1: MineBase
	{
		ammo="rhs_ammo_uxo_ptab25ko_1";
		icon="iconExplosiveUXO";
	};
	class rhs_uxo_ptab25ko_2: rhs_uxo_ptab25ko_1
	{
		ammo="rhs_ammo_uxo_ptab25ko_2";
	};
	class rhs_uxo_ptab25ko_3: rhs_uxo_ptab25ko_1
	{
		ammo="rhs_ammo_uxo_ptab25ko_3";
	};
	class ModuleMine_APERSMine_F;
	class rhs_mine_pfm1_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_ammo_pfm1";
	};
	class rhs_mine_ptm1_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_ammo_ptm1";
	};
	class rhs_uxo_ao1_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_ammo_uxo_ao1_1";
	};
	class rhs_uxo_ptab1m_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_ammo_uxo_ptab1m_1";
	};
	class rhs_uxo_ptab25m_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_ammo_uxo_ptab25m_1";
	};
	class rhs_uxo_ptab25ko_module: ModuleMine_APERSMine_F
	{
		explosive="rhs_ammo_uxo_ptab25ko_1";
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
					class rhs_pfm1_Mine
					{
						name="$STR_RHS_PFM1_NAME";
						value="rhs_mine_pfm1";
						default=0;
					};
					class rhs_ptm1_mine
					{
						name="$STR_RHS_PTM1_NAME";
						value="rhs_mine_ptm1";
						default=0;
					};
					class rhs_ao1_uxo
					{
						name="$STR_RHS_UXO_AO1_NAME";
						value="rhs_uxo_ao1_1";
						default=0;
					};
					class rhs_ptab1m_uxo
					{
						name="$STR_RHS_UXO_PTAB1M_NAME";
						value="rhs_uxo_ptab1m_1";
						default=0;
					};
					class rhs_ptab25m_uxo
					{
						name="$STR_RHS_UXO_PTAB25M_NAME";
						value="rhs_uxo_ptab25m_1";
						default=0;
					};
					class rhs_ptab25ko_uxo
					{
						name="$STR_RHS_UXO_PTAB25KO_NAME";
						value="rhs_uxo_ptab25ko_1";
						default=0;
					};
				};
			};
		};
	};
};
