class CfgPatches
{
		weapons[]={};
		requiredAddons[]={};
	};
	class rhsusf_c_hmmwv
	{
		units[]=
		{
			"rhsusf_m998_w_2dr",
			"rhsusf_m998_w_2dr_halftop",
			"rhsusf_m998_w_2dr_fulltop",
			"rhsusf_m998_w_s_2dr",
			"rhsusf_m998_w_s_2dr_halftop",
			"rhsusf_m998_w_s_2dr_fulltop",
			"rhsusf_m998_d_2dr",
			"rhsusf_m998_d_2dr_halftop",
			"rhsusf_m998_d_2dr_fulltop",
			"rhsusf_m998_d_s_2dr",
			"rhsusf_m998_d_s_2dr_halftop",
			"rhsusf_m998_d_s_2dr_fulltop",
			"rhsusf_m998_w_4dr",
			"rhsusf_m998_w_4dr_halftop",
			"rhsusf_m998_w_4dr_fulltop",
			"rhsusf_m998_w_s_4dr",
			"rhsusf_m998_w_s_4dr_halftop",
			"rhsusf_m998_w_s_4dr_fulltop",
			"rhsusf_m998_d_4dr",
			"rhsusf_m998_d_4dr_halftop",
			"rhsusf_m998_d_4dr_fulltop",
			"rhsusf_m998_d_s_4dr",
			"rhsusf_m998_d_s_4dr_halftop",
			"rhsusf_m998_d_s_4dr_fulltop",
			"rhsusf_m1025_w",
			"rhsusf_m1025_w_s",
			"rhsusf_m1025_d",
			"rhsusf_m1025_d_s",
			"rhsusf_m1025_w_m2",
			"rhsusf_m1025_w_s_m2",
			"rhsusf_m1025_d_m2",
			"rhsusf_m1025_d_s_m2",
			"rhsusf_m1025_w_mk19",
			"rhsusf_m1025_w_s_mk19",
			"rhsusf_m1025_d_mk19",
			"rhsusf_m1025_d_s_mk19",
			"rhsusf_m966_w",
			"rhsusf_m966_d",
			"rhsusf_m1043_w",
			"rhsusf_m1043_d",
			"rhsusf_m1043_w_s",
			"rhsusf_m1043_d_s",
			"rhsusf_m1043_w_m2",
			"rhsusf_m1043_d_m2",
			"rhsusf_m1043_w_s_m2",
			"rhsusf_m1043_d_s_m2",
			"rhsusf_m1043_w_mk19",
			"rhsusf_m1043_d_mk19",
			"rhsusf_m1043_w_s_mk19",
			"rhsusf_m1043_d_s_mk19",
			"rhsusf_m1045_w",
			"rhsusf_m1045_d",
			"rhsusf_m1045_w_s",
			"rhsusf_m1045_d_s"
		};
		weapons[]={};
		name="M998, M1025, M1043 & M1045 Vehicles";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class m1025_windowHandler
			{
				file="\rhsusf\addons\rhsusf_c_hmmwv\scripts\windowHandler.sqf";
				description="M1025 window handler";
			};
			class m1025_doorHandler
			{
				file="\rhsusf\addons\rhsusf_c_hmmwv\scripts\doorHandler.sqf";
				description="M1025 door handler";
			};
			class m1025_doorToggle
			{
				file="\rhsusf\addons\rhsusf_c_hmmwv\scripts\doorToggle.sqf";
				description="M1025 door toggle";
			};
			class hmmwv_setDecal
			{
				file="\rhsusf\addons\rhsusf_c_hmmwv\scripts\setDecal.sqf";
				description="Decal handler for M1025";
			};
		};
	};
	class RHSUSF
	{
		tag="RHSUSF";
		class functions
		{
			class carLightToggle
			{
				file="\rhsusf\addons\rhsusf_c_hmmwv\scripts\rhs_lightToggle.sqf";
				description="Car Light Toggle";
			};
		};
	};
};
class DefaultEventhandlers;
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
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
	};
	class MRAP_01_base_F: Car_F
	{
		class Sounds;
	class rhsusf_hmmwe_base: MRAP_01_base_F
	{
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",
					0.39810717,
					1,
					150
				};
				frequency="0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
				volume="engineOn*camPos*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",
					0.44668359,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
				volume="engineOn*camPos*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",
					0.56234133,
					1,
					300
				};
				frequency="0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
				volume="engineOn*camPos*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",
					0.70794576,
					1,
					350
				};
				frequency="0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
				volume="engineOn*camPos*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(2569/	3400),(2796/	3400)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",
					1,
					1,
					400
				};
				frequency="0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
				volume="engineOn*camPos*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",
					0.56234133,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",
					0.70794576,
					1,
					350
				};
				frequency="0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",
					0.89125091,
					1,
					400
				};
				frequency="0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",
					1.1220185,
					1,
					425
				};
				frequency="0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",
					1.2589254,
					1,
					450
				};
				frequency="0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",
					0.25118864,
					1
				};
				frequency="0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",
					0.39810717,
					1
				};
				frequency="0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",
					0.50118721,
					1
				};
				frequency="0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",
					0.63095737,
					1
				};
				frequency="0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",
					0.3548134,
					1
				};
				frequency="0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",
					0.44668359,
					1
				};
				frequency="0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",
					0.56234133,
					1
				};
				frequency="0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",
					0.70794576,
					1
				};
				frequency="0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",
					0.79432821,
					1
				};
				frequency="0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3400) factor[(2116/	3400),(3400/	3400)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1.2589254,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1.1220185,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.2589254,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1.1220185,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.1220185,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.56234133,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		fireResistance=5;
		armor=80;
		minTotalDamageThreshold=0.20999999;
		fuelExplosionPower=0.1;
		secondaryExplosion=0;
		class HitPoints: HitPoints
		{
			class hitwindshield_1
			{
				armor=0.029999999;
				material=-1;
				name="windshield_1";
				armorComponent="windshield_1";
				passThrough=0;
				radius=0.40000001;
			};
			class hitwindshield_2
			{
				armor=0.029999999;
				material=-1;
				name="windshield_2";
				armorComponent="windshield_2";
				passThrough=0;
				radius=0.40000001;
			};
			class HitGlass1
			{
				armor=0.090000004;
				material=-1;
				name="glass1";
				armorComponent="glass1";
				passThrough=0;
				radius=0.40000001;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
				armorComponent="glass2";
				radius=0.40000001;
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
				armorComponent="glass3";
				radius=0.40000001;
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
				armorComponent="glass4";
				radius=0.40000001;
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
				armorComponent="glass5";
				radius=0.40000001;
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
				armorComponent="glass6";
				radius=0.40000001;
			};
			class HitBody
			{
				armor=4.5999999;
				material=-1;
				passThrough=1;
				radius=0.2;
				name="vehicle";
			};
			class hitfuel
			{
				armor=-150;
				passThrough=0.5;
				explosionShielding=0.5;
				radius=0.2;
				name="fuel";
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.2;
				name="wheel_1";
				armorComponent="wheel_1_tire";
				armor=-150;
				minimalHit=-0.045000002;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.2;
				name="wheel_2";
				armorComponent="wheel_2_tire";
				armor=-150;
				minimalHit=-0.045000002;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.2;
				name="wheel_3";
				armorComponent="wheel_3_tire";
				armor=-150;
				minimalHit=-0.045000002;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.2;
				name="wheel_4";
				armorComponent="wheel_4_tire";
				armor=-150;
				minimalHit=-0.045000002;
				explosionShielding=4;
				passThrough=0;
			};
			class HitEngine
			{
				armor=-100;
				minimalhit=-0.1;
				passThrough=0.2;
				radius=0.15000001;
				name="engine";
			};
		};
		selectionDamage="damage";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		driverRightLegAnimName="pedalR";
		driverLeftLegAnimName="pedalL";
		showNVGDriver=1;
		showNVGCargo[]={1};
		extCameraPosition[]={0.5,2,-10};
		supplyRadius=2;
		hideUnitInfo=0;
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust1_1";
				direction="exhaust1_2";
				effect="ExhaustsEffect";
			};
		};
		class Components: Components
		{
				speedPIDWeights[]={0.69999999,0.2,0};
				convoyPIDWeights[]={1,0.0099999998,0.0099999998};
				doRemapSpeed=1;
				remapSpeedRange[]={30,70};
				remapSpeedScalar[]={1,0.34999999};
				doPredictForward=1;
				predictForwardRange[]={1,20};
				steerAheadSaturation[]={0.0099999998,0.40000001};
				speedPredictionMethod=2;
				wheelAngleCoef=0.69999999;
				forwardAngleCoef=0.69999999;
				steeringAngleCoef=1.2;
				differenceAngleCoef=0.40000001;
				stuckMaxTime=3;
				allowOvertaking=1;
				allowDrifting=0;
				allowCollisionAvoidance=1;
				maxWheelAngleDiff=0.26159999;
				minSpeedToKeep=0.1;
				commandTurnFactor=1;
			};
		};
		castDriverShadow=0;
		castCargoShadow=0;
		class Attributes
		{
			class rhs_decalMask
			{
				tooltip="Define decal located on mask & rear of vehicle";
				property="rhs_decalMask";
				control="Combo";
				expression="if(_value != 'NoChange')then{ [_this,'unitdecals_1',_value] call rhs_fnc_hmmwv_setDecal}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default defined";
						value="NoChange";
					};
					class blankdecal_ca
					{
						name="Empty";
						value="82ndab_505reg_1stbn_e25_w_ca";
					};
					class 82ndab_505reg_1stbn_e25_w_ca
					{
						name="82nd AB 505 regiment, 1st BN, E25 - Woodland";
						value="82ndab_505reg_1stbn_e25_w_ca";
					};
					class 82ndab_505reg_1stbn_e25_d_ca
					{
						name="82nd AB 505 regiment, 1st BN, E25 - Desert";
						value="82ndab_505reg_1stbn_e25_d_ca";
					};
					class test_1stbn_e25_w_ca
					{
						name="82nd AB 505 regiment, 1st BN, E25";
						value="test_1stbn_e25_w_ca";
					};
					class 101stab_502reg_2ndbn_a12_w_co
					{
						name="101st AB 502 regiment, 2nd BN, A12 - Woodland";
						value="82ndab_505reg_1stbn_e25_w_ca";
						defaultValue="101stab_502reg_2ndbn_a12_w_co";
					};
					class 101stab_502reg_2ndbn_a12_d_co
					{
						name="101st AB 502 regiment, 2nd BN, A12 - Desert";
						value="101stab_502reg_2ndbn_a12_d_co";
					};
					class 1stcav_1stbn_12th_e25_w_ca
					{
						name="1st Cavalry Div, 2nd Battalion, 12th Cavalry 'Thunder Horse' - Woodland";
						value="1stcav_1stbn_12th_e25_w_ca";
					};
					class 1stcav_1stbn_12th_e25_d_ca
					{
						name="1st Cavalry Div, 2nd Battalion, 12th Cavalry 'Thunder Horse' - Desert";
						value="1stcav_1stbn_12th_e25_d_ca";
					};
					class usmc_210321_ca
					{
						name="USMC 210321";
						value="usmc_210321_ca";
					};
				};
			};
			class rhs_decalDoors: rhs_decalMask
			{
				tooltip="Define decals located on doors & vehicle rear";
				property="rhs_decalDoors";
				expression="if(_value != 'NoChange')then{ [_this,'unitdecals_2',_value] call rhs_fnc_hmmwv_setDecal}";
				class values
				{
					class NoChange
					{
						name="Default defined";
						value="NoChange";
					};
					class blankdecal_ca
					{
						name="Empty";
						value="blankdecal_ca";
					};
					class militarypolice_b_ca
					{
						name="Military Police";
						value="militarypolice_b_ca";
					};
					class e25_ca
					{
						name="E25^";
						value="e25arr_ca";
					};
					class e23_ca
					{
						name="E23^";
						value="e23arr_ca";
					};
					class a12_co
					{
						name="A12^";
						value="a12arr_co";
					};
					class 55_co
					{
						name="55^";
						value="55arr_ca";
					};
					class 05_co
					{
						name="05^";
						value="05arr_ca";
					};
					class arr_co
					{
						name="^";
						value="arr_ca";
					};
					class down_ca
					{
						name="Arrow down";
						value="downarr_ca";
					};
					class pol_isaf_v1_ca
					{
						name="Polish - ISAF v1";
						value="pol_isaf_v1_ca";
					};
					class pol_isaf_v2_ca
					{
						name="Polish - ISAF v2";
						value="pol_isaf_v2_ca";
					};
					class pol_isaf_v3_ca
					{
						name="Polish - ISAF v3";
						value="pol_isaf_v3_ca";
					};
				};
			};
			class rhs_hideCIP
			{
				property="rhs_hideCIP";
				control="CheckboxNumber";
				expression="_this animate ['hide_CIP',_value,true]";
				defaultValue="0";
			};
			class rhs_hideBFT: rhs_hideCIP
			{
				property="rhs_hideBFT";
				expression="_this animate ['hide_BFT',_value,true]";
			};
			class rhs_hideAntennas: rhs_hideCIP
			{
				property="rhs_hideBFT";
				expression="_this animate ['hide_Antenna',_value,true]";
			};
			class rhs_hideA2Parts: rhs_hideCIP
			{
				property="rhs_hideA2Parts";
				expression="_this animate ['hide_A2_Parts',_value,true]";
			};
			class rhs_HideA2Bumper: rhs_hideCIP
			{
				property="rhs_HideA2Bumper";
				expression="_this animateSource ['Hide_A2Bumper',_value,true]";
			};
			class Door_LF: rhs_hideCIP
			{
				property="Door_LF";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class Door_RF: Door_LF
			{
				property="Door_RF";
			};
			class Door_LB: Door_LF
			{
				property="Door_LB";
			};
			class Door_RB: Door_LF
			{
				property="Door_RB";
			};
		};
	};
	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base
	{
		side=1;
		normalSpeedForwardCoef=0.69999999;
		slownSpeedForwardCoef=0.55000001;
		turnCoef=3;
		terrainCoef=0.5;
		simulation="carx";
		dampersBumpCoef=0;
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=109;
		fuelCapacity=24;
		wheelCircumference=2.95;
		brakeIdleSpeed=2.5;
		canFloat=0;
		maxFordingDepth=0;
		waterSpeedFactor=0.30000001;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness=20;
		switchTime=0.5;
		latency=1;
		changeGearType="effective";
		changeGearOmegaRatios[]={1,0.29411799,0.205882,0.14705899,0.92647099,0.470588,0.76470602,0.35294101,0.85294098,0.5,1,0.64705902};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.0699999,
				"N",
				0,
				"D1",
				2.48,
				"D2",
				1.48,
				"D3",
				1,
				"D4",
				0.75
			};
			TransmissionRatios[]=
			{
				"High",
				6
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=2.7;
		rearBias=1.9;
		centreBias=1.5;
		clutchStrength=85;
		transmissionLosses=20;
		dampingRateFullThrottle=0.15000001;
		dampingRateZeroThrottleClutchEngaged=2.8;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.191176,0.70351797},
			{0.29411799,0.77889401},
			{0.41176501,0.91122299},
			{0.52941197,1},
			{0.70588201,0.97654903},
			{0.76470602,0.83584601},
			{0.941176,0.79062003},
			{1.05971,0}
		};
		engineMOI=7;
		enginePower=160;
		peakTorque=597;
		minOmega=41;
		maxOmega=356.04999;
		idleRPM=650;
		redRPM=3400;
		engineLosses=12;
		thrustDelay=0.80000001;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=5.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;
		accelAidForceYOffset=-1.25;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.25;
				mass=80;
				MOI=10;
				dampingRate=0.1;
				maxBrakeTorque=7000;
				maxHandBrakeTorque=0;
				maxCompression=0.1;
				maxDroop=0.1;
				sprungMass=-1;
				springStrength=45000;
				springDamperRate=9157;
				longitudinalStiffnessPerUnitGravity=7500;
				latStiffX=40;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,2.5},
					{0.5,2.3},
					{1,2}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=30000;
			};
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR: RF
			{
				steering=0;
				maxHandBrakeTorque=30000;
			};
		};
		typicalCargo[]=
		{
			"rhsusf_army_ocp_driver"
		};
		nameSound="Car";
		attenuationEffectType="OpenCarAttenuation";
		soundAttenuationCargo[]={0};
		displayname="M1097A2 (2D/Open)";
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m998_2dr_ca.paa";
		damperSize=0.15000001;
		damperForce=1;
		damperDamping=1;
		cargoDoors[]={};
		memoryPointsGetInCoDriver="pos_codriver";
		memoryPointsGetInCoDriverDir="pos_codriver_dir";
		memoryPointsGetInDriver="pos_driver";
		memoryPointsGetInDriverDir="pos_driver_dir";
		threat[]={0,0,0};
		castDriverShadow=1;
		castCargoShadow=1;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=4;
				maxTurn=105;
				minTurn=20;
				minElev=-45;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=1;
				maxTurn=-34;
				minTurn=-95;
			};
		};
		class Attributes: Attributes
		{
		};
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
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
	};
	class rhsusf_m998_w_s_2dr: rhsusf_m998_w_2dr
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1123 (2D/Open/Snorkel)";
	};
	class rhsusf_m998_d_s_2dr: rhsusf_m998_w_s_2dr
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
	};
	class rhsusf_m998_w_2dr_halftop: rhsusf_m998_w_2dr
	{
		displayname="M1097A2 (2D/Half)";
		soundAttenuationCargo[]={1,0};
		class Turrets: Turrets
		{
		};
	};
	class rhsusf_m998_w_s_2dr_halftop: rhsusf_m998_w_2dr_halftop
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1123 (2D/Half/Snorkel)";
	};
	class rhsusf_m998_d_s_2dr_halftop: rhsusf_m998_w_s_2dr_halftop
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
	};
	class rhsusf_m998_w_2dr_fulltop: rhsusf_m998_w_2dr_halftop
	{
		displayname="M1097A2 (2D)";
		attenuationEffectType="RHS_CarAttenuation";
		soundAttenuationCargo[]={1};
		class Sounds: Sounds
		{
			class RainIn
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_sounds\misc\rain.wss",
					1.4125376,
					1
				};
				frequency=1;
				volume="rain*(1-camPos)";
			};
			class RainExt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_sounds\misc\rain.wss",
					1.4125376,
					1
				};
				frequency=1;
				volume="rain*camPos";
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02
			{
				maxElev=15;
			};
		};
	};
	class rhsusf_m998_w_s_2dr_fulltop: rhsusf_m998_w_2dr_fulltop
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1123 (2D/Snorkel)";
	};
	class rhsusf_m998_d_s_2dr_fulltop: rhsusf_m998_w_s_2dr_fulltop
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
	};
	class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr
	{
		displayname="M1097A2 (4D/Open)";
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m998_4dr_ca.paa";
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=4;
				maxTurn=105;
				minTurn=-80;
				minElev=-45;
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=1;
				maxTurn=-34;
				minTurn=-95;
			};
			class CargoTurret_04: CargoTurret_03
			{
				proxyIndex=2;
				maxTurn=-20;
				minTurn=-95;
			};
			class CargoTurret_05: CargoTurret_03
			{
				proxyIndex=3;
				maxTurn=95;
				minTurn=38;
			};
		};
		class Attributes: Attributes
		{
		};
	};
	class rhsusf_m998_w_s_4dr: rhsusf_m998_w_4dr
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1123 (4D/Open/Snorkel)";
	};
	class rhsusf_m998_d_s_4dr: rhsusf_m998_w_s_4dr
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
	};
	class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr
	{
		displayname="M1097A2 (4D/Half)";
		soundAttenuationCargo[]={1,0};
		class CargoTurret;
		class Turrets: Turrets
		{
		};
	};
	class rhsusf_m998_w_s_4dr_halftop: rhsusf_m998_w_4dr_halftop
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1123 (4D/Half/Snorkel)";
	};
	class rhsusf_m998_d_s_4dr_halftop: rhsusf_m998_w_s_4dr_halftop
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
	};
	class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop
	{
		displayname="M1097A2 (4D)";
		attenuationEffectType="RHS_CarAttenuation";
		soundAttenuationCargo[]={1};
		class Sounds: Sounds
		{
			class RainIn
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_sounds\misc\rain.wss",
					1.4125376,
					1
				};
				frequency=1;
				volume="rain*(1-camPos)";
			};
			class RainExt
			{
				sound[]=
				{
					"rhsusf\addons\rhsusf_sounds\misc\rain.wss",
					1.4125376,
					1
				};
				frequency=1;
				volume="rain*camPos";
			};
		};
		class CargoTurret;
	};
	class rhsusf_m998_w_s_4dr_fulltop: rhsusf_m998_d_4dr_fulltop
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1123 (4D/Snorkel)";
	};
	class rhsusf_m998_d_s_4dr_fulltop: rhsusf_m998_w_s_4dr_fulltop
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
	};
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
	{
		normalSpeedForwardCoef=0.69999999;
		slownSpeedForwardCoef=0.55000001;
		turnCoef=3;
		terrainCoef=0.5;
		simulation="carx";
		dampersBumpCoef=0;
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=109;
		fuelCapacity=22.5;
		wheelCircumference=2.95;
		brakeIdleSpeed=1.8;
		canFloat=0;
		maxFordingDepth=0;
		waterSpeedFactor=0.30000001;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness=20;
		switchTime=0.5;
		latency=1;
		changeGearType="effective";
		changeGearOmegaRatios[]={1,0.29411799,0.205882,0.14705899,0.92647099,0.470588,0.76470602,0.35294101,0.85294098,0.5,1,0.64705902};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.0699999,
				"N",
				0,
				"D1",
				2.78,
				"D2",
				1.48,
				"D3",
				1,
				"D4",
				0.75
			};
			TransmissionRatios[]=
			{
				"High",
				6
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=2.7;
		rearBias=1.9;
		centreBias=1.5;
		clutchStrength=85;
		transmissionLosses=20;
		dampingRateFullThrottle=0.15000001;
		dampingRateZeroThrottleClutchEngaged=2.8;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.191176,0.70351797},
			{0.29411799,0.77889401},
			{0.41176501,0.91122299},
			{0.52941197,1},
			{0.70588201,0.97654903},
			{0.76470602,0.83584601},
			{0.941176,0.79062003},
			{1.05971,0}
		};
		engineMOI=7;
		enginePower=160;
		peakTorque=597;
		minOmega=41;
		maxOmega=356.04999;
		idleRPM=650;
		redRPM=3400;
		engineLosses=12;
		thrustDelay=0.80000001;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=5.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;
		accelAidForceYOffset=-1.25;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.25;
				mass=40;
				MOI=10;
				dampingRate=0.1;
				maxBrakeTorque=9000;
				maxHandBrakeTorque=0;
				maxCompression=0.1;
				maxDroop=0.1;
				sprungMass=-1;
				springStrength=58550;
				springDamperRate=7500;
				longitudinalStiffnessPerUnitGravity=7500;
				latStiffX=40;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,2.5},
					{0.5,2.3},
					{1,2}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=30000;
			};
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR: RF
			{
				steering=0;
				maxHandBrakeTorque=30000;
			};
		};
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_ca.paa";
		displayname="M1025A2 (Unarmed)";
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		attenuationEffectType="RHS_CarAttenuation";
		class HitPoints: HitPoints
		{
			class hitwindshield_1: hitwindshield_1
			{
				armor=2.29;
			};
			class hitwindshield_2: hitwindshield_2
			{
				armor=2.29;
			};
			class HitGlass1: HitGlass1
			{
				armor=2.0899999;
			};
			class HitGlass2: HitGlass2
			{
				armor=2.0899999;
			};
			class HitGlass3: HitGlass3
			{
				armor=2.0899999;
			};
			class HitGlass4: HitGlass4
			{
				armor=2.0899999;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=2;
				enabledByAnimationSource="ani_window_4";
				maxTurn=-37;
				minTurn=-65;
				maxElev=9;
				minElev=-15;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=3;
				maxTurn=90;
				minTurn=54;
				maxElev=9;
				minElev=-15;
				enabledByAnimationSource="ani_window_3";
			};
		};
		class Attributes: Attributes
		{
			class ani_window_1: Door_LF
			{
				property="ani_window_1";
			};
			class ani_window_2: Door_LF
			{
				property="ani_window_2";
			};
			class ani_window_3: Door_LF
			{
				property="ani_window_3";
			};
			class ani_window_4: Door_LF
			{
				property="ani_window_4";
			};
			class ani_trunk_1: Door_LF
			{
				property="ani_trunk_1";
				expression="_this animate ['%s',_value,true]";
				control="Slider";
			};
		};
		class EventHandlers: EventHandlers
		{
			class rhs_m1025_eh
			{
				getOut="_this call rhs_fnc_m1025_doorHandler";
			};
		};
	};
	class rhsusf_m1025_w_s: rhsusf_m1025_w
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1025A2 (Unarmed/Snorkel)";
	};
	class rhsusf_m1025_w_m2: rhsusf_m1025_w
	{
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_m2_ca.paa";
		displayname="M1025A2 (M2)";
		attenuationEffectType="RHS_CarAttenuation";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_armedcar_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_armedcar_p"
				};
			};
		};
		nameSound="veh_vehicle_armedcar_s";
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
				soundAttenuationTurret="HeliAttenuationGunner";
				ejectDeadGunner=0;
				stabilizedInAxes=0;
				class ViewOptics: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
	};
	class rhsusf_m1025_w_s_m2: rhsusf_m1025_w_m2
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1025A2 (M2/Snorkel)";
	};
	class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2
	{
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1025_mk19_ca.paa";
		displayname="M1025A2 (Mk19)";
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
	class rhsusf_m1025_w_s_Mk19: rhsusf_m1025_w_mk19
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1025A2 (Mk19/Snorkel)";
	};
	class rhsusf_m966_w: rhsusf_m1025_w
	{
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m966_ca.paa";
		displayname="M966A1 (M220A2)";
		attenuationEffectType="RHS_CarAttenuation";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_armedcar_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_armedcar_p"
				};
			};
		};
		nameSound="veh_vehicle_armedcar_s";
		threat[]={0.89999998,0.30000001,0.1};
		class Turrets: Turrets
		{
			class TOW_Turret: MainTurret
			{
				minElev=-10;
				maxElev=30;
				minturn=-180;
				maxturn=180;
				weapons[]=
				{
					"rhs_weap_tow_launcher_static"
				};
				maxHorizontalRotSpeed=0.25;
				maxVerticalRotSpeed=0.15000001;
				ejectDeadGunner=0;
				stabilizedInAxes=0;
				soundAttenuationTurret="HeliAttenuationGunner";
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov="0.7/3";
						minFov="0.7/3";
						maxFov="0.7/3";
						visionMode[]=
						{
							"Normal"
						};
						thermalMode[]={4};
					};
					class Narrow: Wide
					{
						initFov="0.7/13";
						minFov="0.7/13";
						maxFov="0.7/13";
					};
					class Wide_TI: Wide
					{
						initFov="0.7/4";
						minFov="0.7/4";
						maxFov="0.7/4";
						visionMode[]=
						{
							"TI"
						};
					};
					class Narrow_TI: Wide_TI
					{
						initFov="0.7/12";
						minFov="0.7/12";
						maxFov="0.7/12";
					};
				};
			};
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		animationList[]=
		{
			"Hide_A2Bumper",
			1,
			"Hide_Brushguard",
			0.5
		};
	};
	class rhsusf_m1043_w: rhsusf_m1025_w
	{
		normalSpeedForwardCoef=0.69999999;
		slownSpeedForwardCoef=0.55000001;
		turnCoef=3;
		terrainCoef=0.5;
		simulation="carx";
		dampersBumpCoef=0;
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=109;
		fuelCapacity=22.5;
		wheelCircumference=2.95;
		brakeIdleSpeed=1.8;
		canFloat=0;
		maxFordingDepth=0;
		waterSpeedFactor=0.30000001;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness=20;
		switchTime=0.5;
		latency=1;
		changeGearType="effective";
		changeGearOmegaRatios[]={1,0.29411799,0.205882,0.14705899,0.92647099,0.470588,0.76470602,0.35294101,0.85294098,0.5,1,0.64705902};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.0699999,
				"N",
				0,
				"D1",
				2.78,
				"D2",
				1.48,
				"D3",
				1,
				"D4",
				0.75
			};
			TransmissionRatios[]=
			{
				"High",
				6
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=2.7;
		rearBias=1.9;
		centreBias=1.5;
		clutchStrength=85;
		transmissionLosses=20;
		dampingRateFullThrottle=0.15000001;
		dampingRateZeroThrottleClutchEngaged=2.8;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.191176,0.70351797},
			{0.29411799,0.77889401},
			{0.41176501,0.91122299},
			{0.52941197,1},
			{0.70588201,0.97654903},
			{0.76470602,0.83584601},
			{0.941176,0.79062003},
			{1.05971,0}
		};
		engineMOI=7;
		enginePower=160;
		peakTorque=597;
		minOmega=41;
		maxOmega=356.04999;
		idleRPM=650;
		redRPM=3400;
		engineLosses=12;
		thrustDelay=0.80000001;
		engineBrakeCoef=0.80000001;
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=5.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;
		accelAidForceYOffset=-1.25;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.25;
				mass=40;
				MOI=10;
				dampingRate=0.1;
				maxBrakeTorque=9000;
				maxHandBrakeTorque=0;
				maxCompression=0.1;
				maxDroop=0.1;
				sprungMass=-1;
				springStrength=58550;
				springDamperRate=7500;
				longitudinalStiffnessPerUnitGravity=7500;
				latStiffX=40;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,2.5},
					{0.5,2.3},
					{1,2}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=30000;
			};
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR: RF
			{
				steering=0;
				maxHandBrakeTorque=30000;
			};
		};
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_ca.paa";
		displayname="M1043A2 (Unarmed)";
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
	};
	class rhsusf_m1043_w_s: rhsusf_m1043_w
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1043A2 (Unarmed/Snorkel)";
	};
	class rhsusf_m1043_w_m2: rhsusf_m1025_w_m2
	{
		displayname="M1043A2 (M2)";
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_m2_ca.paa";
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
	};
	class rhsusf_m1043_w_s_m2: rhsusf_m1043_w_m2
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1043A2 (M2/Snorkel)";
	};
	class rhsusf_m1043_w_mk19: rhsusf_m1025_w_mk19
	{
		displayname="M1043A2 (Mk19)";
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1043_mk19_ca.paa";
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
	};
	class rhsusf_m1043_w_s_mk19: rhsusf_m1043_w_mk19
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1043A2 (Mk19/Snorkel)";
	};
	class rhsusf_m1045_w: rhsusf_m966_w
	{
		displayname="M1045A2 (M220A2)";
		Picture="\rhsusf\addons\rhsusf_hmmwv\pictures\rhsusf_m1045_ca.paa";
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
		};
		animationList[]={};
	};
	class rhsusf_m1045_w_s: rhsusf_m1045_w
	{
		class Exhausts
		{
			class exhaust1
			{
				position="exhaust2_1";
				direction="exhaust2_2";
				effect="ExhaustsEffect";
			};
		};
		maxFordingDepth=0.75;
		displayname="M1045A2 (M220A2/Snorkel)";
	};
};
