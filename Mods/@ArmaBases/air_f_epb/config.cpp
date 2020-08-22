class CfgPatches
{
	class A3_Air_F_EPB_Heli_Light_03
	{
		addonRootClass="A3_Air_F_EPB";
		units[]=
		{
			"I_Heli_light_03_dynamicLoadout_F",
			"I_Heli_light_03_F",
			"I_Heli_light_03_unarmed_F"
		};
		weapons[]={};
	};
};
class DefaultEventHandlers;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewPilot;
		class ViewOptics;
		class Components;
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		features="Randomization: No 						<br />Camo selections: 1 - the whole exterior 						<br />Script door sources: None 						<br />Script animations:  None 						<br />Executed scripts: None 						<br />Firing from vehicles: Positions 1, 2 (doors) 						<br />Slingload: Slingloads up to 2000 kg 						<br />Cargo proxy indexes: 1 to 6";
		_generalMacro="Heli_light_03_base_F";
		displayname="$STR_A3_CfgVehicles_I_Heli_light_03_F0";
		icon="\A3\Air_F_EPB\Heli_Light_03\data\UI\Map_Heli_Light_03_CA.paa";
		precisegetinout=1;
		getInRadius=2;
		hideWeaponsDriver=1;
		hideWeaponsGunner=1;
		hideWeaponsCargo=1;
		cargoCompartments[]=
		{
			"Compartment2"
		};
		memoryPointTaskMarker="TaskMarker_1_pos";
		driveOnComponent[]=
		{
			"Skids"
		};
		maximumLoad=2000;
		class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_EPB\Heli_Light_03\RTD_Heli_Light_03.xml";
			defaultCollective=0.69999999;
			autoHoverCorrection[]={4,3.3,0};
			maxTorque=2700;
			stressDamagePerSec=0.0033333332;
			retreatBladeStallWarningSpeed=87.5;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=110000;
			maxTailRotorStress=25000;
		};
		fuelCapacity=742;
		fuelConsumptionRate=0.103;
		slingLoadMaxCargoMass=2000;
		attenuationEffectType="OpenHeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
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
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			150
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1.7782794,
			1,
			200
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1.7782794,
			1,
			200
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			300
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			200
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		gearUpExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_IN",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Armory
		{
			description="$STR_A3_CfgVehicles_I_Heli_light_03_F_Armory0";
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=999;
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=1.5;
			};
			class HitEngine1
			{
				armor=1;
				radius=0.25;
				name="engine_1_hit";
				explosionShielding=3;
				minimalHit=0.1;
				passThrough=1;
				convexComponent="engine_1_hit";
				material=51;
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine
			{
				armor=999;
				radius=0.050000001;
				minimalHit=1;
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.44999999;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.5;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
			class HitGlass1
			{
				name="glass1";
				radius=0.37;
				armor=1;
				explosionShielding=2;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass2
			{
				name="glass2";
				radius=0.37;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass3
			{
				name="glass3";
				radius=0.25;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass4
			{
				name="glass4";
				radius=0.25;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass5
			{
				name="glass5";
				radius=0.34;
				armor=1;
				explosionShielding=2;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass6
			{
				name="glass6";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass7
			{
				name="glass7";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass8
			{
				name="glass8";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass9
			{
				name="glass9";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
			};
			class HitGlass10
			{
				name="glass10";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustEffectHeli";
			};
		};
		availableForSupportTypes[]=
		{
			"CAS_Heli",
			"Transport"
		};
		enableManualFire=0;
		maxSpeed=293;
		accuracy=1.5;
		cost=700000;
		armor=40;
		damageResistance=0.0055499999;
		irScanRangeMin=0;
		irScanRangeMax=0;
		irScanToEyeFactor=1;
		MainRotorSpeed=-0.5;
		backRotorSpeed=3;
		mainBladeRadius=6.1999998;
		tailBladeRadius=1.2;
		maxFordingDepth=0.69999999;
		defaultUserMFDvalues[]={0,1,0.30000001,1};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.025,0.025,0.1};
				helmetRight[]={0.050000001,0,0};
				helmetDown[]={0,-0.050000001,0};
				class Bones
				{
					class PlaneW
					{
						pos[]={0.5,0.57200003};
					};
					class WeaponAim
					{
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.847,0.84500003};
					};
					class ForwardVector
					{
						source="forward";
						pos0[]={0,0};
						pos10[]={0.347,0.345};
					};
					class VelocityVector
					{
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.847,0.84500003};
					};
					class HorizonVector
					{
						pos0[]={0.5,0.57200003};
						pos10[]={0.99072701,1.0599};
						angle=0;
					};
					class VerticalSpeedBone
					{
						source="vspeed";
						sourceScale=1;
						min=-15;
						max=15;
						minPos[]={0,-0.090000004};
						maxPos[]={0,0.090000004};
					};
				};
				class Draw
				{
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="on";
					class Static
					{
						width=4;
						points[]=
						{
							
							{
								{0.5,0.115},
								1
							},
							
							{
								{0.5,0.13500001},
								1
							},
							{},
							
							{
								{0.81,0.5},
								1
							},
							
							{
								{0.82999998,0.5},
								1
							}
						};
					};
					class VelocityLine
					{
						width=4;
						points[]=
						{
							
							{
								"PlaneW",
								1
							},
							
							{
								"VelocityVector",
								1
							}
						};
					};
					class CollectiveGroup
					{
						condition="simulRTD";
						class CollectiveText
						{
							source="static";
							align="right";
							scale=1;
							pos[]=
							{
								{0.2,0.2},
								1
							};
							right[]=
							{
								{0.25999999,0.2},
								1
							};
							down[]=
							{
								{0.2,0.25},
								1
							};
						};
						class CollectiveNumber
						{
							source="rtdCollective";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.2,0.2},
								1
							};
							right[]=
							{
								{0.25999999,0.2},
								1
							};
							down[]=
							{
								{0.2,0.25},
								1
							};
						};
					};
					class SpeedNumber
					{
						source="speed";
						sourceScale=3.5999999;
						align="right";
						scale=1;
						pos[]=
						{
							{0.2,0.47499999},
							1
						};
						right[]=
						{
							{0.25999999,0.47499999},
							1
						};
						down[]=
						{
							{0.2,0.52499998},
							1
						};
					};
					class AltNumber
					{
						source="altitudeAGL";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.80000001,0.47499999},
							1
						};
						right[]=
						{
							{0.86000001,0.47499999},
							1
						};
						down[]=
						{
							{0.80000001,0.52499998},
							1
						};
					};
					class Weapons
					{
						source="weapon";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0,0.89999998},
							1
						};
						right[]=
						{
							{0.059999999,0.89999998},
							1
						};
						down[]=
						{
							{0,0.94999999},
							1
						};
					};
					class Ammo
					{
						source="ammo";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.64999998},
							1
						};
						right[]=
						{
							{0.56,0.64999998},
							1
						};
						down[]=
						{
							{0.5,0.69999999},
							1
						};
					};
					class AltScale
					{
						horizontal=0;
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						width=4;
						top=0.69999999;
						bottom=0.25;
						lineXleft=0.83499998;
						lineYright=0.84500003;
						lineXleftMajor=0.83499998;
						lineYrightMajor=0.85500002;
						majorLineEach=5;
						numberEach=5;
						step=20;
						stepSize=0.029999999;
						align="right";
						scale=1;
						pos[]={0.87,0.67500001};
						right[]={0.93000001,0.67500001};
						down[]={0.87,0.72500002};
					};
					class VerticalSpeedScale
					{
						width=4;
						points[]=
						{
							
							{
								"VerticalSpeedBone",
								{0.86000001,0.83999997},
								1
							},
							
							{
								"VerticalSpeedBone",
								{0.87,0.85000002},
								1
							},
							
							{
								"VerticalSpeedBone",
								{0.86000001,0.86000001},
								1
							},
							{},
							
							{
								{0.88499999,0.75999999},
								1
							},
							
							{
								{0.89499998,0.75999999},
								1
							},
							{},
							
							{
								{0.88499999,0.79000002},
								1
							},
							
							{
								{0.89499998,0.79000002},
								1
							},
							{},
							
							{
								{0.88499999,0.81999999},
								1
							},
							
							{
								{0.89499998,0.81999999},
								1
							},
							{},
							
							{
								{0.88499999,0.85000002},
								1
							},
							
							{
								{0.90499997,0.85000002},
								1
							},
							{},
							
							{
								{0.88499999,0.88},
								1
							},
							
							{
								{0.89499998,0.88},
								1
							},
							{},
							
							{
								{0.88499999,0.91000003},
								1
							},
							
							{
								{0.89499998,0.91000003},
								1
							},
							{},
							
							{
								{0.88499999,0.94},
								1
							},
							
							{
								{0.89499998,0.94},
								1
							}
						};
					};
					class VspeedNumberStaticP15
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.91000003,0.73000002},
							1
						};
						right[]=
						{
							{0.97000003,0.73000002},
							1
						};
						down[]=
						{
							{0.91000003,0.77999997},
							1
						};
					};
					class VspeedNumberStaticM15
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.91000003,0.91000003},
							1
						};
						right[]=
						{
							{0.97000003,0.91000003},
							1
						};
						down[]=
						{
							{0.91000003,0.95999998},
							1
						};
					};
					class HeadingScale
					{
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=4;
						top=0.30000001;
						bottom=0.69999999;
						lineXleft=0.11;
						lineYright=0.1;
						lineXleftMajor=0.11;
						lineYrightMajor=0.090000004;
						majorLineEach=3;
						numberEach=3;
						step=10;
						stepSize=0.039999999;
						align="center";
						scale=1;
						pos[]={0.30000001,0.039999999};
						right[]={0.36000001,0.039999999};
						down[]={0.30000001,0.090000004};
					};
					class HorizontalLine
					{
						clipTL[]={0.2,0.12};
						clipBR[]={0.80000001,0.95999998};
						class HorizontalLineDraw
						{
							width=4;
							points[]=
							{
								
								{
									"HorizonVector",
									{-0.22499999,0},
									1
								},
								
								{
									"HorizonVector",
									{-0.1875,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{-0.15000001,0},
									1
								},
								
								{
									"HorizonVector",
									{-0.1125,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{-0.075000003,0},
									1
								},
								
								{
									"HorizonVector",
									{-0.037500001,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{0.037500001,0},
									1
								},
								
								{
									"HorizonVector",
									{0.075000003,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{0.1125,0},
									1
								},
								
								{
									"HorizonVector",
									{0.15000001,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{0.1875,0},
									1
								},
								
								{
									"HorizonVector",
									{0.22499999,0},
									1
								}
							};
						};
					};
					class MGun
					{
						condition="on";
						class Circle
						{
							width=4;
							points[]=
							{
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.050000001,0},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.025,0},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0,0.049711801},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0,0.024855901},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.050000001,0},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.025,0},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0,-0.049711801},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0,-0.024855901},
									1
								}
							};
						};
					};
					class Rockets
					{
						condition="missile";
						class Circle
						{
							width=4;
							points[]=
							{
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.25,-0.25},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.25,-0.2},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.25,0.25},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.25,0.2},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.25,-0.25},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.25,-0.2},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.25,0.25},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.25,0.2},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.25,-0.25},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.2,-0.25},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.25,0.25},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.2,0.25},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.25,-0.25},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.2,-0.25},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.25,0.25},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.2,0.25},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.035,0.034798302},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.017999999,0.0178963},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.035,0.034798302},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.017999999,0.0178963},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.035,-0.034798302},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{-0.017999999,-0.0178963},
									1
								},
								{},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.035,-0.034798302},
									1
								},
								
								{
									"ForwardVector",
									1,
									"WeaponAim",
									{0.017999999,-0.0178963},
									1
								}
							};
						};
					};
				};
			};
			class MFD_Pilot_10
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="LucidaConsoleB";
				turret[]={0};
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=1;
					color[]={0.25,1,0.25};
					condition="on";
					class ReticleGroup
					{
						color[]={1,1,1};
						class Reticle
						{
							width=4;
							points[]=
							{
								
								{
									{0.491429,0.452766},
									1
								},
								
								{
									{0.495,0.452766},
									1
								},
								
								{
									{0.495,0.457802},
									1
								},
								
								{
									{0.491429,0.457802},
									1
								},
								
								{
									{0.491429,0.452766},
									1
								},
								{},
								
								{
									{0.499286,0.45578799},
									1
								},
								
								{
									{0.57714301,0.45578799},
									1
								},
								{},
								
								{
									{0.49285701,0.46283901},
									1
								},
								
								{
									{0.49285701,0.55752701},
									1
								},
								{},
								
								{
									{0.48857099,0.45578799},
									1
								},
								
								{
									{0.41,0.45578799},
									1
								},
								{},
								
								{
									{0.49285701,0.35404801},
									1
								},
								
								{
									{0.49285701,0.446722},
									1
								},
								{},
								
								{
									{0.61000001,0.29965201},
									1
								},
								
								{
									{0.64285702,0.29965201},
									1
								},
								
								{
									{0.64285702,0.342967},
									1
								},
								{},
								
								{
									{0.64285702,0.57565898},
									1
								},
								
								{
									{0.64285702,0.619982},
									1
								},
								
								{
									{0.61071402,0.619982},
									1
								},
								{},
								
								{
									{0.374286,0.619982},
									1
								},
								
								{
									{0.341429,0.619982},
									1
								},
								
								{
									{0.341429,0.57565898},
									1
								},
								{},
								
								{
									{0.374286,0.29965201},
									1
								},
								
								{
									{0.341429,0.29965201},
									1
								},
								
								{
									{0.341429,0.342967},
									1
								}
							};
						};
						class ModeText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.039999999,0.31999999},
								1
							};
							right[]=
							{
								{0.07,0.31999999},
								1
							};
							down[]=
							{
								{0.039999999,0.345},
								1
							};
						};
						class RangeText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.36000001,0.81},
								1
							};
							right[]=
							{
								{0.40000001,0.81},
								1
							};
							down[]=
							{
								{0.36000001,0.84500003},
								1
							};
						};
						class Fuel
						{
							source="laserDist";
							sourceScale=1;
							sourceLength=4;
							align="right";
							scale=1;
							pos[]=
							{
								{0.50999999,0.81},
								1
							};
							right[]=
							{
								{0.55000001,0.81},
								1
							};
							down[]=
							{
								{0.50999999,0.84500003},
								1
							};
						};
					};
				};
			};
		};
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
		weapons[]=
		{
			"M134_minigun",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"5000Rnd_762x51_Yellow_Belt",
			"24Rnd_missiles",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		threat[]={0.80000001,0.1,0.60000002};
		memoryPointGun[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunBeg[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunEnd[]=
		{
			"z_gunL_chamber",
			"z_gunR_chamber"
		};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		class Damage;  //found empty after stripping
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar;  //found empty after stripping
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot;  //found empty after stripping
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot;  //found empty after stripping
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-2.5;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				stabilizedInAxes=3;
				primaryGunner=0;
				minElev=-40;
				maxElev=20;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				memoryPointGun="laserstart";
				isCopilot=1;
				weapons[]=
				{
					"FakeHorn"
				};
				magazines[]={};
				usePiP=1;
				precisegetinout=1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
				class ViewGunner: ViewPilot
				{
					initAngleX=-15;
				};
				startEngine=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						passThrough=0.2;
						radius=0.25;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						passThrough=0.2;
						radius=0.25;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot;  //found empty after stripping
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot;  //found empty after stripping
				};
			};
		};
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
		memoryPointDriverOptics="slingCamera";
		class TextureSources
		{
			class Green
			{
				factions[]=
				{
					"IND_F"
				};
			};
			class Indep
			{
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F
	{
		_generalMacro="Heli_light_03_dynamicLoadout_base_F";
		weapons[]=
		{
			"M134_minigun",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"5000Rnd_762x51_Yellow_Belt",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		cost=3000000;
		hideWeaponsCargo=1;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=2;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{11.3674,-80.451202},
						{15.3783,-0.1552},
						{4.4902,79.756104}
					};
					limitsArrayBottom[]=
					{
						{-27.698,-74.5466},
						{-15.8271,-46.016899},
						{-19.3941,7.0179},
						{-44.547699,63.132099}
					};
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPB\Heli_Light_03\data\UI\Heli_Light_03_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_12Rnd_missiles";
						hardpoints[]=
						{
							"DAR",
							"DAGR",
							"B_SHIEKER",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonRight1: PylonLeft1
					{
						attachment="PylonRack_12Rnd_missiles";
						mirroredMissilePos=1;
						hardpoints[]=
						{
							"DAR",
							"DAGR",
							"B_SHIEKER",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.58999997,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						attachment[]={};
					};
					class Default
					{
						attachment[]=
						{
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles"
						};
					};
					class AT
					{
						attachment[]=
						{
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
				};
			};
		};
	};
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F
	{
		_generalMacro="Heli_light_03_unarmed_base_F";
		displayname="$STR_A3_CfgVehicles_I_Heli_light_03_unarmed_F0";
		icon="\A3\Air_F_EPB\Heli_Light_03\data\UI\Map_Heli_Light_03_unarmed_CA.paa";
		availableForSupportTypes[]=
		{
			"Transport"
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		enableSweep=0;
	};
	class I_Heli_light_03_F: Heli_light_03_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"rotor_destructx",
					0
				},
				
				{
					"rotor_destructy",
					0
				},
				
				{
					"mala_vrtule_destructy",
					0
				},
				
				{
					"mala_vrtule_destructz",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"hrotor",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"pedall",
					0
				},
				
				{
					"pedalr",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass1",
					0
				},
				
				{
					"horizondive",
					0
				},
				
				{
					"horizonbank",
					0
				},
				
				{
					"horizondive2",
					0
				},
				
				{
					"horizonbank2",
					0
				},
				
				{
					"horizonbank1bck",
					0
				},
				
				{
					"horizonbank2bck",
					0
				},
				
				{
					"rpm01",
					0
				},
				
				{
					"rpm01a",
					0
				},
				
				{
					"speed02",
					0
				},
				
				{
					"speed02a",
					0
				},
				
				{
					"fuel03",
					1
				},
				
				{
					"fuel03a",
					1
				},
				
				{
					"fuel04",
					1
				},
				
				{
					"fuel04a",
					1
				},
				
				{
					"rpm05",
					0
				},
				
				{
					"rpm05a",
					0
				},
				
				{
					"rpm06",
					0
				},
				
				{
					"rpm06a",
					0
				},
				
				{
					"rpm07",
					0
				},
				
				{
					"rpm07a",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"wheel_front_damper",
					0
				},
				
				{
					"wheel_left_damper",
					0
				},
				
				{
					"wheel_right_damper",
					0
				},
				
				{
					"positionlights",
					0
				},
				
				{
					"collisionlight_red_blinking",
					0
				},
				
				{
					"collisionlight_white_blinking",
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
					"zaslehrot",
					952
				},
				
				{
					"zaslehrot_2",
					952
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"gunl_revolving",
					0.33000001
				},
				
				{
					"gunr_revolving",
					0.33000001
				},
				
				{
					"suspension",
					0
				},
				
				{
					"hidepg_1",
					1
				},
				
				{
					"hidepg_2",
					1
				},
				
				{
					"hidepg_3",
					1
				},
				
				{
					"hidepg_4",
					1
				},
				
				{
					"hidepg_5",
					1
				},
				
				{
					"hidepg_6",
					1
				},
				
				{
					"hidepg_7",
					1
				},
				
				{
					"hidepg_8",
					1
				},
				
				{
					"hidepg_9",
					1
				},
				
				{
					"hidepg_10",
					1
				},
				
				{
					"hidepg_11",
					1
				},
				
				{
					"hidepg_12",
					1
				},
				
				{
					"hidepg_13",
					1
				},
				
				{
					"hidepg_14",
					1
				},
				
				{
					"hidepg_15",
					1
				},
				
				{
					"hidepg_16",
					1
				},
				
				{
					"hidepg_17",
					1
				},
				
				{
					"hidepg_18",
					1
				},
				
				{
					"hidepg_19",
					1
				},
				
				{
					"hidepg_20",
					1
				},
				
				{
					"hidepg_21",
					1
				},
				
				{
					"hidepg_22",
					1
				},
				
				{
					"hidepg_23",
					1
				},
				
				{
					"hidepg_24",
					1
				},
				
				{
					"stick_pilot_dive_01",
					0
				},
				
				{
					"stick_pilot_dive_02",
					0
				},
				
				{
					"stick_pilot_dive_03",
					0
				},
				
				{
					"stick_pilot_dive_04",
					0
				},
				
				{
					"stick_pilot_dive_05",
					0
				},
				
				{
					"stick_pilot_bank_01",
					0
				},
				
				{
					"stick_pilot_bank_02",
					0
				},
				
				{
					"stick_pilot_bank_03",
					0
				},
				
				{
					"stick_pilot_bank_04",
					0
				},
				
				{
					"stick_pilot_bank_05",
					0
				},
				
				{
					"stick_copilot_dive01",
					0
				},
				
				{
					"stick_copilot_dive02",
					0
				},
				
				{
					"stick_copilot_dive03",
					0
				},
				
				{
					"stick_copilot_dive04",
					0
				},
				
				{
					"stick_copilot_dive05",
					0
				},
				
				{
					"stick_copilot_bank01",
					0
				},
				
				{
					"stick_copilot_bank02",
					0
				},
				
				{
					"stick_copilot_bank03",
					0
				},
				
				{
					"stick_copilot_bank04",
					0
				},
				
				{
					"stick_copilot_bank05",
					0
				},
				
				{
					"rocketpods",
					0
				},
				
				{
					"damagehideglass1",
					0
				},
				
				{
					"damagehideglass2",
					0
				},
				
				{
					"damagehideglass3",
					0
				},
				
				{
					"damagehideglass4",
					0
				},
				
				{
					"damagehideglass5",
					0
				},
				
				{
					"damagehideglass6",
					0
				},
				
				{
					"damagehideglass7",
					0
				},
				
				{
					"damagehideglass8",
					0
				},
				
				{
					"damagehideglass9",
					0
				},
				
				{
					"damagehideglass10",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_1",
				"light_2",
				"light_3",
				"light_4",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.526;
			verticalOffsetWorld=-0.0049999999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="I_Heli_light_03_F";
		side=2;
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		textureList[]=
		{
			"Indep",
			1
		};
		hideWeaponsCargo=1;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=2;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{11.3674,-80.451202},
						{15.3783,-0.1552},
						{4.4902,79.756104}
					};
					limitsArrayBottom[]=
					{
						{-27.698,-74.5466},
						{-15.8271,-46.016899},
						{-19.3941,7.0179},
						{-44.547699,63.132099}
					};
				};
			};
		};
	};
	class I_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"rotor_destructx",
					0
				},
				
				{
					"rotor_destructy",
					0
				},
				
				{
					"mala_vrtule_destructy",
					0
				},
				
				{
					"mala_vrtule_destructz",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"hrotor",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"pedall",
					0
				},
				
				{
					"pedalr",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass1",
					0
				},
				
				{
					"horizondive",
					0
				},
				
				{
					"horizonbank",
					0
				},
				
				{
					"horizondive2",
					0
				},
				
				{
					"horizonbank2",
					0
				},
				
				{
					"horizonbank1bck",
					0
				},
				
				{
					"horizonbank2bck",
					0
				},
				
				{
					"rpm01",
					0
				},
				
				{
					"rpm01a",
					0
				},
				
				{
					"speed02",
					0
				},
				
				{
					"speed02a",
					0
				},
				
				{
					"fuel03",
					1
				},
				
				{
					"fuel03a",
					1
				},
				
				{
					"fuel04",
					1
				},
				
				{
					"fuel04a",
					1
				},
				
				{
					"rpm05",
					0
				},
				
				{
					"rpm05a",
					0
				},
				
				{
					"rpm06",
					0
				},
				
				{
					"rpm06a",
					0
				},
				
				{
					"rpm07",
					0
				},
				
				{
					"rpm07a",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"wheel_front_damper",
					0
				},
				
				{
					"wheel_left_damper",
					0
				},
				
				{
					"wheel_right_damper",
					0
				},
				
				{
					"positionlights",
					0
				},
				
				{
					"collisionlight_red_blinking",
					0
				},
				
				{
					"collisionlight_white_blinking",
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
					"zaslehrot",
					53
				},
				
				{
					"zaslehrot_2",
					53
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"gunl_revolving",
					0.33000001
				},
				
				{
					"gunr_revolving",
					0.33000001
				},
				
				{
					"suspension",
					0
				},
				
				{
					"hidepg_1",
					1
				},
				
				{
					"hidepg_2",
					1
				},
				
				{
					"hidepg_3",
					1
				},
				
				{
					"hidepg_4",
					1
				},
				
				{
					"hidepg_5",
					1
				},
				
				{
					"hidepg_6",
					1
				},
				
				{
					"hidepg_7",
					1
				},
				
				{
					"hidepg_8",
					1
				},
				
				{
					"hidepg_9",
					1
				},
				
				{
					"hidepg_10",
					1
				},
				
				{
					"hidepg_11",
					1
				},
				
				{
					"hidepg_12",
					1
				},
				
				{
					"hidepg_13",
					1
				},
				
				{
					"hidepg_14",
					1
				},
				
				{
					"hidepg_15",
					1
				},
				
				{
					"hidepg_16",
					1
				},
				
				{
					"hidepg_17",
					1
				},
				
				{
					"hidepg_18",
					1
				},
				
				{
					"hidepg_19",
					1
				},
				
				{
					"hidepg_20",
					1
				},
				
				{
					"hidepg_21",
					1
				},
				
				{
					"hidepg_22",
					1
				},
				
				{
					"hidepg_23",
					1
				},
				
				{
					"hidepg_24",
					1
				},
				
				{
					"stick_pilot_dive_01",
					0
				},
				
				{
					"stick_pilot_dive_02",
					0
				},
				
				{
					"stick_pilot_dive_03",
					0
				},
				
				{
					"stick_pilot_dive_04",
					0
				},
				
				{
					"stick_pilot_dive_05",
					0
				},
				
				{
					"stick_pilot_bank_01",
					0
				},
				
				{
					"stick_pilot_bank_02",
					0
				},
				
				{
					"stick_pilot_bank_03",
					0
				},
				
				{
					"stick_pilot_bank_04",
					0
				},
				
				{
					"stick_pilot_bank_05",
					0
				},
				
				{
					"stick_copilot_dive01",
					0
				},
				
				{
					"stick_copilot_dive02",
					0
				},
				
				{
					"stick_copilot_dive03",
					0
				},
				
				{
					"stick_copilot_dive04",
					0
				},
				
				{
					"stick_copilot_dive05",
					0
				},
				
				{
					"stick_copilot_bank01",
					0
				},
				
				{
					"stick_copilot_bank02",
					0
				},
				
				{
					"stick_copilot_bank03",
					0
				},
				
				{
					"stick_copilot_bank04",
					0
				},
				
				{
					"stick_copilot_bank05",
					0
				},
				
				{
					"rocketpods",
					0
				},
				
				{
					"damagehideglass1",
					0
				},
				
				{
					"damagehideglass2",
					0
				},
				
				{
					"damagehideglass3",
					0
				},
				
				{
					"damagehideglass4",
					0
				},
				
				{
					"damagehideglass5",
					0
				},
				
				{
					"damagehideglass6",
					0
				},
				
				{
					"damagehideglass7",
					0
				},
				
				{
					"damagehideglass8",
					0
				},
				
				{
					"damagehideglass9",
					0
				},
				
				{
					"damagehideglass10",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_1",
				"light_2",
				"light_3",
				"light_4",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.526;
			verticalOffsetWorld=-0.0049999999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="I_Heli_light_03_dynamicLoadout_F";
		side=2;
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		textureList[]=
		{
			"Indep",
			1
		};
	};
	class I_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"rotor_destructx",
					0
				},
				
				{
					"rotor_destructy",
					0
				},
				
				{
					"mala_vrtule_destructy",
					0
				},
				
				{
					"mala_vrtule_destructz",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"hrotor",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"pedall",
					0
				},
				
				{
					"pedalr",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass1",
					0
				},
				
				{
					"horizondive",
					0
				},
				
				{
					"horizonbank",
					0
				},
				
				{
					"horizondive2",
					0
				},
				
				{
					"horizonbank2",
					0
				},
				
				{
					"horizonbank1bck",
					0
				},
				
				{
					"horizonbank2bck",
					0
				},
				
				{
					"rpm01",
					0
				},
				
				{
					"rpm01a",
					0
				},
				
				{
					"speed02",
					0
				},
				
				{
					"speed02a",
					0
				},
				
				{
					"fuel03",
					1
				},
				
				{
					"fuel03a",
					1
				},
				
				{
					"fuel04",
					1
				},
				
				{
					"fuel04a",
					1
				},
				
				{
					"rpm05",
					0
				},
				
				{
					"rpm05a",
					0
				},
				
				{
					"rpm06",
					0
				},
				
				{
					"rpm06a",
					0
				},
				
				{
					"rpm07",
					0
				},
				
				{
					"rpm07a",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"wheel_front_damper",
					0
				},
				
				{
					"wheel_left_damper",
					0
				},
				
				{
					"wheel_right_damper",
					0
				},
				
				{
					"positionlights",
					0
				},
				
				{
					"collisionlight_red_blinking",
					0
				},
				
				{
					"collisionlight_white_blinking",
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
					"zasleh_hide",
					0
				},
				
				{
					"gunl_revolving",
					0
				},
				
				{
					"gunr_revolving",
					0
				},
				
				{
					"suspension",
					0
				},
				
				{
					"hidepg_1",
					0
				},
				
				{
					"hidepg_2",
					0
				},
				
				{
					"hidepg_3",
					0
				},
				
				{
					"hidepg_4",
					0
				},
				
				{
					"hidepg_5",
					0
				},
				
				{
					"hidepg_6",
					0
				},
				
				{
					"hidepg_7",
					0
				},
				
				{
					"hidepg_8",
					0
				},
				
				{
					"hidepg_9",
					0
				},
				
				{
					"hidepg_10",
					0
				},
				
				{
					"hidepg_11",
					0
				},
				
				{
					"hidepg_12",
					0
				},
				
				{
					"hidepg_13",
					0
				},
				
				{
					"hidepg_14",
					0
				},
				
				{
					"hidepg_15",
					0
				},
				
				{
					"hidepg_16",
					0
				},
				
				{
					"hidepg_17",
					0
				},
				
				{
					"hidepg_18",
					0
				},
				
				{
					"hidepg_19",
					0
				},
				
				{
					"hidepg_20",
					0
				},
				
				{
					"hidepg_21",
					0
				},
				
				{
					"hidepg_22",
					0
				},
				
				{
					"hidepg_23",
					0
				},
				
				{
					"hidepg_24",
					0
				},
				
				{
					"stick_pilot_dive_01",
					0
				},
				
				{
					"stick_pilot_dive_02",
					0
				},
				
				{
					"stick_pilot_dive_03",
					0
				},
				
				{
					"stick_pilot_dive_04",
					0
				},
				
				{
					"stick_pilot_dive_05",
					0
				},
				
				{
					"stick_pilot_bank_01",
					0
				},
				
				{
					"stick_pilot_bank_02",
					0
				},
				
				{
					"stick_pilot_bank_03",
					0
				},
				
				{
					"stick_pilot_bank_04",
					0
				},
				
				{
					"stick_pilot_bank_05",
					0
				},
				
				{
					"stick_copilot_dive01",
					0
				},
				
				{
					"stick_copilot_dive02",
					0
				},
				
				{
					"stick_copilot_dive03",
					0
				},
				
				{
					"stick_copilot_dive04",
					0
				},
				
				{
					"stick_copilot_dive05",
					0
				},
				
				{
					"stick_copilot_bank01",
					0
				},
				
				{
					"stick_copilot_bank02",
					0
				},
				
				{
					"stick_copilot_bank03",
					0
				},
				
				{
					"stick_copilot_bank04",
					0
				},
				
				{
					"stick_copilot_bank05",
					0
				},
				
				{
					"rocketpods",
					0
				},
				
				{
					"damagehideglass1",
					0
				},
				
				{
					"damagehideglass2",
					0
				},
				
				{
					"damagehideglass3",
					0
				},
				
				{
					"damagehideglass4",
					0
				},
				
				{
					"damagehideglass5",
					0
				},
				
				{
					"damagehideglass6",
					0
				},
				
				{
					"damagehideglass7",
					0
				},
				
				{
					"damagehideglass8",
					0
				},
				
				{
					"damagehideglass9",
					0
				},
				
				{
					"damagehideglass10",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_1",
				"light_2",
				"light_3",
				"light_4",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.72;
			verticalOffsetWorld=-0.14300001;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="I_Heli_light_03_unarmed_F";
		side=2;
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		textureList[]=
		{
			"Green",
			1
		};
	};
	class I_Heli_light_03_base_F: Heli_light_03_base_F
	{
		_generalMacro="I_Heli_light_03_base_F";
		deprecated=1;
	};
	class I_Heli_light_03_unarmed_base_F: Heli_light_03_unarmed_base_F
	{
		_generalMacro="I_Heli_light_03_unarmed_base_F";
		deprecated=1;
	};
};
