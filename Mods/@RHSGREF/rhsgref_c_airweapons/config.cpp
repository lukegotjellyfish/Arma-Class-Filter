class CfgPatches
{
	class rhsgref_c_airweapons
	{
		units[]={};
		weapons[]={};
		author[]=
		{
			"RHS Team"
		};
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
class CfgAmmo
{
	class MissileBase;
	class R_80mm_HE;
	class rhs_ammo_atgmCore_base;
	class rhs_ammo_atgmBase_base;
	class rhs_ammo_3bk12_penetrator;
	class rhs_ammo_9m112_penetrator;
	class rhsusf_ammo_basic_penetrator;
	class Missile_AGM_02_F: MissileBase
	{
		class Components;
	};
	class rhs_ammo_zt3: rhs_ammo_atgmBase_base
	{
		submunitionAmmo="rhs_ammo_zt3_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		cost=50;
		hit=270;
		indirecthit=26;
		indirecthitrange=3.5999999;
		lockType=0;
		manualcontrol=0;
		maxcontrolrange=5000;
		maxspeed=250;
		maneuvrability=18;
		tracklead=1;
		trackoversteer=1;
		sideairfriction=0.029999999;
		initTime=0.30000001;
		thrust=172;
		thrusttime=10;
		timetolive=30;
		whistledist=3;
		proxyShape="\rhsgref\addons\rhsgref_airweapons\zt3\rhs_m_zt3";
		missileManualControlCone=45;
		rhs_saclos=1;
		rhs_ballisticMode=0;
		rhs_guideMode="BEAMRIDER";
		class EventHandlers
		{
			class RHS_Guidance
			{
				fired="_this call RHS_fnc_saclosGuide";
			};
		};
	};
	class rhs_ammo_zt3_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName="TandemHEAT";
		hit=290;
		caliber=56;
	};
	class rhs_ammo_zt6: Missile_AGM_02_F
	{
		submunitionAmmo="rhs_ammo_zt6_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		maverickWeaponIndexOffset=0;
		proxyShape="\rhsgref\addons\rhsgref_airweapons\zt6\rhs_m_zt6";
		hit=400;
		indirectHit=35;
		indirectHitRange=8;
		cost=100;
		maxSpeed=530;
		airLock=0;
		irLock=0;
		laserLock=1;
		manualControl=1;
		maxControlRange=10000;
		trackOversteer=1;
		trackLead=1;
		maneuvrability=18;
		timeToLive=30;
		simulationStep=0.0099999998;
		airFriction=0.1;
		sideAirFriction=0.30000001;
		initTime=0;
		thrustTime=4.0999999;
		thrust=300;
		class Direct;  //found empty after stripping
		flightProfiles[]=
		{
			"Direct"
		};
		fuseDistance=50;
		whistleDist=4;
		muzzleEffect="";
		aiAmmoUsageFlags="64+128 + 512";
		lockSeekRadius=120;
		missileLockMaxDistance=10000;
		missileLockMinDistance=200;
		missileLockMaxSpeed=56;
		missileLockCone=50;
		missileKeepLockedCone=50;
		missileManualControlCone=45;
		weaponLockSystem="2 + 16";
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
						angleRangeHorizontal=50;
						angleRangeVertical=50;
						maxGroundNoiseDistance=0;
						maxFogSeeThrough=0.30000001;
					};
				};
			};
		};
	};
	class rhs_ammo_zt6_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit=310;
		caliber=66.666702;
	};
	class rhs_ammo_l159_fuelpod_proxy: rhs_ammo_atgmBase_base;  //found empty after stripping
	class rhs_ammo_20mm_AP;
	class rhs_ammo_20x139mm_AP: rhs_ammo_20mm_AP
	{
		hit=60;
		explosive=0;
		indirectHit=1;
		indirectHitRange=0.30000001;
		typicalSpeed=1050;
		caliber=2.92063;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusHit=14;
		tracerEndTime=1.5;
	};
	class SubmunitionBase;
	class rhs_ammo_20x139mm_mixed: SubmunitionBase
	{
		cost=10;
		submunitionAmmo[]=
		{
			"rhs_ammo_20x139mm_AP",
			0.80000001,
			"rhs_ammo_20x139mm_HE",
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
	class VehicleMagazine;
	class rhs_mag_zt3: VehicleMagazine
	{
		ammo="rhs_ammo_zt3";
		displayname="ZT3 Ingwe";
		displaynameshort="ZT3";
		namesound="missiles";
		count=1;
		initspeed=80;
		weight=37.5;
	};
	class rhs_mag_zt3_4: rhs_mag_zt3
	{
		count=4;
		pylonWeapon="rhs_weap_zt3_Launcher";
		hardpoints[]=
		{
			"RHS_HP_INGWE"
		};
		mirrorMissilesIndexes[]={2,1,4,3};
		weight=150;
		mass=150;
	};
	class rhs_mag_zt6: VehicleMagazine
	{
		ammo="rhs_ammo_zt6";
		displaynameshort="ZT6";
		nameSound="missiles";
		count=1;
		initSpeed=0;
		weight=50;
	};
	class rhs_mag_zt6_4: rhs_mag_zt6
	{
		count=4;
		pylonWeapon="rhs_weap_zt6_Launcher";
		hardpoints[]=
		{
			"RHS_HP_MOKOPA"
		};
		mirrorMissilesIndexes[]={2,1,4,3};
		weight=200;
		mass=200;
	};
	class rhs_mag_l159_fuelpod: VehicleMagazine
	{
		ammo="rhs_ammo_l159_fuelpod_proxy";
		count=1;
		weight=100;
		pylonweapon="rhsusf_weap_DummyLauncher";
		hardpoints[]=
		{
			"RHS_HP_L159_FUELPOD"
		};
	};
	class rhs_mag_l159_fuelpod_grey: rhs_mag_l159_fuelpod;  //found empty after stripping
	class rhs_mag_GI2_420_HE: VehicleMagazine
	{
		displayname="20x139mm High-Explosive Indenciary";
		displaynameshort="HEI";
		ammo="rhs_ammo_20x139mm_HE";
		count=420;
		initSpeed=1050;
		tracersEvery=4;
		nameSound="cannon";
	};
	class rhs_mag_GI2_420_AP: VehicleMagazine
	{
		displayname="20x139mm Armor-Piercing Capped";
		displaynameshort="APC";
		ammo="rhs_ammo_20x139mm_AP";
		count=420;
		initSpeed=1100;
		tracersEvery=4;
		nameSound="cannon";
	};
	class rhs_mag_zpl20_hei: VehicleMagazine
	{
		displayname="20x139mm High-Explosive Indenciary";
		displaynameshort="HEI";
		nameSound="cannon";
		ammo="rhs_ammo_20x139mm_HE";
		count=210;
		initSpeed=1020;
		tracersEvery=4;
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"RHS_HP_ZPL20"
		};
		pylonWeapon="RHS_weap_zpl20";
	};
	class rhs_mag_zpl20_apit: rhs_mag_zpl20_hei
	{
		displayname="20x139mm Armor-Piercing Incendary Traced";
		displaynameshort="API-T";
		ammo="rhs_ammo_20x139mm_AP";
	};
	class rhs_mag_zpl20_mixed: rhs_mag_zpl20_hei
	{
		displayname="20x139mm Mixed";
		displaynameshort="Mixed";
		ammo="B_20mm";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class gatling_30mm;
	class rhs_weap_M197: gatling_30mm
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class rhs_weap_gi2_base: rhs_weap_M197
	{
		aidispersioncoefx=2;
		aidispersioncoefy=4;
		class manual: manual
		{
			autoFire=1;
			reloadTime=0.083329998;
			dispersion=0.00125;
			burst=1;
		};
		class far: close
		{
			burst=3;
			burstRangeMax=6;
		};
	};
	class rhs_weap_gi2: rhs_weap_M197
	{
		magazines[]={};
		class HE: rhs_weap_gi2_base
		{
			magazines[]=
			{
				"rhs_mag_GI2_420_HE"
			};
		};
		class AP: rhs_weap_M197
		{
			magazines[]=
			{
				"rhs_mag_GI2_420_AP"
			};
		};
	};
	class RHS_weap_zpl20: gatling_30mm
	{
		aidispersioncoefx=4;
		aidispersioncoefy=4;
		canlock=2;
		cursor="mg";
		cursorsize=0;
		displayname="ZPL-20 Plamen";
		initspeed=820;
		shotFromTurret=0;
		class gunParticles
		{
			class effect2
			{
				directionname="kulomet";
				positionname="chamber_1";
				effectname="MachineGun2";
			};
		};
		magazines[]=
		{
			"rhs_mag_zpl20_hei",
			"rhs_mag_zpl20_apit",
			"rhs_mag_zpl20_mixed"
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
			displayname="ZPL-20 (High)";
			maxrange=3;
			maxrangeprobab=0.0099999998;
			midrange=2;
			midrangeprobab=0.0099999998;
			minrange=1;
			minrangeprobab=0.0099999998;
			multiplier=1;
			reloadtime=0.023;
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
			displayname="ZPL-20 (Low RPM)";
			reloadtime=0.077;
			burst=0;
		};
		class far: medium
		{
			airateoffire=4;
			airateoffiredistance=1000;
			burst="4 + random 5";
			maxrange=1250;
			maxrangeprobab=0.11;
			midrange=1050;
			midrangeprobab=0.40000001;
			minrange=850;
			minrangeprobab=0.15000001;
		};
	};
	class MissileLauncher;
	class Missile_AGM_02_Plane_CAS_01_F;
	class rhs_weap_zt3_Launcher: MissileLauncher
	{
		cursor="missile";
		cursoraim="EmptyCursor";
		cursorsize=0;
		displayname="ZT3 Ingwe";
		magazines[]=
		{
			"rhs_mag_zt3",
			"rhs_mag_zt3_4"
		};
		airateoffire=2.5;
		airateoffiredistance=500;
		maxrange=5000;
		maxrangeprobab=0.60000002;
		midrange=3000;
		midrangeprobab=1;
		minrange=250;
		minrangeprobab=0.89999998;
		reloadtime=1.5;
		autoreload=0;
		magazineReloadTime=30;
		holdsterAnimValue=1;
		canlock=1;
		weaponLockType=1;
	};
	class rhs_weap_zt6_Launcher: Missile_AGM_02_Plane_CAS_01_F
	{
		autoFire=0;
		missileLockCone=65;
		cursorSize=0;
		cursor="missile";
		cursorAim="EmptyCursor";
		maxrange=10000;
		maxrangeprobab=0.5;
		midrange=5000;
		midrangeprobab=0.89999998;
		minrange=250;
		minrangeprobab=0.80000001;
		nameSound="MissileLauncher";
		reloadTime=1;
		magazines[]=
		{
			"rhs_mag_zt6_4",
			"rhs_mag_zt6"
		};
		canLock=2;
		weaponLockDelay=3;
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class Proxyrhs_pylon_L159_fuelpod: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_L159_fuelpod_grey: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_pylon_m_zt3_launcher: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_m_zt3: ProxyWeapon
	{
		simulation="maverickweapon";
	};
	class Proxyrhs_pylon_m_zt6_launcher: ProxyWeapon
	{
		simulation="pylonpod";
	};
	class Proxyrhs_m_zt6: ProxyWeapon
	{
		simulation="maverickweapon";
	};
};
