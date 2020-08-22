class CfgPatches
{
	class rhs_c_cars
	{
		units[]=
		{
			"rhs_tigr_vdv",
			"rhs_tigr_vmf",
			"rhs_tigr_msv",
			"rhs_tigr_vv",
			"rhs_tigr_3camo_vdv",
			"rhs_tigr_3camo_vmf",
			"rhs_tigr_3camo_msv",
			"rhs_tigr_3camo_vv",
			"rhs_tigr_ffv_vdv",
			"rhs_tigr_ffv_vmf",
			"rhs_tigr_ffv_msv",
			"rhs_tigr_ffv_vv",
			"rhs_tigr_ffv_3camo_vdv",
			"rhs_tigr_ffv_3camo_vmf",
			"rhs_tigr_ffv_3camo_msv",
			"rhs_tigr_ffv_3camo_vv",
			"rhs_tigr_sts_msv",
			"rhs_tigr_sts_vdv",
			"rhs_tigr_sts_vv",
			"rhs_tigr_sts_vmf",
			"rhs_tigr_sts_3camo_vdv",
			"rhs_tigr_sts_3camo_vmf",
			"rhs_tigr_sts_3camo_msv",
			"rhs_tigr_sts_3camo_vv",
			"rhs_tigr_m_vdv",
			"rhs_tigr_m_vmf",
			"rhs_tigr_m_msv",
			"rhs_tigr_m_vv",
			"rhs_tigr_m_3camo_vdv",
			"rhs_tigr_m_3camo_vmf",
			"rhs_tigr_m_3camo_msv",
			"rhs_tigr_m_3camo_vv"
		};
		weapons[]={};
		name="Tigr vehicles";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class tigr_init
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_decal_init.sqf";
				description="Tigr decal init";
			};
			class tigr_hatch_handler
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_hatchHandler.sqf";
				description="Tigr hatch handler";
			};
			class tigr_sts_turret
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret.sqf";
				description="Tigr STS weapon handler";
			};
			class tigr_sts_turret_seat_eh
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_seat_eh.sqf";
				description="Tigr STS weapon event handler";
			};
			class tigr_sts_turret_getin_eh
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_getin_eh.sqf";
				description="Tigr STS weapon event handler";
			};
			class tigr_sts_turret_getout_eh
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_getout_eh.sqf";
				description="Tigr STS weapon event handler";
			};
			class tigr_sts_turret_ui
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_ui.sqf";
				description="Tigr STS weapon handler";
			};
			class tigr_sts_reloaded_eh
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_reloaded_eh.sqf";
				description="Tigr STS reloaded event handler";
			};
			class tigr_sts_inventory_eh
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_inventory_eh.sqf";
				description="Tigr STS inventory event handler for RPG-26 animations";
			};
			class tigrm_gunner
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_gunner.sqf";
				description="Tigr STS weapon event handler";
			};
			class tigrm_turret_seat_eh
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_turret_seat_eh.sqf";
				description="Tigr STS weapon event handler";
			};
			class tigrm_turret_getin_eh
			{
				file="\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_turret_getin_eh.sqf";
				description="Tigr STS weapon event handler";
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
class RscPicture;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
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
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class MRAP_02_base_F: Car_F
	{
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitBody;
			class HitFuel;
			class HitEngine;
		};
		class EventHandlers;
	};
	class rhs_tigr_base: MRAP_02_base_F
	{
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		canfloat=0;
		cargoaction[]=
		{
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo02"
		};
		cargoIsCoDriver[]={0,0};
		castDriverShadow=1;
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', 2]",
			"['Label', cDecalsTigrRightPlatoonPlaces, 'Platoon',11]"
		};
		driverRightLegAnimName="pedalR";
		driverLeftLegAnimName="pedalL";
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		turnCoef=3;
		terrainCoef=1.5;
		waterSpeedFactor=0.40000001;
		simulation="carx";
		dampersBumpCoef=4;
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=140;
		fuelCapacity=17.5;
		RHS_fuelCapacity=140;
		wheelCircumference=2.45;
		brakeIdleSpeed=2;
		maxFordingDepth=0;
		waterResistance=1;
		waterLeakiness=10;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.4759998,
				"N",
				0,
				"D1",
				3.0999999,
				"D2",
				1.8099999,
				"D3",
				1.41,
				"D4",
				1,
				"D5",
				0.70999998
			};
			TransmissionRatios[]=
			{
				"High",
				5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.89999998,0.89999998,0.89999998,0.89999998,0.89999998};
		switchTime=0.28;
		latency=1;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=35;
		transmissionLosses=9;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.30000001,0.34918001},
			{0.40000001,0.69508201},
			{0.47999999,0.97377002},
			{0.60000002,1},
			{0.72000003,1},
			{0.80000001,0.96557403},
			{0.88,0.911475},
			{1.1244,0}
		};
		enginePower=134;
		peakTorque=915;
		maxOmega=261.79999;
		minOmega=55;
		idleRPM=750;
		redRPM=2500;
		engineLosses=11;
		thrustDelay=0.80000001;
		engineBrakeCoef=0.30000001;
		antiRollbarForceCoef=3.5;
		antiRollbarForceLimit=4.5;
		antiRollbarSpeedMin=40;
		antiRollbarSpeedMax=120;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.31999999;
				steering=1;
				mass=60;
				MOI=10;
				dampingRate=3.0999999;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12000;
				maxHandBrakeTorque=0;
				maxCompression=0.13;
				maxDroop=0.11;
				sprungMass=-1;
				springStrength=135000;
				springDamperRate=12471;
				longitudinalStiffnessPerUnitGravity=4800;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0.17,0.94999999},
					{0.40000001,0.85000002},
					{1,0.75}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=20000;
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
			};
			class RR: RF
			{
				steering=0;
				maxHandBrakeTorque=20000;
			};
		};
		armor=60;
		armorGlass=0.89999998;
		armorWheels=4.9000001;
		minTotalDamageThreshold=0.2;
		damageResistance=0.00562;
		secondaryExplosion=-1;
		fuelExplosionPower=0.1;
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard;  //found empty after stripping
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cDecalsTigr4NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				tooltip="Set plate number. 4 numbers are required. If 0, random number will be generated";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{[_this,[['Number', cDecalsTigr4NumberPlaces, _this getVariable ['rhs_decalNumber_type','LicensePlate'], _value]]] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type
			{
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
				tooltip="Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsTigrRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoon_type: rhs_decalArmy_type
			{
				property="rhs_decalPlatoon_type";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
			};
			class rhs_decalPlatoon: rhs_decalArmy
			{
				tooltip="Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsTigrRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_hidespare
			{
				property="rhs_hidespare";
				control="CheckboxNumber";
				expression="_this animate ['spare_hide',_value,true]";
				defaultValue="0";
			};
			class Door_LF: rhs_hidespare
			{
				property="Door_LF";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class Door_RF: Door_LF
			{
				property="Door_RF";
			};
			class Door_Rear: Door_LF
			{
				property="Door_Rear";
			};
		};
		hideProxyInCombat=1;
		driverIsCommander=1;
		enableGPS=0;
		magazines[]={};
		selectionDashboard="light";
		side=0;
		attenuationEffectType="RHS_CarAttenuation";
		TextPlural="Tigrs";
		TextSingular="Tigr";
		weapons[]=
		{
			"TruckHorn"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		soundGear[]=
		{
			"",
			5.6234101e-005,
			1
		};
		class Damage;  //found empty after stripping
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=3.0999999;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=3.0999999;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=3.0999999;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=3.0999999;
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
			class HitHull
			{
				armor=-200;
				name="karoserie";
				passThrough=0.2;
				minimalHit=-0.2;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitBody: HitBody
			{
				minimalHit=0.1;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				name="palivo";
			};
			class HitEngine: HitEngine
			{
				minimalHit=0.02;
				armor=3.9000001;
				name="motor";
			};
			class HitGlass1: HitGlass1
			{
				armor=8.1000004;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
			};
			class HitGlass10: HitGlass1
			{
				name="glass10";
			};
		};
		canHideDriver=0;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=7;
				isPersonTurret=2;
				animationSourceHatch="Hatch_Back";
				enabledByAnimationSource="hatch_back_door";
			};
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		armorLights=0.1;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_tigr_init;";
				turnIn="([0] + _this)  call rhs_fnc_turretAction;";
				turnOut="([1] + _this) call rhs_fnc_turretAction;";
				dammaged="_this call rhs_fnc_wheelDamaged";
			};
			class RHS_TigrHandler
			{
				seatSwitched="if(_this select 1 != driver (_this select 0))then{(_this select 1) action ['turnIn',_this select 0]}";
				getIn="if((_this select 3) in [[0],[1]])then{(_this select 2) action ['turnIn',_this select 0]};";
			};
		};
	};
	class rhs_tigr_vdv: rhs_tigr_base;  //found empty after stripping
	class rhs_tigr_vmf: rhs_tigr_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class rhs_tigr_msv: rhs_tigr_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_tigr_vv: rhs_tigr_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_tigr_3camo_vdv: rhs_tigr_base;  //found empty after stripping
	class rhs_tigr_3camo_vmf: rhs_tigr_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class rhs_tigr_3camo_msv: rhs_tigr_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_tigr_3camo_vv: rhs_tigr_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_tigr_ffv_vdv: rhs_tigr_vdv
	{
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02
			{
				isPersonTurret=1;
			};
		};
	};
	class rhs_tigr_ffv_vmf: rhs_tigr_ffv_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class rhs_tigr_ffv_msv: rhs_tigr_ffv_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_tigr_ffv_vv: rhs_tigr_ffv_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_tigr_ffv_3camo_vdv: rhs_tigr_ffv_vdv;  //found empty after stripping
	class rhs_tigr_ffv_3camo_vmf: rhs_tigr_ffv_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"
		};
	};
	class rhs_tigr_ffv_3camo_msv: rhs_tigr_ffv_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_tigr_ffv_3camo_vv: rhs_tigr_ffv_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_tigr_sts_vdv: rhs_tigr_vdv
	{
		hideProxyInCombat=0;
		magazines[]=
		{
			"rhs_proxy_ags30_12_mag",
			"rhs_proxy_pkm_18_mag"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGun="weapon_pkm_end";
				forceHideGunner=0;
				weapons[]=
				{
					"rhs_weap_pkm_tigr"
				};
				magazines[]=
				{
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"rhs_mag_762x54mm_100",
					"RHS_mag_VOG30_30"
				};
				selectionFireAnim="muzzleFlash1";
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
					minFov=0.25;
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
					class Hit_PKM_Turret
					{
						armor=-100;
						minimalHit=-0.13;
						explosionShielding=0.5;
						radius=0.1;
						name="Hit_PKM_Turret";
						armorComponent="Hit_PKM_Turret";
						passThrough=0;
						isTurret=1;
					};
					class Hit_PKM_Gun
					{
						armor=-100;
						minimalHit=-0.13;
						explosionShielding=0.5;
						radius=0.1;
						name="Hit_PKM_Gun";
						armorComponent="Hit_PKM_Gun";
						passThrough=0;
						isGun=1;
					};
				};
			};
			class AGS_Turret: MainTurret
			{
				memoryPointGun="weapon_ags_end";
				selectionFireAnim="muzzleFlash2";
				dontCreateAi=1;
				cantCreateAI=1;
				proxyIndex=2;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				initTurn=-30;
				weapons[]=
				{
					"RHS_weap_AGS30_tigr"
				};
				magazines[]=
				{
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"rhs_mag_762x54mm_100"
				};
				class OpticsIn
				{
					class Sight: ViewOptics
					{
						hitpoint="Hit_AGS_Optic";
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
					};
				};
				class Hitpoints
				{
					class Hit_AGS_Turret
					{
						armor=-100;
						minimalHit=-0.13;
						explosionShielding=0.5;
						radius=0.1;
						name="Hit_AGS_Turret";
						armorComponent="Hit_AGS_Turret";
						passThrough=0;
						isTurret=1;
					};
					class Hit_AGS_Gun
					{
						armor=-100;
						minimalHit=-0.13;
						explosionShielding=0.5;
						radius=0.1;
						name="Hit_AGS_Gun";
						armorComponent="Hit_AGS_Gun";
						passThrough=0;
						isGun=1;
					};
					class Hit_AGS_Optic
					{
						armor=-30;
						minimalHit=-0.13;
						explosionShielding=0.5;
						radius=0.1;
						name="Hit_AGS_Optic";
						armorComponent="Hit_AGS_Optic";
						passThrough=0;
					};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_tigr_init; (_this select 0) lockTurret [[1],true]; _this call rhs_fnc_tigr_sts_inventory_eh;";
				getIn="_this call rhs_fnc_tigr_sts_turret_getin_eh";
				getOut="_this spawn rhs_fnc_tigr_sts_turret_getout_eh";
				seatSwitched="_this call rhs_fnc_tigr_sts_turret_seat_eh";
				containerClosed="_this call rhs_fnc_tigr_sts_inventory_eh;";
				reloaded="_this call rhs_fnc_tigr_sts_reloaded_eh";
			};
			class RHS_TigrHandler;  //found empty after stripping
		};
	};
	class rhs_tigr_sts_vmf: rhs_tigr_sts_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class AGS_Turret: AGS_Turret;  //found empty after stripping
		};
	};
	class rhs_tigr_sts_msv: rhs_tigr_sts_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class AGS_Turret: AGS_Turret;  //found empty after stripping
		};
	};
	class rhs_tigr_sts_vv: rhs_tigr_sts_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class AGS_Turret: AGS_Turret;  //found empty after stripping
		};
	};
	class rhs_tigr_sts_3camo_vdv: rhs_tigr_sts_vdv;  //found empty after stripping
	class rhs_tigr_sts_3camo_vmf: rhs_tigr_sts_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class AGS_Turret: AGS_Turret;  //found empty after stripping
		};
	};
	class rhs_tigr_sts_3camo_msv: rhs_tigr_sts_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class AGS_Turret: AGS_Turret;  //found empty after stripping
		};
	};
	class rhs_tigr_sts_3camo_vv: rhs_tigr_sts_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret;  //found empty after stripping
			class AGS_Turret: AGS_Turret;  //found empty after stripping
		};
	};
	class rhs_tigr_m_vdv: rhs_tigr_vdv
	{
		normalSpeedForwardCoef=0.89999998;
		turnCoef=3;
		terrainCoef=0.5;
		waterSpeedFactor=0.40000001;
		simulation="carx";
		dampersBumpCoef=3;
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=125;
		fuelCapacity=32.5;
		RHS_fuelCapacity=240;
		wheelCircumference=2.45;
		brakeIdleSpeed=1;
		maxFordingDepth=0;
		waterResistance=1;
		waterLeakiness=10;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.9349999,
				"N",
				0,
				"D1",
				5.7140002,
				"D2",
				3.0829999,
				"D3",
				1.939,
				"D4",
				1.228,
				"D5",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				3.835
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.50999999;
		latency=1;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=65;
		transmissionLosses=9;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.25925899,0.32653099},
			{0.37037,0.65306097},
			{0.444444,0.92925203},
			{0.51851898,1},
			{0.62963003,1},
			{0.74074101,0.963265},
			{0.851852,0.884354},
			{1.18519,0}
		};
		enginePower=160;
		peakTorque=1470;
		maxOmega=282.73999;
		minOmega=65;
		idleRPM=700;
		redRPM=2700;
		engineLosses=11;
		thrustDelay=0.80000001;
		engineBrakeCoef=0.30000001;
		antiRollbarForceCoef=3.5;
		antiRollbarForceLimit=4.5;
		antiRollbarSpeedMin=40;
		antiRollbarSpeedMax=120;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				steering=1;
				width=0.31999999;
				mass=60;
				MOI=10;
				dampingRate=3.0999999;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12000;
				maxHandBrakeTorque=0;
				maxCompression=0.13;
				maxDroop=0.11;
				sprungMass=-1;
				springStrength=135000;
				springDamperRate=12471;
				longitudinalStiffnessPerUnitGravity=4800;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0.17,0.94999999},
					{0.40000001,0.85000002},
					{1,0.75}
				};
			};
			class LR: LF
			{
				steering=0;
				maxBrakeTorque=15000;
				maxHandBrakeTorque=20000;
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
			};
			class RR: RF
			{
				steering=0;
				maxBrakeTorque=15000;
				maxHandBrakeTorque=20000;
			};
		};
		weapons[]=
		{
			"TruckHorn",
			"rhs_weap_902b"
		};
		magazines[]=
		{
			"rhs_mag_3d17_4"
		};
		hideProxyInCombat=0;
		enableManualFire=0;
		class Turrets: Turrets;  //found empty after stripping
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init="_this call rhs_fnc_tigr_init;(_this select 0) animateDoor ['hatch_gunner_h',1]";
				getIn="_this call rhs_fnc_tigrm_turret_getin_eh";
				seatSwitched="_this call rhs_fnc_tigrm_turret_seat_eh";
			};
			class RHS_TigrHandler;  //found empty after stripping
		};
	};
	class rhs_tigr_m_vmf: rhs_tigr_m_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"
		};
		class Turrets: Turrets;  //found empty after stripping
	};
	class rhs_tigr_m_msv: rhs_tigr_m_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"
		};
		class Turrets: Turrets;  //found empty after stripping
	};
	class rhs_tigr_m_vv: rhs_tigr_m_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"
		};
		class Turrets: Turrets;  //found empty after stripping
	};
	class rhs_tigr_m_3camo_vdv: rhs_tigr_m_vdv;  //found empty after stripping
	class rhs_tigr_m_3camo_vmf: rhs_tigr_m_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"
		};
		class Turrets: Turrets;  //found empty after stripping
	};
	class rhs_tigr_m_3camo_msv: rhs_tigr_m_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"
		};
		class Turrets: Turrets;  //found empty after stripping
	};
	class rhs_tigr_m_3camo_vv: rhs_tigr_m_3camo_vdv
	{
		rhs_decalParameters[]=
		{
			"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']",
			"['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"
		};
		class Turrets: Turrets;  //found empty after stripping
	};
};
