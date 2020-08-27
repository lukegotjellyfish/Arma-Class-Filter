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
		requiredVersion=1.96;
		requiredAddons[]=
		{
			"rhs_main"
		};
	};
	class rhs_c_bkm_t: rhs_c_bmk_t;  //found empty after stripping
};
class CfgVehicles
{
	class Ship_F;
	class rhs_bmk_t_base: Ship_F
	{
		displayName="BMK Tug";
		model="rhsafrf\addons\rhs_bmk_t\bmk_t.p3d";
		picture="\rhsafrf\addons\rhs_c_bmk_t\data\rhs_bmk_t_ca.paa";
		vehicleClass="rhs_vehclass_boat";
		editorSubCategory="rhs_EdSubcat_boat";
		driverAction="driver_mid01";
		driverInAction="driver_mid01";
		getInAction="GetInLow";
		getOutAction="GetOutLow";
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
		viewDriverInExternal=1;
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerInAction="RHS_Kamaz_Cargo01";
				gunnerAction="passenger_inside_2";
				gunnerName="Passenger";
				gunnerCompartments="Compartment1";
				gunnerUsesPilotView=0;
				gunnerForceOptics=0;
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_2";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				animationSourceHatch="hatch_r";
				LODTurnedIn=1200;
				LODTurnedOut=1;
				proxyIndex=1;
				maxElev=45;
				minElev=-35;
				maxTurn=10;
				minTurn=-105;
				class dynamicViewLimits;  //found empty after stripping
				class Hitpoints;  //found empty after stripping
			};
		};
		class Reflectors
		{
			class Light_Center
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_Center_pos";
				direction="Light_Center_dir";
				hitpoint="Light_Center";
				selection="Light_Center";
				size=1;
				innerAngle=8;
				outerAngle=15;
				coneFadeCoef=1;
				intensity=45;
				useFlare=1;
				dayLight=1;
				flareSize=0.85000002;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.02;
					hardLimitStart=630;
					hardLimitEnd=660;
				};
			};
			class Light_Center_Flare
			{
				color[]={7,6,6.5};
				ambient[]={22,22,22};
				position="Light_Center_pos";
				direction="Light_Center_dir";
				hitpoint="Light_Center";
				selection="Light_Center";
				size=1;
				innerAngle=30;
				outerAngle=215;
				coneFadeCoef=10;
				intensity=100;
				useFlare=1;
				dayLight=0;
				flareSize=1.85;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=10;
					hardLimitStart=0;
					hardLimitEnd=0.89999998;
				};
			};
		};
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
		insideSoundCoef=0;
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
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsafrf\addons\rhs_bmk_t\data\bmk_t.rvmat",
				"rhsafrf\addons\rhs_bmk_t\data\bmk_t_dam.rvmat",
				"rhsafrf\addons\rhs_bmk_t\data\bmk_t_destr.rvmat",
				"rhsafrf\addons\rhs_bmk_t\data\bmk_t_win.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat"
			};
		};
	};
	class rhs_bmk_t: rhs_bmk_t_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="rhs_faction_vmf";
		crew="rhs_vmf_flora_engineer";
	};
	class rhs_bkm_t: rhs_bmk_t
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=1;
		scopeCurator=1;
	};
};
