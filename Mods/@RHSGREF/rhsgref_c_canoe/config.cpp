class DefaultEventhandlers;
class CfgPatches
{
	class rhsgref_c_canoe
	{
		units[]=
		{
			"rhsgref_hidf_canoe",
			"rhsgref_civ_canoe"
		};
		weapons[]={};
		name="RHS Canoe";
	};
};
class CfgVehicles
{
	class Boat_F;
	class Rubber_duck_base_F: Boat_F
	{
		class EventHandlers;
	};
	class rhsgref_canoe_base: Rubber_duck_base_F
	{
		DLC="RHS_GREF";
		extCameraPosition[]={0,1,-3};
		LODDriverTurnedIn=0;
		LODDriverTurnedOut=0;
		ejectDeadDriver=0;
		hideWeaponsDriver=0;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		armor=15;
		epeImpulseDamageCoef=12;
		class textureSources
		{
			class Purple
			{
				factions[]=
				{
					"rhsgref_faction_hidf",
					"CIV_F"
				};
			};
		};
		engineEffectSpeed=2;
		leftEngineEffect="";
		rightEngineEffect="";
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		waterEffectSpeed=2;
		leftWaterEffect="";
		rightWaterEffect="";
		memoryPointsLeftWaterEffect="waterEffectL";
		memoryPointsRightWaterEffect="waterEffectR";
		waterFastEffectSpeed=18;
		leftFastWaterEffect="";
		rightFastWaterEffect="";
		maxSpeed=15;
		overSpeedBrakeCoef=0.5;
		enginePower=100.5;
		idleRPM=30;
		engineMOI=0.1;
		engineShiftY=0.60000002;
		waterLeakiness=0.5;
		waterResistanceCoef=0.15000001;
		thrustDelay=0.050000001;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.3;
		rudderForceCoef=1.1;
		rudderForceCoefAtMaxSpeed=0.2;
		torqueCurve[]=
		{
			{0,0},
			{0.26499999,0.60000002},
			{0.417,0.80000001},
			{0.66299999,0.98199999},
			{0.75800002,1},
			{0.85000002,0.93000001},
			{0.92500001,0.80699998},
			{1,0.60000002}
		};
		class ComplexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-1.5,
				"N",
				0,
				"D1",
				1
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
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), '', [], false] call bis_fnc_initVehicle;};";
			engine="_this execVM 'rhsgref\addons\rhsgref_canoe\scripts\rhs_paddleAnim.sqf'";
		};
		soundEngineOnInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"",
			1,
			1,
			150
		};
		soundEngineOffInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"",
			1,
			1,
			150
		};
		class Sounds
		{
			class WaternoiseOutW0
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					1,
					1,
					150
				};
				frequency="1";
				volume="((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					1,
					1,
					300
				};
				frequency="1";
				volume="(speed factor[3, 9])";
			};
			class WaternoiseOutW3
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					1,
					0.89999998,
					150
				};
				frequency="1";
				volume="((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					1,
					0.89999998,
					300
				};
				frequency="1";
				volume="(speed factor[-3, -9])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",
					1.7782794,
					1,
					100
				};
				frequency=1;
				volume="(scrubLand factor[0.01, 0.20])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
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
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
	};
	class rhsgref_hidf_canoe: rhsgref_canoe_base
	{
		side=1;
		textureList[]=
		{
			"Camo",
			1
		};
	};
	class rhsgref_civ_canoe: rhsgref_canoe_base
	{
		side=3;
		textureList[]=
		{
			"Purple",
			1,
			"Red",
			1,
			"Yellow",
			1,
			"Black",
			1,
			"Blue",
			1,
			"Green",
			1,
			"Orange",
			1
		};
	};
};
