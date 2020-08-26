class CfgPatches
{
	class A3_Armor_F_EPB_MBT_03
	{
		addonRootClass="A3_Armor_F_EPB";
		requiredAddons[]=
		{
			"A3_Armor_F_EPB"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_MBT_03_cannon_F"
		};
		weapons[]={};
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
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
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner;
					};
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
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class MBT_03_base_F: Tank_F
	{
		features="Randomization: No						<br />Camo selections: 3 - hull, main turret, RCWS turret						<br />Script door sources: None						<br />Script animations: HideHull, HideTurret						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author="$STR_A3_Bohemia_Interactive";
		mapSize=11.57;
		_generalMacro="MBT_03_base_F";
		simulation="tankX";
		fuelCapacity=20;
		brakeIdleSpeed=0.1;
		maxSpeed=65;
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		waterResistanceCoef=0.25;
		enginePower=1230;
		maxOmega=345.57501;
		minOmega=146.608;
		redRpm=3300;
		idleRpm=1400;
		peakTorque=5000;
		torqueCurve[]=
		{
			{0.42424199,0.80000001},
			{0.54545498,0.94999999},
			{0.60606098,0.99000001},
			{0.63636398,1},
			{0.66666698,0.98000002},
			{0.72727299,0.93000001},
			{0.87878799,0.75999999},
			{1,0.60000002}
		};
		thrustDelay=0.5;
		engineMOI=15;
		dampingRateFullThrottle=1.3;
		dampingRateZeroThrottleClutchEngaged=6;
		dampingRateZeroThrottleClutchDisengaged=1;
		clutchStrength=40;
		latency=1.2;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.98484802,0.42424199,0.98484802,0.60606098,0.98484802,0.57575798,1,0.54545498};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.4000001,
				"N",
				0,
				"D1",
				4.4000001,
				"D2",
				3,
				"D3",
				1.75,
				"D4",
				1
			};
			transmissionRatios[]=
			{
				"High",
				13
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		tankTurnForce=1100000;
		tankTurnForceAngMinSpd=0.75999999;
		tankTurnForceAngSpd=0.80000001;
		accelAidForceCoef=1.5;
		accelAidForceYOffset=-1;
		accelAidForceSpd=1.4;
		class Wheels
		{
			class L2
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				steering=0;
				width=0.5;
				mass=200;
				MOI=16.260201;
				dampingRate=1100;
				dampingRateInAir=1100;
				dampingRateDestroyed=3000;
				maxDroop=0.18000001;
				maxCompression=0.15000001;
				sprungMass=4286;
				springStrength=350000;
				springDamperRate=20000;
				maxBrakeTorque=30000;
				latStiffX=1;
				latStiffY=35;
				longitudinalStiffnessPerUnitGravity=14000;
				frictionVsSlipGraph[]=
				{
					{0,0.75},
					{0.050000001,1.5},
					{0.5,0.89999998}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L4
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L4
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L8: L2
			{
				boneName="wheel_podkolol7";
				center="wheel_1_8_axis";
				boundary="wheel_1_8_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R8: R2
			{
				boneName="wheel_podkolop7";
				center="wheel_2_8_axis";
				boundary="wheel_2_8_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				maxDroop=0.0099999998;
				maxCompression=0.0099999998;
			};
		};
		class MFD
		{
			class MFD_Driver_Heading
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{1,0},
							1
						};
						down[]=
						{
							{0.5,0.89999998},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_text
			{
				topLeft="MFD_Driver_1_TL";
				topRight="MFD_Driver_1_TR";
				bottomLeft="MFD_Driver_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="static";
						text="AZIMUTH";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.02},
							1
						};
						right[]=
						{
							{0.69999999,0.02},
							1
						};
						down[]=
						{
							{0.44999999,0.87},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_second
			{
				topLeft="MFD_Driver_2_TL";
				topRight="MFD_Driver_2_TR";
				bottomLeft="MFD_Driver_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0},
							1
						};
						right[]=
						{
							{0.94999999,0},
							1
						};
						down[]=
						{
							{0.44999999,0.81},
							1
						};
					};
				};
			};
			class MFD_Gunner_Ready_To_Fire
			{
				topLeft="mfd_gun_cli_TL";
				topRight="mfd_gun_cli_TR";
				bottomLeft="mfd_gun_cli_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="READY TO";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.050000001},
							1
						};
						right[]=
						{
							{0.67000002,0.050000001},
							1
						};
						down[]=
						{
							{0.44999999,0.55000001},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="FIRE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.465,0.44999999},
							1
						};
						right[]=
						{
							{0.685,0.44999999},
							1
						};
						down[]=
						{
							{0.465,0.94999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_armament
					{
						type="text";
						source="static";
						text="MAIN ARMAMENT";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.003},
							1
						};
						right[]=
						{
							{0.075000003,-0.003},
							1
						};
						down[]=
						{
							{0.015,0.075000003},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="COAX";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.31},
							1
						};
						right[]=
						{
							{0.075000003,0.31},
							1
						};
						down[]=
						{
							{0.015,0.38800001},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type="text";
						source="static";
						text="AMMO TYPE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.54500002,-0.003},
							1
						};
						right[]=
						{
							{0.60500002,-0.003},
							1
						};
						down[]=
						{
							{0.54500002,0.075000003},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="LASED DIST";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.83999997},
							1
						};
						right[]=
						{
							{0.067000002,0.83999997},
							1
						};
						down[]=
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="AZIMUTH";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.91500002},
							1
						};
						right[]=
						{
							{0.075000003,0.91500002},
							1
						};
						down[]=
						{
							{0.015,0.99299997},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="DAMAGE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.38999999},
							1
						};
						right[]=
						{
							{0.075000003,0.38999999},
							1
						};
						down[]=
						{
							{0.015,0.46799999},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.91500002},
							1
						};
						right[]=
						{
							{0.40000001,0.91500002},
							1
						};
						down[]=
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.33500001,0.83999997},
							1
						};
						right[]=
						{
							{0.39500001,0.83999997},
							1
						};
						down[]=
						{
							{0.33500001,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Main_Armament_Ammo_Type
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.56,0.090000004},
							1
						};
						right[]=
						{
							{0.62,0.090000004},
							1
						};
						down[]=
						{
							{0.56,0.168},
							1
						};
					};
				};
			};
			class MFD_Gunner_Coax_Ammo
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.37,0.31},
							1
						};
						right[]=
						{
							{0.43000001,0.31},
							1
						};
						down[]=
						{
							{0.37,0.38800001},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="EtelkaMonospacePro";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="APFSDS-T";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.064999998},
							1
						};
						right[]=
						{
							{0.075000003,0.064999998},
							1
						};
						down[]=
						{
							{0.015,0.14300001},
							1
						};
					};
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.064999998},
							1
						};
						right[]=
						{
							{0.44499999,0.064999998},
							1
						};
						down[]=
						{
							{0.38499999,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="HE-T";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.125},
							1
						};
						right[]=
						{
							{0.075000003,0.125},
							1
						};
						down[]=
						{
							{0.015,0.20299999},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1001;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.125},
							1
						};
						right[]=
						{
							{0.44499999,0.125},
							1
						};
						down[]=
						{
							{0.38499999,0.20299999},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="HEAT-MP-T";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.185},
							1
						};
						right[]=
						{
							{0.075000003,0.185},
							1
						};
						down[]=
						{
							{0.015,0.26300001},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1002;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.185},
							1
						};
						right[]=
						{
							{0.44499999,0.185},
							1
						};
						down[]=
						{
							{0.38499999,0.26300001},
							1
						};
					};
				};
			};
			class MFD_Gunner_Generic1
			{
				topLeft="mfd_gun_generic1_TL";
				topRight="mfd_gun_generic1_TR";
				bottomLeft="mfd_gun_generic1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Generic_Text1
					{
						type="text";
						source="static";
						text="MODE: AUTO";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0},
							1
						};
						right[]=
						{
							{0.2,0},
							1
						};
						down[]=
						{
							{0.050000001,0.25},
							1
						};
					};
					class Generic_Text2
					{
						type="text";
						source="static";
						text="SIGHT: READY";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.2},
							1
						};
						right[]=
						{
							{0.2,0.2},
							1
						};
						down[]=
						{
							{0.050000001,0.44999999},
							1
						};
					};
					class Generic_Text3
					{
						type="text";
						source="static";
						text="SENSITIVITY: 04";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.40000001},
							1
						};
						right[]=
						{
							{0.2,0.40000001},
							1
						};
						down[]=
						{
							{0.050000001,0.64999998},
							1
						};
					};
					class Generic_Text4
					{
						type="text";
						source="static";
						text="PCU | SEL | RESET";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.44999999,0.75},
							1
						};
						right[]=
						{
							{0.60000002,0.75},
							1
						};
						down[]=
						{
							{0.44999999,1},
							1
						};
					};
				};
			};
			class MFD_Gunner_Generic2
			{
				topLeft="mfd_gun_generic2_TL";
				topRight="mfd_gun_generic2_TR";
				bottomLeft="mfd_gun_generic2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Generic_Text1
					{
						type="text";
						source="static";
						text="TRU | FIRE | ICU";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.44999999,0},
							1
						};
						right[]=
						{
							{0.60000002,0},
							1
						};
						down[]=
						{
							{0.44999999,0.25},
							1
						};
					};
					class Generic_Text2
					{
						type="text";
						source="static";
						text="BRIGHTNESS: AUTO";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.25},
							1
						};
						right[]=
						{
							{0.19,0.25},
							1
						};
						down[]=
						{
							{0.050000001,0.5},
							1
						};
					};
					class Generic_Text3
					{
						type="text";
						source="static";
						text="VOL: 09";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.44999999},
							1
						};
						right[]=
						{
							{0.2,0.44999999},
							1
						};
						down[]=
						{
							{0.050000001,0.69999999},
							1
						};
					};
					class Generic_Text4
					{
						type="text";
						source="static";
						text="GRAT | VNTS | SEL";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.44999999,0.75},
							1
						};
						right[]=
						{
							{0.60000002,0.75},
							1
						};
						down[]=
						{
							{0.44999999,1},
							1
						};
					};
				};
			};
			class MFD_Commander_Display
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_armament
					{
						type="text";
						source="static";
						text="MAIN ARMAMENT";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.0049999999},
							1
						};
						right[]=
						{
							{0.075000003,-0.0049999999},
							1
						};
						down[]=
						{
							{0.015,0.145},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="COAX MG";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.50999999,-0.0049999999},
							1
						};
						right[]=
						{
							{0.56999999,-0.0049999999},
							1
						};
						down[]=
						{
							{0.50999999,0.145},
							1
						};
					};
					class Commander_machinegun
					{
						type="text";
						source="static";
						text="MG";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.69999999,0.19},
							1
						};
						right[]=
						{
							{0.75999999,0.19},
							1
						};
						down[]=
						{
							{0.69999999,0.34},
							1
						};
					};
					class Commander_armament
					{
						type="text";
						source="static";
						text="COM ARMAMENT";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.78500003,-0.0049999999},
							1
						};
						right[]=
						{
							{0.84500003,-0.0049999999},
							1
						};
						down[]=
						{
							{0.78500003,0.145},
							1
						};
					};
					class Commander_armament_magazines
					{
						type="text";
						source="static";
						text="MAG";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.47,0.40000001},
							1
						};
						right[]=
						{
							{0.52999997,0.40000001},
							1
						};
						down[]=
						{
							{0.47,0.55000001},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type="text";
						source="static";
						text="AMMO TYPE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.61000001},
							1
						};
						right[]=
						{
							{0.075000003,0.61000001},
							1
						};
						down[]=
						{
							{0.015,0.75999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="LASED DIST";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.73000002,0.61000001},
							1
						};
						right[]=
						{
							{0.78200001,0.61000001},
							1
						};
						down[]=
						{
							{0.73000002,0.75999999},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="AZIMUTH";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.72000003,0.80000001},
							1
						};
						right[]=
						{
							{0.77999997,0.80000001},
							1
						};
						down[]=
						{
							{0.72000003,0.94999999},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="DAMAGE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.81999999},
							1
						};
						right[]=
						{
							{0.075000003,0.81999999},
							1
						};
						down[]=
						{
							{0.015,0.97000003},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.92500001,0.80000001},
							1
						};
						right[]=
						{
							{0.98500001,0.80000001},
							1
						};
						down[]=
						{
							{0.92500001,0.94999999},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.92500001,0.61000001},
							1
						};
						right[]=
						{
							{0.98500001,0.61000001},
							1
						};
						down[]=
						{
							{0.92500001,0.75999999},
							1
						};
					};
				};
			};
			class MFD_Commander_Ready_To_Fire
			{
				topLeft="mfd_com_cli_TL";
				topRight="mfd_com_cli_TR";
				bottomLeft="mfd_com_cli_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="READY TO";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.47999999,0.050000001},
							1
						};
						right[]=
						{
							{0.68000001,0.050000001},
							1
						};
						down[]=
						{
							{0.47999999,0.56},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="FIRE";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.41},
							1
						};
						right[]=
						{
							{0.69999999,0.41},
							1
						};
						down[]=
						{
							{0.5,0.92000002},
							1
						};
					};
				};
			};
			class MFD_Commander_Smoke_Indicator
			{
				topLeft="mfd_com_smoke_TL";
				topRight="mfd_com_smoke_TR";
				bottomLeft="mfd_com_smoke_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="SMOKE";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{0.69999999,0},
							1
						};
						down[]=
						{
							{0.5,0.5},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="SCREEN";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.40000001},
							1
						};
						right[]=
						{
							{0.69999999,0.40000001},
							1
						};
						down[]=
						{
							{0.5,0.89999998},
							1
						};
					};
				};
			};
			class MFD_Commander_Main_Armament_Ammo_Type
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.33000001,0.61500001},
							1
						};
						right[]=
						{
							{0.38999999,0.61500001},
							1
						};
						down[]=
						{
							{0.33000001,0.745},
							1
						};
					};
				};
			};
			class MFD_Commander_AmmoIndicator_Main_Armament
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="APFSDS-T";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.13},
							1
						};
						right[]=
						{
							{0.075000003,0.13},
							1
						};
						down[]=
						{
							{0.015,0.28},
							1
						};
					};
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38999999,0.13},
							1
						};
						right[]=
						{
							{0.44999999,0.13},
							1
						};
						down[]=
						{
							{0.38999999,0.28},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="HE-T";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.23},
							1
						};
						right[]=
						{
							{0.075000003,0.23},
							1
						};
						down[]=
						{
							{0.015,0.38},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1001;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38999999,0.23},
							1
						};
						right[]=
						{
							{0.44999999,0.23},
							1
						};
						down[]=
						{
							{0.38999999,0.38},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="HEAT-MP-T";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.33000001},
							1
						};
						right[]=
						{
							{0.075000003,0.33000001},
							1
						};
						down[]=
						{
							{0.015,0.47999999},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1002;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38999999,0.33000001},
							1
						};
						right[]=
						{
							{0.44999999,0.33000001},
							1
						};
						down[]=
						{
							{0.38999999,0.47999999},
							1
						};
					};
				};
			};
			class MFD_Commander_Coax_Ammo
			{
				topLeft="mfd_com_ammo_count_TL";
				topRight="mfd_com_ammo_count_TR";
				bottomLeft="mfd_com_ammo_count_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{1.295,0.2},
							1
						};
						right[]=
						{
							{1.845,0.2},
							1
						};
						down[]=
						{
							{1.295,0.89999998},
							1
						};
					};
				};
			};
			class MFD_Commander_Coax_Magazines
			{
				topLeft="mfd_com_mag_count_TL";
				topRight="mfd_com_mag_count_TR";
				bottomLeft="mfd_com_mag_count_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=1;
						scale=1;
						sourceIndex=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{-1.8,0.11},
							1
						};
						right[]=
						{
							{-1.05,0.11},
							1
						};
						down[]=
						{
							{-1.8,0.81},
							1
						};
					};
				};
			};
			class MFD_Commander_Comm_Ammo_and_Mags
			{
				topLeft="mfd_com_TL";
				topRight="mfd_com_TR";
				bottomLeft="mfd_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=0;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.89999998,0.19},
							1
						};
						right[]=
						{
							{0.95999998,0.19},
							1
						};
						down[]=
						{
							{0.89999998,0.34},
							1
						};
					};
				};
			};
			class MFD_Commander_OnScreen
			{
				topLeft="MFD_7_TL";
				topRight="MFD_7_TR";
				bottomLeft="MFD_7_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Azimuth_number
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.192,0.405},
							1
						};
						right[]=
						{
							{0.21699999,0.405},
							1
						};
						down[]=
						{
							{0.192,0.442},
							1
						};
					};
					class Elevation_Text
					{
						type="text";
						source="static";
						text="E: ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.18000001,0.2},
							1
						};
						right[]=
						{
							{0.205,0.2},
							1
						};
						down[]=
						{
							{0.18000001,0.237},
							1
						};
					};
					class Elevation_Number
					{
						type="text";
						source="[y]turretworld";
						sourceScale=1;
						sourceLength=4;
						sourcePrecision=1;
						refreshRate=0;
						align="center";
						scale=1;
						pos[]=
						{
							{0.20999999,0.2},
							1
						};
						right[]=
						{
							{0.235,0.2},
							1
						};
						down[]=
						{
							{0.20999999,0.237},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.75,0.28},
							1
						};
						right[]=
						{
							{0.77499998,0.28},
							1
						};
						down[]=
						{
							{0.75,0.317},
							1
						};
					};
					class VisionMode_Text
					{
						type="text";
						source="static";
						text="WFOV";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.75,0.64999998},
							1
						};
						right[]=
						{
							{0.77499998,0.64999998},
							1
						};
						down[]=
						{
							{0.75,0.68699998},
							1
						};
					};
					class VisionMode_String
					{
						type="text";
						source="visionMode";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.82499999,0.64999998},
							1
						};
						right[]=
						{
							{0.85000002,0.64999998},
							1
						};
						down[]=
						{
							{0.82499999,0.68699998},
							1
						};
					};
				};
			};
			class MFD_Commander_Heading
			{
				topLeft="mfd_com_dir_TL";
				topRight="mfd_com_dir_TR";
				bottomLeft="mfd_com_dir_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0,0};
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=0.89999998;
					condition="on";
					class Driver_Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{1,0},
							1
						};
						down[]=
						{
							{0.5,0.94999999},
							1
						};
					};
				};
			};
			class MFD_Commander_Generic1
			{
				topLeft="mfd_com_generic1_TL";
				topRight="mfd_com_generic1_TR";
				bottomLeft="mfd_com_generic1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Generic_Text1
					{
						type="text";
						source="static";
						text="MODE: AUTO";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0},
							1
						};
						right[]=
						{
							{0.2,0},
							1
						};
						down[]=
						{
							{0.050000001,0.25},
							1
						};
					};
					class Generic_Text2
					{
						type="text";
						source="static";
						text="MANUAL MODE: OFF";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.2},
							1
						};
						right[]=
						{
							{0.185,0.2},
							1
						};
						down[]=
						{
							{0.050000001,0.44999999},
							1
						};
					};
					class Generic_Text3
					{
						type="text";
						source="static";
						text="SENSITIVITY: 04";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.40000001},
							1
						};
						right[]=
						{
							{0.2,0.40000001},
							1
						};
						down[]=
						{
							{0.050000001,0.64999998},
							1
						};
					};
					class Generic_Text4
					{
						type="text";
						source="static";
						text="PCU | SEL | RESET";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.44,0.73000002},
							1
						};
						right[]=
						{
							{0.58999997,0.73000002},
							1
						};
						down[]=
						{
							{0.44,0.98000002},
							1
						};
					};
				};
			};
			class MFD_Commander_Generic2
			{
				topLeft="mfd_com_generic2_TL";
				topRight="mfd_com_generic2_TR";
				bottomLeft="mfd_com_generic2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="PuristaMedium";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Generic_Text1
					{
						type="text";
						source="static";
						text="CH: INT1 | VOL: 07";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.44,0.25},
							1
						};
						right[]=
						{
							{0.58999997,0.25},
							1
						};
						down[]=
						{
							{0.44,0.75},
							1
						};
					};
				};
			};
		};
		editorSubcategory="EdSubcat_Tanks";
		scope=0;
		maxFordingDepth=-1.5;
		steerAheadSimul=0.5;
		steerAheadPlan=0.34999999;
		predictTurnPlan=2.8;
		predictTurnSimul=2.5999999;
		brakeDistance=15;
		precision=5;
		transportSoldier=0;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_flatground_leanleft",
			"passenger_flatground_generic01",
			"passenger_flatground_generic02",
			"passenger_flatground_generic03",
			"passenger_flatground_generic04",
			"passenger_flatground_generic05"
		};
		waterResistance=3;
		waterDamageEngine=0.1;
		wheelCircumference=2.25;
		tracksSpeed=-1;
		forceHideDriver=0;
		driverForceOptics=0;
		LODDriverOpticsIn=1202;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		viewDriverInExternal=1;
		LODDriverTurnedOut=0;
		driverInfoPanelCameraPos="driverview_old";
		driverAction="Driver_MBT_03_cannon_F_out";
		driverInAction="Driver_MBT_03_cannon_F_in";
		extCameraPosition[]={0,3,-9.75};
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverLeftLegAnimName="pedal_brake";
		driverRightLegAnimName="pedal_thrust";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.25;
			minFov=0.13;
			maxFov=0.25;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-3;
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
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		armor=800;
		armorLights=0.1;
		armorStructural=6;
		damageResistance=0.0054700002;
		cost=2500000;
		crewVulnerable=0;
		crewExplosionProtection=0.99989998;
		epeImpulseDamageCoef=18;
		model="\A3\Armor_F_EPB\MBT_03\MBT_03_cannon_F.p3d";
		picture="\A3\Armor_F_EPB\MBT_03\Data\UI\MBT_03_Ca.paa";
		icon="\A3\Armor_F_EPB\MBT_03\Data\UI\map_MBT_03_Ca.paa";
		memoryPointTaskMarker="TaskMarker_1_pos";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1.6;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.60000002;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.30000001;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.30000001;
			};
			class HitLTrack: HitLTrack
			{
				material=-1;
				armorComponent="hit_trackL";
				name="hit_trackL_point";
				visual="pas_L";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitRTrack: HitRTrack
			{
				material=-1;
				armorComponent="hit_trackR";
				name="hit_trackR_point";
				visual="pas_P";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitSLAT_Left
			{
				simulation="Armor_SLAT";
				armorComponent="cage_left_geo";
				name="cage_left_point";
				armor=-200;
				minimalHit=0.30000001;
				passThrough=0;
				visual="-";
				explosionShielding=2;
				radius=0.25;
			};
			class HitSLAT_Right: HitSLAT_Left
			{
				armorComponent="cage_right_geo";
				name="cage_right_point";
			};
			class HitSLAT_back: HitSLAT_Left
			{
				armorComponent="cage_back_geo";
				name="cage_back_point";
			};
			class HitSLAT_top_left: HitSLAT_Left
			{
				armorComponent="cage_top_right_geo";
				name="hit_main_turret_point";
			};
			class HitSLAT_top_right: HitSLAT_Left
			{
				armorComponent="cage_top_right_geo";
				name="hit_main_turret_point";
			};
			class HitSLAT_top_back: HitSLAT_Left
			{
				armorComponent="cage_top_back_geo";
				name="hit_main_turret_point";
			};
		};
		class EventHandlers: EventHandlers
		{
			init="";
		};
		class RenderTargets
		{
			class driver_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
			};
			class commander_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust_dir2";
				effect="ExhaustEffectTankSide";
			};
		};
		insideSoundCoef=0.89999998;
		threat[]={0.80000001,1,0.30000001};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				hitpoint="Light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				hitpoint="Light_L_flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={20,18,12};
					ambient[]={0,0,0};
					intensity=1.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
					point="light_interior1";
				};
				class Light2: Light1
				{
					point="light_interior2";
					color[]={20,18,12};
					ambient[]={0,0,0};
					intensity=1;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={20,18,12};
					ambient[]={0,0,0};
					intensity=0.69999999;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={22,18,10};
					ambient[]={0,0,0};
					intensity=1.2;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={20,20,20};
					ambient[]={0,0,0};
					intensity=0.40000001;
				};
				class Light6: Light1
				{
					point="light_interior6";
					color[]={20,18,12};
					ambient[]={0,0,0};
					intensity=0.80000001;
				};
			};
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_2",
			0.31622776,
			1
		};
		smokeLauncherGrenadeCount=16;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=360;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						gunBeg="Usti hlavne2";
						gunEnd="Konec hlavne2";
						memoryPointGun="usti hlavne2";
						selectionFireAnim="zasleh2";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"HMG_127_APC",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"200Rnd_127x99_mag_Tracer_Yellow",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"SmokeLauncherMag"
						};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							0.56234133,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							0.56234133,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="Commander_MBT_03_cannon_F_out";
						gunnerInAction="Commander_MBT_03_cannon_F_in";
						gunnerGetInAction="GetInLow";
						gunnerGetOutAction="GetOutLow";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
						discreteDistanceInitIndex=2;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerForceOptics=0;
						usePip=2;
						LODOpticsIn=0;
						isPersonTurret=0;
						personTurretAction="vehicle_turnout_1";
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerRightHandAnimName="com_turret_control";
						class dynamicViewLimits
						{
							MainTurret[]={-135,75};
						};
						minOutElev=-10;
						maxOutElev=15;
						initOutElev=0;
						minOutTurn=-135;
						maxOutTurn=90;
						initOutTurn=0;
						class ViewGunner: ViewGunner
						{
							initAngleX=-5;
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
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide;  //found empty after stripping
							class Medium: Medium;  //found empty after stripping
							class Narrow: Narrow;  //found empty after stripping
						};
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
						turretInfoType="RscOptics_APC_Wheeled_03_commander";
						showCrewAim=1;
						startEngine=0;
						gunnerHasFlares=1;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						viewGunnerInExternal=1;
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_turret";
								name="hit_com_turret_point";
								visual="vezVelitele";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isGun=1;
							};
						};
					};
				};
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				gunnerInAction="Gunner_MBT_03_cannon_F_in";
				gunnerAction="Gunner_MBT_03_cannon_F_out";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				weapons[]=
				{
					"cannon_120mm_long",
					"LMG_coax"
				};
				magazines[]=
				{
					"20Rnd_120mm_APFSDS_shells_Tracer_Yellow",
					"12Rnd_120mm_HE_shells_Tracer_Yellow",
					"12Rnd_120mm_HEAT_MP_T_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.15848932,
					1,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1,
					50
				};
				forceHideGunner=1;
				usePip=2;
				LODOpticsIn=0;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				memoryPointGun="usti hlavne3";
				minElev=-9;
				maxElev=20;
				initElev=10;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=0;
				startEngine=0;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				class dynamicViewLimits
				{
					CommanderOptics[]={-65,90};
				};
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-135;
				maxOutTurn=90;
				initOutTurn=0;
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide: Wide;  //found empty after stripping
					class Medium: Medium;  //found empty after stripping
					class Narrow: Narrow;  //found empty after stripping
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-13;
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
				turretInfoType="RscOptics_MBT_03_gunner";
				showCrewAim=2;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{20.1126,-107.5349},
						{19.8932,99.317703}
					};
					limitsArrayBottom[]=
					{
						{-9.1273003,-108.1836},
						{-7.1046,-44.255001},
						{-9.1674995,31.497801},
						{-9.0504999,102.8447}
					};
				};
				class TurnIn: TurnOut
				{
					limitsArrayTop[]=
					{
						{19.9995,-180},
						{19.998501,180}
					};
					limitsArrayBottom[]=
					{
						{-2,-180},
						{-1,-154.4525},
						{-5.8804998,-82.711601},
						{-8.9499998,20.756201},
						{-7.9499998,-20.756201},
						{-5.8804998,82.711601},
						{-1,153.1266},
						{-2,180}
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="vez";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="zbran";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01_damage.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext01_destruct.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02_damage.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_Ext02_destruct.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS_damage.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_RCWS_destruct.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_track.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_track_damage.rvmat",
				"A3\Armor_F_EPB\MBT_03\data\MBT_03_track_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="cannon_120mm_long";
			};
			class muzzle_rot_coax
			{
				source="ammorandom";
				weapon="LMG_coax";
			};
			class muzzle_rot_hmg
			{
				source="ammorandom";
				weapon="HMG_127_APC";
			};
			class muzzle_hide_coax
			{
				source="reload";
				weapon="LMG_coax";
			};
			class recoil_source
			{
				source="reload";
				weapon="cannon_120mm_long";
			};
			class LockMuzzle
			{
				source="user";
				initPhase=0;
				animPeriod=0.30000001;
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitMainGun_src
			{
				source="Hit";
				hitpoint="HitGun";
				raw=1;
			};
			class HitTurret_src
			{
				source="Hit";
				hitpoint="HitTurret";
				raw=1;
			};
			class HitComTurret_src
			{
				source="Hit";
				hitpoint="HitComTurret";
				raw=1;
			};
			class Smoke_source
			{
				source="revolving";
				weapon="SmokeLauncher";
			};
			class HitSLAT_Left_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left";
				raw=1;
			};
			class HitSLAT_Right_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right";
				raw=1;
			};
			class HitSLAT_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_back";
				raw=1;
			};
			class HitSLAT_front_src
			{
				source="Hit";
				hitpoint="HitSLAT_front";
				raw=1;
			};
			class HitSLAT_top_left_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_left";
				raw=1;
			};
			class HitSLAT_top_right_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_right";
				raw=1;
			};
			class HitSLAT_top_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_back";
				raw=1;
			};
			class HideTurret
			{
				displayName="$STR_A3_CfgVehicles_MBT_03_base_F_AnimationSources_HideTurret1";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
				mass=-5;
			};
			class HideHull
			{
				displayName="$STR_A3_CfgVehicles_MBT_03_base_F_AnimationSources_HideHull1";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
				mass=-15;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetCannon
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class showCamonetCannon1
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class showCamonetTurret
			{
				displayName="$STR_A3_animationsources_showcamonetturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showCamonetCannon",
					1,
					"showCamonetCannon1",
					1
				};
				forceAnimate2[]=
				{
					"showCamonetCannon",
					0,
					"showCamonetCannon1",
					0
				};
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showCamonetCannon",
			0,
			"showCamonetCannon1",
			0
		};
		textureList[]=
		{
			"Indep_01",
			1
		};
		class TextureSources
		{
			class Indep_01
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Indep_02
			{
				displayName="$STR_A3_texturesources_indepjungle0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Indep_03
			{
				displayName="$STR_A3_texturesources_indepdesert0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_MBT_03_base_F_Library0";
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
			"a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
			"a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_F
			{
				weapon="arifle_Mk20C_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		numberPhysicalWheels=18;
	};
	class I_MBT_03_base_F: MBT_03_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="I_MBT_03_base_F";
		crew="I_crew_F";
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
		side=2;
		faction="IND_F";
	};
	class I_MBT_03_cannon_F: I_MBT_03_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"wheel_koll1",
					0
				},
				
				{
					"wheel_kolol1",
					0
				},
				
				{
					"wheel_podkolol1",
					0
				},
				
				{
					"wheel_kolp1",
					0
				},
				
				{
					"wheel_kolop1",
					0
				},
				
				{
					"wheel_podkolop1",
					0
				},
				
				{
					"wheel_koll2",
					0
				},
				
				{
					"wheel_kolp2",
					0
				},
				
				{
					"wheel_kolol2",
					0
				},
				
				{
					"wheel_kolol3",
					0
				},
				
				{
					"wheel_kolol4",
					0
				},
				
				{
					"wheel_kolol5",
					0
				},
				
				{
					"wheel_kolol6",
					0
				},
				
				{
					"wheel_kolol7",
					0
				},
				
				{
					"wheel_kolop2",
					0
				},
				
				{
					"wheel_kolop3",
					0
				},
				
				{
					"wheel_kolop4",
					0
				},
				
				{
					"wheel_kolop5",
					0
				},
				
				{
					"wheel_kolop6",
					0
				},
				
				{
					"wheel_kolop7",
					0
				},
				
				{
					"wheel_podkolol2",
					0
				},
				
				{
					"wheel_podkolol3",
					0
				},
				
				{
					"wheel_podkolol4",
					0
				},
				
				{
					"wheel_podkolol5",
					0
				},
				
				{
					"wheel_podkolol6",
					0
				},
				
				{
					"wheel_podkolop2",
					0
				},
				
				{
					"wheel_podkolop3",
					0
				},
				
				{
					"wheel_podkolop4",
					0
				},
				
				{
					"wheel_podkolop5",
					0
				},
				
				{
					"wheel_podkolop6",
					0
				},
				
				{
					"podkolol1_hide_damage",
					0
				},
				
				{
					"podkolol2_hide_damage",
					0
				},
				
				{
					"podkolol3_hide_damage",
					0
				},
				
				{
					"podkolol4_hide_damage",
					0
				},
				
				{
					"podkolol5_hide_damage",
					0
				},
				
				{
					"podkolol6_hide_damage",
					0
				},
				
				{
					"podkolol7_hide_damage",
					0
				},
				
				{
					"podkolol8_hide_damage",
					0
				},
				
				{
					"podkolop1_hide_damage",
					0
				},
				
				{
					"podkolop2_hide_damage",
					0
				},
				
				{
					"podkolop3_hide_damage",
					0
				},
				
				{
					"podkolop4_hide_damage",
					0
				},
				
				{
					"podkolop5_hide_damage",
					0
				},
				
				{
					"podkolop6_hide_damage",
					0
				},
				
				{
					"podkolop7_hide_damage",
					0
				},
				
				{
					"podkolop8_hide_damage",
					0
				},
				
				{
					"damagevez",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.17
				},
				
				{
					"recoil",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"maingunoptics",
					0.17
				},
				
				{
					"wheel_podkolop7",
					0
				},
				
				{
					"wheel_podkolol7",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"hatchcommander",
					0
				},
				
				{
					"hatchgunner",
					0
				},
				
				{
					"damagevezvelitele",
					0
				},
				
				{
					"poklop_commander_damage",
					0
				},
				
				{
					"poklop_gunner_damage",
					0
				},
				
				{
					"poklop_driver_damage",
					0
				},
				
				{
					"zaslehrot_hmg",
					326
				},
				
				{
					"zaslehrot_coax",
					2887.73
				},
				
				{
					"cannon_muzzle_flash",
					0
				},
				
				{
					"zaslehrot_cannon",
					837
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"indicatorvoltammeter",
					0
				},
				
				{
					"indicatortempoil",
					0
				},
				
				{
					"indicatortempwater",
					0
				},
				
				{
					"indicatorspeed_mfd_driver",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_mfd_driver",
					0
				},
				
				{
					"lights_driver",
					0
				},
				
				{
					"lights_driver_off",
					0
				},
				
				{
					"lights_turret",
					0
				},
				
				{
					"cannon_ready_light",
					0
				},
				
				{
					"engine_damage_indicator",
					0
				},
				
				{
					"main_gun_damage_indicator",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					0
				},
				
				{
					"indicatortempwater_mfd_driver",
					0
				},
				
				{
					"indicatorfuel_mfd_driver",
					1
				},
				
				{
					"indicator_hull_direction_mfd_driver",
					0
				},
				
				{
					"indicator_main_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_counter_mfd_driver",
					0
				},
				
				{
					"indicator_hull_direction_mfd_com",
					0
				},
				
				{
					"indicator_main_turret_onscreen_com",
					0
				},
				
				{
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_onscreen_com",
					0
				},
				
				{
					"indicator_com_turret_counter_mfd_com",
					0
				},
				
				{
					"indicator_hull_direction_mfd_gunner",
					0
				},
				
				{
					"indicator_main_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_turret_counter_mfd_gunner",
					0
				},
				
				{
					"indicator_com_smoke_1",
					1
				},
				
				{
					"indicator_com_smoke_2",
					1
				},
				
				{
					"indicator_damage_engine",
					0
				},
				
				{
					"indicator_damage_fuel",
					0
				},
				
				{
					"indicator_damage_tracks",
					0
				},
				
				{
					"indicator_turret_damage_hull",
					0
				},
				
				{
					"indicator_turret_damage_engine",
					0
				},
				
				{
					"indicator_turret_damage_fuel",
					0
				},
				
				{
					"indicator_turret_damage_main_gun",
					0
				},
				
				{
					"indicator_turret_damage_track",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"indicator_turret_damage_comturret",
					0
				},
				
				{
					"hide_mfd_and_pip_screen_driver",
					1
				},
				
				{
					"hide_mfd_and_pip_screen_gunner",
					1
				},
				
				{
					"hide_mfd_elements",
					1
				},
				
				{
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"com_turret_control_x",
					0
				},
				
				{
					"com_turret_control_y",
					0
				},
				
				{
					"slat_back_normal_hide",
					0
				},
				
				{
					"slat_back_damage_unhide",
					0
				},
				
				{
					"slat_back_damage_hide",
					0
				},
				
				{
					"slat_back_destroyed_unhide",
					0
				},
				
				{
					"slat_back_firegeo_hide",
					0
				},
				
				{
					"slat_right_normal_hide",
					0
				},
				
				{
					"slat_right_damage_unhide",
					0
				},
				
				{
					"slat_right_damage_hide",
					0
				},
				
				{
					"slat_right_destroyed_unhide",
					0
				},
				
				{
					"slat_right_firegeo_hide",
					0
				},
				
				{
					"slat_left_normal_hide",
					0
				},
				
				{
					"slat_left_damage_unhide",
					0
				},
				
				{
					"slat_left_damage_hide",
					0
				},
				
				{
					"slat_left_destroyed_unhide",
					0
				},
				
				{
					"slat_left_firegeo_hide",
					0
				},
				
				{
					"slat_left_plate_normal_hide",
					0
				},
				
				{
					"slat_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_left_plate_damage_hide",
					0
				},
				
				{
					"slat_right_plate_normal_hide",
					0
				},
				
				{
					"slat_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_right_plate_damage_hide",
					0
				},
				
				{
					"slat_back_plate_normal_hide",
					0
				},
				
				{
					"slat_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_back_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_normal_hide",
					0
				},
				
				{
					"slat_top_back_damage_unhide",
					0
				},
				
				{
					"slat_top_back_damage_hide",
					0
				},
				
				{
					"slat_top_back_destroyed_unhide",
					0
				},
				
				{
					"slat_top_back_firegeo_hide",
					0
				},
				
				{
					"slat_top_right_normal_hide",
					0
				},
				
				{
					"slat_top_right_damage_unhide",
					0
				},
				
				{
					"slat_top_right_damage_hide",
					0
				},
				
				{
					"slat_top_right_destroyed_unhide",
					0
				},
				
				{
					"slat_top_right_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_normal_hide",
					0
				},
				
				{
					"slat_top_left_damage_unhide",
					0
				},
				
				{
					"slat_top_left_damage_hide",
					0
				},
				
				{
					"slat_top_left_destroyed_unhide",
					0
				},
				
				{
					"slat_top_left_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_plate_normal_hide",
					0
				},
				
				{
					"slat_top_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_left_plate_damage_hide",
					0
				},
				
				{
					"slat_top_right_plate_normal_hide",
					0
				},
				
				{
					"slat_top_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_right_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_plate_normal_hide",
					0
				},
				
				{
					"slat_top_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_back_plate_damage_hide",
					0
				},
				
				{
					"com_pos_adjust_to_center",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh2",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.5610001;
			verticalOffsetWorld=-0.168;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_MBT_03_cannon_F.jpg";
		_generalMacro="I_MBT_03_cannon_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_I_MBT_03_cannon_F0";
	};
};
