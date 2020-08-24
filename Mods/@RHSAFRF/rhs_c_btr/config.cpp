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
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CommanderOptics;
		class Components;
	};
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
		displayName="$STR_RHS_BTR70_Name";
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
			class LR: LF;  //found empty after stripping
			class LR2: LR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
			class LR3: LR2;  //found empty after stripping
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR: RF;  //found empty after stripping
			class RR2: RR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
			class RR3: RR2;  //found empty after stripping
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
				displayName="Define font type of side number (3 digits)";
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
				displayName="Set side number (3 digits)";
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR3NumberPlaces}else{[_this, [['Number', cBTR3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type2: rhs_decalNumber_type
			{
				displayName="Define font type of side number (2 digits)";
				tooltip="Define kind of font that will be drawn on vehicle. 2 digits";
				property="rhs_decalNumber_type2";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTR2NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber2: rhs_decalNumber
			{
				displayName="Set side number (2 digits)";
				tooltip="Set side number. 2 numbers are required. Hides on 0";
				property="rhs_decalNumber2";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR2NumberPlaces}else{[_this, [['Number', cBTR2NumberPlaces, _this getVariable ['rhs_decalNumber_type2','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type3: rhs_decalNumber_type
			{
				displayName="Define font type of side number (4 digits)";
				tooltip="Define kind of font that will be drawn on vehicle. 4 digits";
				property="rhs_decalNumber_type3";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTR4NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber3: rhs_decalNumber
			{
				displayName="Set side number (4 digits)";
				tooltip="Set side number. 4 numbers are required. Hides on 0";
				property="rhs_decalNumber3";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTR4NumberPlaces}else{[_this, [['Number', cBTR4NumberPlaces, _this getVariable ['rhs_decalNumber_type3','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type4: rhs_decalNumber_type
			{
				displayName="Define font type of side number (4 digits CDF)";
				tooltip="Define kind of font that will be drawn on vehicle. 4 digits, CDF style numbering";
				property="rhs_decalNumber_type4";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cBTRCDF4NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber4: rhs_decalNumber
			{
				displayName="Set side number (4 digits CDF)";
				tooltip="Set side number. 4 numbers are required. Hides on 0";
				property="rhs_decalNumber4";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBTRCDF4NumberPlaces}else{[_this, [['Number', cBTRCDF4NumberPlaces, _this getVariable ['rhs_decalNumber_type4','CDF'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				displayName="Define platoon symbol type";
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
				displayName="Set platoon symbol";
				tooltip="Set platoon symbol located on all 4 sides of vehicle. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRPlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type: rhs_decalPlatoon_type
			{
				displayName="Define back army symbol type";
				property="rhs_decalArmy_type";
				class values: values
				{
					class Army: Army;  //found empty after stripping
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
				};
			};
			class rhs_decalArmy: rhs_decalPlatoon
			{
				displayName="Set back army symbol";
				tooltip="Define symbol located on right back side of vehicle hull. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRBackArmSymPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalRightTurret_type: rhs_decalArmy_type
			{
				displayName="Define right turret side symbol type";
				property="rhs_decalRightTurret_type";
				class values: values
				{
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
					class Army: Army;  //found empty after stripping
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
				};
			};
			class rhs_decalRightTurret: rhs_decalPlatoon
			{
				displayName="Set right turret side symbol";
				tooltip="Define right turret side symbol. Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalRightTurret";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRRightGvardSymPlaces,  _this getVariable ['rhs_decalRightTurret_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalLeftTurret_type: rhs_decalRightTurret_type
			{
				displayName="Define left turret symbol type";
				property="rhs_decalLeftTurret_type";
			};
			class rhs_decalLeftTurret: rhs_decalRightTurret
			{
				displayName="Set left turret symbol";
				tooltip="Define symbol located on left side of vehicle turret. Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalLeftTurret";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRLeftGvardSymPlaces,  _this getVariable ['rhs_decalLeftTurret_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalFront_type: rhs_decalArmy_type
			{
				displayName="Define front side roundels type";
				property="rhs_decalFront_type";
			};
			class rhs_decalFront: rhs_decalPlatoon
			{
				displayName="Set front side roundels";
				tooltip="Define symbol located on front of vehicle hull. Usually used for OMON symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalFront";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTROMONSymbolPlaces,  _this getVariable ['rhs_decalFront_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalLowerFront_type: rhs_decalArmy_type
			{
				displayName="Define front hull symbol type";
				property="rhs_decalLowerFront_type";
			};
			class rhs_decalLowerFront: rhs_decalPlatoon
			{
				displayName="Set front hull symbol";
				tooltip="Define symbol located on front of vehicle hull. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalLowerFront";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRFrontPlatePlaces,  _this getVariable ['rhs_decalLowerFront_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalFlag_type: rhs_decalArmy_type
			{
				displayName="Define flag/side marking type";
				property="rhs_decalFlag_type";
			};
			class rhs_decalFlag: rhs_decalPlatoon
			{
				displayName="Set flag/side marking";
				tooltip="Define symbol located on front of vehicle hull. Usually used for navy flag symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalFlag";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRFlagSymPlaces,  _this getVariable ['rhs_decalFlag_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalVV_type: rhs_decalPlatoon_type
			{
				displayName="Define VV letter type";
				property="rhs_decalVV_type";
			};
			class rhs_decalVV: rhs_decalPlatoon
			{
				displayName="Set VV letter";
				tooltip="Define symbol next to VV 2 digits numbering system decal. Usually used for VV T letter for numbering system (code 13). -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalVV";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBTRVVLetterSymPlaces,  _this getVariable ['rhs_decalVV_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class crate_l1_unhide
			{
				displayName="hide l1 crate";
				property="crate_l1_unhide";
				control="CheckboxNumber";
				expression="[_this,_value,'%s'] call rhs_fnc_setHabarEden";
				defaultValue="-1";
			};
			class crate_l2_unhide: crate_l1_unhide
			{
				displayName="Hide l2 crate";
				property="crate_l2_unhide";
			};
			class crate_l3_unhide: crate_l1_unhide
			{
				displayName="Hide l3 crate";
				property="crate_l3_unhide";
			};
			class crate_l4_unhide: crate_l1_unhide
			{
				displayName="Hide l4 crate";
				property="crate_l4_unhide";
			};
			class crate_r1_unhide: crate_l1_unhide
			{
				displayName="Hide r1 crate";
				property="crate_r1_unhide";
			};
			class crate_r2_unhide: crate_l1_unhide
			{
				displayName="Hide r2 crate";
				property="crate_r2_unhide";
			};
			class crate_r3_unhide: crate_l1_unhide
			{
				displayName="Hide r3 crate";
				property="crate_r3_unhide";
			};
			class crate_r4_unhide: crate_l1_unhide
			{
				displayName="Hide r4 crate";
				property="crate_r4_unhide";
			};
			class water_1_unhide: crate_l1_unhide
			{
				displayName="Hide water tank 1";
				property="water_1_unhide";
			};
			class water_2_unhide: crate_l1_unhide
			{
				displayName="Hide water tank 2";
				property="water_2_unhide";
			};
			class wheel_1_unhide: crate_l1_unhide
			{
				displayName="Hide spare wheel 1";
				property="wheel_1_unhide";
			};
			class wheel_2_unhide: crate_l1_unhide
			{
				displayName="Hide spare wheel 2";
				property="wheel_2_unhide";
			};
			class rhs_disableHabar: crate_l1_unhide
			{
				displayName="Disable habar";
				property="rhs_disableHabar";
				expression="[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
				defaultValue="0";
			};
			class dHatch: rhs_disableHabar
			{
				displayName="Open driver top hatch";
				property="dHatch";
				expression="_this animateDoor ['%s',_value,true]";
			};
			class cHatch: dHatch
			{
				displayName="Open commander top hatch";
				property="cHatch";
			};
			class l_door: dHatch
			{
				displayName="Open left door";
				property="l_door";
			};
			class r_door: dHatch
			{
				displayName="Open right door";
				property="r_door";
			};
			class windows: dHatch
			{
				displayName="Open firing ports";
				property="windows";
			};
			class t_door_1: dHatch
			{
				displayName="Open top hatch 1";
				property="t_door_1";
			};
			class t_door_2: dHatch
			{
				displayName="Open top hatch 2";
				property="t_door_2";
			};
			class engineHatches: dHatch
			{
				displayName="Open engine hatches";
				property="engineHatches";
			};
			class propDoor: dHatch
			{
				displayName="Open propulsion cover";
				property="propDoor";
			};
			class driverViewHatch: dHatch
			{
				displayName="Open driver view hatch";
				property="driverViewHatch";
			};
			class commanderViewHatch: dHatch
			{
				displayName="Open commander view hatch";
				property="commanderViewHatch";
			};
			class rhs_externalMount: rhs_disableHabar
			{
				displayName="Disable external mount";
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
		class Damage;  //found empty after stripping
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
				magazines[]=
				{
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250"
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
					class Night: Wide;  //found empty after stripping
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
				class Turrets;  //found empty after stripping
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
				class Hitpoints;  //found empty after stripping
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
				class Hitpoints;  //found empty after stripping
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
		displayName="$STR_RHS_BTR70_Name";
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
			class chdkz
			{
				displayName="CHDKZ";
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
				magazines[]=
				{
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_145x115mm_50",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17_6"
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
			class CommanderOptics: CommanderOptics;  //found empty after stripping
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
			class Commander_Out: Commander_Out;  //found empty after stripping
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
			class LR: LF;  //found empty after stripping
			class LR2: LR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
			class LR3: LR2;  //found empty after stripping
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR: RF;  //found empty after stripping
			class RR2: RR
			{
				steering=0;
				maxHandBrakeTorque=10000;
			};
			class RR3: RR2;  //found empty after stripping
		};
		displayName="$STR_RHS_BTR80_Name";
		class Damage;  //found empty after stripping
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
			class tricolourhard
			{
				displayName="Tri-Colour (hard-edge)";
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
				displayName="Tri-Colour (parade)";
				factions[]=
				{
					"rhs_faction_msv",
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class rhs_sand
			{
				displayName="Sand";
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type;  //found empty after stripping
			class rhs_decalNumber: rhs_decalNumber;  //found empty after stripping
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type;  //found empty after stripping
			class rhs_decalPlatoon: rhs_decalPlatoon;  //found empty after stripping
			class rhs_decalArmy_type: rhs_decalArmy_type;  //found empty after stripping
			class rhs_decalArmy: rhs_decalArmy;  //found empty after stripping
			class rhs_decalRightTurret_type: rhs_decalRightTurret_type;  //found empty after stripping
			class rhs_decalRightTurret: rhs_decalRightTurret;  //found empty after stripping
			class rhs_decalFront_type: rhs_decalFront_type;  //found empty after stripping
			class rhs_decalFront: rhs_decalFront;  //found empty after stripping
			class rhs_decalVV_type: rhs_decalVV_type;  //found empty after stripping
			class rhs_decalVV: rhs_decalVV;  //found empty after stripping
			class crate_l1_unhide: crate_l1_unhide;  //found empty after stripping
			class crate_l2_unhide: crate_l2_unhide;  //found empty after stripping
			class crate_l3_unhide: crate_l3_unhide;  //found empty after stripping
			class crate_r1_unhide: crate_r1_unhide;  //found empty after stripping
			class crate_r2_unhide: crate_r2_unhide;  //found empty after stripping
			class wheel_1_unhide: wheel_1_unhide;  //found empty after stripping
			class rhs_disableHabar: rhs_disableHabar;  //found empty after stripping
			class driverViewHatch: driverViewHatch;  //found empty after stripping
			class commanderViewHatch: commanderViewHatch;  //found empty after stripping
			class rhs_externalMount: rhs_externalMount;  //found empty after stripping
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
		displayName="$STR_RHS_BTR80A_Name";
		weaponsGroup1=128;
		weaponsGroup4=64;
		class textureSources
		{
			class standard
			{
				displayName="Standard";
			};
			class tricolourhard
			{
				displayName="Tri-Colour (hard-edge)";
			};
			class rhs_sand
			{
				displayName="Sand";
			};
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
				magazines[]=
				{
					"rhs_mag_3uof8_150",
					"rhs_mag_3ubr11_150",
					"rhs_mag_762x54mm_2000",
					"rhs_mag_3d17_6"
				};
			};
			class CommanderOptics: CommanderOptics;  //found empty after stripping
			class CargoTurret_02: CargoTurret_02;  //found empty after stripping
			class CargoTurret_03: CargoTurret_03;  //found empty after stripping
			class CargoTurret_04: CargoTurret_04;  //found empty after stripping
			class CargoTurret_05: CargoTurret_05;  //found empty after stripping
			class CargoTurret_06: CargoTurret_06;  //found empty after stripping
			class CargoTurret_07: CargoTurret_07;  //found empty after stripping
			class CargoTurret_08: CargoTurret_08;  //found empty after stripping
			class CargoTurret_09: CargoTurret_09;  //found empty after stripping
			class Commander_Out: Commander_Out;  //found empty after stripping
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
	class Proxyrhs_wheel_1: ProxyRetex;  //found empty after stripping
	class Proxyrhs_wheel_2: Proxyrhs_wheel_1;  //found empty after stripping
};
