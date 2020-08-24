class CfgPatches
{
	class rhsusf_c_HEMTT_A4
	{
		units[]=
		{
			"rhsusf_M977A4_usarmy_wd",
			"rhsusf_M977A4_BKIT_usarmy_wd",
			"rhsusf_M977A4_BKIT_M2_usarmy_wd",
			"rhsusf_M977A4_REPAIR_usarmy_wd",
			"rhsusf_M977A4_REPAIR_BKIT_usarmy_wd",
			"rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd",
			"rhsusf_M977A4_AMMO_usarmy_wd",
			"rhsusf_M977A4_AMMO_BKIT_usarmy_wd",
			"rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd",
			"rhsusf_M978A4_usarmy_wd",
			"rhsusf_M978A4_BKIT_usarmy_wd",
			"rhsusf_M977A4_usarmy_d",
			"rhsusf_M977A4_BKIT_usarmy_d",
			"rhsusf_M977A4_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_REPAIR_usarmy_d",
			"rhsusf_M977A4_REPAIR_BKIT_usarmy_d",
			"rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_AMMO_usarmy_d",
			"rhsusf_M977A4_AMMO_BKIT_usarmy_d",
			"rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d",
			"rhsusf_M978A4_usarmy_d",
			"rhsusf_M978A4_BKIT_usarmy_d"
		};
		weapons[]={};
		name="HEMMTT A4 Trucks";
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
		class ViewOptics;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class HitPoints;
		class EventHandlers;
	};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
	};
	class Truck_01_base_F: Truck_F;  //found empty after stripping
	class rhsusf_HEMTT_A4_base: Truck_01_base_F
	{
		side=1;
		displayName="M977A4";
		class Turrets;  //found empty after stripping
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectHTruck";
			};
		};
		class HitPoints: HitPoints
		{
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="palivo";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="";
				passThrough=1;
			};
		};
		armorLights=0.0099999998;
		normalSpeedForwardCoef=0.89999998;
		turnCoef=3.5;
		terrainCoef=1.7;
		simulation="carx";
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=98;
		fuelCapacity=24;
		wheelCircumference=2.95;
		brakeIdleSpeed=2;
		maxFordingDepth=0.69999999;
		waterSpeedFactor=0.30000001;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness=250;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-10.094,
				"N",
				0,
				"D1",
				5.5619998,
				"D2",
				3.4560001,
				"D3",
				2.6229999,
				"D4",
				1.678,
				"D5",
				1.0779999
			};
			TransmissionRatios[]=
			{
				"High",
				4.1999998
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		switchTime=0.50999999;
		latency=1.3;
		transmissionLosses=18;
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.26199999,0.64999998},
			{0.38100001,0.79000002},
			{0.47600001,0.88999999},
			{0.57099998,0.99000001},
			{0.667,1},
			{0.76200002,0.99000001},
			{0.85699999,0.94999999},
			{1,0.86000001}
		};
		enginePower=324;
		peakTorque=2020.8;
		minOmega=55;
		maxOmega=219.91;
		idleRPM=550;
		redRPM=2100;
		engineLosses=34;
		thrustDelay=0.80000001;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=1.5;
		antiRollbarForceLimit=4;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=20;
		accelAidForceSpd=1.8;
		accelAidForceCoef=2;
		accelAidForceYOffset=-1;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.33000001;
				mass=80;
				MOI=10;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=10000;
				maxHandBrakeTorque=0;
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=-1;
				springStrength=42289;
				springDamperRate=7444;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				steering=1;
			};
			class L3: L1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R2: R1
			{
				steering=1;
			};
			class R3: R1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class Damage;  //found empty after stripping
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VVT_cargo_1",
					"VVT_cargo_2"
				};
				disableHeightLimit=1;
				maxLoadMass=25000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VVT_exit"
				};
				unloadingInterval=2;
				loadingDistance=5;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhsusf_M977A4_usarmy_wd: rhsusf_HEMTT_A4_base
	{
		displayName="$STR_RHS_HEMTTA4_977A4_NAME";
		accuracy=0.5;
		class textureSources
		{
			class rhs_woodland
			{
				displayName="Woodland";
			};
			class rhs_desert: rhs_woodland
			{
				displayName="Desert";
			};
		};
	};
	class rhsusf_M977A4_BKIT_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_977A4_BKIT_NAME";
		class textureSources: textureSources
		{
			class rhs_woodland: rhs_woodland;  //found empty after stripping
			class rhs_desert: rhs_desert;  //found empty after stripping
		};
	};
	class rhsusf_M977A4_BKIT_M2_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_977A4_BKIT_M2_NAME";
		accuracy=0.5;
		maxFordingDepth=0;
		class textureSources: textureSources
		{
			class rhs_woodland: rhs_woodland;  //found empty after stripping
			class rhs_desert: rhs_desert;  //found empty after stripping
		};
		animationList[]=
		{
			"hide_ogpkover",
			0.5,
			"hide_ogpknet",
			0.5,
			"hide_ogpkbust",
			0.5
		};
		class HitPoints: HitPoints
		{
			class HitGlass10: HitGlass1
			{
				name="glass10";
			};
			class HitGlass11: HitGlass1
			{
				name="glass11";
			};
			class HitGlass12: HitGlass1
			{
				name="glass12";
			};
			class HitGlass13: HitGlass1
			{
				name="glass13";
			};
			class HitGlass14: HitGlass1
			{
				name="glass14";
			};
			class HitGlass15: HitGlass1
			{
				name="glass15";
			};
			class HitGlass16: HitGlass1
			{
				name="glass16";
			};
			class HitGlass17: HitGlass1
			{
				name="glass17";
			};
			class HitGlass20: HitGlass1
			{
				name="glass20";
			};
			class HitGlass21: HitGlass1
			{
				name="glass21";
			};
		};
		threat[]={0.89999998,0.30000001,0.1};
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				weapons[]=
				{
					"RHS_M2"
				};
				magazines[]=
				{
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
				};
				minElev=-10;
				maxElev=40;
				ejectDeadGunner=0;
				stabilizedInAxes=0;
				startEngine=0;
				class ViewOptics: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner: ViewOptics;  //found empty after stripping
			};
		};
	};
	class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd: rhsusf_M977A4_BKIT_M2_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_AMMO_BKIT_M2_977A4_NAME";
		transportAmmo=300000;
		supplyRadius=10;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
	};
	class rhsusf_M977A4_AMMO_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_AMMO_977A4_NAME";
		transportAmmo=300000;
		supplyRadius=10;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
	};
	class rhsusf_M977A4_AMMO_BKIT_usarmy_wd: rhsusf_M977A4_BKIT_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_AMMO_BKIT_977A4_NAME";
		transportAmmo=300000;
		supplyRadius=10;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
	};
	class rhsusf_M977A4_REPAIR_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_REPAIR_977A4_NAME";
		memoryPointSupply="doplnovani";
		transportRepair=200000000;
		supplyRadius=12;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
	};
	class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd: rhsusf_M977A4_BKIT_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_REPAIR_BKIT_977A4_NAME";
		memoryPointSupply="doplnovani";
		transportRepair=200000000;
		supplyRadius=12;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
	};
	class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd: rhsusf_M977A4_BKIT_M2_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_REPAIR_BKIT_M2_977A4_NAME";
		memoryPointSupply="doplnovani";
		transportRepair=200000000;
		supplyRadius=12;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
	};
	class rhsusf_M978A4_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_978A4_NAME";
		transportFuel=300000;
		supplyRadius=10;
		fuelExplosionPower=10;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		class textureSources: textureSources
		{
			class rhs_woodland: rhs_woodland;  //found empty after stripping
			class rhs_desert: rhs_desert;  //found empty after stripping
		};
	};
	class rhsusf_M978A4_BKIT_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		displayName="$STR_RHS_HEMTTA4_BKIT_978A4_NAME";
		transportFuel=300000;
		supplyRadius=10;
		fuelExplosionPower=10;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		class textureSources: textureSources
		{
			class rhs_woodland: rhs_woodland;  //found empty after stripping
			class rhs_desert: rhs_desert;  //found empty after stripping
		};
	};
	class rhsusf_M977A4_usarmy_d: rhsusf_M977A4_usarmy_wd;  //found empty after stripping
	class rhsusf_M977A4_BKIT_usarmy_d: rhsusf_M977A4_BKIT_usarmy_wd;  //found empty after stripping
	class rhsusf_M977A4_BKIT_M2_usarmy_d: rhsusf_M977A4_BKIT_M2_usarmy_wd;  //found empty after stripping
	class rhsusf_M977A4_REPAIR_usarmy_d: rhsusf_M977A4_REPAIR_usarmy_wd;  //found empty after stripping
	class rhsusf_M977A4_REPAIR_BKIT_usarmy_d: rhsusf_M977A4_REPAIR_BKIT_usarmy_wd;  //found empty after stripping
	class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d: rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd;  //found empty after stripping
	class rhsusf_M977A4_AMMO_usarmy_d: rhsusf_M977A4_AMMO_usarmy_wd;  //found empty after stripping
	class rhsusf_M977A4_AMMO_BKIT_usarmy_d: rhsusf_M977A4_AMMO_BKIT_usarmy_wd;  //found empty after stripping
	class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d: rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd;  //found empty after stripping
	class rhsusf_M978A4_usarmy_d: rhsusf_M978A4_usarmy_wd;  //found empty after stripping
	class rhsusf_M978A4_BKIT_usarmy_d: rhsusf_M978A4_BKIT_usarmy_wd;  //found empty after stripping
};
