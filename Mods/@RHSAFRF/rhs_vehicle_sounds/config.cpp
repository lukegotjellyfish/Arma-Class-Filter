class CfgPatches
{
		weapons[]={};
		version="0.1";
	};
};
class CfgSound3DProcessors
{
	class RHS_vehicleRain_3DProcessingType
	{
		innerRange=3;
		range=10;
		rangeCurve="InverseSquare2Curve";
	};
	class RHS_PlaneExt_3DProcessingType
	{
		innerRange=13;
		range=25;
		radius=7;
	};
	class RHS_HeliExt_3DProcessingType
	{
		innerRange=10;
		range=25;
		rangeCurve="InverseSquare3Curve";
	};
	class RHS_HeliReverb_3DProcessingType
	{
		innerRange=400;
		range=700;
		rangeCurve="InverseSquare2Curve";
	};
	class RHS_PlaneExt_Middle_3DProcessingType
	{
		innerRange=0;
		range=350;
		rangeCurve="InverseSquare2Curve";
	};
	class RHS_PlaneExt_Distant_3DProcessingType
	{
		innerRange=0;
		range=1400;
		rangeCurve="InverseSquare3Curve";
	};
};
class CfgSoundShapes
{
	class RHS_turbine_rearSemispace_Hind
	{
		innerVolume=1;
		outerVolume=0.60000002;
		innerAngle=140;
		outerAngle=275;
		azimuth=180;
		elevation=-20;
	};
	class RHS_flyAwaySemispace
	{
		innerVolume=1;
		outerVolume=0.15000001;
		innerAngle=140;
		outerAngle=275;
		azimuth=180;
		elevation=0;
	};
	class RHS_flyTowardsSemispace
	{
		innerVolume=0.2;
		outerVolume=1;
		innerAngle=60;
		outerAngle=130;
		azimuth=180;
		elevation=0;
	};
	class RHS_Heli_bassRearSemispace_Hind
	{
		innerVolume=0.55000001;
		outerVolume=1;
		innerAngle=135;
		outerAngle=225;
		azimuth=180;
		elevation=0;
	};
	class RHS_Heli_rotorBassTopSemiSpace
	{
		innerVolume=0.34999999;
		outerVolume=1;
		innerAngle=80;
		outerAngle=150;
		azimuth=0;
		elevation=-90;
	};
	class RHS_Heli_rotorScrewTopSemiSpace
	{
		innerVolume=1;
		outerVolume=0.050000001;
		innerAngle=165;
		outerAngle=275;
		azimuth=0;
		elevation=-90;
	};
	class RHS_Heli_reverbSemiSpace
	{
		innerVolume=0;
		outerVolume=1;
		innerAngle=90;
		outerAngle=120;
		azimuth=0;
		elevation=-90;
	};
	class RHS_Heli_rotorTopSemiSpace
	{
		innerVolume=0.050000001;
		outerVolume=1;
		innerAngle=80;
		outerAngle=150;
		azimuth=0;
		elevation=-90;
	};
	class RHS_Heli_baseTopSemiSpace
	{
		innerVolume=0.80000001;
		outerVolume=1;
		innerAngle=75;
		outerAngle=140;
		azimuth=0;
		elevation=-90;
	};
	class RHS_Heli_rotorSwiftTopSemiSpace
	{
		innerVolume=0;
		outerVolume=1;
		innerAngle=95;
		outerAngle=175;
		azimuth=0;
		elevation=-90;
	};
};
class CfgSoundShaders
{
	class RHS_Heli_hind_ext_close_base_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_close_base",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 15000])";
		range=750;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
	};
	class RHS_Heli_hind_ext_close_bass_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_close_bass",
				1
			}
		};
		frequency="1 + (0.3 * (distance factor [100, 750]))";
		volume="1 * engineOn * (rpm factor [0, 15000]) * (1 + (0.25 * (speed factor [0,20])))";
		range=850;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{850,0}
		};
	};
	class RHS_Heli_hind_ext_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_mid",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 15000])";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{750,1},
			{1500,0}
		};
	};
	class RHS_Heli_hind_ext_flyAwayLayer_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_flyAwayLayer",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 15000]) * (0.5 + (0.5 * (speed factor [0,20])))";
		range=950;
		rangeCurve[]=
		{
			{0,1},
			{80,1},
			{950,0}
		};
	};
	class RHS_Heli_hind_ext_flyTowardsLayer_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_flyTowardsLayer",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 15000]) * (speed Factor [0, 35])";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{15,1},
			{150,1},
			{1000,0}
		};
	};
	class RHS_Heli_hind_ext_far_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_far",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 15000])";
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{750,0},
			{1500,1},
			{2500,1}
		};
	};
	class RHS_Heli_hind_ext_rotorScrew_close_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_rotorScrew_close",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 15000])";
		range=550;
		rangeCurve[]=
		{
			{0,1},
			{60,1},
			{550,0}
		};
	};
	class RHS_Heli_hind_ext_rotor_close_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_rotor_close_base",
				1
			}
		};
		frequency="1.1 - (0.2 * rotorthrust)";
		volume="1 * engineOn * (rpm factor [0, 15000]) * (1 + (0.2 * rotorThrust))";
		range=550;
		rangeCurve[]=
		{
			{0,1},
			{60,1},
			{550,0}
		};
	};
	class RHS_Heli_hind_ext_rotor_close_Bass_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_rotor_close_bass",
				1
			}
		};
		frequency="1 - (0.25 * rotorThrust)";
		volume="0.5 * engineOn * (rpm factor [0, 15000]) * (1 + (0.5 * rotorThrust))";
		range=800;
		rangeCurve[]=
		{
			{0,1},
			{130,1},
			{800,0}
		};
	};
	class RHS_Heli_hind_ext_rotor_mid_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_rotor_mid_base",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 15000])";
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{60,0},
			{550,1},
			{1200,0}
		};
	};
	class RHS_Heli_hind_ext_rotor_swift_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_rotor_swift",
				1
			}
		};
		frequency=1;
		volume="0.75 * engineOn * (rpm factor [0, 15000])";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,1},
			{250,0}
		};
	};
	class RHS_Heli_hind_ext_reverb_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\ext_reverb",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 15000])";
		range=500;
		rangeCurve[]=
		{
			{0,1},
			{500,0}
		};
	};
	class RHS_Heli_hind_Int_engine_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\int_engine",
				1
			}
		};
		frequency=1;
		volume="0.75 * ((rotorSpeed-0.75)*4)";
	};
	class RHS_Heli_hind_Int_rotor_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\int_rotor",
				1
			}
		};
		frequency=1;
		volume="0.75 * (0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
	};
	class RHS_Heli_hind_Int_slow_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\int_slow",
				1
			}
		};
		frequency=1;
		volume="0.75 * engineOn * (rpm factor [0, 15000]) * (speed factor [30,0])";
	};
	class RHS_Heli_hind_Int_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\int_mid",
				1
			}
		};
		frequency=1;
		volume="0.75 * engineOn * (rpm factor [0, 15000]) * (speed envelope [0,30,35,80])";
	};
	class RHS_Heli_hind_Int_fast_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\hind\int_fast",
				1
			}
		};
		frequency="1 * (1 + (0.2 * (speed factor [70, 120])))";
		volume="0.75 * engineOn * (rpm factor [0, 15000]) * (speed factor [35,80])";
	};
	class RHS_Heli_venom_ext_close_base_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_close_base",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 20000])";
		range=750;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{750,0}
		};
	};
	class RHS_Heli_venom_ext_close_bass_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_close_bass",
				1
			}
		};
		frequency="1 + (0.3 * (distance factor [100, 750]))";
		volume="1 * engineOn * (rpm factor [0, 20000]) * (1 + (0.25 * (speed factor [0,20])))";
		range=850;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{850,0}
		};
	};
	class RHS_Heli_venom_ext_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_mid",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 20000])";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{750,1},
			{1500,0}
		};
	};
	class RHS_Heli_venom_ext_flyAwayLayer_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_flyAwayLayer",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 20000]) * (0.5 + (0.5 * (speed factor [0,20])))";
		range=950;
		rangeCurve[]=
		{
			{0,1},
			{80,1},
			{950,0}
		};
	};
	class RHS_Heli_venom_ext_flyTowardsLayer_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_flyTowardsLayer",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 20000]) * (speed Factor [0, 35])";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{15,1},
			{150,1},
			{1000,0}
		};
	};
	class RHS_Heli_venom_ext_far_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_far",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 20000])";
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{750,0},
			{1500,1},
			{2500,1}
		};
	};
	class RHS_Heli_venom_ext_rotorScrew_close_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_rotorScrew_close",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 20000])";
		range=550;
		rangeCurve[]=
		{
			{0,1},
			{60,1},
			{550,0}
		};
	};
	class RHS_Heli_venom_ext_rotor_close_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_rotor_close_base",
				1
			}
		};
		frequency="1.1 - (0.2 * rotorthrust)";
		volume="1 * engineOn * (rpm factor [0, 20000]) * (1 + (0.2 * rotorThrust))";
		range=550;
		rangeCurve[]=
		{
			{0,1},
			{60,1},
			{550,0}
		};
	};
	class RHS_Heli_venom_ext_rotor_close_Bass_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_rotor_close_bass",
				1
			}
		};
		frequency="1 - (0.25 * rotorThrust)";
		volume="0.5 * engineOn * (rpm factor [0, 20000]) * (1 + (0.5 * rotorThrust))";
		range=800;
		rangeCurve[]=
		{
			{0,1},
			{130,1},
			{800,0}
		};
	};
	class RHS_Heli_venom_ext_rotor_mid_Base_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_rotor_mid_base",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 20000])";
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{60,0},
			{550,1},
			{1200,0}
		};
	};
	class RHS_Heli_venom_ext_rotor_swift_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_rotor_swift",
				1
			}
		};
		frequency=1;
		volume="0.75 * engineOn * (rpm factor [0, 20000])";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,1},
			{250,0}
		};
	};
	class RHS_Heli_venom_ext_reverb_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\ext_reverb",
				1
			}
		};
		frequency=1;
		volume="1 * engineOn * (rpm factor [0, 20000])";
		range=500;
		rangeCurve[]=
		{
			{0,1},
			{500,0}
		};
	};
	class RHS_Heli_venom_Int_engine_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\int_engine",
				1
			}
		};
		frequency=1;
		volume="0.75 * ((rotorSpeed-0.75)*4)";
	};
	class RHS_Heli_venom_Int_rotor_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\int_rotor",
				1
			}
		};
		frequency=1;
		volume="0.75 * (0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
	};
	class RHS_Heli_venom_Int_slow_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\int_slow",
				1
			}
		};
		frequency=1;
		volume="0.75 * engineOn * (rpm factor [0, 20000]) * (speed factor [30,0])";
	};
	class RHS_Heli_venom_Int_mid_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\int_mid",
				1
			}
		};
		frequency=1;
		volume="0.75 * engineOn * (rpm factor [0, 20000]) * (speed envelope [0,30,35,80])";
	};
	class RHS_Heli_venom_Int_fast_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\venom\int_fast",
				1
			}
		};
		frequency="1 * (1 + (0.2 * (speed factor [70, 120])))";
		volume="0.75 * engineOn * (rpm factor [0, 20000]) * (speed factor [35,80])";
	};
	class RHS_Plane_Int_rattling_light_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\rattling_1\rattling_light",
				1
			}
		};
		frequency="0.8 * (0.4 * (gmeterZ factor [0.25,2]))";
		volume="camInt * 0.8 * (gmeterZ envelope [0.25,1.9,2.4,3.1])";
	};
	class RHS_Plane_Int_rattling_hard_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\rattling_1\rattling_hard",
				1
			}
		};
		frequency="0.8 * (0.6 * (gmeterZ factor [2.5,5]))";
		volume="camInt * (gmeterZ factor [2.4,3.1])";
	};
	class RHS_Plane_Int_wind_light_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\wind_1\wind_light",
				1
			}
		};
		frequency="0.8 + (0.4 * (speed factor [20,70]))";
		volume="camInt * (speed envelope [20,50,50,90])";
	};
	class RHS_Plane_Int_wind_hard_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\wind_1\wind_hard",
				1
			}
		};
		frequency="0.8 + (0.5 * (speed factor [40,120]))";
		volume="camInt * (speed factor [50,90])";
	};
	class RHS_Plane_Ext_Glider_slow_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\glider\ext_slow",
				1
			}
		};
		frequency="0.8 + (0.4 * (speed factor [20,70]))";
		volume="camExt * (speed envelope [20,50,50,90])";
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{30,1},
			{200,0}
		};
	};
	class RHS_Plane_Ext_Glider_fast_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\glider\ext_fast",
				1
			}
		};
		frequency="0.8 + (0.5 * (speed factor [40,120]))";
		volume="camExt * (speed factor [50,90])";
		range=300;
		rangeCurve[]=
		{
			{0,1},
			{30,1},
			{300,0}
		};
	};
	class RHS_Plane_Int_Glider_rumble_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\gForce_1\int_gforce_hard",
				1
			}
		};
		frequency="0.9 + (0.3 * (speed factor [0,120]))";
		volume="camInt * (0.4 * (speed factor [0,120]))";
	};
	class RHS_Plane_Int_gForce_hard_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\gForce_1\int_gforce_hard",
				1
			}
		};
		frequency="0.8 + (0.4 * (gmeterZ factor [1.8,5]))";
		volume="camInt * (gmeterZ factor [1.8,5])";
	};
	class RHS_Plane_Int_rain_light_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\rain_1\int_rain_light",
				1
			}
		};
		frequency="0.9 + (0.2 * (rain factor [0,0.5]))";
		volume="camInt * (rain envelope [0,0.49, 0.5, 1])* (speed factor[50, 0])";
	};
	class RHS_Plane_Int_rain_hard_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\rain_1\int_rain_hard",
				1
			}
		};
		frequency="0.9 + (0.2 * (rain factor [0.5,1]))";
		volume="camInt * (rain factor [0.5, 1]) * (speed factor[50, 0])";
	};
	class RHS_Plane_ext_rain_light_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\rain_1\ext_rain_light",
				1
			}
		};
		frequency="0.9 + (0.2 * (rain factor [0,0.5]))";
		volume="camExt * (rain envelope [0,0.49, 0.5, 1])* (speed factor[50, 0])";
		range=25;
	};
	class RHS_Plane_ext_rain_hard_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\rain_1\ext_rain_hard",
				1
			}
		};
		frequency="0.9 + (0.2 * (rain factor [0.5,1]))";
		volume="camExt * (rain factor [0.5, 1]) * (speed factor[50, 0])";
		range=35;
	};
	class RHS_Plane_int_wheels_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\shared\scrubland_bohemia\wheelsInt",
				1
			}
		};
		frequency=1.2;
		volume="scrubLand factor[0.01, 0.20]";
	};
	class RHS_Heli_Hind_ext_turbine_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsafrf\addons\rhs_vehicle_sounds\Hind\ext_turbine",
				1
			}
		};
		frequency="(1 * engineOn * (rpm factor [0, 700])) + (0.15 * rotorThrust) + (0.3 * (speed factor [0,100]))";
		volume="1 * engineOn * (rpm factor [0, 700]) * (1 + (0.35 * ((abs speed) factor [0,90])))";
		range=290;
		rangeCurve[]=
		{
			{0,1},
			{30,1},
			{290,0}
		};
	};
};
class CfgSoundSets
{
	class RHS_Heli_Ext_Base_SoundSet
	{
		spatial=1;
		loop=1;
		occlusionObstruction=1;
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class RHS_Heli_Int_Base_SoundSet
	{
		spatial=0;
		loop=1;
	};
	class RHS_Heli_hind_ext_close_base_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_close_base_SoundShader"
		};
		volumeFactor=1.65;
		volumeCurve="InverseSquare3Curve";
		shape="RHS_Heli_baseTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_close_bass_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_close_bass_SoundShader"
		};
		volumeFactor=1.65;
		volumeCurve="InverseSquare3Curve";
		shape="RHS_Heli_bassRearSemispace_Hind";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_mid_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_mid_SoundShader"
		};
		volumeFactor=1.65;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="RHS_PlaneExt_Middle_3DProcessingType";
	};
	class RHS_Heli_hind_ext_far_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_far_SoundShader"
		};
		volumeFactor=1.9;
		occlusionFactor=0.1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="PlaneExt_Distant_3DProcessingType";
	};
	class RHS_Heli_hind_ext_flyAwayLayer_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_flyAwayLayer_SoundShader"
		};
		volumeFactor=1.9;
		occlusionFactor=0.1;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_flyAwaySemispace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_flyTowardsLayer_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_flyTowardsLayer_SoundShader"
		};
		volumeFactor=1.9;
		occlusionFactor=0.1;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_flyTowardsSemispace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_rotorScrew_close_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_rotorScrew_close_SoundShader"
		};
		volumeFactor=1.7;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_Heli_rotorScrewTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_rotor_close_base_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_rotor_close_base_SoundShader"
		};
		volumeFactor=1.85;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_Heli_rotorTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_rotor_close_bass_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_rotor_close_bass_SoundShader"
		};
		volumeFactor=1.95;
		volumeCurve="InverseSquare3Curve";
		shape="RHS_Heli_rotorBassTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_rotor_mid_base_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_rotor_mid_base_SoundShader"
		};
		volumeFactor=1.85;
		volumeCurve="InverseSquare3Curve";
		shape="RHS_Heli_rotorTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_rotor_swift_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_rotor_swift_SoundShader"
		};
		volumeFactor=0.89999998;
		occlusionFactor=0.2;
		shape="RHS_Heli_rotorSwiftTopSemiSpace";
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_hind_ext_reverb_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_ext_reverb_SoundShader"
		};
		volumeFactor=1.4;
		shape="RHS_Heli_reverbSemiSpace";
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="RHS_HeliReverb_3DProcessingType";
	};
	class RHS_Heli_hind_int_engine_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_Int_engine_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_hind_int_rotor_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_Int_rotor_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_hind_int_slow_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_Int_slow_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_hind_int_mid_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_Int_mid_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_hind_int_fast_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_hind_Int_fast_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_venom_ext_close_base_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_close_base_SoundShader"
		};
		volumeFactor=1.65;
		volumeCurve="InverseSquare3Curve";
		shape="RHS_Heli_baseTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_close_bass_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_close_bass_SoundShader"
		};
		volumeFactor=1.65;
		volumeCurve="InverseSquare3Curve";
		shape="RHS_Heli_bassRearSemispace_Hind";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_mid_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_mid_SoundShader"
		};
		volumeFactor=1.65;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="RHS_PlaneExt_Middle_3DProcessingType";
	};
	class RHS_Heli_venom_ext_far_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_far_SoundShader"
		};
		volumeFactor=1.9;
		occlusionFactor=0.1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="PlaneExt_Distant_3DProcessingType";
	};
	class RHS_Heli_venom_ext_flyAwayLayer_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_flyAwayLayer_SoundShader"
		};
		volumeFactor=1.9;
		occlusionFactor=0.1;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_flyAwaySemispace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_flyTowardsLayer_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_flyTowardsLayer_SoundShader"
		};
		volumeFactor=1.9;
		occlusionFactor=0.1;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_flyTowardsSemispace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_rotorScrew_close_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_rotorScrew_close_SoundShader"
		};
		volumeFactor=1.7;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_Heli_rotorScrewTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_rotor_close_base_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_rotor_close_base_SoundShader"
		};
		volumeFactor=1.85;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_Heli_rotorTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_rotor_close_bass_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_rotor_close_bass_SoundShader"
		};
		volumeFactor=1.95;
		volumeCurve="InverseSquare3Curve";
		shape="RHS_Heli_rotorBassTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_rotor_mid_base_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_rotor_mid_base_SoundShader"
		};
		volumeFactor=1.85;
		volumeCurve="InverseSquare3Curve";
		shape="RHS_Heli_rotorTopSemiSpace";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_rotor_swift_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_rotor_swift_SoundShader"
		};
		volumeFactor=0.89999998;
		occlusionFactor=0.2;
		shape="RHS_Heli_rotorSwiftTopSemiSpace";
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
	class RHS_Heli_venom_ext_reverb_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_ext_reverb_SoundShader"
		};
		volumeFactor=1.4;
		shape="RHS_Heli_reverbSemiSpace";
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="RHS_HeliReverb_3DProcessingType";
	};
	class RHS_Heli_venom_int_engine_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_Int_engine_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_venom_int_rotor_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_Int_rotor_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_venom_int_slow_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_Int_slow_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_venom_int_mid_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_Int_mid_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_venom_int_fast_SoundSet: RHS_Heli_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_venom_Int_fast_SoundShader"
		};
		volumeFactor=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Plane_Ext_Base_SoundSet
	{
		spatial=1;
		loop=1;
		occlusionObstruction=1;
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class RHS_Plane_Int_Base_SoundSet
	{
		spatial=0;
		loop=1;
	};
	class RHS_Plane_Int_rattling_light_soundSet: RHS_Plane_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_Int_rattling_light_soundShader"
		};
		volumeFactor=1.3;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Plane_Int_rattling_hard_soundSet: RHS_Plane_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_Int_rattling_hard_soundShader"
		};
		volumeFactor=1.6;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Plane_Int_wind_light_soundSet: RHS_Plane_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_Int_wind_light_soundShader"
		};
		volumeFactor=0.85000002;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Plane_Int_wind_hard_soundSet: RHS_Plane_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_Int_wind_hard_soundShader"
		};
		volumeFactor=1.05;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Plane_Int_gForce_hard_soundSet: RHS_Plane_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_Int_gForce_hard_soundShader"
		};
		volumeFactor=1.45;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Plane_Int_rain_light_soundSet: RHS_Plane_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_Int_rain_light_soundShader"
		};
		volumeFactor=0.85000002;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Plane_Int_rain_hard_soundSet: RHS_Plane_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_Int_rain_hard_soundShader"
		};
		volumeFactor=1.15;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Plane_ext_rain_light_soundSet: RHS_Plane_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_ext_rain_light_soundShader"
		};
		volumeFactor=1.35;
		sound3DProcessingType="RHS_vehicleRain_3DProcessingType";
	};
	class RHS_Plane_ext_rain_hard_soundSet: RHS_Plane_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_ext_rain_hard_soundShader"
		};
		volumeFactor=1.63;
		sound3DProcessingType="RHS_vehicleRain_3DProcessingType";
	};
	class RHS_Plane_Int_wheels_soundSet: RHS_Plane_Int_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Plane_int_wheels_SoundShader"
		};
		volumeFactor=1.2;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class RHS_Heli_Hind_ext_turbine_SoundSet: RHS_Heli_Ext_Base_SoundSet
	{
		soundShaders[]=
		{
			"RHS_Heli_Hind_ext_turbine_SoundShader"
		};
		volumeFactor=0.83999997;
		volumeCurve="InverseSquare2Curve";
		shape="RHS_turbine_rearSemispace_Hind";
		sound3DProcessingType="RHS_HeliExt_3DProcessingType";
	};
};
class cfgVehicles
{
	class Helicopter;
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		class Sounds
		{
			soundSetsExt[]=
			{
				"RHS_Heli_hind_ext_close_base_SoundSet",
				"RHS_Heli_hind_ext_close_bass_SoundSet",
				"RHS_Heli_hind_ext_mid_SoundSet",
				"RHS_Heli_hind_ext_far_SoundSet",
				"RHS_Heli_hind_ext_flyAwayLayer_SoundSet",
				"RHS_Heli_hind_ext_flyTowardsLayer_SoundSet",
				"RHS_Heli_hind_ext_rotorScrew_close_SoundSet",
				"RHS_Heli_hind_ext_rotor_close_base_SoundSet",
				"RHS_Heli_hind_ext_rotor_close_bass_SoundSet",
				"RHS_Heli_hind_ext_rotor_mid_base_SoundSet",
				"RHS_Heli_hind_ext_turbine_SoundSet",
				"RHS_Heli_hind_ext_rotor_swift_SoundSet",
				"RHS_Heli_hind_ext_reverb_SoundSet",
				"RHS_Heli_Hind_ext_turbine_SoundSet"
			};
			soundSetsInt[]=
			{
				"RHS_Heli_hind_int_engine_SoundSet",
				"RHS_Heli_hind_int_rotor_SoundSet",
				"RHS_Heli_hind_int_slow_SoundSet",
				"RHS_Heli_hind_int_mid_SoundSet",
				"RHS_Heli_hind_int_fast_SoundSet",
				"RHS_Plane_Int_wind_light_soundSet",
				"RHS_Plane_Int_wind_hard_soundSet",
				"RHS_Plane_Int_gForce_hard_soundSet",
				"RHS_Plane_Int_rain_light_soundSet",
				"RHS_Plane_Int_rain_hard_soundSet",
				"RHS_Plane_ext_rain_light_soundSet",
				"RHS_Plane_ext_rain_hard_soundSet"
			};
		};
	};
};
