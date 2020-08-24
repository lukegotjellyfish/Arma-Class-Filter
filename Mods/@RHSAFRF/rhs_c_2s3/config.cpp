class CfgPatches
{
	class rhs_c_2s3
	{
		units[]=
		{
			"rhs_2s3_tv"
		};
		weapons[]={};
		name="2S3 SPG";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class 2s3_init
			{
				file="rhsafrf\addons\rhs_c_2s3\scripts\rhs_fnc_2s3_init.sqf";
			};
		};
	};
};
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
		class EventHandlers;
		class Components;
	};
	class rhs_2s3tank_base: Tank_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHS2S3NumberPlaces,'Default']"
		};
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		artilleryScanner=1;
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		displayName="$STR_2S3M1_Name";
		accuracy=0.30000001;
		typicalCargo[]={};
		side=0;
		LODDriverTurnedOut=0;
		simulation="tankX";
		normalSpeedForwardCoef=0.85000002;
		slowSpeedForwardCoef=0.5;
		fuelCapacity=25;
		RHS_fuelCapacity=1885;
		maxSpeed=63;
		tankTurnForce=310000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=4;
		accelAidForceYOffset=-3.5999999;
		accelAidForceSpd=2.23;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		torqueCurve[]=
		{
			{0.34999999,0.44973299},
			{0.47499999,0.80136001},
			{0.60000002,1},
			{0.69999999,1},
			{0.75,0.97863001},
			{0.80000001,0.94706202},
			{0.89999998,0.91792101},
			{1.114,0}
		};
		engineMOI=10;
		enginePower=388;
		peakTorque=2059;
		minOmega=72;
		maxOmega=209.44;
		idleRPM=700;
		redRPM=2000;
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=20;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.5,0.5,0,0.89999998,0.5,0.89999998,0.69999999,0.89999998,0.69999999,0.94999999,0.75,0.94999999,0.75,1,0.80000001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.2349999,
				"N",
				0,
				"D1",
				2,
				"D2",
				1.5,
				"D3",
				1.125,
				"D4",
				0.85000002,
				"D5",
				0.63999999,
				"D6",
				0.5
			};
			TransmissionRatios[]=
			{
				"High",
				12
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
				width=0.47999999;
				steering=0;
				mass=150;
				MOI=10.2121;
				maxBrakeTorque=12000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
				sprungMass=2333.3301;
				springStrength=140000;
				springDamperRate=7500;
				dampingRate=230;
				dampingRateInAir=230;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=4;
				latStiffY=50;
				longitudinalStiffnessPerUnitGravity=3000;
				frictionVsSlipGraph[]=
				{
					{0,0.80000001},
					{0.38,1},
					{0.69999999,0.64999998}
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
		tracksSpeed=1.35;
		wheelCircumference=2.01;
		attenuationEffectType="TankAttenuation";
		extCameraPosition[]={0,2,-15};
		cost=1500000;
		damageResistance=0.02;
		incomingMissileDetectionSystem=0;
		armor=300;
		explosionShielding=10;
		armorStructural=6;
		minTotalDamageThreshold=0.1;
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.5;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0089999996;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=1;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.23999999;
				explosionShielding=0.0089999996;
				radius=0.33000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed=0.44999999;
						maxVerticalRotSpeed=0.07;
						stabilizedInAxes=3;
						minElev=-6;
						maxElev=15;
						initElev=0;
						minTurn=-171;
						maxTurn=124;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						weapons[]=
						{
							"rhs_weap_pkt_2s3"
						};
						magazines[]=
						{
							"rhs_mag_762x54mm_250",
							"rhs_mag_762x54mm_250",
							"rhs_mag_762x54mm_250",
							"rhs_mag_762x54mm_250",
							"rhs_mag_762x54mm_250",
							"rhs_mag_762x54mm_250"
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
						};
						startEngine=0;
						class HitPoints
						{
							class HitTurretCom
							{
								isTurret=1;
								armor=0.30000001;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
							class HitGunCom
							{
								isGun=1;
								armor=0.30000001;
								material=-1;
								name="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
						};
						selectionFireAnim="zasleh3";
						class OpticsIn
						{
							class day1
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.155;
								minFov=0.155;
								maxFov=0.155;
								visionMode[]=
								{
									"Normal",
									"NVG"
								};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera3"
								};
							};
							class day2
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.046999998;
								minFov=0.046999998;
								maxFov=0.046999998;
								visionMode[]=
								{
									"Normal",
									"NVG"
								};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera3"
								};
							};
							class PZU3
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.1;
								minFov=0.1;
								maxFov=0.1;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera3"
								};
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
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				weapons[]=
				{
					"RHS_Weap_2a33"
				};
				magazines[]=
				{
					"rhs_mag_HE_2a33",
					"rhs_mag_WP_2a33",
					"rhs_mag_LASER_2a33",
					"rhs_mag_SMOKE_2a33",
					"rhs_mag_ILLUM_2a33"
				};
				minElev=-5;
				maxElev=77;
				initElev=20;
				elevationMode=3;
				maxHorizontalRotSpeed=0.44999999;
				maxVerticalRotSpeed=0.07;
				lockWhenVehicleSpeed=1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov="0.7/6";
						minFov="0.7/6";
						maxFov="0.7/6";
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
				forceHideGunner=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="vez";
						passThrough=0;
						minimalHit=0.15000001;
						explosionShielding=0.0089999996;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.5;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=0.15000001;
						explosionShielding=0.001;
						radius=0.25;
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
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				factions[]=
				{
					"rhs_faction_tv"
				};
			};
			class rhs_tri
			{
				displayName="3-Color Camo";
				factions[]=
				{
					"rhs_faction_tv"
				};
			};
			class rhs_sand
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
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHS2S3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				displayName="Set side number";
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S3NumberPlaces}else{[_this, [['Number', cRHS2S3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_ammoslot_1_type
			{
				displayName="Ammo slot #1 type";
				tooltip="Define type of shell for #1 slot [HE rounds]";
				property="rhs_ammoslot_1_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				class values
				{
					class rhs_mag_HE_2a33
					{
						name="$STR_RHS_53WOF27_NAME";
						value="rhs_mag_HE_2a33";
						defaultValue="rhs_mag_HE_2a33";
					};
				};
			};
			class rhs_ammoslot_1
			{
				displayName="Ammo slot #1 count";
				tooltip="Define number of rounds stored inside of type #1. Max 46. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',46,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #2 type";
				tooltip="Define type of shell for #2 slot [Smoke rounds]";
				property="rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_SMOKE_2a33
					{
						name="$STR_RHS_53WD546_NAME";
						value="rhs_mag_SMOKE_2a33";
						defaultValue="rhs_mag_SMOKE_2a33";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				displayName="Ammo slot #2 count";
				tooltip="Define number of rounds stored inside of type #2. Max 46. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #3 type";
				tooltip="Define type of shell for #3 slot [Illumination rounds]";
				property="rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_ILLUM_2a33
					{
						name="$STR_RHS_3WS23_NAME";
						value="rhs_mag_ILLUM_2a33";
						defaultValue="rhs_mag_ILLUM_2a33";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				displayName="Ammo slot #3 count";
				tooltip="Define number of rounds stored inside of type #3. Max 46. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #4 type";
				tooltip="Define type of shell for #4 slot [Laser guided rounds]";
				property="rhs_ammoslot_4_type";
				class values
				{
					class rhs_mag_LASER_2a33
					{
						name="$STR_RHS_3WOF93_NAME";
						value="rhs_mag_LASER_2a33";
						defaultValue="rhs_mag_LASER_2a33";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				displayName="Ammo slot #4 count";
				tooltip="Define number of rounds stored inside of type #4. Max 46. Leave -1 for default loadout";
				property="rhs_ammoslot_4";
			};
			class rhs_ammoslot_5_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #5 type";
				tooltip="Define type of shell for #5 slot [Special rounds]";
				property="rhs_ammoslot_5_type";
				class values
				{
					class rhs_mag_WP_2a33
					{
						name="$STR_RHS_53OCH540_NAME";
						value="rhs_mag_WP_2a33";
						defaultValue="rhs_mag_WP_2a33";
					};
					class rhs_mag_Atomic_2a33
					{
						name="$STR_RHS_3WB3_NAME";
						value="rhs_mag_Atomic_2a33";
						defaultValue="rhs_mag_Atomic_2a33";
					};
				};
			};
			class rhs_ammoslot_5: rhs_ammoslot_1
			{
				displayName="Ammo slot #5 count";
				tooltip="Define number of rounds stored inside of type #5. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_5";
			};
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
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
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_2s3_init";
				engine="[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay";
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
	class rhs_2s3_tv: rhs_2s3tank_base
	{
		displayName="$STR_2S3M1_Name";
	};
};
