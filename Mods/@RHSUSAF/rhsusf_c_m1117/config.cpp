class DefaultEventhandlers;
class CfgPatches
{
	class rhsusf_c_m1117
	{
		units[]=
		{
			"rhsusf_M1117_D",
			"rhsusf_M1117_W",
			"rhsusf_M1117_O",
			"rhsusf_duke_d",
			"rhsusf_duke_wd",
			"rhsusf_duke_m1a2_d",
			"rhsusf_duke_m1a2_wd"
		};
		weapons[]={};
		name="M1117 Car";
	};
};
class RCWSOptics;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class m1117_turnOut
			{
				file="\rhsusf\addons\rhsusf_c_m1117\script\rhs_m1117_turnOut.sqf";
				description="M1117 hatch handler";
			};
			class m1117_hatch
			{
				file="\rhsusf\addons\rhsusf_c_m1117\script\rhs_hatch.sqf";
				description="M1117 hatch handler";
			};
			class duke_jammer
			{
				file="\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke.sqf";
				description="DUKE jamming simulation";
			};
			class duke_destruction
			{
				file="\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke_destruction.sqf";
				description="DUKE antenna destruction";
			};
			class duke_vg
			{
				file="\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke_vg.sqf";
				description="DUKE Virtual Garage action";
			};
		};
	};
	class RHSUSF
	{
		tag="RHSUSF";
		class functions
		{
			class fuelLeak
			{
				file="\rhsusf\addons\rhsusf_c_m1117\script\fuelLeak.sqf";
				description="Fuel leak script";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		class ViewPilot;
	class Wheeled_APC_F: Car_F
	{
	class rhsusf_M1117_base: Wheeled_APC_F
	{
		rhs_duke_type="rhsusf_duke";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_MRAP_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_MRAP_p"
				};
			};
		};
		nameSound="veh_vehicle_MRAP_s";
		radarType=8;
		driverCanSee="2+4+16";
		commanderCanSee="2+4+16";
		enableManualFire=0;
		cost=600000;
		threat[]={1,0.80000001,0.30000001};
		incomingMissileDetectionSystem=0;
		normalSpeedForwardCoef=0.69999999;
		slownSpeedForwardCoef=0.55000001;
		turnCoef=3;
		terrainCoef=2;
		simulation="carx";
		dampersBumpCoef=0;
		maxSpeed=100;
		fuelCapacity=35;
		wheelCircumference=3.6567061;
		brakeIdleSpeed=2;
		canFloat=0;
		maxFordingDepth=0;
		waterSpeedFactor=0.1;
		waterResistance=1;
		waterResistanceCoef=0.30000001;
		waterLeakiness=20;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.0300002,
				"N",
				0,
				"D1",
				3.49,
				"D2",
				1.86,
				"D3",
				1.41,
				"D4",
				1,
				"D5",
				0.75,
				"D6",
				0.60000002
			};
			TransmissionRatios[]=
			{
				"High",
				6.9000001
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.94999999,0.94999999,0.94999999,0.89999998,0.89999998,0.44999999};
		switchTime=0.5;
		latency=1;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;
		dampingRateFullThrottle=0.15000001;
		dampingRateZeroThrottleClutchEngaged=0.80000001;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.45454499,0.63348001},
			{0.5,0.85638797},
			{0.590909,0.987665},
			{0.68181801,1},
			{0.77272701,0.95947099},
			{0.86363602,0.864317},
			{0.95454502,0.78149801},
			{1.05409,0}
		};
		engineMOI=5;
		enginePower=194;
		peakTorque=1135;
		minOmega=66;
		maxOmega=230.38;
		idleRPM=1000;
		redRPM=2200;
		thrustDelay=0.80000001;
		engineLosses=15;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=0.5;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=50;
		accelAidForceSpd=2.23;
		accelAidForceCoef=3;
		accelAidForceYOffset=-1.3;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.34999999;
				mass=80;
				MOI=14.4;
				dampingRate=1;
				dampingRateInAir=1;
				dampingRateDamaged=1.5;
				dampingRateDestroyed=1000;
				maxBrakeTorque=26000;
				maxHandBrakeTorque=0;
				maxCompression=0.2;
				maxDroop=0.2;
				sprungMass=-1;
				springStrength=178578;
				springDamperRate=17000;
				longitudinalStiffnessPerUnitGravity=13000;
				latStiffX=35;
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
				maxHandBrakeTorque=40000;
				steering=0;
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
			};
			class RR: RF
			{
				maxHandBrakeTorque=40000;
				steering=0;
			};
		};
		tf_RadioType_api="tf_rt1523g";
		tf_isolatedAmount_api=0.2;
		rhs_hasSmokeCap=1;
		htMin=60;
		htMax=600;
		afMax=200;
		mfMax=100;
		mFact=1;
		tBody=150;
		damperSize=0.1;
		damperForce=0.1;
		damperDamping=0.1;
		steerAheadSimul=0.55000001;
		steerAheadPlan=0.2;
		predictTurnSimul=4.4000001;
		predictTurnPlan=0.5;
		precision=15;
		armor=150;
		armorStructural=8;
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		damageResistance=0.030990001;
		selectionDamage="zbytek";
		enableGPS=1;
		hideProxyInCombat=0;
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		hideWeaponsDriver=1;
		hideWeaponsGunner=1;
		hideWeaponsCargo=1;
		extCameraPosition[]={0,2,-9};
		driverForceOptics=0;
		castDriverShadow=0;
		viewDriverShadow=1;
		viewCargoShadow=1;
		viewGunnerShadow=1;
		driveropticsmodel="rhsusf\addons\rhsusf_m1117\optics\driver_optic";
		memoryPointDriverOptics="driverview";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-4.5;
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
		class ViewOptics: ViewOptics
		{
			initFov=0.80000001;
			minFov=0.80000001;
			maxFov=0.80000001;
			initAngleX=0;
			minAngleX=-45;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
			visionMode[]=
			{
				"Normal"
			};
			thermalMode[]={0,1};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				proxyType="CPGunner";
				proxyIndex=1;
				commanding=-1;
				primaryGunner=1;
				primaryObserver=0;
				hasGunner=1;
				weapons[]=
				{
					"RHS_M2_M1117",
					"RHS_MK19",
					"rhsusf_weap_M257_8"
				};
				minElev=-5;
				maxElev=60;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				canHideGunner=0;
				forceHideGunner=0;
				canUseScanners=0;
				allowTabLock=0;
				memoryPointGun="kulas";
				selectionFireAnim="zasleh";
				startEngine=0;
				stabilizedInAxes=3;
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={2,3};
					initAngleX=0;
					minAngleX=-30;
					maxAngleX="+30";
					initAngleY=0;
					minAngleY=-100;
					maxAngleY="+100";
					initFov=0.40000001;
					minFov=0.2;
					maxFov=0.40000001;
				};
				class OpticsIn
				{
					class Periscope: ViewOptics
					{
						initFov=0.466667;
						minFov=0.466667;
						maxFov=0.466667;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Wide: Periscope
					{
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"TI"
						};
					};
					class Narrow: Wide
					{
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=1.5;
						material=-1;
						name="vez";
						passThrough=0;
						explosionShielding=0.5;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=1.3;
						material=-1;
						name="zbran";
						passThrough=0;
						explosionShielding=0.5;
						radius=0.15000001;
					};
				};
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-60;
					maxAngleX="+85";
					initAngleY=0;
					minAngleY=-150;
					maxAngleY="+150";
					initFov=0.69999999;
					minFov=0.25;
					maxFov=0.69999999;
				};
				armorLights=0.1;
				class Turrets
				{
					class commanderOptics: CommanderOptics
					{
						animationSourceHatch="";
						animationSourceCamElev="";
						commanding=2;
						weapons[]=
						{
							"rhsusf_weap_duke"
						};
						minElev=-4;
						maxElev=20;
						initElev=0;
						minTurn=-10;
						maxTurn=10;
						initTurn=0;
						maxHorizontalRotSpeed=0.5;
						maxVerticalRotSpeed=0.5;
						stabilizedInAxes=0;
						LODTurnedIn=1100;
						LODTurnedOut=1100;
						startEngine=0;
						armorLights=0.40000001;
						canEject=1;
						preciseGetInOut=0;
						turretFollowFreeLook=0;
						allowTabLock=0;
						showAllTargets=0;
						memoryPointGun="";
						selectionFireAnim="";
						class ViewOptics: RCWSOptics
						{
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={2,3};
							initAngleX=0;
							minAngleX=-30;
							maxAngleX="+30";
							initAngleY=0;
							minAngleY=-100;
							maxAngleY="+100";
							initFov=0.40000001;
							minFov=0.2;
							maxFov=0.40000001;
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initFov=0.23333301;
								minFov=0.23333301;
								maxFov=0.23333301;
							};
							class Narrow: Wide
							{
								initFov=0.1;
								minFov=0.1;
								maxFov=0.1;
							};
						};
					};
				};
			};
			class MainTurret_Out: CargoTurret
			{
				proxyType="CPGunner";
				LODTurnedIn=0;
				LODTurnedOut=0;
				proxyIndex=2;
				personTurretAction="vehicle_turnout_2";
			};
			class MainTurret2_Out: MainTurret_Out
			{
				proxyIndex=3;
				personTurretAction="vehicle_turnout_1";
			};
		};
		class Attributes
		{
			class rhs_hideDUKE
			{
				property="rhs_hideDUKE";
				expression="_this animate ['DUKE_Hide',_value,true]";
				control="CheckboxNumber";
				defaultValue="0";
			};
			class door_l
			{
				property="door_l";
				control="CheckboxNumber";
				defaultValue="0";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class door_r: door_l
			{
				property="door_r";
			};
			class door_b: door_l
			{
				property="door_b";
			};
			class hatch_commander: door_l
			{
				property="hatch_commander";
			};
			class hatch_driver: door_l
			{
				property="hatch_driver";
			};
			class hatch_gunner: door_l
			{
				property="hatch_gunner";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				radius=0.30000001;
				armorComponent="wheel_1_1_damper";
				armor=-250;
				minimalHit=-0.025;
				explosionShielding=1;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.30000001;
				armorComponent="wheel_1_2_damper";
				armor=-250;
				minimalHit=-0.025;
				explosionShielding=1;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.30000001;
				armorComponent="wheel_2_1_damper";
				armor=-250;
				minimalHit=-0.025;
				explosionShielding=1;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.30000001;
				armorComponent="wheel_2_2_damper";
				armor=-250;
				minimalHit=-0.025;
				explosionShielding=1;
				passThrough=0;
			};
			class HitBody
			{
				armor=0.80000001;
				material=-1;
				name="karoserie";
				passThrough=0;
				minimalHit=0.15000001;
				explosionShielding=0.80000001;
				radius=0.050000001;
			};
			class HitFuel
			{
				armor=4;
				material=-1;
				name="palivo";
				passThrough=0;
				MinimalHit=0.050000001;
				explosionShielding=0.0099999998;
				radius=0.090000004;
			};
			class HitHull
			{
				armor=-350;
				passThrough=8;
				name="karoserie";
				minimalhit=-0.25;
				explosionShielding=0.0099999998;
				radius=0.22;
			};
			class HitDuke1
			{
				armor=1;
				material=-1;
				name="duke1";
				passThrough=0;
				MinimalHit=0.15000001;
				explosionShielding=0.0099999998;
				radius=0.15000001;
			};
			class HitDuke2: HitDuke1
			{
				name="duke2";
			};
			class HitEngine
			{
				armor=1.8;
				material=-1;
				name="engine";
				passThrough=0;
				MinimalHit=0.0099999998;
				explosionShielding=0.0099999998;
				radius=0.15000001;
			};
			class HitGlass1: HitGlass1
			{
				armor=2.4000001;
				explosionShielding=1;
				radius=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=2.4000001;
				explosionShielding=1;
				radius=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=2.4000001;
				explosionShielding=1;
				radius=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=2.4000001;
				explosionShielding=1;
				radius=0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor=2.4000001;
				explosionShielding=1;
				radius=0.15000001;
			};
			class HitGlass6: HitGlass6
			{
				armor=2.4000001;
				explosionShielding=1;
				radius=0.15000001;
			};
			class HitPeriscope1: HitGlass1
			{
				armor=0.80000001;
				name="periscope1";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope2: HitGlass1
			{
				armor=0.80000001;
				name="periscope2";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope3: HitGlass1
			{
				armor=0.80000001;
				name="periscope3";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope4: HitGlass1
			{
				armor=0.80000001;
				name="periscope4";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope5: HitGlass1
			{
				armor=0.80000001;
				name="periscope5";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope6: HitGlass1
			{
				armor=0.80000001;
				name="periscope6";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope7: HitGlass1
			{
				armor=0.80000001;
				name="periscope7";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitMainSight: HitGlass6
			{
				armor=1.2;
				explosionShielding=0.30000001;
				name="mainSight";
				radius=0.050000001;
			};
		};
		transportMaxMagazines=90;
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.44999999;
		smokeLauncherGrenadeCount=4;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=160;
		attenuationEffectType="CarAttenuation";
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
			"A3\Sounds_F\vehicles\soft\Truck_02\int_start",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_start",
			0.70794576,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\int_stop",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_stop",
			0.70794576,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_01",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_02",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_03",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_04",
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
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
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
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_00",
					0.56234133,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_01",
					0.63095737,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_02",
					0.70794576,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_03",
					0.79432821,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_04",
					1.1220185,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_05",
					1.4125376,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_06",
					1.7782794,
					1,
					400
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_00",
					1,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01",
					1.2589254,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_02",
					1.4125376,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_03",
					1.5848932,
					1,
					400
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_04",
					1.9952624,
					1,
					450
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_05",
					1.9952624,
					1,
					450
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_06",
					2.2387211,
					1,
					500
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_00",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_01",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_02",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_03",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_04",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_05",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_06",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_00",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_02",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_03",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_04",
					0.70794576,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_05",
					0.79432821,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_06",
					1,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
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
					1,
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
					1,
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
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					1,
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
					0.70794576,
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
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class Exhausts
		{
			class Exhaust
			{
				position="exhaust_pos";
				direction="exhaust_dir";
				effect="ExhaustEffectMRAP_03";
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd",
					"rhs_faction_usarmy_d"
				};
			};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=0.1;
			turnIncreaseLinear=1;
			turnIncreaseTime=1;
			turnDecreaseConst=5;
			turnDecreaseLinear=3;
			turnDecreaseTime=0;
			maxTurnHundred=0.69999999;
		};
		class EventHandlers: EventHandlers
		{
			class rhs_m1117_EH
			{
				init="(_this select 0) lockTurret [[1],true];(_this select 0) lockTurret [[2],true]";
				handleDamage="_this call rhs_fnc_duke_destruction";
				hitpart="_this call rhsusf_fnc_hitSpall";
				getOut="_this call rhs_fnc_m1117_hatch";
			};
		};
	};
	class rhsusf_M1117_D: rhsusf_M1117_base
	{
		side=1;
		typicalCargo[]=
		{
			"rhsusf_army_ucp_rifleman_m4"
		};
	};
	class ThingX;
	class rhsusf_duke_d: ThingX
	{
		editorCategory="EdCat_Things";
	};
};
