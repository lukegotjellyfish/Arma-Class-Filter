class CfgPatches
{
	class A3_Armor_F_Beta_APC_Wheeled_02
	{
		addonRootClass="A3_Armor_F_Beta";
		units[]=
		{
			"O_APC_Wheeled_02_rcws_F",
			"O_APC_Wheeled_02_rcws_v2_F"
		};
		weapons[]={};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
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
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class EventHandlers;
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class AnimationSources;
		class CommanderOptics;
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		features="Randomization: No						<br />Camo selections: 3 - top of hull, bottom of hull, turret						<br />Script door sources: None						<br />Script animations: HideTurret						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 8";
		_generalMacro="APC_Wheeled_02_base_F";
		weaponsGroup1=2;
		weaponsGroup2="1 + 		4";
		weaponsGroup3="8 + 	16 + 	32";
		weaponsGroup4="64 + 		128";
		accuracy=0.25;
		thrustDelay=0.25;
		brakeIdleSpeed=1.78;
		maxSpeed=105;
		fuelCapacity=24;
		wheelCircumference=3.8050001;
		waterLeakiness=2.5;
		normalSpeedForwardCoef=0.54000002;
		accelAidForceYOffset=-2;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		idleRpm=500;
		redRpm=2200;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.8400002,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.01,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[]=
			{
				"High",
				8
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
		simulation="carx";
		dampersBumpCoef=3.3;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=35;
		enginePower=420;
		maxOmega=230;
		minOmega=50;
		peakTorque=2037.5;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			
			{
				"(0/2200)",
				"(0/1630)"
			},
			
			{
				"(900/2200)",
				"(1200/1630)"
			},
			
			{
				"(1250/2200)",
				"(1500/1630)"
			},
			
			{
				"(1300/2200)",
				"(1630/1630)"
			},
			
			{
				"(1350/2200)",
				"(1600/1630)"
			},
			
			{
				"(1600/2200)",
				"(1400/1630)"
			},
			
			{
				"(2200/2200)",
				"(1200/1630)"
			},
			
			{
				"(5800/2200)",
				"(0/1630)"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		switchTime=0.1;
		latency=1.4;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width="0.36";
				mass=187.5;
				MOI=60;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=45000;
				maxHandBrakeTorque=0;
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=3090;
				springStrength=111090;
				springDamperRate=21275;
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
			class R1: L1
			{
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
		};
		icon="\A3\Armor_F_Beta\APC_Wheeled_02\Data\UI\map_APC_Wheeled_02_rcws_ca.paa";
		memoryPointTaskMarker="TaskMarker_1_pos";
		terrainCoef=1.5;
		turnCoef=3;
		canFloat=1;
		waterAngularDampingCoef=10;
		waterPPInVehicle=0;
		waterResistanceCoef=0.5;
		engineShiftY=1.1;
		wheelDestroyRadiusCoef=0.60000002;
		armor=270;
		armorStructural=5;
		armorLights=0.1;
		damageResistance=0.0071899998;
		hideWeaponsCargo=1;
		driverForceOptics=1;
		driverOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointDriverOptics="driverview";
		driverInfoPanelCameraPos="driverview_old";
		cargoIsCoDriver[]={0};
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
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.85000002;
			minFov=0.85000002;
			maxFov=0.85000002;
		};
		extCameraPosition[]={0,3,-8.5};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1.4;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
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
				passThrough=0.2;
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
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.30000001;
			};
			class HitSLAT_Left_1
			{
				simulation="Armor_SLAT";
				armorComponent="cage_left_1_geo";
				name="cage_left_1_point";
				armor=-200;
				minimalHit=0.30000001;
				passThrough=0;
				explosionShielding=2;
				radius=0.25;
			};
			class HitSLAT_Left_2: HitSLAT_Left_1
			{
				armorComponent="cage_left_2_geo";
				name="cage_left_2_point";
			};
			class HitSLAT_Left_3: HitSLAT_Left_1
			{
				armorComponent="cage_left_3_geo";
				name="cage_left_3_point";
			};
			class HitSLAT_Right_1: HitSLAT_Left_1
			{
				armorComponent="cage_right_1_geo";
				name="cage_right_1_point";
			};
			class HitSLAT_Right_2: HitSLAT_Left_1
			{
				armorComponent="cage_right_2_geo";
				name="cage_right_2_point";
			};
			class HitSLAT_Right_3: HitSLAT_Left_1
			{
				armorComponent="cage_right_3_geo";
				name="cage_right_3_point";
			};
			class HitSLAT_back: HitSLAT_Left_1
			{
				armorComponent="cage_back_geo";
				name="cage_back_point";
			};
			class HitSLAT_front: HitSLAT_Left_1
			{
				armorComponent="cage_front_geo";
				name="cage_front_point";
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.33000001;
				armorComponent="wheel_1_1_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.33000001;
				armorComponent="wheel_1_2_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius=0.33000001;
				armorComponent="wheel_1_3_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.33000001;
				armorComponent="wheel_2_1_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.33000001;
				armorComponent="wheel_2_2_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius=0.33000001;
				armorComponent="wheel_2_3_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
		};
		wheelDamageThreshold=0.18000001;
		wheelDamageRadiusCoef=0.75;
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",
			0.39810717,
			1
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=120;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"HMG_127_APC",
					"GMG_40mm"
				};
				magazines[]=
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green"
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				commanding=1;
				minElev=-15;
				initElev=0;
				maxElev=30;
				minCamElev=-90;
				maxCamElev=90;
				forceHideGunner=1;
				stabilizedInAxes=3;
				startEngine=0;
				LODOpticsIn=0;
				showCrewAim=2;
				selectionFireAnim="zasleh2";
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-2;
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
				class HitPoints
				{
					class HitTurret
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.40000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
				};
				class Turrets;  //found empty after stripping
			};
			class CommanderOptics: CommanderOptics
			{
				minElev=-10;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minCamElev=-90;
				maxCamElev=90;
				weapons[]=
				{
					"SmokeLauncher"
				};
				magazines[]=
				{
					"SmokeLauncherMag"
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				forceHideGunner=0;
				LODOpticsIn=0;
				showCrewAim=1;
				class ViewGunner: ViewCargo;  //found empty after stripping
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
						"NVG",
						"TI"
					};
					thermalMode[]={4,5};
				};
				startEngine=0;
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="";
						passThrough=0;
						minimalHit=10;
						explosionShielding=0;
						radius=0;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="";
						passThrough=0;
						minimalHit=10;
						explosionShielding=0;
						radius=0;
					};
				};
			};
		};
		class Damage;  //found empty after stripping
		viewCargoShadowDiff=1;
		viewCargoShadowAmb=1;
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectAMV";
			};
		};
		engineStartSpeed=5;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name="nvg_marker";
				color[]={0.029999999,0.003,0.003,1};
				ambient[]={0.003,0.00030000001,0.00030000001,1};
				brightness=0.001;
				blinking=1;
			};
		};
		explosionEffect="FuelExplosionBig";
		engineEffectSpeed=5;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		selectionFireAnim="";
		showNVGCommander=1;
		showNVGDriver=1;
		numberPhysicalWheels=6;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class TextureSources
		{
			class Hex
			{
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
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		driverForceOptics=0;
		LODDriverTurnedOut=1201;
		LODDriverTurnedin=1100;
		LODDriverOpticsIn=1202;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		showNVGDriver=0;
		showNVGCommander=0;
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
					condition="1";
					class Driver_Fire
					{
						source="static";
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
							{0.80500001,0.105},
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
						source="static";
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
			class MFD_Gunner_Ready_To_Fire_background
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
					ambient[]={2.5,2.5,2.5,1};
					diffuse[]={1,1,1,1};
					emissive[]={300,300,300,1};
				};
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition="(ammo1000+ammo1001)";
					class Ready_to_fire_background
					{
						color[]={0.74000001,0.98000002,0.43000001};
						alpha=0.1;
						condition="1";
						class Background
						{
							points[]=
							{
								
								{
									
									{
										{-0.0099999905,-0.30000001},
										1
									},
									
									{
										{0.99000001,-0.30000001},
										1
									},
									
									{
										{0.99000001,1.3},
										1
									},
									
									{
										{-0.0099999905,1.3},
										1
									}
								}
							};
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
					condition="(ammo1000+ammo1001)";
					class Top_text
					{
						source="static";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44,0.050000001},
							1
						};
						right[]=
						{
							{0.69,0.050000001},
							1
						};
						down[]=
						{
							{0.44,0.55000001},
							1
						};
					};
					class Bottom_text
					{
						source="static";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.38},
							1
						};
						right[]=
						{
							{0.75,0.38},
							1
						};
						down[]=
						{
							{0.5,0.88},
							1
						};
					};
				};
			};
			class MFD_Gunner_Main_Display
			{
				topLeft="PIP_COM_TL";
				topRight="PIP_COM_TR";
				bottomLeft="PIP_COM_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
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
					color[]={1,0,0,1};
					alpha=0.5;
					class Driver_Heading
					{
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.079999998;
						pos[]=
						{
							{0.215,0.85000002},
							1
						};
						right[]=
						{
							{0.285,0.85000002},
							1
						};
						down[]=
						{
							{0.215,0.92000002},
							1
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
							{0.51499999,0.69},
							1
						};
						right[]=
						{
							{0.55500001,0.69},
							1
						};
						down[]=
						{
							{0.51499999,0.73000002},
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
							{0.67500001,0.69},
							1
						};
						right[]=
						{
							{0.71499997,0.69},
							1
						};
						down[]=
						{
							{0.67500001,0.73000002},
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
							{0.51499999,0.73000002},
							1
						};
						right[]=
						{
							{0.55500001,0.73000002},
							1
						};
						down[]=
						{
							{0.51499999,0.76999998},
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
							{0.62,0.73000002},
							1
						};
						right[]=
						{
							{0.66000003,0.73000002},
							1
						};
						down[]=
						{
							{0.62,0.76999998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Second_Display
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
						source="static";
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
					class Lased_distance_elevation
					{
						source="static";
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
						source="static";
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
					class Heading
					{
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
			class MFD_Gunner_Smoke_Indicator
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
						source="static";
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
							{0.69999999,0.050000001},
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
						source="static";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.38},
							1
						};
						right[]=
						{
							{0.69999999,0.38},
							1
						};
						down[]=
						{
							{0.44999999,0.88},
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
						source="static";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.079999998},
							1
						};
						right[]=
						{
							{0.075000003,0.079999998},
							1
						};
						down[]=
						{
							{0.015,0.15800001},
							1
						};
					};
					class Gunner_Text_1
					{
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38,0.079999998},
							1
						};
						right[]=
						{
							{0.44,0.079999998},
							1
						};
						down[]=
						{
							{0.38,0.15800001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						source="static";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.15000001},
							1
						};
						right[]=
						{
							{0.075000003,0.15000001},
							1
						};
						down[]=
						{
							{0.015,0.228},
							1
						};
					};
					class Gunner_Text_2
					{
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38,0.15000001},
							1
						};
						right[]=
						{
							{0.44,0.15000001},
							1
						};
						down[]=
						{
							{0.38,0.228},
							1
						};
					};
				};
			};
		};
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.40000001;
			minFov=0.23;
			maxFov=0.40000001;
		};
		animationList[]=
		{
			"showBags",
			0,
			"showCanisters",
			0,
			"showTools",
			0,
			"showCamonetHull",
			0,
			"showSLATHull",
			0
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={10,30,30};
					ambient[]={5,0,0};
					intensity=0.17;
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
					color[]={20,30,30};
					ambient[]={5,0,0};
					intensity=0.2;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={15,30,30};
					ambient[]={5,0,0};
					intensity=0.18000001;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={25,30,30};
					ambient[]={5,0,0};
					intensity=0.80000001;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={25,30,30};
					ambient[]={5,0,0};
					intensity=0.80000001;
				};
				class Light6: Light1
				{
					point="light_interior6";
					color[]={25,30,30};
					ambient[]={5,0,0};
					intensity=0.80000001;
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"HMG_127_APC",
					"GMG_40mm",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"SmokeLauncherMag"
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				commanding=1;
				primaryGunner=1;
				primaryObserver=0;
				LODOpticsIn=0;
				forceHideGunner=0;
				startEngine=0;
				usePip=1;
				stabilizedInAxes=3;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				selectionFireAnim="zasleh2";
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				minElev=-15;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.40000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
				};
				class Turrets;  //found empty after stripping
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
						"NVG",
						"TI"
					};
				};
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
			};
			class CommanderOptics;
		};
	};
	class O_APC_Wheeled_02_base_F: APC_Wheeled_02_base_F
	{
		_generalMacro="O_APC_Wheeled_02_base_F";
		side=0;
		typicalCargo[]=
		{
			"O_soldier_F"
		};
	};
	class O_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_1_3",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"wheel_2_3",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_1_2",
					0
				},
				
				{
					"steering_2_2",
					0
				},
				
				{
					"wheel_1_1_damper",
					0
				},
				
				{
					"wheel_2_1_damper",
					0
				},
				
				{
					"wheel_1_2_damper",
					0
				},
				
				{
					"wheel_1_3_damper",
					0
				},
				
				{
					"wheel_2_2_damper",
					0
				},
				
				{
					"wheel_2_3_damper",
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
					"mainturret",
					0
				},
				
				{
					"maingun",
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
					"damagehlaven",
					0
				},
				
				{
					"damagecamonet",
					0
				},
				
				{
					"vrtulea",
					0
				},
				
				{
					"vrtuleb",
					0
				},
				
				{
					"zasleh_rot",
					905
				},
				
				{
					"zasleh2_rot",
					3602.0901
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"reverse_light",
					1
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
					"engine_damage_fire_indicator",
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
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"mainturret_indicator",
					0
				},
				
				{
					"commander_mainturret_indicator",
					0
				},
				
				{
					"driver_reverse_cam",
					1
				},
				
				{
					"driver_hide_mfd",
					1
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
					0
				},
				
				{
					"indicator_com_smoke_2",
					0
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
					"indicator_damage_track",
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
					"indicator_turret_damage_wheels",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"indicator_turret_damage_com_turret",
					0
				},
				
				{
					"hide_mfd_and_pip_screen",
					1
				},
				
				{
					"hide_mfd_elements_for_com",
					1
				},
				
				{
					"showcamonethull",
					0
				},
				
				{
					"showbags",
					0
				},
				
				{
					"showcanisters",
					0
				},
				
				{
					"showtools",
					0
				},
				
				{
					"showslathull",
					0
				},
				
				{
					"slat_front_normal_hide",
					0
				},
				
				{
					"slat_front_damage_unhide",
					0
				},
				
				{
					"slat_front_damage_hide",
					0
				},
				
				{
					"slat_front_destroyed_unhide",
					0
				},
				
				{
					"slat_front_firegeo_hide",
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
					"slat_left_1_normal_hide",
					0
				},
				
				{
					"slat_left_1_damage_unhide",
					0
				},
				
				{
					"slat_left_1_damage_hide",
					0
				},
				
				{
					"slat_left_1_destroyed_unhide",
					0
				},
				
				{
					"slat_left_1_firegeo_hide",
					0
				},
				
				{
					"slat_left_2_normal_hide",
					0
				},
				
				{
					"slat_left_2_damage_unhide",
					0
				},
				
				{
					"slat_left_2_damage_hide",
					0
				},
				
				{
					"slat_left_2_destroyed_unhide",
					0
				},
				
				{
					"slat_left_2_firegeo_hide",
					0
				},
				
				{
					"slat_left_3_normal_hide",
					0
				},
				
				{
					"slat_left_3_damage_unhide",
					0
				},
				
				{
					"slat_left_3_damage_hide",
					0
				},
				
				{
					"slat_left_3_destroyed_unhide",
					0
				},
				
				{
					"slat_left_3_firegeo_hide",
					0
				},
				
				{
					"slat_right_1_normal_hide",
					0
				},
				
				{
					"slat_right_1_damage_unhide",
					0
				},
				
				{
					"slat_right_1_damage_hide",
					0
				},
				
				{
					"slat_right_1_destroyed_unhide",
					0
				},
				
				{
					"slat_right_1_firegeo_hide",
					0
				},
				
				{
					"slat_right_2_normal_hide",
					0
				},
				
				{
					"slat_right_2_damage_unhide",
					0
				},
				
				{
					"slat_right_2_damage_hide",
					0
				},
				
				{
					"slat_right_2_destroyed_unhide",
					0
				},
				
				{
					"slat_right_2_firegeo_hide",
					0
				},
				
				{
					"slat_right_3_normal_hide",
					0
				},
				
				{
					"slat_right_3_damage_unhide",
					0
				},
				
				{
					"slat_right_3_damage_hide",
					0
				},
				
				{
					"slat_right_3_destroyed_unhide",
					0
				},
				
				{
					"slat_right_3_firegeo_hide",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh2",
				"zasleh_1",
				"light_l",
				"light_r",
				"light_r2",
				"light_l2",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.408;
			verticalOffsetWorld=-0.149;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="O_APC_Wheeled_02_rcws_F";
		textureList[]=
		{
			"Hex",
			1
		};
	};
	class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
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
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_1_3",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"wheel_2_3",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_1_2",
					0
				},
				
				{
					"steering_2_2",
					0
				},
				
				{
					"wheel_1_1_damper",
					0
				},
				
				{
					"wheel_2_1_damper",
					0
				},
				
				{
					"wheel_1_2_damper",
					0
				},
				
				{
					"wheel_1_3_damper",
					0
				},
				
				{
					"wheel_2_2_damper",
					0
				},
				
				{
					"wheel_2_3_damper",
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
					"mainturret",
					0
				},
				
				{
					"maingun",
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
					"damagehlaven",
					0
				},
				
				{
					"damagecamonet",
					0
				},
				
				{
					"vrtulea",
					0
				},
				
				{
					"vrtuleb",
					0
				},
				
				{
					"zasleh_rot",
					4
				},
				
				{
					"zasleh2_rot",
					3605.1699
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"reverse_light",
					1
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
					"engine_damage_fire_indicator",
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
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"mainturret_indicator",
					0
				},
				
				{
					"commander_mainturret_indicator",
					0
				},
				
				{
					"driver_reverse_cam",
					1
				},
				
				{
					"driver_hide_mfd",
					1
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
					"indicator_damage_track",
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
					"indicator_turret_damage_wheels",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"indicator_turret_damage_com_turret",
					0
				},
				
				{
					"hide_mfd_and_pip_screen",
					1
				},
				
				{
					"hide_mfd_elements_for_com",
					1
				},
				
				{
					"slat_front_normal_hide",
					0
				},
				
				{
					"slat_front_damage_unhide",
					0
				},
				
				{
					"slat_front_damage_hide",
					0
				},
				
				{
					"slat_front_destroyed_unhide",
					0
				},
				
				{
					"slat_front_firegeo_hide",
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
					"slat_left_1_normal_hide",
					0
				},
				
				{
					"slat_left_1_damage_unhide",
					0
				},
				
				{
					"slat_left_1_damage_hide",
					0
				},
				
				{
					"slat_left_1_destroyed_unhide",
					0
				},
				
				{
					"slat_left_1_firegeo_hide",
					0
				},
				
				{
					"slat_left_2_normal_hide",
					0
				},
				
				{
					"slat_left_2_damage_unhide",
					0
				},
				
				{
					"slat_left_2_damage_hide",
					0
				},
				
				{
					"slat_left_2_destroyed_unhide",
					0
				},
				
				{
					"slat_left_2_firegeo_hide",
					0
				},
				
				{
					"slat_left_3_normal_hide",
					0
				},
				
				{
					"slat_left_3_damage_unhide",
					0
				},
				
				{
					"slat_left_3_damage_hide",
					0
				},
				
				{
					"slat_left_3_destroyed_unhide",
					0
				},
				
				{
					"slat_left_3_firegeo_hide",
					0
				},
				
				{
					"slat_right_1_normal_hide",
					0
				},
				
				{
					"slat_right_1_damage_unhide",
					0
				},
				
				{
					"slat_right_1_damage_hide",
					0
				},
				
				{
					"slat_right_1_destroyed_unhide",
					0
				},
				
				{
					"slat_right_1_firegeo_hide",
					0
				},
				
				{
					"slat_right_2_normal_hide",
					0
				},
				
				{
					"slat_right_2_damage_unhide",
					0
				},
				
				{
					"slat_right_2_damage_hide",
					0
				},
				
				{
					"slat_right_2_destroyed_unhide",
					0
				},
				
				{
					"slat_right_2_firegeo_hide",
					0
				},
				
				{
					"slat_right_3_normal_hide",
					0
				},
				
				{
					"slat_right_3_damage_unhide",
					0
				},
				
				{
					"slat_right_3_damage_hide",
					0
				},
				
				{
					"slat_right_3_destroyed_unhide",
					0
				},
				
				{
					"slat_right_3_firegeo_hide",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh2",
				"light_l",
				"light_r",
				"light_r2",
				"light_l2",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.408;
			verticalOffsetWorld=-0.149;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="O_APC_Wheeled_02_rcws_v2_F";
		side=0;
		typicalCargo[]=
		{
			"O_soldier_F"
		};
		textureList[]=
		{
			"Hex",
			1
		};
	};
};
