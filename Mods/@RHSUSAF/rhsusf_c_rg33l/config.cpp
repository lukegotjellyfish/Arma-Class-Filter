class CfgPatches
{
	class rhsusf_c_RG33L
	{
		units[]=
		{
			"rhsusf_M1232_usarmy_d",
			"rhsusf_M1232_usarmy_wd",
			"rhsusf_M1232_M2_usarmy_d",
			"rhsusf_M1232_M2_usarmy_wd",
			"rhsusf_M1232_MK19_usarmy_d",
			"rhsusf_M1232_MK19_usarmy_wd",
			"rhsusf_M1237_M2_usarmy_d",
			"rhsusf_M1237_M2_usarmy_wd",
			"rhsusf_M1237_MK19_usarmy_d",
			"rhsusf_M1237_MK19_usarmy_wd",
			"rhsusf_M1232_MC_M2_usmc_d",
			"rhsusf_M1232_MC_M2_usmc_wd",
			"rhsusf_M1232_MC_MK19_usmc_d",
			"rhsusf_M1232_MC_MK19_usmc_wd"
		};
		weapons[]={};
		name="RG33L MRAP";
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
		class ViewOptics;
	};
	class MRAP_01_base_F: Car_F
	{
		class EventHandlers;
	};
	class rhsusf_RG33L_base: MRAP_01_base_F
	{
		side=1;
		weapons[]=
		{
			"TruckHorn2",
			"rhsusf_weap_duke"
		};
		magazines[]=
		{
			"rhsusf_mag_duke"
		};
		smokeLauncherGrenadeCount=1;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=150;
		class textureSources
		{
			class rhs_desert;  //found empty after stripping
			class rhs_woodland;  //found empty after stripping
		};
		class Attributes
		{
			class rhs_hideDUKE
			{
				control="CheckboxNumber";
				defaultValue="0";
				property="rhs_hideDUKE";
				expression="_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[-1]]};";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=7;
				enabledByAnimationSource="hatch2_door";
				animationSourceHatch="hatch2";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-8.8823996,-124.1897},
						{-8.4828997,-110.5723},
						{-14.2171,-107.8792},
						{-14.888,-90.457397},
						{-10.2899,-88.108299},
						{-9.2371998,-76.286201},
						{-11.9503,-70.827003},
						{-26.405899,69.827301},
						{-16.4806,76.471001},
						{-7.9335999,77.705803},
						{-8.3456001,84.552299},
						{-2.2941,87.966202},
						{-2.9195001,91.027},
						{-6.3280001,92.302399},
						{-6.4105,102.5344},
						{-8.1226997,117.8972},
						{-11.4083,129.48959},
						{-15.1118,155.20911}
					};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=9;
				enabledByAnimationSource="hatch3_door";
				animationSourceHatch="hatch3";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-7.5496998,-118.1134},
						{-5.0811,-109.5662},
						{-2.086,-108.5875},
						{-2.0293,-106.3234},
						{-4.2974,-104.8223},
						{-4.2154999,-93.848801},
						{-5.2694001,-82.077499},
						{-7.1575999,-80.3778},
						{-7.6494002,-75.740997},
						{-10.6541,-75.0728},
						{-19.496401,-63.455898},
						{-34.830898,-43.921101},
						{-16.2113,78.013199},
						{-15.0773,98.953796},
						{-11.2594,135.87109},
						{-11.4296,145.9026}
					};
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=8;
				enabledByAnimationSource="hatch4_door";
				animationSourceHatch="hatch4";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-27.017599,-127.8668},
						{-34.2159,-91.802299},
						{-21.140301,-86.937798},
						{-16.7845,-66.8125},
						{-26.256701,-51.564201},
						{-19.914,75.287903},
						{-13.6206,78.642502},
						{-4.5588999,86.463898},
						{-1.948,88.916298},
						{-2.276,90.498802},
						{-5.2764001,91.710403},
						{-5.5019999,101.8547},
						{-6.5358,110.5171},
						{-10.381,123.444},
						{-16.244301,150.451}
					};
				};
			};
		};
		class DriverOpticsIn
		{
			class DVE_Wide: ViewOptics
			{
				camPos="dve_view_pos";
				visionMode[]=
				{
					"TI"
				};
				thermalMode[]={0,1};
				initFov=0.60000002;
				minFov=0.60000002;
				maxFov=0.60000002;
				hitpoint="Hit_Optic_DVEA";
			};
			class DVS_Rear: DVE_Wide
			{
				camPos="dve_view_rear_pos";
				camDir="dve_view_rear_dir";
				initFov=0.875;
				minFov=0.875;
				maxFov=0.875;
				hitpoint="Hit_Optic_Driver_Rear";
			};
		};
		hullDamageCauseExplosion=1;
		armorStructural=8;
		class HitPoints: HitPoints
		{
			class HitHull: HitBody
			{
				armor=0.75;
				passThrough=1;
				name="karoserie";
				minimalhit=0.050000001;
				explosionShielding=0.0099999998;
				radius=0.22;
			};
			class HitFuel
			{
				armor=1.5;
				material=-1;
				name="palivo";
				explosionShielding=0.5;
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.89999998;
				material=-1;
				name="motor";
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
			class HitDuke2: HitDuke1
			{
				name="duke2";
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
			};
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
			class HitGlass18: HitGlass1
			{
				name="glass18";
			};
			class HitGlass19: HitGlass1
			{
				name="glass19";
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
		antiRollbarForceCoef=1.5;
		antiRollbarForceLimit=2.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=65;
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
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=-1;
				springStrength=305000;
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
			class L3: L1
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
				steering=0;
			};
			class R3: R1
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
		};
		class Damage;  //found empty after stripping
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class rhsusf_M1232_usarmy_d: rhsusf_RG33L_base
	{
		accuracy=0.5;
	};
	class rhsusf_RG33L_GPK_base: rhsusf_RG33L_base
	{
		threat[]={0.89999998,0.30000001,0.1};
		animationList[]=
		{
			"hide_ogpkover",
			0.5,
			"hide_ogpknet",
			0.5,
			"hide_ogpkbust",
			0.5
		};
	};
	class rhsusf_M1232_M2_usarmy_d: rhsusf_RG33L_GPK_base
	{
		accuracy=0.5;
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
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
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
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
				class ViewGunner: ViewOptics;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_02
			{
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-8.4928999,-121.755},
						{-7.8962002,-110.5382},
						{-14.1648,-108.6039},
						{-14.3219,-90.588501},
						{-10.2817,-87.779198},
						{-9.0565004,-75.996902},
						{-15.5082,-66.924797},
						{-32.886501,-45.896599},
						{-34.2066,64.135002},
						{-16.2796,77.883499},
						{-6.7441001,84.579399},
						{-4.5728002,87.243103},
						{-2.2958,89.0149},
						{4.2705998,97.8377},
						{5.6789999,104.009},
						{2.2804,134.33231},
						{-13.281,135.8013},
						{-17.2118,157.5442}
					};
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-8.3014002,-121.1626},
						{-6.9716001,-114.7952},
						{3.2541001,-111.3805},
						{3.6020999,-87.303299},
						{1.1921,-83.833397},
						{-6.8407001,-79.385696},
						{-11.3016,-74.247498},
						{-19.8969,-61.745201},
						{-34.578098,-35.091202},
						{-35.049198,55.5252},
						{-29.561399,68.0467},
						{-14.5186,74.265503},
						{-9.8469,102.176},
						{-5.5565,133.27361},
						{-6.8999,146.11971}
					};
				};
			};
			class CargoTurret_04: CargoTurret_04
			{
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-28.573799,-127.5287},
						{-33.708698,-92.986397},
						{-21.114901,-88.430702},
						{-16.48,-68.156898},
						{-20.622801,-55.832699},
						{-35.012699,-28.8438},
						{-34.496399,62.709202},
						{-18.33,75.629204},
						{-12.2273,78.494698},
						{-5.0579,85.831802},
						{-1.974,89.148903},
						{2.6310999,94.985703},
						{2.2923999,108.5605},
						{1.4529001,119.3579},
						{-0.97390002,121.3212},
						{-10.3261,123.4012},
						{-16.787901,151.69901}
					};
				};
			};
		};
	};
	class rhsusf_M1232_MK19_usarmy_d: rhsusf_M1232_M2_usarmy_d
	{
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
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M1001",
					"RHS_48Rnd_40mm_MK19_M1001",
					"RHS_48Rnd_40mm_MK19_M1001"
				};
			};
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
		};
	};
	class rhsusf_M1237_base: rhsusf_RG33L_GPK_base
	{
		class Hitpoints: HitPoints
		{
			class Hit_Rhino
			{
				armor=-50;
				armorComponent="rhino";
				name="rhino";
				minimalhit=-0.40000001;
				explosionShielding=8.5;
				passThrough=0;
				radius=0.2;
			};
		};
		class Attributes: Attributes
		{
			class rhs_hideDUKE: rhs_hideDUKE;  //found empty after stripping
			class DoorL: DoorL;  //found empty after stripping
			class DoorR: DoorR;  //found empty after stripping
			class rhino
			{
				control="CheckboxNumber";
				defaultValue="0";
				property="Rhino_down";
				expression="_this animateDoor ['%s',_value,true]";
			};
		};
	};
	class rhsusf_M1237_M2_usarmy_d: rhsusf_M1237_base
	{
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
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
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
				class ViewGunner: ViewOptics;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_02
			{
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-8.4928999,-121.755},
						{-7.8962002,-110.5382},
						{-14.1648,-108.6039},
						{-14.3219,-90.588501},
						{-10.2817,-87.779198},
						{-9.0565004,-75.996902},
						{-15.5082,-66.924797},
						{-32.886501,-45.896599},
						{-34.2066,64.135002},
						{-16.2796,77.883499},
						{-6.7441001,84.579399},
						{-4.5728002,87.243103},
						{-2.2958,89.0149},
						{4.2705998,97.8377},
						{5.6789999,104.009},
						{2.2804,134.33231},
						{-13.281,135.8013},
						{-17.2118,157.5442}
					};
				};
			};
			class CargoTurret_03: CargoTurret_03
			{
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-8.3014002,-121.1626},
						{-6.9716001,-114.7952},
						{3.2541001,-111.3805},
						{3.6020999,-87.303299},
						{1.1921,-83.833397},
						{-6.8407001,-79.385696},
						{-11.3016,-74.247498},
						{-19.8969,-61.745201},
						{-34.578098,-35.091202},
						{-35.049198,55.5252},
						{-29.561399,68.0467},
						{-14.5186,74.265503},
						{-9.8469,102.176},
						{-5.5565,133.27361},
						{-6.8999,146.11971}
					};
				};
			};
			class CargoTurret_04: CargoTurret_04
			{
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-160},
						{45,160}
					};
					limitsArrayBottom[]=
					{
						{-28.573799,-127.5287},
						{-33.708698,-92.986397},
						{-21.114901,-88.430702},
						{-16.48,-68.156898},
						{-20.622801,-55.832699},
						{-35.012699,-28.8438},
						{-34.496399,62.709202},
						{-18.33,75.629204},
						{-12.2273,78.494698},
						{-5.0579,85.831802},
						{-1.974,89.148903},
						{2.6310999,94.985703},
						{2.2923999,108.5605},
						{1.4529001,119.3579},
						{-0.97390002,121.3212},
						{-10.3261,123.4012},
						{-16.787901,151.69901}
					};
				};
			};
		};
	};
	class rhsusf_M1237_MK19_usarmy_d: rhsusf_M1237_M2_usarmy_d
	{
		accuracy=0.5;
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				weapons[]=
				{
					"RHS_MK19"
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
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M430A1",
					"RHS_48Rnd_40mm_MK19_M1001",
					"RHS_48Rnd_40mm_MK19_M1001",
					"RHS_48Rnd_40mm_MK19_M1001"
				};
			};
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
		};
	};
	class rhsusf_M1232_MC_M2_usmc_d: rhsusf_M1232_M2_usarmy_d
	{
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
		};
	};
	class rhsusf_M1232_MC_M2_usmc_wd: rhsusf_M1232_M2_usarmy_d
	{
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
		};
	};
	class rhsusf_M1232_MC_MK19_usmc_d: rhsusf_M1232_MK19_usarmy_d
	{
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
		};
	};
	class rhsusf_M1232_MC_MK19_usmc_wd: rhsusf_M1232_MK19_usarmy_d
	{
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
		};
	};
	class rhsusf_M1232_usarmy_wd: rhsusf_M1232_usarmy_d;  //found empty after stripping
	class rhsusf_M1232_M2_usarmy_wd: rhsusf_M1232_M2_usarmy_d;  //found empty after stripping
	class rhsusf_M1232_MK19_usarmy_wd: rhsusf_M1232_MK19_usarmy_d;  //found empty after stripping
	class rhsusf_M1237_M2_usarmy_wd: rhsusf_M1237_M2_usarmy_d;  //found empty after stripping
	class rhsusf_M1237_MK19_usarmy_wd: rhsusf_M1237_MK19_usarmy_d;  //found empty after stripping
};
