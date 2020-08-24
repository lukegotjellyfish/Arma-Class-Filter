class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class m2_doors
			{
				file="\rhsusf\addons\rhsusf_c_a2port_armor\scripts\m2_doors.sqf";
				description="M2 doors open/closed state handling";
			};
			class hatch_control
			{
				file="\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_hatch_control.sqf";
				description="Hatch control";
			};
			class hatch_control_ui_eh
			{
				file="\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_hatch_control_ui_eh.sqf";
				description="Hatch control";
			};
			class turretAction
			{
				file="\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_turretAction.sqf";
				description="Hatch control";
			};
			class m2_handleWeaponVG
			{
				file="\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_m2_handleWeaponVG.sqf";
			};
		};
	};
};
class CfgAnimationSourceSounds
{
	class ServoRampSound_2;
	class RHS_Ramp: ServoRampSound_2
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.01,0.02]) * (phase factor[0.99,0.98])";
			sound0[]=
			{
				"rhsusf\addons\rhsusf_a2port_armor\data\sounds\ServoRampSound_1",
				1,
				1,
				60
			};
			sound1[]=
			{
				"rhsusf\addons\rhsusf_a2port_armor\data\sounds\ServoRampSound_2",
				1,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				0.5,
				"sound1",
				0.5
			};
		};
	};
};
class RscPicture;
class CfgPatches
{
	class RHS_US_A2Port_Armor
	{
		units[]=
		{
			"RHS_M2A2",
			"RHS_M2A2_BUSKI",
			"RHS_M2A3",
			"RHS_M2A3_BUSKI",
			"RHS_M2A3_BUSKIII",
			"RHS_M6",
			"RHS_M2A2_wd",
			"RHS_M2A2_BUSKI_wd",
			"RHS_M2A3_wd",
			"RHS_M2A3_BUSKI_wd",
			"RHS_M2A3_BUSKIII_wd",
			"RHS_M6_wd"
		};
		weapons[]={};
		name="M2 Bradley IFV";
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
		class CommanderOptics;
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
		class EventHandlers;
	};
	class APC_Tracked_03_base_F: Tank_F;  //found empty after stripping
	class RHS_M2A2_Base: APC_Tracked_03_base_F
	{
		simulation="tankX";
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		fuelCapacity=24.15;
		RHS_fuelCapacity=462;
		maxSpeed=66;
		tracksSpeed=10;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		tankTurnForce=450000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.87;
		accelAidForceCoef=2;
		accelAidForceYOffset=-4;
		accelAidForceSpd=4.23;
		torqueCurve[]=
		{
			{0.30769199,0.51807201},
			{0.384615,0.85542202},
			{0.53846198,1},
			{0.57692301,0.94578302},
			{0.65384603,0.909639},
			{0.76923102,0.87349403},
			{0.90384603,0.843373},
			{1.0296201,0}
		};
		engineMOI=5;
		enginePower=447;
		peakTorque=1660;
		minOmega=84;
		maxOmega=272.26999;
		idleRPM=800;
		redRPM=2600;
		thrustDelay=0.30000001;
		brakeIdleSpeed=1.78;
		switchTime=0.1;
		latency=1;
		clutchStrength=35;
		engineLosses=25;
		transmissionLosses=15;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.384615,0.384615,0,0.92307699,0.384615,0.96153802,0.53846198,0.96153802,0.57692301,1,0.69230801};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.2,
				"N",
				0,
				"D1",
				4.1999998,
				"D2",
				2.23,
				"D3",
				1.22,
				"D4",
				0.83899999
			};
			TransmissionRatios[]=
			{
				"High",
				14.75
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				steering=0;
				width=0.40000001;
				mass=130;
				MOI=10.0392;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				maxBrakeTorque=6520;
				sprungMass=2500;
				springStrength=256250;
				springDamperRate=14811;
				dampingRate=1088;
				dampingRateInAir=1088;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3.5;
				latStiffY=45;
				longitudinalStiffnessPerUnitGravity=14000;
				frictionVsSlipGraph[]=
				{
					{0,0.44999999},
					{0.31999999,1},
					{0.60000002,0.86000001}
				};
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
			class L7: L2;  //found empty after stripping
			class L9: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				suspTravelDirection[]={0.125,-1,0};
				side="right";
			};
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
			class R9: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
		};
		nameSound="veh_vehicle_APC_s";
		driveOnComponent[]=
		{
			"slide",
			"trackL",
			"trackR"
		};
		MapSize=7;
		displayname="M2 Bradley";
		accuracy=0.30000001;
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		rhs_hasSmokeCap=1;
		reportOwnPosition=1;
		LODDriverTurnedIn=1100;
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=0;
		viewCargoShadow=1;
		viewCargoShadowDiff=0.050000001;
		viewCargoShadowAmb=0.5;
		headGforceLeaningFactor[]={0.015,0.011,0.015};
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				displayName="Desert";
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				displayName="Olive";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		driverOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
		DriverForceOptics=0;
		radarType=1;
		LockDetectionSystem=0;
		incomingMissileDetectionSystem=0;
		irtarget=1;
		irScanGround=0;
		threat[]={0.89999998,0.89999998,0.40000001};
		armor=290;
		armorStructural=280;
		explosionShielding=15;
		class HitPoints: HitPoints
		{
			class HitHull_Structural
			{
				armor=-600;
				name="Hit_Engine";
				passThrough=0;
				minimalHit=-0.22;
				explosionShielding=0;
				radius=0;
			};
			class HitHull: HitHull
			{
				armor=-110;
				name="Hit_Hull";
				armorComponent="Hit_Hull";
				passThrough=0;
				minimalHit=-0.15000001;
				explosionShielding=0.0099999998;
				radius=0.1;
				depends="HitHull_Structural";
			};
			class HitEngine: HitEngine
			{
				armor=-100;
				name="Hit_Engine";
				armorComponent="Hit_Engine";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0089999996;
				radius=0.17;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				armorComponent="Hit_TrackL";
				name="Hit_TrackL";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				armorComponent="Hit_TrackR";
				name="Hit_TrackR";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class Hit_LightL
			{
				armor=-10;
				name="l svetlo";
				passThrough=0;
				minimalHit=-0.1;
				explosionShielding=1;
				radius=0;
			};
			class Hit_LightR: Hit_LightL
			{
				name="p svetlo";
			};
			class Hit_Optics_Dvr_Peri
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optics_Dvr_Peri";
				passThrough=0;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				lockWhenDriverOut=1;
				minElev=-9;
				maxElev=57;
				initElev=0;
				showCrewAim=0;
				allowTabLock=0;
				maxhorizontalrotspeed=1.04;
				maxverticalrotspeed=1.04;
				stabilizedinaxes=3;
				startengine=0;
				hideWeaponsGunner=1;
				selectionFireAnim="zasleh2";
				weapons[]=
				{
					"RHS_weap_M242BC",
					"rhs_weap_m240_bradley_coax",
					"Rhs_weap_TOW_Launcher",
					"rhs_weap_fcs_ammo"
				};
				magazines[]=
				{
					"rhs_mag_1100Rnd_762x51_M240",
					"rhs_mag_1100Rnd_762x51_M240",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2BB",
					"rhs_laserfcsmag"
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={4};
						hitPoint="Hit_Optics_Gnr";
					};
					class Narrow: Wide
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						minElev=-5;
						maxElev=5;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						hideWeaponsGunner=1;
						weapons[]=
						{
							"rhsusf_weap_M257_8"
						};
						magazines[]=
						{
							"rhsusf_mag_L8A3_8"
						};
						class ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.067000002;
							maxFov=0.155;
						};
						class OpticsIn
						{
							class VisionBlock
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initfov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal",
									"NVG"
								};
								hitPoint="Hit_Optics_Cdr_Peri";
							};
							class Wide
							{
								camPos="gunnerview";
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.175;
								minFov=0.175;
								maxFov=0.175;
								visionMode[]=
								{
									"Normal",
									"Ti"
								};
								thermalMode[]={4};
								hitPoint="Hit_Optics_Gnr";
							};
							class Narrow: Wide
							{
								initFov=0.0583333;
								minFov=0.0583333;
								maxFov=0.0583333;
							};
						};
						startEngine=0;
						showCrewAim=0;
						allowTabLock=0;
						class HitPoints
						{
							class HitTurretCom
							{
								armor=0.30000001;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.001;
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
								explosionShielding=0.001;
								radius=0.25;
								isGun=1;
							};
							class Hit_Optics_Cdr_Peri
							{
								armor=-40;
								explosionShielding=0;
								name="";
								armorComponent="Hit_Optics_Cdr_Peri";
								passThrough=0;
							};
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=-60;
						armorComponent="Hit_Turret";
						name="vez";
						passThrough=0;
						minimalHit=-0.30000001;
						explosionShielding=0.001;
						radius=0.079999998;
						isTurret=1;
					};
					class HitGun
					{
						armor=-60;
						armorComponent="Hit_Gun";
						name="zbran";
						passThrough=0;
						minimalHit=-0.30000001;
						explosionShielding=0.001;
						radius=0.1;
						isGun=1;
					};
					class Hit_Optics_Gnr
					{
						armor=-40;
						explosionShielding=0;
						name="";
						armorComponent="Hit_Optics_Gnr";
						passThrough=0;
					};
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectTankSide";
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=7;
			minAngleX=-15;
			maxAngleX=25;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				hitpoint="Hit_Optics_Dvr_Peri";
			};
		};
		class EventHandlers: EventHandlers;  //found empty after stripping
		armorLights=0.1;
		class Attributes
		{
			class rhs_hideIFFPanel
			{
				displayName="Hide IFF Panel";
				property="rhs_hideIFFPanel";
				control="CheckboxNumber";
				expression="_this animate ['IFF_Panels_Hide',_value,true]";
				defaultValue="0";
			};
			class OpenRamp
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Open rear ramp";
				property="OpenRamp";
				expression="_this animateDoor ['ramp', _value,true];_this setVariable ['ramp_handler',_value,true]";
			};
		};
	};
	class RHS_M2A2: RHS_M2A2_Base
	{
		displayName="M2A2ODS";
		side=1;
		damageResistance=0.01189;
		class Damage;  //found empty after stripping
	};
	class RHS_M2A2_early: RHS_M2A2
	{
		displayName="M2A2";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_weap_M242BC_manual",
					"rhs_weap_m240veh",
					"rhs_weap_TOW_Launcher"
				};
				magazines[]=
				{
					"rhs_mag_1100Rnd_762x51_M240",
					"rhs_mag_1100Rnd_762x51_M240",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_2Rnd_TOW2",
					"rhs_mag_2Rnd_TOW2",
					"rhs_mag_2Rnd_TOW2",
					"rhs_mag_2Rnd_TOW2"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics;  //found empty after stripping
				};
			};
		};
	};
	class RHS_M2A2_BUSKI: RHS_M2A2
	{
		displayName="M2A2ODS (BUSK I)";
		damageResistance=0.01101;
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				displayName="Desert";
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				displayName="Olive";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e45";
				armorComponent="e45";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
		};
	};
	class RHS_M2A3: RHS_M2A2
	{
		displayName="M2A3";
		damageResistance=0.01189;
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				displayName="Desert";
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				displayName="Olive";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		class HitPoints: HitPoints
		{
			class Hit_Optics_Dvr_DVE
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optics_Dvr_DVE";
				passThrough=0;
			};
			class Hit_Optics_Dvr_RearCam
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optics_Dvr_RearCam";
				passThrough=0;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_1100Rnd_762x51_M240",
					"rhs_mag_1100Rnd_762x51_M240",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_2Rnd_TOW2B_AERO",
					"rhs_mag_2Rnd_TOW2B_AERO",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2BB",
					"rhs_laserfcsmag"
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						hitPoint="Hit_Optics_Gnr";
					};
					class Narrow: Wide
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow2x: Narrow
					{
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Narrow4x: Narrow
					{
						initFov=0.0145833;
						minFov=0.0145833;
						maxFov=0.0145833;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						stabilizedInAxes="StabilizedInAxesBoth";
						class ViewOptics: ViewOptics
						{
							initFov=0.46599999;
							minFov=0.015;
							maxFov=0.46599999;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={0,1};
						};
						minElev=-22;
						maxElev=60;
						minTurn=-360;
						maxTurn=360;
						class OpticsIn
						{
							class Ultrawide
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal",
									"Ti"
								};
								thermalMode[]={0,1};
								hitPoint="Hit_Optics_Cdr_CIV";
							};
							class Wide: Ultrawide
							{
								initFov=0.175;
								minFov=0.175;
								maxFov=0.175;
							};
							class Narrow: Ultrawide
							{
								initFov=0.0583333;
								minFov=0.0583333;
								maxFov=0.0583333;
							};
							class Narrow2x: Narrow
							{
								initFov=0.0291667;
								minFov=0.0291667;
								maxFov=0.0291667;
							};
							class Narrow4x: Narrow
							{
								initFov=0.0145833;
								minFov=0.0145833;
								maxFov=0.0145833;
							};
						};
						class HitPoints: HitPoints
						{
							class Hit_Optics_Cdr_CIV
							{
								armor=-40;
								explosionShielding=0;
								name="";
								armorComponent="Hit_Optics_Cdr_CIV";
								passThrough=0;
							};
						};
					};
				};
			};
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos="view_driver";
				visionMode[]=
				{
					"Normal"
				};
				hitpoint="Hit_Optics_Dvr_Peri";
			};
			class DVE_Wide: Wide
			{
				camPos="view_DVE";
				visionMode[]=
				{
					"TI"
				};
				thermalMode[]={0,1};
				initFov=1.07692;
				minFov=1.07692;
				maxFov=1.07692;
				hitpoint="Hit_Optics_Dvr_DVE";
			};
			class DVS_Rear: DVE_Wide
			{
				camPos="view_rear";
				camDir="view_rear_dir";
				hitpoint="Hit_Optics_Dvr_RearCam";
			};
		};
	};
	class RHS_M2A3_BUSKI: RHS_M2A3
	{
		rhs_duke_type="rhsusf_duke_m1a2";
		displayName="M2A3 (BUSK I)";
		damageResistance=0.01189;
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				displayName="Desert";
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				displayName="Olive";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
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
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e45";
				armorComponent="e45";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
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
						isPersonTurret=0;
						weapons[]=
						{
							"rhsusf_weap_M257_8",
							"rhsusf_weap_duke"
						};
						magazines[]=
						{
							"rhsusf_mag_L8A3_8",
							"rhsusf_mag_duke"
						};
					};
				};
			};
		};
		class Attributes: Attributes
		{
			class rhs_hideIFFPanel: rhs_hideIFFPanel;  //found empty after stripping
			class rhs_hideDUKE: rhs_hideIFFPanel
			{
				displayName="hide DUKE antennas";
				property="rhs_hideDUKE";
				expression="_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[0,0]]};";
			};
			class OpenRamp: OpenRamp;  //found empty after stripping
		};
		class EventHandlers: EventHandlers
		{
			class rhs_duke
			{
				handleDamage="_this call rhs_fnc_duke_destruction";
			};
		};
	};
	class RHS_M2A3_BUSKIII: RHS_M2A3_BUSKI
	{
		rhs_duke_type="rhsusf_duke";
		displayName="M2A3 (BUSK III)";
		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				displayName="Desert";
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				displayName="Olive";
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		damageResistance=0.01189;
		class HitPoints: HitPoints
		{
			class era_46_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e46";
				armorComponent="e46";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_47_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e47";
				armorComponent="e47";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_48_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e48";
				armorComponent="e48";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_49_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e49";
				armorComponent="e49";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_50_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e50";
				armorComponent="e50";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_51_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e51";
				armorComponent="e51";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_52_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e52";
				armorComponent="e52";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_53_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e53";
				armorComponent="e53";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_54_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e54";
				armorComponent="e54";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_55_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e55";
				armorComponent="e55";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_56_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e56";
				armorComponent="e56";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_57_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e57";
				armorComponent="e57";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_58_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e58";
				armorComponent="e58";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
			class era_59_hitpoint
			{
				simulation="RHS_ERA_BUSK";
				armor=-150;
				material=-1;
				name="e59";
				armorComponent="e59";
				passThrough=0;
				minimalHit=-0.40000001;
				explosionShielding=0.0070000002;
				radius=0.16;
			};
		};
		class Damage;  //found empty after stripping
	};
	class RHS_M2A3_BUSKIII_wd: RHS_M2A3_BUSKIII;  //found empty after stripping
	class RHS_M6: RHS_M2A2_Base
	{
		displayName="M6A2";
		side=1;
		damageResistance=0.01101;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_weap_M242BC",
					"rhs_weap_m240_bradley_coax",
					"Rhs_weap_stinger_Launcher",
					"rhs_weap_fcs_ammo"
				};
				magazines[]=
				{
					"rhs_mag_1100Rnd_762x51_M240",
					"rhs_mag_1100Rnd_762x51_M240",
					"Rhs_mag_4Rnd_stinger",
					"Rhs_mag_4Rnd_stinger",
					"Rhs_mag_4Rnd_stinger",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_mag_70Rnd_25mm_M242_APFSDS",
					"rhs_mag_230Rnd_25mm_M242_HEI",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
			};
		};
		class Damage;  //found empty after stripping
		threat[]={0.89999998,0.30000001,1};
	};
	class RHS_M2A2_wd: RHS_M2A2;  //found empty after stripping
	class RHS_M2A2_BUSKI_WD: RHS_M2A2_BUSKI;  //found empty after stripping
	class RHS_M2A3_BUSKI_wd: RHS_M2A3_BUSKI;  //found empty after stripping
	class RHS_M2A3_wd: RHS_M2A3;  //found empty after stripping
	class RHS_M6_wd: RHS_M6
	{
		displayName="M6A2";
	};
};
