class CfgPatches
{
	class rhsgref_c_a2port_armor
	{
		units[]=
		{
			"rhsgref_BRDM2",
			"rhsgref_BRDM2_ATGM",
			"rhsgref_BRDM2UM",
			"rhsgref_BRDM2_HQ",
			"rhsgref_BRDM2_b",
			"rhsgref_BRDM2_ATGM_b",
			"rhsgref_BRDM2UM_b",
			"rhsgref_BRDM2_HQ_b",
			"rhsgref_BRDM2_ins",
			"rhsgref_BRDM2_ATGM_ins",
			"rhsgref_BRDM2UM_ins",
			"rhsgref_BRDM2_HQ_ins",
			"rhsgref_BRDM2_ins_g",
			"rhsgref_BRDM2_ATGM_ins_g",
			"rhsgref_BRDM2UM_ins_g",
			"rhsgref_BRDM2_HQ_ins_g",
			"rhsgref_BRDM2_msv",
			"rhsgref_BRDM2_ATGM_msv",
			"rhsgref_BRDM2UM_msv",
			"rhsgref_BRDM2_HQ_msv",
			"rhsgref_BRDM2_vdv",
			"rhsgref_BRDM2_ATGM_vdv",
			"rhsgref_BRDM2UM_vdv",
			"rhsgref_BRDM2_HQ_vdv",
			"rhsgref_BRDM2_vmf",
			"rhsgref_BRDM2_ATGM_vmf",
			"rhsgref_BRDM2UM_vmf",
			"rhsgref_BRDM2_HQ_vmf"
		};
		weapons[]={};
		name="BRDM-2";
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class Functions
		{
			class brdm2_atgmReload
			{
				file="\rhsgref\addons\rhsgref_c_a2port_armor\scripts\brdm2_atgmReload.sqf";
				description="BRDM-2 ATGM reload script";
			};
			class brdm2_atgmFire
			{
				file="\rhsgref\addons\rhsgref_c_a2port_armor\scripts\brdm2_atgmFire.sqf";
				description="ATGM offset fix";
			};
			class brdm2_atgmSafe
			{
				file="\rhsgref\addons\rhsgref_c_a2port_armor\scripts\brdm2_atgmSafe.sqf";
				description="BRDM-2 ATGM safe mode script";
			};
		};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CommanderOptics;
		class Components;
	};
	class rhsgref_BRDM2: Wheeled_APC_F
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'CDF']"
		};
		side=2;
		typicalCargo[]=
		{
			"rhsgref_cdf_reg_crew"
		};
		transportAmmo=0;
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		memoryPointDriverOptics="driverview";
		transportMaxMagazines=100;
		transportMaxWeapons=10;
		selectionDashboard="podsvit pristroju";
		viewCargoInExternal=1;
		radarType=0;
		commanderCanSee="4+8+2+32";
		driverCanSee="4+8+2+32";
		enableGPS=0;
		incomingMissileDetectionSystem=0;
		cost=100000;
		threat[]={0.5,0.5,0.1};
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		damageResistance=0.024089999;
		driveOnComponent[]=
		{
			"belly_w1",
			"belly_w2"
		};
		cargoGetInAction[]=
		{
			"GetInHigh"
		};
		cargoGetOutAction[]=
		{
			"GetOutHigh"
		};
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		hideProxyInCombat=0;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CommanderOptics: NewTurret
			{
				usePiP=1;
				weapons[]={};
				magazines[]={};
				animationSourceHatch="";
				nightVision=1;
				proxyType="CPCommander";
				proxyIndex=1;
				lockWhenDriverOut=0;
				primaryGunner=0;
				primaryObserver=1;
				stabilizedInAxes="StabilizedInAxesBoth";
				minElev=-4;
				maxElev=12;
				initElev=0;
				minTurn=-75;
				maxTurn=75;
				initTurn=0;
				soundServo[]={};
				startEngine=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.14;
					minFov=0.14;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_TPKU2B";
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
				};
				class Hitpoints
				{
				};
			};
			class MainTurret: MainTurret
			{
				memoryPointGun="machinegun";
				selectionFireAnim="zasleh3";
				weapons[]=
				{
					"rhs_weap_kpvt",
					"rhs_weap_pkt_btr"
				};
				magazines[]=
				{
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250"
				};
				soundServoVertical[]=
				{
					"rhsafrf\addons\rhs_btr70\sounds\hand_turret_servo_elev",
					1.1412539,
					1,
					30
				};
				forceHideGunner=1;
				stabilizedInAxes=0;
				minElev=-5;
				maxElev=30;
				maxHorizontalRotSpeed=0.64999998;
				maxVerticalRotSpeed=0.34999999;
				primaryGunner=1;
				startEngine=0;
				usePiP=2;
				canUseScanners=0;
				allowTabLock=0;
				class ViewOptics: RCWSOptics
				{
				};
				class ViewGunner: ViewOptics
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
					gunnerOpticsEffect[]=
					{
						"TankGunnerOptics1",
						"OpticsBlur2",
						"OpticsCHAbera2"
					};
					visionMode[]=
					{
						"Normal"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov=0.26923099;
						maxFov=0.26923099;
						minFov=0.26923099;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_PP61AM";
					};
					class Night: Wide
					{
					};
					class RearView: Wide
					{
						camPos="view_turret_rear";
						camDir="view_turret_rear_dir";
						initFov=0.69999999;
						maxFov=0.69999999;
						minFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_Turret_Rear";
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armorComponent="Hit_Turret";
						armor=-55;
						material=-1;
						name="vez";
						passThrough=1;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.25;
					};
					class HitGun
					{
						armorComponent="Hit_Gun";
						armor=-55;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
					};
				};
				class Turrets
				{
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=8;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=9;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=10;
			};
			class CargoTurret_05: CargoTurret_01
			{
				proxyIndex=11;
			};
			class CargoTurret_06: CargoTurret_01
			{
				maxElev=45;
				minElev=-15;
				maxTurn=81;
				minTurn=-25;
				proxyIndex=12;
			};
		};
		class Damage
		{
		};
		class Exhausts
		{
			class Exhaust
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectMRAP_03";
			};
			class Exhaust2
			{
				position="vyfuk start 2";
				direction="vyfuk konec 2";
				effect="ExhaustEffectMRAP_03";
			};
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3"
		};
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		numberPhysicalWheels=8;
		terrainCoef=1.2;
		turnCoef=3;
		simulation="carx";
		dampersBumpCoef=3;
		maxSpeed=100;
		fuelCapacity=60;
		RHS_fuelCapacity=280;
		wheelCircumference=3.55;
		brakeIdleSpeed=1.78;
		canFloat=1;
		waterSpeedFactor=0.25;
		waterResistanceCoef=0.51499999;
		waterLeakiness=1.5;
		engineShiftY=0.69999999;
		engineShiftZ=3;
		maxFordingDepth=1.2;
		waterResistance=0.5;
		waterAngularDampingCoef=3;
		waterLinearDampingCoefX=2;
		waterLinearDampingCoefY=2;
		waterPPInVehicle=0;
		rudderForceCoef=3.5;
		rudderForceCoefAtMaxSpeed=0.30000001;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.1819999,
				"N",
				0,
				"D1",
				4.1820002,
				"D2",
				2.3180001,
				"D3",
				1.85,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				4.4489999
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				25
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.1;
		latency=1.4;
		differentialType="all_open";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=30;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.4;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0.19565199},
			{0.166667,0.576087},
			{0.3125,0.69565201},
			{0.41666701,0.826087},
			{0.52083302,0.91304302},
			{0.625,0.97826099},
			{0.83333302,1},
			{1.16958,0}
		};
		enginePower=220;
		engineMOI=1.3;
		peakTorque=910;
		minOmega=35;
		maxOmega=251.33;
		idleRPM=450;
		redRPM=2400;
		thrustDelay=0.5;
		engineLosses=14;
		engineBrakeCoef=0.69999999;
		antiRollbarForceCoef=5;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=5;
		antiRollbarSpeedMax=30;
		accelAidForceSpd=2.8;
		accelAidForceCoef=2;
		accelAidForceYOffset=-1.4;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={0,-1,0};
				steering=1;
				width=0.31999999;
				mass=150;
				MOI=13;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				maxCompression=0.15000001;
				maxDroop=0.25;
				sprungMass=-1;
				springStrength=96250;
				springDamperRate=6889;
				longitudinalStiffnessPerUnitGravity=3850;
				latStiffX=15;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
			class RF: LF
			{
				steering=1;
				side="right";
			};
			class RR: RF
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getout",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			1,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_start_int",
			0.31622776,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_start_ext",
			0.56234133,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_stop_int",
			0.31622776,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_stop_ext",
			0.56234133,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext",
					0.31622776,
					1,
					100
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext",
					0.39810717,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext",
					0.50118721,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext",
					0.63095737,
					1,
					250
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_ext_exhaust",
					0.56234133,
					1,
					150
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_ext_exhaust",
					0.63095737,
					1,
					200
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_ext_exhaust",
					0.70794576,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_ext_exhaust",
					1.1220185,
					1,
					300
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int",
					0.2238721,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int",
					0.25118864,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int",
					0.44668359,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_500rpm_int_exhaust",
					0.39810717,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1000rpm_int_exhaust",
					0.50118721,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1200rpm_int_exhaust",
					0.63095737,
					1
				};
				frequency="0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_03\MRAP_03_1500rpm_int_exhaust",
					0.89125091,
					1
				};
				frequency="0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.5848932,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.2589254,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.56234133,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234133,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class ViewPilot
		{
			initAngleX=10;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
		};
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
			};
		};
		class DriverOpticsOut
		{
			class OpticView: ViewPilot
			{
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
			};
		};
		armor=120;
		armorStructural=7;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=-60;
				explosionShielding=1;
				radius=0.30000001;
				armorComponent="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=-60;
				explosionShielding=1;
				radius=0.30000001;
				armorComponent="wheel_1_2_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=-60;
				explosionShielding=1;
				radius=0.30000001;
				armorComponent="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=-60;
				explosionShielding=1;
				radius=0.30000001;
				armorComponent="wheel_2_2_hide";
			};
			class Hit_Glass1
			{
				armor=-40;
				explosionShielding=0.1;
				name="Hit_Glass1";
				armorComponent="Hit_Glass1";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Glass2
			{
				armor=-40;
				explosionShielding=0.1;
				name="Hit_Glass2";
				armorComponent="Hit_Glass2";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_PP61AM
			{
				armor=-20;
				explosionShielding=0.2;
				name="Hit_GunnerOptics";
				armorComponent="Hit_GunnerOptics";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Turret_Rear
			{
				armor=-20;
				explosionShielding=0.2;
				name="Hit_GunnerOptics";
				armorComponent="Hit_TurretRear";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_TPKU2B
			{
				armor=-20;
				explosionShielding=0.2;
				name="Hit_CommanderOptics";
				armorComponent="Hit_CommanderOptics";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Driver
			{
				armor=-20;
				explosionShielding=0.2;
				name="Hit_DriverOptics";
				armorComponent="Hit_DriverOptics";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope1
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope1";
				armorComponent="Hit_Periscope1";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope2
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope2";
				armorComponent="Hit_Periscope2";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope3
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope3";
				armorComponent="Hit_Periscope3";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope4
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope4";
				armorComponent="Hit_Periscope4";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope5
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope5";
				armorComponent="Hit_Periscope5";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope6
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope6";
				armorComponent="Hit_Periscope6";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope7
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope7";
				armorComponent="Hit_Periscope7";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope8
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope8";
				armorComponent="Hit_Periscope8";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope9
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope9";
				armorComponent="Hit_Periscope9";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope10
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope10";
				armorComponent="Hit_Periscope10";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope11
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope11";
				armorComponent="Hit_Periscope11";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope12
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope12";
				armorComponent="Hit_Periscope12";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope13
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope13";
				armorComponent="Hit_Periscope13";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope14
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope14";
				armorComponent="Hit_Periscope14";
				passThrough=0;
				radius=0.050000001;
			};
			class Hit_Optic_Periscope15
			{
				armor=-15;
				explosionShielding=0.60000002;
				name="Hit_Periscope15";
				armorComponent="Hit_Periscope15";
				passThrough=0;
				radius=0.050000001;
			};
			class HitFuel_Left
			{
				armorComponent="Hit_Fuel_Left";
				armor=-30;
				material=-1;
				name="Hit_Fuel_Left";
				passThrough=0.2;
				minimalHit=0.25;
				explosionShielding=0.60000002;
				radius=0.25;
			};
			class HitFuel_Right: HitFuel_Left
			{
				armorComponent="Hit_Fuel_Right";
				name="Hit_Fuel_Right";
			};
			class HitFuel
			{
				armor=999;
				material=-1;
				name="palivo";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0.60000002;
				radius=0.25;
				depends="(HitFuel_Left + HitFuel_Right)*0.5";
			};
			class HitEngine
			{
				armorComponent="Hit_Engine";
				armor=-70;
				material=-1;
				name="motor";
				passThrough=0.2;
				minimalHit=0.050000001;
				explosionShielding=0.30000001;
				radius=0.25;
			};
			class HitBody
			{
				armor=1;
				material=-1;
				name="karoserie";
				passThrough=0.40000001;
				minimalHit=0.25;
				explosionShielding=0.2;
				radius=0.33000001;
			};
		};
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.44999999;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\cdf_brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhsgref_faction_cdf_ground"
				};
			};
			class chdkz
			{
			};
			class khaki: chdkz
			{
			};
			class olive: chdkz
			{
			};
			class takistan: chdkz
			{
			};
			class 3tone: chdkz
			{
			};
			class chdkz02: chdkz
			{
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', [3,4,5], _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class CDF
					{
						name="CDF";
						value="CDF";
					};
					class Default
					{
						name="Default";
						value="Default";
						defaultValue="Default";
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
					class LicensePlate
					{
						name="License Plate";
						value="LicensePlate";
					};
				};
			};
			class rhs_decalNumber
			{
				collapsed=1;
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach [3,4,5]}else{[_this, [['Number', [3,4,5], _this getVariable ['rhs_decalNumber_type','CDF'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				tooltip="Decal type";
				property="rhs_decalPlatoon_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				class values
				{
					class Platoon
					{
						name="Platoon";
						value="Platoon";
					};
					class PlatoonGDR
					{
						name="Platoon GDR";
						value="PlatoonGDR";
					};
					class PlatoonVDV
					{
						name="Platoon VDV";
						value="PlatoonVDV";
					};
					class Army
					{
						name="Army";
						value="Army";
						defaultValue="1";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
						defaultValue="0";
					};
					class HonorGDR
					{
						name="Honor GDR";
						value="HonorGDR";
					};
				};
			};
			class rhs_decalPlatoon
			{
				tooltip="Set platoon symbol located on right & rear of vehicles. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [6],  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class big_numbers_hide
			{
				property="big_numbers_hide";
				control="CheckboxNumber";
				expression="_this animate ['%s',_value,true]";
				defaultValue="0";
			};
			class small_numbers_hide: big_numbers_hide
			{
				property="small_numbers_hide";
			};
			class driverViewHatch: big_numbers_hide
			{
				property="driverViewHatch";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class commanderViewHatch: driverViewHatch
			{
				property="commanderViewHatch";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_decalsReadParams;";
				engine="_this call rhs_fnc_btr_handleHatch";
			};
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class CrewDisplay
				{
					componentType="CrewDisplayComponent";
					resource="RscCustomInfoCrew";
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class CrewDisplay
				{
					componentType="CrewDisplayComponent";
					resource="RscCustomInfoCrew";
				};
			};
		};
	};
	class rhsgref_BRDM2_ATGM: rhsgref_BRDM2
	{
		accuracy=0.30000001;
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhsgref_faction_cdf_ground"
				};
			};
			class chdkz
			{
			};
			class khaki: chdkz
			{
			};
			class olive: chdkz
			{
			};
			class takistan: chdkz
			{
			};
		};
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\cdf_brdm2_atgm_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
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
					"rhs_weap_9P148"
				};
				magazines[]=
				{
					"rhs_mag_9m113_5",
					"rhs_mag_9m113_5",
					"rhs_mag_9m113_5"
				};
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				usePiP=1;
				class ViewOptics
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="0.7/10";
					minFov="0.7/10";
					maxFov="0.7/10";
				};
				lockWhenVehicleSpeed=5;
				class OpticsIn
				{
					class 9Sh119m1
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_9Sh119";
					};
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
		};
		class Hitpoints: HitPoints
		{
			class Hit_Optic_9Sh119
			{
				armor=-40;
				explosionShielding=0.2;
				name="Hit_9Sh119";
				armorComponent="Hit_9Sh119";
				passThrough=0;
				radius=0.050000001;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_BRDM2_ATGM_EventHandlers
			{
				fired="_this call rhs_fnc_brdm2_atgmFire;";
				reloaded="_this spawn rhs_fnc_brdm2_atgmReload;";
			};
		};
	};
	class rhsgref_BRDM2UM: rhsgref_BRDM2
	{
		attenuationEffectType="OpenCarAttenuation";
		soundAttenuationCargo[]={1,1,1};
		threat[]={0.30000001,0,0.1};
		tf_range=25000;
		class Turrets: Turrets
		{
			class CommanderOptics: CommanderOptics
			{
				LODTurnedIn="VIEW_CARGO";
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
	};
	class rhsgref_BRDM2_HQ: rhsgref_BRDM2UM
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				animationSourceHatch="hatchCommander";
				weapons[]=
				{
					"rhs_weap_pkt_zeroing"
				};
				magazines[]=
				{
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250"
				};
				class Turrets
				{
				};
				startEngine=0;
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh";
				LODTurnedIn=1200;
				LODTurnedOut=1000;
				canHideGunner=1;
				canUseScanners=0;
				allowTabLock=0;
				stabilizedInAxes=0;
				forceHideGunner=0;
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
				minTurn=-90;
				maxTurn=90;
				minElev=-34.377499;
				maxElev=26.3561;
				commanding=1;
				primaryGunner=0;
				primaryObserver=1;
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
	};
	class rhsgref_BRDM2_b: rhsgref_BRDM2
	{
		side=1;
	};
	class rhsgref_BRDM2_ATGM_b: rhsgref_BRDM2_ATGM
	{
		side=1;
	};
	class rhsgref_BRDM2UM_b: rhsgref_BRDM2UM
	{
		side=1;
	};
	class rhsgref_BRDM2_HQ_b: rhsgref_BRDM2_HQ
	{
		side=1;
	};
	class rhsgref_BRDM2_ins: rhsgref_BRDM2
	{
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_ATGM_ins: rhsgref_BRDM2_ATGM
	{
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2UM_ins: rhsgref_BRDM2UM
	{
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_HQ_ins: rhsgref_BRDM2_HQ
	{
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_ins_g: rhsgref_BRDM2
	{
		side=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_ATGM_ins_g: rhsgref_BRDM2_ATGM
	{
		side=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2UM_ins_g: rhsgref_BRDM2UM
	{
		side=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_HQ_ins_g: rhsgref_BRDM2_HQ
	{
		side=2;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_camo_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
		rhs_decalParameters[]={};
	};
	class rhsgref_BRDM2_msv: rhsgref_BRDM2
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',12]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_ATGM_msv: rhsgref_BRDM2_ATGM
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',12]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2UM_msv: rhsgref_BRDM2UM
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',12]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_HQ_msv: rhsgref_BRDM2_HQ
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',12]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_vdv: rhsgref_BRDM2
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',11]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_ATGM_vdv: rhsgref_BRDM2_ATGM
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',11]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2UM_vdv: rhsgref_BRDM2UM
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',11]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_HQ_vdv: rhsgref_BRDM2_HQ
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Platoon',11]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_vmf: rhsgref_BRDM2
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Army',[3,1]]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_ATGM_vmf: rhsgref_BRDM2_ATGM
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Army',[3,1]]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_atgm_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2UM_vmf: rhsgref_BRDM2UM
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Army',[3,1]]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
	class rhsgref_BRDM2_HQ_vmf: rhsgref_BRDM2_HQ
	{
		rhs_decalParameters[]=
		{
			"['Number', [3,4,5], 'Default']",
			"['Label', [6], 'Army',[3,1]]"
		};
		side=0;
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_ru_01_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\brdm2_02_co.paa",
			"\rhsgref\addons\rhsgref_a2port_armor\brdm2\data\zbik_04_co.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class ProxyPSZ_BRDM2_wheel: ProxyRetex
	{
	};
};
