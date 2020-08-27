class CfgPatches
{
	class A3_Armor_F_Gamma_MBT_02
	{
		addonRootClass="A3_Armor_F_Gamma";
		requiredAddons[]=
		{
			"A3_Armor_F_Gamma"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_MBT_02_arty_F",
			"O_MBT_02_cannon_F"
		};
		weapons[]={};
	};
};
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
class Optics_Gunner_MBT_02: Optics_Armored
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
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class EventHandlers;
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
	};
	class MBT_02_base_F: Tank_F
	{
		features="Randomization: No						<br />Camo selections: 3 - hull, main turret, cannon and accessories						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author="$STR_A3_Bohemia_Interactive";
		mapSize=10.31;
		_generalMacro="MBT_02_base_F";
		displayName="$STR_A3_CfgVehicles_MBT_02_Base0";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_MBT_02_Base_Library0";
		};
		vehicleClass="Armored";
		model="\A3\armor_f_gamma\MBT_02\MBT_02_cannon_F";
		editorSubcategory="EdSubcat_Tanks";
		memoryPointTaskMarker="TaskMarker_1_pos";
		picture="\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		Icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		driverForceOptics=0;
		driverAction="Driver_MBT_03_cannon_F_out";
		driverInAction="Driver_MBT_02_F_in";
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=1202;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		LODDriverTurnedin=1100;
		driverLeftHandAnimName="drivingstick_left";
		driverRightHandAnimName="drivingstick_right";
		driverLeftLegAnimName="pedal_brake";
		driverRightLegAnimName="pedal_thrust";
		viewDriverInExternal=1;
		driverInfoPanelCameraPos="driverview_panel";
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		tracksSpeed=1.35;
		wheelCircumference=2.375;
		extCameraPosition[]={0,2.5,-8};
		maxFordingDepth=-0.75;
		waterResistance=0;
		waterDamageEngine=0.2;
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
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectTankGasturbineBack";
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={15,20,20};
					ambient[]={0,0,0};
					intensity=1;
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
					color[]={15,20,20};
					ambient[]={0,0,0};
					intensity=0.80000001;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={15,20,20};
					ambient[]={0,0,0};
					intensity=0.69999999;
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
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
				position="Light_R_flare";
				hitpoint="Light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="Light_L_flare";
				hitpoint="Light_L_flare";
				useFlare=1;
			};
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",
			0.39810717,
			1
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		armor=850;
		armorStructural=6;
		damageResistance=0.0038900001;
		cost=2500000;
		crewVulnerable=0;
		crewExplosionProtection=0.99989998;
		epeImpulseDamageCoef=18;
		simulation="tankX";
		fuelCapacity=15;
		brakeIdleSpeed=0.1;
		maxSpeed=75;
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.25;
		waterResistanceCoef=0.30000001;
		enginePower=1045;
		maxOmega=314.16;
		minOmega=104.72;
		redRpm=3000;
		idleRpm=1000;
		peakTorque=4950;
		torqueCurve[]=
		{
			{0.33333299,1},
			{1,0.69999999}
		};
		thrustDelay=0.5;
		engineMOI=12;
		dampingRateFullThrottle=1.4;
		dampingRateZeroThrottleClutchEngaged=5;
		dampingRateZeroThrottleClutchDisengaged=0.80000001;
		clutchStrength=40;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.33333299,0.33333299,0,0.99333298,0.33333299,0.98333299,0.69999999,0.98333299,0.73333299,0.98333299,0.73333299};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-6.5,
				"N",
				0,
				"D1",
				4.4000001,
				"D2",
				2.2,
				"D3",
				1.5,
				"D4",
				1
			};
			transmissionRatios[]=
			{
				"High",
				11.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		tankTurnForce=950000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.75999999;
		accelAidForceCoef=2;
		accelAidForceYOffset=-2;
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
				MOI=14.3358;
				dampingRate=2250;
				dampingRateInAir=2250;
				dampingRateDestroyed=4000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				sprungMass=3358;
				springStrength=272000;
				springDamperRate=30000;
				maxBrakeTorque=32000;
				latStiffX=1.5;
				latStiffY=30;
				longitudinalStiffnessPerUnitGravity=12000;
				frictionVsSlipGraph[]=
				{
					{0,0.5},
					{0.1,1.5},
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
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
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
							{0.5,0.81},
							1
						};
					};
				};
			};
			class MFD_Driver_Fire
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.92000002,0.0099999998,0};
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
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					blinkingPattern[]={1,1};
					blinkingStartsOn=1;
					class Driver_Fire
					{
						type="text";
						source="static";
						text="ПОЖАР";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.105},
							1
						};
						right[]=
						{
							{0.85500002,0.105},
							1
						};
						down[]=
						{
							{0.45500001,0.70499998},
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
						text="АЗИМУТ";
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
			class MFD_Gunner_AmmoType
			{
				topLeft="MFD_5_TL";
				topRight="MFD_5_TR";
				bottomLeft="MFD_5_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
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
					color[]={0.92000002,0.0099999998,0};
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
							{0.45500001,0.050000001},
							1
						};
						right[]=
						{
							{1.355,0.050000001},
							1
						};
						down[]=
						{
							{0.45500001,0.75999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
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
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
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
							{1.3,0},
							1
						};
						down[]=
						{
							{0.5,0.30000001},
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.30000001},
							1
						};
						right[]=
						{
							{1.3,0.30000001},
							1
						};
						down[]=
						{
							{0.5,0.60000002},
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.60000002},
							1
						};
						right[]=
						{
							{1.3,0.60000002},
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
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="К СТРЕЛЬБЕ";
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
						text="ГОТОВ";
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
					class Main_armament
					{
						type="text";
						source="static";
						text="ГЛАВНОЕ ОРУДИЕ";
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
							{0.015,0.072999999},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="ПУЛЕМЕТ";
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
						text="ТИП АМУНИЦИИ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.54500002,-0.0049999999},
							1
						};
						right[]=
						{
							{0.60500002,-0.0049999999},
							1
						};
						down[]=
						{
							{0.54500002,0.072999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="ДАЛЬНОСТЬ";
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
							{0.075000003,0.83999997},
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
						text="АЗИМУТ";
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
						text="ПОВРЕЖДЕНИЯ";
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
							{0.34,0.83999997},
							1
						};
						right[]=
						{
							{0.40000001,0.83999997},
							1
						};
						down[]=
						{
							{0.34,0.91799998},
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
							{0.56,0.064999998},
							1
						};
						right[]=
						{
							{0.68000001,0.064999998},
							1
						};
						down[]=
						{
							{0.56,0.185},
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
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.31,0.31},
							1
						};
						right[]=
						{
							{0.37,0.31},
							1
						};
						down[]=
						{
							{0.31,0.38800001},
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
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="БР";
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.064999998},
							1
						};
						right[]=
						{
							{0.23,0.064999998},
							1
						};
						down[]=
						{
							{0.17,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="ОФ";
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.125},
							1
						};
						right[]=
						{
							{0.23,0.125},
							1
						};
						down[]=
						{
							{0.17,0.20299999},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="К";
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.185},
							1
						};
						right[]=
						{
							{0.23,0.185},
							1
						};
						down[]=
						{
							{0.17,0.26300001},
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
					class Main_armament
					{
						type="text";
						source="static";
						text="ГЛАВНОЕ ОРУДИЕ";
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
						text="ПУЛЕМЕТ";
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
						text="ПУЛЕМЕТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.72000003,0.19},
							1
						};
						right[]=
						{
							{0.77999997,0.19},
							1
						};
						down[]=
						{
							{0.72000003,0.34},
							1
						};
					};
					class Commander_armament
					{
						type="text";
						source="static";
						text="ОРУДИЕ КОМАНДИРА";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.79500002,0.0049999999},
							1
						};
						right[]=
						{
							{0.84500003,0.0049999999},
							1
						};
						down[]=
						{
							{0.79500002,0.125},
							1
						};
					};
					class Commander_armament_magazines
					{
						type="text";
						source="static";
						text="МАГ.";
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
						text="ТИП АМУНИЦИИ";
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
						text="ДАЛЬНОСТЬ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.73500001,0.61000001},
							1
						};
						right[]=
						{
							{0.79000002,0.61000001},
							1
						};
						down[]=
						{
							{0.73500001,0.75999999},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.70999998,0.80000001},
							1
						};
						right[]=
						{
							{0.76999998,0.80000001},
							1
						};
						down[]=
						{
							{0.70999998,0.94999999},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="ПОВРЕЖДЕНИЯ";
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
			class MFD_Commander_Intercom
			{
				topLeft="MFD_6_TL";
				topRight="MFD_6_TR";
				bottomLeft="MFD_6_BL";
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
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition="on";
					class Com_Intercom
					{
						type="text";
						source="static";
						text="ВН КАНАЛ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.105},
							1
						};
						right[]=
						{
							{0.55500001,0.105},
							1
						};
						down[]=
						{
							{0.45500001,0.38499999},
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
						text="К СТРЕЛЬБЕ";
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
						text="ГОТОВ";
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
						text="ДЫМОВАЯ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.47,0},
							1
						};
						right[]=
						{
							{0.67000002,0},
							1
						};
						down[]=
						{
							{0.47,0.5},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="ЗАВЕСА";
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
			class MFD_Commander_HMG
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
				font="EtelkaMonospacePro";
				turret[]={0,0};
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
					class Crosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.5,0.42341301},
								1
							},
							
							{
								{0.5,0.34642899},
								1
							},
							{},
							
							{
								{0.5,0.57738101},
								1
							},
							
							{
								{0.5,0.654365},
								1
							},
							{},
							
							{
								{0.55000001,0.50039703},
								1
							},
							
							{
								{0.60000002,0.50039703},
								1
							},
							{},
							
							{
								{0.40000001,0.50039703},
								1
							},
							
							{
								{0.44999999,0.50039703},
								1
							},
							{},
							
							{
								{0.30000001,0.34642899},
								1
							},
							
							{
								{0.30000001,0.26944399},
								1
							},
							{},
							
							{
								{0.30000001,0.26944399},
								1
							},
							
							{
								{0.34999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.34642899},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.64999998,0.26944399},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.654365},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.64999998,0.73134899},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.654365},
								1
							},
							
							{
								{0.30000001,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.73134899},
								1
							},
							
							{
								{0.34999999,0.73134899},
								1
							},
							{}
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
							{0.82999998,0.25},
							1
						};
						right[]=
						{
							{0.88,0.25},
							1
						};
						down[]=
						{
							{0.82999998,0.33000001},
							1
						};
					};
					class Lased_Range_Background
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.43000001,0.81},
										1
									},
									
									{
										{0.56999999,0.81},
										1
									},
									
									{
										{0.56999999,0.87},
										1
									},
									
									{
										{0.43000001,0.87},
										1
									}
								}
							};
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
							{0.49399999,0.80000001},
							1
						};
						right[]=
						{
							{0.54400003,0.80000001},
							1
						};
						down[]=
						{
							{0.49399999,0.88},
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
							{0.36000001,0.58999997},
							1
						};
						right[]=
						{
							{0.44999999,0.58999997},
							1
						};
						down[]=
						{
							{0.36000001,0.77999997},
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
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="БР";
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.13},
							1
						};
						right[]=
						{
							{0.23,0.13},
							1
						};
						down[]=
						{
							{0.17,0.28},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="ОФ";
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.23},
							1
						};
						right[]=
						{
							{0.23,0.23},
							1
						};
						down[]=
						{
							{0.17,0.38},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="К";
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.17,0.33000001},
							1
						};
						right[]=
						{
							{0.23,0.33000001},
							1
						};
						down[]=
						{
							{0.17,0.47999999},
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
							{1.395,0.2},
							1
						};
						right[]=
						{
							{2.0450001,0.2},
							1
						};
						down[]=
						{
							{1.395,1},
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
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{-1.15,0.11},
							1
						};
						right[]=
						{
							{-0.40000001,0.11},
							1
						};
						down[]=
						{
							{-1.15,0.81},
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
							{0.92000002,0.19},
							1
						};
						right[]=
						{
							{0.98000002,0.19},
							1
						};
						down[]=
						{
							{0.92000002,0.34},
							1
						};
					};
				};
			};
		};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="PIP1_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
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
				BBoxes[]=
				{
					"PIP_DRV_TL",
					"PIP_DRV_TR",
					"PIP_DRV_BL",
					"PIP_DRV_BR"
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1.2;
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
				armor=0.55000001;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.30000001;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.2;
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
				visual="-";
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
				visual="-";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitERA_Front
			{
				simulation="Armor_ERA_Heavy";
				armorComponent="ERA_F";
				name="ERA_F_point";
				armor=-100;
				minimalHit=1;
				radius=0.30000001;
				passThrough=0;
				visual="-";
				explosionShielding=2;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Left_1: HitERA_Front
			{
				name="ERA_L_1_point";
				armorComponent="ERA_L_1";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_1_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Left_2: HitERA_Front
			{
				name="ERA_L_2_point";
				armorComponent="ERA_L_2";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_2_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Right_1: HitERA_Front
			{
				name="ERA_R_1_point";
				armorComponent="ERA_R_1";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_1_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Right_2: HitERA_Front
			{
				name="ERA_R_2_point";
				armorComponent="ERA_R_2";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_2_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
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
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						memoryPointGun="usti hlavne2";
						gunBeg="Usti hlavne2";
						gunEnd="Konec hlavne2";
						minElev=-5;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"HMG_NSVT",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"150Rnd_127x108_Ball",
							"150Rnd_127x108_Ball",
							"SmokeLauncherMag"
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
						gunnerAction="Commander_MBT_02_cannon_F_out";
						gunnerInAction="Commander_MBT_02_cannon_F_in";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerForceOptics=0;
						turretFollowFreeLook=2;
						usepip=2;
						LODOpticsIn=0;
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
						discreteDistanceInitIndex=2;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
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
							thermalMode[]={4,5};
						};
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide;  //found empty after stripping
							class Medium: Medium;  //found empty after stripping
							class Narrow: Narrow;  //found empty after stripping
						};
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
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
						turretInfoType="RscOptics_MBT_02_commander";
						showCrewAim=1;
						startEngine=0;
						gunnerHasFlares=1;
						viewGunnerInExternal=1;
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_turret";
								name="hit_com_turret_point";
								visual="-";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=0.2;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="-";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=0.40000001;
								radius=0.15000001;
								isGun=1;
							};
						};
						selectionFireAnim="zasleh2";
					};
				};
				class MFD
				{
					class MFD_Gunner_Range
					{
						topLeft="MFD_4_TL";
						topRight="MFD_4_TR";
						bottomLeft="MFD_4_BL";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.83999997,0.86000001,0.83999997};
						alpha=0.5;
						enableParallax=0;
						turret[]={0};
						font="LCD14";
						class Bones;  //found empty after stripping
						class Draw
						{
							color[]={0.92000002,0.0099999998,0};
							alpha=1;
							condition="1";
							class Gunner_Range
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
									{0.47999999,-0.1},
									1
								};
								right[]=
								{
									{0.88,-0.1},
									1
								};
								down[]=
								{
									{0.47999999,1},
									1
								};
							};
						};
					};
				};
				usepip=2;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control_y";
				gunnerRightHandAnimName="turret_control_y";
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh";
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="Gunner_MBT_02_cannon_F_in";
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1,
					50
				};
				weapons[]=
				{
					"cannon_125mm",
					"LMG_coax"
				};
				magazines[]=
				{
					"16Rnd_125mm_APFSDS_T_Green",
					"12Rnd_125mm_HE_T_Green",
					"12Rnd_125mm_HEAT_T_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green"
				};
				forceHideGunner=0;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				minElev=-5;
				maxElev=14;
				initElev=10;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=0;
				startEngine=0;
				inGunnerMayFire=1;
				LODOpticsIn=0;
				viewGunnerInExternal=1;
				class OpticsIn: Optics_Gunner_MBT_02
				{
					class Wide: Wide;  //found empty after stripping
					class Medium: Medium;  //found empty after stripping
					class Narrow: Narrow;  //found empty after stripping
				};
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
				turretInfoType="RscOptics_MBT_02_gunner";
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="cannon_125mm";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="cannon_125mm";
			};
			class muzzle_rot_HMG
			{
				source="ammorandom";
				weapon="HMG_NSVT";
			};
			class recoil_source
			{
				source="reload";
				weapon="cannon_125mm";
			};
			class Smoke_source
			{
				source="revolving";
				weapon="SmokeLauncher";
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
			class HitLTrack_src
			{
				source="Hit";
				hitpoint="HitLTrack";
				raw=1;
			};
			class HitRTrack_src
			{
				source="Hit";
				hitpoint="HitRTrack";
				raw=1;
			};
			class HitERA_Front_src
			{
				source="Hit";
				hitpoint="HitERA_Front";
				raw=1;
			};
			class HitERA_Left_1_src
			{
				source="Hit";
				hitpoint="HitERA_Left_1";
				raw=1;
			};
			class HitERA_Left_2_src
			{
				source="Hit";
				hitpoint="HitERA_Left_2";
				raw=1;
			};
			class HitERA_Right_1_src
			{
				source="Hit";
				hitpoint="HitERA_Right_1";
				raw=1;
			};
			class HitERA_Right_2_src
			{
				source="Hit";
				hitpoint="HitERA_Right_2";
				raw=1;
			};
			class HitERA_Top_Left_1_src
			{
				source="Hit";
				hitpoint="HitERA_Top_Left_1";
				raw=1;
			};
			class HitERA_Top_Left_2_src
			{
				source="Hit";
				hitpoint="HitERA_Top_Left_2";
				raw=1;
			};
			class HitERA_Top_Right_1_src
			{
				source="Hit";
				hitpoint="HitERA_Top_Right_1";
				raw=1;
			};
			class HitERA_Top_Right_2_src
			{
				source="Hit";
				hitpoint="HitERA_Top_Right_2";
				raw=1;
			};
			class driver_fan_unhide
			{
				source="User";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class driver_fan_hide
			{
				source="User";
				animPeriod=0.0099999998;
				initPhase=0;
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
			class showCamonetTurret
			{
				displayName="$STR_A3_animationsources_showcamonetturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showCamonetCannon",
					1
				};
				forceAnimate2[]=
				{
					"showCamonetCannon",
					0
				};
				mass=-50;
			};
			class showLog
			{
				displayName="$STR_A3_animationsources_showwoodloghull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showCamonetCannon",
			0,
			"showCamonetTurret",
			0,
			"showLog",
			0
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat"
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Katiba_C_F
			{
				weapon="arifle_Katiba_C_F";
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
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=11.62;
		_generalMacro="MBT_02_arty_base_F";
		weaponsGroup1=2;
		weaponsGroup2="1 + 		4";
		weaponsGroup3="8 + 	16 + 	32";
		weaponsGroup4="64 + 		128";
		features="Randomization: No						<br />Camo selections: 4 - hull, main turret, accessories, RCWS turret						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		displayName="$STR_A3_CFGVEHICLES_MBT_02_ARTY_BASE0";
		model="\A3\armor_f_gamma\MBT_02\MBT_02_arty_F";
		editorSubcategory="EdSubcat_Artillery";
		picture="\A3\armor_f_gamma\MBT_02\Data\ui\MBT_02_Arty_ca.paa";
		Icon="\A3\armor_f_gamma\MBT_02\Data\ui\map_MBT_arty_ca.paa";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_MBT_02_Arty_Library0";
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
							{0.5,0.81},
							1
						};
					};
				};
			};
			class MFD_Driver_Fire
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.92000002,0.0099999998,0};
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
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					blinkingPattern[]={1,1};
					blinkingStartsOn=1;
					class Driver_Fire
					{
						type="text";
						source="static";
						text="ПОЖАР";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.105},
							1
						};
						right[]=
						{
							{0.85500002,0.105},
							1
						};
						down[]=
						{
							{0.45500001,0.70499998},
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
						text="АЗИМУТ";
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
			class MFD_Gunner_AmmoType
			{
				topLeft="MFD_5_TL";
				topRight="MFD_5_TR";
				bottomLeft="MFD_5_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
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
					color[]={0.92000002,0.0099999998,0};
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
							{0.45500001,0.050000001},
							1
						};
						right[]=
						{
							{1.355,0.050000001},
							1
						};
						down[]=
						{
							{0.45500001,0.75999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
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
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
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
							{1.3,0},
							1
						};
						down[]=
						{
							{0.5,0.30000001},
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.30000001},
							1
						};
						right[]=
						{
							{1.3,0.30000001},
							1
						};
						down[]=
						{
							{0.5,0.60000002},
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
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.60000002},
							1
						};
						right[]=
						{
							{1.3,0.60000002},
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
					color[]={0,0,0};
					alpha=1;
					condition="1";
					class Top_text
					{
						type="text";
						source="static";
						text="К СТРЕЛЬБЕ";
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
						text="ГОТОВ";
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
					class Main_armament
					{
						type="text";
						source="static";
						text="ГЛАВНОЕ ОРУДИЕ";
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
							{0.015,0.072999999},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="ПУЛЕМЕТ";
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
						text="ТИП АМУНИЦИИ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.54500002,-0.0049999999},
							1
						};
						right[]=
						{
							{0.60500002,-0.0049999999},
							1
						};
						down[]=
						{
							{0.54500002,0.072999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="ДАЛЬНОСТЬ";
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
							{0.075000003,0.83999997},
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
						text="АЗИМУТ";
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
						text="ПОВРЕЖДЕНИЯ";
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
							{0.34,0.83999997},
							1
						};
						right[]=
						{
							{0.40000001,0.83999997},
							1
						};
						down[]=
						{
							{0.34,0.91799998},
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
							{0.54000002,0.064999998},
							1
						};
						right[]=
						{
							{0.61000001,0.064999998},
							1
						};
						down[]=
						{
							{0.54000002,0.185},
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
					class Gunner_Text_1
					{
						type="text";
						source="static";
						text="----";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.31,0.31},
							1
						};
						right[]=
						{
							{0.37,0.31},
							1
						};
						down[]=
						{
							{0.31,0.38800001},
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
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="ОФ";
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
							{0.055,0.064999998},
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
							{0.185,0.064999998},
							1
						};
						right[]=
						{
							{0.22499999,0.064999998},
							1
						};
						down[]=
						{
							{0.185,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="КОФ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.12},
							1
						};
						right[]=
						{
							{0.055,0.12},
							1
						};
						down[]=
						{
							{0.015,0.198},
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
							{0.185,0.12},
							1
						};
						right[]=
						{
							{0.22499999,0.12},
							1
						};
						down[]=
						{
							{0.185,0.198},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="МИНЫ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.175},
							1
						};
						right[]=
						{
							{0.055,0.175},
							1
						};
						down[]=
						{
							{0.015,0.25299999},
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
							{0.185,0.175},
							1
						};
						right[]=
						{
							{0.22499999,0.175},
							1
						};
						down[]=
						{
							{0.185,0.25299999},
							1
						};
					};
					class Main_Armament_Ammo_Type_4
					{
						type="text";
						source="static";
						text="КАССЕТНЫЙ";
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
							{0.055,0.23},
							1
						};
						down[]=
						{
							{0.015,0.308},
							1
						};
					};
					class Gunner_Text_4
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1003;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.185,0.23},
							1
						};
						right[]=
						{
							{0.22499999,0.23},
							1
						};
						down[]=
						{
							{0.185,0.308},
							1
						};
					};
					class Main_Armament_Ammo_Type_5
					{
						type="text";
						source="static";
						text="ДЫМ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.20999999,0.064999998},
							1
						};
						right[]=
						{
							{0.25,0.064999998},
							1
						};
						down[]=
						{
							{0.20999999,0.14300001},
							1
						};
					};
					class Gunner_Text_5
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1004;
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
							{0.42500001,0.064999998},
							1
						};
						down[]=
						{
							{0.38499999,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_6
					{
						type="text";
						source="static";
						text="ЛАЗ.НАВЕД.";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.20999999,0.12},
							1
						};
						right[]=
						{
							{0.25,0.12},
							1
						};
						down[]=
						{
							{0.20999999,0.198},
							1
						};
					};
					class Gunner_Text_6
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1005;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.12},
							1
						};
						right[]=
						{
							{0.42500001,0.12},
							1
						};
						down[]=
						{
							{0.38499999,0.198},
							1
						};
					};
					class Main_Armament_Ammo_Type_7
					{
						type="text";
						source="static";
						text="ПТ МИНЫ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.20999999,0.175},
							1
						};
						right[]=
						{
							{0.25,0.175},
							1
						};
						down[]=
						{
							{0.20999999,0.25299999},
							1
						};
					};
					class Gunner_Text_7
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1006;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.175},
							1
						};
						right[]=
						{
							{0.42500001,0.175},
							1
						};
						down[]=
						{
							{0.38499999,0.25299999},
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
					class Main_armament
					{
						type="text";
						source="static";
						text="ГЛАВНОЕ ОРУДИЕ";
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
						text="ПУЛЕМЕТ";
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
						text="ПУЛЕМЕТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.63999999,0.12},
							1
						};
						right[]=
						{
							{0.69999999,0.12},
							1
						};
						down[]=
						{
							{0.63999999,0.27000001},
							1
						};
					};
					class Commander_grenadelauncher
					{
						type="text";
						source="static";
						text="ГРАНАТОМЕТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.63999999,0.23},
							1
						};
						right[]=
						{
							{0.69999999,0.23},
							1
						};
						down[]=
						{
							{0.63999999,0.38},
							1
						};
					};
					class Commander_armament
					{
						type="text";
						source="static";
						text="ОРУДИЕ КОМАНДИРА";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.79500002,0.0049999999},
							1
						};
						right[]=
						{
							{0.84500003,0.0049999999},
							1
						};
						down[]=
						{
							{0.79500002,0.125},
							1
						};
					};
					class Commander_armament_magazines
					{
						type="text";
						source="static";
						text="МАГ.";
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
						text="ТИП АМУНИЦИИ";
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
						text="ДАЛЬНОСТЬ";
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
							{0.79000002,0.61000001},
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
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.70999998,0.80000001},
							1
						};
						right[]=
						{
							{0.76999998,0.80000001},
							1
						};
						down[]=
						{
							{0.70999998,0.94999999},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="ПОВРЕЖДЕНИЯ";
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
			class MFD_Commander_Intercom
			{
				topLeft="MFD_6_TL";
				topRight="MFD_6_TR";
				bottomLeft="MFD_6_BL";
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
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition="on";
					class Com_Intercom
					{
						type="text";
						source="static";
						text="ВН КАНАЛ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.105},
							1
						};
						right[]=
						{
							{0.55500001,0.105},
							1
						};
						down[]=
						{
							{0.45500001,0.38499999},
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
						text="К СТРЕЛЬБЕ";
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
						text="ГОТОВ";
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
						text="ДЫМОВАЯ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.47,0},
							1
						};
						right[]=
						{
							{0.67000002,0},
							1
						};
						down[]=
						{
							{0.47,0.5},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="ЗАВЕСА";
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
			class MFD_Commander_HMG
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
				font="EtelkaMonospacePro";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				turret[]={0,0};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Crosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.5,0.42341301},
								1
							},
							
							{
								{0.5,0.34642899},
								1
							},
							{},
							
							{
								{0.5,0.57738101},
								1
							},
							
							{
								{0.5,0.654365},
								1
							},
							{},
							
							{
								{0.55000001,0.50039703},
								1
							},
							
							{
								{0.60000002,0.50039703},
								1
							},
							{},
							
							{
								{0.40000001,0.50039703},
								1
							},
							
							{
								{0.44999999,0.50039703},
								1
							},
							{},
							
							{
								{0.30000001,0.34642899},
								1
							},
							
							{
								{0.30000001,0.26944399},
								1
							},
							{},
							
							{
								{0.30000001,0.26944399},
								1
							},
							
							{
								{0.34999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.34642899},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.64999998,0.26944399},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.654365},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.64999998,0.73134899},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.654365},
								1
							},
							
							{
								{0.30000001,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.73134899},
								1
							},
							
							{
								{0.34999999,0.73134899},
								1
							},
							{}
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
							{0.82999998,0.25},
							1
						};
						right[]=
						{
							{0.88,0.25},
							1
						};
						down[]=
						{
							{0.82999998,0.33000001},
							1
						};
					};
					class Lased_Range_Background
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.43000001,0.81},
										1
									},
									
									{
										{0.56999999,0.81},
										1
									},
									
									{
										{0.56999999,0.87},
										1
									},
									
									{
										{0.43000001,0.87},
										1
									}
								}
							};
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
							{0.49399999,0.80000001},
							1
						};
						right[]=
						{
							{0.54400003,0.80000001},
							1
						};
						down[]=
						{
							{0.49399999,0.88},
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
							{0.36000001,0.58999997},
							1
						};
						right[]=
						{
							{0.44999999,0.58999997},
							1
						};
						down[]=
						{
							{0.36000001,0.77999997},
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
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="ОФ";
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
							{0.055,0.13},
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
							{0.19499999,0.13},
							1
						};
						right[]=
						{
							{0.235,0.13},
							1
						};
						down[]=
						{
							{0.19499999,0.28},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="КОФ";
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
							{0.055,0.23},
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
							{0.19499999,0.23},
							1
						};
						right[]=
						{
							{0.235,0.23},
							1
						};
						down[]=
						{
							{0.19499999,0.38},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="МИНЫ";
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
							{0.055,0.33000001},
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
							{0.19499999,0.33000001},
							1
						};
						right[]=
						{
							{0.235,0.33000001},
							1
						};
						down[]=
						{
							{0.19499999,0.47999999},
							1
						};
					};
					class Main_Armament_Ammo_Type_4
					{
						type="text";
						source="static";
						text="КАССЕТНЫЙ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.43000001},
							1
						};
						right[]=
						{
							{0.055,0.43000001},
							1
						};
						down[]=
						{
							{0.015,0.57999998},
							1
						};
					};
					class Gunner_Text_4
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1003;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.19499999,0.43000001},
							1
						};
						right[]=
						{
							{0.235,0.43000001},
							1
						};
						down[]=
						{
							{0.19499999,0.57999998},
							1
						};
					};
					class Main_Armament_Ammo_Type_5
					{
						type="text";
						source="static";
						text="ДЫМ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.215,0.13},
							1
						};
						right[]=
						{
							{0.255,0.13},
							1
						};
						down[]=
						{
							{0.215,0.28},
							1
						};
					};
					class Gunner_Text_5
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1004;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.13},
							1
						};
						right[]=
						{
							{0.435,0.13},
							1
						};
						down[]=
						{
							{0.39500001,0.28},
							1
						};
					};
					class Main_Armament_Ammo_Type_6
					{
						type="text";
						source="static";
						text="ЛАЗ.НАВЕД.";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.215,0.23},
							1
						};
						right[]=
						{
							{0.255,0.23},
							1
						};
						down[]=
						{
							{0.215,0.38},
							1
						};
					};
					class Gunner_Text_6
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1005;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.23},
							1
						};
						right[]=
						{
							{0.435,0.23},
							1
						};
						down[]=
						{
							{0.39500001,0.38},
							1
						};
					};
					class Main_Armament_Ammo_Type_7
					{
						type="text";
						source="static";
						text="ПТ МИНЫ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.215,0.33000001},
							1
						};
						right[]=
						{
							{0.255,0.33000001},
							1
						};
						down[]=
						{
							{0.215,0.47999999},
							1
						};
					};
					class Gunner_Text_7
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1006;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.33000001},
							1
						};
						right[]=
						{
							{0.435,0.33000001},
							1
						};
						down[]=
						{
							{0.39500001,0.47999999},
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
					class Gunner_Text_1
					{
						type="text";
						source="static";
						text="---";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{1.395,0.2},
							1
						};
						right[]=
						{
							{2.0450001,0.2},
							1
						};
						down[]=
						{
							{1.395,1},
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
					class Gunner_Text_1
					{
						type="text";
						source="static";
						text="---";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{-1.3,0.11},
							1
						};
						right[]=
						{
							{-0.55000001,0.11},
							1
						};
						down[]=
						{
							{-1.3,0.81},
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
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=0;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.98000002,0.12},
							1
						};
						right[]=
						{
							{1.04,0.12},
							1
						};
						down[]=
						{
							{0.98000002,0.27000001},
							1
						};
					};
					class Gunner_Text_2
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
							{0.98000002,0.23},
							1
						};
						right[]=
						{
							{1.04,0.23},
							1
						};
						down[]=
						{
							{0.98000002,0.38},
							1
						};
					};
				};
			};
		};
		unitInfoType="RscUnitInfoArtillery";
		transportSoldier=0;
		armor=425;
		armorStructural=4.5;
		artilleryScanner=1;
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={15,20,20};
					ambient[]={0,0,0};
					intensity=1.2;
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
					color[]={15,20,20};
					ambient[]={0,0,0};
					intensity=0.60000002;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={15,20,20};
					ambient[]={0,0,0};
					intensity=0.30000001;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=2;
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
				armor=1.1;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.30000001;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.2;
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
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg="Usti hlavne";
						gunEnd="Konec hlavne";
						memoryPointGun="usti hlavne2";
						weapons[]=
						{
							"HMG_127_APC",
							"GMG_40mm",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"96Rnd_40mm_G_belt",
							"200Rnd_127x99_mag_Tracer_Green",
							"200Rnd_127x99_mag_Tracer_Green",
							"SmokeLauncherMag"
						};
						gunnerAction="Commander_MBT_02_arty_F_in";
						gunnerInAction="Commander_MBT_02_arty_F_in";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						turretInfoType="RscWeaponRangeZeroing";
						selectionFireAnim="zasleh2";
						minElev=-25;
						initElev=0;
						maxElev=37;
						gunnerForceOptics=0;
						forceHideGunner=1;
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerLeftHandAnimName="com_turret_control_y";
						gunnerRightHandAnimName="com_turret_control_y";
						isPersonTurret=0;
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-15;
						maxOutTurn=175;
						initOutTurn=0;
						class ViewOptics: RCWSOptics;  //found empty after stripping
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
							};
						};
						class HitPoints
						{
							class HitComTurret
							{
								armor=-250;
								material=-1;
								armorComponent="hit_com_turret";
								name="hit_com_turret_point";
								visual="Commander_Turret";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.40000001;
								radius=0.25;
								isTurret=1;
							};
							class HitComGun
							{
								armor=-250;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="Commander_Gun";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.2;
								radius=0.2;
								isGun=1;
							};
						};
					};
				};
				animationSourceHatch="hatchCommander";
				gunnerAction="Gunner_MBT_02_arty_F_out";
				gunnerInAction="Gunner_MBT_02_arty_F_in";
				selectionFireAnim="";
				gunBeg="Usti hlavne3";
				gunEnd="Konec hlavne3";
				weapons[]=
				{
					"mortar_155mm_AMOS"
				};
				magazines[]=
				{
					"32Rnd_155mm_Mo_shells_O",
					"2Rnd_155mm_Mo_guided_O",
					"6Rnd_155mm_Mo_mine_O",
					"2Rnd_155mm_Mo_Cluster_O",
					"6Rnd_155mm_Mo_smoke_O",
					"4Rnd_155mm_Mo_LG_O",
					"6Rnd_155mm_Mo_AT_mine_O"
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1,
					50
				};
				minElev=-5;
				maxElev=80;
				initElev=10;
				maxCamElev=30;
				elevationMode=3;
				maxHorizontalRotSpeed=0.77999997;
				maxVerticalRotSpeed=0.25999999;
				memoryPointGunnerOptics="gunnerview";
				cameraDir="look";
				turretInfoType="RscWeaponRangeArtilleryAuto";
				gunnerForceOptics=0;
				forceHideGunner=0;
				commanding=1;
				class OpticsIn: Optics_Gunner_MBT_02
				{
					class Wide: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						initFov=0.17399999;
						minFov=0.0077777999;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
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
						visual="-";
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
						visual="-";
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
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat",
				"A3\Data_F\Vehicles\Turret.rvmat",
				"A3\Data_F\Vehicles\Turret_damage.rvmat",
				"A3\Data_F\Vehicles\Turret_destruct.rvmat"
			};
		};
		selectionFireAnim="";
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="mortar_155mm_AMOS";
			};
			class muzzle_hide_arty
			{
				source="reload";
				weapon="mortar_155mm_AMOS";
			};
			class muzzle_rot_HMG
			{
				source="ammorandom";
				weapon="HMG_127_APC";
			};
			class muzzle_hide_HMG
			{
				source="reload";
				weapon="HMG_127_APC";
			};
			class muzzle_rot_GMG
			{
				source="ammorandom";
				weapon="GMG_40mm";
			};
			class muzzle_hide_GMG
			{
				source="reload";
				weapon="GMG_40mm";
			};
			class showAmmobox
			{
				displayName="$STR_A3_animationsources_showammoboxeshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCanisters
			{
				displayName="$STR_A3_animationsources_showcanistershull0";
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
			class showCamonetTurret
			{
				displayName="$STR_A3_animationsources_showcamonetturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showCamonetCannon",
					1,
					"showCanisters",
					1
				};
				forceAnimate2[]=
				{
					"showCamonetCannon",
					0,
					"showCanisters",
					0
				};
				mass=-50;
			};
		};
		availableForSupportTypes[]=
		{
			"Artillery"
		};
	};
	class O_MBT_02_base_F: MBT_02_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="O_MBT_02_base_F";
		side=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F",
			"O_Soldier_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet"
		};
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
			"a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
			"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		};
		class HitPoints: HitPoints
		{
			class HitERA_Top_Left_1: HitERA_Front
			{
				name="era_L_T_1_point";
				armorComponent="era_L_T_1";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_L_T_1_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Left_2: HitERA_Front
			{
				name="era_L_T_2_point";
				armorComponent="era_L_T_2";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_L_T_2_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Right_1: HitERA_Front
			{
				name="era_R_T_1_point";
				armorComponent="era_R_T_1";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_R_T_1_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Right_2: HitERA_Front
			{
				name="era_R_T_2_point";
				armorComponent="era_R_T_2";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_R_T_2_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
		};
	};
	class O_MBT_02_cannon_F: O_MBT_02_base_F
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
					38
				},
				
				{
					"recoil_2",
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
					"drivingstickl",
					0
				},
				
				{
					"drivingstickr",
					0
				},
				
				{
					"gear_stick_reverse",
					1
				},
				
				{
					"gear_stick_forward",
					1
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
					"hatch_can_open_indicator_right",
					0
				},
				
				{
					"hatch_can_open_indicator_left",
					0
				},
				
				{
					"driver_fan",
					3779.3401
				},
				
				{
					"indicatorspeed",
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
					"mainturret_indicator",
					0
				},
				
				{
					"comturret_indicator",
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
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
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
					"indicator_damage_trackl",
					0
				},
				
				{
					"indicator_damage_trackr",
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
					"indicator_turret_damage_trackl",
					0
				},
				
				{
					"indicator_turret_damage_trackr",
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
					"engine_damage_fire_indicator",
					0
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
					"damage_era_front_hide",
					0
				},
				
				{
					"damage_camonet_front_hide",
					0
				},
				
				{
					"damage_era_left_1_hide",
					0
				},
				
				{
					"damage_camonet_left_1_hide",
					0
				},
				
				{
					"damage_era_left_2_hide",
					0
				},
				
				{
					"damage_camonet_left_2_hide",
					0
				},
				
				{
					"damage_era_right_1_hide",
					0
				},
				
				{
					"damage_camonet_right_1_hide",
					0
				},
				
				{
					"damage_era_right_2_hide",
					0
				},
				
				{
					"damage_camonet_right_2_hide",
					0
				},
				
				{
					"zaslehrot_coax",
					3779.3401
				},
				
				{
					"hatchcommanderup",
					0
				},
				
				{
					"hatchcommander",
					0
				},
				
				{
					"hatchgunnerup",
					0
				},
				
				{
					"hatchgunner",
					0
				},
				
				{
					"cannon_muzzle_flash",
					0
				},
				
				{
					"zaslehrot_cannon",
					678
				},
				
				{
					"mainturret_indicator2",
					0
				},
				
				{
					"comturret_indicator2",
					0
				},
				
				{
					"comturret_indicator_counter2",
					0
				},
				
				{
					"mainguninterior",
					0.17
				},
				
				{
					"cannon_ready_light",
					0
				},
				
				{
					"damage_era_top_left_1_hide",
					0
				},
				
				{
					"damage_camonet_top_left_1_hide",
					0
				},
				
				{
					"damage_era_top_left_2_hide",
					0
				},
				
				{
					"damage_camonet_top_left_2_hide",
					0
				},
				
				{
					"damage_era_top_right_1_hide",
					0
				},
				
				{
					"damage_camonet_top_right_1_hide",
					0
				},
				
				{
					"damage_era_top_right_2_hide",
					0
				},
				
				{
					"damage_camonet_top_right_2_hide",
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
			verticalOffset=2.1989999;
			verticalOffsetWorld=-0.17200001;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_MBT_02_cannon_F.jpg";
		_generalMacro="O_MBT_02_cannon_F";
		scope=2;
		textureList[]=
		{
			"Hex",
			1
		};
	};
	class O_MBT_02_arty_base_F: MBT_02_arty_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="O_MBT_02_arty_base_F";
		side=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F",
			"O_Soldier_F"
		};
		maxFordingDepth=-1.25;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"CamoNet"
		};
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
					"a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa",
					"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
					"a3\data_f\vehicles\turret_opfor_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
			"a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa",
			"a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
			"a3\data_f\vehicles\turret_opfor_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		};
	};
	class O_MBT_02_arty_F: O_MBT_02_arty_base_F
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
					"hatchcommander",
					0
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
					850
				},
				
				{
					"recoil_2",
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
					"drivingstickl",
					0
				},
				
				{
					"drivingstickr",
					0
				},
				
				{
					"gear_stick_reverse",
					1
				},
				
				{
					"gear_stick_forward",
					1
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
					"hatch_can_open_indicator_right",
					0
				},
				
				{
					"hatch_can_open_indicator_left",
					0
				},
				
				{
					"driver_fan",
					3776.6399
				},
				
				{
					"indicatorspeed",
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
					"mainturret_indicator",
					0
				},
				
				{
					"comturret_indicator",
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
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
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
					"indicator_damage_trackl",
					0
				},
				
				{
					"indicator_damage_trackr",
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
					"indicator_turret_damage_trackl",
					0
				},
				
				{
					"indicator_turret_damage_trackr",
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
					"engine_damage_fire_indicator",
					0
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
					"damage_era_front_hide",
					0
				},
				
				{
					"damage_camonet_front_hide",
					0
				},
				
				{
					"damage_era_left_1_hide",
					0
				},
				
				{
					"damage_camonet_left_1_hide",
					0
				},
				
				{
					"damage_era_left_2_hide",
					0
				},
				
				{
					"damage_camonet_left_2_hide",
					0
				},
				
				{
					"damage_era_right_1_hide",
					0
				},
				
				{
					"damage_camonet_right_1_hide",
					0
				},
				
				{
					"damage_era_right_2_hide",
					0
				},
				
				{
					"damage_camonet_right_2_hide",
					0
				},
				
				{
					"maingunoptics",
					0.17
				},
				
				{
					"artillery_muzzle_flash",
					0
				},
				
				{
					"gmg_muzzle_flash",
					0
				},
				
				{
					"zaslehrot_gmg",
					715
				},
				
				{
					"cannon_ready_light",
					0
				},
				
				{
					"com_turret_control_x",
					0
				},
				
				{
					"com_turret_control_y",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh2",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.737;
			verticalOffsetWorld=-0.18000001;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_MBT_02_arty_F.jpg";
		_generalMacro="O_MBT_02_arty_F";
		scope=2;
		textureList[]=
		{
			"Hex",
			1
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class proxyMBT_02_wreck_F: ProxyRetex
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		model="\A3\Armor_F_Gamma\MBT_02\MBT_02_wreck_F.p3d";
	};
};
