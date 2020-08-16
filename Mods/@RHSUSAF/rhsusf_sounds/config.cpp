class CfgPatches
{
		weapons[]={};
		version="0.1";
		name="USF Sounds";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgSound3DProcessors
{
	class RHSUSF_Sniper_crackling_3DProcessingType
	{
		innerRange=60;
		range=370;
		rangeCurve[]=
		{
			{0,1},
			{370,0}
		};
	};
	class RHSUSF_Cannon_3DProcessingType
	{
		innerRange=100;
		range=100;
		rangeCurve="InverseSquare2Curve";
	};
};
class CfgSoundCurves
{
	class RHSUSF_soundCurve
	{
		points[]=
		{
			{0,1},
			{1,0}
		};
	};
	class RHSUSF_tailSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.2,0.85000002},
			{0.5,0.40000001},
			{0.80000001,0.1},
			{1,0}
		};
	};
	class RHSUSF_rifleSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.001,0.92000002},
			{0.0049999999,0.88999999},
			{0.1,0.84750003},
			{0.2,0.8096},
			{0.40000001,0.75330001},
			{0.60000002,0.63150001},
			{0.80000001,0.49680001},
			{0.89999998,0.39680001},
			{1,0}
		};
	};
	class RHSUSF_silencedSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.001,0.85000002},
			{0.0049999999,0.69},
			{0.1,0.54750001},
			{0.2,0.4596},
			{0.40000001,0.30329999},
			{0.60000002,0.25150001},
			{0.80000001,0.1268},
			{0.89999998,0.046799999},
			{1,0}
		};
	};
	class RHSUSF_cannonSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.001,0.97000003},
			{0.0049999999,0.95999998},
			{0.1,0.94749999},
			{0.2,0.87959999},
			{0.40000001,0.68330002},
			{0.60000002,0.62150002},
			{0.80000001,0.49680001},
			{0.89999998,0.33680001},
			{1,0}
		};
	};
	class RHSUSF_miniCannonSoundCurve
	{
		points[]=
		{
			{0,1},
			{0.001,0.97000003},
			{0.0049999999,0.92000002},
			{0.1,0.8775},
			{0.2,0.79960001},
			{0.40000001,0.61330003},
			{0.60000002,0.52149999},
			{0.80000001,0.3768},
			{0.89999998,0.2368},
			{1,0}
		};
	};
};
class cfgDistanceFilters
{
	class RHSUSF_defaultDistanceFilter
	{
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=400;
		range=2600;
		powerFactor=32;
	};
	class RHSUSF_rifleTailDistanceFilter
	{
		minCutoffFrequency=150;
		qFactor=1;
		innerRange=350;
		range=1800;
		powerFactor=32;
	};
};
class CfgSoundShaders
{
	class RHSUSF_MP7_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_MP7_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_MP7_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_MP7_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_MP7_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_MP7_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_MP7_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2750,0}
		};
	};
	class RHSUSF_MP7_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class RHSUSF_MP7_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_30m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_30m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class RHSUSF_MP7_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class RHSUSF_MP7_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MP7\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{650,0}
		};
	};
	class RHSUSF_M4_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M4_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M4_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M4_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M4_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M4_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M4_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3000,0}
		};
	};
	class RHSUSF_M4_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class RHSUSF_M4_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_30m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_30m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class RHSUSF_M4_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class RHSUSF_M4_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M4\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{700,0}
		};
	};
	class RHSUSF_M16_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M16_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M16_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M16_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M16_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M16_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M16_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3000,0}
		};
	};
	class RHSUSF_M16_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class RHSUSF_M16_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_30m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_30m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class RHSUSF_M16_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class RHSUSF_M16_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M16\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{700,0}
		};
	};
	class RHSUSF_M240_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M240_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M240_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M240_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M240_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M240_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M240_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M240\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3300,0}
		};
	};
	class RHSUSF_M249_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M249_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M249_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M249_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M249_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M249_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M249_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3200;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3200,0}
		};
	};
	class RHSUSF_M249_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class RHSUSF_M249_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_30m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_30m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class RHSUSF_M249_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class RHSUSF_M249_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M249\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=650;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{650,0}
		};
	};
	class RHSUSF_M2010_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M2010_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M2010_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M2010_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M2010_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M2010_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M2010_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3200;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3200,0}
		};
	};
	class RHSUSF_M2010_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class RHSUSF_M2010_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_30m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_30m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class RHSUSF_M2010_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class RHSUSF_M2010_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2010\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{1000,0}
		};
	};
	class RHSUSF_M14_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M14_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M14_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M14_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M14_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M14_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M14_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3200;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3200,0}
		};
	};
	class RHSUSF_M14_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class RHSUSF_M14_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_30m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_30m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class RHSUSF_M14_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class RHSUSF_M14_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M14\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{1000,0}
		};
	};
	class RHSUSF_MK19_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_MK19_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_MK19_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_MK19_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_MK19_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_MK19_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_MK19_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\MK19\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2800;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2800,0}
		};
	};
	class RHSUSF_M107_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M107_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M107_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M107_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M107_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M107_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M107_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3800,0}
		};
	};
	class RHSUSF_M107_SD_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_0m_3",
				1
			}
		};
		volume=0.85000002;
		range=30;
		rangeCurve[]=
		{
			{0,1},
			{30,0}
		};
	};
	class RHSUSF_M107_SD_30m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_30m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_30m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_30m_3",
				1
			}
		};
		volume=0.75;
		range=100;
		rangeCurve[]=
		{
			{0,0},
			{30,1},
			{150,0}
		};
	};
	class RHSUSF_M107_SD_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_150m_3",
				1
			}
		};
		volume=0.64999998;
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{30,0},
			{150,1},
			{350,0}
		};
	};
	class RHSUSF_M107_SD_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M107\SD_350m_3",
				1
			}
		};
		volume="(0.55-(interior*0.55))";
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{350,1},
			{1500,0}
		};
	};
	class RHSUSF_M2_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M2_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M2_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M2_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M2_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M2_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M2_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M2\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3800,0}
		};
	};
	class RHSUSF_M134_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M134_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M134_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M134_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M134_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M134_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M134_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M134\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3400;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3400,0}
		};
	};
	class RHSUSF_M590_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M590_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M590_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M590_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M590_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M590_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M590_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M590\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3000,0}
		};
	};
	class RHSUSF_M136_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M136_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\0m_3",
				1
			}
		};
		volume=1.9119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M136_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M136_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M136_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M136_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M136_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M136\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=2400;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{2400,0}
		};
	};
	class RHSUSF_120mm_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\Closure_3",
				1
			}
		};
		volume="1.912*campos";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_120mm_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\0m_3",
				1
			}
		};
		volume="2.412*campos";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_120mm_Int_Closure_SoundShader: RHSUSF_120mm_Closure_SoundShader
	{
		volume="1.912*(1-campos)";
	};
	class RHSUSF_120mm_int_0m_SoundShader: RHSUSF_120mm_0m_SoundShader
	{
		volume="2.412*(1-campos)";
	};
	class RHSUSF_120mm_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_120mm_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_120mm_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_120mm_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_120mm_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\120mm\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=4500;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{4500,0}
		};
	};
	class RHSUSF_155mm_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\Closure_3",
				1
			}
		};
		volume="1.912*campos";
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_155mm_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\0m_3",
				1
			}
		};
		volume="2.412*campos";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_155mm_Int_Closure_SoundShader: RHSUSF_155mm_Closure_SoundShader
	{
		volume="1.912*(1-campos)";
	};
	class RHSUSF_155mm_int_0m_SoundShader: RHSUSF_155mm_0m_SoundShader
	{
		volume="2.412*(1-campos)";
	};
	class RHSUSF_155mm_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_155mm_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_155mm_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_155mm_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_155mm_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\155mm\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=4700;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{4700,0}
		};
	};
	class RHSUSF_M230_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_M230_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\0m_3",
				1
			}
		};
		volume=2.4119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_M230_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_M230_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_M230_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_M230_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_M230_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\M230\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3900;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3900,0}
		};
	};
	class RHSUSF_autocannon_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\Closure_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\Closure_3",
				1
			}
		};
		volume=1.9119999;
		range=15;
		rangeCurve[]=
		{
			{0,1},
			{15,0}
		};
	};
	class RHSUSF_autocannon_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\0m_3",
				1
			}
		};
		volume=2.4119999;
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class RHSUSF_autocannon_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\50m_3",
				1
			}
		};
		volume=1.6252;
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
	};
	class RHSUSF_autocannon_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\150m_3",
				1
			}
		};
		volume=1.464;
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
	};
	class RHSUSF_autocannon_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\550m_3",
				1
			}
		};
		volume=0.82300001;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
	};
	class RHSUSF_autocannon_1000m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\1000m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\1000m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\1000m_3",
				1
			}
		};
		volume="(0.34-(interior*0.34))";
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{550,0},
			{1000,1},
			{1800,0}
		};
	};
	class RHSUSF_autocannon_1800m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\1800m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\1800m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\autocannon\1800m_3",
				1
			}
		};
		volume="(0.35-(interior*0.35))";
		range=3900;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1800,1},
			{3900,0}
		};
	};
	class RHSUSF_Rifle1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Meadows_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Meadows_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Meadows_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Meadows_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Meadows_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Meadows_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3000,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Houses_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Houses_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Houses_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Houses_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Houses_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Houses_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3000,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\forest_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3000,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*Forest/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Forest_150m_3",
				1
			}
		};
		volume="3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=3000;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3000,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_0m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_50m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_150m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1\Interior_550m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Meadows_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Meadows_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Meadows_0m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Meadows_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Meadows_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Meadows_150m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{700,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Houses_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Houses_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Houses_0m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Houses_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Houses_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Houses_150m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*houses/3)";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{700,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\forest_0m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\forest_150m_3",
				1
			}
		};
		volume="2.40*((1-interior/1.4)*trees/3)";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{700,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Forest_0m_3",
				1
			}
		};
		volume="2.40*((1-interior)*Forest)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Forest_150m_3",
				1
			}
		};
		volume="2.40*((1-interior)*Forest)";
		range=700;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{700,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_0m_3",
				1
			}
		};
		volume="2.40*((interior)*0.7)";
		range=40;
		rangeCurve[]=
		{
			{0,1},
			{40,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Interior_40m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_40m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_40m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_40m_3",
				1
			}
		};
		volume="2.40*((interior)*0.7)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{40,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Rifle1_SD_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Rifle1_SD\Interior_150m_3",
				1
			}
		};
		volume="2.40*((interior)*0.68)";
		range=350;
		rangeCurve[]=
		{
			{0,0},
			{40,0},
			{150,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Meadows_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Meadows_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Meadows_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Meadows_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Meadows_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Meadows_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{2750,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Houses_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Houses_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Houses_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Houses_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Houses_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Houses_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{2750,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\forest_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{2750,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*Forest/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Forest_150m_3",
				1
			}
		};
		volume="3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=2750;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{2750,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_0m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_50m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_150m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class RHSUSF_Pistol1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\Pistol1\Interior_550m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Meadows_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Meadows_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Meadows_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Meadows_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Meadows_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Meadows_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3100;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3100,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Houses_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Houses_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Houses_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Houses_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Houses_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Houses_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=3100;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3100,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\forest_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=3100;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3100,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*Forest/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Forest_150m_3",
				1
			}
		};
		volume="3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=3100;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3100,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_0m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_50m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_150m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class RHSUSF_lmg1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\lmg1\Interior_550m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Meadows_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Meadows_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Meadows_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Meadows_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Meadows_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Meadows_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3300,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Houses_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Houses_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Houses_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Houses_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Houses_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Houses_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3300,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\forest_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3300,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*Forest/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Forest_150m_3",
				1
			}
		};
		volume="3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=3300;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3300,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_0m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_50m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_150m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class RHSUSF_mmg1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\mmg1\Interior_550m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Meadows_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Meadows_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Meadows_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Meadows_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Meadows_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Meadows_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Meadows_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3800,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Houses_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Houses_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Houses_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Houses_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Houses_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Houses_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Houses_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*houses/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3800,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Trees_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\forest_150m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*trees/3)";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3800,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Forest_0m_3",
				1
			}
		};
		volume="3.85*((1-interior/1.4)*Forest/3)";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Forest_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Forest_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Forest_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Forest_150m_3",
				1
			}
		};
		volume="3.85*(1.4*((1-interior/1.4)*forest/3))";
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{150,1},
			{3800,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Interior_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_0m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=50;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Interior_50m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_50m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_50m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_50m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=150;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{150,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Interior_150m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_150m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_150m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_150m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=550;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{550,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_Interior_550m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_550m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_550m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\Interior_550m_3",
				1
			}
		};
		volume="3.85*((interior)*0.65)";
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{150,0},
			{550,1},
			{1000,0}
		};
		limitation=1;
	};
	class RHSUSF_cannon_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Meadows_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Meadows_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Meadows_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_cannon_Meadows_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Meadows_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Meadows_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Meadows_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=4200;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{4200,0}
		};
		limitation=1;
	};
	class RHSUSF_cannon_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Houses_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Houses_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Houses_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*houses/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_cannon_Houses_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Houses_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Houses_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Houses_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*houses/3)";
		range=4200;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{4200,0}
		};
		limitation=1;
	};
	class RHSUSF_cannon_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\forest_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*trees/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_cannon_Trees_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\forest_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\forest_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\forest_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*trees/3)";
		range=4200;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{4200,0}
		};
		limitation=1;
	};
	class RHSUSF_cannon_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Forest_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*Forest/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_cannon_Forest_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Forest_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Forest_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\cannon\Forest_350m_3",
				1
			}
		};
		volume="5.45*(1.4*((1-interior/1.4)*forest/3))";
		range=4200;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{4200,0}
		};
		limitation=1;
	};
	class RHSUSF_autocannon_Meadows_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Meadows_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Meadows_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Meadows_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_autocannon_Meadows_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Meadows_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Meadows_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Meadows_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range=3700;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{3700,0}
		};
		limitation=1;
	};
	class RHSUSF_autocannon_Houses_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Houses_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Houses_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Houses_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*houses/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_autocannon_Houses_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Houses_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Houses_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Houses_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*houses/3)";
		range=3700;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{3700,0}
		};
		limitation=1;
	};
	class RHSUSF_autocannon_Trees_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\forest_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*trees/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_autocannon_Trees_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\forest_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\forest_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\forest_350m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*trees/3)";
		range=3700;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{3700,0}
		};
		limitation=1;
	};
	class RHSUSF_autocannon_Forest_0m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Forest_0m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Forest_0m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Forest_0m_3",
				1
			}
		};
		volume="5.45*((1-interior/1.4)*Forest/3)";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{350,0}
		};
		limitation=1;
	};
	class RHSUSF_autocannon_Forest_350m_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Forest_350m_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Forest_350m_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\autocannon\Forest_350m_3",
				1
			}
		};
		volume="5.45*(1.4*((1-interior/1.4)*forest/3))";
		range=3700;
		rangeCurve[]=
		{
			{0,0},
			{350,1},
			{3700,0}
		};
		limitation=1;
	};
	class RHSUSF_sniper1_crackling_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\crackling_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\crackling_2",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\tails\sniper1\crackling_3",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=400;
		rangeCurve="RHSUSF_soundCurve";
	};
	class rhs_m203_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",
				1
			}
		};
		volume=1;
		range=30;
		rangeCurve="closeShotCurve";
	};
	class rhs_m32gl_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\m32\m32_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\m32\m32_2",
				1
			}
		};
		volume=1;
		range=30;
		rangeCurve="closeShotCurve";
	};
	class rhs_m32gl_closure_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_sounds\m32\Closure_1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_sounds\m32\Closure_2",
				1
			}
		};
		volume=1;
		range=35;
		rangeCurve="closeShotCurve";
	};
};
class CfgSoundSets
{
	class RHSUSF_M4_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M4_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M4_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M4_0m_SoundShader",
			"RHSUSF_M4_50m_SoundShader",
			"RHSUSF_M4_150m_SoundShader",
			"RHSUSF_M4_550m_SoundShader",
			"RHSUSF_M4_1000m_SoundShader",
			"RHSUSF_M4_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M4_ShotSD_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M4_SD_0m_SoundShader",
			"RHSUSF_M4_SD_30m_SoundShader",
			"RHSUSF_M4_SD_150m_SoundShader",
			"RHSUSF_M4_SD_350m_SoundShader"
		};
		volumeFactor=0.89999998;
		volumeCurve="RHSUSF_silencedSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M16_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M16_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M16_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M16_0m_SoundShader",
			"RHSUSF_M16_50m_SoundShader",
			"RHSUSF_M16_150m_SoundShader",
			"RHSUSF_M16_550m_SoundShader",
			"RHSUSF_M16_1000m_SoundShader",
			"RHSUSF_M16_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M16_ShotSD_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M16_SD_0m_SoundShader",
			"RHSUSF_M16_SD_30m_SoundShader",
			"RHSUSF_M16_SD_150m_SoundShader",
			"RHSUSF_M16_SD_350m_SoundShader"
		};
		volumeFactor=0.89999998;
		volumeCurve="RHSUSF_silencedSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M240_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M240_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M240_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M240_0m_SoundShader",
			"RHSUSF_M240_50m_SoundShader",
			"RHSUSF_M240_150m_SoundShader",
			"RHSUSF_M240_550m_SoundShader",
			"RHSUSF_M240_1000m_SoundShader",
			"RHSUSF_M240_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_MP7_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_MP7_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_MP7_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_MP7_0m_SoundShader",
			"RHSUSF_MP7_50m_SoundShader",
			"RHSUSF_MP7_150m_SoundShader",
			"RHSUSF_MP7_550m_SoundShader",
			"RHSUSF_MP7_1000m_SoundShader",
			"RHSUSF_MP7_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_MP7_ShotSD_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_MP7_SD_0m_SoundShader",
			"RHSUSF_MP7_SD_30m_SoundShader",
			"RHSUSF_MP7_SD_150m_SoundShader",
			"RHSUSF_MP7_SD_350m_SoundShader"
		};
		volumeFactor=0.89999998;
		volumeCurve="RHSUSF_silencedSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M249_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M249_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M249_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M249_0m_SoundShader",
			"RHSUSF_M249_50m_SoundShader",
			"RHSUSF_M249_150m_SoundShader",
			"RHSUSF_M249_550m_SoundShader",
			"RHSUSF_M249_1000m_SoundShader",
			"RHSUSF_M249_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M249_ShotSD_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M249_SD_0m_SoundShader",
			"RHSUSF_M249_SD_30m_SoundShader",
			"RHSUSF_M249_SD_150m_SoundShader",
			"RHSUSF_M249_SD_350m_SoundShader"
		};
		volumeFactor=0.89999998;
		volumeCurve="RHSUSF_silencedSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M14_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M14_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M14_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M14_0m_SoundShader",
			"RHSUSF_M14_50m_SoundShader",
			"RHSUSF_M14_150m_SoundShader",
			"RHSUSF_M14_550m_SoundShader",
			"RHSUSF_M14_1000m_SoundShader",
			"RHSUSF_M14_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M14_ShotSD_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M14_SD_0m_SoundShader",
			"RHSUSF_M14_SD_30m_SoundShader",
			"RHSUSF_M14_SD_150m_SoundShader",
			"RHSUSF_M14_SD_350m_SoundShader"
		};
		volumeFactor=0.89999998;
		volumeCurve="RHSUSF_silencedSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M134_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M134_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M134_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M134_0m_SoundShader",
			"RHSUSF_M134_50m_SoundShader",
			"RHSUSF_M134_150m_SoundShader",
			"RHSUSF_M134_550m_SoundShader",
			"RHSUSF_M134_1000m_SoundShader",
			"RHSUSF_M134_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_MK19_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_MK19_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_MK19_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_MK19_0m_SoundShader",
			"RHSUSF_MK19_50m_SoundShader",
			"RHSUSF_MK19_150m_SoundShader",
			"RHSUSF_MK19_550m_SoundShader",
			"RHSUSF_MK19_1000m_SoundShader",
			"RHSUSF_MK19_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M136_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M136_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M136_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M136_0m_SoundShader",
			"RHSUSF_M136_50m_SoundShader",
			"RHSUSF_M136_150m_SoundShader",
			"RHSUSF_M136_550m_SoundShader",
			"RHSUSF_M136_1000m_SoundShader",
			"RHSUSF_M136_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M590_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M590_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M590_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M590_0m_SoundShader",
			"RHSUSF_M590_50m_SoundShader",
			"RHSUSF_M590_150m_SoundShader",
			"RHSUSF_M590_550m_SoundShader",
			"RHSUSF_M590_1000m_SoundShader",
			"RHSUSF_M590_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M2010_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M2010_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M2010_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M2010_0m_SoundShader",
			"RHSUSF_M2010_50m_SoundShader",
			"RHSUSF_M2010_150m_SoundShader",
			"RHSUSF_M2010_550m_SoundShader",
			"RHSUSF_M2010_1000m_SoundShader",
			"RHSUSF_M2010_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M107_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M107_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M107_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M107_0m_SoundShader",
			"RHSUSF_M107_50m_SoundShader",
			"RHSUSF_M107_150m_SoundShader",
			"RHSUSF_M107_550m_SoundShader",
			"RHSUSF_M107_1000m_SoundShader",
			"RHSUSF_M107_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M107_ShotSD_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M107_SD_0m_SoundShader",
			"RHSUSF_M107_SD_30m_SoundShader",
			"RHSUSF_M107_SD_150m_SoundShader",
			"RHSUSF_M107_SD_350m_SoundShader"
		};
		volumeFactor=0.89999998;
		volumeCurve="RHSUSF_silencedSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M2_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M2_Closure_SoundShader"
		};
		volumeFactor=0.94999999;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M2_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M2_0m_SoundShader",
			"RHSUSF_M2_50m_SoundShader",
			"RHSUSF_M2_150m_SoundShader",
			"RHSUSF_M2_550m_SoundShader",
			"RHSUSF_M2_1000m_SoundShader",
			"RHSUSF_M2_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_rifleSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_120mm_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_120mm_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="WeaponHeavyShot3DProcessingTypee";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_120mm_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_120mm_0m_SoundShader",
			"RHSUSF_120mm_50m_SoundShader",
			"RHSUSF_120mm_150m_SoundShader",
			"RHSUSF_120mm_550m_SoundShader",
			"RHSUSF_120mm_1000m_SoundShader",
			"RHSUSF_120mm_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_120mm_Int_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_120mm_int_0m_SoundShader",
			"RHSUSF_120mm_int_Closure_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_vehicletDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_155mm_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_155mm_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="WeaponHeavyShot3DProcessingTypee";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_155mm_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_155mm_0m_SoundShader",
			"RHSUSF_155mm_50m_SoundShader",
			"RHSUSF_155mm_150m_SoundShader",
			"RHSUSF_155mm_550m_SoundShader",
			"RHSUSF_155mm_1000m_SoundShader",
			"RHSUSF_155mm_1800m_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_155mm_Int_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_155mm_int_0m_SoundShader",
			"RHSUSF_155mm_int_Closure_SoundShader"
		};
		volumeFactor=1.35;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_vehicletDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M230_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M230_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="WeaponHeavyShot3DProcessingTypee";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_M230_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M230_0m_SoundShader",
			"RHSUSF_M230_50m_SoundShader",
			"RHSUSF_M230_150m_SoundShader",
			"RHSUSF_M230_550m_SoundShader",
			"RHSUSF_M230_1000m_SoundShader",
			"RHSUSF_M230_1800m_SoundShader"
		};
		volumeFactor=1.25;
		volumeCurve="RHSUSF_miniCannonSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_autocannon_Closure_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_autocannon_Closure_SoundShader"
		};
		volumeFactor=1.1;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="WeaponHeavyShot3DProcessingTypee";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.050000001;
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_autocannon_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_autocannon_0m_SoundShader",
			"RHSUSF_autocannon_50m_SoundShader",
			"RHSUSF_autocannon_150m_SoundShader",
			"RHSUSF_autocannon_550m_SoundShader",
			"RHSUSF_autocannon_1000m_SoundShader",
			"RHSUSF_autocannon_1800m_SoundShader"
		};
		volumeFactor=1.25;
		volumeCurve="RHSUSF_miniCannonSoundCurve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="RHSUSF_defaultDistanceFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_Rifle1_Tail_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_Rifle1_Meadows_0m_SoundShader",
			"RHSUSF_Rifle1_Meadows_150m_SoundShader",
			"RHSUSF_Rifle1_Houses_0m_SoundShader",
			"RHSUSF_Rifle1_Houses_150m_SoundShader",
			"RHSUSF_Rifle1_Trees_0m_SoundShader",
			"RHSUSF_Rifle1_Trees_150m_SoundShader",
			"RHSUSF_Rifle1_Forest_0m_SoundShader",
			"RHSUSF_Rifle1_Forest_150m_SoundShader",
			"RHSUSF_Rifle1_Interior_0m_SoundShader",
			"RHSUSF_Rifle1_Interior_50m_SoundShader",
			"RHSUSF_Rifle1_Interior_150m_SoundShader",
			"RHSUSF_Rifle1_Interior_550m_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="RHSUSF_tailSoundCurve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		soundShadersLimit=2;
		distanceFilter="RHSUSF_rifleTailDistanceFilter";
		frequencyRandomizer=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_pistol1_Tail_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_pistol1_Meadows_0m_SoundShader",
			"RHSUSF_pistol1_Meadows_150m_SoundShader",
			"RHSUSF_pistol1_Houses_0m_SoundShader",
			"RHSUSF_pistol1_Houses_150m_SoundShader",
			"RHSUSF_pistol1_Trees_0m_SoundShader",
			"RHSUSF_pistol1_Trees_150m_SoundShader",
			"RHSUSF_pistol1_Forest_0m_SoundShader",
			"RHSUSF_pistol1_Forest_150m_SoundShader",
			"RHSUSF_pistol1_Interior_0m_SoundShader",
			"RHSUSF_pistol1_Interior_50m_SoundShader",
			"RHSUSF_pistol1_Interior_150m_SoundShader",
			"RHSUSF_pistol1_Interior_550m_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="RHSUSF_tailSoundCurve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		soundShadersLimit=2;
		distanceFilter="RHSUSF_rifleTailDistanceFilter";
		frequencyRandomizer=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_Rifle1_SD_Tail_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_Rifle1_SD_Meadows_0m_SoundShader",
			"RHSUSF_Rifle1_SD_Meadows_150m_SoundShader",
			"RHSUSF_Rifle1_SD_Houses_0m_SoundShader",
			"RHSUSF_Rifle1_SD_Houses_150m_SoundShader",
			"RHSUSF_Rifle1_SD_Trees_0m_SoundShader",
			"RHSUSF_Rifle1_SD_Trees_150m_SoundShader",
			"RHSUSF_Rifle1_SD_Forest_0m_SoundShader",
			"RHSUSF_Rifle1_SD_Forest_150m_SoundShader",
			"RHSUSF_Rifle1_SD_Interior_0m_SoundShader",
			"RHSUSF_Rifle1_SD_Interior_40m_SoundShader",
			"RHSUSF_Rifle1_SD_Interior_150m_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="RHSUSF_silencedSoundCurve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		soundShadersLimit=2;
		distanceFilter="RHSUSF_rifleTailDistanceFilter";
		frequencyRandomizer=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_lmg1_Tail_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_lmg1_Meadows_0m_SoundShader",
			"RHSUSF_lmg1_Meadows_150m_SoundShader",
			"RHSUSF_lmg1_Houses_0m_SoundShader",
			"RHSUSF_lmg1_Houses_150m_SoundShader",
			"RHSUSF_lmg1_Trees_0m_SoundShader",
			"RHSUSF_lmg1_Trees_150m_SoundShader",
			"RHSUSF_lmg1_Forest_0m_SoundShader",
			"RHSUSF_lmg1_Forest_150m_SoundShader",
			"RHSUSF_lmg1_Interior_0m_SoundShader",
			"RHSUSF_lmg1_Interior_50m_SoundShader",
			"RHSUSF_lmg1_Interior_150m_SoundShader",
			"RHSUSF_lmg1_Interior_550m_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="RHSUSF_tailSoundCurve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		soundShadersLimit=2;
		distanceFilter="RHSUSF_rifleTailDistanceFilter";
		frequencyRandomizer=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_mmg1_Tail_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_mmg1_Meadows_0m_SoundShader",
			"RHSUSF_mmg1_Meadows_150m_SoundShader",
			"RHSUSF_mmg1_Houses_0m_SoundShader",
			"RHSUSF_mmg1_Houses_150m_SoundShader",
			"RHSUSF_mmg1_Trees_0m_SoundShader",
			"RHSUSF_mmg1_Trees_150m_SoundShader",
			"RHSUSF_mmg1_Forest_0m_SoundShader",
			"RHSUSF_mmg1_Forest_150m_SoundShader",
			"RHSUSF_mmg1_Interior_0m_SoundShader",
			"RHSUSF_mmg1_Interior_50m_SoundShader",
			"RHSUSF_mmg1_Interior_150m_SoundShader",
			"RHSUSF_mmg1_Interior_550m_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="RHSUSF_tailSoundCurve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		soundShadersLimit=2;
		distanceFilter="RHSUSF_rifleTailDistanceFilter";
		frequencyRandomizer=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_sniper1_Tail_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_sniper1_Meadows_0m_SoundShader",
			"RHSUSF_sniper1_Meadows_150m_SoundShader",
			"RHSUSF_sniper1_Houses_0m_SoundShader",
			"RHSUSF_sniper1_Houses_150m_SoundShader",
			"RHSUSF_sniper1_Trees_0m_SoundShader",
			"RHSUSF_sniper1_Trees_150m_SoundShader",
			"RHSUSF_sniper1_Forest_0m_SoundShader",
			"RHSUSF_sniper1_Forest_150m_SoundShader",
			"RHSUSF_sniper1_Interior_0m_SoundShader",
			"RHSUSF_sniper1_Interior_50m_SoundShader",
			"RHSUSF_sniper1_Interior_150m_SoundShader",
			"RHSUSF_sniper1_Interior_550m_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="RHSUSF_tailSoundCurve";
		sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
		soundShadersLimit=2;
		distanceFilter="RHSUSF_rifleTailDistanceFilter";
		frequencyRandomizer=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_cannon_Tail_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_cannon_Meadows_0m_SoundShader",
			"RHSUSF_cannon_Meadows_350m_SoundShader",
			"RHSUSF_cannon_Houses_0m_SoundShader",
			"RHSUSF_cannon_Houses_350m_SoundShader",
			"RHSUSF_cannon_Trees_0m_SoundShader",
			"RHSUSF_cannon_Trees_350m_SoundShader",
			"RHSUSF_cannon_Forest_0m_SoundShader",
			"RHSUSF_cannon_Forest_350m_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="RHSUSF_Cannon_3DProcessingType";
		soundShadersLimit=2;
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_autocannon_Tail_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_autocannon_Meadows_0m_SoundShader",
			"RHSUSF_autocannon_Meadows_350m_SoundShader",
			"RHSUSF_autocannon_Houses_0m_SoundShader",
			"RHSUSF_autocannon_Houses_350m_SoundShader",
			"RHSUSF_autocannon_Trees_0m_SoundShader",
			"RHSUSF_autocannon_Trees_350m_SoundShader",
			"RHSUSF_autocannon_Forest_0m_SoundShader",
			"RHSUSF_autocannon_Forest_350m_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="RHSUSF_cannonSoundCurve";
		sound3DProcessingType="RHSUSF_Cannon_3DProcessingType";
		soundShadersLimit=2;
		distanceFilter="RHSUSF_defaultDistanceFilter";
		frequencyRandomizer=0.1;
		occlusionFactor=0.30000001;
		obstructionFactor=0;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class RHSUSF_sniper1_crackling_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_sniper1_crackling_SoundShader"
		};
		volumeFactor=3.55;
		volumeCurve="RHSUSF_soundCurve";
		sound3DProcessingType="RHS_Sniper_crackling_3DProcessingType";
		soundShadersLimit=2;
		frequencyRandomizer=0.13;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class Rifle_Shot_Base_SoundSet;
	class rhs_m203_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"rhs_m203_closeShot_SoundShader",
			"UGL_midShot_SoundShader",
			"UGL_distShot_SoundShader"
		};
		volumeFactor=1.4;
	};
	class rhs_m32gl_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"rhs_m32gl_closure_SoundShader",
			"rhs_m32gl_closeShot_SoundShader",
			"UGL_midShot_SoundShader",
			"UGL_distShot_SoundShader"
		};
		volumeFactor=1.4;
	};
};
class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class Rifle_Base_F;
	class Pistol_Base_F;
	class Rifle_Short_Base_F;
	class Rifle_Long_Base_F;
	class UGL_F;
	class srifle_EBR_F;
	class LMG_Mk200_F;
	class MGun;
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class Single;
	class Launcher;
	class launch_O_Titan_F;
	class rhs_weap_saw_base: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHSUSF_m249_Closure_SoundSet",
					"RHSUSF_m249_ShotSD_SoundSet",
					"RHSUSF_rifle1_SD_Tail_SoundSet"
				};
			};
		};
	};
	class rhs_weap_lmg_minimipara: rhs_weap_saw_base
	{
		class FullAuto: FullAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHSUSF_m249_Closure_SoundSet",
					"RHSUSF_m249_ShotSD_SoundSet",
					"RHSUSF_rifle1_SD_Tail_SoundSet"
				};
			};
		};
	};
	class rhs_weap_M249_base;
	class rhs_weap_m240_base: rhs_weap_M249_base
	{
	};
	class LMG_M200: LMG_RCWS
	{
		class manual;
		class close;
		class short;
	class rhs_weap_m240veh: LMG_M200
	{
	};
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		class M203_GL: UGL_F
		{
		};
		class M320_GL: M203_GL
		{
		};
	};
	class rhs_weap_m14ebrri;
	class rhs_weap_sr25: rhs_weap_m14ebrri
	{
		class Single: Mode_SemiAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHSUSF_m16_Closure_SoundSet",
					"RHSUSF_m14_ShotSD_SoundSet",
					"RHSUSF_Rifle1_SD_Tail_SoundSet"
				};
			};
		};
	};
	class rhs_weap_M590_5RD: Rifle_Base_F
	{
	};
	class rhs_weap_M590_8RD: rhs_weap_M590_5RD
	{
	};
	class rhs_weap_M320_Base_F: Pistol_Base_F
	{
	};
	class rhs_weap_m32_Base_F: Rifle_Base_F
	{
	};
	class GM6_base_F;
	class rhs_weap_M107_Base_F: GM6_base_F
	{
		class Single: Mode_SemiAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHSUSF_m107_Closure_SoundSet",
					"RHSUSF_m107_ShotSD_SoundSet",
					"RHSUSF_rifle1_SD_Tail_SoundSet"
				};
			};
		};
	};
	class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
	{
		class Single: Single
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHSUSF_MP7_Closure_SoundSet",
					"RHSUSF_MP7_ShotSD_SoundSet",
					"RHSUSF_rifle1_SD_Tail_SoundSet"
				};
			};
		};
		class FullAuto: FullAuto
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"RHSUSF_MP7_Closure_SoundSet",
					"RHSUSF_MP7_ShotSD_SoundSet",
					"RHSUSF_rifle1_SD_Tail_SoundSet"
				};
			};
		};
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		class Single;
	};
	class rhsusf_weap_m1911a1: hgun_ACPC2_F
	{
		class Single: Single
		{
			};
		};
	};
	class RocketPods;
	class MissileLauncher;
	class Missile_AGM_02_Plane_CAS_01_F;
	class rhs_weap_fgm148: launch_O_Titan_F
	{
		class Single: Mode_SemiAuto
		{
			sound[]=
			{
				"rhsusf\addons\rhsusf_sounds\javelin\javelin_1",
				2.3499999,
				1,
				900
			};
		};
	};
	class rhs_weap_HellfireLauncher: Missile_AGM_02_Plane_CAS_01_F
	{
	};
	class rhs_weap_FFARLauncher: RocketPods
	{
	};
	class CannonCore;
	class cannon_120mm: CannonCore
	{
		class player;
		class close;
		class short;
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player;
			class close;
			class short;
		class AP: autocannon_Base_F
		{
			class player;
			class close;
			class short;
	};
	class rhs_weap_m256: cannon_120mm
	{
	};
	class mortar_155mm_AMOS;
	class cannon_155mm: mortar_155mm_AMOS
	{
		class Single1;
		class Single2;
		class Single3;
		class Single4;
		class Single5;
		class Burst1;
		class Burst2;
		class Burst3;
	class rhs_weap_m284: cannon_155mm
	{
	};
	class RHS_weap_M242BC: autocannon_30mm_CTWS
	{
		class HE: HE
		{
		};
		class AP: AP
		{
		};
	};
	class HMG_M2: HMG_01
	{
		class manual;
		class close;
		class short;
	class RHS_M2_Abrams_Commander: HMG_M2
	{
	};
	class RHS_M2_Abrams_Gunner: HMG_M2
	{
	};
	class RHS_M2: HMG_M2
	{
	};
	class gatling_30mm;
	class rhs_weap_M197: gatling_30mm
	{
	};
	class rhs_weap_M230: rhs_weap_M197
	{
	};
	class MGunCore;
	class M134_minigun: MGunCore
	{
		class LowROF;
		class HighROF;
		class close;
		class short;
	class rhs_weap_m134_minigun_1: M134_minigun
	{
	};
	class GMG_F;
	class GMG_20mm;
	class RHS_MK19: GMG_20mm
	{
	};
};
	class rhs_m2010_bolt
	{
		name="rhs_m2010_bolt";
		sound[]=
		{
			"rhsusf\addons\rhsusf_sounds\m2010\bolt",
			0.41999999,
			1,
			20
		};
		titles[]={};
	};
};
