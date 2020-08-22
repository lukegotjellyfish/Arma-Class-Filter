class CfgPatches
{
	class A3_Boat_F_Beta_SDV_01
	{
		addonRootClass="A3_Boat_F_Beta";
		units[]=
		{
			"B_SDV_01_F",
			"I_SDV_01_F",
			"O_SDV_01_F"
		};
		weapons[]={};
	};
};
class DefaultEventHandlers;
class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class NewTurret;
		class Turrets;
		class EventHandlers;
		class AnimationSources;
		class ViewOptics;
	};
	class SDV_01_base_F: Boat_F
	{
		features="Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: Doors, periscope						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 and 2";
		nameSound="veh_ship_submarine_s";
		_generalMacro="SDV_01_base_F";
		fuelCapacity=120;
		leftEngineEffect="LEngEffectsSmall";
		rightEngineEffect="REngEffectsSmall";
		memoryPointSupply="door_back_axis";
		supplyRadius=10;
		memoryPointTaskMarker="TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		attenuationEffectType="TankAttenuation";
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		ejectDeadDriver=0;
		ejectDeadCargo=0;
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		driverOpticsModel="\A3\weapons_f_beta\reticle\reticle_SDV_driver";
		memoryPointDriverOptics="PIP0_dir";
		driverForceOptics=0;
		enableGPS=1;
		typicalCargo[]=
		{
			"B_diver_F",
			"B_diver_F"
		};
		threat[]={0.1,0.1,0.1};
		armor=30;
		showNVGCargo[]={0};
		showNVGDriver=0;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		precision=10;
		verticalTurnCoef=0.050000001;
		turnCoef=0.5;
		acceleration=15;
		maxSpeed=30;
		waterSpeedFactor=1;
		periscopeDepth=1.2;
		idleRpm=200;
		redRpm=1200;
		thrustDelay=2;
		formationX=15;
		formationZ=15;
		simulation="submarinex";
		overSpeedBrakeCoef=0.80000001;
		enginePower=45;
		engineShiftY=0.40000001;
		waterLeakiness=0;
		waterResistanceCoef=0.015;
		waterLinearDampingCoefX=2;
		waterLinearDampingCoefY=0.80000001;
		waterAngularDampingCoef=1;
		rudderForceCoef=0.2;
		rudderForceCoefAtMaxSpeed=0.050000001;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectBig";
			};
		};
		waterEffectSpeed=25;
		engineEffectSpeed=5;
		leftDustEffect="DustEffectBottom";
		class Turrets: Turrets
		{
			class CommanderTurret: NewTurret
			{
				proxyType="CPCommander";
				commanding=-1;
				ejectDeadGunner=0;
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				usePip=1;
				Laser=1;
				stabilizedInAxes=4;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				startEngine=0;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=-180;
					maxAngleY=180;
					initFov=0.14;
					minFov=0.0175;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={2,3,4};
				};
			};
		};
		extCameraPosition[]={0,1.5,-9};
		class HitPoints
		{
			class HitEngine
			{
				armor=0.5;
				material=10;
				name="engine";
				passThrough=0.2;
			};
			class HitBody
			{
				armor=10;
				material=-1;
				name="karoserie";
				passThrough=1;
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax=0;
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0.5,0.40000001,1};
				class Bones
				{
					class PlaneW
					{
						pos[]={0.4975,0.48800001};
					};
					class Center
					{
						pos[]={0.4975,0.68300003};
					};
					class Limit0109
					{
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Velocity
					{
						source="velocity";
						pos0[]={0.5,0.68300003};
						pos10[]={1.45,1.753};
					};
					class HorizonBankRot
					{
						source="horizonBank";
						min=0.52359998;
						max=-0.52359998;
						minAngle=159.25;
						maxAngle=200.75;
						aspectRatio=1;
					};
					class HorizonBankRotFull
					{
						source="horizonBank";
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Level0
					{
						pos0[]={0.4975,0.5};
						pos10[]={1.4475,1.0700001};
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP55: Level0
					{
						angle=55;
					};
					class LevelM55: Level0
					{
						angle=-55;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP65: Level0
					{
						angle=65;
					};
					class LevelM65: Level0
					{
						angle=-65;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP75: Level0
					{
						angle=75;
					};
					class LevelM75: Level0
					{
						angle=-75;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP85: Level0
					{
						angle=85;
					};
					class LevelM85: Level0
					{
						angle=-85;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.039999999,0,0};
					condition="on";
					class PlaneW
					{
						points[]=
						{
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.0099999998,0},
								1
							},
							
							{
								"PlaneW",
								{0,0.0225263},
								1
							},
							
							{
								"PlaneW",
								{0.0099999998,0},
								1
							},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							{},
							
							{
								"PlaneW",
								{-0.185,0},
								1
							},
							
							{
								"PlaneW",
								{-0.26499999,0},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.185,0},
								1
							},
							
							{
								"PlaneW",
								{0.26499999,0},
								1
							}
						};
					};
					class Static
					{
						points[]={};
					};
					class Horizont
					{
						clipTL[]={0,0.15000001};
						clipBR[]={1,0.85000002};
						class Dimmed
						{
							class Level0
							{
								points[]=
								{
									
									{
										"Level0",
										{0.1,0},
										1
									},
									
									{
										"Level0",
										{-0.1,0},
										1
									},
									{}
								};
							};
							class LevelM5: Level0
							{
								points[]=
								{
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{0.1,0},
										1
									}
								};
							};
							class LevelP5: Level0
							{
								points[]=
								{
									
									{
										"LevelP5",
										{-0.1,0},
										1
									},
									
									{
										"LevelP5",
										{0.1,0},
										1
									}
								};
							};
							class LevelM10: Level0
							{
								points[]=
								{
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									}
								};
							};
							class LevelP10: Level0
							{
								points[]=
								{
									
									{
										"LevelP10",
										{-0.1,0},
										1
									},
									
									{
										"LevelP10",
										{0.1,0},
										1
									}
								};
							};
							class LevelM15: Level0
							{
								points[]=
								{
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{0.1,0},
										1
									}
								};
							};
							class LevelP15: Level0
							{
								points[]=
								{
									
									{
										"LevelP15",
										{-0.1,0},
										1
									},
									
									{
										"LevelP15",
										{0.1,0},
										1
									}
								};
							};
							class LevelM20: Level0
							{
								points[]=
								{
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									}
								};
							};
							class LevelP20: Level0
							{
								points[]=
								{
									
									{
										"LevelP20",
										{-0.1,0},
										1
									},
									
									{
										"LevelP20",
										{0.1,0},
										1
									}
								};
							};
							class LevelM25: Level0
							{
								points[]=
								{
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{0.1,0},
										1
									}
								};
							};
							class LevelP25: Level0
							{
								points[]=
								{
									
									{
										"LevelP25",
										{-0.1,0},
										1
									},
									
									{
										"LevelP25",
										{0.1,0},
										1
									}
								};
							};
							class LevelM30: Level0
							{
								points[]=
								{
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									}
								};
							};
							class LevelP30: Level0
							{
								points[]=
								{
									
									{
										"LevelP30",
										{-0.1,0},
										1
									},
									
									{
										"LevelP30",
										{0.1,0},
										1
									}
								};
							};
							class LevelM35: Level0
							{
								points[]=
								{
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{0.1,0},
										1
									}
								};
							};
							class LevelP35: Level0
							{
								points[]=
								{
									
									{
										"LevelP35",
										{-0.1,0},
										1
									},
									
									{
										"LevelP35",
										{0.1,0},
										1
									}
								};
							};
							class LevelM40: Level0
							{
								points[]=
								{
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									}
								};
							};
							class LevelP40: Level0
							{
								points[]=
								{
									
									{
										"LevelP40",
										{-0.1,0},
										1
									},
									
									{
										"LevelP40",
										{0.1,0},
										1
									}
								};
							};
							class LevelM45: Level0
							{
								points[]=
								{
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{0.1,0},
										1
									}
								};
							};
							class LevelP45: Level0
							{
								points[]=
								{
									
									{
										"LevelP45",
										{-0.1,0},
										1
									},
									
									{
										"LevelP45",
										{0.1,0},
										1
									}
								};
							};
							class LevelM50: Level0
							{
								points[]=
								{
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									}
								};
							};
							class LevelP50: Level0
							{
								points[]=
								{
									
									{
										"LevelP50",
										{-0.1,0},
										1
									},
									
									{
										"LevelP50",
										{0.1,0},
										1
									}
								};
							};
							class LevelM55: Level0
							{
								points[]=
								{
									
									{
										"LevelM55",
										{-0.1,0},
										1
									},
									
									{
										"LevelM55",
										{0.1,0},
										1
									}
								};
							};
							class LevelP55: Level0
							{
								points[]=
								{
									
									{
										"LevelP55",
										{-0.1,0},
										1
									},
									
									{
										"LevelP55",
										{0.1,0},
										1
									}
								};
							};
							class LevelM60: Level0
							{
								points[]=
								{
									
									{
										"LevelM60",
										{-0.1,0},
										1
									},
									
									{
										"LevelM60",
										{0.1,0},
										1
									}
								};
							};
							class LevelP60: Level0
							{
								points[]=
								{
									
									{
										"LevelP60",
										{-0.1,0},
										1
									},
									
									{
										"LevelP60",
										{0.1,0},
										1
									}
								};
							};
							class LevelM65: Level0
							{
								points[]=
								{
									
									{
										"LevelM65",
										{-0.1,0},
										1
									},
									
									{
										"LevelM65",
										{0.1,0},
										1
									}
								};
							};
							class LevelP65: Level0
							{
								points[]=
								{
									
									{
										"LevelP65",
										{-0.1,0},
										1
									},
									
									{
										"LevelP65",
										{0.1,0},
										1
									}
								};
							};
							class LevelM70: Level0
							{
								points[]=
								{
									
									{
										"LevelM70",
										{-0.1,0},
										1
									},
									
									{
										"LevelM70",
										{0.1,0},
										1
									}
								};
							};
							class LevelP70: Level0
							{
								points[]=
								{
									
									{
										"LevelP70",
										{-0.1,0},
										1
									},
									
									{
										"LevelP70",
										{0.1,0},
										1
									}
								};
							};
							class LevelM75: Level0
							{
								points[]=
								{
									
									{
										"LevelM75",
										{-0.1,0},
										1
									},
									
									{
										"LevelM75",
										{0.1,0},
										1
									}
								};
							};
							class LevelP75: Level0
							{
								points[]=
								{
									
									{
										"LevelP75",
										{-0.1,0},
										1
									},
									
									{
										"LevelP75",
										{0.1,0},
										1
									}
								};
							};
							class LevelM80: Level0
							{
								points[]=
								{
									
									{
										"LevelM80",
										{-0.1,0},
										1
									},
									
									{
										"LevelM80",
										{0.1,0},
										1
									}
								};
							};
							class LevelP80: Level0
							{
								points[]=
								{
									
									{
										"LevelP80",
										{-0.1,0},
										1
									},
									
									{
										"LevelP80",
										{0.1,0},
										1
									}
								};
							};
							class LevelM85: Level0
							{
								points[]=
								{
									
									{
										"LevelM85",
										{-0.1,0},
										1
									},
									
									{
										"LevelM85",
										{0.1,0},
										1
									}
								};
							};
							class LevelP85: Level0
							{
								points[]=
								{
									
									{
										"LevelP85",
										{-0.1,0},
										1
									},
									
									{
										"LevelP85",
										{0.1,0},
										1
									}
								};
							};
							class LevelM90: Level0
							{
								points[]=
								{
									
									{
										"LevelM90",
										{-0.1,0},
										1
									},
									
									{
										"LevelM90",
										{0.1,0},
										1
									}
								};
							};
							class LevelP90: Level0
							{
								points[]=
								{
									
									{
										"LevelP90",
										{-0.1,0},
										1
									},
									
									{
										"LevelP90",
										{0.1,0},
										1
									}
								};
							};
						};
					};
					class AltNumberASL
					{
						class Box
						{
							points[]=
							{
								
								{
									{0.75999999,0.50627899},
									1
								},
								
								{
									{0.83999997,0.50627899},
									1
								},
								
								{
									{0.83999997,0.466858},
									1
								},
								
								{
									{0.75999999,0.466858},
									1
								},
								
								{
									{0.75999999,0.50627899},
									1
								}
							};
						};
						class AltNumber
						{
							source="horizonDive";
							sourceScale=10;
							sourceLength=2;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.82999998,0.466858},
								1
							};
							right[]=
							{
								{0.88999999,0.466858},
								1
							};
							down[]=
							{
								{0.82999998,0.50627899},
								1
							};
						};
					};
				};
				topLeft="HUD_1_top_left";
				topRight="HUD_1_top_right";
				bottomLeft="HUD_1_bottom_left";
			};
			class HUD_Right: AirplaneHUD
			{
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0.5,0.40000001,1};
				class Bones
				{
					class PlaneW
					{
						pos[]={0.4975,0.48800001};
					};
					class Center
					{
						pos[]={0.4975,0.68300003};
					};
					class Limit0109
					{
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Velocity
					{
						source="velocity";
						pos0[]={0.5,0.68300003};
						pos10[]={1.45,1.753};
					};
					class HorizonBankRot
					{
						source="horizonBank";
						min=0.52359998;
						max=-0.52359998;
						minAngle=159.25;
						maxAngle=200.75;
						aspectRatio=1;
					};
					class HorizonBankRotFull
					{
						source="horizonBank";
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Level0
					{
						pos0[]={0.4975,0.5};
						pos10[]={1.4475,1.0700001};
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP55: Level0
					{
						angle=55;
					};
					class LevelM55: Level0
					{
						angle=-55;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP65: Level0
					{
						angle=65;
					};
					class LevelM65: Level0
					{
						angle=-65;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP75: Level0
					{
						angle=75;
					};
					class LevelM75: Level0
					{
						angle=-75;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP85: Level0
					{
						angle=85;
					};
					class LevelM85: Level0
					{
						angle=-85;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.039999999,0,0};
					condition="on";
					class PlaneW
					{
						points[]=
						{
							
							{
								"PlaneW",
								{-0.029999999,0},
								1
							},
							
							{
								"PlaneW",
								{-0.0099999998,0},
								1
							},
							
							{
								"PlaneW",
								{0,0.0225263},
								1
							},
							
							{
								"PlaneW",
								{0.0099999998,0},
								1
							},
							
							{
								"PlaneW",
								{0.029999999,0},
								1
							},
							{},
							
							{
								"PlaneW",
								{-0.185,0},
								1
							},
							
							{
								"PlaneW",
								{-0.26499999,0},
								1
							},
							{},
							
							{
								"PlaneW",
								{0.185,0},
								1
							},
							
							{
								"PlaneW",
								{0.26499999,0},
								1
							}
						};
					};
					class Static
					{
						points[]={};
					};
					class Horizont
					{
						clipTL[]={0,0.15000001};
						clipBR[]={1,0.85000002};
						class Dimmed
						{
							class Level0
							{
								points[]=
								{
									
									{
										"Level0",
										{0.1,0},
										1
									},
									
									{
										"Level0",
										{-0.1,0},
										1
									},
									{}
								};
							};
							class LevelM5: Level0
							{
								points[]=
								{
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{0.1,0},
										1
									}
								};
							};
							class LevelP5: Level0
							{
								points[]=
								{
									
									{
										"LevelP5",
										{-0.1,0},
										1
									},
									
									{
										"LevelP5",
										{0.1,0},
										1
									}
								};
							};
							class LevelM10: Level0
							{
								points[]=
								{
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{0.1,0},
										1
									}
								};
							};
							class LevelP10: Level0
							{
								points[]=
								{
									
									{
										"LevelP10",
										{-0.1,0},
										1
									},
									
									{
										"LevelP10",
										{0.1,0},
										1
									}
								};
							};
							class LevelM15: Level0
							{
								points[]=
								{
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{0.1,0},
										1
									}
								};
							};
							class LevelP15: Level0
							{
								points[]=
								{
									
									{
										"LevelP15",
										{-0.1,0},
										1
									},
									
									{
										"LevelP15",
										{0.1,0},
										1
									}
								};
							};
							class LevelM20: Level0
							{
								points[]=
								{
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{0.1,0},
										1
									}
								};
							};
							class LevelP20: Level0
							{
								points[]=
								{
									
									{
										"LevelP20",
										{-0.1,0},
										1
									},
									
									{
										"LevelP20",
										{0.1,0},
										1
									}
								};
							};
							class LevelM25: Level0
							{
								points[]=
								{
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{0.1,0},
										1
									}
								};
							};
							class LevelP25: Level0
							{
								points[]=
								{
									
									{
										"LevelP25",
										{-0.1,0},
										1
									},
									
									{
										"LevelP25",
										{0.1,0},
										1
									}
								};
							};
							class LevelM30: Level0
							{
								points[]=
								{
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{0.1,0},
										1
									}
								};
							};
							class LevelP30: Level0
							{
								points[]=
								{
									
									{
										"LevelP30",
										{-0.1,0},
										1
									},
									
									{
										"LevelP30",
										{0.1,0},
										1
									}
								};
							};
							class LevelM35: Level0
							{
								points[]=
								{
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{0.1,0},
										1
									}
								};
							};
							class LevelP35: Level0
							{
								points[]=
								{
									
									{
										"LevelP35",
										{-0.1,0},
										1
									},
									
									{
										"LevelP35",
										{0.1,0},
										1
									}
								};
							};
							class LevelM40: Level0
							{
								points[]=
								{
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{0.1,0},
										1
									}
								};
							};
							class LevelP40: Level0
							{
								points[]=
								{
									
									{
										"LevelP40",
										{-0.1,0},
										1
									},
									
									{
										"LevelP40",
										{0.1,0},
										1
									}
								};
							};
							class LevelM45: Level0
							{
								points[]=
								{
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{0.1,0},
										1
									}
								};
							};
							class LevelP45: Level0
							{
								points[]=
								{
									
									{
										"LevelP45",
										{-0.1,0},
										1
									},
									
									{
										"LevelP45",
										{0.1,0},
										1
									}
								};
							};
							class LevelM50: Level0
							{
								points[]=
								{
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{0.1,0},
										1
									}
								};
							};
							class LevelP50: Level0
							{
								points[]=
								{
									
									{
										"LevelP50",
										{-0.1,0},
										1
									},
									
									{
										"LevelP50",
										{0.1,0},
										1
									}
								};
							};
							class LevelM55: Level0
							{
								points[]=
								{
									
									{
										"LevelM55",
										{-0.1,0},
										1
									},
									
									{
										"LevelM55",
										{0.1,0},
										1
									}
								};
							};
							class LevelP55: Level0
							{
								points[]=
								{
									
									{
										"LevelP55",
										{-0.1,0},
										1
									},
									
									{
										"LevelP55",
										{0.1,0},
										1
									}
								};
							};
							class LevelM60: Level0
							{
								points[]=
								{
									
									{
										"LevelM60",
										{-0.1,0},
										1
									},
									
									{
										"LevelM60",
										{0.1,0},
										1
									}
								};
							};
							class LevelP60: Level0
							{
								points[]=
								{
									
									{
										"LevelP60",
										{-0.1,0},
										1
									},
									
									{
										"LevelP60",
										{0.1,0},
										1
									}
								};
							};
							class LevelM65: Level0
							{
								points[]=
								{
									
									{
										"LevelM65",
										{-0.1,0},
										1
									},
									
									{
										"LevelM65",
										{0.1,0},
										1
									}
								};
							};
							class LevelP65: Level0
							{
								points[]=
								{
									
									{
										"LevelP65",
										{-0.1,0},
										1
									},
									
									{
										"LevelP65",
										{0.1,0},
										1
									}
								};
							};
							class LevelM70: Level0
							{
								points[]=
								{
									
									{
										"LevelM70",
										{-0.1,0},
										1
									},
									
									{
										"LevelM70",
										{0.1,0},
										1
									}
								};
							};
							class LevelP70: Level0
							{
								points[]=
								{
									
									{
										"LevelP70",
										{-0.1,0},
										1
									},
									
									{
										"LevelP70",
										{0.1,0},
										1
									}
								};
							};
							class LevelM75: Level0
							{
								points[]=
								{
									
									{
										"LevelM75",
										{-0.1,0},
										1
									},
									
									{
										"LevelM75",
										{0.1,0},
										1
									}
								};
							};
							class LevelP75: Level0
							{
								points[]=
								{
									
									{
										"LevelP75",
										{-0.1,0},
										1
									},
									
									{
										"LevelP75",
										{0.1,0},
										1
									}
								};
							};
							class LevelM80: Level0
							{
								points[]=
								{
									
									{
										"LevelM80",
										{-0.1,0},
										1
									},
									
									{
										"LevelM80",
										{0.1,0},
										1
									}
								};
							};
							class LevelP80: Level0
							{
								points[]=
								{
									
									{
										"LevelP80",
										{-0.1,0},
										1
									},
									
									{
										"LevelP80",
										{0.1,0},
										1
									}
								};
							};
							class LevelM85: Level0
							{
								points[]=
								{
									
									{
										"LevelM85",
										{-0.1,0},
										1
									},
									
									{
										"LevelM85",
										{0.1,0},
										1
									}
								};
							};
							class LevelP85: Level0
							{
								points[]=
								{
									
									{
										"LevelP85",
										{-0.1,0},
										1
									},
									
									{
										"LevelP85",
										{0.1,0},
										1
									}
								};
							};
							class LevelM90: Level0
							{
								points[]=
								{
									
									{
										"LevelM90",
										{-0.1,0},
										1
									},
									
									{
										"LevelM90",
										{0.1,0},
										1
									}
								};
							};
							class LevelP90: Level0
							{
								points[]=
								{
									
									{
										"LevelP90",
										{-0.1,0},
										1
									},
									
									{
										"LevelP90",
										{0.1,0},
										1
									}
								};
							};
						};
					};
					class AltNumberASL
					{
						class Box
						{
							points[]=
							{
								
								{
									{0.75999999,0.50627899},
									1
								},
								
								{
									{0.83999997,0.50627899},
									1
								},
								
								{
									{0.83999997,0.466858},
									1
								},
								
								{
									{0.75999999,0.466858},
									1
								},
								
								{
									{0.75999999,0.50627899},
									1
								}
							};
						};
						class AltNumber
						{
							source="horizonDive";
							sourceScale=10;
							sourceLength=2;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.82999998,0.466858},
								1
							};
							right[]=
							{
								{0.88999999,0.466858},
								1
							};
							down[]=
							{
								{0.82999998,0.50627899},
								1
							};
						};
					};
				};
				topLeft="HUD_2_top_left";
				topRight="HUD_2_top_right";
				bottomLeft="HUD_2_bottom_left";
			};
		};
		class Damage;  //found empty after stripping
	};
	class B_SDV_01_F: SDV_01_base_F
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"drivingwheel",
					0
				},
				
				{
					"hidescope",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"vrtule",
					0
				},
				
				{
					"steering",
					0
				},
				
				{
					"hidedrivingwheel",
					0
				},
				
				{
					"damagehidedrivingwheel",
					0
				},
				
				{
					"elevating",
					0
				},
				
				{
					"drivingwheel_elev",
					0
				},
				
				{
					"hidedrivingwheel_elev",
					0
				},
				
				{
					"damagehidedrivingwheel_elev",
					0
				},
				
				{
					"elevatingflapfl",
					0
				},
				
				{
					"elevatingflapfr",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"hideobsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"antenna",
					0
				},
				
				{
					"damagehideantenna",
					0
				},
				
				{
					"door_1_1",
					1
				},
				
				{
					"hidedoor_1_1",
					0
				},
				
				{
					"damagehidedoor_1_1",
					0
				},
				
				{
					"door_1_2",
					1
				},
				
				{
					"hidedoor_1_2",
					0
				},
				
				{
					"damagehidedoor_1_2",
					0
				},
				
				{
					"door_2_1",
					1
				},
				
				{
					"hidedoor_2_1",
					0
				},
				
				{
					"damagehidedoor_2_1",
					0
				},
				
				{
					"door_2_2",
					1
				},
				
				{
					"hidedoor_2_2",
					0
				},
				
				{
					"damagehidedoor_2_2",
					0
				},
				
				{
					"gauges",
					0
				},
				
				{
					"indicatorcompass_1",
					0
				},
				
				{
					"indicatorcompass_2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"display_on_r",
					0
				},
				
				{
					"ind_alt_1_10m",
					-0.80000001
				},
				
				{
					"ind_alt_1_100m",
					-0.80000001
				},
				
				{
					"ind_alt_2_10m",
					-0.80000001
				},
				
				{
					"ind_alt_2_100m",
					-0.80000001
				},
				
				{
					"ind_horizondive_1",
					0
				},
				
				{
					"horizondive_1",
					0
				},
				
				{
					"ind_horizondive_2",
					0
				},
				
				{
					"ind_horizonbank_1",
					-0.0099999998
				},
				
				{
					"ind_horizonbank_2",
					-0.0099999998
				},
				
				{
					"ind_rpm",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"l svetlo",
				"p svetlo",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.874;
			verticalOffsetWorld=-0.80599999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="B_SDV_01_F";
		side=1;
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
	};
	class O_SDV_01_F: SDV_01_base_F
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"drivingwheel",
					0
				},
				
				{
					"hidescope",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"vrtule",
					0
				},
				
				{
					"steering",
					0
				},
				
				{
					"hidedrivingwheel",
					0
				},
				
				{
					"damagehidedrivingwheel",
					0
				},
				
				{
					"elevating",
					0
				},
				
				{
					"drivingwheel_elev",
					0
				},
				
				{
					"hidedrivingwheel_elev",
					0
				},
				
				{
					"damagehidedrivingwheel_elev",
					0
				},
				
				{
					"elevatingflapfl",
					0
				},
				
				{
					"elevatingflapfr",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"hideobsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"antenna",
					0
				},
				
				{
					"damagehideantenna",
					0
				},
				
				{
					"door_1_1",
					1
				},
				
				{
					"hidedoor_1_1",
					0
				},
				
				{
					"damagehidedoor_1_1",
					0
				},
				
				{
					"door_1_2",
					1
				},
				
				{
					"hidedoor_1_2",
					0
				},
				
				{
					"damagehidedoor_1_2",
					0
				},
				
				{
					"door_2_1",
					1
				},
				
				{
					"hidedoor_2_1",
					0
				},
				
				{
					"damagehidedoor_2_1",
					0
				},
				
				{
					"door_2_2",
					1
				},
				
				{
					"hidedoor_2_2",
					0
				},
				
				{
					"damagehidedoor_2_2",
					0
				},
				
				{
					"gauges",
					0
				},
				
				{
					"indicatorcompass_1",
					0
				},
				
				{
					"indicatorcompass_2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"display_on_r",
					0
				},
				
				{
					"ind_alt_1_10m",
					-0.81
				},
				
				{
					"ind_alt_1_100m",
					-0.81
				},
				
				{
					"ind_alt_2_10m",
					-0.81
				},
				
				{
					"ind_alt_2_100m",
					-0.81
				},
				
				{
					"ind_horizondive_1",
					0
				},
				
				{
					"horizondive_1",
					0
				},
				
				{
					"ind_horizondive_2",
					0
				},
				
				{
					"ind_horizonbank_1",
					-0.0099999998
				},
				
				{
					"ind_horizonbank_2",
					-0.0099999998
				},
				
				{
					"ind_rpm",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"l svetlo",
				"p svetlo",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.874;
			verticalOffsetWorld=-0.80699998;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="O_SDV_01_F";
		side=0;
		typicalCargo[]=
		{
			"O_Soldier_F",
			"O_Soldier_F"
		};
	};
	class I_SDV_01_F: SDV_01_base_F
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"drivingwheel",
					0
				},
				
				{
					"hidescope",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"vrtule",
					0
				},
				
				{
					"steering",
					0
				},
				
				{
					"hidedrivingwheel",
					0
				},
				
				{
					"damagehidedrivingwheel",
					0
				},
				
				{
					"elevating",
					0
				},
				
				{
					"drivingwheel_elev",
					0
				},
				
				{
					"hidedrivingwheel_elev",
					0
				},
				
				{
					"damagehidedrivingwheel_elev",
					0
				},
				
				{
					"elevatingflapfl",
					0
				},
				
				{
					"elevatingflapfr",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"hideobsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"antenna",
					0
				},
				
				{
					"damagehideantenna",
					0
				},
				
				{
					"door_1_1",
					1
				},
				
				{
					"hidedoor_1_1",
					0
				},
				
				{
					"damagehidedoor_1_1",
					0
				},
				
				{
					"door_1_2",
					1
				},
				
				{
					"hidedoor_1_2",
					0
				},
				
				{
					"damagehidedoor_1_2",
					0
				},
				
				{
					"door_2_1",
					1
				},
				
				{
					"hidedoor_2_1",
					0
				},
				
				{
					"damagehidedoor_2_1",
					0
				},
				
				{
					"door_2_2",
					1
				},
				
				{
					"hidedoor_2_2",
					0
				},
				
				{
					"damagehidedoor_2_2",
					0
				},
				
				{
					"gauges",
					0
				},
				
				{
					"indicatorcompass_1",
					0
				},
				
				{
					"indicatorcompass_2",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"display_on_r",
					0
				},
				
				{
					"ind_alt_1_10m",
					-0.81
				},
				
				{
					"ind_alt_1_100m",
					-0.81
				},
				
				{
					"ind_alt_2_10m",
					-0.81
				},
				
				{
					"ind_alt_2_100m",
					-0.81
				},
				
				{
					"ind_horizondive_1",
					0
				},
				
				{
					"horizondive_1",
					0
				},
				
				{
					"ind_horizondive_2",
					0
				},
				
				{
					"ind_horizonbank_1",
					-0.0099999998
				},
				
				{
					"ind_horizonbank_2",
					-0.0099999998
				},
				
				{
					"ind_rpm",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"l svetlo",
				"p svetlo",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.874;
			verticalOffsetWorld=-0.80599999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="I_SDV_01_F";
		side=2;
		typicalCargo[]=
		{
			"I_soldier_F",
			"I_soldier_F"
		};
	};
};
