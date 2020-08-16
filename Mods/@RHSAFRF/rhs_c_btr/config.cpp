class CfgPatches
{
	class rhs_c_btr
	{
		units[]=
		{
			"rhs_btr70_vmf",
			"rhs_btr70_vdv",
			"rhs_btr70_vv",
			"rhs_btr70_msv",
			"rhs_btr80_msv",
			"rhs_btr80_vdv",
			"rhs_btr80_vv",
			"rhs_btr80_vmf",
			"rhs_btr80a_msv",
			"rhs_btr80a_vdv",
			"rhs_btr80a_vv",
			"rhs_btr80a_vmf"
		};
		weapons[]={};
		name="BTR-70 & 80";
	};
};
class DefaultEventhandlers;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class BTR
		{
			name="BTR Functions";
			description="BTR Init & FX thing";
			class btr_init
			{
				file="\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_init.sqf";
				description="btr's init";
			};
			class btr_habar
			{
				file="\rhsafrf\addons\rhs_c_btr\scripts\bgr_btr_habar.sqf";
				description="random habar";
			};
			class btr_handleHatch
			{
				file="\rhsafrf\addons\rhs_c_btr\scripts\handleHatch.sqf";
				description="handle hatch";
			};
			class btr_hatch
			{
				file="\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_hatch.sqf";
				description="handle hatch";
			};
			class btr_turnOut
			{
				file="\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_turnOut.sqf";
				description="BTRs turn out handling";
			};
			class activeTirePressure
			{
				file="\rhsafrf\addons\rhs_c_btr\scripts\bgr_podkachka.sqf";
				description="Active Tire Pressure script";
			};
		};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class ViewPilot;
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
		class AnimationSources;
		class EventHandlers;
	class rhs_btr_base: Wheeled_APC_F
	{
		rhs_habarType=2;
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		tf_isolatedAmount_api=0.80000001;
		tf_range_api=17000;
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"
		};
		canHideDriver=0;
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		terrainCoef=1.2;
		turnCoef=2.5;
		simulation="carx";
		dampersBumpCoef=6;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=75;
		fuelCapacity=25;
		RHS_fuelCapacity=350;
		wheelCircumference=3.51;
		brakeIdleSpeed=0.69999999;
		canFloat=1;
		waterLeakiness=2.5;
		waterSpeedFactor=0.80000001;
		maxFordingDepth=1.2;
		waterResistance=0.5;
		waterDamageEngine=0.89999998;
		waterAngularDampingCoef=5;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterPPInVehicle=0;
		waterResistanceCoef=0.145;
		engineShiftY=0.30000001;
		engineShiftZ=-3;
		rudderForceCoef=3.7;
		rudderForceCoefAtMaxSpeed=0.30000001;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.9000001,
				"N",
				0,
				"D1",
				6.48,
				"D2",
				2.5,
				"D3",
				1.4,
				"D4",
				1
			};
			AmphibiousRatios[]=
			{
				"R1",
				-20,
				"N",
				0,
				"D1",
				47
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.85000002,0.85000002,0.85000002,0.85000002};
		switchTime=0.81;
		latency=1.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.166667,0.827465},
			{0.277778,0.92957699},
			{0.38888901,0.96126801},
			{0.5,0.98239398},
			{0.555556,1},
			{0.694444,1},
			{0.88888901,0.93309897},
			{1.11222,0}
		};
		enginePower=89;
		peakTorque=284;
		maxOmega=376.98999;
		minOmega=60;
		idleRPM=600;
		redRPM=3600;
		engineLosses=14;
		thrustDelay=2;
		engineBrakeCoef=0.30000001;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=40;
		accelAidForceYOffset=-0.5;
		class Wheels
		{
			class LF
			{
				width="0.33";
				steering=1;
				side="left";
				mass=160;
				MOI=22;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={-0.125,-1,0};
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				MaxDroop=0.15000001;
				sprungMass=925.5;
				springStrength=108150;
				springDamperRate=9990;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=3.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR2: LR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR2: RR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
		};
		radarType=0;
		incomingMissileDetectionSystem=0;
		hideProxyInCombat=0;
		rhs_topPositions[]={9,10,11,12,13,14,15,16};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle. 3 digits";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTR3NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default defined";
						value="NoChange";
					};
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
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR3NumberPlaces}else{[_this, [['Number', cBTR3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type2: rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle. 2 digits";
				property="rhs_decalNumber_type2";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTR2NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber2: rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. Hides on 0";
				property="rhs_decalNumber2";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR2NumberPlaces}else{[_this, [['Number', cBTR2NumberPlaces, _this getVariable ['rhs_decalNumber_type2','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type3: rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle. 4 digits";
				property="rhs_decalNumber_type3";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTR4NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber3: rhs_decalNumber
			{
				tooltip="Set side number. 4 numbers are required. Hides on 0";
				property="rhs_decalNumber3";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR4NumberPlaces}else{[_this, [['Number', cBTR4NumberPlaces, _this getVariable ['rhs_decalNumber_type3','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type4: rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle. 4 digits, CDF style numbering";
				property="rhs_decalNumber_type4";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTRCDF4NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber4: rhs_decalNumber
			{
				tooltip="Set side number. 4 numbers are required. Hides on 0";
				property="rhs_decalNumber4";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTRCDF4NumberPlaces}else{[_this, [['Number', cBTRCDF4NumberPlaces, _this getVariable ['rhs_decalNumber_type4','CDF'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				tooltip="Decal type";
				property="rhs_decalPlatoon_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				class values
				{
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
					class Army
					{
						name="Army";
						value="Army";
						defaultValue="1";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
						defaultValue="0";
					};
					class HonorGDR
					{
						name="Honor GDR";
						value="HonorGDR";
					};
				};
			};
			class rhs_decalPlatoon
			{
				tooltip="Set platoon symbol located on all 4 sides of vehicle. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRPlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type: rhs_decalPlatoon_type
			{
				property="rhs_decalArmy_type";
				class values: values
				{
				};
			};
			class rhs_decalArmy: rhs_decalPlatoon
			{
				tooltip="Define symbol located on right back side of vehicle hull. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRBackArmSymPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalRightTurret_type: rhs_decalArmy_type
			{
				property="rhs_decalRightTurret_type";
				class values: values
				{
				};
			};
			class rhs_decalRightTurret: rhs_decalPlatoon
			{
				tooltip="Define right turret side symbol. Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalRightTurret";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRRightGvardSymPlaces,  _this getVariable ['rhs_decalRightTurret_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalLeftTurret_type: rhs_decalRightTurret_type
			{
				property="rhs_decalLeftTurret_type";
			};
			class rhs_decalLeftTurret: rhs_decalRightTurret
			{
				tooltip="Define symbol located on left side of vehicle turret. Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalLeftTurret";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRLeftGvardSymPlaces,  _this getVariable ['rhs_decalLeftTurret_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalFront_type: rhs_decalArmy_type
			{
				property="rhs_decalFront_type";
			};
			class rhs_decalFront: rhs_decalPlatoon
			{
				tooltip="Define symbol located on front of vehicle hull. Usually used for OMON symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalFront";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTROMONSymbolPlaces,  _this getVariable ['rhs_decalFront_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalLowerFront_type: rhs_decalArmy_type
			{
				property="rhs_decalLowerFront_type";
			};
			class rhs_decalLowerFront: rhs_decalPlatoon
			{
				tooltip="Define symbol located on front of vehicle hull. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalLowerFront";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRFrontPlatePlaces,  _this getVariable ['rhs_decalLowerFront_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalFlag_type: rhs_decalArmy_type
			{
				property="rhs_decalFlag_type";
			};
			class rhs_decalFlag: rhs_decalPlatoon
			{
				tooltip="Define symbol located on front of vehicle hull. Usually used for navy flag symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalFlag";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRFlagSymPlaces,  _this getVariable ['rhs_decalFlag_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalVV_type: rhs_decalPlatoon_type
			{
				property="rhs_decalVV_type";
			};
			class rhs_decalVV: rhs_decalPlatoon
			{
				tooltip="Define symbol next to VV 2 digits numbering system decal. Usually used for VV T letter for numbering system (code 13). -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalVV";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRVVLetterSymPlaces,  _this getVariable ['rhs_decalVV_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class crate_l1_unhide
			{
				property="crate_l1_unhide";
				control="CheckboxNumber";
				expression="[_this,_value,'%s'] call rhs_fnc_setHabarEden";
				defaultValue="-1";
			};
			class crate_l2_unhide: crate_l1_unhide
			{
				property="crate_l2_unhide";
			};
			class crate_l3_unhide: crate_l1_unhide
			{
				property="crate_l3_unhide";
			};
			class crate_l4_unhide: crate_l1_unhide
			{
				property="crate_l4_unhide";
			};
			class crate_r1_unhide: crate_l1_unhide
			{
				property="crate_r1_unhide";
			};
			class crate_r2_unhide: crate_l1_unhide
			{
				property="crate_r2_unhide";
			};
			class crate_r3_unhide: crate_l1_unhide
			{
				property="crate_r3_unhide";
			};
			class crate_r4_unhide: crate_l1_unhide
			{
				property="crate_r4_unhide";
			};
			class water_1_unhide: crate_l1_unhide
			{
				property="water_1_unhide";
			};
			class water_2_unhide: crate_l1_unhide
			{
				property="water_2_unhide";
			};
			class wheel_1_unhide: crate_l1_unhide
			{
				property="wheel_1_unhide";
			};
			class wheel_2_unhide: crate_l1_unhide
			{
				property="wheel_2_unhide";
			};
			class rhs_disableHabar: crate_l1_unhide
			{
				property="rhs_disableHabar";
				expression="[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
				defaultValue="0";
			};
			class dHatch: rhs_disableHabar
			{
				property="dHatch";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class cHatch: dHatch
			{
				property="cHatch";
			};
			class l_door: dHatch
			{
				property="l_door";
			};
			class r_door: dHatch
			{
				property="r_door";
			};
			class windows: dHatch
			{
				property="windows";
			};
			class t_door_1: dHatch
			{
				property="t_door_1";
			};
			class t_door_2: dHatch
			{
				property="t_door_2";
			};
			class engineHatches: dHatch
			{
				property="engineHatches";
			};
			class propDoor: dHatch
			{
				property="propDoor";
			};
			class driverViewHatch: dHatch
			{
				property="driverViewHatch";
			};
			class commanderViewHatch: dHatch
			{
				property="commanderViewHatch";
			};
			class rhs_externalMount: rhs_disableHabar
			{
				property="rhs_externalMount";
				control="Checkbox";
				expression="[_this,_value] call rhs_fnc_lockTop";
			};
		};
		rhs_randomizedHabar[]=
		{
			"crate_l1_unhide",
			"crate_l2_unhide",
			"crate_l3_unhide",
			"crate_l4_unhide",
			"crate_r1_unhide",
			"crate_r2_unhide",
			"crate_r3_unhide",
			"crate_r4_unhide",
			"wheel_1_unhide",
			"wheel_2_unhide",
			"water_1_unhide",
			"water_2_unhide"
		};
		threat[]={1,0.60000002,0.60000002};
		armor=100;
		damageResistance=0.018849;
		minTotalDamageThreshold=0.40000001;
		armorStructural=6;
		fuelExplosionPower=0.1;
		secondaryExplosion=-1;
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor=1;
				material=-1;
				name="engine";
				passThrough=0.2;
				radius=0.2;
			};
			class HitFuel
			{
				armor=4;
				material=-1;
				name="palivo";
				passThrough=0;
				radius=0.15000001;
			};
			class HitHull
			{
				armor=0.80000001;
				material=-1;
				name="telo";
				passThrough=1;
				minimalHit=0.44;
				explosionShielding=1;
				radius=0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				name="wheel_1_4_steering";
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
				radius=0.25999999;
			};
			class HitLMWheel: HitLMWheel
			{
				name="wheel_1_3_steering";
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
				radius=0.25999999;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				name="wheel_1_2_steering";
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
				radius=0.25999999;
			};
			class HitLFWheel: HitLFWheel
			{
				name="wheel_1_1_steering";
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
				radius=0.25999999;
			};
			class HitRBWheel: HitRBWheel
			{
				name="wheel_2_4_steering";
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
				radius=0.25999999;
			};
			class HitRMWheel: HitRMWheel
			{
				name="wheel_2_3_steering";
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
				radius=0.25999999;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				name="wheel_2_2_steering";
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
				radius=0.25999999;
			};
			class HitRFWheel: HitRFWheel
			{
				name="wheel_2_1_steering";
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
				radius=0.25999999;
			};
			class HitGlass1
			{
				armor=2.5;
				material=-1;
				name="glass1";
				passThrough=0;
				radius=0.18000001;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
			};
			class HitPeriscope1: HitGlass1
			{
				armor=-10;
				name="periscope1";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope2: HitGlass1
			{
				armor=-10;
				name="periscope2";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope3: HitGlass1
			{
				armor=-10;
				name="periscope3";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope4: HitGlass1
			{
				armor=-10;
				name="periscope4";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope5: HitGlass1
			{
				armor=-10;
				name="periscope5";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope6: HitGlass1
			{
				armor=-10;
				name="periscope6";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope7: HitGlass1
			{
				armor=-10;
				name="periscope7";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope8: HitGlass1
			{
				armor=-10;
				name="periscope8";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope9: HitGlass1
			{
				armor=-10;
				name="periscope9";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope10: HitGlass1
			{
				armor=-10;
				name="periscope10";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class Hit_Optic_MainSight: HitGlass6
			{
				armor=-40;
				explosionShielding=0.30000001;
				name="mainSight";
				radius=0.050000001;
			};
			class Hit_Optic_ComSight: Hit_Optic_MainSight
			{
				name="comSight";
			};
		};
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			1.5623413,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			1.5623413,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			1.5623413,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start",
			1.3981072,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start",
			1.5623413,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop",
			1.3981072,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop",
			1.5623413,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			1.25,
			"buildCrash1",
			1.25,
			"buildCrash2",
			1.25,
			"buildCrash3",
			1.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			1.166,
			"woodCrash1",
			1.166,
			"woodCrash2",
			1.166,
			"woodCrash3",
			1.166,
			"woodCrash4",
			1.166,
			"woodCrash5",
			1.166
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			1.25,
			"ArmorCrash1",
			1.25,
			"ArmorCrash2",
			1.25,
			"ArmorCrash3",
			1.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",
					1.3548133,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*camPos*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",
					1.3981072,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",
					1.4466836,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",
					1.5011872,
					1,
					250
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",
					1.5623413,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",
					1.6309574,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",
					1.7079457,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",
					1.5623413,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",
					1.6309574,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",
					1.6309574,
					1,
					230
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",
					1.7079457,
					1,
					250
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",
					1.7079457,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",
					1,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",
					1.1220185,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01",
					1.3162278,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02",
					1.3548133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03",
					1.3981072,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06",
					1.4466836,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07",
					1.5011872,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08",
					1.5623413,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10",
					1.6309574,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01",
					1.3548133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02",
					1.3981072,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03",
					1.4466836,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06",
					1.4466836,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07",
					1.5011872,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08",
					1.5623413,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10",
					1.6309574,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					1.5011872,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					1.6309574,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					1.5848932,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					1.7079457,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					1.7079457,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					1.7079457,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					1.7079457,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					1.7079457,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					1.7079457,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					1.5011872,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		engineEffectSpeed=5;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		enableGPS=0;
		commanderCanSee=14;
		weapons[]={};
		magazines[]={};
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		memoryPointDriverOptics="driverview";
		driverForceOptics=0;
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				OpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				hitpoint="Hit_Optic_Driver";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
			};
		};
		class ViewOptics
		{
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
			initAngleX=0;
			minAngleX=-110;
			maxAngleX=110;
			initAngleY=0;
			minAngleY=-110;
			maxAngleY=110;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.30000001;
			maxFov=1;
		};
		typicalCargo[]=
		{
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew"
		};
		DriverAction="rhs_btr70_driver";
		cargoaction[]=
		{
			"RHS_BTR60_Cargo01",
			"RHS_BMP3_Cargo",
			"RHS_BMP3_Cargo",
			"RHS_BMP3_Cargo",
			"RHS_BTR60_Cargo01",
			"RHS_BMP3_Cargo",
			"RHS_BMP3_Cargo",
			"RHS_BMP3_Cargo"
		};
		viewCargoShadow=1;
		viewDriverShadow=1;
		viewGunnerShadow=1;
		viewCargoShadowDiff=0.050000001;
		viewDriverShadowDiff=0.050000001;
		viewGunnerShadowDiff=0.050000001;
		transportAmmo=0;
		supplyRadius=4.6999998;
		memoryPointSupply="doplnovani";
		transportMaxMagazines=160;
		transportMaxWeapons=10;
		armorLights=0.1;
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffect";
			};
			class Exhaust2: Exhaust1
			{
				position="vyfuk start 2";
				direction="vyfuk konec 2";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				radarType=0;
				weapons[]=
				{
					"rhs_weap_kpvt",
					"rhs_weap_pkt_btr"
				};
				soundServoVertical[]=
				{
					"rhsafrf\addons\rhs_btr70\sounds\hand_turret_servo_elev",
					1.1412539,
					1,
					30
				};
				minElev=-5;
				maxElev=30;
				minTurn=-360;
				maxTurn=360;
				maxHorizontalRotSpeed=0.64999998;
				maxVerticalRotSpeed=0.34999999;
				usePiP=2;
				forceHideGunner=0;
				canHideGunner=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				memoryPointGun="kulas";
				selectionFireAnim="zasleh1";
				visionMode[]=
				{
					"Normal"
				};
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
					"OpticsCHAbera3"
				};
				startEngine=0;
				primaryGunner=1;
				primaryObserver=0;
				stabilizedInAxes=0;
				canUseScanners=0;
				allowTabLock=0;
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						passThrough=1;
						minimalHit=0.44;
						radius=0.2;
					};
					class HitGun
					{
						armor=0.40000001;
						material=-1;
						name="zbran";
						passThrough=0.1;
						minimalHit=0.44;
						radius=0.2;
					};
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.24137899;
					minFov=0.24137899;
					maxFov=0.24137899;
				};
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-65;
					maxAngleX=85;
					initAngleY=0;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov=0.26923099;
						maxFov=0.26923099;
						minFov=0.26923099;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_MainSight";
					};
					class RearView: Wide
					{
						camPos="view_turret_rear";
						camDir="view_turret_rear_dir";
						initFov=0.69999999;
						maxFov=0.69999999;
						minFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="HitPeriscope10";
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				dontCreateAI=1;
				proxyType="CPCommander";
				proxyIndex=1;
				primaryGunner=0;
				primaryObserver=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				canHideGunner=0;
				animationSourceHatch="commanderHatch";
				startEngine=0;
				minElev=-5;
				maxElev=10;
				initElev=0;
				minTurn=-36;
				maxTurn=36;
				initTurn=0;
				commanding=2;
				radarType=0;
				canUseScanners=0;
				allowTabLock=0;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-65;
					maxAngleX=85;
					initAngleY=0;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera3"
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.14;
					minFov=0.14;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				hasGunner=1;
				weapons[]={};
				magazines[]={};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=10;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=11;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=12;
			};
			class CargoTurret_05: CargoTurret_01
			{
				proxyIndex=13;
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=14;
				maxTurn=71;
				minTurn=-75;
			};
			class CargoTurret_07: CargoTurret_01
			{
				proxyIndex=15;
			};
			class CargoTurret_08: CargoTurret_01
			{
				proxyIndex=16;
				ejectDeadGunner=1;
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
				enabledByAnimationSource="cargoHandler1";
			};
			class Commander_Out: CargoTurret
			{
				proxyType="CPCommander";
				LODTurnedIn=0;
				LODTurnedOut=0;
				proxyIndex=2;
				personTurretAction="RHS_VehicleTurnout_1";
				weapons[]=
				{
					"rhs_weap_DummyLauncher"
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_btr_init;(_this select 0) addeventhandler ['HandleDamage',{[_this,0.1,0.002,0.9,0.2] spawn rhs_fnc_activeTirePressure; _this select 2;} ];";
				engine="_this call rhs_fnc_btr_handleHatch";
			};
			class RHS_BTR_Init
			{
				init="(_this select 0) lockTurret [[10],true];";
				getOut="(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
				getIn="(_this + [[10],[9]]) call rhs_fnc_btr_hatch";
			};
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class CrewDisplay
				{
					componentType="CrewDisplayComponent";
					resource="RscCustomInfoCrew";
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class CrewDisplay
				{
					componentType="CrewDisplayComponent";
					resource="RscCustomInfoCrew";
				};
			};
		};
	};
	class rhs_btr70_vmf: rhs_btr_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"
		};
		driverRightLegAnimName="pedalR";
		driverLeftLegAnimName="pedalL";
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_msv",
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
		};
	};
	class rhs_btr70_vdv: rhs_btr70_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRBackArmSymPlaces, 'Army',2]",
			"['Label', cBTRPlnSymPlaces, 'Platoon',11]"
		};
	};
	class rhs_btr70_vv: rhs_btr70_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"_gvard1",
			"_gvard2",
			"_gvard3",
			"['Label', cBTRVVLetterSymPlaces, 'Platoon',13]",
			"['Label', cBTROMONSymbolPlaces,'Army',10]"
		};
	};
	class rhs_btr70_msv: rhs_btr70_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'DefaultRed']",
			"['Label', cBTRPlnSymPlaces, 'Platoon',12]"
		};
	};
	class rhs_btr80_msv: rhs_btr70_msv
	{
		driverForceOptics=0;
		DriverAction="rhs_btr80_driver";
		class HitPoints: HitPoints
		{
			class HitPeriscope11: HitGlass1
			{
				armor=-10;
				name="periscope11";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope12: HitGlass1
			{
				armor=-10;
				name="periscope12";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope13: HitGlass1
			{
				armor=-10;
				name="periscope13";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope14: HitGlass1
			{
				armor=-10;
				name="periscope14";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class HitPeriscope15: HitGlass1
			{
				armor=-10;
				name="periscope15";
				explosionShielding=0.5;
				radius=0.050000001;
			};
			class Hit_Optic_Turret_Rear: Hit_Optic_MainSight
			{
				name="Hit_Optic_Turret_Rear";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-4;
				maxElev=60;
				minTurn=-360;
				maxTurn=360;
				weapons[]=
				{
					"rhs_weap_kpvt",
					"rhs_weap_pkt_btr",
					"rhs_weap_902a"
				};
				class OpticsIn
				{
					class 1pz3x12
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						initFov=0.58333302;
						minFov=0.58333302;
						maxFov=0.58333302;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_MainSight";
					};
					class 1pz3x4: 1pz3x12
					{
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
					};
					class bpk142n: 1pz3x12
					{
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"NVG"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
						hitpoint="Hit_Optic_MainSight";
					};
					class RearView: 1pz3x12
					{
						camPos="view_turret_rear";
						camDir="view_turret_rear_dir";
						initFov=0.69999999;
						maxFov=0.69999999;
						minFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_Turret_Rear";
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=10;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=11;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=12;
			};
			class CargoTurret_05: CargoTurret_01
			{
				proxyIndex=13;
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=14;
				maxTurn=71;
				minTurn=-75;
			};
			class CargoTurret_07: CargoTurret_01
			{
				proxyIndex=15;
			};
			class CargoTurret_08: CargoTurret_01
			{
				proxyIndex=16;
				ejectDeadGunner=1;
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
				enabledByAnimationSource="cargoHandler1";
			};
			class CargoTurret_09: CargoTurret_08
			{
				proxyIndex=17;
			};
		};
		rhs_topPositions[]={9,10,11,12,13,14,15,16,17};
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.44999999;
		terrainCoef=1.2;
		turnCoef=2.5;
		simulation="carx";
		dampersBumpCoef=3;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=85;
		fuelCapacity=30;
		RHS_fuelCapacity=300;
		wheelCircumference=3.55;
		brakeIdleSpeed=1;
		canFloat=1;
		waterLeakiness=2.5;
		waterSpeedFactor=0.80000001;
		maxFordingDepth=1.2;
		waterResistance=0.5;
		waterDamageEngine=0.89999998;
		waterAngularDampingCoef=5;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterPPInVehicle=0;
		waterResistanceCoef=0.19499999;
		engineShiftY=0.30000001;
		engineShiftZ=-3;
		rudderForceCoef=3.7;
		rudderForceCoefAtMaxSpeed=0.30000001;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.3800001,
				"N",
				0,
				"D1",
				7.8200002,
				"D2",
				4.0300002,
				"D3",
				2.5,
				"D4",
				1.53,
				"D5",
				1
			};
			AmphibiousRatios[]=
			{
				"R1",
				-20,
				"N",
				0,
				"D1",
				25
			};
			TransmissionRatios[]=
			{
				"High",
				6.1300001
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.85000002,0.85000002,0.85000002,0.85000002,0.85000002};
		switchTime=0.60000002;
		latency=1.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=75;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.204778,0.550318},
			{0.341297,0.89808899},
			{0.54607499,1},
			{0.61433399,1},
			{0.682594,0.955414},
			{0.750853,0.904459},
			{0.81911302,0.84713399},
			{1.18601,0}
		};
		maxOmega=306.82999;
		enginePower=194;
		peakTorque=785;
		idleRPM=600;
		redRPM=2930;
		engineLosses=14;
		thrustDelay=0.5;
		engineBrakeCoef=0.69999999;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=40;
		class Wheels
		{
			class LF
			{
				width=0.33000001;
				steering=1;
				side="left";
				mass=160;
				MOI=23;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={-0.125,-1,0};
				maxCompression=0.14;
				mMaxDroop=0.14;
				MaxDroop=0.14;
				sprungMass=1595;
				springStrength=135000;
				springDamperRate=12471;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=3.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR2: LR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR2: RR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_msv",
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class tricolourhard
			{
				factions[]=
				{
					"rhs_faction_msv",
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class tricolourparade
			{
				factions[]=
				{
					"rhs_faction_msv",
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
		};
		class Attributes: Attributes
		{
		};
		rhs_randomizedHabar[]=
		{
			"crate_l1_unhide",
			"crate_l2_unhide",
			"crate_l3_unhide",
			"crate_r1_unhide",
			"crate_r2_unhide",
			"wheel_1_unhide"
		};
		class EventHandlers: EventHandlers
		{
			class RHS_BTR_Init
			{
				init="(_this select 0) lockTurret [[11],true];";
				getOut="(_this + [[11],[9]]) call rhs_fnc_btr_hatch";
				getIn="(_this + [[11],[9]]) call rhs_fnc_btr_hatch";
			};
		};
	};
	class rhs_btr80_vdv: rhs_btr80_msv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRBackArmSymPlaces, 'Army',2]",
			"['Label', cBTRPlnSymPlaces, 'Platoon',11]"
		};
	};
	class rhs_btr80_vv: rhs_btr80_msv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"_gvard1",
			"_gvard2",
			"_gvard3",
			"['Label', cBTRVVLetterSymPlaces, 'Platoon',13]",
			"['Label', cBTROMONSymbolPlaces,'Army',10]"
		};
	};
	class rhs_btr80_vmf: rhs_btr80_msv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"
		};
	};
	class rhs_btr80a_msv: rhs_btr80_msv
	{
		weaponsGroup1=128;
		weaponsGroup4=64;
		class textureSources
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-7;
				maxElev=70;
				minTurn=-360;
				maxTurn=360;
				class OpticsIn
				{
					class bpk142
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						initFov=0.125;
						minFov=0.125;
						maxFov=0.125;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_MainSight";
					};
					class bpk142n: bpk142
					{
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"NVG"
						};
					};
				};
				weapons[]=
				{
					"rhs_weap_2a72_btr",
					"rhs_weap_pkt_btr80a",
					"rhs_weap_902a"
				};
			};
		};
		rhs_topPositions[]={9,10,11,12,13,14,15,16,17};
	};
	class rhs_btr80a_vdv: rhs_btr80a_msv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRBackArmSymPlaces, 'Army',2]",
			"['Label', cBTRPlnSymPlaces, 'Platoon',11]"
		};
	};
	class rhs_btr80a_vv: rhs_btr80a_msv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"_gvard1",
			"_gvard2",
			"_gvard3",
			"['Label', cBTRVVLetterSymPlaces, 'Platoon',13]",
			"['Label', cBTROMONSymbolPlaces,'Army',10]"
		};
	};
	class rhs_btr80a_vmf: rhs_btr80a_msv
	{
		rhs_decalParameters[]=
		{
			"['Number', cBTR3NumberPlaces, 'Default']",
			"['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
};
