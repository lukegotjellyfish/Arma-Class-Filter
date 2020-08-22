class DefaultEventhandlers;
class CfgPatches
{
	class rhs_c_zil131
	{
		units[]=
		{
			"rhs_zil131_msv",
			"rhs_zil131_vdv",
			"rhs_zil131_vmf",
			"rhs_zil131_vv",
			"rhs_zil131_open_msv",
			"rhs_zil131_open_vdv",
			"rhs_zil131_open_vmf",
			"rhs_zil131_open_vv",
			"rhs_zil131_flatbed_msv",
			"rhs_zil131_flatbed_vdv",
			"rhs_zil131_flatbed_vmf",
			"rhs_zil131_flatbed_vv",
			"rhs_zil131_flatbed_cover_msv",
			"rhs_zil131_flatbed_cover_vdv",
			"rhs_zil131_flatbed_cover_vmf",
			"rhs_zil131_flatbed_cover_vv"
		};
		weapons[]={};
		name="ZiL-131 Truck";
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
	class rhs_zil131_base: Truck_F
	{
		icon="\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_ural_ca.paa";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.44999999;
		terrainCoef=1.2;
		turnCoef=4;
		simulation="carx";
		dampersBumpCoef=6;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=83;
		fuelCapacity=30;
		RHS_fuelCapacity=350;
		wheelCircumference=3.776;
		brakeIdleSpeed=2;
		canFloat=0;
		waterLeakiness=2.5;
		waterSpeedFactor=0.80000001;
		maxFordingDepth=0.029999999;
		waterResistance=0.5;
		waterDamageEngine=0.89999998;
		waterAngularDampingCoef=10;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterPPInVehicle=0;
		waterResistanceCoef=0.22499999;
		engineShiftY=0.30000001;
		engineShiftZ=-3;
		rudderForceCoef=1.5;
		rudderForceCoefAtMaxSpeed=0.30000001;
		accelAidForceYOffset=-1.4;
		switchTime=0.44999999;
		latency=1;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.3125,0.21875,0.15625,0.953125,0.1875,0.96875,0.546875,0.9375,0.5625,0.96875,0.59375,1,0.65625};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.0900002,
				"N",
				0,
				"D1",
				7.1500001,
				"D2",
				4.0999999,
				"D3",
				2.29,
				"D4",
				1.47,
				"D5",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				7.3499999
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=1;
		};
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.8;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=75;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.36363599,0.87368399},
			{0.45454499,0.99473703},
			{0.54545498,1},
			{0.63636398,1},
			{0.72727299,0.98421103},
			{0.81818199,0.96842098},
			{0.909091,0.92631602},
			{1.09864,0}
		};
		engineMOI=2;
		enginePower=110;
		peakTorque=492;
		minOmega=75;
		maxOmega=335.103;
		idleRPM=800;
		redRPM=3200;
		thrustDelay=0.5;
		engineLosses=35;
		engineBrakeCoef=0.25;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=8;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=50;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.34999999;
				steering=1;
				mass=80;
				MOI=12.2766;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=15000;
				maxHandBrakeTorque=0;
				maxCompression=0.2;
				maxDroop=0.2;
				sprungMass=-1;
				springStrength=114000;
				springDamperRate=9000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,0.80000001},
					{0.16,1.3},
					{0.89999998,0.89999998}
				};
			};
			class L2: L1
			{
				steering=0;
				springStrength=64000;
				springDamperRate=9000;
			};
			class L3: L2
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				steering=0;
				maxHandBrakeTorque=0;
			};
			class R3: R2
			{
				steering=0;
				maxHandBrakeTorque=300000;
			};
		};
		soundAttenuationCargo[]={1,0.40000001};
		attenuationEffectType="CarAttenuation";
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']"
		};
		viewCargoShadow=1;
		viewDriverShadow=1;
		viewGunnerShadow=1;
		viewCargoShadowDiff=0.94999999;
		viewDriverShadowDiff=0.94999999;
		viewGunnerShadowDiff=0.94999999;
		hideProxyInCombat=1;
		canHideDriver=0;
		driverLeftLegAnimName="pedal_L";
		driverRightLegAnimName="pedal_R";
		cargoIsCoDriver[]={1,1,0};
		cargoGetInAction[]=
		{
			"GetInMRAP_01",
			"GetInMRAP_01",
			"GetInHemttBack"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutLow",
			"GetOutHighZamak"
		};
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment1",
			"Compartment2"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="Exhaust_pos";
				direction="Exhaust_dir";
				effect="ExhaustEffectHTruck";
			};
		};
		class Damage;  //found empty after stripping
		armorLights=0.0099999998;
		class HitPoints: HitPoints
		{
			class HitFuel_L
			{
				armor=-30;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=-0.2;
				radius=0.13;
				armorComponent="Hit_Fuel_L";
				name="Hit_Fuel_L";
			};
			class HitFuel_R
			{
				armor=-30;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=-0.2;
				radius=0.13;
				armorComponent="Hit_Fuel_R";
				name="Hit_Fuel_R";
			};
			class HitFuel
			{
				armor=-999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0;
				name="Hit_Fuel_L";
				depends="(HitFuel_L+HitFuel_R)*0.5";
			};
			class HitEngine
			{
				name="hit_engine";
				armor=-30;
				passThrough=1;
				minimalHit=-0.1;
				explosionShielding=0.5;
				radius=0.12;
			};
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
			class HitGlass1
			{
				armor=-2;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.2;
				armorComponent="glass1";
				name="glass1";
			};
			class HitGlass2
			{
				armor=-2;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.2;
				armorComponent="glass2";
				name="glass2";
			};
			class HitGlass3
			{
				armor=-2;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.2;
				armorComponent="glass3";
				name="glass3";
			};
			class HitGlass4
			{
				armor=-2;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.2;
				armorComponent="glass4";
				name="glass4";
			};
			class HitGlass5
			{
				armor=-2;
				explosionShielding=1.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.2;
				armorComponent="glass5";
				name="glass5";
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
		};
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
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', [5,6,7,8], _value]]] call rhs_fnc_decalsInit";
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
				expression="if(_value >= 0)then{[_this,[['Number', [5,6,7,8], _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
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
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [9,10],  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
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
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [11,12],  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_hidespare
			{
				property="rhs_hidespare";
				control="CheckboxNumber";
				expression="_this animate ['spare_hide',_value,true]";
				defaultValue="0";
			};
			class rhs_hidebench: rhs_hidespare
			{
				property="rhs_hidebench";
				expression="_this animateSource ['bench_hide',_value,true];";
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
			class back_door: Door_LF
			{
				property="back_door";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_decalsReadParams;(_this select 0) animateDoor ['cover_end_hide',1,true]";
				dammaged=" _this call rhs_fnc_wheelDamaged";
			};
			class BIS_Randomisation
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
			};
		};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=9;
				enabledByAnimationSource="cover_end_hide";
				commanding=-2;
			};
			class CargoTurret_03: CargoTurret_02
			{
				animationSourceHatch="turnout1";
				enabledByAnimationSource="cover_hide";
				proxyIndex=11;
				maxElev=45;
				minElev=-45;
				maxTurn=60;
				minTurn=-85;
				isPersonTurret=2;
				canHideGunner=1;
				allowLauncherOut=1;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{35,-85},
						{35,80}
					};
					limitsArrayBottom[]=
					{
						{-25,-65},
						{-25,-49},
						{-3,-46},
						{-2,-41},
						{-0.40000001,11},
						{-1.6,52},
						{-4.5,55},
						{-45,60},
						{-42,74},
						{-29,78},
						{-15,80}
					};
					turnOffset=-90;
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				animationSourceHatch="turnout2";
				proxyIndex=12;
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
						{-28,-66},
						{-21,-55},
						{-0.40000001,-54},
						{-0.31999999,-37},
						{-0.2,-1},
						{-2,40},
						{-4,43},
						{-14,47},
						{-42,54},
						{-45,61},
						{-15,95}
					};
					turnOffset=-90;
				};
			};
		};
	};
	class rhs_zil131_msv: rhs_zil131_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Platoon', 12]"
		};
	};
	class rhs_zil131_vdv: rhs_zil131_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', 2]",
			"['Label', [11,12], 'Platoon',11]"
		};
	};
	class rhs_zil131_vmf: rhs_zil131_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', [3,1]]"
		};
	};
	class rhs_zil131_vv: rhs_zil131_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', [6,1]]"
		};
	};
	class rhs_zil131_open_base: rhs_zil131_base
	{
		animationList[]=
		{
			"cover_hide",
			1
		};
	};
	class rhs_zil131_open_msv: rhs_zil131_open_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Platoon', 12]"
		};
	};
	class rhs_zil131_open_vdv: rhs_zil131_open_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', 2]",
			"['Label', [11,12], 'Platoon',11]"
		};
	};
	class rhs_zil131_open_vmf: rhs_zil131_open_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', [3,1]]"
		};
	};
	class rhs_zil131_open_vv: rhs_zil131_open_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', [6,1]]"
		};
	};
	class rhs_zil131_flatbed_base: rhs_zil131_open_base
	{
		class Turrets;  //found empty after stripping
		animationList[]=
		{
			"cover_hide",
			1,
			"bench_hide",
			1
		};
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
	class rhs_zil131_flatbed_msv: rhs_zil131_flatbed_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Platoon', 12]"
		};
	};
	class rhs_zil131_flatbed_vdv: rhs_zil131_flatbed_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', 2]",
			"['Label', [11,12], 'Platoon',11]"
		};
	};
	class rhs_zil131_flatbed_vmf: rhs_zil131_flatbed_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', [3,1]]"
		};
	};
	class rhs_zil131_flatbed_vv: rhs_zil131_flatbed_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', [6,1]]"
		};
	};
	class rhs_zil131_flatbed_cover_base: rhs_zil131_flatbed_base
	{
		animationList[]=
		{
			"bench_hide",
			1
		};
		class VehicleTransport: VehicleTransport
		{
			class Cargo: Cargo;  //found empty after stripping
			class Carrier: Carrier
			{
				disableHeightLimit=0;
			};
		};
	};
	class rhs_zil131_flatbed_cover_msv: rhs_zil131_flatbed_cover_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Platoon', 12]"
		};
	};
	class rhs_zil131_flatbed_cover_vdv: rhs_zil131_flatbed_cover_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', 2]",
			"['Label', [11,12], 'Platoon',11]"
		};
	};
	class rhs_zil131_flatbed_cover_vmf: rhs_zil131_flatbed_cover_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', [3,1]]"
		};
	};
	class rhs_zil131_flatbed_cover_vv: rhs_zil131_flatbed_cover_base
	{
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', [5,6,7,8], 'Default']",
			"['Label', [9,10], 'Army', [6,1]]"
		};
	};
};
