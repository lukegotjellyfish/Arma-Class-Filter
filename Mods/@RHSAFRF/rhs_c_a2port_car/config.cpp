class DefaultEventhandlers;
class CfgPatches
{
	class rhs_c_a2port_car
	{
		units[]=
		{
			"RHS_UAZ_MSV_01",
			"RHS_UAZ_Open_MSV_01",
			"RHS_Ural_MSV_01",
			"RHS_Ural_Open_MSV_01",
			"RHS_Ural_Flat_MSV_01",
			"RHS_Ural_Open_Flat_MSV_01",
			"RHS_BM21_MSV_01",
			"RHS_Ural_Fuel_MSV_01",
			"RHS_Ural_Zu23_MSV_01",
			"RHS_Ural_Repair_MSV_01",
			"RHS_UAZ_VDV",
			"RHS_UAZ_Open_VDV",
			"RHS_Ural_VDV_01",
			"RHS_Ural_Open_VDV_01",
			"RHS_Ural_Flat_VDV_01",
			"RHS_Ural_Open_Flat_VDV_01",
			"RHS_BM21_VDV_01",
			"RHS_Ural_Fuel_VDV_01",
			"RHS_Ural_Zu23_VDV_01",
			"RHS_Ural_Repair_VDV_01",
			"RHS_UAZ_vmf",
			"RHS_UAZ_Open_vmf",
			"RHS_Ural_vmf_01",
			"RHS_Ural_Open_vmf_01",
			"RHS_Ural_Flat_vmf_01",
			"RHS_Ural_Open_Flat_vmf_01",
			"RHS_BM21_vmf_01",
			"RHS_Ural_Fuel_vmf_01",
			"RHS_Ural_Zu23_vmf_01",
			"RHS_Ural_Repair_VMF_01",
			"RHS_UAZ_vv",
			"RHS_UAZ_Open_vv",
			"RHS_Ural_vv_01",
			"RHS_Ural_Open_vv_01",
			"RHS_Ural_Flat_vv_01",
			"RHS_Ural_Open_Flat_vv_01",
			"RHS_BM21_vv_01",
			"RHS_Ural_Fuel_vv_01",
			"RHS_Ural_Zu23_vv_01",
			"RHS_Ural_Repair_VV_01",
			"RHS_Ural_Civ_01",
			"RHS_Ural_Civ_02",
			"RHS_Ural_Civ_03",
			"RHS_Ural_Open_Civ_01",
			"RHS_Ural_Open_Civ_02",
			"RHS_Ural_Open_Civ_03",
			"RHS_Civ_Truck_02_covered_F",
			"RHS_Civ_Truck_02_transport_F"
		};
		weapons[]={};
		name="A2 ported cars";
	};
	class RHS_A2_CarsImport
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class a2port_car_init
			{
				file="\rhsafrf\addons\rhs_c_a2port_car\scripts\rhs_decal_init.sqf";
				description="Decal init";
			};
			class gearSound
			{
				file="\rhsafrf\addons\rhs_c_a2port_car\UAZ\gearSound.sqf";
				description="Changing gears checker";
			};
			class gearChange
			{
				file="\rhsafrf\addons\rhs_c_a2port_car\UAZ\gearChange.sqf";
				description="Changing gears sound";
			};
			class fuelLeak
			{
				file="\rhsafrf\addons\rhs_c_a2port_car\scripts\fuelLeak.sqf";
				description="Fuel leak after hit";
			};
			class wipers
			{
				file="\rhsafrf\addons\rhs_c_a2port_car\scripts\wipers.sqf";
				description="Generic wipers function";
			};
		};
	};
};
class CfgSounds
{
	class RHS_Gear
	{
		name="Changing gear sound";
		sound[]=
		{
			"\rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change.wss",
			1584.8933,
			1,
			2.4000001
		};
		titles[]={};
	};
	class rhs_rain
	{
		name="Rain droplets sound inside car";
		sound[]=
		{
			"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss",
			5011.873,
			1,
			2.8
		};
		titles[]=
		{
			0,
			""
		};
	};
};
class CfgAnimationSourceSounds
{
	class RHS_UAZ_Door
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\ext-uaz469_engine-getin",
				3.1622777,
				1,
				60
			};
			sound1[]=
			{
				"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\uaz469\ext-uaz469_engine-getout",
				3.1622777,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				0.5,
				"sound1",
				0.5
			};
		};
	};
	class RHS_Ural_Door
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_ext_getout",
				3.9810717,
				1,
				60
			};
			sound1[]=
			{
				"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\ural4320\ural4320_engine_int_getout",
				3.9810717,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				0.5,
				"sound1",
				0.5
			};
		};
	};
	class RHS_Gearbox
	{
		class GearMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",
				5.0118723,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class RHS_Wipers
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\rhsafrf\addons\rhs_gaz66\data\sounds\wipers.wss",
				2.5118864,
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Offroad_01_base_F: Car_F;  //found empty after stripping
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};
	class RHS_UAZ_Base: Offroad_01_base_F
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_uaz_ca.paa";
		mapsize=4;
		displayName="$STR_RHS_UAZ469_NAME";
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				factions[]=
				{
					"rhs_faction_msv",
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="Camo";
			};
			class Camo1: standard
			{
				displayName="Chedaki";
			};
			class Camo2: standard
			{
				displayName="CDF";
			};
			class Camo3: standard
			{
				displayName="Civil";
			};
			class Camo4: standard
			{
				displayName="UN";
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				displayName="Define font type of plate number";
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cDecals4CarsNumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class Default
					{
						name="Default";
						value="Default";
						defaultValue="Default";
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
					class LicensePlate
					{
						name="License Plate";
						value="LicensePlate";
					};
				};
			};
			class rhs_decalNumber
			{
				collapsed=1;
				displayName="Set plate number";
				tooltip="Set plate number. 4 numbers are required. If 0, random number will be generated";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if(_value >= 0)then{[_this,[['Number', cDecals4CarsNumberPlaces, _this getVariable ['rhs_decalNumber_type','LicensePlate'], _value]]] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type
			{
				displayName="Define large door roundel type";
				tooltip="Decal type";
				property="rhs_decalArmy_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				class values
				{
					class Army
					{
						name="Army";
						value="Army";
						defaultValue="Army";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
					};
					class HonorGDR
					{
						name="Honor GDR";
						value="HonorGDR";
					};
					class Platoon
					{
						name="Platoon";
						value="Platoon";
					};
					class PlatoonGDR
					{
						name="Platoon GDR";
						value="PlatoonGDR";
					};
					class PlatoonVDV
					{
						name="Platoon VDV";
						value="PlatoonVDV";
					};
				};
			};
			class rhs_decalArmy
			{
				displayName="Set large door roundel symbol";
				tooltip="Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoon_type: rhs_decalArmy_type
			{
				displayName="Define small door roundel type";
				property="rhs_decalPlatoon_type";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
			};
			class rhs_decalPlatoon: rhs_decalArmy
			{
				displayName="Set small door roundel symbol";
				tooltip="Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_hideLightCover
			{
				displayName="Hide light covers";
				property="rhs_hideLightCover";
				control="CheckboxNumber";
				expression="_this animate ['light_hide',_value,true]";
				defaultValue="0";
			};
			class rhs_hidespare: rhs_hideLightCover
			{
				displayName="Remove spare wheel";
				property="rhs_hidespare";
				expression="_this animate ['spare_hide',_value,true]";
			};
			class Door_LF: rhs_hidespare
			{
				displayName="Open front left door";
				property="Door_LF";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class Door_RF: Door_LF
			{
				displayName="Open front right door";
				property="Door_RF";
			};
			class Door_LB: Door_LF
			{
				displayName="Open left back door";
				property="Door_LB";
			};
			class Door_RB: Door_LF
			{
				displayName="Open right back door";
				property="Door_RB";
			};
		};
		hideProxyInCombat=0;
		attenuationEffectType="RHS_CarAttenuation";
		cost=50000;
		driverRightLegAnimName="pedalR";
		driverLeftLegAnimName="pedalL";
		soundAttenuationCargo[]={1};
		soundGear[]=
		{
			"rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",
			2,
			1
		};
		class Turrets: Turrets;  //found empty after stripping
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		armor=52;
		minTotalDamageThreshold=0.20999999;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		fuelExplosionPower=0.1;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				radius=0.15000001;
				armor=0.175;
				passThrough=0.30000001;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.15000001;
				armor=0.175;
				passThrough=0.30000001;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.15000001;
				armor=0.175;
				passThrough=0.30000001;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.15000001;
				armor=0.175;
				passThrough=0.30000001;
			};
			class HitSpare: HitRF2Wheel
			{
				name="spare1";
			};
			class UseSpare: HitSpare
			{
				name="";
				armor=1;
			};
			class HitLightL
			{
				armor=0.02;
				minimalHit=0.1;
				material=-1;
				name="L svetlo";
				passThrough=0;
				radius=0.1;
			};
			class HitLightR: HitLightL
			{
				name="P svetlo";
			};
			class HitSearchlight: HitLightL
			{
				name="searchlight";
			};
			class HitHull
			{
				armor=0.5;
				material=-1;
				name="hull";
				passThrough=0.2;
				radius=0.1;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="Hit_Fuel";
				passThrough=0.2;
				radius=0.1;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="Hit_Engine";
				armorComponent="Hit_Engine";
				passThrough=0.2;
				radius=0.16;
			};
			class HitBody: HitBody
			{
				name="karoserie";
				passThrough=1;
				radius=0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.1;
				radius=0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.050000001;
				radius=0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.050000001;
				radius=0.2;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.050000001;
				radius=0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.050000001;
				radius=0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.050000001;
				radius=0.2;
			};
			class HitDoor_1_1
			{
				armor=0.2;
				minimalHit=0.075000003;
				material=-1;
				name="door11";
				passThrough=0.1;
				radius=0.17;
				explosionShielding=0.5;
			};
			class HitDoor_1_2: HitDoor_1_1
			{
				name="door12";
			};
			class HitDoor_2_1: HitDoor_1_1
			{
				name="door21";
			};
			class HitDoor_2_2: HitDoor_1_1
			{
				name="door22";
			};
			class Hithood: HitDoor_1_1
			{
				armor=0.30000001;
				name="hood1";
			};
		};
		cargoaction[]=
		{
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo02"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
		class Damage;  //found empty after stripping
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectOffroad";
			};
		};
		armorLights=0.050000001;
		normalSpeedForwardCoef=0.80000001;
		slowSpeedForwardCoef=0.44999999;
		turnCoef=2.5;
		terrainCoef=0.40000001;
		waterSpeedFactor=0.40000001;
		simulation="carx";
		dampersBumpCoef=4;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=120;
		fuelCapacity=30;
		RHS_fuelCapacity=78;
		wheelCircumference=2.45;
		brakeIdleSpeed=0.5;
		maxFordingDepth=0;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness=10;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.224,
				"N",
				0,
				"D1",
				3.78,
				"D2",
				2.5999999,
				"D3",
				1.55,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				5.125
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.85000002,0.94999999,0.94999999,0.94999999};
		switchTime=0.50999999;
		latency=1;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=15;
		transmissionLosses=20;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.15000001,0.28901699},
			{0.30000001,0.89595401},
			{0.47999999,1},
			{0.51999998,1},
			{0.69999999,0.95375699},
			{0.80000001,0.89595401},
			{0.89999998,0.80924898},
			{1,0.69364202}
		};
		enginePower=67;
		engineMOI=1.1;
		peakTorque=173;
		maxOmega=523.59998;
		minOmega=20;
		idleRPM=750;
		redRPM=5000;
		engineLosses=14;
		thrustDelay=0.2;
		engineBrakeCoef=0.89999998;
		accelAidForceYOffset=-0.85000002;
		accelAidForceCoef=5;
		accelAidForceSpd=4.23;
		antiRollbarForceCoef=0.5;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.16;
				mass=20;
				MOI=24;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				maxCompression=0.2;
				maxDroop=0.1;
				sprungMass=-1;
				springStrength=14000;
				springDamperRate=2400;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1.2},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=3000;
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
				maxHandBrakeTorque=3000;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_a2port_car_init";
				engine="if(_this select 1)then{_this call RHS_fnc_gearSound};";
				dammaged="_this call rhs_fnc_wheelDamaged";
			};
		};
	};
	class rhs_uaz_open_Base: RHS_UAZ_Base
	{
		displayName="$STR_RHS_UAZ469OPEN_NAME";
		attenuationEffectType="OpenCarAttenuation";
		showNVGDriver=1;
		showNVGCargo[]={1};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=6;
				maxTurn=105;
				minTurn=-10;
				class dynamicViewLimits
				{
					CargoTurret_01[]={40,105};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=1;
				maxTurn=-41;
				minTurn=-95;
				class dynamicViewLimits;  //found empty after stripping
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=2;
				maxTurn=95;
				minTurn=18;
				class dynamicViewLimits;  //found empty after stripping
			};
			class CargoTurret_05: CargoTurret_01
			{
				proxyIndex=4;
				maxTurn=-11;
				minTurn=-95;
				class dynamicViewLimits;  //found empty after stripping
			};
		};
	};
	class RHS_UAZ_DShKM_Base: RHS_UAZ_Base
	{
		nameSound="veh_vehicle_armedcar_s";
		displayName="UAZ-3151 (DShKM)";
		attenuationEffectType="OpenCarAttenuation";
		threat[]={0.89999998,0.30000001,0.1};
		memoryPointsGetInCargo[]={};
		memoryPointsGetInCargoDir[]={};
		cargoDoors[]={};
		showNVGDriver=1;
		showNVGCargo[]={1};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="Camo";
			};
			class Camo1: standard
			{
				displayName="Chedaki";
			};
			class Camo2: standard
			{
				displayName="CDF";
			};
			class Camo4: standard
			{
				displayName="UN";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				forceHideGunner=0;
				weapons[]=
				{
					"rhs_weap_DSHKM"
				};
				magazines[]=
				{
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50",
					"rhs_mag_127x108mm_50"
				};
				selectionFireAnim="zasleh";
				ejectDeadGunner=1;
				soundAttenuationTurret="HeliAttenuationGunner";
				minElev=-25;
				maxElev=60;
				stabilizedInAxes=0;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.34999999;
					maxFov=1;
				};
				class OpticsIn
				{
					class Sight: ViewOptics
					{
						initFov=0.69999999;
						minFov=0.34999999;
						maxFov=0.69999999;
					};
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor=-40;
						material=-1;
						name="Hit_Turret";
						armorComponent="Hit_Turret";
						passThrough=0;
						minimalHit=0.0099999998;
						explosionShielding=0.0089999996;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=-30;
						material=-1;
						name="Hit_Gun";
						armorComponent="Hit_Gun";
						passThrough=0;
						minimalHit=0.0099999998;
						explosionShielding=0.001;
						radius=0.12;
					};
				};
			};
		};
	};
	class RHS_UAZ_AGS30_Base: RHS_UAZ_DShKM_Base
	{
		displayName="UAZ-3151 (AGS-30)";
		attenuationEffectType="OpenCarAttenuation";
		threat[]={0.89999998,0.30000001,0.1};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_weap_AGS30"
				};
				magazines[]=
				{
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30"
				};
				class OpticsIn
				{
					class Sight: ViewOptics
					{
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
					};
				};
			};
		};
	};
	class RHS_UAZ_SPG9_Base: RHS_UAZ_DShKM_Base
	{
		displayName="UAZ-3151 (SPG-9)";
		threat[]={0.89999998,0.60000002,0.1};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_SPG9"
				};
				magazines[]=
				{
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_OG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V",
					"rhs_mag_PG9V"
				};
				minElev=-10;
				maxElev=30;
				initElev=0;
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
				class OpticsIn
				{
					class Sight: ViewOptics
					{
						initFov=0.111;
						minFov=0.111;
						maxFov=0.111;
					};
				};
			};
		};
	};
	class RHS_UAZ_MSV_Base: RHS_UAZ_Base
	{
		accuracy=0.5;
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class rhs_uaz_open_MSV_Base: rhs_uaz_open_Base
	{
		accuracy=0.5;
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class RHS_UAZ_MSV_01: RHS_UAZ_MSV_Base;  //found empty after stripping
	class rhs_uaz_vdv: RHS_UAZ_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_uaz_vmf: RHS_UAZ_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class rhs_uaz_vv: RHS_UAZ_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_uaz_open_MSV_01: rhs_uaz_open_MSV_Base;  //found empty after stripping
	class rhs_uaz_open_vdv: rhs_uaz_open_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_uaz_open_vmf: rhs_uaz_open_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class rhs_uaz_open_vv: rhs_uaz_open_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class RHS_Ural_BaseTurret: Truck_F
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']"
		};
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_ural_ca.paa";
		mapsize=7;
		displayName="$STR_RHS_URAL4320_NAME";
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
			};
			class Camo: standard
			{
				displayName="Camo";
			};
			class Camo1: standard
			{
				displayName="Chedaki";
			};
			class Camo2: standard
			{
				displayName="CDF";
			};
			class Camo3: standard
			{
				displayName="Civil Blue";
			};
			class Camo4: standard
			{
				displayName="Civil Yellow";
			};
			class Camo5: standard
			{
				displayName="Civil Worker";
			};
			class Camo6: standard
			{
				displayName="UN";
			};
			class Camo7: standard
			{
				displayName="Takistan";
			};
			class rhs_sand: standard
			{
				displayName="Sand";
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				displayName="Define font type of plate number";
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cDecals4CarsNumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class Default
					{
						name="Default";
						value="Default";
						defaultValue="Default";
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
					class LicensePlate
					{
						name="License Plate";
						value="LicensePlate";
					};
				};
			};
			class rhs_decalNumber
			{
				collapsed=1;
				displayName="Set plate number";
				tooltip="Set plate number. 4 numbers are required. If 0, random number will be generated";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{[_this,[['Number', cDecals4CarsNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type
			{
				displayName="Define large door roundel type";
				tooltip="Decal type";
				property="rhs_decalArmy_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				class values
				{
					class Army
					{
						name="Army";
						value="Army";
						defaultValue="Army";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
					};
					class HonorGDR
					{
						name="Honor GDR";
						value="HonorGDR";
					};
					class Platoon
					{
						name="Platoon";
						value="Platoon";
					};
					class PlatoonGDR
					{
						name="Platoon GDR";
						value="PlatoonGDR";
					};
					class PlatoonVDV
					{
						name="Platoon VDV";
						value="PlatoonVDV";
					};
				};
			};
			class rhs_decalArmy
			{
				displayName="Set large door roundel symbol";
				tooltip="Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoon_type: rhs_decalArmy_type
			{
				displayName="Define small door roundel type";
				property="rhs_decalPlatoon_type";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
			};
			class rhs_decalPlatoon: rhs_decalArmy
			{
				displayName="Set small door roundel symbol";
				tooltip="Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsCarsRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_hideLightCover
			{
				displayName="Hide light covers";
				property="rhs_hideLightCover";
				control="CheckboxNumber";
				expression="_this animate ['light_hide',_value,true]";
				defaultValue="0";
			};
			class rhs_hidespare: rhs_hideLightCover
			{
				displayName="Remove spare wheel";
				property="rhs_hidespare";
				expression="_this animate ['spare_hide',_value,true]";
			};
			class Door_LF: rhs_hidespare
			{
				displayName="Open front left door";
				property="Door_LF";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class Door_RF: Door_LF
			{
				displayName="Open front right door";
				property="Door_RF";
			};
		};
		attenuationEffectType="RHS_CarAttenuation";
		soundAttenuationCargo[]={1,1,0.30000001};
		cost=50000;
		driverRightLegAnimName="pedalR";
		driverLeftLegAnimName="pedalL";
		weapons[]=
		{
			"TruckHorn3"
		};
		supplyRadius=5.5;
		soundGear[]=
		{
			"rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",
			2,
			1
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment1",
			"Compartment2",
			"Compartment2",
			"Compartment2",
			"Compartment2"
		};
		armor=52;
		minTotalDamageThreshold=0.13;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		fuelExplosionPower=0.1;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				radius=0.25;
				armorComponent="wheel_1_1_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.25;
				armorComponent="wheel_1_2_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius=0.25;
				armorComponent="wheel_1_3_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLBWheel: HitLBWheel
			{
				radius=0.25;
				armorComponent="wheel_1_4_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.25;
				armorComponent="wheel_2_1_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.25;
				armorComponent="wheel_2_2_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius=0.25;
				armorComponent="wheel_2_3_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRBWheel: HitRBWheel
			{
				radius=0.25;
				armorComponent="wheel_2_4_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitSpare: HitRF2Wheel
			{
				name="spare1";
			};
			class UseSpare: HitSpare
			{
				name="";
				armor=1;
			};
			class HitFuel
			{
				armor=0.5;
				radius=0.2;
				name="Hit_Fuel";
				armorComponent="Hit_Fuel";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				radius=0.2;
				name="Hit_Engine";
				armorComponent="Hit_Engine";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="karoserie";
				passThrough=1;
				radius=0.2;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.050000001;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.050000001;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.050000001;
			};
		};
		cargoGetInAction[]=
		{
			"GetInMantis",
			"GetInMantis",
			"GetInHemttBack"
		};
		cargoGetOutAction[]=
		{
			"GetOutMedium",
			"GetOutMedium",
			"GetOutHighZamak"
		};
		memorypointtrackbll="Stopa ZLL";
		memorypointtrackblr="Stopa ZLP";
		memorypointtrackbrl="Stopa ZPL";
		memorypointtrackbrr="Stopa ZPP";
		memorypointtrackfll="Stopa PLL";
		memorypointtrackflr="Stopa PLP";
		memorypointtrackfrl="Stopa PPL";
		memorypointtrackfrr="Stopa PPP";
		class Damage;  //found empty after stripping
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectHTruck";
			};
		};
		armorLights=0.050000001;
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		turnCoef=4;
		terrainCoef=0.69999999;
		waterSpeedFactor=0.40000001;
		simulation="carx";
		dampersBumpCoef=6;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=76;
		fuelCapacity=40;
		RHS_fuelCapacity=300;
		wheelCircumference=3.8699999;
		brakeIdleSpeed=1.25;
		maxFordingDepth=0;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness=10;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.3000002,
				"N",
				0,
				"D1",
				5.6199999,
				"D2",
				2.8900001,
				"D3",
				1.64,
				"D4",
				1,
				"D5",
				0.72399998
			};
			TransmissionRatios[]=
			{
				"High",
				5.8200002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.80000001,0.85000002,0.85000002,0.94999999,0.85000002};
		switchTime=0.31;
		latency=1.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=0.60000002;
		centreBias=1.3;
		clutchStrength=75;
		transmissionLosses=12;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.42857099,0.91732699},
			{0.52381003,0.93431503},
			{0.59523797,1},
			{0.690476,1},
			{0.76190501,0.95696503},
			{0.85714298,0.92865199},
			{1,0.50962597}
		};
		enginePower=179;
		engineMOI=2;
		peakTorque=1059.6;
		maxOmega=219.91;
		minOmega=65;
		idleRPM=650;
		redRPM=2100;
		engineLosses=14;
		thrustDelay=2.4000001;
		engineBrakeCoef=0.30000001;
		antiRollbarForceCoef=25;
		antiRollbarForceLimit=45.5;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=60;
		class Wheels
		{
			class LF
			{
				width="0.37";
				steering=1;
				side="left";
				mass=90;
				MOI=18;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={-0.125,-1,0};
				maxCompression=0.27000001;
				maxDroop=0.2;
				sprungMass=-1;
				springStrength=171813;
				springDamperRate=15872;
				longitudinalStiffnessPerUnitGravity=14582;
				latStiffX=3.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1.2},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=20000;
			};
			class LR2: LR;  //found empty after stripping
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR: RF
			{
				steering=0;
				maxHandBrakeTorque=20000;
			};
			class RR2: RR;  //found empty after stripping
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_a2port_car_init";
				engine="if(_this select 1)then{_this call RHS_fnc_gearSound};";
				dammaged=" _this call rhs_fnc_wheelDamaged";
			};
		};
		class Components;
	};
	class RHS_Ural_Base: RHS_Ural_BaseTurret
	{
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=11;
				maxTurn=95;
				minTurn=20;
				minElev=-45;
			};
		};
	};
	class RHS_Ural_MSV_Base: RHS_Ural_Base
	{
		accuracy=0.5;
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class RHS_Ural_MSV_01: RHS_Ural_MSV_Base;  //found empty after stripping
	class RHS_Ural_VDV_01: RHS_Ural_MSV_Base
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class RHS_Ural_VMF_01: RHS_Ural_MSV_Base
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class RHS_Ural_VV_01: RHS_Ural_MSV_Base
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class RHS_Ural_Flat_MSV_01: RHS_Ural_MSV_Base
	{
		displayName="Ural-4320 (Flatbed)";
		class Turrets;  //found empty after stripping
	};
	class RHS_Ural_Flat_VDV_01: RHS_Ural_Flat_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class RHS_Ural_Flat_VMF_01: RHS_Ural_Flat_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class RHS_Ural_Flat_VV_01: RHS_Ural_Flat_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base
	{
		displayName="$STR_RHS_URAL4320OPEN_NAME";
		soundAttenuationCargo[]={1,1,0};
		hideProxyInCombat=1;
		canHideDriver=0;
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="CDF";
			};
			class Camo1: standard
			{
				displayName="Takistan";
			};
			class Camo2: standard
			{
				displayName="Chedaki";
			};
			class rhs_sand: standard
			{
				displayName="Sand";
			};
		};
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_02
			{
				animationSourceHatch="turnout1";
				proxyIndex=23;
				maxElev=45;
				minElev=-25;
				maxTurn=60;
				minTurn=-85;
				isPersonTurret=2;
				canHideGunner=1;
				allowLauncherOut=1;
				commanding=-2;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{35,-85},
						{35,60}
					};
					limitsArrayBottom[]=
					{
						{-15,-65},
						{-25,-49},
						{-45,-36},
						{-19,-18},
						{-9,-7},
						{-9,32},
						{-15,52},
						{-25,60},
						{-15,76}
					};
					turnOffset=-90;
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				animationSourceHatch="turnout2";
				proxyIndex=24;
				maxTurn=25;
				minTurn=-60;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{35,-60},
						{35,95}
					};
					limitsArrayBottom[]=
					{
						{-19,-60},
						{-22,-57},
						{-22,-47},
						{-12,-42},
						{-9,-28},
						{-11,10},
						{-15,25},
						{-45,55},
						{-15,95}
					};
					turnOffset=-90;
				};
			};
		};
	};
	class RHS_Ural_Open_VDV_01: RHS_Ural_Open_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class RHS_Ural_Open_VMF_01: RHS_Ural_Open_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class RHS_Ural_Open_VV_01: RHS_Ural_Open_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class RHS_Ural_Open_Flat_MSV_01: RHS_Ural_Open_MSV_01
	{
		displayName="Ural-4320 (Open/Flatbed)";
		class Turrets;  //found empty after stripping
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="O_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VVT_cargo_1",
					"VVT_cargo_2"
				};
				disableHeightLimit=1;
				maxLoadMass=25000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VVT_exit"
				};
				unloadingInterval=2;
				loadingDistance=5;
				loadingAngle=60;
				parachuteClassDefault="O_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class RHS_Ural_Open_Flat_VDV_01: RHS_Ural_Open_Flat_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class RHS_Ural_Open_Flat_VMF_01: RHS_Ural_Open_Flat_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class RHS_Ural_Open_Flat_VV_01: RHS_Ural_Open_Flat_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base
	{
		class Turrets;  //found empty after stripping
	};
	class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		displayName="$STR_RHS_URAL4320FUEL_NAME";
		icon="\A3\soft_f_gamma\Truck_02\data\UI\Map_Truck_02_fuel_CA.paa";
		transportfuel=10000;
		supplyRadius=9.5;
		class Hitpoints: HitPoints
		{
			class HitFuelTank
			{
				armor=0.5;
				material=-1;
				name="Hit_FuelTank";
				armorComponent="Hit_FuelTank";
				passThrough=0.2;
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="CDF";
			};
			class Camo1: standard
			{
				displayName="Takistan";
			};
			class Camo2: standard
			{
				displayName="Chedaki";
			};
			class rhs_sand: standard
			{
				displayName="Sand";
			};
		};
	};
	class RHS_Ural_Fuel_VDV_01: RHS_Ural_Fuel_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class RHS_Ural_Fuel_VMF_01: RHS_Ural_Fuel_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class RHS_Ural_Fuel_VV_01: RHS_Ural_Fuel_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class RHS_Ural_Repair_MSV_01: RHS_Ural_Support_MSV_Base_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
		displayName="$STR_RHS_URAL4320Repair_NAME";
		icon="\A3\soft_f_beta\Truck_02\data\UI\Map_truck_02_repair_CA.paa";
		transportRepair=2000000000;
		supplyRadius=9.5;
		class Damage;  //found empty after stripping
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="3-Color Camo";
			};
			class Camo1: standard
			{
				displayName="CDF";
			};
			class Camo2: standard
			{
				displayName="Takistan";
			};
			class Camo3: standard
			{
				displayName="Chedaki";
			};
			class rhs_sand: standard
			{
				displayName="Sand";
			};
		};
	};
	class RHS_Ural_Repair_VDV_01: RHS_Ural_Repair_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class RHS_Ural_Repair_VMF_01: RHS_Ural_Repair_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class RHS_Ural_Repair_VV_01: RHS_Ural_Repair_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class RHS_BM21_MSV_01: RHS_Ural_BaseTurret
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
		accuracy=0.5;
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
		displayName="$STR_RHS_BM21_NAME";
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_BM21_CA.paa";
		mapsize=8;
		availableforsupporttypes[]=
		{
			"Artillery"
		};
		artilleryscanner=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding=1;
				minElev=0;
				maxElev=65;
				initElev=11.5;
				weapons[]={};
				magazines[]={};
				stabilizedInAxes=0;
				usePiP=1;
				startEngine=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
				};
				lockWhenVehicleSpeed=1;
				elevationMode=3;
				class Hitpoints
				{
					class HitLauncher
					{
						isGun=1;
						armor=-80;
						explosionShielding=0.25;
						passThrough=0.2;
						minimalHit=0.0099999998;
						radius=0.07;
						name="Hit_Launcher";
						armorComponent="Hit_Launcher";
					};
					class HitTurret
					{
						isTurret=1;
						armor=-80;
						explosionShielding=0.25;
						passThrough=0.2;
						minimalHit=0.0099999998;
						radius=0.07;
						name="Hit_Turret";
						armorComponent="Hit_Turret";
					};
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_BM21"
						};
						maxweight=200;
						UIposition[]={0.12,0.1};
						bay=1;
						attachment="rhs_mag_m21of_1";
						turret[]={0};
						hitpoint="HitLauncher";
					};
					class pylon2: pylon1
					{
						UIposition[]={0.12,0.14};
					};
					class pylon3: pylon1
					{
						UIposition[]={0.12,0.18000001};
					};
					class pylon4: pylon1
					{
						UIposition[]={0.12,0.22};
					};
					class pylon5: pylon1
					{
						UIposition[]={0.12,0.25999999};
					};
					class pylon6: pylon1
					{
						UIposition[]={0.12,0.30000001};
					};
					class pylon7: pylon1
					{
						UIposition[]={0.12,0.34};
					};
					class pylon8: pylon1
					{
						UIposition[]={0.12,0.38};
					};
					class pylon9: pylon1
					{
						UIposition[]={0.12,0.41999999};
					};
					class pylon10: pylon1
					{
						UIposition[]={0.12,0.46000001};
					};
					class pylon11: pylon1
					{
						UIposition[]={0.31,0.1};
					};
					class pylon12: pylon1
					{
						UIposition[]={0.31,0.14};
					};
					class pylon13: pylon1
					{
						UIposition[]={0.31,0.18000001};
					};
					class pylon14: pylon1
					{
						UIposition[]={0.31,0.22};
					};
					class pylon15: pylon1
					{
						UIposition[]={0.31,0.25999999};
					};
					class pylon16: pylon1
					{
						UIposition[]={0.31,0.30000001};
					};
					class pylon17: pylon1
					{
						UIposition[]={0.31,0.34};
					};
					class pylon18: pylon1
					{
						UIposition[]={0.31,0.38};
					};
					class pylon19: pylon1
					{
						UIposition[]={0.31,0.41999999};
					};
					class pylon20: pylon1
					{
						UIposition[]={0.31,0.46000001};
					};
					class pylon21: pylon1
					{
						UIposition[]={0.5,0.1};
					};
					class pylon22: pylon1
					{
						UIposition[]={0.5,0.14};
					};
					class pylon23: pylon1
					{
						UIposition[]={0.5,0.18000001};
					};
					class pylon24: pylon1
					{
						UIposition[]={0.5,0.22};
					};
					class pylon25: pylon1
					{
						UIposition[]={0.5,0.25999999};
					};
					class pylon26: pylon1
					{
						UIposition[]={0.5,0.30000001};
					};
					class pylon27: pylon1
					{
						UIposition[]={0.5,0.34};
					};
					class pylon28: pylon1
					{
						UIposition[]={0.5,0.38};
					};
					class pylon29: pylon1
					{
						UIposition[]={0.5,0.41999999};
					};
					class pylon30: pylon1
					{
						UIposition[]={0.5,0.46000001};
					};
					class pylon31: pylon1
					{
						UIposition[]={0.69,0.1};
					};
					class pylon32: pylon1
					{
						UIposition[]={0.69,0.14};
					};
					class pylon33: pylon1
					{
						UIposition[]={0.69,0.18000001};
					};
					class pylon34: pylon1
					{
						UIposition[]={0.69,0.22};
					};
					class pylon35: pylon1
					{
						UIposition[]={0.69,0.25999999};
					};
					class pylon36: pylon1
					{
						UIposition[]={0.69,0.30000001};
					};
					class pylon37: pylon1
					{
						UIposition[]={0.69,0.34};
					};
					class pylon38: pylon1
					{
						UIposition[]={0.69,0.38};
					};
					class pylon39: pylon1
					{
						UIposition[]={0.69,0.41999999};
					};
					class pylon40: pylon1
					{
						UIposition[]={0.69,0.46000001};
					};
				};
				class Presets
				{
					class M21OF
					{
						attachment[]=
						{
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1",
							"rhs_mag_m21of_1"
						};
						displayname="M-21OF High Explosive";
					};
					class 9M28F
					{
						attachment[]=
						{
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1",
							"rhs_mag_9m28f_1"
						};
						displayname="9M28 High Explosive Fragmentation";
					};
					class 9M28K
					{
						attachment[]=
						{
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1",
							"rhs_mag_9m28k_1"
						};
						displayname="9M28K Cluster Anti Tank Mines";
					};
					class 9M218
					{
						attachment[]=
						{
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1",
							"rhs_mag_9m218_1"
						};
						displayname="9M218 Cluster HEAT";
					};
					class 9M521
					{
						attachment[]=
						{
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1",
							"rhs_mag_9m521_1"
						};
						displayname="9M521 High Explosive Extended Range";
					};
					class 9M522
					{
						attachment[]=
						{
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1",
							"rhs_mag_9m522_1"
						};
						displayname="9M522 High Explosive Fragmentation Extended Range";
					};
				};
				class Bays
				{
					class MainBay
					{
						bayOpenTime=5.5;
						openBayWhenWeaponSelected=0.5;
						autoCloseWhenEmptyDelay=1;
					};
				};
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="3-Color Camo";
			};
			class Camo1: standard
			{
				displayName="Chedaki";
			};
			class Camo2: standard
			{
				displayName="CDF";
			};
			class Camo4: standard
			{
				displayName="Takistan";
			};
			class rhs_sand: standard
			{
				displayName="Sand";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers;  //found empty after stripping
		};
	};
	class RHS_BM21_VDV_01: RHS_BM21_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class RHS_BM21_VMF_01: RHS_BM21_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class RHS_BM21_VV_01: RHS_BM21_MSV_01
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class RHS_Ural_Zu23_Base: RHS_Ural_BaseTurret
	{
		displayName="$STR_RHS_URAL4320_ZU23_NAME";
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_URAL_zu23_CA.paa";
		mapsize=8;
		threat[]={0.60000002,0.1,0.60000002};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				minElev=-10;
				maxElev=85;
				initElev=10;
				weapons[]=
				{
					"rhs_weap_2A14"
				};
				magazines[]=
				{
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100",
					"RHS_mag_AZP23_100"
				};
				selectionFireAnim="zasleh";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memoryPointGun[]=
				{
					"muzzle_1",
					"muzzle_2"
				};
				memorypointgunneroptics="gunnerview";
				stabilizedInAxes=0;
				startEngine=0;
				canUseScanners=0;
				allowTabLock=0;
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera3"
						};
						gunnerOutOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera3"
						};
						visionMode[]=
						{
							"Normal"
						};
					};
				};
				soundAttenuationTurret="HeliAttenuationRamp";
				class Hitpoints
				{
					class HitTurret
					{
						armor=-40;
						material=-1;
						name="Hit_Turret";
						armorComponent="Hit_Turret";
						passThrough=0;
						minimalHit=0.0099999998;
						explosionShielding=0.0089999996;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=-30;
						material=-1;
						name="Hit_Gun";
						armorComponent="Hit_Gun";
						passThrough=0;
						minimalHit=0.0099999998;
						explosionShielding=0.001;
						radius=0.12;
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				playerPosition=1;
				commanding=2;
				primaryObserver=0;
				proxyIndex=4;
				isPersonTurret=2;
				animationSourceHatch="gunner_rf_turn";
				allowLauncherOut=1;
				canHideGunner=1;
				dontCreateAI=1;
				minElev=-45;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-180},
						{45,180}
					};
					limitsArrayBottom[]=
					{
						{-45,-65},
						{-42,-45.686699},
						{-34,-22.686701},
						{-12,12.6867},
						{-8,44},
						{-11,74},
						{-25,84}
					};
					turnOffset=-180;
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				isPersonTurret=1;
				canHideGunner=0;
				allowLauncherOut=0;
				proxyIndex=5;
				animationSourceHatch="";
				minTurn=-65;
			};
		};
		class Damage;  //found empty after stripping
		class textureSources
		{
			class standard
			{
				displayName="Khaki";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="CDF";
			};
			class Camo1: standard
			{
				displayName="Takistan";
			};
			class Camo2: standard
			{
				displayName="Chedaki";
			};
		};
	};
	class RHS_Ural_Zu23_MSV_01: RHS_Ural_Zu23_Base
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Platoon', 12]"
		};
		accuracy=0.5;
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
		};
	};
	class RHS_Ural_Zu23_VDV_01: RHS_Ural_Zu23_Base
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsCarsRightPlatoonPlaces, 'Platoon',11]"
		};
		accuracy=0.5;
		side=0;
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
		};
	};
	class RHS_Ural_Zu23_VMF_01: RHS_Ural_Zu23_Base
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [3,1]]"
		};
		accuracy=0.5;
		side=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
		};
	};
	class RHS_Ural_Zu23_VV_01: RHS_Ural_Zu23_Base
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecals4CarsNumberPlaces, 'Default']",
			"['Label', cDecalsCarsRightArmyPlaces, 'Army', [6,1]]"
		};
		accuracy=0.5;
		side=0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
		};
	};
	class RHS_Ural_Civ_Base: RHS_Ural_Base
	{
		accuracy=0.5;
		side=3;
		rhs_decalParameters[]={};
	};
	class RHS_Ural_Civ_01: RHS_Ural_Civ_Base
	{
		displayName="$STR_RHS_URAL4320BLUE_NAME";
	};
	class RHS_Ural_Civ_02: RHS_Ural_Civ_01
	{
		displayName="$STR_RHS_URAL4320YELLOW_NAME";
	};
	class RHS_Ural_Civ_03: RHS_Ural_Civ_01
	{
		displayName="$STR_RHS_URAL4320WORKER_NAME";
	};
	class RHS_Ural_Open_Civ_01: RHS_Ural_Civ_Base
	{
		displayName="$STR_RHS_URAL4320BLUEOPEN_NAME";
	};
	class RHS_Ural_Open_Civ_02: RHS_Ural_Open_Civ_01
	{
		displayName="$STR_RHS_URAL4320YELLOWOPEN_NAME";
	};
	class RHS_Ural_Open_Civ_03: RHS_Ural_Open_Civ_01
	{
		displayName="$STR_RHS_URAL4320WORKEROPEN_NAME";
	};
	class Truck_02_base_F;
	class RHS_Civ_Truck_02_covered_F: Truck_02_base_F
	{
		side=3;
	};
	class RHS_Civ_Truck_02_transport_F: Truck_02_base_F
	{
		side=3;
		displayName="$STR_A3_CfgVehicles_C_Truck_02_Dump0";
		castCargoShadow=1;
	};
};
class CfgSoundEffects
{
	class AttenuationsEffects
	{
		class RHS_CarAttenuation
		{
			class Equalizer0
			{
				bandwidth[]={2,2,2,2};
				gain[]={0.89999998,0.80000001,0.69999999,0.60000002};
			};
			class Equalizer1
			{
				bandwidth[]={2,2,2,2};
				gain[]={0.89999998,0.80000001,0.60000002,0.5};
			};
			class Echo
			{
				WetDryMix=0.1;
				Feedback=0.1;
				Delay=1;
			};
		};
	};
};
