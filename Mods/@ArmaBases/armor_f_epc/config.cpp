class CfgPatches
{
	class A3_Armor_F_EPC_MBT_01
	{
		addonRootClass="A3_Armor_F_EPC";
		requiredAddons[]=
		{
			"A3_Armor_F_EPC",
			"A3_Armor_F_Gamma_MBT_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_MBT_01_TUSK_F"
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
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
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
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
			};
		};
		class HitPoints;
	};
	class MBT_01_base_F: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F;  //found empty after stripping
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
		features="Randomization: No						<br />Camo selections: 3 - hull, main turret, RCWS turret and plates						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 6";
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
					0.52999997
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
					0.51999998
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
					"wheel_podkolol2",
					0.55000001
				},
				
				{
					"wheel_podkolol3",
					0.58999997
				},
				
				{
					"wheel_podkolol4",
					0.62
				},
				
				{
					"wheel_podkolol5",
					0.64999998
				},
				
				{
					"wheel_podkolol6",
					0.68000001
				},
				
				{
					"wheel_podkolop2",
					0.55000001
				},
				
				{
					"wheel_podkolop3",
					0.57999998
				},
				
				{
					"wheel_podkolop4",
					0.61000001
				},
				
				{
					"wheel_podkolop5",
					0.64999998
				},
				
				{
					"wheel_podkolop6",
					0.67000002
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
					"maingunoptics",
					0.17
				},
				
				{
					"maingunint",
					0.17
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
					"poklop_driver_damage",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"plates_1_y",
					0
				},
				
				{
					"plates_2_y",
					0
				},
				
				{
					"plates_1_x",
					0
				},
				
				{
					"plates_2_x",
					0
				},
				
				{
					"plates_1_bank",
					0
				},
				
				{
					"plates_2_bank",
					0
				},
				
				{
					"drivingwheel",
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
					"dmg_com_halo_unhide",
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
					"track_damage_indicator",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
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
					"indicator_main_turret_onscreen_com",
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
					"lights_turret2",
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
					"zaslehrot",
					0
				},
				
				{
					"cannon_muzzle_flash",
					0
				},
				
				{
					"zaslehrot_cannon",
					857
				},
				
				{
					"commander_muzzleflash_rot",
					638
				},
				
				{
					"commander_gun_recoil",
					0
				},
				
				{
					"commander_gun_belt_1",
					0
				},
				
				{
					"commander_gun_belt_2",
					0
				},
				
				{
					"commander_gun_belt_3",
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
					"damage_era_left_1a_hide",
					0
				},
				
				{
					"damage_era_left_1b_hide",
					0
				},
				
				{
					"damage_camonet_left_1a_hide",
					0
				},
				
				{
					"damage_camonet_left_1b_hide",
					0
				},
				
				{
					"damage_era_left_2a_hide",
					0
				},
				
				{
					"damage_era_left_2b_hide",
					0
				},
				
				{
					"damage_camonet_left_2a_hide",
					0
				},
				
				{
					"damage_camonet_left_2b_hide",
					0
				},
				
				{
					"damage_era_left_3a_hide",
					0
				},
				
				{
					"damage_era_left_3b_hide",
					0
				},
				
				{
					"damage_camonet_left_3a_hide",
					0
				},
				
				{
					"damage_camonet_left_3b_hide",
					0
				},
				
				{
					"damage_era_left_4_hide",
					0
				},
				
				{
					"damage_camonet_left_4_hide",
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
					"damage_era_right_2a_hide",
					0
				},
				
				{
					"damage_era_right_2b_hide",
					0
				},
				
				{
					"damage_camonet_right_2a_hide",
					0
				},
				
				{
					"damage_camonet_right_2b_hide",
					0
				},
				
				{
					"damage_era_right_3a_hide",
					0
				},
				
				{
					"damage_era_right_3b_hide",
					0
				},
				
				{
					"damage_camonet_right_3a_hide",
					0
				},
				
				{
					"damage_camonet_right_3b_hide",
					0
				},
				
				{
					"damage_era_right_4_hide",
					0
				},
				
				{
					"damage_camonet_right_4_hide",
					0
				},
				
				{
					"damage_era_top_front_hide",
					0
				},
				
				{
					"damage_camonet_top_front_hide",
					0
				},
				
				{
					"damage_era_top_left_hide",
					0
				},
				
				{
					"damage_camonet_top_left_hide",
					0
				},
				
				{
					"damage_era_top_right_hide",
					0
				},
				
				{
					"damage_camonet_top_right_hide",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"commander_muzzleflash",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.5109999;
			verticalOffsetWorld=-0.21600001;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_TUSK_F.jpg";
		_generalMacro="B_MBT_01_TUSK_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_B_MBT_01_TUSK_F0";
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
			class MFD_Driver_Speed
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
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
					class Driver_Speed
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=2;
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
							{0.064999998,0.83999997},
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
						text="SIGHT: READY";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.1},
							1
						};
						right[]=
						{
							{0.17,0.1},
							1
						};
						down[]=
						{
							{0.050000001,0.5},
							1
						};
					};
					class Generic_Text2
					{
						type="text";
						source="static";
						text="RETICLE: CALIBRATED";
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
							{0.17,0.44999999},
							1
						};
						down[]=
						{
							{0.050000001,0.85000002},
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
						text="HMG";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="left";
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
					class Commander_machinegun_ammo
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						sourceIndex=0;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.95999998,0.19},
							1
						};
						right[]=
						{
							{1.02,0.19},
							1
						};
						down[]=
						{
							{0.95999998,0.34},
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
							{0.78500003,0.61000001},
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
						text="SIGHT: READY";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.1},
							1
						};
						right[]=
						{
							{0.17,0.1},
							1
						};
						down[]=
						{
							{0.050000001,0.5},
							1
						};
					};
					class Generic_Text2
					{
						type="text";
						source="static";
						text="RETICLE: CALIBRATED";
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
							{0.17,0.44999999},
							1
						};
						down[]=
						{
							{0.050000001,0.85000002},
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
						text="BRIGHTNESS: 7";
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
							{0.050000001,0.5},
							1
						};
					};
					class Generic_Text2
					{
						type="text";
						source="static";
						text="AUTO: ON";
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
							{0.050000001,0.94999999},
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
							{1.495,0.2},
							1
						};
						right[]=
						{
							{2.0450001,0.2},
							1
						};
						down[]=
						{
							{1.495,0.89999998},
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
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{-1.7,0.11},
							1
						};
						right[]=
						{
							{-0.94999999,0.11},
							1
						};
						down[]=
						{
							{-1.7,0.81},
							1
						};
					};
				};
			};
			class MFD_Commander_OnScreen
			{
				topLeft="PIP_COM_TL";
				topRight="PIP_COM_TR";
				bottomLeft="PIP_COM_BL";
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
					color[]={0.15000001,1,0.050000001};
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
							{0.5,0.235},
							1
						};
						right[]=
						{
							{0.52499998,0.235},
							1
						};
						down[]=
						{
							{0.5,0.27200001},
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
							{0.23,0.30000001},
							1
						};
						right[]=
						{
							{0.255,0.30000001},
							1
						};
						down[]=
						{
							{0.23,0.33700001},
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
							{0.25999999,0.30000001},
							1
						};
						right[]=
						{
							{0.285,0.30000001},
							1
						};
						down[]=
						{
							{0.25999999,0.33700001},
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
							{0.5,0.64999998},
							1
						};
						right[]=
						{
							{0.52499998,0.64999998},
							1
						};
						down[]=
						{
							{0.5,0.68699998},
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
		};
		class Library
		{
			libTextDesc="$STR_A3_sfgvehicles_b_mbt_01_tusk_f_library";
		};
		model="\A3\Armor_F_EPC\MBT_01\MBT_01_tusk_F.p3d";
		picture="\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
		Icon="\A3\armor_f_gamma\MBT_01\Data\ui\map_slammer_mk4_ca.paa";
		armor=900;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg="commander_gun_muzzle_pos";
						gunEnd="commander_gun_muzzle_end";
						memoryPointGun="commander_gun_muzzle";
						selectionFireAnim="commander_muzzleflash";
						minElev=-20;
						maxElev=40;
						weapons[]=
						{
							"HMG_127_MBT",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag"
						};
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						turretInfoType="RscOptics_MBT_01_commander_RCWS";
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
								visual="-";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isGun=1;
							};
						};
					};
				};
				weapons[]=
				{
					"cannon_120mm",
					"LMG_coax"
				};
				magazines[]=
				{
					"24Rnd_120mm_APFSDS_shells_Tracer_Red",
					"12Rnd_120mm_HE_shells_Tracer_Red",
					"12Rnd_120mm_HEAT_MP_T_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
				};
				maxHorizontalRotSpeed=1.6;
				maxVerticalRotSpeed=1.6;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.30000001;
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
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="cannon_120mm";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="cannon_120mm";
			};
			class muzzle_rot_cmdr
			{
				source="ammorandom";
				weapon="HMG_127_MBT";
			};
			class recoil_source
			{
				source="reload";
				weapon="cannon_120mm";
			};
			class commander_gun_recoil
			{
				source="reload";
				weapon="HMG_127_MBT";
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
			class HitERA_Left_3_src
			{
				source="Hit";
				hitpoint="HitERA_Left_3";
				raw=1;
			};
			class HitERA_Left_4_src
			{
				source="Hit";
				hitpoint="HitERA_Left_4";
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
			class HitERA_Right_3_src
			{
				source="Hit";
				hitpoint="HitERA_Right_3";
				raw=1;
			};
			class HitERA_Right_4_src
			{
				source="Hit";
				hitpoint="HitERA_Right_4";
				raw=1;
			};
			class HitERA_Top_Front_src
			{
				source="Hit";
				hitpoint="HitERA_Top_Front";
				raw=1;
			};
			class HitERA_Top_Left_src
			{
				source="Hit";
				hitpoint="HitERA_Top_Left";
				raw=1;
			};
			class HitERA_Top_Right_src
			{
				source="Hit";
				hitpoint="HitERA_Top_Right";
				raw=1;
			};
			class showCamonetCannon
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class showCamonetPlates1
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class showCamonetPlates2
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
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showCamonetPlates1",
					1,
					"showCamonetPlates2",
					1
				};
				forceAnimate2[]=
				{
					"showCamonetPlates1",
					0,
					"showCamonetPlates2",
					0
				};
				mass=-50;
			};
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showCamonetCannon",
			0,
			"showCamonetPlates1",
			0,
			"showCamonetPlates2",
			0,
			"showCamonetTurret",
			0,
			"showCamonetHull",
			0,
			"showBags",
			0
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1.8;
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
				armor=0.40000001;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.2;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.30000001;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.1;
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
				simulation="Armor_ERA_Light";
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
				armorComponent="ERA_L_1a";
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
				armorComponent="ERA_L_2a";
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
			class HitERA_Left_3: HitERA_Front
			{
				name="ERA_L_3_point";
				armorComponent="ERA_L_3a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_3_pos";
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
			class HitERA_Left_4: HitERA_Front
			{
				name="ERA_L_4_point";
				armorComponent="ERA_L_4a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_4_pos";
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
				armorComponent="ERA_R_1a";
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
				armorComponent="ERA_R_2a";
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
			class HitERA_Right_3: HitERA_Front
			{
				name="ERA_R_3_point";
				armorComponent="ERA_R_3a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_3_pos";
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
			class HitERA_Right_4: HitERA_Front
			{
				name="ERA_R_4_point";
				armorComponent="ERA_R_4a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_4_pos";
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
			class HitERA_Top_Front: HitERA_Front
			{
				name="ERA_T_F_point";
				armorComponent="ERA_T_F";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_T_F_pos";
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
			class HitERA_Top_Left: HitERA_Front
			{
				name="ERA_T_L_point";
				armorComponent="ERA_T_L";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_T_L_pos";
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
			class HitERA_Top_Right: HitERA_Front
			{
				name="ERA_T_R_point";
				armorComponent="ERA_T_R";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_T_R_pos";
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
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"CamoNet"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
			"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa",
			"a3\armor_f_epc\mbt_01\data\mbt_addons_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class TextureSources
		{
			class Sand
			{
				displayName="$STR_A3_TextureSources_Sand0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
					"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa",
					"a3\armor_f_epc\mbt_01\data\mbt_addons_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Olive
			{
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
					"A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa",
					"A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
		};
	};
};
