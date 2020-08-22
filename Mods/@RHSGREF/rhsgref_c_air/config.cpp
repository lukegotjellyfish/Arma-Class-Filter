class DefaultEventhandlers;
class CfgPatches
{
	class rhsgref_c_air
	{
		units[]=
		{
			"rhs_l159_CDF",
			"rhs_l159_CDF_plamen",
			"rhs_l159_CDF_CAP",
			"rhs_l159_CDF_CAS",
			"rhs_l39_cdf",
			"rhs_l159_CDF_b",
			"rhs_l159_CDF_b_plamen",
			"rhs_l159_CDF_b_CAP",
			"rhs_l159_CDF_b_CAS",
			"rhs_l39_cdf_b",
			"rhs_vs1_seat",
			"rhs_an2",
			"rhs_an2_b",
			"rhs_uh1h_hidf",
			"rhs_uh1h_hidf_gunship",
			"rhs_uh1h_hidf_unarmed",
			"rhs_uh1h_un",
			"rhs_uh1h_idap"
		};
		weapons[]={};
		name="GREF Planes";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class vs1_seatEjection
			{
				file="\rhsgref\addons\rhsgref_c_air\scripts\rhs_seatEjection_vs1.sqf";
				description="VS-1 Seat Ejection script";
			};
		};
	};
};
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyRetex;
	class Proxyuh1h_wreck: ProxyRetex;  //found empty after stripping
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class ViewPilot;
		class Turrets;
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitMissiles;
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class CargoTurret;
		class RotorLibHelicopterProperties;
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class Sounds;
		class HitPoints: HitPoints
		{
			class HitEngine1;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class CargoTurret;
		class RotorLibHelicopterProperties;
		class Eventhandlers;
	};
	class rhs_uh1h_base: Helicopter_Base_H
	{
		forceInGarage=0;
		icon="rhsgref\addons\rhsgref_air\uh1h\ui\icon_uh1h_ca.paa";
		GetInAction="pilot_Heli_Light_02_Enter";
		GetOutAction="pilot_Heli_Light_02_Exit";
		preciseGetInOut=1;
		driverOpticsModel="";
		cargoCompartments[]=
		{
			"compartment3"
		};
		getInRadius=1;
		hideWeaponsDriver=0;
		gForceShakeAttenuation=0.30000001;
		minGForce=0.050000001;
		maxGForce=0.1;
		class Exhausts
		{
			class Exhaust1
			{
				position="Exhaust";
				direction="Exhaust_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		supplyradius=2;
		epeImpulseDamageCoef=20;
		damageResistance=0.01039;
		extCameraPosition[]={0,2,-17};
		threat[]={0.40000001,0,0};
		showCrewAim=0;
		mainRotorSpeed=1.2;
		backRotorSpeed=6.0999999;
		fuelCapacity=781;
		fuelConsumptionRate=0.090000004;
		maxFordingDepth=1;
		driveOnComponent[]=
		{
			"Skids"
		};
		mainBladeRadius=8.1999998;
		tailBladeRadius=1.5;
		washDownStrength="0.9f";
		maxSpeed=217;
		slingLoadMemoryPoint="slingLoad0";
		slingLoadMaxCargoMass=1900;
		radarType=0;
		liftForceCoef=1.3;
		cyclicAsideForceCoef=0.55000001;
		cyclicForwardForceCoef=0.5;
		backrotorforcecoef=0.60000002;
		sensitivity=0.5;
		maximumLoad=4309.1279;
		irTarget=1;
		irTargetSize=0.89999998;
		radarTarget=1;
		radarTargetSize=1;
		LockDetectionSystem="0";
		incomingMissileDetectionSystem="0";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="rhsgref\addons\rhsgref_c_air\uh1h\rtd_uh1h.xml";
			autoHoverCorrection[]={5,2.4000001,0};
			defaultCollective=0.75;
			starterTime=10;
			throttleOffToIdle=10;
			throttleIdleToOff=10;
			throttleIdleToFull=8;
			throttleFullToIdle=15;
			maxTorque=2168;
			maxMainRotorStress=130000;
			maxTailRotorStress=10000;
			retreatBladeStallWarningSpeed=63;
			rtd_center="rtd_center";
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			0.69999999,
			1
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			150
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		enableManualFire=0;
		class MFD;  //found empty after stripping
		class ViewPilot: ViewPilot
		{
			initFov=0.85000002;
			maxFov=0.94999999;
		};
		class MarkerLights
		{
			class CollisionLight_Red
			{
				name="CollisionLight_Red";
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				intensity=20;
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0;
					hardLimitEnd=25;
				};
			};
			class Red_Interior: CollisionLight_Red
			{
				name="Interior_Red";
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				intensity=800;
				blinking=0;
				drawLightSize=0;
				drawLightCenterSize=0;
			};
			class Red_Top_Position: CollisionLight_Red
			{
				name="CollisionLight_Top_Red";
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				intensity=20;
				blinking=1;
				blinkingPattern[]={0.5,0.5};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class Green_Position: CollisionLight_Red
			{
				name="CollisionLight_Green";
				color[]={0.40000001,1,0.5};
				ambient[]={0.039999999,0.1,0.050000001};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				isCopilot=1;
				hideWeaponsGunner=0;
				preciseGetInOut=1;
				GunnerDoor="door_copilot";
				primaryGunner=1;
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				weapons[]=
				{
					"rhs_weap_fcs_nolrf_ammo"
				};
				magazines[]=
				{
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				class ViewGunner
				{
					minAngleX=-65;
					maxAngleX=85;
					initAngleX=0;
					minAngleY=-150;
					maxAngleY=150;
					initAngleY=0;
					minFov=0.25;
					maxFov=0.94999999;
					initFov=0.85000002;
				};
				class Hitpoints;  //found empty after stripping
			};
			class RightGunner: MainTurret
			{
				CanEject=1;
				isCopilot=0;
				initelev=0;
				initturn=-90;
				maxelev=20;
				maxturn=-25;
				minelev=-55;
				minturn=-135;
				stabilizedInAxes=0;
				weapons[]=
				{
					"rhs_weap_m240H_2"
				};
				magazines[]=
				{
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80"
				};
				selectionFireAnim="zasleh_2";
				primaryGunner=0;
				proxyIndex=3;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.69999999;
					maxanglex=30;
					maxangley=100;
					maxfov=1.1;
					minanglex=-30;
					minangley=-100;
					minfov=0.25;
				};
				soundAttenuationTurret="HeliAttenuationGunner";
				class Hitpoints;  //found empty after stripping
			};
			class LeftGunner: RightGunner
			{
				weapons[]=
				{
					"rhs_weap_m240H_1"
				};
				magazines[]=
				{
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80"
				};
				primaryGunner=0;
				proxyIndex=2;
				selectionFireAnim="zasleh_1";
				initelev=0;
				initturn=90;
				maxelev=20;
				maxturn=125;
				minelev=-55;
				minturn=30;
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=8;
				maxTurn=35;
				minTurn=-60;
			};
		};
		armor=35;
		armorStructural=20;
		hullDamageCauseExplosion=1;
		hullExplosionDelay[]={10,20};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				simulation="RHS_Hull_Helicopter";
				armor=-100;
				minimalHit=-0.2;
				explosionShielding=2;
				radius=0.40000001;
				armorComponent="Hit_Hull";
				name="hit_hull";
				passThrough=1;
			};
			class HitFuel
			{
				armor=-70;
				name="hit_fuel";
				radius=0.15000001;
				explosionShielding=1.5;
				passThrough=0.2;
			};
			class HitGlass1
			{
				armor=-12;
				explosionShielding=1;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass1";
				name="glass1";
			};
			class HitGlass2
			{
				armor=-12;
				explosionShielding=1;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass2";
				name="glass2";
			};
			class HitGlass3
			{
				armor=-12;
				explosionShielding=1;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass3";
				name="glass3";
			};
			class HitGlass4
			{
				armor=-12;
				explosionShielding=1;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass4";
				name="glass4";
			};
			class HitGlass5
			{
				armor=-12;
				explosionShielding=1;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass5";
				name="glass5";
			};
			class HitGlass6
			{
				armor=-12;
				explosionShielding=1;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass6";
				name="glass6";
			};
			class HitGlass7
			{
				armor=-12;
				explosionShielding=1;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass7";
				name="glass7";
			};
			class HitVRotor: HitVRotor
			{
				simulation="RHS_Hull_Helicopter";
				armorComponent="Hit_Tail";
				name="Hit_Rotor_Tail";
				armor=-80;
				minimalHit=-0.2;
				radius=0.30000001;
				explosionShielding=3;
				passThrough=0.5;
			};
			class HitHRotor: HitHRotor
			{
				armorComponent="Hit_Rotor_Main";
				name="Hit_Rotor_Main";
				armor=-90;
				radius=0.2;
				explosionShielding=0.5;
			};
			class HitAvionics: HitAvionics
			{
				armor=-40;
				name="elektronika";
				radius=0.050000001;
				explosionShielding=1.5;
			};
			class HitEngine: HitEngine
			{
				armorComponent="Hit_Engine";
				armor=-80;
				name="motor";
				passThrough=0.5;
				minimalHit=-0.12;
				explosionShielding=2;
				radius=0.27000001;
			};
			delete HitWinch;
		};
		class Damage;  //found empty after stripping
		irScanRangeMin=100;
		irScanRangeMax=1000;
		irScanToEyeFactor=2;
		class Components;
		class textureSources
		{
			class hidf_grey
			{
				factions[]=
				{
					"rhsgref_faction_hidf"
				};
			};
			class hidf_summer: hidf_grey;  //found empty after stripping
			class hidf_tropical: hidf_grey;  //found empty after stripping
			class hidf_olv: hidf_grey;  //found empty after stripping
			class hidf_tan: hidf_grey;  //found empty after stripping
			class un
			{
				factions[]=
				{
					"rhsgref_faction_un"
				};
			};
			class idap
			{
				factions[]=
				{
					"CIV_IDAP_F"
				};
			};
			class us_army
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd",
					"rhs_faction_usarmy_d"
				};
			};
			class us_army_med: us_army;  //found empty after stripping
			class black
			{
				factions[]=
				{
					"CIV_F"
				};
			};
			class iraq
			{
				factions[]=
				{
					"IND_F"
				};
			};
			class takistan
			{
				factions[]=
				{
					"OPF_F"
				};
			};
			class guerilla
			{
				factions[]=
				{
					"IND_G_F",
					"BLU_G_F",
					"OPF_G_F"
				};
			};
			class tan
			{
				factions[]=
				{
					"IND_G_F",
					"BLU_G_F",
					"OPF_G_F",
					"IND_F"
				};
			};
			class olive: tan;  //found empty after stripping
			class white: tan;  //found empty after stripping
		};
	};
	class rhs_uh1h_hidf: rhs_uh1h_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsgref_hidf_helipilot"
		};
		enableSweep=0;
		class textureSources: textureSources
		{
			class hidf_grey: hidf_grey;  //found empty after stripping
			class hidf_summer: hidf_summer;  //found empty after stripping
			class hidf_tropical: hidf_tropical;  //found empty after stripping
			class hidf_olv: hidf_olv;  //found empty after stripping
			class hidf_tan: hidf_tan;  //found empty after stripping
			class us_army: us_army;  //found empty after stripping
			class us_army_med: us_army_med;  //found empty after stripping
			class black: black;  //found empty after stripping
			class iraq: iraq;  //found empty after stripping
			class takistan: takistan;  //found empty after stripping
			class guerilla: guerilla;  //found empty after stripping
		};
		class Attributes
		{
			class uh1h_textures
			{
				control="ObjectTexture";
				data="ObjectTexture";
				tooltip="Select paint color.";
			};
		};
	};
	class rhs_uh1h_hidf_gunship: rhs_uh1h_hidf
	{
		forceInGarage=1;
		availableForSupportTypes[]=
		{
			"CAS_Heli",
			"Drop",
			"Transport"
		};
		enableSweep=1;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsgref\addons\rhsgref_air\uh1h\ui\RHS_UH1H_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FFAR_ARMY"
						};
						UIposition[]={0.57300001,0.44};
						maxweight=1200;
						attachment="rhs_mag_M151_19";
						bay=-1;
					};
					class pylon2: pylon1
					{
						UIposition[]={0.1,0.44};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						attachment[]=
						{
							"",
							""
						};
						displayname="<empty>";
					};
					class Light
					{
						attachment[]=
						{
							"rhs_mag_M151_7",
							"rhs_mag_M151_7"
						};
						displayname="Light";
					};
					class Heavy
					{
						attachment[]=
						{
							"rhs_mag_M151_19",
							"rhs_mag_M151_19"
						};
						displayname="Heavy";
					};
				};
			};
		};
	};
	class rhs_uh1h_hidf_unarmed: rhs_uh1h_hidf
	{
		forceInGarage=1;
		class Attributes: Attributes
		{
			class uh1h_textures: uh1h_textures;  //found empty after stripping
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret;  //found empty after stripping
		};
	};
	class rhs_uh1h_un: rhs_uh1h_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhsgref_cdf_un_pilot"
		};
		class Attributes;  //found empty after stripping
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret;  //found empty after stripping
		};
	};
	class rhs_uh1h_idap: rhs_uh1h_base
	{
		side=3;
		typicalCargo[]=
		{
			"C_IDAP_Pilot_01_F"
		};
		class Attributes;  //found empty after stripping
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret;  //found empty after stripping
		};
	};
	class UWreck_base_F;
	class Land_UH1H_Wreck_F: UWreck_base_F
	{
		keepHorizontalPlacement=1;
		icon="rhsgref\addons\rhsgref_air\uh1h\ui\icon_uh1h_ca.paa";
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H;  //found empty after stripping
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
	};
	class Plane: Air
	{
		class HitPoints;
		class EventHandlers;
		class NewTurret;
	};
	class Plane_Base_F: Plane
	{
		class NewTurret: NewTurret
		{
			class ViewGunner;
		};
		class Turrets;
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class ViewPilot;
	};
	class Plane_CAS_02_base_F;
	class O_Plane_CAS_02_F: Plane_CAS_02_base_F
	{
		class EventHandlers;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class EventHandlers;
		class Components;
	};
	class RHS_L159_base: Plane_Fighter_03_base_F
	{
		selectionDashboard="podsvit pristroju";
		class pilotCamera;  //found empty after stripping
		class EjectionSystem;  //found empty after stripping
		driverCanEject=1;
		class EventHandlers: EventHandlers
		{
			hit="";
			class RHS_EventHandlers
			{
				hit="_this call RHS_fnc_AI_eject";
				init="_this call rhs_fnc_decalsReadParams";
				getout="[_this select 0, _this select 2] call rhs_fnc_vs1_seatEjection";
				engine="[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass2
			{
				armor=1;
				material=-1;
				name="glass2";
				convexComponent="glass2";
				passThrough=0;
			};
			class HitPylon1
			{
				armor=-40;
				material=-1;
				name="hit_pylon_1";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon2
			{
				armor=-40;
				material=-1;
				name="hit_pylon_2";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon3
			{
				armor=-40;
				material=-1;
				name="hit_pylon_3";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon4
			{
				armor=-40;
				material=-1;
				name="hit_pylon_4";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon5
			{
				armor=-40;
				material=-1;
				name="hit_pylon_5";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon6
			{
				armor=-40;
				material=-1;
				name="hit_pylon_6";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
			class HitPylon7
			{
				armor=-40;
				material=-1;
				name="hit_pylon_7";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.69999999;
			};
		};
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"i1",
			"i2",
			"n1",
			"n2"
		};
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_air\l159\data\l159_body_1_co.paa",
			"\rhsgref\addons\rhsgref_air\l159\Data\l159_body_2_co.paa"
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[]={1,0,0};
				ambient[]={0.1,0,0};
				intensity=75;
				name="cerveny pozicni";
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class PositionGreen: PositionRed
			{
				color[]={0,1,0};
				ambient[]={0,0.1,0};
				name="zeleny pozicni";
			};
			class PositionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="light_nav_back";
			};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="exhaust_start";
				direction="exhaust_dir";
				effect="ExhaustsEffectJet";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="cerveny pozicni";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="zeleny pozicni";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vapour_R_S";
			};
		};
		envelope[]={0,0.15000001,1.1,3,5,5.8299999,6,5.8499999,5.5,4.8000002,3.5999999,1.8,0};
		weapons[]={};
		magazines[]={};
		class Damage;  //found empty after stripping
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"RHS_HP_AGM65",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_Hydra_USAF",
							"RHS_HP_AIM9",
							"RHS_HP_AIM120"
						};
						attachment="rhs_mag_Sidewinder";
						maxweight=200;
						UIposition[]={0.34999999,0.079999998};
						hitpoint="HitPylon1";
					};
					class Pylons2: Pylons1
					{
						attachment="rhs_mag_FFAR_7_USAF";
						maxweight=320;
						UIposition[]={0.345,0.13};
						hitpoint="HitPylon2";
					};
					class Pylons3: Pylons1
					{
						hardpoints[]=
						{
							"RHS_HP_AGM65",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_Hydra_USAF",
							"RHS_HP_LGB_500",
							"RHS_HP_BOMB_500_3x",
							"RHS_HP_AIM9",
							"RHS_HP_AIM120",
							"RHS_HP_ZPL20",
							"RHS_HP_L159_FUELPOD"
						};
						attachment="rhs_mag_mk82";
						maxweight=400;
						UIposition[]={0.34,0.18000001};
						hitpoint="HitPylon3";
					};
					class Pylons4: Pylons1
					{
						attachment="rhs_mag_zpl20_hei";
						maxweight=500;
						UIposition[]={0.27000001,0.28};
						hardpoints[]=
						{
							"RHS_HP_ZPL20",
							"RHS_HP_L159_FUELPOD"
						};
						hitpoint="HitPylon4";
					};
					class Pylons5: Pylons3
					{
						UIposition[]={0.33000001,0.38};
						mirroredMissilePos=3;
						hitpoint="HitPylon5";
					};
					class Pylons6: Pylons2
					{
						UIposition[]={0.33000001,0.43000001};
						mirroredMissilePos=2;
						hitpoint="HitPylon6";
					};
					class Pylons7: Pylons1
					{
						UIposition[]={0.34,0.47999999};
						mirroredMissilePos=1;
						hitpoint="HitPylon7";
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHSUSF_cm_ANALE40",
							"RHSUSF_cm_ANALE40_x2"
						};
						attachment="rhsusf_ANALE40_CMFlare_Chaff_Magazine_x2";
						maxweight=800;
						UIposition[]={0.625,0.27500001};
					};
				};
			};
		};
	};
	class rhs_l159_CDF: RHS_L159_base
	{
		side=2;
		rhs_decalParameters[]=
		{
			"['Number',[4,5],'AviaCDF']",
			"['Label',[2],'Aviation', 5]",
			"['Label',[3],'AviationSquadronsCDFGrey']"
		};
		typicalCargo[]=
		{
			"rhsgref_cdf_air_pilot"
		};
	};
	class rhs_l159_CDF_plamen: rhs_l159_CDF
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Pylons: Pylons
				{
					class Pylons1: Pylons1;  //found empty after stripping
					class Pylons2: Pylons2;  //found empty after stripping
					class Pylons3: Pylons3
					{
						attachment="rhs_mag_agm65b";
					};
					class Pylons4: Pylons4
					{
						attachment="rhs_mag_zpl20_mixed";
					};
					class Pylons5: Pylons5
					{
						attachment="rhs_mag_agm65b";
					};
					class Pylons6: Pylons6;  //found empty after stripping
					class Pylons7: Pylons7;  //found empty after stripping
					class cmDispenser: cmDispenser;  //found empty after stripping
				};
			};
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
	};
	class rhs_l159_CDF_CAP: rhs_l159_CDF
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Pylons: Pylons
				{
					class Pylons1: Pylons1;  //found empty after stripping
					class Pylons2: Pylons2
					{
						attachment="rhs_mag_aim120";
					};
					class Pylons3: Pylons3
					{
						attachment="rhs_mag_aim120";
					};
					class Pylons4: Pylons4;  //found empty after stripping
					class Pylons5: Pylons5
					{
						attachment="rhs_mag_aim120";
					};
					class Pylons6: Pylons6
					{
						attachment="rhs_mag_aim120";
					};
					class Pylons7: Pylons7;  //found empty after stripping
					class cmDispenser: cmDispenser;  //found empty after stripping
				};
			};
		};
	};
	class rhs_l159_CDF_CAS: rhs_l159_CDF
	{
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Pylons: Pylons
				{
					class Pylons1: Pylons1;  //found empty after stripping
					class Pylons2: Pylons2
					{
						attachment="rhs_mag_FFAR_7_USAF";
					};
					class Pylons3: Pylons3
					{
						attachment="rhs_mag_FFAR_7_USAF";
					};
					class Pylons4: Pylons4
					{
						attachment="rhs_mag_zpl20_mixed";
					};
					class Pylons5: Pylons5
					{
						attachment="rhs_mag_FFAR_7_USAF";
					};
					class Pylons6: Pylons6
					{
						attachment="rhs_mag_FFAR_7_USAF";
					};
					class Pylons7: Pylons7;  //found empty after stripping
					class cmDispenser: cmDispenser;  //found empty after stripping
				};
			};
		};
	};
	class RHS_L39_base: RHS_L159_base
	{
		thrustCoef[]={1.8,1.5,1.4,1.3,1.3,1.3,1.3,1.2,1.1,0.80000001,0.60000002,0.40000001,0.30000001,0,0,0};
		envelope[]={0,0.15000001,1.1,3,5,5.8299999,6,5.8499999,5.5,4.8000002,3.5999999,1.8,0};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="cerveny pozicni";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="zeleny pozicni";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vertex_left";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vertex_right";
			};
		};
		rhs_decalParameters[]=
		{
			"['Number',[4,5],'AviaCDF']",
			"['Label',[2],'Aviation', 4]",
			"['Label',[3],'AviationSquadronsCDF', 2]"
		};
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_air\L39\Data\l-39_body_co.paa",
			"\rhsgref\addons\rhsgref_air\L39\Data\l-39_body_1_co.paa"
		};
		class Damage;  //found empty after stripping
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax=1;
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				class Pos10Vector
				{
					pos0[]={0.51999998,0.029999999};
					pos10[]={2.02,1.23};
				};
				color[]={0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						pos[]={0.5,0.5};
					};
					class ImpactPoint
					{
						source="ImpactPoint";
						pos0[]={0.5,0.38};
						pos10[]={1.1799999,1.12};
					};
				};
				class Draw
				{
					condition="on";
					color[]={0.69,0.22,0};
					class ImpactPoint
					{
						class Cros
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.152353},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.087058797},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.098994903,-0.10773},
									1
								},
								
								{
									"ImpactPoint",
									{0.0565685,-0.061559901},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.14,6.65956e-009},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,3.8054599e-009},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.098994903,0.10773},
									1
								},
								
								{
									"ImpactPoint",
									{0.0565685,0.061559901},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-1.22392e-008,0.152353},
									1
								},
								
								{
									"ImpactPoint",
									{-6.9938202e-009,0.087058797},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.098994903,0.10773},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0565685,0.061559901},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.14,-1.8167901e-009},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,-1.03817e-009},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.098995,-0.10773},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0565685,-0.061559901},
									1
								},
								{}
							};
						};
						class Dot
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.0049999999},
									1
								},
								
								{
									"ImpactPoint",
									{0.0049999999,-0},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0049999999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0049999999,-0},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0049999999},
									1
								}
							};
						};
						class Ring
						{
							lineType=3;
							width=17;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.435294},
									1
								},
								
								{
									"ImpactPoint",
									{0.06944,-0.42867801},
									1
								},
								
								{
									"ImpactPoint",
									{0.13680001,-0.40904599},
									1
								},
								
								{
									"ImpactPoint",
									{0.2,-0.37696499},
									1
								},
								
								{
									"ImpactPoint",
									{0.25712001,-0.333435},
									1
								},
								
								{
									"ImpactPoint",
									{0.3064,-0.279807},
									1
								},
								
								{
									"ImpactPoint",
									{0.34639999,-0.217647},
									1
								},
								
								{
									"ImpactPoint",
									{0.37588,-0.148871},
									1
								},
								
								{
									"ImpactPoint",
									{0.39392,-0.075567096},
									1
								},
								
								{
									"ImpactPoint",
									{0.40000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.39392,0.075567096},
									1
								},
								
								{
									"ImpactPoint",
									{0.37588,0.148871},
									1
								},
								
								{
									"ImpactPoint",
									{0.34639999,0.217647},
									1
								},
								
								{
									"ImpactPoint",
									{0.3064,0.279807},
									1
								},
								
								{
									"ImpactPoint",
									{0.25712001,0.333435},
									1
								},
								
								{
									"ImpactPoint",
									{0.2,0.37696499},
									1
								},
								
								{
									"ImpactPoint",
									{0.13680001,0.40904599},
									1
								},
								
								{
									"ImpactPoint",
									{0.06944,0.42867801},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.435294},
									1
								},
								
								{
									"ImpactPoint",
									{-0.06944,0.42867801},
									1
								},
								
								{
									"ImpactPoint",
									{-0.13680001,0.40904599},
									1
								},
								
								{
									"ImpactPoint",
									{-0.2,0.37696499},
									1
								},
								
								{
									"ImpactPoint",
									{-0.25712001,0.333435},
									1
								},
								
								{
									"ImpactPoint",
									{-0.3064,0.279807},
									1
								},
								
								{
									"ImpactPoint",
									{-0.34639999,0.217647},
									1
								},
								
								{
									"ImpactPoint",
									{-0.37588,0.148871},
									1
								},
								
								{
									"ImpactPoint",
									{-0.39392,0.075567096},
									1
								},
								
								{
									"ImpactPoint",
									{-0.40000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.39392,-0.075567096},
									1
								},
								
								{
									"ImpactPoint",
									{-0.37588,-0.148871},
									1
								},
								
								{
									"ImpactPoint",
									{-0.34639999,-0.217647},
									1
								},
								
								{
									"ImpactPoint",
									{-0.3064,-0.279807},
									1
								},
								
								{
									"ImpactPoint",
									{-0.25712001,-0.333435},
									1
								},
								
								{
									"ImpactPoint",
									{-0.2,-0.37696499},
									1
								},
								
								{
									"ImpactPoint",
									{-0.13680001,-0.40904599},
									1
								},
								
								{
									"ImpactPoint",
									{-0.06944,-0.42867801},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.435294},
									1
								},
								{},
								{}
							};
						};
					};
					alpha=1;
				};
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar;  //found empty after stripping
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73",
							"RHS_HP_L159_FUELPOD"
						};
						attachment="rhs_mag_ub16_s5m1";
						maxweight=200;
						UIposition[]={0.34999999,0.41};
						hitpoint="HitPylon1";
					};
					class Pylons2: Pylons1
					{
						attachment="rhs_mag_ub16_s5ko";
						UIposition[]={0.34999999,0.15000001};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
				};
			};
		};
	};
	class rhs_l39_cdf: RHS_L39_base
	{
		side=2;
		typicalCargo[]=
		{
			"rhsgref_cdf_air_pilot"
		};
	};
	class Car_f;
	class rhs_vs1_seat: Car_f
	{
		hiddenSelections[]={};
		simulation="motorcycle";
		isBicycle=0;
		memoryPointTrack1L="";
		memoryPointTrack2L="";
		memoryPointsGetInCargo="Cargo";
		memoryPointsGetInCargoDir="Cargo dir";
		ejectSpeed[]={1,0,1};
		hideUnitInfo=1;
		hasdriver=0;
		weapons[]={};
		magazines[]={};
		fuelCapacity=0;
		secondaryExplosion=0;
		fuelExplosionPower=0;
		explosionEffect="";
		castCargoShadow=1;
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		class Turrets;  //found empty after stripping
		driveOnComponent[]={};
		class Eventhandlers;  //found empty after stripping
		SLX_XEH_DISABLED=1;
	};
	class rhs_l159_cdf_b_CDF: rhs_l159_CDF
	{
		side=1;
		forceInGarage=0;
	};
	class rhs_l159_cdf_b_CDF_plamen: rhs_l159_CDF_plamen
	{
		side=1;
		forceInGarage=0;
	};
	class rhs_l159_cdf_b_CDF_CAP: rhs_l159_CDF_CAP
	{
		side=1;
		forceInGarage=0;
	};
	class rhs_l159_cdf_b_CDF_CAS: rhs_l159_CDF_CAS
	{
		side=1;
		forceInGarage=0;
	};
	class rhs_l39_cdf_b_cdf: rhs_l39_cdf
	{
		side=1;
		forceInGarage=0;
	};
	class RHS_AN2_Base: Plane_Base_F
	{
		cabinOpening=0;
		simulation="airplaneX";
		icon="rhsgref\addons\rhsgref_air\AN2\data\UI\icon_an2_CA.paa";
		memoryPointsGetInDriver="pos cargo";
		memoryPointsGetInDriverDir="pos cargo dir";
		cargoGetInAction[]=
		{
			"GetInHigh"
		};
		cargoGetOutAction[]=
		{
			"GetOutHigh"
		};
		accuracy=0.15000001;
		cost=20000;
		gearRetracting=0;
		cargoIsCoDriver[]={1,0};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		attenuationEffectType="HeliAttenuation";
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.099999994,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.099999994,
			1.5
		};
		weapons[]={};
		magazines[]={};
		threat[]={0,0,0};
		airBrake=0;
		maxSpeed=258;
		landingSpeed=85;
		takeoffSpeed=90;
		landingAoa="rad(10)";
		flapsFrictionCoef=0.94999999;
		rudderInfluence=0.5;
		aileronSensitivity=0.40000001;
		elevatorSensitivity=0.40000001;
		envelope[]={0,0,0.43000001,1.2,2.3,2.4200001,3.53,7.1199999,8.5600004,11.05,9.3900003,7.9400001,5.1999998,2.8199999,0};
		angleOfIndicence=0;
		draconicForceXCoef=3.1500001;
		draconicForceYCoef=0.5;
		draconicForceZCoef=0.5;
		draconicTorqueXCoef=0.15000001;
		draconicTorqueYCoef=3.1500001;
		thrustCoef[]={1.4,1.3,1.2,1.2,1.1,1.1,1,1,0.89999998,0.69999999,0.5,0.30000001,0.1,0,0,0};
		maxOmega=2000;
		turnCoef=1.5;
		class Wheels
		{
			class Wheel_1
			{
				steering=1;
				side="left";
				width=0.30000001;
				mass=50;
				MOI=8;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=10;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				maxCompression=0.1;
				maxDroop=0.1;
				sprungMass=2400;
				springStrength=100000;
				springDamperRate=128000;
				longitudinalStiffnessPerUnitGravity=90;
				latStiffX=15;
				latStiffY=120;
				frictionVsSlipGraph[]=
				{
					{0,2},
					{0.5,1},
					{1,1}
				};
			};
			class Wheel_2: Wheel_1;  //found empty after stripping
			class Wheel_3: Wheel_2
			{
				steering=0;
				side="left";
				width=0.16;
				maxCompression=0.1;
				maxDroop=0.1;
				sprungMass=700;
				springStrength=1580000;
				springDamperRate=12000;
			};
		};
		wheelSteeringSensitivity=2;
		ejectSpeed[]={0,0,0};
		extCameraPosition[]={0,5,-20};
		lightOnGear=0;
		armor=25;
		damageResistance=0.00278;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=1.5;
				explosionShielding=1;
				passThrough=0.5;
				minimalHit=0;
				material=-1;
				radius=0.30000001;
				name="HitHull";
				depends="Total";
			};
			class HitEngine
			{
				armor=0.5;
				explosionShielding=1;
				passThrough=0.2;
				minimalHit=0.1;
				material=-1;
				radius=0.15000001;
				name="hit_engine";
				depends="0";
			};
			class HitFuel
			{
				armor=1.5;
				explosionShielding=2;
				passThrough=0.2;
				minimalHit=0;
				material=-1;
				radius=0.1;
				name="hit_fuel_l";
				depends="0";
			};
			class HitFuel2
			{
				armor=1.5;
				explosionShielding=2;
				passThrough=0.2;
				minimalHit=0;
				material=-1;
				radius=0.1;
				name="hit_fuel_r";
				depends="0";
			};
			class HitLAileron_link
			{
				armor=0.30000001;
				explosionShielding=0.89999998;
				passThrough=0.0099999998;
				minimalHit=0.029999999;
				material=-1;
				radius=0.1;
				name="hit_aileron_link_l";
				depends="0";
			};
			class HitLAileron_1
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.12;
				name="hit_aileron_lh";
				depends="HitLAileron_link*0.7";
			};
			class HitLAileron_2
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.1;
				name="hit_aileron_ld";
				depends="0";
			};
			class HitLAileron
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.12;
				name="hit_aileron_lh";
				depends="(HitLAileron_1 + HitLAileron_2)*0.5";
			};
			class HitRAileron_link
			{
				armor=0.30000001;
				explosionShielding=0.89999998;
				passThrough=0.0099999998;
				minimalHit=0.029999999;
				material=-1;
				radius=0.1;
				name="hit_aileron_link_r";
				depends="0";
			};
			class HitRAileron_1
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.12;
				name="hit_aileron_rh";
				depends="HitRAileron_link*0.7";
			};
			class HitRAileron_2
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.1;
				name="hit_aileron_rd";
				depends="0";
			};
			class HitRAileron
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.12;
				name="hit_aileron_rh";
				depends="(HitRAileron_1 + HitRAileron_2)*0.5";
			};
			class HitControlRear
			{
				armor=0.60000002;
				explosionShielding=0.1;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.039999999;
				material=-1;
				name="hit_control_rear";
				depends="0";
			};
			class HitLCRudder
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.15000001;
				name="hit_rudder";
				depends="HitControlRear";
			};
			class HitLCElevator
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.11;
				name="hit_elevator_l";
				depends="HitControlRear";
			};
			class HitRElevator
			{
				armor=1.5;
				explosionShielding=3;
				passThrough=0.1;
				minimalHit=0.1;
				material=-1;
				radius=0.11;
				name="hit_elevator_r";
				depends="HitControlRear";
			};
			class HitGlass1
			{
				armor=0.1;
				material=-1;
				name="glass1";
				passThrough=0;
			};
			class HitGlass2
			{
				armor=0.1;
				material=-1;
				name="glass2";
				passThrough=0;
			};
			class HitGlass3
			{
				armor=0.1;
				material=-1;
				name="glass3";
				passThrough=0;
			};
			class HitGlass4
			{
				armor=0.1;
				material=-1;
				name="glass4";
				passThrough=0;
			};
		};
		class Damage;  //found empty after stripping
		driveOnComponent[]={};
		driverLeftLegAnimName="pedal_l";
		driverRightLegAnimName="pedal_r";
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				startEngine=0;
				commanding=-1;
				weapons[]={};
				magazines[]={};
				memoryPointGun="machinegun";
				selectionFireAnim="zasleh";
				viewGunnerShadow=1;
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				enableManualFire=0;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				class ViewPilot: ViewPilot
				{
					minAngleX=-65;
					maxAngleX=85;
					initAngleX=0;
					minAngleY=-150;
					maxAngleY=150;
					initAngleY=0;
					minFov=0.30000001;
					maxFov=1.2;
					initFov=1;
				};
				isCopilot=1;
				primaryGunner=0;
				canEject=0;
				class HitPoints;  //found empty after stripping
				turretCanSee=15;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="";
						class Components: components
						{
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
						};
					};
				};
			};
		};
		class Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="";
				class Components: components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction="exhaust1_dir";
				effect="ExhaustsEffectPlane";
				position="exhaust1";
			};
		};
		class textureSources
		{
			class standardCDF
			{
				factions[]=
				{
					"rhsgref_faction_cdf_air"
				};
			};
			class aeroschrot
			{
				displayname="АэроШрот";
			};
			class airtak;  //found empty after stripping
			class military;  //found empty after stripping
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', [3,4], _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default";
						value="NoChange";
					};
					class AviaYellow
					{
						name="Aviation Yellow";
						value="AviaYellow";
					};
					class AviaBlue
					{
						name="Aviation Blue";
						value="AviaBlue";
					};
					class AviaRed
					{
						name="Aviation Red";
						value="AviaRed";
					};
					class AviaWhiteOut
					{
						name="Aviation White Out";
						value="AviaWhiteOut";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
						defaultValue="AviaCDF";
					};
					class Default
					{
						name="Default (White)";
						value="Default";
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
					class CDF
					{
						name="CDF";
						value="CDF";
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
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach [3,4]}else{[_this, [['Number', [3,4], _this getVariable ['rhs_decalNumber_type','AviaCDF'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail
			{
				tooltip="Define tail decal that will be drawn on vehicle";
				property="rhs_decalTail";
				control="Combo";
				expression="[_this,[['Label', [5], 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue=-1;
				class values
				{
					class Default
					{
						name="Default";
						value=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class Star
					{
						name="Red Star";
						value=2;
					};
					class CDF
					{
						name="CDF";
						value=4;
						defaultValue=4;
					};
				};
			};
			class door
			{
				property="door";
				control="slider";
				expression="_this animate ['door',_value];";
				defaultValue="0";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name="pos_light_still_white";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				intensity=75;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=1;
			};
			class RedStill
			{
				name="pos_light_still_red";
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=1;
			};
			class GreenStill
			{
				name="pos_light_still_green";
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=1;
			};
			class RedBlinking
			{
				name="pos_light_blink_red";
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				intensity=75;
				blinking=1;
				blinkingStartsOn=0;
				blinkingPattern[]={2.9000001,0.1};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class WhiteBlinking1
			{
				name="pos_light_blink1_white";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				intensity=100;
				blinking=1;
				blinkingPattern[]={0.1,2.9000001};
				blinkingPatternGuarantee=0;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.079999998;
			};
			class WhiteBlinking2: WhiteBlinking1
			{
				name="pos_light_blink2_white";
			};
			class WhiteBlinking3: WhiteBlinking1
			{
				name="pos_light_blink3_white";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vapour_R_S";
			};
			class WingTipLeftTop
			{
				effectName="WingVortices";
				position="body_vapour_L_E_T";
			};
			class WingTipRightTop
			{
				effectName="WingVortices";
				position="body_vapour_R_E_T";
			};
			class BodyLeftTop
			{
				effectName="BodyVortices";
				position="body_vapour_L_S_T";
			};
			class BodyRightTop
			{
				effectName="BodyVortices";
				position="body_vapour_R_S_T";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_air_init";
			};
		};
	};
	class RHS_AN2: RHS_AN2_Base
	{
		accuracy=0.5;
		side=2;
		typicalCargo[]=
		{
			"rhsgref_cdf_air_pilot"
		};
		rhs_decalParameters[]=
		{
			"['Number',[3,4],'AviaCDF']",
			"['Label',[5],'Aviation', 4]",
			"['Label',[6],'AviationSquadronsCDF']"
		};
	};
	class RHS_AN2_B: RHS_AN2
	{
		side=1;
		typicalCargo[]=
		{
			"rhsgref_cdf_b_air_pilot"
		};
	};
	class Module_F;
	class ModuleCAS_F: Module_F
	{
		class Arguments
		{
			class Vehicle
			{
				class values
				{
					class rhs_l159_CDF_CAS
					{
						name="L-159 (CAS)";
						value="rhs_l159_CDF_CAS";
					};
					class rhs_l39_cdf
					{
						name="L-39";
						value="rhs_l39_cdf";
					};
					class rhs_l159_cdf_b_cdf_CAS
					{
						name="L-159 (CAS)";
						value="rhs_l159_CDF_CAS";
					};
					class rhs_l39_cdf_b_cdf
					{
						name="L-39";
						value="rhs_l39_cdf";
					};
					class rhsgref_cdf_su25
					{
						name="Su-25";
						value="rhsgref_cdf_su25";
					};
					class rhsgref_cdf_b_su25
					{
						name="Su-25";
						value="rhsgref_cdf_b_su25";
					};
				};
			};
		};
	};
};
