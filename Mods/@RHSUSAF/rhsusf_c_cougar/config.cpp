class CfgPatches
{
	class rhsusf_c_Cougar
	{
		units[]=
		{
			"rhsusf_CGRCAT1A2_usmc_d",
			"rhsusf_CGRCAT1A2_usmc_wd",
			"rhsusf_CGRCAT1A2_M2_usmc_d",
			"rhsusf_CGRCAT1A2_M2_usmc_wd",
			"rhsusf_CGRCAT1A2_Mk19_usmc_d",
			"rhsusf_CGRCAT1A2_Mk19_usmc_wd"
		};
		weapons[]={};
		name="Cougar MRAP";
	};
};
class DefaultEventhandlers;
class RscPicture;
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
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
	};
	class MRAP_01_base_F: Car_F
	{
		class EventHandlers;
	};
	class rhsusf_Cougar_base: MRAP_01_base_F
	{
		side=1;
		displayName="Cougar";
		weapons[]=
		{
			"TruckHorn2",
			"rhsusf_weap_duke"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"pintle"
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
		class Attributes
		{
			class rhs_hideDUKE
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="hide DUKE antennas";
				property="rhs_hideDUKE";
				expression="_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[-1]]};";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
		};
		hullDamageCauseExplosion=1;
		armorStructural=8;
		class HitPoints: HitPoints
		{
			class HitHull: HitBody
			{
				armor=-200;
				passThrough=1;
				name="karoserie";
				minimalhit=-45;
				explosionShielding=0.0099999998;
				radius=0.22;
			};
			class HitFuel
			{
				armor=-50;
				material=-1;
				name="Hit_Fuel";
				armorComponent="Hit_Fuel_L";
				explosionShielding=0.5;
				passThrough=0;
			};
			class HitFuel2: HitFuel
			{
				armorComponent="Hit_Fuel_R";
			};
			class HitEngine
			{
				armor=-50;
				material=-1;
				name="Hit_Engine";
				armorComponent="Hit_Engine";
				passThrough=0.2;
			};
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
			class HitGlass1
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass1";
				name="glass1";
			};
			class HitGlass2
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass2";
				name="glass2";
			};
			class HitGlass3
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass3";
				name="glass3";
			};
			class HitGlass4
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass4";
				name="glass4";
			};
			class HitGlass5
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass5";
				name="glass5";
			};
			class HitGlass6
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass6";
				name="glass6";
			};
			class HitGlass7
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass7";
				name="glass7";
			};
			class HitGlass8
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass8";
				name="glass8";
			};
		};
		armorLights=0.0099999998;
		normalSpeedForwardCoef=0.89999998;
		turnCoef=3.5;
		terrainCoef=0.5;
		simulation="carx";
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=105;
		fuelCapacity=20;
		wheelCircumference=2.95;
		brakeIdleSpeed=2;
		maxFordingDepth=0.40000001;
		waterSpeedFactor=0.30000001;
		waterResistance=10;
		waterResistanceCoef=0.2;
		waterLeakiness=250;
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
				0.55000001
			};
			TransmissionRatios[]=
			{
				"High",
				8.1999998
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.99000001,0.99000001,0.99000001,0.99000001,0.99000001,0.99000001};
		switchTime=0.31;
		latency=1.3;
		transmissionLosses=18;
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=85;
		dampingRateFullThrottle=0.078000002;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.31818199,0.45789799},
			{0.45454499,0.78672397},
			{0.590909,1},
			{0.63636398,1},
			{0.72727299,0.99078101},
			{0.909091,0.974186},
			{0.95454502,0.94038099},
			{1.05273,0}
		};
		enginePower=336;
		peakTorque=2277.8;
		minOmega=65;
		maxOmega=230.38;
		idleRPM=700;
		redRPM=2200;
		engineLosses=12;
		thrustDelay=1;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=26.5;
		antiRollbarForceLimit=26.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=75;
		accelAidForceSpd=2.23;
		accelAidForceCoef=4;
		accelAidForceYOffset=-1.3;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.37;
				steering=1;
				mass=80;
				MOI=25;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=35000;
				maxHandBrakeTorque=0;
				maxCompression=0.12;
				maxDroop=0.12;
				sprungMass=-1;
				springStrength=405000;
				springDamperRate=45725;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=40;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,2.5},
					{0.5,2.3},
					{1,2}
				};
			};
			class L2: L1
			{
				steering=0;
			};
			class R1: L1
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R2: R1
			{
				steering=0;
			};
		};
		class Damage
		{
		};
		class EventHandlers: EventHandlers
		{
		};
	};
	class rhsusf_cougar_GPK_base: rhsusf_Cougar_base
	{
		class Hitpoints: HitPoints
		{
			class HitGlass9
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass9";
				name="glass9";
			};
			class HitGlass10
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass10";
				name="glass10";
			};
			class HitGlass11
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass11";
				name="glass11";
			};
			class HitGlass12
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass12";
				name="glass12";
			};
			class HitGlass13
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass13";
				name="glass13";
			};
			class HitGlass14
			{
				armor=-70;
				explosionShielding=0.40000001;
				passThrough=0;
				minimalHit=-0.1;
				radius=0.2;
				armorComponent="glass14";
				name="glass14";
			};
		};
	};
	class rhsusf_CGRCAT1A2_M2_usmc_d: rhsusf_cougar_GPK_base
	{
		displayName="$STR_RHS_CGR_M2_NAME";
		accuracy=0.5;
		threat[]={0.89999998,0.30000001,0.1};
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				weapons[]=
				{
					"RHS_M2"
				};
				minElev=-10;
				maxElev=40;
				ejectDeadGunner=0;
				stabilizedInAxes=0;
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
	};
	class rhsusf_CGRCAT1A2_Mk19_usmc_d: rhsusf_CGRCAT1A2_M2_usmc_d
	{
		displayName="$STR_RHS_CGR_MK19_NAME";
		accuracy=0.5;
		threat[]={0.89999998,0.30000001,0.1};
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				weapons[]=
				{
					"RHS_MK19"
				};
			};
		};
	};
	class rhsusf_CGRCAT1A2_usmc_wd: rhsusf_CGRCAT1A2_usmc_d
	{
		displayName="$STR_RHS_CGR_NAME";
	};
	class rhsusf_CGRCAT1A2_M2_usmc_wd: rhsusf_CGRCAT1A2_M2_usmc_d
	{
		displayName="$STR_RHS_CGR_M2_NAME";
	};
	class rhsusf_CGRCAT1A2_Mk19_usmc_wd: rhsusf_CGRCAT1A2_Mk19_usmc_d
	{
		displayName="$STR_RHS_CGR_MK19_NAME";
	};
};
