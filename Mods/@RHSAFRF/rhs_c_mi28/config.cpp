class DefaultEventhandlers;
class CfgPatches
{
	class rhs_c_mi28
	{
		units[]=
		{
			"rhs_mi28n_vvs",
			"rhs_mi28n_vvsc",
			"rhs_mi28n_b13_vvs",
			"rhs_mi28n_b13_vvsc"
		};
		weapons[]={};
		name="Mi-28";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class mi28_init
			{
				file="\rhsafrf\addons\rhs_c_mi28\scripts\rhs_fnc_mi28_init.sqf";
				description="Mi-28 settings init";
			};
			class mi28_ejection
			{
				file="\rhsafrf\addons\rhs_c_mi28\scripts\rhs_mi28_ejection.sqf";
				description="Mi-28 settings init";
			};
		};
	};
};
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
class CfgVehicles
{
	class ThingX;
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;  //found empty after stripping
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitMissiles;
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class CargoTurret;
		class RotorLibHelicopterProperties;
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class Sounds;
		class HitPoints: HitPoints
		{
			class HitEngine1;
		};
		class Components;
	};
	class Plane;
	class rhs_mi28_base: Heli_Attack_02_base_F
	{
		side=0;
		tf_isolatedAmount_api=0.60000002;
		maxOmega=2000;
		engineMOI=10;
		class Wheels
		{
			class Wheel_1_1
			{
				steering=0;
				side="left";
				suspTravelDirection[]={0,-1,0};
				width=0.234;
				mass=15;
				MOI=0.76800001;
				dampingRate=1;
				dampingRateDamaged=2;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				maxCompression=0.11;
				maxDroop=0.15000001;
				sprungMass=240;
				springStrength=42000;
				springDamperRate=99280;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1.3},
					{0.5,1},
					{1,1.6}
				};
			};
			class Wheel_1_2: Wheel_1_1
			{
				side="right";
			};
			class Wheel_2_1: Wheel_1_1
			{
				steering=1;
				width=0.186;
				suspTravelDirection[]={0,-1,0};
				maxCompression=0.18000001;
				maxDroop=0.12;
				sprungMass=100;
				springStrength=1580;
				springDamperRate=95120;
			};
		};
		gearRetracting=0;
		driveOnComponent[]=
		{
			"wheels"
		};
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={-0.12,8.5,-2.21};
		LESH_WheelOffset[]={-0.12,1};
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRMI28NumberPlaces,'AviaYellow']"
		};
		typicalCargo[]=
		{
			"rhs_pilot_combat_heli"
		};
		maxSpeed=395;
		fuelCapacity=2130;
		AGM_fuelCapacity=2130;
		fuelConsumptionRate=0.5;
		mainBladeRadius=8.5;
		tailBladeRadius=1.95;
		tailBladeVertical=1;
		tailBladeCenter="mala osa";
		mainBladeCenter="rotor_center";
		backRotorForceCoef=1;
		liftForceCoef=2;
		altFullForce=4000;
		altNoForce=6000;
		mainRotorSpeed=1;
		backrotorspeed=-1;
		numberPhysicalWheels=3;
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			rtd_center="rtd_center";
			RTDconfig="rhsafrf\addons\rhs_c_mi28\rotorlib\RTD_Mi28.xml";
		};
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		audible=7;
		displayName="$STR_MI28N_name";
		icon="rhsafrf\addons\rhs_a2port_air\data\map_ico\icon_mi24_ca.paa";
		getInRadius=2;
		allowTabLock=0;
		class MFD
		{
			class MFD_Left_Compass
			{
				topLeft="mfd_left_compass_lt";
				topRight="mfd_left_compass_rt";
				bottomLeft="mfd_left_compass_lb";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				enableParallax=0;
				font="rhs_digital_font_var";
				class Bones
				{
					class Compass_text
					{
						pos[]={0.5,0.52999997};
					};
					class Speed_text: Compass_text
					{
						pos[]={0.192,0.22499999};
					};
					class VSpeed_text: Compass_text
					{
						pos[]={0.81199998,0.22499999};
					};
					class Alt_radar_text: Compass_text
					{
						pos[]={0.192,0.59899998};
					};
					class Alt_baro_text: Compass_text
					{
						pos[]={0.81199998,0.59200001};
					};
				};
				class Draw
				{
					alpha=0.94999999;
					color[]={1,1,1};
					condition="on";
					class Compass
					{
						align="center";
						scale=1;
						source="Heading";
						sourceScale=1;
						pos[]=
						{
							"Compass_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"Compass_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"Compass_text",
							{-0,0.015},
							1
						};
					};
					class Speed: Compass
					{
						source="speed";
						sourceScale=3.5999999;
						pos[]=
						{
							"Speed_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"Speed_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"Speed_text",
							{-0,0.015},
							1
						};
					};
					class VSpeed: Compass
					{
						source="vspeed";
						pos[]=
						{
							"VSpeed_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"VSpeed_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"VSpeed_text",
							{-0,0.015},
							1
						};
					};
					class Alt_Radar: Compass
					{
						source="altitudeAGL";
						max=300;
						pos[]=
						{
							"Alt_radar_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"Alt_radar_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"Alt_radar_text",
							{-0,0.015},
							1
						};
					};
					class Alt_Baro: Compass
					{
						source="altitudeASL";
						max=10000;
						pos[]=
						{
							"Alt_baro_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"Alt_baro_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"Alt_baro_text",
							{-0,0.015},
							1
						};
					};
				};
			};
			class MFD_Gunner_Left_Compass: MFD_Left_Compass
			{
				topLeft="mfd_gunner_left_compass_lt";
				topRight="mfd_gunner_left_compass_rt";
				bottomLeft="mfd_gunner_left_compass_lb";
				class Bones
				{
					class Compass_text
					{
						pos[]={0.5,0.52999997};
					};
					class Speed_text: Compass_text
					{
						pos[]={0.192,0.22499999};
					};
					class VSpeed_text: Compass_text
					{
						pos[]={0.81199998,0.22499999};
					};
					class Alt_radar_text: Compass_text
					{
						pos[]={0.192,0.59899998};
					};
					class Alt_baro_text: Compass_text
					{
						pos[]={0.81199998,0.59200001};
					};
				};
				class Draw
				{
					alpha=0.94999999;
					color[]={1,1,1};
					condition="on";
					class Compass
					{
						align="center";
						scale=1;
						source="Heading";
						sourceScale=1;
						pos[]=
						{
							"Compass_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"Compass_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"Compass_text",
							{-0,0.015},
							1
						};
					};
					class Speed: Compass
					{
						source="speed";
						sourceScale=3.5999999;
						pos[]=
						{
							"Speed_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"Speed_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"Speed_text",
							{-0,0.015},
							1
						};
					};
					class VSpeed: Compass
					{
						source="vspeed";
						pos[]=
						{
							"VSpeed_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"VSpeed_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"VSpeed_text",
							{-0,0.015},
							1
						};
					};
					class Alt_Radar: Compass
					{
						source="altitudeAGL";
						max=300;
						pos[]=
						{
							"Alt_radar_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"Alt_radar_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"Alt_radar_text",
							{-0,0.015},
							1
						};
					};
					class Alt_Baro: Compass
					{
						source="altitudeASL";
						max=10000;
						pos[]=
						{
							"Alt_baro_text",
							{-0,-0.015},
							1
						};
						right[]=
						{
							"Alt_baro_text",
							{0.025,-0.015},
							1
						};
						down[]=
						{
							"Alt_baro_text",
							{-0,0.015},
							1
						};
					};
				};
			};
			class MFD_Right_Gun: MFD_Left_Compass
			{
				topLeft="mfd_right_gun_lt";
				topRight="mfd_right_gun_rt";
				bottomLeft="mfd_right_gun_lb";
				color[]={0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						pos[]={0.5,0.64999998};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.1,0.80000001,0};
					condition="on";
					class Speed
					{
						align="left";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						pos[]=
						{
							"PlaneW",
							
							{
								-0.30000001,
								"-0.53+-0.2."
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.3+0.16",
								"-0.53+-0.2"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.30000001,
								"0.43+-0.2"
							},
							1
						};
					};
					class Height: Speed
					{
						source="altitudeAGL";
						sourceScale=1;
						format="%3.0f";
						pos[]=
						{
							"PlaneW",
							
							{
								0.38999999,
								"-0.53+-0.2"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"0.39+0.16",
								"-0.53+-0.2"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.38999999,
								"0.43+-0.2"
							},
							1
						};
					};
				};
			};
			class MFD_Gunner_Right_Gun: MFD_Right_Gun
			{
				topLeft="mfd_gunner_right_gun_lt";
				topRight="mfd_gunner_right_gun_rt";
				bottomLeft="mfd_gunner_right_gun_lb";
				class Bones
				{
					class PlaneW
					{
						pos[]={0.5,0.64999998};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.1,0.80000001,0};
					condition="on";
					class Speed
					{
						align="left";
						scale=1;
						source="speed";
						sourceScale=3.5999999;
						pos[]=
						{
							"PlaneW",
							
							{
								-0.30000001,
								"-0.53+-0.2."
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.3+0.16",
								"-0.53+-0.2"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.30000001,
								"0.43+-0.2"
							},
							1
						};
					};
					class Height: Speed
					{
						source="altitudeAGL";
						sourceScale=1;
						format="%3.0f";
						pos[]=
						{
							"PlaneW",
							
							{
								0.38999999,
								"-0.53+-0.2"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"0.39+0.16",
								"-0.53+-0.2"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.38999999,
								"0.43+-0.2"
							},
							1
						};
					};
				};
			};
			class CrossGunner
			{
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				enableParallax=1;
				turret[]={0};
				class Bones
				{
					class WeaponAim
					{
						source="weapon";
						pos0[]=
						{
							"0.50  - 0.02",
							"0.31  + 0.03"
						};
						pos10[]={1.126,0.9138};
					};
				};
				class Draw
				{
					alpha=0.94999999;
					color[]={0.15000001,1,0.15000001};
					condition="on";
					class MGun
					{
						class Circle
						{
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,0.02},
									1
								},
								
								{
									"WeaponAim",
									{0,0.0099999998},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0,-0.0099999998},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.02},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.02,0},
									1
								},
								
								{
									"WeaponAim",
									{0.0099999998,0},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.0099999998,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.02,0},
									1
								},
								{}
							};
						};
					};
				};
			};
			class AirplaneHUD
			{
				class Pos10Vector
				{
					pos0[]={0.50199997,0.49000001};
					pos10[]={1.112,1.03};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				enableParallax=1;
				turret[]={-1};
				font="rhs_digital_font_rus";
				class Bones
				{
					class PlaneW
					{
						pos[]={0.50199997,0.49000001};
					};
					class ImpactPoint
					{
						source="ImpactPoint";
						pos0[]={0.5,0.31};
						pos10[]={1.146,0.88380003};
					};
					class Limit0109
					{
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class MissileFlightTimeRot1
					{
						source="MissileFlightTime";
						sourceScale=1;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.88823497;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=37;
						max=2;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=55.5;
						max=3;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=74;
						max=4;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=92.5;
						max=5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=111;
						max=6;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=129.5;
						max=7;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=148;
						max=8;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=166.5;
						max=9;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=185;
						max=10;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=203.5;
						max=11;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=222;
						max=12;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=240.5;
						max=13;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=259;
						max=14;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=277.5;
						max=15;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=296;
						max=16;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=314.5;
						max=17;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=333;
						max=18;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=351.5;
						max=19;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=370;
						max=20;
					};
					class ForwardVector
					{
						source="forward";
						pos0[]={0,0};
						pos10[]={0.347,0.345};
					};
					class Target
					{
						source="target";
						pos0[]={0.5,0.31};
						pos10[]={1.146,0.88380003};
					};
					class Velocity: Pos10Vector
					{
						source="velocity";
						pos0[]={0.50199997,0.49000001};
						pos10[]={0.56300002,0.54400003};
					};
					class SliderSpeedSource
					{
						source="speed";
						min=0;
						max=138.88901;
						minPos[]={0.255,0.2};
						maxPos[]={0.255,0.52499998};
					};
					class AGLMove
					{
						source="altitudeAGL";
						min=0;
						max=1000;
						minPos[]=
						{
							0,
							"0.15*0.65"
						};
						maxPos[]=
						{
							0,
							"0.65*0.65"
						};
					};
					class Heading_number_anchor
					{
						pos[]={0.498,0.035};
					};
					class Heading
					{
						source="Heading";
						min=-36;
						max=36;
						minPos[]={0,0};
						maxPos[]={1,0};
					};
					class TargetDistanceMissile
					{
						source="targetDist";
						min=100;
						max=3000;
						minAngle=-120;
						maxAngle=120;
					};
					class vspeed
					{
						source="vspeed";
						min=-30;
						max=30;
						minPos[]={0,0.059999999};
						maxPos[]={0,0.30000001};
					};
					class HorizonBankMGun
					{
						source="HorizonBank";
						min=-6.2831898;
						max=6.2831898;
						minAngle=-360;
						maxAngle=360;
						aspectRatio=0.88524598;
					};
					class HorizonDive
					{
						source="horizonDive";
						min=-1;
						max=1;
						minPos[]={0.50199997,2.49};
						maxPos[]={0.50199997,-1.51};
					};
					class HorizonBankReverted
					{
						source="HorizonBank";
						min="-3.14159265*2";
						max="3.14159265*2";
						minAngle=360;
						maxAngle=-360;
						aspectRatio=0.80000001;
					};
					class Level0
					{
						pos0[]={0.5,0.46000001};
						pos10[]={1.3839999,1.2452};
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
				};
				class Draw
				{
					alpha=1;
					color[]={0.15000001,1,0.15000001};
					condition="on";
					class MGunD
					{
						condition="mgun+rocket+bomb";
						class Cross
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0266471},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.035529401},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.031088199},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0266471},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.026241999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0250402},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0230763},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.020411599},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0171287},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0133235},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0091132903},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.00462593},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.00462593},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0091132903},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0133235},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0171287},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.020411599},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0230763},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0250402},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.026241999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0266471},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.026241999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0250402},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0230763},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.020411599},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0171287},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0133235},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0091132903},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.00462593},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.00462593},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0091132903},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0133235},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0171287},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.020411599},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0230763},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0250402},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.026241999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0266471},
									1
								}
							};
						};
						class Distance
						{
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class Static2
					{
						clipTL[]={0,0.5};
						clipBR[]={1,0};
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.20999999,
									"7.34351e-009--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.28,
									"9.79135e-009--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.20999999,
									"-2.00338e-009--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.28,
									"-2.67117e-009--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.105,
									"0.145492--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.14,
									"0.19399--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.105,
									"0.145492--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.14,
									"0.19399--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.18186501,
									"0.084--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.242487,
									"0.112--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.18186501,
									"0.084--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.242487,
									"0.112--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.20284399,
									"0.0434816--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.270459,
									"0.0579755--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.20284399,
									"0.0434816--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.270459,
									"0.0579755--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.20920099,
									"0.0146422--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.244068,
									"0.0170825--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									-0.20681,
									"0.0291729--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									-0.24127799,
									"0.034035--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.20681,
									"0.0291729--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.24127799,
									"0.034035--0.12"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								
								{
									0.20920099,
									"0.0146422--0.12"
								},
								1
							},
							
							{
								"PlaneW",
								
								{
									0.244068,
									"0.0170825--0.12"
								},
								1
							},
							{}
						};
					};
					class HorizonBank
					{
						points[]=
						{
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.21-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.14-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.11-0.50",
									"-0.035-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.08-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0.03-0.50",
									"0-0.50"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.21-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.14-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.11-0.50",
									"-0.035-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.08-0.50",
									"0-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"-0.03-0.50",
									"0-0.50"
								},
								1
							},
							{},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0-0.50",
									"-0.004-0.50"
								},
								1
							},
							
							{
								"PlaneW",
								1,
								"HorizonBankReverted",
								
								{
									"0-0.50",
									"0.004-0.50"
								},
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
					class Horizont
					{
						clipTL[]={0.25,0.25};
						clipBR[]={0.75,0.75};
						class Dimmed
						{
							class Level0
							{
								width=4;
								points[]=
								{
									
									{
										"Level0",
										{-0.28,0},
										1
									},
									
									{
										"Level0",
										{-0.175,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.063000001,0},
										1
									},
									
									{
										"Level0",
										{-0.0070000002,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.0070000002,0},
										1
									},
									
									{
										"Level0",
										{0.063000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.175,0},
										1
									},
									
									{
										"Level0",
										{0.28,0},
										1
									}
								};
							};
							class LevelM5: Level0
							{
								points[]=
								{
									
									{
										"LevelM5",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM5",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.22,0},
										1
									},
									
									{
										"LevelM5",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_5
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_5L: VALM_1_5
							{
								align="left";
								pos[]=
								{
									"LevelM5",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP5: Level0
							{
								points[]=
								{
									
									{
										"LevelP5",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP5",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.22,0},
										1
									},
									
									{
										"LevelP5",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_5
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_5L: VALP_1_5
							{
								align="left";
								pos[]=
								{
									"LevelP5",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM10: Level0
							{
								points[]=
								{
									
									{
										"LevelM10",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM10",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.22,0},
										1
									},
									
									{
										"LevelM10",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_10
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_10L: VALM_1_10
							{
								align="left";
								pos[]=
								{
									"LevelM10",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP10: Level0
							{
								points[]=
								{
									
									{
										"LevelP10",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP10",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.22,0},
										1
									},
									
									{
										"LevelP10",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_10
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_10L: VALP_1_10
							{
								align="left";
								pos[]=
								{
									"LevelP10",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM15: Level0
							{
								points[]=
								{
									
									{
										"LevelM15",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM15",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.22,0},
										1
									},
									
									{
										"LevelM15",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_15
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_15L: VALM_1_15
							{
								align="left";
								pos[]=
								{
									"LevelM15",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP15: Level0
							{
								points[]=
								{
									
									{
										"LevelP15",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP15",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.22,0},
										1
									},
									
									{
										"LevelP15",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_15
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_15L: VALP_1_15
							{
								align="left";
								pos[]=
								{
									"LevelP15",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM20: Level0
							{
								points[]=
								{
									
									{
										"LevelM20",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM20",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.22,0},
										1
									},
									
									{
										"LevelM20",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_20
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_20L: VALM_1_20
							{
								align="left";
								pos[]=
								{
									"LevelM20",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP20: Level0
							{
								points[]=
								{
									
									{
										"LevelP20",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP20",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.22,0},
										1
									},
									
									{
										"LevelP20",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_20
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_20L: VALP_1_20
							{
								align="left";
								pos[]=
								{
									"LevelP20",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM25: Level0
							{
								points[]=
								{
									
									{
										"LevelM25",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM25",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.22,0},
										1
									},
									
									{
										"LevelM25",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_25
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_25L: VALM_1_25
							{
								align="left";
								pos[]=
								{
									"LevelM25",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP25: Level0
							{
								points[]=
								{
									
									{
										"LevelP25",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP25",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.22,0},
										1
									},
									
									{
										"LevelP25",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_25
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_25L: VALP_1_25
							{
								align="left";
								pos[]=
								{
									"LevelP25",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM30: Level0
							{
								points[]=
								{
									
									{
										"LevelM30",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM30",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.22,0},
										1
									},
									
									{
										"LevelM30",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_30
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_30L: VALM_1_30
							{
								align="left";
								pos[]=
								{
									"LevelM30",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP30: Level0
							{
								points[]=
								{
									
									{
										"LevelP30",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP30",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.22,0},
										1
									},
									
									{
										"LevelP30",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_30
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_30L: VALP_1_30
							{
								align="left";
								pos[]=
								{
									"LevelP30",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM35: Level0
							{
								points[]=
								{
									
									{
										"LevelM35",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM35",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.22,0},
										1
									},
									
									{
										"LevelM35",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_35
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_35L: VALM_1_35
							{
								align="left";
								pos[]=
								{
									"LevelM35",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP35: Level0
							{
								points[]=
								{
									
									{
										"LevelP35",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP35",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.22,0},
										1
									},
									
									{
										"LevelP35",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_35
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_35L: VALP_1_35
							{
								align="left";
								pos[]=
								{
									"LevelP35",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM40: Level0
							{
								points[]=
								{
									
									{
										"LevelM40",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM40",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.22,0},
										1
									},
									
									{
										"LevelM40",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_40
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_40L: VALM_1_40
							{
								align="left";
								pos[]=
								{
									"LevelM40",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP40: Level0
							{
								points[]=
								{
									
									{
										"LevelP40",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP40",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.22,0},
										1
									},
									
									{
										"LevelP40",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_40
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_40L: VALP_1_40
							{
								align="left";
								pos[]=
								{
									"LevelP40",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.20999999,0.024},
									1
								};
							};
							class LevelM45: Level0
							{
								points[]=
								{
									
									{
										"LevelM45",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelM45",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.22,0},
										1
									},
									
									{
										"LevelM45",
										{0.31999999,0},
										1
									}
								};
							};
							class VALM_1_45
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.20999999,0.024},
									1
								};
							};
							class VALM_1_45L: VALM_1_45
							{
								align="left";
								pos[]=
								{
									"LevelM45",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.20999999,0.024},
									1
								};
							};
							class LevelP45: Level0
							{
								points[]=
								{
									
									{
										"LevelP45",
										{-0.31999999,0},
										1
									},
									
									{
										"LevelP45",
										{-0.22,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.22,0},
										1
									},
									
									{
										"LevelP45",
										{0.31999999,0},
										1
									}
								};
							};
							class VALP_1_45
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.15000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.20999999,0.024},
									1
								};
							};
							class VALP_1_45L: VALP_1_45
							{
								align="left";
								pos[]=
								{
									"LevelP45",
									{0.20999999,-0.021},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.27000001,-0.021},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.20999999,0.024},
									1
								};
							};
						};
					};
					class Static
					{
						width=4;
						points[]=
						{
							
							{
								"vspeed",
								{0.22,0.56},
								1
							},
							
							{
								"vspeed",
								{0.205,0.55000001},
								1
							},
							
							{
								"vspeed",
								{0.22,0.54000002},
								1
							},
							
							{
								"vspeed",
								{0.22,0.56},
								1
							},
							{},
							
							{
								{0.2,0.59799999},
								1
							},
							
							{
								{0.2,0.78200001},
								1
							},
							{},
							
							{
								{0.2,0.61000001},
								1
							},
							
							{
								{0.18000001,0.61000001},
								1
							},
							{},
							
							{
								{0.19499999,0.76999998},
								1
							},
							
							{
								{0.18000001,0.76999998},
								1
							},
							{},
							
							{
								{0.19499999,0.64999998},
								1
							},
							
							{
								{0.18000001,0.64999998},
								1
							},
							{},
							
							{
								{0.19499999,0.69},
								1
							},
							
							{
								{0.18000001,0.69},
								1
							},
							{},
							
							{
								{0.19499999,0.73000002},
								1
							},
							
							{
								{0.18000001,0.73000002},
								1
							},
							{},
							
							{
								"vspeed",
								{0.77999997,0.56},
								1
							},
							
							{
								"vspeed",
								{0.79500002,0.55000001},
								1
							},
							
							{
								"vspeed",
								{0.77999997,0.54000002},
								1
							},
							
							{
								"vspeed",
								{0.77999997,0.56},
								1
							},
							{},
							
							{
								{0.80000001,0.59799999},
								1
							},
							
							{
								{0.80000001,0.86199999},
								1
							},
							{},
							
							{
								{0.80000001,0.61000001},
								1
							},
							
							{
								{0.82999998,0.61000001},
								1
							},
							{},
							
							{
								{0.80500001,0.85000002},
								1
							},
							
							{
								{0.82999998,0.85000002},
								1
							},
							{},
							
							{
								{0.80500001,0.64999998},
								1
							},
							
							{
								{0.81999999,0.64999998},
								1
							},
							{},
							
							{
								{0.80500001,0.69},
								1
							},
							
							{
								{0.81999999,0.69},
								1
							},
							{},
							
							{
								{0.80500001,0.73000002},
								1
							},
							
							{
								{0.82999998,0.73000002},
								1
							},
							{},
							
							{
								{0.80500001,0.76999998},
								1
							},
							
							{
								{0.81999999,0.76999998},
								1
							},
							{},
							
							{
								{0.80500001,0.81},
								1
							},
							
							{
								{0.81999999,0.81},
								1
							},
							{}
						};
					};
					class SpeedGroup
					{
						condition="speed-2.78";
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									"SliderSpeedSource",
									
									{
										"0.015-0.03",
										0.0099999998
									},
									1
								},
								
								{
									"SliderSpeedSource",
									
									{
										"0.000-0.03",
										0
									},
									1
								},
								
								{
									"SliderSpeedSource",
									
									{
										"0.015-0.03",
										-0.0099999998
									},
									1
								},
								
								{
									"SliderSpeedSource",
									
									{
										"0.015-0.03",
										0.0099999998
									},
									1
								},
								{},
								
								{
									
									{
										"0.25-0.03",
										0.2
									},
									1
								},
								
								{
									
									{
										"0.25-0.03",
										0.52499998
									},
									1
								},
								{},
								
								{
									
									{
										"0.25-0.03",
										0.2
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.2
									},
									1
								},
								{},
								
								{
									
									{
										"0.24-0.03",
										0.26499999
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.26499999
									},
									1
								},
								{},
								
								{
									
									{
										"0.24-0.03",
										0.33000001
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.33000001
									},
									1
								},
								{},
								
								{
									
									{
										"0.24-0.03",
										0.39500001
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.39500001
									},
									1
								},
								{},
								
								{
									
									{
										"0.24-0.03",
										0.46000001
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.46000001
									},
									1
								},
								{},
								
								{
									
									{
										"0.25-0.03",
										0.52499998
									},
									1
								},
								
								{
									
									{
										"0.23-0.03",
										0.52499998
									},
									1
								},
								{}
							};
						};
						class SpeedStatic500
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.220-0.03",
									0.183
								},
								1
							};
							right[]=
							{
								{0.23,0.183},
								1
							};
							down[]=
							{
								
								{
									"0.220-0.03",
									0.213
								},
								1
							};
						};
						class SpeedStatic0
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.220-0.03",
									0.50800002
								},
								1
							};
							right[]=
							{
								{0.23,0.50800002},
								1
							};
							down[]=
							{
								
								{
									"0.220-0.03",
									0.53799999
								},
								1
							};
						};
					};
					class AGL_Radar
					{
						condition="1000-altitudeAGL";
						class Panel
						{
							width=4;
							points[]=
							{
								
								{
									"AGLMove",
									{0.73000002,0.11},
									1
								},
								
								{
									"AGLMove",
									{0.745,0.1},
									1
								},
								
								{
									"AGLMove",
									{0.73000002,0.090000004},
									1
								},
								
								{
									"AGLMove",
									{0.73000002,0.11},
									1
								},
								{},
								
								{
									{0.75,0.19750001},
									1
								},
								
								{
									{0.75,0.52249998},
									1
								},
								{},
								
								{
									{0.75,0.19750001},
									1
								},
								
								{
									{0.76999998,0.19750001},
									1
								},
								{},
								
								{
									{0.72500002,0.52249998},
									1
								},
								
								{
									{0.77499998,0.52249998},
									1
								},
								{},
								
								{
									{0.755,0.26249999},
									1
								},
								
								{
									{0.76999998,0.26249999},
									1
								},
								{},
								
								{
									{0.755,0.32749999},
									1
								},
								
								{
									{0.76999998,0.32749999},
									1
								},
								{},
								
								{
									{0.755,0.39250001},
									1
								},
								
								{
									{0.76999998,0.39250001},
									1
								},
								{},
								
								{
									{0.755,0.45750001},
									1
								},
								
								{
									{0.76999998,0.45750001},
									1
								},
								{}
							};
						};
						class AltStatic50
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.79000002,0.17},
								1
							};
							right[]=
							{
								{0.82999998,0.17},
								1
							};
							down[]=
							{
								{0.79000002,0.205},
								1
							};
						};
					};
					class RadarBoxes
					{
						pos0[]={0.5,0.31};
						pos10[]={1.146,0.88380003};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.00177647},
								1
							},
							
							{
								{0.0020000001,-0.00177647},
								1
							},
							
							{
								{0.0020000001,0.00177647},
								1
							},
							
							{
								{-0.0020000001,0.00177647},
								1
							},
							
							{
								{-0.0020000001,-0.00177647},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.017764701},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.017764701},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.017764701},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.017764701},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.017764701},
									1
								}
							};
						};
					};
					class SpeedNumber
					{
						align="right";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						scale=1;
						pos[]=
						{
							{0.07,0.07},
							1
						};
						right[]=
						{
							{0.15000001,0.07},
							1
						};
						down[]=
						{
							{0.07,0.12},
							1
						};
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=3;
						sourceOffset=0;
						align="right";
						pos[]=
						{
							{0.75999999,0.07},
							1
						};
						right[]=
						{
							{0.83999997,0.07},
							1
						};
						down[]=
						{
							{0.75999999,0.12},
							1
						};
					};
					class AltNumberStatic: AltNumber
					{
						source="static";
						align="right";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							{0.88,0.090000004},
							1
						};
						right[]=
						{
							{0.93000001,0.090000004},
							1
						};
						down[]=
						{
							{0.88,0.13},
							1
						};
					};
					class VspeedNumber: SpeedNumber
					{
						source="vspeed";
						sourceScale=1;
						sourceLength=2;
						align="left";
						pos[]=
						{
							{0.81,0.55000001},
							1
						};
						right[]=
						{
							{0.88999999,0.55000001},
							1
						};
						down[]=
						{
							{0.81,0.60000002},
							1
						};
					};
					class VspeedNumberStaticP30
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.83499998,0.58999997},
							1
						};
						right[]=
						{
							{0.88499999,0.58999997},
							1
						};
						down[]=
						{
							{0.83499998,0.63},
							1
						};
					};
					class VspeedNumberStaticZERO
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.83499998,0.70999998},
							1
						};
						right[]=
						{
							{0.88499999,0.70999998},
							1
						};
						down[]=
						{
							{0.83499998,0.75},
							1
						};
					};
					class VspeedNumberStaticM30
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.83499998,0.82999998},
							1
						};
						right[]=
						{
							{0.88499999,0.82999998},
							1
						};
						down[]=
						{
							{0.83499998,0.87},
							1
						};
					};
					class NevimStatic3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.14,0.58999997},
							1
						};
						right[]=
						{
							{0.19,0.58999997},
							1
						};
						down[]=
						{
							{0.14,0.63},
							1
						};
					};
					class NevimStaticZERO
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.14,0.70999998},
							1
						};
						right[]=
						{
							{0.19,0.70999998},
							1
						};
						down[]=
						{
							{0.14,0.75},
							1
						};
					};
					class NevimStatic1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.14,0.75},
							1
						};
						right[]=
						{
							{0.19,0.75},
							1
						};
						down[]=
						{
							{0.14,0.79000002},
							1
						};
					};
					class HeadingArrows
					{
						width=4;
						points[]=
						{
							
							{
								
								{
									"0.25",
									"0.055+0.01+0.025"
								},
								1
							},
							
							{
								
								{
									0.75,
									"0.055+0.01+0.025"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 - 0.016",
									"0.09 - 0.018"
								},
								1
							},
							
							{
								{0.5,0.090000004},
								1
							},
							
							{
								
								{
									"0.5 + 0.016",
									"0.09 - 0.018"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5 - 0.035",
									"0.055 - 0.018"
								},
								1
							},
							
							{
								
								{
									"0.5 + 0.035",
									"0.055 - 0.018"
								},
								1
							},
							
							{
								
								{
									"0.5 + 0.035",
									"0.055 + 0.018"
								},
								1
							},
							
							{
								
								{
									"0.5 - 0.035",
									"0.055 + 0.018"
								},
								1
							},
							
							{
								
								{
									"0.5 - 0.035",
									"0.055 - 0.018"
								},
								1
							},
							{}
						};
					};
					class HeadingText
					{
						source="heading";
						align="center";
						sourceScale=1;
						scale=1;
						pos[]=
						{
							"Heading_number_anchor",
							{0,0},
							1
						};
						right[]=
						{
							"Heading_number_anchor",
							
							{
								"0 + 0.041",
								0
							},
							1
						};
						down[]=
						{
							"Heading_number_anchor",
							
							{
								0,
								"0  + 0.04"
							},
							1
						};
					};
					class HeadingScale
					{
						source="heading";
						horizontal=1;
						sourceScale=0.1;
						width=3;
						top=0.25;
						bottom=0.75;
						lineXleft=0.1;
						lineYright=0.090000004;
						lineXleftMajor=0.11;
						lineYrightMajor=0.090000004;
						majorLineEach=2;
						numberEach=2;
						step=0.5;
						stepSize=0.055555601;
						align="center";
						scale=1;
						pos[]=
						{
							"0.32-0.072",
							"0.0+0.11"
						};
						right[]=
						{
							"0.35-0.072",
							"0.0+0.11"
						};
						down[]=
						{
							"0.32-0.072",
							"0.03+0.11"
						};
					};
				};
			};
		};
		hideWeaponsCargo=1;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1;
		LockDetectionSystem="8";
		incomingMissileDetectionSystem="8+16";
		driverCanSee=55;
		memoryPointsGetInCargo="pos_cargo";
		memoryPointsGetInCargoDir="pos_cargo_dir";
		cargoaction[]=
		{
			"passenger_flatground_generic04"
		};
		cargoCompartments[]=
		{
			"Compartment3"
		};
		viewCargoShadow=1;
		driverCanEject=1;
		driverCompartments=1;
		ejectSpeed[]={1,0,11};
		cargoGetInAction[]=
		{
			"GetInHeli_Transport_01Cargo"
		};
		cargoGetOutAction[]=
		{
			"RHS_HIND_Cargo_Exit"
		};
		class textureSources
		{
			class standard
			{
				displayName="Grey";
				factions[]=
				{
					"rhs_faction_vvs_c",
					"rhs_faction_vvs"
				};
			};
			class Camo: standard
			{
				displayName="Camo";
			};
		};
		class Attributes
		{
			class rhs_hideRadome
			{
				displayName="Hide radome";
				tooltip="Hide the rotor-mounted radome";
				property="rhs_hideRadome";
				control="CheckboxNumber";
				expression="_this animate ['radome_hide',_value,true]";
				defaultValue="0";
			};
			class rhs_decalNumber_type
			{
				displayName="Define font type of side number";
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI28NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default";
						value="NoChange";
					};
					class AviaYellow
					{
						name="Aviation Yellow";
						value="AviaYellow";
					};
					class AviaBlue
					{
						name="Aviation Blue";
						value="AviaBlue";
						defaultValue="AviaBlue";
					};
					class AviaRed
					{
						name="Aviation Red";
						value="AviaRed";
					};
					class AviaWhiteOut
					{
						name="Aviation White Out";
						value="AviaWhiteOut";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
					};
					class Default
					{
						name="Default (White)";
						value="Default";
					};
					class DefaultRed
					{
						name="Default (Red)";
						value="DefaultRed";
					};
					class BoldRed
					{
						name="Bold Red";
						value="BoldRed";
					};
					class CDF
					{
						name="CDF";
						value="CDF";
					};
					class Handpaint
					{
						name="Handpaint";
						value="Handpaint";
					};
					class HandpaintBlack
					{
						name="Handpaint Black";
						value="HandpaintBlack";
					};
					class Iraqi
					{
						name="Iraqi";
						value="Iraqi";
					};
				};
			};
			class rhs_decalNumber
			{
				displayName="Set side number";
				tooltip="Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI28NumberPlaces}else{[_this, [['Number', cRHSAIRMI28NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail
			{
				displayName="Define tail decal";
				tooltip="Define tail decal that will be drawn on vehicle";
				property="rhs_decalTail";
				control="Combo";
				expression="[_this,[['Label', cRHSAIRMI28TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue=-1;
				class values
				{
					class Default
					{
						name="Default";
						value=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class VVS
					{
						name="VVS Russia";
						value=3;
						defaultValue=3;
					};
				};
			};
		};
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		selectionDamage="trup";
		selectionShowDamage="poskozeni";
		slingLoadMaxCargoMass=0;
		precisegetinout=1;
		memoryPointsGetInDriverPrecise="pos driver";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		driverLeftLegAnimName="pedalR";
		driverRightLegAnimName="pedalL";
		memoryPointLRocket="rocket_1";
		memoryPointRRocket="rocket_2";
		memoryPointLMissile="missile_1";
		memoryPointRMissile="missile_2";
		memoryPointGun[]=
		{
			"machinegun",
			"machinegun2"
		};
		gunBeg[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunEnd[]=
		{
			"chamber_1",
			"chamber_2"
		};
		particlesPos="chamber_1";
		particlesDir="muzzle_1";
		selectionFireAnim="";
		primaryGunner=2;
		weaponsGroup1=128;
		weaponsGroup4=64;
		weapons[]=
		{
			"rhs_weap_MASTERSAFE"
		};
		magazines[]={};
		transportsoldier=3;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_MASTERSAFE",
					"rhs_weap_2a42"
				};
				magazines[]=
				{
					"rhs_mag_3ubr11_125",
					"rhs_mag_3uof8_125"
				};
				memoryPointGun="muzzle_1";
				particlesPos="chamber_1";
				particlesDir="muzzle_1";
				selectionFireAnim="zasleh";
				maxhorizontalrotspeed=1.6;
				maxverticalrotspeed=1.6;
				initelev=4;
				initturn=0;
				maxelev=13;
				minelev=-40;
				maxturn=110;
				minturn=-110;
				viewGunnerShadow=1;
				precisegetinout=1;
				commanding=-1;
				primaryGunner=1;
				isCopilot=0;
				CanEject=1;
				canHideGunner=0;
				usePiP=1;
				stabilizedInAxes=3;
				turretinfotype="RHS_RscWeaponMi28_FCS";
				canUseScanners=0;
				allowTabLock=0;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.155;
					maxanglex=50;
					maxangley=100;
					maxfov=0.155;
					minanglex=-50;
					minangley=-100;
					minfov=0.057;
				};
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1"
				};
				class OpticsIn
				{
					class Samshin_WFOV
					{
						initanglex=0;
						initangley=0;
						maxanglex=30;
						maxangley=100;
						minanglex=-30;
						minangley=-100;
						initfov=0.23333301;
						maxfov=0.23333301;
						minfov=0.23333301;
						thermalmode[]={0,1};
						visionmode[]=
						{
							"Normal",
							"TI"
						};
						hitpoint="Hit_Optic_OPS28";
					};
					class Samshin_NFOV: Samshin_WFOV
					{
						initfov=0.102941;
						maxfov=0.102941;
						minfov=0.102941;
					};
					class Samshin_NFOV_Stabilised: Samshin_NFOV
					{
						initfov=0.0318182;
						maxfov=0.0318182;
						minfov=0.0318182;
						directionStabilized=1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,16000,24000,4000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,16000,24000,4000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Samshin_Pilot
				{
					initanglex=0;
					initangley=0;
					maxanglex=30;
					maxangley=100;
					minanglex=-30;
					minangley=-100;
					initfov=0.23333301;
					maxfov=0.23333301;
					minfov=0.23333301;
					thermalmode[]={0,1};
					visionmode[]=
					{
						"Normal",
						"TI"
					};
					hitpoint="Hit_Optic_TOES521";
				};
				class Samshin_NFOV: Samshin_Pilot
				{
					initfov=0.102941;
					maxfov=0.102941;
					minfov=0.102941;
				};
				class Samshin_NFOV_Stabilised: Samshin_NFOV
				{
					initfov=0.0233333;
					maxfov=0.0233333;
					minfov=0.0233333;
					directionStabilized=1;
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-120;
			maxTurn=120;
			initTurn=0;
			minElev=-13;
			maxElev=80;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		memoryPointDriverOptics="toes521_view";
		driverWeaponsInfoType="RHS_RscWeaponMi28_Pilot_FCS";
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1_dir";
				position="exhaust1";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2_dir";
				position="exhaust2";
				effect="ExhaustEffectHeli";
			};
		};
		armor=60;
		armorStructural=20;
		damageResistance=0.0055499999;
		hullDamageCauseExplosion=1;
		epeImpulseDamageCoef=1;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=-150;
				minimalHit=-0.1;
				radius=0.1;
				name="hull_hit";
				passThrough=1;
			};
			class HitFuel: HitFuel
			{
				armor=1.3;
				radius=0.125;
				minimalHit=0.050000001;
				explosionShielding=1;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.6;
				radius=0.40000001;
				minimalHit=0.15000001;
				explosionShielding=1.5;
			};
			class HitEngine1: HitEngine1
			{
				armor=-50;
				radius=0.34999999;
				explosionShielding=1;
				minimalHit=0.1;
				name="engine_1_hit";
				armorComponent="Hit_Engine_1";
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
				armorComponent="Hit_Engine_2";
			};
			class HitEngine: HitEngine2
			{
				armor=999;
				name="engine_hit";
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitWings
			{
				armor=999;
				explosionShielding=1;
				material=51;
				radius=0.15000001;
				passThrough=0.1;
				name="hitwings";
			};
			class HitVRotor
			{
				armor=1.5;
				explosionShielding=1;
				material=51;
				radius=0.44999999;
				passThrough=0.30000001;
				name="tail_rotor_hit";
			};
			class HitHRotor
			{
				armor=1.5;
				explosionShielding=1;
				material=51;
				radius=0.44999999;
				passThrough=0.1;
				name="main_rotor_hit";
			};
			class HitRotor: HitVRotor
			{
				armor=999;
				name="engine_hit";
				depends="(HitVRotor + HitHRotor)";
			};
			class Hit_Radar
			{
				armor=-30;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Radar";
				passThrough=0;
			};
			class Hit_Optic_TOES521
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_TOES521";
				passThrough=0;
			};
			class Hit_Optic_OPS28
			{
				armor=-40;
				explosionShielding=0;
				name="";
				armorComponent="Hit_Optic_OPS28";
				passThrough=0;
			};
			class HitGlass1
			{
				armor=-40;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass1";
				name="glass1";
			};
			class HitGlass2
			{
				armor=-40;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass2";
				name="glass2";
			};
			class HitGlass3
			{
				armor=-40;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass3";
				name="glass3";
			};
			class HitGlass4
			{
				armor=-40;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass4";
				name="glass4";
			};
			class HitGlass5
			{
				armor=-40;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass5";
				name="glass5";
			};
			class HitGlass6
			{
				armor=-40;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass6";
				name="glass6";
			};
			class HitGlass7
			{
				armor=-40;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass7";
				name="glass7";
			};
			class HitGlass8
			{
				armor=-40;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				armorComponent="glass8";
				name="glass8";
			};
			class HitGear
			{
				armor=-50;
				explosionShielding=0.0099999998;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				armorComponent="Hit_Gear";
				name="Hit_Gear";
			};
			class HitHydraulics
			{
				armor=-50;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				armorComponent="hit_hydraulics";
				name="hit_hydraulics";
			};
			class HitTransmission
			{
				armor=-80;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				armorComponent="hit_transmission";
				name="hit_transmission";
			};
			class HitTail
			{
				armor=-150;
				explosionShielding=0.2;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				armorComponent="Hit_Tail";
				name="Hit_Tail";
			};
			class HitPylon1
			{
				armor=-30;
				material=-1;
				name="hit_pylon_1";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
				depends="HitWings";
			};
			class HitPylon2
			{
				armor=-30;
				material=-1;
				name="hit_pylon_2";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
				depends="HitWings";
			};
			class HitPylon3
			{
				armor=-30;
				material=-1;
				name="hit_pylon_3";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
				depends="HitWings";
			};
			class HitPylon4
			{
				armor=-30;
				material=-1;
				name="hit_pylon_4";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
				depends="HitWings";
			};
		};
		class Damage;  //found empty after stripping
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=75;
						angleRangeVertical=75;
						maxGroundNoiseDistance=0;
						maxFogSeeThrough=0.30000001;
						animDirection="mainGun";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar;  //found empty after stripping
					class DataLinkSensorComponent: SensorTemplateDataLink;  //found empty after stripping
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,16000,24000,4000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,16000,24000,4000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_mi28\data\loadouts\RHS_Mi28_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_B13L1",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=550;
						UIposition[]={0.54000002,0.40000001};
						turret[]={};
						hitpoint="HitPylon1";
					};
					class pylon2: pylon1
					{
						UIposition[]={0.12,0.40000001};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_B13L1",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_9m120_Mi28"
						};
						attachment="rhs_mag_9M120M_Mi28_8x";
						maxweight=400;
						UIposition[]={0.60000002,0.44999999};
						turret[]={0};
						hitpoint="HitPylon3";
					};
					class pylon4: pylon3
					{
						UIposition[]={0.059999999,0.44999999};
						mirroredMissilePos=3;
						hitpoint="HitPylon4";
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_UV26",
							"RHS_cm_UV26_x2",
							"RHS_cm_UV26_x4"
						};
						attachment="rhs_UV26_CMFlare_Chaff_Magazine_x4";
						maxweight=800;
						UIposition[]={0.33000001,0};
					};
				};
				class Presets
				{
					class Bomb
					{
						attachment[]=
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Bomb";
					};
					class HeavyBomb
					{
						attachment[]=
						{
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Heavy Bomb";
					};
					class ClusterMine
					{
						attachment[]=
						{
							"rhs_mag_kmgu2_pfm1",
							"rhs_mag_kmgu2_pfm1",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="KMGU-2 (AP Mines)";
					};
					class ClusterHE
					{
						attachment[]=
						{
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="KMGU-2 (HE)";
					};
					class UPK
					{
						attachment[]=
						{
							"rhs_mag_upk23_mixed",
							"rhs_mag_upk23_mixed",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="UPK-23-250";
					};
					class CAS
					{
						attachment[]=
						{
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support";
					};
					class HeavyCAS
					{
						attachment[]=
						{
							"rhs_mag_b13l1_s13b",
							"rhs_mag_b13l1_s13b",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support (S-13)";
					};
					class Rockets
					{
						attachment[]=
						{
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8df",
							"rhs_mag_b8v20a_s8df",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Rockets";
					};
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_Pilot
				{
					color[]={40,20,20};
					ambient[]={0,0,0};
					intensity=5.5;
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
						hardLimitStart=0.55000001;
						hardLimitEnd=0.75;
					};
					point="light_pilot";
				};
			};
			class Comp2
			{
				class Light_Gunner
				{
					color[]={40,20,20};
					ambient[]={0,0,0};
					intensity=2.5;
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
						hardLimitStart=1.45;
						hardLimitEnd=2.45;
					};
					point="light_gunner";
				};
			};
			class Comp3
			{
				class Light_Cargo
				{
					color[]={40,20,20};
					ambient[]={0,0,0};
					intensity=2.5;
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
						hardLimitStart=1.45;
						hardLimitEnd=2.45;
					};
					point="light_cargo";
				};
			};
		};
		class markerlights
		{
			class GreenStill
			{
				activeLight=0;
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=55;
				blinking=0;
				brightness=0.0099999998;
				flareSize=0.5;
				name="zeleny pozicni";
				useFlare=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
			class RedStill: GreenStill
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
			};
			class WhiteStill: GreenStill
			{
				color[]={0.80000001,0.80000001,0.80000001};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
			};
			class WhiteBlicking: GreenStill
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				name="bily pozicni blik";
			};
			class RedBlinking: WhiteBlicking
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="cerveny pozicni blik";
			};
		};
		class EventHandlers: Eventhandlers
		{
			hit="";
			class RHS_EventHandlers
			{
				hit="_this call RHS_fnc_AI_eject";
				init="_this call rhs_fnc_mi28_init";
				incomingMissile="_this spawn rhs_fnc_rwr_mi28";
				getout="_this spawn rhs_fnc_mi28_ejection";
				engine="_this call rhs_fnc_addParachutes;";
			};
		};
	};
	class rhs_mi28n_base: rhs_mi28_base
	{
		displayName="$STR_MI28N_name";
		selectionFireAnim="";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=75;
						angleRangeVertical=75;
						maxGroundNoiseDistance=0;
						maxFogSeeThrough=0.30000001;
						animDirection="mainGun";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar;  //found empty after stripping
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal=120;
						angleRangeVertical=100;
						maxFogSeeThrough=1;
						maxTrackableSpeed=555;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink;  //found empty after stripping
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000,25000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,8000,16000,25000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class rhs_mi28n_S13_base: rhs_mi28n_base
	{
		displayName="Mi-28N (S-13)";
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_b13l_s13b";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_b13l_s13b";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_9M120M_Mi28_8x";
						turret[]={0};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_9M120M_Mi28_8x";
						turret[]={0};
					};
					class cmDispenser: cmDispenser;  //found empty after stripping
				};
			};
		};
	};
	class rhs_mi28n_vvs: rhs_mi28n_base;  //found empty after stripping
	class rhs_mi28n_vvsc: rhs_mi28n_base;  //found empty after stripping
	class rhs_mi28n_s13_vvs: rhs_mi28n_S13_base;  //found empty after stripping
	class rhs_mi28n_s13_vvsc: rhs_mi28n_S13_base;  //found empty after stripping
	class Wreck_base_F;
	class Land_rhs_mi28_wreck: Wreck_base_F
	{
		displayName="Mi-28N Wreck";
		class Armory
		{
			disabled=1;
		};
		icon="iconObject_1x2";
	};
	class Land_rhs_mi28_wreck2: Land_rhs_mi28_wreck
	{
		displayName="Mi-28N Wreck 2";
	};
	class rhs_mi28_wing_left: Plane
	{
		displayName="Mi-28 Wing";
		draconicForceXCoef=17.200001;
		draconicForceYCoef=12.6;
		draconicForceZCoef=10.15;
		draconicTorqueXCoef=11.29;
		draconicTorqueYCoef=13.1;
		hideUnitInfo=1;
		hasdriver=0;
		weapons[]={};
		magazines[]={};
		fuelCapacity=0;
		secondaryExplosion=0;
		fuelExplosionPower=0;
		explosionEffect="";
		driveOnComponent[]={};
		class Turrets;  //found empty after stripping
		class Eventhandlers
		{
			HandleDamage="deleteVehicle (_this select 0)";
		};
		SLX_XEH_DISABLED=1;
	};
	class rhs_mi28_wing_right: rhs_mi28_wing_left;  //found empty after stripping
	class rhs_mi28_door_gunner: rhs_mi28_wing_left
	{
		displayName="Mi-28 Door";
	};
	class rhs_mi28_door_pilot: rhs_mi28_door_gunner;  //found empty after stripping
	class rhs_mi28_balonetes: rhs_mi28_door_gunner;  //found empty after stripping
};
