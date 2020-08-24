class CfgPatches
{
	class rhs_c_2s1
	{
		units[]=
		{
			"rhs_2s1_tv",
			"rhs_2s1_vmf"
		};
		weapons[]={};
		name="2S1 SPG";
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
			class 2s1_ejection
			{
				file="rhsafrf\addons\rhs_c_2s1\scripts\rhs_fnc_2s1_ejection.sqf";
			};
			class 2s1_init
			{
				file="rhsafrf\addons\rhs_c_2s1\scripts\rhs_fnc_2s1_init.sqf";
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
	class rhs_2s1tank_base: Tank_F
	{
		rhs_decalParameters[]=
		{
			"['Number',[cRHS2S1BackSmallNumberPlaces, cRHS2S1FrontTurretNumberPlaces],'Default']",
			"['Label', [cRHS2S1BackSymbol, cRHS2S1TurretFrontLeftSymbol, cRHS2S1TurretFrontRightSymbol], 'Platoon', 9]"
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
		displayName="$STR_2S1_Name";
		accuracy=0.30000001;
		typicalCargo[]={};
		side=0;
		LODDriverTurnedOut=0;
		simulation="tankX";
		normalSpeedForwardCoef=0.85000002;
		slowSpeedForwardCoef=0.5;
		fuelCapacity=25;
		RHS_fuelCapacity=1885;
		maxSpeed=60;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.050000001;
		waterResistance=2;
		waterDamageEngine=0.89999998;
		engineShiftY=0.69999999;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=7.1999998;
		waterResistanceCoef=1.75;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		rudderForceCoef=4.5;
		tankTurnForce=310000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=4;
		accelAidForceYOffset=-3.5999999;
		accelAidForceSpd=2.23;
		torqueCurve[]=
		{
			{0.34999999,0.54686701},
			{0.47499999,0.80136001},
			{0.60000002,1},
			{0.69999999,1},
			{0.75,0.97863001},
			{0.80000001,0.94706202},
			{0.89999998,0.91792101},
			{1.114,0}
		};
		engineMOI=10;
		enginePower=220;
		peakTorque=1079;
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
				2.5999999,
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
			AmphibiousRatios[]=
			{
				"R1",
				-40,
				"N",
				0,
				"D1",
				40
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
				width=0.33000001;
				steering=0;
				mass=150;
				MOI=8.1696596;
				maxBrakeTorque=12000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
				sprungMass=1142.86;
				springStrength=140000;
				springDamperRate=7500;
				dampingRate=1120;
				dampingRateInAir=1120;
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
			class L8: L2;  //found empty after stripping
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
			class R8: R2;  //found empty after stripping
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
		armorStructural=6;
		explosionShielding=10;
		minTotalDamageThreshold=0.5;
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
						weapons[]={};
						magazines[]={};
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
								"Normal"
							};
							thermalMode[]={0,1};
						};
						commanding=3;
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
							class Wide: ViewOptics
							{
								initFov="0.7/5";
								hitpoint="Hit_Optic_TKN3";
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
					class LoaderOptics: CommanderOptics
					{
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
								"Normal"
							};
							thermalMode[]={0,1};
						};
						proxyIndex=2;
						commanding=2;
						personTurretAction="vehicle_passenger_stand_2";
						isPersonTurret=1;
						animationSourceHatch="hatchLoader";
						class OpticsIn
						{
							class Periscope: ViewOptics
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.25999999;
								minFov=0.25999999;
								maxFov=0.25999999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsEffect[]=
								{
									"TankGunnerOptics1",
									"OpticsBlur2",
									"OpticsCHAbera2"
								};
							};
						};
					};
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				weapons[]=
				{
					"rhs_weap_2a31"
				};
				magazines[]=
				{
					"rhs_mag_3of56_10",
					"rhs_mag_3of56_10",
					"rhs_mag_3of56_10",
					"rhs_mag_3of56_5",
					"rhs_mag_bk13_5"
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
						initFov=0.0436364;
						minFov=0.0436364;
						maxFov=0.0436364;
						visionMode[]=
						{
							"Normal"
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
		hiddenSelectionsMaterials[]=
		{
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat",
			"rhsafrf\addons\rhs_decals\data\material\rhs_label.rvmat"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				materials[]=
				{
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat"
				};
				factions[]=
				{
					"rhs_faction_tv",
					"rhs_faction_vmf"
				};
			};
			class light
			{
				displayName="Light Green";
				materials[]=
				{
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat"
				};
				factions[]=
				{
					"rhs_faction_tv",
					"rhs_faction_vmf"
				};
			};
			class sand
			{
				displayName="Sand";
				materials[]=
				{
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_hull.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_turret.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_suspension.rvmat"
				};
				factions[]=
				{
					"rhs_faction_tv",
					"rhs_faction_vmf"
				};
			};
			class standard_dirty
			{
				displayName="Green Weathered 1";
				materials[]=
				{
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_hull.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_turret.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_dirty_suspension.rvmat"
				};
				factions[]=
				{
					"rhs_faction_tv",
					"rhs_faction_vmf"
				};
			};
			class light_dirty
			{
				displayName="Green Weathered 2";
				materials[]=
				{
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_hull.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_turret.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat",
					"rhsafrf\addons\rhs_2s1\data\rhs_2s1_light_dirty_suspension.rvmat"
				};
				factions[]=
				{
					"rhs_faction_tv",
					"rhs_faction_vmf"
				};
			};
		};
		textureList[]=
		{
			"standard",
			0.80000001,
			"light",
			0.80000001,
			"standard_dirty",
			0.2,
			"light_dirty",
			0.2
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				displayName="Define font type of side hull number (3 digits)";
				tooltip="Define kind of font that will be drawn on vehicle. 3 digits";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
				displayName="Set side hull number (3 digits)";
				tooltip="Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="0";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1NumberPlaces}else{[_this, [['Number', cRHS2S1NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type2: rhs_decalNumber_type
			{
				displayName="Define font type of back small numbers (3 digits)";
				tooltip="Define kind of font that will be drawn on vehicle. 3 digits";
				property="rhs_decalNumber_type2";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1BackSmallNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber2: rhs_decalNumber
			{
				displayName="Set back small number (3 digits)";
				tooltip="Set back small number. 3 numbers are required. Hides on 0";
				property="rhs_decalNumber2";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1BackSmallNumberPlaces}else{[_this, [['Number', cRHS2S1BackSmallNumberPlaces, _this getVariable ['rhs_decalNumber_type2','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type3: rhs_decalNumber_type
			{
				displayName="Define font type of back large numbers (3 digits)";
				tooltip="Define kind of font that will be drawn on vehicle. 3 digits";
				property="rhs_decalNumber_type3";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1BackLargeNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber3: rhs_decalNumber
			{
				displayName="Set back large number (3 digits)";
				tooltip="Set back large number. 3 numbers are required. Hides on 0";
				property="rhs_decalNumber3";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1BackLargeNumberPlaces}else{[_this, [['Number', cRHS2S1BackLargeNumberPlaces, _this getVariable ['rhs_decalNumber_type3','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type4: rhs_decalNumber_type
			{
				displayName="Define font type of back turret number (3 digits)";
				tooltip="Define kind of font that will be drawn on vehicle. 3 digits";
				property="rhs_decalNumber_type4";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1BackTurretNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber4: rhs_decalNumber
			{
				displayName="Set back turret number (3 digits)";
				tooltip="Set back turret number. 3 numbers are required. Hides on 0";
				property="rhs_decalNumber4";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1BackTurretNumberPlaces}else{[_this, [['Number', cRHS2S1BackTurretNumberPlaces, _this getVariable ['rhs_decalNumber_type4','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type5: rhs_decalNumber_type
			{
				displayName="Define font type of front turret number (3 digits)";
				tooltip="Define kind of font that will be drawn on vehicle. 3 digits";
				property="rhs_decalNumber_type5";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1FrontTurretNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber5: rhs_decalNumber
			{
				displayName="Set front turret number (3 digits)";
				tooltip="Set front turret number. 3 numbers are required. Hides on 0";
				property="rhs_decalNumber5";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1FrontTurretNumberPlaces}else{[_this, [['Number', cRHS2S1FrontTurretNumberPlaces, _this getVariable ['rhs_decalNumber_type5','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNumber_type6: rhs_decalNumber_type
			{
				displayName="Define font type of front turret number (5 digits)";
				tooltip="Define kind of font that will be drawn on vehicle. 5 digits";
				property="rhs_decalNumber_type6";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHS2S1SerbianNumberPlaces, _value]]] call rhs_fnc_decalsInit}";
			};
			class rhs_decalNumber6: rhs_decalNumber
			{
				displayName="Set front turret number (5 digits, Serbian)";
				tooltip="Set front turret number. 5 numbers are required. Hides on 0";
				property="rhs_decalNumber6";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHS2S1SerbianNumberPlaces}else{[_this, [['Number', cRHS2S1SerbianNumberPlaces, _this getVariable ['rhs_decalNumber_type6','CDF'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoonBack_type
			{
				displayName="Define back door platoon symbol type";
				tooltip="Decal type";
				property="rhs_decalPlatoonBack_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				class values
				{
					class Platoon
					{
						name="Platoon";
						value="Platoon";
						defaultValue="1";
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
			class rhs_decalPlatoonBack
			{
				displayName="Set platoon symbol";
				tooltip="Set platoon symbol located on the back of the vehicle. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1BackSymbol],  _this getVariable ['rhs_decalPlatoonBack_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoonTurretBackRight_type: rhs_decalPlatoonBack_type
			{
				displayName="Define back turret right symbol type";
				property="rhs_decalPlatoonTurretBackRight_type";
				class values: values
				{
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
					class Army: Army;  //found empty after stripping
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
				};
			};
			class rhs_decalPlatoonTurretBackRight: rhs_decalPlatoonBack
			{
				displayName="Set back turret right symbol";
				tooltip="Define symbol located on right back side of vehicle turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoonTurretBackRight";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1TurretBackRightSymbol],  _this getVariable ['rhs_decalPlatoonTurretBackRight_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoonTurretBackLeft_type: rhs_decalPlatoonBack_type
			{
				displayName="Define back turret left symbol type";
				property="rhs_decalPlatoonTurretBackLeft_type";
				class values: values
				{
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
					class Army: Army;  //found empty after stripping
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
				};
			};
			class rhs_decalPlatoonTurretBackLeft: rhs_decalPlatoonBack
			{
				displayName="Set back turret left symbol";
				tooltip="Define symbol located on left back side of vehicle turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoonTurretBackLeft";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1TurretBackLeftSymbol],  _this getVariable ['rhs_decalPlatoonTurretBackLeft_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoonTurretFrontRight_type: rhs_decalPlatoonBack_type
			{
				displayName="Define front turret right symbol type";
				property="rhs_decalPlatoonTurretFrontRight_type";
				class values: values
				{
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
					class Army: Army;  //found empty after stripping
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
				};
			};
			class rhs_decalPlatoonTurretFrontRight: rhs_decalPlatoonBack
			{
				displayName="Set front turret right symbol";
				tooltip="Define symbol located on right front side of vehicle turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoonTurretFrontRight";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1TurretFrontRightSymbol],  _this getVariable ['rhs_decalPlatoonTurretFrontRight_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoonTurretFrontLeft_type: rhs_decalPlatoonBack_type
			{
				displayName="Define front turret left symbol type";
				property="rhs_decalPlatoonTurretFrontLeft_type";
				class values: values
				{
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
					class Army: Army;  //found empty after stripping
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
				};
			};
			class rhs_decalPlatoonTurretFrontLeft: rhs_decalPlatoonBack
			{
				displayName="Set front turret left symbol";
				tooltip="Define symbol located on left front side of vehicle turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoonTurretFrontLeft";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1TurretFrontLeftSymbol],  _this getVariable ['rhs_decalPlatoonTurretFrontLeft_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoonHullLeft_type: rhs_decalPlatoonBack_type
			{
				displayName="Define hull left symbol type";
				property="rhs_decalPlatoonHullLeft_type";
				class values: values
				{
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
					class Army: Army;  //found empty after stripping
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
				};
			};
			class rhs_decalPlatoonHullLeft: rhs_decalPlatoonBack
			{
				displayName="Set hull left symbol";
				tooltip="Define symbol located on left side of vehicle hull. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoonHullLeft";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1HullLeftSymbol],  _this getVariable ['rhs_decalPlatoonHullLeft_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoonHullRight_type: rhs_decalPlatoonBack_type
			{
				displayName="Define hull right symbol type";
				property="rhs_decalPlatoonHullRight_type";
				class values: values
				{
					class Platoon: Platoon;  //found empty after stripping
					class PlatoonGDR: PlatoonGDR;  //found empty after stripping
					class PlatoonVDV: PlatoonVDV;  //found empty after stripping
					class Army: Army;  //found empty after stripping
					class Honor: Honor;  //found empty after stripping
					class HonorGDR: HonorGDR;  //found empty after stripping
				};
			};
			class rhs_decalPlatoonHullRight: rhs_decalPlatoonBack
			{
				displayName="Set hull right symbol";
				tooltip="Define symbol located on right side of vehicle hull. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoonHullRight";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [cRHS2S1HullRightSymbol],  _this getVariable ['rhs_decalPlatoonHullRight_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
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
					class rhs_mag_of462
					{
						name="$STR_RHS_MAG_of462";
						value="rhs_mag_of462";
						defaultValue="rhs_mag_of462";
					};
					class rhs_mag_3of56
					{
						name="$STR_RHS_MAG_3of56";
						value="rhs_mag_3of56";
						defaultValue="rhs_mag_3of56";
					};
				};
			};
			class rhs_ammoslot_1
			{
				displayName="Ammo slot #1 count";
				tooltip="Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5']] spawn rhs_fnc_Eden_DefineLoadout};";
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
					class rhs_mag_d462
					{
						name="$STR_RHS_MAG_d462";
						value="rhs_mag_d462";
						defaultValue="rhs_mag_d462";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				displayName="Ammo slot #2 count";
				tooltip="Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #3 type";
				tooltip="Define type of shell for #3 slot [Illumination rounds]";
				property="rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_s463
					{
						name="$STR_RHS_MAG_s463";
						value="rhs_mag_s463";
						defaultValue="rhs_mag_s463";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				displayName="Ammo slot #3 count";
				tooltip="Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #4 type";
				tooltip="Define type of shell for #4 slot [HEAT rounds]";
				property="rhs_ammoslot_4_type";
				class values
				{
					class rhs_mag_bk6m
					{
						name="$STR_RHS_MAG_bk6m";
						value="rhs_mag_bk6m";
						defaultValue="rhs_mag_bk6m";
					};
					class rhs_mag_bk13
					{
						name="$STR_RHS_MAG_bk13";
						value="rhs_mag_bk13";
						defaultValue="rhs_mag_bk13";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				displayName="Ammo slot #4 count";
				tooltip="Define number of rounds stored inside of type #4. Max 40. Leave -1 for default loadout";
				property="rhs_ammoslot_4";
			};
		};
		driverForceOptics=1;
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		driverOpticsColor[]={1,1,1,1};
		driverOpticsEffect[]=
		{
			"OpticsCHAbera1"
		};
		driverOutOpticsEffect[]={};
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
		animationList[]=
		{
			"hide_shields_hull",
			0.5,
			"hide_backframe",
			0.40000001,
			"hide_shields_turret",
			0.2
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
				init="_this call rhs_fnc_2s1_init";
				fired="_this call RHS_fnc_2s1_ejection;";
				engine="[_this # 0,_this # 1,2] call rhs_fnc_engineStartupDelay";
				killed="[_this # 0,'rhs_Wreck_2s1_turret_F',50] call rhs_fnc_turretBlow";
			};
			class BIS_Randomisation
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
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
	class rhs_2s1_tv: rhs_2s1tank_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cRHS2S1BackTurretNumberPlaces,'Default']",
			"['Label', [cRHS2S1TurretBackRightSymbol, cRHS2S1TurretBackLeftSymbol], 'Platoon', 17]"
		};
		textureList[]=
		{
			"standard",
			1,
			"light",
			1,
			"standard_dirty",
			0.2,
			"light_dirty",
			0.2
		};
		displayName="$STR_2S1_Name";
	};
	class rhs_2s1_vmf: rhs_2s1_tv
	{
		rhs_decalParameters[]=
		{
			"['Number',[cRHS2S1BackSmallNumberPlaces, cRHS2S1FrontTurretNumberPlaces],'Default']",
			"['Label', [cRHS2S1BackSymbol, cRHS2S1TurretFrontLeftSymbol, cRHS2S1TurretFrontRightSymbol], 'Platoon', 16]"
		};
	};
	class ThingX;
	class rhs_Wreck_2s1_turret_F: ThingX
	{
		reversed=1;
		displayName="2S1 Wreck (Turret)";
		icon="iconObject_1x2";
	};
};
