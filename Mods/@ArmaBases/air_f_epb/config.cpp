class CfgPatches
{
	class A3_Air_F_EPB_Heli_Light_03
	{
		addonRootClass="A3_Air_F_EPB";
		requiredAddons[]=
		{
			"A3_Air_F_EPB"
		};
		requiredVersion=0.1;
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
		author="$STR_A3_Bohemia_Interactive";
		mapSize=15.09;
		_generalMacro="Heli_light_03_base_F";
		scope=0;
		displayname="$STR_A3_CfgVehicles_I_Heli_light_03_F0";
		model="\A3\Air_F_EPB\Heli_Light_03\Heli_Light_03_F.p3d";
		icon="\A3\Air_F_EPB\Heli_Light_03\data\UI\Map_Heli_Light_03_CA.paa";
		picture="\A3\Air_F_EPB\Heli_Light_03\data\UI\Heli_Light_03_CA.paa";
		editorSubcategory="EdSubcat_Helicopters";
		driverAction="pilot_Heli_Light_03";
		driverInAction="pilot_Heli_Light_03";
		precisegetinout=1;
		getInRadius=2;
		hideWeaponsDriver=1;
		hideWeaponsGunner=1;
		hideWeaponsCargo=1;
		getInAction="pilot_Heli_Light_03_Enter";
		getOutAction="pilot_Heli_Light_03_Exit";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft"
		};
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
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=6;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_F
			{
				weapon="arifle_Mk20C_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=6;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=1;
			};
		};
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
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
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
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\open",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\close",
			1,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_start_int",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_start_ext",
			2.5118864,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_stop_int",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_stop_ext",
			2.5118864,
			1,
			600
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
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_ext",
					1.7782794,
					1,
					700
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_ext",
					1.4125376,
					1,
					1100
				};
				frequency="rotorSpeed * (1-rotorThrust/5)";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\rotor_swist",
					1,
					1,
					300
				};
				frequency=1;
				volume="camPos * (rotorThrust factor [0.7, 0.9])";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_int",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_int",
					1.7782794,
					1
				};
				frequency="rotorSpeed * (1-rotorThrust/5)";
				volume="(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05])";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
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
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_open_int",
					0.56234133,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
					0.3548134,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents;  //found empty after stripping
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_ext",
						1.7782794,
						1,
						700
					};
					frequency="rotorSpeed";
					volume="camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_ext",
						1.4125376,
						1,
						1100
					};
					frequency="rotorSpeed * (1-rotorThrust/5)";
					volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\rotor_swist",
						1,
						1,
						300
					};
					frequency=1;
					volume="camPos * (rotorThrust factor [0.7, 0.9])";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_engine_int",
						1,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Light_03\heli_rotor_int",
						1.7782794,
						1
					};
					frequency="rotorSpeed * (1-rotorThrust/5)";
					volume="(1-camPos)*(0 max (rotorSpeed*rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubLandExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05])";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
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
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_open_int",
						0.56234133,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2b",
						0.3548134,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		class RenderTargets
		{
			class Copilot_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="laserstart";
					pointDirection="commanderview";
					renderVisionMode=2;
					renderQuality=2;
					fov=0.093000002;
					turret[]={0};
				};
				BBoxes[]=
				{
					"PIP_0_TL",
					"PIP_0_TR",
					"PIP_0_BL",
					"PIP_0_BR"
				};
			};
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
				visual="podsvit pristroju";
			};
			class HitEngine1
			{
				armor=1;
				radius=0.25;
				name="engine_1_hit";
				explosionShielding=3;
				minimalHit=0.1;
				visual="motor";
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
				visual="glass1";
				radius=0.37;
				armor=1;
				explosionShielding=2;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects1";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass2
			{
				name="glass2";
				visual="glass2";
				radius=0.37;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects2";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass3
			{
				name="glass3";
				visual="glass3";
				radius=0.25;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects3";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass4
			{
				name="glass4";
				visual="glass4";
				radius=0.25;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects4";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass5
			{
				name="glass5";
				visual="glass5";
				radius=0.34;
				armor=1;
				explosionShielding=2;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects5";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass6
			{
				name="glass6";
				visual="glass6";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects6";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass7
			{
				name="glass7";
				visual="glass7";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects7";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass8
			{
				name="glass8";
				visual="glass8";
				radius=0.34;
				armor=1;
				explosionShielding=1.5;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects8";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass9
			{
				name="glass9";
				visual="glass9";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects9";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class HitGlass10
			{
				name="glass10";
				visual="glass10";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.025;
				passThrough=0;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5NS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5SS";
						position="GlassEffects10";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
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
		transportSoldier=6;
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
						type="fixed";
						pos[]={0.5,0.57200003};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.847,0.84500003};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.347,0.345};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.847,0.84500003};
					};
					class HorizonVector
					{
						type="horizon";
						pos0[]={0.5,0.57200003};
						pos10[]={0.99072701,1.0599};
						angle=0;
					};
					class VerticalSpeedBone
					{
						type="linear";
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
						type="line";
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
						type="line";
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
							type="text";
							source="static";
							text="%";
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
							type="text";
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
						type="text";
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
						type="text";
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
						type="text";
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
						type="text";
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
						type="scale";
						horizontal=0;
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						width=4;
						top=0.69999999;
						center=0.5;
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
						type="line";
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
						type="text";
						source="static";
						text=15;
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
						type="text";
						source="static";
						text=-15;
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
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=4;
						top=0.30000001;
						center=0.5;
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
							type="line";
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
							type="line";
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
							type="line";
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
							type="line";
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
							type="text";
							source="static";
							text="Mode: TI WHOT";
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
							type="text";
							source="static";
							text="Range:";
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
							type="text";
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
		class AnimationSources: AnimationSources
		{
			class GunL_Revolving
			{
				source="revolving";
				weapon="M134_minigun";
			};
			class GunR_Revolving: GunL_Revolving;  //found empty after stripping
			class muzzle_hide
			{
				source="reload";
				weapon="M134_minigun";
			};
			class Muzzle_Flash
			{
				source="ammorandom";
				weapon="M134_minigun";
				animPeriod=1e-006;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_DAR";
			};
			class RocketPods_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class HideWeapons
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class HitGlass1
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass1";
			};
			class HitGlass2
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass2";
			};
			class HitGlass3
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass3";
			};
			class HitGlass4
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass4";
			};
			class HitGlass5
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass5";
			};
			class HitGlass6
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass6";
			};
			class HitGlass7
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass7";
			};
			class HitGlass8
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass8";
			};
			class HitGlass9
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass9";
			};
			class HitGlass10
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass10";
			};
			class HitGlass11
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass11";
			};
			class HitGlass12
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass12";
			};
			class HitGlass13
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass13";
			};
			class HitGlass14
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass14";
			};
		};
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
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base.rvmat",
				"A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_damage.rvmat",
				"A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_destruct.rvmat",
				"A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_interior.rvmat",
				"A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_interior_damage.rvmat",
				"A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_interior_destruct.rvmat",
				"A3\Data_f\Glass_veh.rvmat",
				"A3\Data_f\Glass_veh_damage.rvmat",
				"A3\Data_f\Glass_veh_damage.rvmat"
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={70,75,100};
				ambient[]={70,75,100};
				intensity=7;
				size=1;
				innerAngle=5;
				outerAngle=175;
				coneFadeCoef=10;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hit";
				selection="Light_1";
				useFlare=1;
				dayLight=0;
				FlareSize=0.69999999;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=10;
					hardLimitEnd=50;
				};
			};
			class Light_2: Light_1
			{
				position="Light_2_pos";
				direction="Light_2_dir";
				hitpoint="Light_2_hit";
				selection="Light_2";
			};
			class Light_3: Light_1
			{
				position="Light_3_pos";
				direction="Light_3_dir";
				hitpoint="Light_3_hit";
				selection="Light_3";
			};
			class Light_4: Light_1
			{
				position="Light_4_pos";
				direction="Light_4_dir";
				hitpoint="Light_4_hit";
				selection="Light_4";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Light_1",
				"Light_2"
			},
			
			{
				"Light_3",
				"Light_4"
			}
		};
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
				body="obsTurret";
				gun="obsGun";
				animationSourceBody="obsTurret";
				animationSourceGun="obsGun";
				stabilizedInAxes=3;
				primaryGunner=0;
				memoryPointGunnerOptics="commanderview";
				minElev=-40;
				maxElev=20;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				gunBeg="commanderview";
				gunEnd="laserstart";
				memoryPointGun="laserstart";
				gunnerName="$STR_A3_COPILOT";
				isCopilot=1;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				weapons[]=
				{
					"FakeHorn"
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1,
					30
				};
				magazines[]={};
				usePiP=1;
				inGunnerMayFire=1;
				gunnerAction="copilot_Heli_Light_03";
				gunnerInAction="copilot_Heli_Light_03";
				precisegetinout=1;
				gunnerGetInAction="copilot_Heli_Light_03_Enter";
				gunnerGetOutAction="copilot_Heli_Light_03_Exit";
				gunnerOpticsEffect[]={};
				gunnerOpticsModel="";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedalL";
				gunnerRightLegAnimName="pedalR";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
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
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
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
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class ViewGunner: ViewPilot
				{
					initAngleX=-15;
				};
				startEngine=0;
				gunnerHasFlares=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="gun";
						passThrough=0.2;
						radius=0.25;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="gun";
						passThrough=0.2;
						radius=0.25;
					};
				};
				class Reflectors
				{
					class Right
					{
						color[]={7000,7500,10000};
						ambient[]={70,75,100};
						intensity=50;
						size=1;
						innerAngle=5;
						outerAngle=65;
						coneFadeCoef=10;
						position="laserstart";
						direction="commanderview";
						hitpoint="glass11";
						selection="glass11";
						useFlare=1;
						dayLight=0;
						FlareSize=4;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=0;
							quadratic=0.050000001;
							hardLimitStart=400;
							hardLimitEnd=450;
						};
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
					opticsDisplayName="W";
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
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
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
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa",
					"a3\weapons_f\ammoboxes\data\ammobox_co.paa",
					"a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_INDP_CO.paa",
					"a3\weapons_f\ammoboxes\data\ammobox_co.paa",
					"a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
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
		transportSoldier=4;
		hideWeaponsCargo=1;
		cargoProxyIndexes[]={3,4,5,6};
		getInProxyOrder[]={1,2,3,4,5,6};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo dir r";
				gunnerName="$STR_A3_TURRETS_DOOR_R";
				proxyIndex=1;
				isPersonTurret=1;
				ejectDeadGunner=1;
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{10.5776,-58.473202},
						{16.443899,33.970001},
						{11.9517,85.806198}
					};
					limitsArrayBottom[]=
					{
						{-11.7914,-67.324799},
						{-33.808899,-27.733},
						{-33.006199,0.77179998},
						{-14.5823,22.671},
						{-10.2873,43.9272},
						{-20.625401,76.586502}
					};
				};
				class TurnIn: TurnOut;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo l";
				memoryPointsGetInGunnerDir="pos cargo dir l";
				gunnerName="$STR_A3_TURRETS_DOOR_L";
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
				class TurnIn: TurnOut;  //found empty after stripping
			};
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_flatground_generic04",
			"passenger_flatground_generic05",
			"passenger_apc_narrow_generic02"
		};
		class AnimationSources: AnimationSources
		{
			class HideWeapons
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
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
						priority=5;
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
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
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
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Heli_light_03_unarmed_base_F";
		displayname="$STR_A3_CfgVehicles_I_Heli_light_03_unarmed_F0";
		model="\A3\Air_F_EPB\Heli_Light_03\Heli_Light_03_unarmed_F.p3d";
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
		author="$STR_A3_Bohemia_Interactive";
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
		scope=1;
		side=2;
		faction="IND_F";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_INDP_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			1
		};
		transportSoldier=4;
		hideWeaponsCargo=1;
		cargoProxyIndexes[]={3,4,5,6};
		getInProxyOrder[]={1,2,3,4,5,6};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo dir r";
				gunnerName="$STR_A3_TURRETS_DOOR_R";
				proxyIndex=1;
				isPersonTurret=1;
				ejectDeadGunner=1;
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{10.5776,-58.473202},
						{16.443899,33.970001},
						{11.9517,85.806198}
					};
					limitsArrayBottom[]=
					{
						{-11.7914,-67.324799},
						{-33.808899,-27.733},
						{-33.006199,0.77179998},
						{-14.5823,22.671},
						{-10.2873,43.9272},
						{-20.625401,76.586502}
					};
				};
				class TurnIn: TurnOut;  //found empty after stripping
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo l";
				memoryPointsGetInGunnerDir="pos cargo dir l";
				gunnerName="$STR_A3_TURRETS_DOOR_L";
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
				class TurnIn: TurnOut;  //found empty after stripping
			};
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_flatground_generic04",
			"passenger_flatground_generic05",
			"passenger_apc_narrow_generic02"
		};
	};
	class I_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
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
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_Heli_light_03_dynamicLoadout_F.jpg";
		_generalMacro="I_Heli_light_03_dynamicLoadout_F";
		scope=2;
		side=2;
		faction="IND_F";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		hiddenSelections[]=
		{
			"camo",
			"ammobox",
			"ammobox_sign"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_INDP_CO.paa",
			"a3\weapons_f\ammoboxes\data\ammobox_co.paa",
			"a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
		};
		textureList[]=
		{
			"Indep",
			1
		};
	};
	class I_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
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
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_Heli_light_03_unarmed_F.jpg";
		_generalMacro="I_Heli_light_03_unarmed_F";
		scope=2;
		side=2;
		faction="IND_F";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
		};
		textureList[]=
		{
			"Green",
			1
		};
	};
	class I_Heli_light_03_base_F: Heli_light_03_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1;
		_generalMacro="I_Heli_light_03_base_F";
		deprecated=1;
	};
	class I_Heli_light_03_unarmed_base_F: Heli_light_03_unarmed_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1;
		_generalMacro="I_Heli_light_03_unarmed_base_F";
		deprecated=1;
	};
};
