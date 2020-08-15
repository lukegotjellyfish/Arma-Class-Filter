class CfgPatches
{
	class rhsusf_c_fmtv
	{
		units[]=
		{
			"rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_WD_fmtv_usarmy",
			"rhsusf_M1078A1P2_WD_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_WD_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_WD_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy",
			"rhsusf_M1083A1P2_WD_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_WD_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_WD_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_WD_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_WD_open_flatbed_usarmy",
			"rhsusf_M1084A1P2_WD_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_WD_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy",
			"rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_D_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_D_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_D_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_D_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_D_open_flatbed_usarmy",
			"rhsusf_M1084A1P2_D_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy",
			"rhsusf_M1078A1R_SOV_M2_D_fmtv_socom",
			"rhsusf_M1084A1R_SOV_M2_D_fmtv_socom",
			"rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom",
			"rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom"
		};
		weapons[]={};
		name="FMTV Trucks";
	};
};
class DefaultEventhandlers;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class fmtv_functions
		{
			class fmtv_Deploy
			{
				file="\rhsusf\addons\rhsusf_c_fmtv\scripts\rhs_fmtv_Deploy.sqf";
				description="FMTV shelter deploy script";
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
		class AnimationSources;
		class HitPoints;
		class EventHandlers;
	};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
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
	class Truck_01_base_F: Truck_F
	{
	};
	class rhsusf_fmtv_base: Truck_01_base_F
	{
		side=1;
		displayName="FMTV";
		headAimDown=5;
		driverRightLegAnimName="pedal_r";
		supplyRadius=4.5;
		extCameraPosition[]={0.5,2,-8};
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19"
		};
		class textureSources
		{
			class rhs_desert
			{
				displayName="Desert";
			};
			class rhs_woodland
			{
				displayName="Woodland";
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
		turnCoef=3;
		terrainCoef=2;
		simulation="carx";
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=98;
		fuelCapacity=24;
		wheelCircumference=3.7049999;
		brakeIdleSpeed=2;
		canFloat=0;
		maxFordingDepth=0.60000002;
		waterResistance=0.5;
		waterDamageEngine=0.89999998;
		waterLeakiness=9.5;
		waterSpeedFactor=0.80000001;
		switchTime=0.64999998;
		latency=1.5;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1.22917,0.41666701,0.29166701,0.208333,0.97916698,0.25,0.91666698,0.41666701,0.91666698,0.58333302,0.91666698,0.625,0.89583302,0.625,0.91666698,0.70833302,1,0.75};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-6.0300002,
				"N",
				0,
				"D1",
				6.9299998,
				"D2",
				4.1900001,
				"D3",
				2.24,
				"D4",
				1.6900001,
				"D5",
				1.2,
				"D6",
				0.89999998,
				"D7",
				0.77999997
			};
			TransmissionRatios[]=
			{
				"High",
				6.8000002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.30000001;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=35;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.27083299,0.62599701},
			{0.5,0.80542302},
			{0.60000002,1},
			{0.66666698,0.98883599},
			{0.75,0.94497597},
			{0.83333302,0.89314198},
			{0.91666698,0.84848499},
			{1.09417,0}
		};
		engineMOI=3;
		enginePower=268;
		peakTorque=1350;
		minOmega=50;
		maxOmega=251.33;
		idleRPM=650;
		redRPM=2400;
		engineLosses=12;
		transmissionLosses=5;
		thrustDelay=0.5;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=35;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=60;
		accelAidForceSpd=2.23;
		accelAidForceCoef=3;
		accelAidForceYOffset=-1.3;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.34;
				steering=1;
				mass=60;
				MOI=45;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=25000;
				maxHandBrakeTorque=0;
				maxCompression=0.12;
				maxDroop=0.12;
				sprungMass=-1;
				springStrength=64931;
				springDamperRate=20778;
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
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R1: L1
			{
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
				side="right";
			};
			class R2: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectHEMTT";
			};
		};
		class Damage
		{
		};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=11;
				maxTurn=95;
				minTurn=20;
				minElev=-45;
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class rhsusf_M1078A1P2_fmtv_usarmy: rhsusf_fmtv_base
	{
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		displayName="$STR_M1078A1P2_Name";
		accuracy=0.5;
	};
	class rhsusf_M1078A1P2_open_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2Open_Name";
	};
	class rhsusf_M1078A1P2_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2Flat_Name";
		class Turrets: Turrets
		{
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
					"VTV_cargo_1",
					"VTV_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=2267;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit"
				};
				unloadingInterval=2;
				loadingDistance=3;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhsusf_M1078A1P2_B_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2B_Name";
		accuracy=0.5;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
	};
	class rhsusf_M1078A1P2_B_open_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BOpen_Name";
	};
	class rhsusf_M1078A1P2_B_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BFlat_Name";
		class Turrets: Turrets
		{
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
					"VTV_cargo_1",
					"VTV_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=2267;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit"
				};
				unloadingInterval=2;
				loadingDistance=3;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhsusf_M1078A1P2_B_M2_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2B_M2_Name";
		maxFordingDepth=0;
		accuracy=0.5;
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
				minElev=-10;
				maxElev=40;
				soundAttenuationTurret="HeliAttenuationGunner";
				ejectDeadGunner=0;
				stabilizedInAxes=0;
				startEngine=0;
				class ViewOptics: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner: ViewOptics
				{
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
	class rhsusf_M1078A1P2_B_M2_open_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BOPEN_M2_Name";
	};
	class rhsusf_M1078A1P2_B_M2_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BFlat_M2_Name";
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
			};
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
					"VTV_cargo_1",
					"VTV_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=2267;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit"
				};
				unloadingInterval=2;
				loadingDistance=3;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhsusf_M1083A1P2_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2_Name";
		accuracy=0.5;
		extCameraPosition[]={0.5,2,-9};
		class Wheels: Wheels
		{
			class L1: L1
			{
				mass=60;
				MOI=12;
				maxBrakeTorque=25000;
				maxHandBrakeTorque=0;
				springStrength=47004;
				springDamperRate=15041;
			};
			class L2: L1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class L3: L1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R1: L1
			{
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
				side="right";
			};
			class R2: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R3: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
		};
	};
	class rhsusf_M1083A1P2_B_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2B_Name";
		accuracy=0.5;
		class Wheels: Wheels
		{
			class L1: L1
			{
				mass=60;
				MOI=12;
				maxBrakeTorque=25000;
				maxHandBrakeTorque=0;
				springStrength=47004;
				springDamperRate=15041;
			};
			class L2: L1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class L3: L1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R1: L1
			{
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
				side="right";
			};
			class R2: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R3: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
		};
	};
	class rhsusf_M1083A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2B_M2_Name";
		maxFordingDepth=0;
		accuracy=0.5;
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
				minElev=-10;
				maxElev=40;
				soundAttenuationTurret="HeliAttenuationGunner";
				ejectDeadGunner=0;
				stabilizedInAxes=0;
				startEngine=0;
				class ViewOptics: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner: ViewOptics
				{
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
	class rhsusf_M1083A1P2_open_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2Open_Name";
	};
	class rhsusf_M1083A1P2_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2Flat_Name";
		class Turrets: Turrets
		{
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
					"VTV_cargo_1",
					"VTV_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=4535;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit"
				};
				unloadingInterval=2;
				loadingDistance=3;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhsusf_M1083A1P2_B_open_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BOpen_Name";
	};
	class rhsusf_M1083A1P2_B_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BFlat_Name";
		class Turrets: Turrets
		{
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
					"VTV_cargo_1",
					"VTV_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=4535;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit"
				};
				unloadingInterval=2;
				loadingDistance=3;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhsusf_M1083A1P2_B_M2_open_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BOpen_M2_Name";
	};
	class rhsusf_M1083A1P2_B_M2_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BFlat_M2_Name";
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
			};
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
					"VTV_cargo_1",
					"VTV_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=4535;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit"
				};
				unloadingInterval=2;
				loadingDistance=3;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhsusf_M1084A1P2_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2_Name";
		maxFordingDepth=0.69999999;
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
					"VTV_cargo_1",
					"VTV_cargo_2"
				};
				disableHeightLimit=1;
				maxLoadMass=4536;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit"
				};
				unloadingInterval=2;
				loadingDistance=4.3000002;
				loadingAngle=180;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
		class Turrets: Turrets
		{
		};
	};
	class rhsusf_M1084A1P2_B_fmtv_usarmy: rhsusf_M1084A1P2_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2B_Name";
	};
	class rhsusf_M1084A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2B_M2_Name";
		maxFordingDepth=0;
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
			};
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
					"VTV_cargo_1",
					"VTV_cargo_2"
				};
				disableHeightLimit=1;
				maxLoadMass=4536;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VTV_exit"
				};
				unloadingInterval=2;
				loadingDistance=4.3000002;
				loadingAngle=180;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhsusf_M1078A1P2_B_CP_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BCP_Name";
		accuracy=0.5;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class Attributes
		{
			class rhs_hide_steps
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Lower Stairs";
				property="rhs_hide_steps";
				expression="[_this,'hide_steps',1] spawn rhs_fnc_fmtv_Deploy";
			};
		};
		class Turrets: Turrets
		{
		};
	};
	class rhsusf_M1085A1P2_B_Medical_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1085A1P2B_MHQ_Name";
		accuracy=0.5;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class Wheels: Wheels
		{
			class L1: L1
			{
				springStrength=56624;
				springDamperRate=18119;
			};
			class L2: L1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class L3: L1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R1: L1
			{
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
				side="right";
			};
			class R2: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
			class R3: R1
			{
				steering=0;
				maxHandBrakeTorque=36000;
			};
		};
		class Attributes
		{
			class rhs_deploy_cbps
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="Deploy CBPS";
				property="rhs_deploy_cbps";
				expression="[_this,'deploy_platform',1,true] spawn rhs_fnc_fmtv_Deploy; _this animateSource ['deploy_tent',1,true]";
			};
		};
		class Turrets: Turrets
		{
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
		};
	};
	class rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2B_M2_Name";
	};
	class rhsusf_M1078A1P2_B_WD_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2B_Name";
	};
	class rhsusf_M1078A1P2_WD_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2_Name";
	};
	class rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy: rhsusf_M1078A1P2_B_CP_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BCP_Name";
	};
	class rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_open_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BOPEN_M2_Name";
	};
	class rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy: rhsusf_M1078A1P2_B_open_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BOpen_Name";
	};
	class rhsusf_M1078A1P2_WD_open_fmtv_usarmy: rhsusf_M1078A1P2_open_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2Open_Name";
	};
	class rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BFlat_M2_Name";
	};
	class rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BFlat_Name";
	};
	class rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2Flat_Name";
	};
	class rhsusf_M1083A1P2_B_WD_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2B_Name";
	};
	class rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2B_M2_Name";
	};
	class rhsusf_M1083A1P2_WD_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2_Name";
	};
	class rhsusf_M1083A1P2_B_WD_open_fmtv_usarmy: rhsusf_M1083A1P2_B_open_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BOpen_Name";
	};
	class rhsusf_M1083A1P2_B_M2_WD_open_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_open_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BOpen_M2_Name";
	};
	class rhsusf_M1083A1P2_WD_open_fmtv_usarmy: rhsusf_M1083A1P2_open_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2Open_Name";
	};
	class rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BFlat_Name";
	};
	class rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BFlat_M2_Name";
	};
	class rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2Flat_Name";
	};
	class rhsusf_M1084A1P2_WD_fmtv_usarmy: rhsusf_M1084A1P2_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2_Name";
	};
	class rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy: rhsusf_M1084A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2B_M2_Name";
	};
	class rhsusf_M1084A1P2_B_WD_fmtv_usarmy: rhsusf_M1084A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2B_Name";
	};
	class rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy: rhsusf_M1085A1P2_B_Medical_fmtv_usarmy
	{
		displayName="$STR_M1085A1P2B_MHQ_Name";
	};
	class rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2B_M2_Name";
	};
	class rhsusf_M1078A1P2_B_D_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2B_Name";
	};
	class rhsusf_M1078A1P2_D_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2_Name";
	};
	class rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy: rhsusf_M1078A1P2_B_CP_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BCP_Name";
	};
	class rhsusf_M1078A1P2_B_M2_D_open_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_open_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BOPEN_M2_Name";
	};
	class rhsusf_M1078A1P2_B_D_open_fmtv_usarmy: rhsusf_M1078A1P2_B_open_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BOpen_Name";
	};
	class rhsusf_M1078A1P2_D_open_fmtv_usarmy: rhsusf_M1078A1P2_open_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2Open_Name";
	};
	class rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BFlat_M2_Name";
	};
	class rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2BFlat_Name";
	};
	class rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1078A1P2Flat_Name";
	};
	class rhsusf_M1083A1P2_B_D_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2B_Name";
	};
	class rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2B_M2_Name";
	};
	class rhsusf_M1083A1P2_D_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2_Name";
	};
	class rhsusf_M1083A1P2_B_D_open_fmtv_usarmy: rhsusf_M1083A1P2_B_open_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BOpen_Name";
	};
	class rhsusf_M1083A1P2_B_M2_D_open_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_open_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BOpen_M2_Name";
	};
	class rhsusf_M1083A1P2_D_open_fmtv_usarmy: rhsusf_M1083A1P2_open_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2Open_Name";
	};
	class rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BFlat_Name";
	};
	class rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2BFlat_M2_Name";
	};
	class rhsusf_M1083A1P2_D_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_flatbed_fmtv_usarmy
	{
		displayName="$STR_M1083A1P2Flat_Name";
	};
	class rhsusf_M1084A1P2_D_fmtv_usarmy: rhsusf_M1084A1P2_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2_Name";
	};
	class rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy: rhsusf_M1084A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2B_M2_Name";
	};
	class rhsusf_M1084A1P2_B_D_fmtv_usarmy: rhsusf_M1084A1P2_B_fmtv_usarmy
	{
		displayName="$STR_M1084A1P2B_Name";
	};
	class rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy: rhsusf_M1085A1P2_B_Medical_fmtv_usarmy
	{
		displayName="$STR_M1085A1P2B_MHQ_Name";
	};
	class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1078A1R_SOV_M2_Name";
		accuracy=0.5;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		transportAmmo=150000;
		transportFuel=150000;
		transportRepair=100000000;
		supplyRadius=12;
		attenuationEffectType="OpenCarAttenuation";
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				weapons[]=
				{
					"RHS_M2"
				};
				minElev=-10;
				maxElev=40;
				soundAttenuationTurret="HeliAttenuationGunner";
				ejectDeadGunner=0;
				stabilizedInAxes=0;
				startEngine=0;
				class ViewOptics: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner: ViewOptics
				{
				};
			};
		};
		animationList[]={};
	};
	class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom: rhsusf_M1084A1P2_B_M2_fmtv_usarmy
	{
		displayName="$STR_M1084A1R_SOV_M2_Name";
		accuracy=0.5;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		weapons[]=
		{
			"TruckHorn2",
			"rhsusf_weap_M257_8"
		};
		rhs_hasSmokeCap=1;
		attenuationEffectType="OpenCarAttenuation";
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				weapons[]=
				{
					"RHS_M2"
				};
				minElev=-10;
				maxElev=40;
				soundAttenuationTurret="HeliAttenuationGunner";
				ejectDeadGunner=0;
				stabilizedInAxes=0;
				startEngine=0;
				class ViewOptics: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewGunner: ViewOptics
				{
				};
			};
		};
		animationList[]={};
	};
	class rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom: rhsusf_M1084A1R_SOV_M2_D_fmtv_socom
	{
		displayName="$STR_M1084A1R_SOV_M2_Name";
	};
	class rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom: rhsusf_M1078A1R_SOV_M2_D_fmtv_socom
	{
		displayName="$STR_M1078A1R_SOV_M2_Name";
	};
	class rhsusf_M1083A1P2_B_M2_wd_MHQ_fmtv_usarmy: rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy
	{
	};
	class rhsusf_M1083A1P2_B_M2_wd_Medical_fmtv_usarmy: rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy
	{
	};
	class rhsusf_M1083A1P2_B_M2_d_MHQ_fmtv_usarmy: rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy
	{
	};
	class rhsusf_M1083A1P2_B_M2_d_Medical_fmtv_usarmy: rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy
	{
	};
};
