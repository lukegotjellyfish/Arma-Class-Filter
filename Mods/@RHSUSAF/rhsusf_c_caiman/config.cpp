class CfgPatches
{
	class rhsusf_c_Caiman
	{
		units[]=
		{
			"rhsusf_M1220_usarmy_d",
			"rhsusf_M1220_M2_usarmy_d",
			"rhsusf_M1220_MK19_usarmy_d",
			"rhsusf_M1220_M153_M2_usarmy_d",
			"rhsusf_M1220_M153_MK19_usarmy_d",
			"rhsusf_M1230_M2_usarmy_d",
			"rhsusf_M1230_MK19_usarmy_d",
			"rhsusf_M1230a1_usarmy_d",
			"rhsusf_M1220_usarmy_wd",
			"rhsusf_M1220_M2_usarmy_wd",
			"rhsusf_M1220_MK19_usarmy_wd",
			"rhsusf_M1220_M153_M2_usarmy_wd",
			"rhsusf_M1220_M153_MK19_usarmy_wd",
			"rhsusf_M1230_M2_usarmy_wd",
			"rhsusf_M1230_MK19_usarmy_wd",
			"rhsusf_M1230a1_usarmy_wd"
		};
		weapons[]={};
		name="Caiman MRAP";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class RscPicture;
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
	class rhsusf_caiman_base: Truck_01_base_F
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
		extCameraPosition[]={0.5,2,-9};
		driverRightLegAnimName="pedal_r";
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
		class Turrets;  //found empty after stripping
		hullDamageCauseExplosion=1;
		armorStructural=8;
		class HitPoints: HitPoints
		{
			class HitHull: HitBody
			{
				armor=1.5;
				passThrough=1;
				name="karoserie";
				minimalhit=0.15000001;
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
		maxFordingDepth=-1.3;
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
		antiRollbarForceCoef=3.5;
		antiRollbarForceLimit=4.5;
		antiRollbarSpeedMin=40;
		antiRollbarSpeedMax=95;
		accelAidForceSpd=2.23;
		accelAidForceCoef=4;
		accelAidForceYOffset=-1.3;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.34;
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
	class rhsusf_M1220_usarmy_d: rhsusf_caiman_base
	{
		accuracy=0.5;
	};
	class rhsusf_caiman_GPK_base: rhsusf_caiman_base
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
	class rhsusf_M1220_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		accuracy=0.5;
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
	class rhsusf_M1220_MK19_usarmy_d: rhsusf_M1220_M2_usarmy_d
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
		};
	};
	class rhsusf_M1220_M153_M2_usarmy_d: rhsusf_M1220_M2_usarmy_d
	{
		accuracy=0.5;
		threat[]={0.89999998,0.30000001,0.1};
		animationList[]={};
		class MFD
		{
			class MFD_CROWS
			{
				topLeft="CROWS_TL";
				topRight="CROWS_TR";
				bottomLeft="CROWS_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Static_Offset
					{
						pos[]={0.079999998,0.89999998};
					};
					class Cross
					{
						pos[]={0,-0.145};
					};
					class TurretRotation
					{
						source="weaponHeading";
						sourceIndex=0;
						min=-180;
						max=180;
						minAngle=-180;
						maxAngle=180;
						sourceOffset=-180;
						aspectRatio=1.29101;
					};
				};
				class Draw
				{
					color[]={1,0,0,1};
					alpha=1;
					class StaticDraw
					{
						width=3;
						points[]=
						{
							
							{
								"Cross",
								{0.43000001,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.56999999,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.55513197},
								1
							},
							
							{
								"Cross",
								{0.5,0.73587298},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{0.010416,-0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0.02052,-0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{0.029999999,-0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{0.038568001,-0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{0.045960002,-0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{0.051959999,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.056382,-0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{0.059087999,-0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{0.059999999,0},
								1
							},
							
							{
								"Static_Offset",
								{0.059087999,0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{0.056382,0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{0.051959999,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.045960002,0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{0.038568001,0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{0.029999999,0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{0.02052,0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{0.010416,0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0,0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{-0.010416,0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{-0.02052,0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{-0.029999999,0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{-0.038568001,0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{-0.045960002,0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{-0.051959999,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.056382,0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{-0.059087999,0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{-0.059999999,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.059087999,-0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{-0.056382,-0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{-0.051959999,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.045960002,-0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{-0.038568001,-0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{-0.029999999,-0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{-0.02052,-0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{-0.010416,-0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.064550303},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.029999999,-0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{0.025,-0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.0519615,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.043301299,-0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.059999999,3.3859e-009},
								1
							},
							
							{
								"Static_Offset",
								{0.050000001,2.8215801e-009},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.0519615,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.043301299,0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.029999999,0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{0.025,0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-5.2453699e-009,0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{-4.3711399e-009,0.064550303},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.029999999,0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{-0.025,0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.0519615,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.043301299,0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.059999999,-9.23705e-010},
								1
							},
							
							{
								"Static_Offset",
								{-0.050000001,-7.6975398e-010},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.0519615,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.043301299,-0.0322752},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.029999999,-0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{-0.025,-0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"TurretRotation",
									0,
									-0.058095202
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"TurretRotation",
									0,
									0
								},
								1
							},
							{}
						};
					};
					class StaticDrawBold
					{
						width=8;
						points[]=
						{
							
							{
								"Cross",
								{0.30000001,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.43000001,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.56999999,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.69999999,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.38730201},
								1
							},
							
							{
								"Cross",
								{0.5,0.55513197},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.73587298},
								1
							},
							
							{
								"Cross",
								{0.5,0.90370399},
								1
							},
							{}
						};
					};
					class Range_Text
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.50999999},
							1
						};
						right[]=
						{
							{0.059999999,0.50999999},
							1
						};
						down[]=
						{
							{0.0099999998,0.56},
							1
						};
					};
					class Range_Value
					{
						source="laserDist";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.50999999
							},
							1
						};
						right[]=
						{
							{0.16,0.50999999},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.56
							},
							1
						};
					};
					class Ballistic_Text
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.67000002},
							1
						};
						right[]=
						{
							{0.059999999,0.67000002},
							1
						};
						down[]=
						{
							{0.0099999998,0.72000003},
							1
						};
					};
					class Ballistic_Value
					{
						source="laserDist";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.13",
								0.67000002
							},
							1
						};
						right[]=
						{
							{0.19,0.67000002},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.13",
								0.72000003
							},
							1
						};
					};
					class Mode_Text
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.70999998},
							1
						};
						right[]=
						{
							{0.059999999,0.70999998},
							1
						};
						down[]=
						{
							{0.0099999998,0.75999999},
							1
						};
					};
					class Mode_Value
					{
						source="static";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.70999998
							},
							1
						};
						right[]=
						{
							{0.16,0.70999998},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.75999999
							},
							1
						};
					};
					class Elev_Text
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.75},
							1
						};
						right[]=
						{
							{0.059999999,0.75},
							1
						};
						down[]=
						{
							{0.0099999998,0.80000001},
							1
						};
					};
					class Elev_Value
					{
						source="[y]turretworld";
						sourceScale=1;
						sourcePrecision=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.75
							},
							1
						};
						right[]=
						{
							{0.16,0.75},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.80000001
							},
							1
						};
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class CROWS_Turret: NewTurret
			{
				usePip=1;
				headAimDown=22;
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
					0.17782794,
					1,
					10
				};
				weapons[]=
				{
					"RHS_M2_CROWS_M153"
				};
				magazines[]=
				{
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"rhs_mag_400rnd_127x99_mag_Tracer_Red"
				};
				minElev=-20;
				maxElev=60;
				ejectDeadGunner=0;
				stabilizedInAxes=3;
				startEngine=0;
				animationSourceStickX="gunner_stick_trav";
				animationSourceStickY="gunner_stick_elev";
				class ViewOptics: RCWSOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					minFov=0.0083333002;
					maxFov=0.25;
					initFov=0.25;
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-25;
					minAngleX=-45;
					maxAngleX=45;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={2,3};
				};
				class OpticsIn
				{
					class DaysightWFOV: ViewOptics
					{
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_CROWS_Day";
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
					};
					class ThermalWFOV: DaysightWFOV
					{
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						hitpoint="Hit_Optic_CROWS_TI";
						initFov=0.162791;
						minFov=0.162791;
						maxFov=0.162791;
					};
					class ThermalNFOV: ThermalWFOV
					{
						initFov=0.056000002;
						minFov=0.056000002;
						maxFov=0.056000002;
					};
					class DaysightNFOV: DaysightWFOV
					{
						initFov=0.0466667;
						minFov=0.0466667;
						maxFov=0.0466667;
					};
					class DaysightVNFOV: DaysightWFOV
					{
						initFov=0.0233333;
						minFov=0.0233333;
						maxFov=0.0233333;
					};
				};
				class Hitpoints
				{
					class Hit_Optic_CROWS_Day
					{
						armor=-40;
						explosionShielding=0;
						name="";
						armorComponent="Hit_Optic_CROWS_Day";
						passThrough=0;
					};
					class Hit_Optic_CROWS_TI
					{
						armor=-40;
						explosionShielding=0;
						name="";
						armorComponent="Hit_Optic_CROWS_TI";
						passThrough=0;
					};
					class Hit_Optic_CROWS_LRF
					{
						armor=-40;
						explosionShielding=0;
						name="";
						armorComponent="Hit_Optic_CROWS_LRF";
						passThrough=0;
					};
					class HitTurret
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="";
						armorComponent="Hit_Turret";
						passThrough=0;
					};
					class HitGun
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="";
						armorComponent="Hit_Gun";
						passThrough=0;
					};
				};
			};
		};
	};
	class rhsusf_M1220_M153_MK19_usarmy_d: rhsusf_M1220_M153_M2_usarmy_d
	{
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[]=
				{
					"RHS_MK19_CROWS_M153"
				};
				magazines[]=
				{
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1"
				};
			};
		};
	};
	class rhsusf_M1230_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		accuracy=0.5;
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
			class rhs_hideLWPK
			{
				control="CheckboxNumber";
				defaultValue="0";
				property="rhs_hideLWPK";
				expression="_this animate ['LWPK_hide',_value,true]";
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
	class rhsusf_M1230_MK19_usarmy_d: rhsusf_M1230_M2_usarmy_d
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
		};
	};
	class rhsusf_M1230a1_usarmy_d: rhsusf_M1220_usarmy_d
	{
		accuracy=0.5;
		attendant=1;
	};
	class rhsusf_M1220_usarmy_wd: rhsusf_M1220_usarmy_d
	{
		accuracy=0.5;
	};
	class rhsusf_M1220_M2_usarmy_wd: rhsusf_M1220_M2_usarmy_d
	{
		accuracy=0.5;
	};
	class rhsusf_M1220_MK19_usarmy_wd: rhsusf_M1220_MK19_usarmy_d
	{
		accuracy=0.5;
	};
	class rhsusf_M1230_M2_usarmy_wd: rhsusf_M1230_M2_usarmy_d
	{
		accuracy=0.5;
	};
	class rhsusf_M1230_MK19_usarmy_wd: rhsusf_M1230_MK19_usarmy_d
	{
		accuracy=0.5;
	};
	class rhsusf_M1220_M153_M2_usarmy_wd: rhsusf_M1220_M153_M2_usarmy_d
	{
		accuracy=0.5;
	};
	class rhsusf_M1220_M153_MK19_usarmy_wd: rhsusf_M1220_M153_MK19_usarmy_d
	{
		accuracy=0.5;
	};
	class rhsusf_M1230a1_usarmy_wd: rhsusf_M1230a1_usarmy_d
	{
		accuracy=0.5;
	};
};
