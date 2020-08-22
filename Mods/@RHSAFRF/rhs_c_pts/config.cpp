class CfgPatches
{
	class rhs_c_pts
	{
		units[]=
		{
			"rhs_pts_vmf"
		};
		weapons[]={};
		name="PTS";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class pts_init
			{
				file="\rhsafrf\addons\rhs_c_pts\scripts\rhs_pts_init.sqf";
			};
			class pts_cargoAttach
			{
				file="\rhsafrf\addons\rhs_c_pts\scripts\cargo_attach.sqf";
				description="Attach cargo to the PTS";
			};
			class pts_cargoDetach
			{
				file="\rhsafrf\addons\rhs_c_pts\scripts\cargo_detach.sqf";
				description="Detach cargo from the PTS";
			};
		};
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class CommanderOptics;
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class EventHandlers;
		class Components;
	};
	class rhs_pts_base: APC_Tracked_02_base_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSPTSNumberPlaces,'Default']",
			"['Label',cRHSPTSPlnSymPlaces, 'Platoon',12]"
		};
		enableGPS=0;
		incomingMissileDetectionSystem=0;
		weapons[]={};
		magazines[]={};
		rhs_maxCargoMassCoeff=5.0000001e-008;
		accuracy=0.30000001;
		side=0;
		driverOpticsModel="";
		hideProxyInCombat=0;
		cargoIsCoDriver[]={1};
		driverIsCommander=1;
		viewCargoShadow=1;
		typicalCargo[]=
		{
			"rhs_vmf_flora_crew_commander",
			"rhs_vmf_flora_crew",
			"rhs_vmf_flora_crew",
			""
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		transportsoldier=1;
		unloadInCombat=1;
		tf_range_api=35000;
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		driverForceOptics=0;
		simulation="tankX";
		normalSpeedForwardCoef=0.85000002;
		slowSpeedForwardCoef=0.5;
		fuelCapacity=672;
		RHS_fuelCapacity=672;
		maxSpeed=46;
		tankTurnForce=200000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.81999999;
		accelAidForceCoef=4;
		accelAidForceYOffset=-4.0999999;
		accelAidForceSpd=2.23;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.1;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=0.1;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		waterResistanceCoef=0.175;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		torqueCurve[]=
		{
			{0,0},
			{0.47826099,0.86666697},
			{0.52173901,0.98484802},
			{0.56521702,1},
			{0.60869598,0.98787898},
			{0.69565201,0.909091},
			{0.86956501,0.80000001},
			{1.13217,0}
		};
		engineMOI=10;
		enginePower=261;
		peakTorque=1650;
		minOmega=85;
		maxOmega=240.86;
		idleRPM=800;
		redRPM=2300;
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=18;
		latency=0.69999999;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.91304302,0.60869598,0.93478298,0.652174,0.93478298,0.652174,1,0.73913002};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.3099999,
				"N",
				0,
				"D1",
				3.3099999,
				"D2",
				1.934,
				"D3",
				1.132,
				"D4",
				0.662
			};
			AmphibiousRatios[]=
			{
				"R1",
				-9.5,
				"N",
				0,
				"D1",
				9.5
			};
			TransmissionRatios[]=
			{
				"High",
				18.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				width=0.2;
				steering=0;
				mass=93;
				MOI=10.3595;
				maxBrakeTorque=25000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				sprungMass=1306;
				springStrength=92969;
				springDamperRate=7663;
				dampingRate=955;
				dampingRateInAir=955;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3.5;
				latStiffY=35;
				longitudinalStiffnessPerUnitGravity=14000;
				frictionVsSlipGraph[]=
				{
					{0,0.55000001},
					{0.18000001,1},
					{0.64999998,0.69999999}
				};
			};
			class L3: L2;  //found empty after stripping
			class L4: L2;  //found empty after stripping
			class L5: L2;  //found empty after stripping
			class L6: L2;  //found empty after stripping
			class L7: L2;  //found empty after stripping
			class L9: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				suspTravelDirection[]={0.125,-1,0};
				side="right";
			};
			class R3: R2;  //found empty after stripping
			class R4: R2;  //found empty after stripping
			class R5: R2;  //found empty after stripping
			class R6: R2;  //found empty after stripping
			class R7: R2;  //found empty after stripping
			class R9: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
		};
		driverCanSee="2+4+8";
		commanderCanSee="2+4+8";
		tracksSpeed=1.35;
		wheelCircumference=1.9220001;
		attenuationEffectType="TankAttenuation";
		nameSound="veh_vehicle_APC_s";
		extCameraPosition[]={0,2,-15};
		cost=1500000;
		damageResistance=0.0084499996;
		armor=50;
		armorStructural=500;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.40000001;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.44;
				explosionShielding=0.5;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=0.44999999;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.139;
				explosionShielding=0.0089999996;
				radius=0.27000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.15000001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.15000001;
				radius=0.30000001;
			};
		};
		class Turrets: Turrets;  //found empty after stripping
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHSPTSNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				tooltip="Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSPTSNumberPlaces}else{[_this, [['Number', cRHSPTSNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_openramp
			{
				property="rhs_opendoors";
				control="CheckboxNumber";
				expression="_this animateDoor ['ramp',_value];";
				defaultValue="0";
			};
			class rhs_attachCargo: rhs_openramp
			{
				tooltip="Attaching cargo (using attachTo command) just like when you use ramp action";
				property="rhs_attachCargo";
				expression="if(_value == 1)then{[_this] spawn rhs_fnc_pts_cargoAttach}else{[_this] call rhs_fnc_pts_cargoDetach};";
			};
		};
		class Damage;  //found empty after stripping
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaustl";
				direction="exhaustl_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position="exhaustr";
				direction="exhaustr_dir";
				effect="ExhaustEffectTankSide";
			};
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
		armorLights=0.1;
		class ViewPilot: ViewPilot
		{
			initAngleX=-12;
			minAngleX=-35;
			maxAngleX=25;
			initAngleY=0;
			minAngleY=-135;
			maxAngleY=135;
			initFov=0.69999999;
			minFov=0.30000001;
			maxFov=1;
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_pts_init";
				engine="if((_this select 0) doorPhase 'ramp'> 0)then{_this select 0 engineOn false}else{[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay};";
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
	class rhs_pts_vmf: rhs_pts_base;  //found empty after stripping
};
