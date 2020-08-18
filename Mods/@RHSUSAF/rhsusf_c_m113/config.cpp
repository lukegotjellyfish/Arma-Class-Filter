class CfgPatches
{
	class rhsusf_c_m113
	{
		units[]=
		{
			"rhsusf_m113_usarmy",
			"rhsusf_m113_usarmy_supply",
			"rhsusf_m113_usarmy_unarmed",
			"rhsusf_m113_usarmy_medical",
			"rhsusf_m113_usarmy_M240",
			"rhsusf_m113_usarmy_MK19",
			"rhsusf_m113_usarmy_M2_90",
			"rhsusf_m113_usarmy_MK19_90",
			"rhsusf_m113d_usarmy",
			"rhsusf_m113d_usarmy_supply",
			"rhsusf_m113d_usarmy_unarmed",
			"rhsusf_m113d_usarmy_medical",
			"rhsusf_m113d_usarmy_M240",
			"rhsusf_m113d_usarmy_MK19"
		};
		weapons[]={};
		name="M113A3 APC";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgFunctions
{
	class RHSUSF
	{
		tag="RHSUSF";
		class functions
		{
			class hatch_control
			{
				file="\rhsusf\addons\rhsusf_c_m113\scripts\rhs_hatch_control.sqf";
				description="Hatch control";
			};
			class hatch_control_ui_eh
			{
				file="\rhsusf\addons\rhsusf_c_m113\scripts\rhs_hatch_control_ui_eh.sqf";
				description="Hatch control";
			};
			class turretAction
			{
				file="\rhsusf\addons\rhsusf_c_m113\scripts\rhs_turretAction.sqf";
				description="Hatch control";
			};
		};
	};
};
class RscPicture;
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
		class CommanderOptics;
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
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class EventHandlers;
	};
	class rhsusf_m113tank_base: APC_Tracked_02_base_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_APC_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_APC_p"
				};
			};
		};
		nameSound="veh_vehicle_APC_s";
		accuracy=0.30000001;
		typicalCargo[]={};
		side=1;
		hasGunner=1;
		hasCommander=0;
		HeadAimDown=19;
		incomingMissileDetectionSystem=0;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
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
		simulation="tankX";
		normalSpeedForwardCoef=0.81999999;
		slowSpeedForwardCoef=0.64999998;
		maxSpeed=72;
		fuelCapacity=24;
		RHS_fuelCapacity=360;
		tankTurnForce=400000;
		tankTurnForceAngMinSpd=0.5;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=4;
		accelAidForceYOffset=-3.3;
		accelAidForceSpd=3.23;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.1;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=0.60000002;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		waterResistanceCoef=0.47499999;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		torqueCurve[]=
		{
			{0.22,0.58441597},
			{0.40000001,0.64675301},
			{0.5,0.82467502},
			{0.60000002,0.968831},
			{0.72000003,1},
			{0.80000001,0.964935},
			{0.89999998,0.92467499},
			{1.1056,0}
		};
		engineMOI=10;
		enginePower=205;
		peakTorque=770;
		minOmega=60;
		maxOmega=261.79999;
		idleRPM=550;
		redRPM=2500;
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=15;
		switchTime=0.1;
		latency=0.1;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.40000001,0.40000001,0,0.83999997,0.56,0.94,0.56,0.95999998,0.56,1,0.60000002};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-6.6199999,
				"N",
				0,
				"D1",
				4.1599998,
				"D2",
				2.1400001,
				"D3",
				1.46,
				"D4",
				1.02
			};
			TransmissionRatios[]=
			{
				"High",
				12.3
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				10
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.60000002;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				width=0.36000001;
				steering=0;
				mass=100;
				MOI=7.2199998;
				maxBrakeTorque=3000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
				sprungMass=1250;
				springStrength=163500;
				springDamperRate=7458;
				dampingRate=700;
				dampingRateInAir=700;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=30;
				longitudinalStiffnessPerUnitGravity=25000;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
				};
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
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
		extCameraPosition[]={0,2,-11};
		driverOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
		DriverForceOptics=0;
		cost=1500000;
		damageResistance=0.0040000002;
		hideproxyincombat=1;
		LODDriverTurnedIn=1100;
		LODDriverTurnedOut=0;
		headGforceLeaningFactor[]={0.015,0.011,0.015};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffectBig";
			};
		};
		armor=200;
		armorStructural=350;
		explosionShielding=70;
		minTotalDamageTreshold=0.40000001;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=5.9000001;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0049999999;
				radius=0.0099999998;
			};
			class HitEngine: HitEngine
			{
				armor=0.44999999;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.039000001;
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
			class HitFuel
			{
				armor=0.25;
				material=-1;
				name="palivo";
				passThrough=0.5;
				explosionShielding=0.5;
				minimalHit=0.69999999;
				radius=0.30000001;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;  //found empty after stripping
				animationsourcehatch="";
				memoryPointGun[]=
				{
					"usti hlavne"
				};
				weapons[]=
				{
					"RHS_M2",
					"rhsusf_weap_M259"
				};
				magazines[]=
				{
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhsusf_mag_L8A3_8",
					"rhsusf_mag_L8A3_8",
					"rhsusf_mag_L8A3_8"
				};
				canUseScanners=0;
				allowTabLock=0;
				isPersonTurret=0;
				usePip=0;
				commanding=2;
				minElev=-10;
				initElev=0;
				maxElev=60;
				forceHideGunner=0;
				canHideGunner=0;
				lodturnedout=1000;
				lodturnedin=1000;
				lodopticsout=1000;
				lodopticsin=1000;
				stabilizedInAxes=0;
				selectionFireAnim="zasleh";
				primaryGunner=1;
				primaryObserver=0;
				startEngine=0;
				maxhorizontalrotspeed=1.04;
				maxverticalrotspeed=1.04;
				soundAttenuationTurret="HeliAttenuationGunner";
				class ViewOptics: RCWSOptics
				{
					initFov=0.375;
					minFov=0.375;
					maxFov=0.375;
					visionMode[]=
					{
						"Normal"
					};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.75;
					minFov=0.375;
					maxFov=0.75;
					visionMode[]={};
				};
				class OpticsIn
				{
					class ViewOptics: ViewGunner;  //found empty after stripping
				};
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
						radius=0.25;
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
				class CommanderOptics;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=7;
				isPersonTurret=1;
				animationSourceHatch="rear_hatch_handler_2";
				rhs_hatch_control_depeneds[]=
				{
					"rear_hatch_handler_1"
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-120},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-15.0098,-171.6232},
						{-16.6821,-154.9577},
						{-11.7215,-148.149},
						{-9.7461004,-147.7804},
						{-9.8556004,-146.7728},
						{-11.4685,-146.3199},
						{-11.573,-145.9176},
						{-16.224001,-137.448},
						{-11.0125,-100.2467},
						{9.7255001,-98.4888},
						{18.691099,-96.8685},
						{-9.7613001,-96.508797},
						{23.919901,-91.865501},
						{27.0373,-83.602203},
						{27.0452,-68.942299},
						{21.079599,-57.9417},
						{19.9345,-56.851799},
						{12.8666,-54.0844},
						{-2.7019,-45.401199},
						{-2.7096,-44.2127},
						{-0.27360001,-43.946999},
						{0.1972,-38.468899},
						{-1.9929,-37.497101},
						{-2.2836001,-35.1064},
						{-0.0074,-34.837898},
						{-0.071500003,-32.487301},
						{-2.0306001,-31.7878},
						{-5.3829002,-23.160299},
						{0.13070001,-21.0844},
						{-8.0523996,-10.9118},
						{-19.308201,20.7243},
						{-18.4856,31.604601},
						{-12.0216,43.6287},
						{-8.3881998,45.7286},
						{-19.8808,58.284801},
						{-18.524,94.675903},
						{-14.4017,104.7679},
						{-11.3235,106.2995},
						{-12.9417,112.3525},
						{-14.7703,127.5907},
						{-9.6984997,128.7473},
						{-9.2637997,131.5782},
						{-9.9322004,162.42349},
						{-9.1395998,170.77361}
					};
				};
			};
		};
		class Damage;  //found empty after stripping
		smokeLauncherGrenadeCount=4;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=90;
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
		armorLights=0.1;
		class EventHandlers: EventHandlers;  //found empty after stripping
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
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=7;
			minAngleX=-45;
			maxAngleX=35;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
		};
		class Attributes
		{
			class rhs_hideIFFPanel
			{
				property="rhs_hideIFFPanel";
				control="CheckboxNumber";
				expression="_this animate ['IFF_Panels_Hide',_value,true]";
				defaultValue="0";
			};
			class rhs_openRamp
			{
				property="rhs_openRamp";
				control="CheckboxNumber";
				expression="_this animateDoor ['ramp',_value,true]";
				defaultValue="0";
			};
		};
	};
	class rhsusf_m113_usarmy: rhsusf_m113tank_base;  //found empty after stripping
	class rhsusf_m113_usarmy_supply: rhsusf_m113_usarmy
	{
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
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
		memoryPointSupply="doplnovani";
		transportAmmo=300000;
		supplyRadius=9.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
		};
	};
	class rhsusf_m113_usarmy_unarmed: rhsusf_m113tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;  //found empty after stripping
				weapons[]=
				{
					"rhsusf_weap_M259"
				};
				magazines[]=
				{
					"rhsusf_mag_L8A3_8",
					"rhsusf_mag_L8A3_8",
					"rhsusf_mag_L8A3_8"
				};
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_1";
				soundServoVertical[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					10
				};
				minElev=-10;
				maxElev=40;
				initOutElev=0;
				minTurn=-115;
				maxTurn=115;
				initOutTurn=1;
				selectionFireAnim="";
				primaryObserver=0;
				class ViewGunner: ViewGunner
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={2,3};
				};
				startEngine=0;
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
			};
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
		};
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class Desert: Desert;  //found empty after stripping
			class Olive: Olive;  //found empty after stripping
		};
	};
	class rhsusf_m113_usarmy_medical: rhsusf_m113_usarmy_unarmed
	{
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class Desert: Desert;  //found empty after stripping
			class Olive: Olive;  //found empty after stripping
		};
		attendant=1;
		memoryPointSupply="doplnovani";
		supplyRadius=4.5;
	};
	class rhsusf_m113_usarmy_M240: rhsusf_m113tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_m240_m113",
					"rhsusf_weap_M259"
				};
				magazines[]=
				{
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhsusf_mag_L8A3_8",
					"rhsusf_mag_L8A3_8",
					"rhsusf_mag_L8A3_8"
				};
			};
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
		};
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class Desert: Desert;  //found empty after stripping
			class Olive: Olive;  //found empty after stripping
		};
	};
	class rhsusf_m113_usarmy_MK19: rhsusf_m113tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_MK19",
					"rhsusf_weap_M259"
				};
				magazines[]=
				{
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"rhsusf_mag_L8A3_8",
					"rhsusf_mag_L8A3_8",
					"rhsusf_mag_L8A3_8"
				};
			};
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
		};
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class Desert: Desert;  //found empty after stripping
			class Olive: Olive;  //found empty after stripping
		};
	};
	class rhsusf_m113d_usarmy: rhsusf_m113_usarmy;  //found empty after stripping
	class rhsusf_m113d_usarmy_supply: rhsusf_m113_usarmy_supply;  //found empty after stripping
	class rhsusf_m113d_usarmy_unarmed: rhsusf_m113_usarmy_unarmed;  //found empty after stripping
	class rhsusf_m113d_usarmy_medical: rhsusf_m113_usarmy_medical;  //found empty after stripping
	class rhsusf_m113d_usarmy_M240: rhsusf_m113_usarmy_M240;  //found empty after stripping
	class rhsusf_m113d_usarmy_MK19: rhsusf_m113_usarmy_MK19;  //found empty after stripping
	class rhsusf_m113_usarmy_M2_90: rhsusf_m113_usarmy_supply
	{
		class textureSources
		{
			class standard;  //found empty after stripping
			class Olive;  //found empty after stripping
			class Desert;  //found empty after stripping
			class MERDC_SV;  //found empty after stripping
			class MERDC_WV;  //found empty after stripping
		};
		transportAmmo=0;
		supplyRadius=0;
	};
	class rhsusf_m113_usarmy_MK19_90: rhsusf_m113_usarmy_MK19
	{
		class textureSources
		{
			class standard;  //found empty after stripping
			class Olive;  //found empty after stripping
			class Desert;  //found empty after stripping
			class MERDC_SV;  //found empty after stripping
			class MERDC_WV;  //found empty after stripping
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class ProxyRHS_M113_HULL: ProxyRetex;  //found empty after stripping
	class ProxyRHS_M113_HULL_H: ProxyRHS_M113_HULL;  //found empty after stripping
	class ProxyRHS_M113_HULL_H_90s: ProxyRHS_M113_HULL;  //found empty after stripping
};
