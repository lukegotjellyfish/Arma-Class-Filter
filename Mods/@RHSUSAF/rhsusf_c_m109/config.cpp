class CfgPatches
{
	class rhsusf_c_m109
	{
		units[]=
		{
			"rhsusf_m109_usarmy",
			"rhsusf_m109d_usarmy"
		};
		weapons[]={};
		name="M109A6 SPH";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
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
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class MBT_01_base_F: Tank_F
	{
	};
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	};
	class rhsusf_m109tank_base: MBT_01_arty_base_F
	{
		driveOnComponent[]=
		{
			"slide"
		};
		accuracy=0.30000001;
		icon="\rhsusf\addons\rhsusf_m109\data\sa_m109a6_icon_ca.paa";
		typicalCargo[]={};
		side=1;
		driverForceOptics=1;
		driverOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
		simulation="tankX";
		normalSpeedForwardCoef=0.80000001;
		slowSpeedForwardCoef=0.64999998;
		maxSpeed=56;
		fuelCapacity=19.5;
		RHS_fuelCapacity=1885;
		tankTurnForce=450000;
		tankTurnForceAngMinSpd=0.5;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=2;
		accelAidForceYOffset=-2.3;
		accelAidForceSpd=2.73;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		torqueCurve[]=
		{
			{0.28260899,0.55015999},
			{0.43478301,0.81150198},
			{0.52173901,0.95207697},
			{0.60869598,1},
			{0.69565201,0.97763598},
			{0.78260899,0.94888198},
			{0.86956501,0.90734798},
			{1.34174,0}
		};
		engineMOI=19;
		enginePower=328;
		peakTorque=1565;
		minOmega=68;
		maxOmega=240.86;
		idleRPM=650;
		redRPM=2300;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=15;
		switchTime=0;
		latency=1.1;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.826087,0.60869598,0.89130402,0.60869598,0.97826099,0.60869598,1,0.652174};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.2349999,
				"N",
				0,
				"D1",
				4.6900001,
				"D2",
				3.1700001,
				"D3",
				1.58,
				"D4",
				0.79000002
			};
			TransmissionRatios[]=
			{
				"High",
				10.7
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				side="left";
				width=0.38999999;
				steering=0;
				mass=150;
				MOI=8.2667999;
				maxBrakeTorque=10000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				sprungMass=2857;
				springStrength=85000;
				springDamperRate=18428;
				dampingRate=727;
				dampingRateInAir=727;
				dampingRateDamaged=10;
				dampingRadteDestroyed=10000;
				latStiffX=1;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=32000;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
				};
			};
			class L3: L2
			{
			};
			class L4: L2
			{
			};
			class L5: L2
			{
			};
			class L6: L2
			{
			};
			class L7: L2
			{
			};
			class L8: L2
			{
			};
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
				side="right";
			};
			class R3: R2
			{
			};
			class R4: R2
			{
			};
			class R5: R2
			{
			};
			class R6: R2
			{
			};
			class R7: R2
			{
			};
			class R8: R2
			{
			};
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
		tracksSpeed=1.35;
		wheelCircumference=2.375;
		attenuationEffectType="TankAttenuation";
		extCameraPosition[]={0,2,-15};
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		cost=1500000;
		damageResistance=0.02;
		incomingMissileDetectionSystem=0;
		armor=200;
		armorStructural=600;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.40000001;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=0;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=0.44999999;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.139;
				explosionShielding=0.0089999996;
				radius=0.27000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
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
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-5;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						maxOutElev=40;
						maxOutTurn=115;
						minOutTurn=-115;
						weapons[]={};
						magazines[]={};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
						};
						startEngine=0;
						class HitPoints
						{
							class HitTurretCom
							{
								armor=0.30000001;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
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
								explosionShielding=0.60000002;
								radius=0.25;
								isGun=1;
							};
						};
						selectionFireAnim="zasleh3";
					};
				};
				weapons[]=
				{
					"rhs_weap_m284"
				};
				magazines[]=
				{
					"rhs_mag_155mm_m795_28",
					"rhs_mag_155mm_m825a1_2",
					"rhs_mag_155mm_485_2",
					"rhs_mag_155mm_m712_2",
					"rhs_mag_155mm_m731_1",
					"rhs_mag_155mm_raams_1",
					"rhs_mag_155mm_m864_3"
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				minElev=-5;
				maxElev=80;
				initElev=10;
				maxHorizontalRotSpeed=0.36500001;
				lockWhenVehicleSpeed=3;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={4,5};
					};
					class Medium: Wide
					{
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				forceHideGunner=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="vez";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.079999998;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
					};
				};
			};
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
		};
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		class Damage
		{
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
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaustr";
				direction="exhaustr_dir";
				effect="ExhaustEffectTankSide";
			};
		};
		armorLights=0.1;
		class Attributes
		{
			class rhs_hideIFFPanel
			{
				property="rhs_hideIFFPanel";
				control="CheckboxNumber";
				expression="_this animate ['IFF_Panels_Hide',_value,true]";
				defaultValue="0";
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
					class rhs_mag_155mm_m795_28
					{
						name="M795 HE round";
						value="rhs_mag_155mm_m795_28";
						defaultValue="rhs_mag_155mm_m795_28";
					};
				};
			};
			class rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #1. Max 46. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',46,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #2 slot [Smoke rounds]";
				property="rhs_ammoslot_2_type";
				class values
				{
					class 6Rnd_155mm_Mo_smoke
					{
						name="M825A1 Smoke round";
						value="6Rnd_155mm_Mo_smoke";
						defaultValue="6Rnd_155mm_Mo_smoke";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #2. Max 46. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #3 slot [Cluster rounds]";
				property="rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_155mm_m864_3
					{
						name="M864 Cluster round";
						value="rhs_mag_155mm_m864_3";
						defaultValue="rhs_mag_155mm_m864_3";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #3. Max 46. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #4 slot [Laser guided rounds]";
				property="rhs_ammoslot_4_type";
				class values
				{
					class rhs_mag_155mm_m712_2
					{
						name="M712 LG round";
						value="rhs_mag_155mm_m712_2";
						defaultValue="rhs_mag_155mm_m712_2";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				tooltip="Define number of rounds stored inside of type #4. Max 46. Leave -1 for default loadout";
				property="rhs_ammoslot_4";
			};
			class rhs_ammoslot_5_type: rhs_ammoslot_1_type
			{
				tooltip="Define type of shell for #5 slot [Special rounds]";
				property="rhs_ammoslot_5_type";
				class values
				{
					class rhs_mag_155mm_raams_1
					{
						name="RAAMS AT mine round";
						value="rhs_mag_155mm_raams_1";
						defaultValue="rhs_mag_155mm_raams_1";
					};
					class rhs_mag_155mm_m731_1
					{
						name="M731 AP mine round";
						value="rhs_mag_155mm_m731_1";
						defaultValue="rhs_mag_155mm_m731_1";
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
		};
	};
	class rhsusf_m109_usarmy: rhsusf_m109tank_base
	{
	};
	class rhsusf_m109d_usarmy: rhsusf_m109_usarmy
	{
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class Proxyrhsusf_m109a6_hull: ProxyRetex
	{
	};
};
