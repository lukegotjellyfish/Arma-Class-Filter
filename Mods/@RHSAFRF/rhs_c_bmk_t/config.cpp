class CfgPatches
{
	class rhs_c_bmk_t
	{
		units[]=
		{
			"rhs_bkm_t",
			"rhs_bmk_t"
		};
		weapons[]={};
	};
	class rhs_c_bkm_t: rhs_c_bmk_t;  //found empty after stripping
};
class CfgVehicles
{
	class Ship_F;
	class rhs_bmk_t_base: Ship_F
	{
		editorSubCategory="rhs_EdSubcat_boat";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		simulation="shipX";
		maxSpeed=17;
		normalSpeedForwardCoef=0.5;
		slowSpeedForwardCoef=0.30000001;
		enginePower=565.5;
		peakTorque=379;
		maxOmega=251.32742;
		redRpm=2400;
		thrustDelay=1.5;
		engineMOI=1.5;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2,
				"N",
				0,
				"D1",
				4.5999999
			};
			TransmissionRatios[]=
			{
				"High",
				1
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		waterResistance=0.5;
		waterDamageEngine=0.89999998;
		waterAngularDampingCoef=1;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterPPInVehicle=0;
		waterResistanceCoef=0.1;
		engineShiftY=0.30000001;
		engineShiftZ=-3;
		rudderForceCoef=3.5;
		rudderForceCoefAtMaxSpeed=0.30000001;
		hideProxyInCombat=1;
		class CargoTurret;
		class Turrets;  //found empty after stripping
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		attenuationEffectType="OpenCarAttenuation";
		soundEngineOnInt[]=
		{
			"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-start-02",
			"db-5",
			1
		};
		soundEngineOnExt[]=
		{
			"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-start-02",
			"db-5",
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-stop-02",
			"db-5",
			1
		};
		soundEngineOffExt[]=
		{
			"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-stop-02",
			"db-5",
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_01",
			"db5",
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_02",
			"db5",
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_03",
			"db5",
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.33000001,
			"buildCrash1",
			0.33000001,
			"buildCrash2",
			0.34
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_01",
			"db5",
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_02",
			"db5",
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_03",
			"db5",
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.33000001,
			"woodCrash1",
			0.33000001,
			"woodCrash2",
			0.34
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_01",
			"db10",
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02",
			"db10",
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03",
			"db10",
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.33000001,
			"ArmorCrash1",
			0.33000001,
			"ArmorCrash2",
			0.34
		};
		soundGeneralCollision1[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_01",
			"db5",
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02",
			"db5",
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03",
			"db5",
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
			0.34
		};
		class Sounds
		{
			class IdleOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-idle-2",
					"db-6",
					1,
					300
				};
				frequency="0.95 + ((rpm/1200) factor[(100/1200),(300/1200)])*0.15";
				volume="engineOn*(((rpm/1200) factor[(0/1200),(30/1200)])* ((rpm/1200) factor[(500/1200),(300/1200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-low-2",
					"db-4",
					1,
					450
				};
				frequency="0.95 + ((rpm/1200) factor[(300/1200),(600/1200)])*0.2";
				volume="engineOn*(((rpm/1200) factor[(150/1200),(250/1200)])* ((rpm/1200) factor[(600/1200),(400/1200)]))";
			};
			class EngineMidOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-mid-2",
					"db-2",
					1,
					500
				};
				frequency="0.95 + ((rpm/1200) factor[(600/1200),(900/1200)])*0.2";
				volume="engineOn*(((rpm/1200) factor[(350/1200),(500/1200)])* ((rpm/1200) factor[(1000/1200),(700/1200)]))";
			};
			class EngineMaxOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-high-2",
					"db0",
					1,
					600
				};
				frequency="0.95 + ((rpm/1200) factor[(700/1200),(1000/1200)])*0.2";
				volume="engineOn*((rpm/1200) factor[(800/1200),(1200/1200)])";
			};
			class WaternoiseOutW0
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					"db-3",
					1,
					150
				};
				frequency="1";
				volume="(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					"db-2",
					1,
					250
				};
				frequency="1";
				volume="((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					"db0",
					1,
					350
				};
				frequency="1";
				volume="(speed factor[3, 9])";
			};
			class WaternoiseOutW3
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					"db-3",
					1,
					150
				};
				frequency="1";
				volume="(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					"db-2",
					0.89999998,
					250
				};
				frequency="1";
				volume="((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					"db0",
					0.89999998,
					350
				};
				frequency="1";
				volume="(speed factor[-3, -9])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",
					"db5",
					0.89999998,
					100
				};
				frequency=1;
				volume="(scrubLand factor[0.01, 0.20])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					"db0",
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					"db0",
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		class Damage;  //found empty after stripping
	};
	class rhs_bmk_t: rhs_bmk_t_base
	{
		side=0;
	};
	class rhs_bkm_t: rhs_bmk_t;  //found empty after stripping
};
