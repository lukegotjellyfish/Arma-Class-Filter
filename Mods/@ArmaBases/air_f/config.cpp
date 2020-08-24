class CfgPatches
{
	class A3_Air_F_Heli_Light_02
	{
		addonRootClass="A3_Air_F";
		units[]=
		{
			"O_Heli_Light_02_dynamicLoadout_F",
			"O_Heli_Light_02_F",
			"O_Heli_Light_02_unarmed_F",
			"O_Heli_Light_02_v2_F"
		};
		weapons[]={};
	};
};
class WeaponCloudsMGun;
class SensorTemplatePassiveRadar;
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
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Reflectors;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Components;
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		features="Randomization: No						<br />Camo selections: 1 - the whole exterior						<br />Script door sources: No						<br />Script animations: Doors, HideWeapon, proxy						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: Slingloads up to 500 kg						<br />Cargo proxy indexes: 1 to 8";
		_generalMacro="Heli_Light_02_base_F";
		displayName="$STR_A3_CfgVehicles_Heli_Light_02_Base_F0";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		armor=40;
		cost=3000000;
		threat[]={0.80000001,0.1,0.60000002};
		altFullForce=4000;
		altNoForce=6000;
		maxFordingDepth=0.55000001;
		mainBladeRadius=7;
		liftForceCoef=1.1;
		class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F\Heli_Light_02\RTD_Heli_Light_02.xml";
			defaultCollective=0.68000001;
			autoHoverCorrection[]={4,-3.3,0};
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
		fuelCapacity=800;
		fuelConsumptionRate=0.11;
		maxSpeed=290;
		slingLoadMaxCargoMass=2000;
		accuracy=0.5;
		driveOnComponent[]=
		{
			"Wheels"
		};
		memoryPointTaskMarker="TaskMarker_1_pos";
		precisegetinout=1;
		getInRadius=1.7;
		cargoGetInAction[]=
		{
			"GetInHelicopterCargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutHelicopterCargo"
		};
		maximumLoad=3000;
		cargoCanEject=1;
		driverCanEject=0;
		cargoIsCoDriver[]={0,0};
		hideWeaponsCargo=1;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliMed";
			};
		};
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_1";
		memoryPointGun="machinegun_end";
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
		numberPhysicalWheels=3;
		memoryPointDriverOptics="slingCamera";
		class TextureSources
		{
			class Opfor
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				faction[]=
				{
					"OPF_F"
				};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				faction[]=
				{
					"OPF_F"
				};
			};
			class Blackcustom
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACKCUSTOM0";
				faction[]=
				{
					"OPF_F"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				factions[]=
				{
					"CIV_F"
				};
			};
		};
		weapons[]=
		{
			"LMG_Minigun_heli",
			"missiles_DAGR",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"2000Rnd_65x39_Belt_Tracer_Green_Splash",
			"12Rnd_PG_missiles",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
		class ViewOptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.1;
			minFov=0.1;
			maxFov=1.2;
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
				armor=1;
				radius=0.25;
				minimalHit=0.050000001;
			};
			class HitAvionics: HitAvionics
			{
				armor=2;
				radius=0.40000001;
				minimalHit=0.1;
			};
			class HitMissiles: HitMissiles
			{
				armor=1;
				radius=0.15000001;
				minimalHit=0.050000001;
			};
			class HitEngine1
			{
				armor=1;
				radius=0.40000001;
				name="engine_1_hit";
				explosionShielding=3;
				minimalHit=0.2;
				passThrough=1;
				convexComponent="engine_1_hit";
				material=51;
			};
			class HitEngine2: HitEngine1
			{
				armor=1;
				minimalHit=0.2;
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
				armor=4.5;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=3;
				radius=0.059999999;
				minimalHit=0.090000004;
				explosionShielding=6;
			};
			class HitGlass1
			{
				name="glass1";
				radius=0.37;
				armor=4.5;
				explosionShielding=2;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass2
			{
				name="glass2";
				radius=0.37;
				armor=3;
				explosionShielding=1.5;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass3
			{
				name="glass3";
				radius=0.25;
				armor=3;
				explosionShielding=1.5;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass4
			{
				name="glass4";
				radius=0.25;
				armor=3;
				explosionShielding=1.5;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass5
			{
				name="glass5";
				radius=0.34;
				armor=4.5;
				explosionShielding=2;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass6
			{
				name="glass6";
				radius=0.34;
				armor=3;
				explosionShielding=1.5;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass7
			{
				name="glass7";
				radius=0.34;
				armor=3;
				explosionShielding=1.5;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass8
			{
				name="glass8";
				radius=0.34;
				armor=3;
				explosionShielding=1.5;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass9
			{
				name="glass9";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass10
			{
				name="glass10";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass11
			{
				name="glass11";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass12
			{
				name="glass12";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass13
			{
				name="glass13";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.050000001;
				passThrough=0;
			};
			class HitGlass14
			{
				name="glass14";
				radius=0.23999999;
				armor=0.80000001;
				explosionShielding=1;
				minimalHit=0.050000001;
				passThrough=0;
			};
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
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				precisegetinout=1;
				memoryPointsGetInCargo="pos copilot";
				memoryPointsGetInCargoDir="pos copilot dir";
				canEject=0;
				selectionFireAnim="";
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot;  //found empty after stripping
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot;  //found empty after stripping
				};
			};
		};
		class Damage;  //found empty after stripping
		attenuationEffectType="HeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
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
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",
			1.4125376,
			1,
			500
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",
			1.4125376,
			1,
			500
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",
			0.39810717,
			1
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			300
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
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
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
		defaultUserMFDvalues[]={0.15000001,1,0.15000001,0.69999999};
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
				color[]={0.15000001,1,0.15000001,1};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.045000002,0.045000002,0.1};
				helmetRight[]={0.090000004,0,0};
				helmetDown[]={0,-0.090000004,0};
				font="RobotoCondensedLight";
				class Bones
				{
					class PlaneOrientation
					{
						pos[]={0.5,0.5};
					};
					class WeaponAim
					{
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.69700003,0.69499999};
					};
					class Velocity
					{
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.69700003,0.69499999};
					};
					class ForwardVec
					{
						source="forward";
						pos0[]={0,0};
						pos10[]={0.197,0.19499999};
					};
					class HorizonBank2
					{
						source="HorizonBank";
						min=-6.2831898;
						max=6.2831898;
						minAngle=-360;
						maxAngle=360;
						aspectRatio=0.98984802;
					};
					class HorizonDive
					{
						source="horizonDive";
						min=-1;
						max=1;
						minPos[]={0.5,1.75};
						maxPos[]={0.5,-0.75};
					};
					class SliderAltitudeSource
					{
						source="altitudeAGL";
						min=0;
						max=50;
						sourceOffset=-2;
						minPos[]=
						{
							0.84500003,
							"0.2 + 0 * 0.065"
						};
						maxPos[]=
						{
							0.84500003,
							"0.2 + 5 * 0.065"
						};
					};
					class SliderSpeedSource
					{
						source="speed";
						min=0;
						max=138.88901;
						minPos[]={0.255,0.2};
						maxPos[]={0.255,0.52499998};
					};
					class SliderVSpeedSource
					{
						source="vspeed";
						min=-30;
						max=30;
						minPos[]=
						{
							0.89499998,
							"0.6 + 0 * 0.04"
						};
						maxPos[]=
						{
							0.89499998,
							"0.6 + 6 * 0.04"
						};
					};
					class ImpactPoint
					{
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.69700003,0.69499999};
					};
					class Limit0109
					{
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						pos0[]={0.5,0.5};
						pos10[]={0.69700003,0.69499999};
					};
					class MissileFlightTimeRot1
					{
						source="MissileFlightTime";
						sourceScale=0.46000001;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98984802;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
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
					clipTL[]={0,0};
					clipBR[]={1,1};
					class PlaneHeading
					{
						width=4;
						class Vector
						{
							width=2;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,0},
									1
								},
								
								{
									"Velocity",
									{0,0},
									1
								},
								{}
							};
						};
					};
					class Horizont
					{
						clipTL[]={0.25,0.25};
						clipBR[]={0.75,0.75};
						width=4;
						class Dimmed
						{
							width=4;
							class Level00
							{
								width=4;
								points[]=
								{
									
									{
										"HorizonDive",
										{-0.17,0},
										1
									},
									
									{
										"HorizonDive",
										{-0.079999998,0},
										1
									},
									{},
									
									{
										"HorizonDive",
										{-0.0049999999,0},
										1
									},
									
									{
										"HorizonDive",
										{0.0049999999,0},
										1
									},
									{},
									
									{
										"HorizonDive",
										{0.079999998,0},
										1
									},
									
									{
										"HorizonDive",
										{0.17,0},
										1
									}
								};
							};
							class Level2M10: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"-0.195 / 10 * 10 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"-0.195 / 10 * 10 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"-0.195 / 10 * 10 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"-0.195 / 10 * 10 * 3/3"
										},
										1
									}
								};
							};
							class VALM2_1_10
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"
									},
									1
								};
							};
							class VALM2_2_10: VALM2_1_10
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"
									},
									1
								};
							};
							class Level2P10: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"+0.195 / 10 * 10 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"+0.195 / 10 * 10 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"+0.195 / 10 * 10 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"+0.195 / 10 * 10 * 3/3"
										},
										1
									}
								};
							};
							class VALP2_1_10
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"
									},
									1
								};
							};
							class VALP2_2_10: VALP2_1_10
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"
									},
									1
								};
							};
							class Level2M20: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"-0.195 / 10 * 20 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"-0.195 / 10 * 20 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"-0.195 / 10 * 20 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"-0.195 / 10 * 20 * 3/3"
										},
										1
									}
								};
							};
							class VALM2_1_20
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"
									},
									1
								};
							};
							class VALM2_2_20: VALM2_1_20
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"
									},
									1
								};
							};
							class Level2P20: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"+0.195 / 10 * 20 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"+0.195 / 10 * 20 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"+0.195 / 10 * 20 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"+0.195 / 10 * 20 * 3/3"
										},
										1
									}
								};
							};
							class VALP2_1_20
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"
									},
									1
								};
							};
							class VALP2_2_20: VALP2_1_20
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"
									},
									1
								};
							};
							class Level2M30: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"-0.195 / 10 * 30 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"-0.195 / 10 * 30 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"-0.195 / 10 * 30 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"-0.195 / 10 * 30 * 3/3"
										},
										1
									}
								};
							};
							class VALM2_1_30
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"
									},
									1
								};
							};
							class VALM2_2_30: VALM2_1_30
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"
									},
									1
								};
							};
							class Level2P30: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"+0.195 / 10 * 30 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"+0.195 / 10 * 30 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"+0.195 / 10 * 30 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"+0.195 / 10 * 30 * 3/3"
										},
										1
									}
								};
							};
							class VALP2_1_30
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"
									},
									1
								};
							};
							class VALP2_2_30: VALP2_1_30
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"
									},
									1
								};
							};
							class Level2M40: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"-0.195 / 10 * 40 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"-0.195 / 10 * 40 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"-0.195 / 10 * 40 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"-0.195 / 10 * 40 * 3/3"
										},
										1
									}
								};
							};
							class VALM2_1_40
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"
									},
									1
								};
							};
							class VALM2_2_40: VALM2_1_40
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"
									},
									1
								};
							};
							class Level2P40: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"+0.195 / 10 * 40 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"+0.195 / 10 * 40 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"+0.195 / 10 * 40 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"+0.195 / 10 * 40 * 3/3"
										},
										1
									}
								};
							};
							class VALP2_1_40
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"
									},
									1
								};
							};
							class VALP2_2_40: VALP2_1_40
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"
									},
									1
								};
							};
							class Level2M50: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"-0.195 / 10 * 50 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"-0.195 / 10 * 50 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"-0.195 / 10 * 50 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"-0.195 / 10 * 50 * 3/3"
										},
										1
									}
								};
							};
							class VALM2_1_50
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"
									},
									1
								};
							};
							class VALM2_2_50: VALM2_1_50
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"
									},
									1
								};
							};
							class Level2P50: Level00
							{
								points[]=
								{
									
									{
										"HorizonDive",
										
										{
											-0.17,
											"+0.195 / 10 * 50 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											-0.079999998,
											"+0.195 / 10 * 50 * 3/3"
										},
										1
									},
									{},
									
									{
										"HorizonDive",
										
										{
											0.079999998,
											"+0.195 / 10 * 50 * 3/3"
										},
										1
									},
									
									{
										"HorizonDive",
										
										{
											0.17,
											"+0.195 / 10 * 50 * 3/3"
										},
										1
									}
								};
							};
							class VALP2_1_50
							{
								source="static";
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"
									},
									1
								};
							};
							class VALP2_2_50: VALP2_1_50
							{
								pos[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013-0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"
									},
									1
								};
								right[]=
								{
									"HorizonDive",
									
									{
										"-0.09 + 0.05 * 3/3",
										"0.013-0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"
									},
									1
								};
								down[]=
								{
									"HorizonDive",
									
									{
										-0.090000004,
										"0.013+0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"
									},
									1
								};
							};
						};
					};
					class MGun
					{
						condition="-2+(mgun+rocket)*ImpactDistance";
						width=4;
						class Circle
						{
							width=4;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0277157},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.034644701},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.028000001},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Cross
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.029695399},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.039593901},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle2
						{
							width=3;
							points[]={};
						};
						class Circle_Min_Range
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.029695399},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029244101},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.027904799},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0257162},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022746701},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.019088199},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0148477},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0101558},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051551298},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051551298},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0101558},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0148477},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.019088199},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022746701},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0257162},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.027904799},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029244101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.029695399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029244101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.027904799},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0257162},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022746701},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.019088199},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0148477},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0101558},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051551298},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051551298},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0101558},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0148477},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.019088199},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022746701},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0257162},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.027904799},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029244101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.029695399},
									1
								}
							};
						};
						class Distance
						{
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class Missile
					{
						condition="missile";
						width=0.050000001;
						class Circle
						{
							width=4;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0,-0.069289297},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.012152,-0.068236098},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.023940001,-0.065111198},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.035,-0.060004599},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.044996001,-0.0530756},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.053619999,-0.044539198},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.060619999,-0.034644701},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.065779001,-0.023697},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.068935998,-0.0120286},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.07,0},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.068935998,0.0120286},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.065779001,0.023697},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.060619999,0.034644701},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.053619999,0.044539198},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.044996001,0.0530756},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.035,0.060004599},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.023940001,0.065111198},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0.012152,0.068236098},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0,0.069289297},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.012152,0.068236098},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.023940001,0.065111198},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.035,0.060004599},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.044996001,0.0530756},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.053619999,0.044539198},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.060619999,0.034644701},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.065779001,0.023697},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.068935998,0.0120286},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.07,0},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.068935998,-0.0120286},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.065779001,-0.023697},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.060619999,-0.034644701},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.053619999,-0.044539198},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.044996001,-0.0530756},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.035,-0.060004599},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.023940001,-0.065111198},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{-0.012152,-0.068236098},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									{0,-0.069289297},
									1
								}
							};
						};
					};
					class TargetDiamond
					{
						condition="1-missilelocked";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class shape
						{
							width=2;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.027740801,0.0054619699},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.027740801,-0.0054619699},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.023517501,-0.0155544},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.0157139,-0.023278801},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.0055179899,-0.0274592},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.0055179899,-0.0274592},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.0157139,-0.023278801},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.023517501,-0.0155544},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.027740801,-0.0054619601},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.027740801,0.0054619801},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.023517501,0.0155544},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.0157139,0.023278801},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.0055179801,0.0274592},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.0055179899,0.0274592},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.0157139,0.023278801},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.023517501,0.0155544},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.027740801,0.0054619499},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.027740801,-0.0054619699},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.023517501,-0.0155544},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.0157139,-0.023278801},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.0055179801,-0.0274592},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.0055180001,-0.0274592},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.0157139,-0.023278801},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.023517501,-0.0155544},
									1
								},
								{},
								{},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										-0.02,
										-2.3607599e-010
									},
									1
								},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										-0.015,
										-1.7705699e-010
									},
									1
								},
								{},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										-1.74846e-009,
										0.019796999
									},
									1
								},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										-1.31134e-009,
										0.0148477
									},
									1
								},
								{},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										0.02,
										8.6535201e-010
									},
									1
								},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										0.015,
										6.4901401e-010
									},
									1
								},
								{},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										0,
										-0.019796999
									},
									1
								},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										0,
										-0.0148477
									},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							width=3;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									{0,-0.019796999},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0034719999,-0.019495999},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0068399999,-0.0186032},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0099999998,-0.017144199},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.012856,-0.0151645},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.01532,-0.0127255},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.01732,-0.00989848},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.018794,-0.0067705601},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.019695999,-0.00343675},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.02,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.019695999,0.00343675},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.018794,0.0067705601},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.01732,0.00989848},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.01532,0.0127255},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.012856,0.0151645},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0099999998,0.017144199},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0068399999,0.0186032},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0034719999,0.019495999},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0,0.019796999},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0034719999,0.019495999},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0068399999,0.0186032},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0099999998,0.017144199},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.012856,0.0151645},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.01532,0.0127255},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.01732,0.00989848},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.018794,0.0067705601},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.019695999,0.00343675},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.02,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.019695999,-0.00343675},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.018794,-0.0067705601},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.01732,-0.00989848},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.01532,-0.0127255},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.012856,-0.0151645},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0099999998,-0.017144199},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0068399999,-0.0186032},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0034719999,-0.019495999},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0,-0.019796999},
									1
								},
								{},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										-0.02,
										-2.3607599e-010
									},
									1
								},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										-0.015,
										-1.7705699e-010
									},
									1
								},
								{},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										-1.74846e-009,
										0.019796999
									},
									1
								},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										-1.31134e-009,
										0.0148477
									},
									1
								},
								{},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										0.02,
										8.6535201e-010
									},
									1
								},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										0.015,
										6.4901401e-010
									},
									1
								},
								{},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										0,
										-0.019796999
									},
									1
								},
								
								{
									"Target",
									1,
									
									{
										"Limit0109",
										0,
										-0.0148477
									},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=0;
						class Text
						{
							source="static";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.217766},
								1
							};
							right[]=
							{
								{0.54500002,0.217766},
								1
							};
							down[]=
							{
								{0.48500001,0.267259},
								1
							};
						};
					};
					class RtdOnlyGroup
					{
						condition="simulRTD";
						class CollectiveNumber
						{
							source="rtdCollective";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]=
							{
								{0.18000001,0.53500003},
								1
							};
							right[]=
							{
								{0.23,0.53500003},
								1
							};
							down[]=
							{
								{0.18000001,0.56999999},
								1
							};
						};
						class CollectiveText
						{
							source="static";
							align="right";
							scale=1;
							pos[]=
							{
								{0.18000001,0.53500003},
								1
							};
							right[]=
							{
								{0.23,0.53500003},
								1
							};
							down[]=
							{
								{0.18000001,0.56999999},
								1
							};
						};
					};
					class SpeedNumber
					{
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						align="right";
						scale=1;
						pos[]=
						{
							{0.16,0.07},
							1
						};
						right[]=
						{
							{0.23999999,0.07},
							1
						};
						down[]=
						{
							{0.16,0.12},
							1
						};
					};
					class VspeedNumber
					{
						source="vspeed";
						sourceScale=1;
						sourceLength=2;
						align="left";
						scale=1;
						pos[]=
						{
							{0.92000002,0.52999997},
							1
						};
						right[]=
						{
							{0.99000001,0.52999997},
							1
						};
						down[]=
						{
							{0.92000002,0.59500003},
							1
						};
					};
					class AltNumber
					{
						source="altitudeAGL";
						sourceScale=1;
						sourceOffset=-2;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]=
						{
							{0.83999997,0.07},
							1
						};
						right[]=
						{
							{0.92000002,0.07},
							1
						};
						down[]=
						{
							{0.83999997,0.12},
							1
						};
					};
					class VspeedNumberStaticP30
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.93000001,0.583},
							1
						};
						right[]=
						{
							{0.97000003,0.583},
							1
						};
						down[]=
						{
							{0.93000001,0.61299998},
							1
						};
					};
					class VspeedNumberStatic0
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.93000001,0.70300001},
							1
						};
						right[]=
						{
							{0.97000003,0.70300001},
							1
						};
						down[]=
						{
							{0.93000001,0.73299998},
							1
						};
					};
					class VspeedNumberStaticM30
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.93000001,0.82300001},
							1
						};
						right[]=
						{
							{0.97000003,0.82300001},
							1
						};
						down[]=
						{
							{0.93000001,0.85299999},
							1
						};
					};
					class AltGroup
					{
						condition="53 -altitudeAGL";
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									"SliderAltitudeSource",
									{-0.015,0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0,0},
									1
								},
								
								{
									"SliderAltitudeSource",
									{-0.015,-0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{-0.015,0.0099999998},
									1
								},
								{},
								
								{
									
									{
										0.85000002,
										"0.2 + 0 * 0.065"
									},
									1
								},
								
								{
									
									{
										0.85000002,
										"0.2 + 5 * 0.065"
									},
									1
								},
								{},
								
								{
									
									{
										0.85000002,
										"0.2 + 0 * 0.065"
									},
									1
								},
								
								{
									
									{
										0.87,
										"0.2 + 0 * 0.065"
									},
									1
								},
								{},
								
								{
									
									{
										0.86000001,
										"0.2 + 1 * 0.065"
									},
									1
								},
								
								{
									
									{
										0.87,
										"0.2 + 1 * 0.065"
									},
									1
								},
								{},
								
								{
									
									{
										0.86000001,
										"0.2 + 2 * 0.065"
									},
									1
								},
								
								{
									
									{
										0.87,
										"0.2 + 2 * 0.065"
									},
									1
								},
								{},
								
								{
									
									{
										0.86000001,
										"0.2 + 3 * 0.065"
									},
									1
								},
								
								{
									
									{
										0.87,
										"0.2 + 3 * 0.065"
									},
									1
								},
								{},
								
								{
									
									{
										0.86000001,
										"0.2 + 4 * 0.065"
									},
									1
								},
								
								{
									
									{
										0.87,
										"0.2 + 4 * 0.065"
									},
									1
								},
								{},
								
								{
									
									{
										0.85000002,
										"0.2 + 5 * 0.065"
									},
									1
								},
								
								{
									
									{
										0.87,
										"0.2 + 5 * 0.065"
									},
									1
								},
								{}
							};
						};
						class AltStatic50
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.88,0.183},
								1
							};
							right[]=
							{
								{0.92000002,0.183},
								1
							};
							down[]=
							{
								{0.88,0.213},
								1
							};
						};
						class AltStatic0
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.88,0.50800002},
								1
							};
							right[]=
							{
								{0.92000002,0.50800002},
								1
							};
							down[]=
							{
								{0.88,0.53799999},
								1
							};
						};
					};
					class SpeedGroup
					{
						condition="speed-2.78";
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									"SliderSpeedSource",
									{0.015,0.0099999998},
									1
								},
								
								{
									"SliderSpeedSource",
									{0,0},
									1
								},
								
								{
									"SliderSpeedSource",
									{0.015,-0.0099999998},
									1
								},
								
								{
									"SliderSpeedSource",
									{0.015,0.0099999998},
									1
								},
								{},
								
								{
									{0.25,0.2},
									1
								},
								
								{
									{0.25,0.52499998},
									1
								},
								{},
								
								{
									{0.25,0.2},
									1
								},
								
								{
									{0.23,0.2},
									1
								},
								{},
								
								{
									{0.23999999,0.26499999},
									1
								},
								
								{
									{0.23,0.26499999},
									1
								},
								{},
								
								{
									{0.23999999,0.33000001},
									1
								},
								
								{
									{0.23,0.33000001},
									1
								},
								{},
								
								{
									{0.23999999,0.39500001},
									1
								},
								
								{
									{0.23,0.39500001},
									1
								},
								{},
								
								{
									{0.23999999,0.46000001},
									1
								},
								
								{
									{0.23,0.46000001},
									1
								},
								{},
								
								{
									{0.25,0.52499998},
									1
								},
								
								{
									{0.23,0.52499998},
									1
								},
								{}
							};
						};
						class SpeedStatic500
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.22,0.183},
								1
							};
							right[]=
							{
								{0.25999999,0.183},
								1
							};
							down[]=
							{
								{0.22,0.213},
								1
							};
						};
						class SpeedStatic0
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.22,0.50800002},
								1
							};
							right[]=
							{
								{0.25999999,0.50800002},
								1
							};
							down[]=
							{
								{0.22,0.53799999},
								1
							};
						};
					};
					class HeadingNumber
					{
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{0.57999998,0},
							1
						};
						down[]=
						{
							{0.5,0.050000001},
							1
						};
					};
					class HeadingHeadNumber
					{
						source="cameraDir";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.057999998},
							1
						};
						right[]=
						{
							{0.57999998,0.057999998},
							1
						};
						down[]=
						{
							{0.5,0.108},
							1
						};
					};
					class HeadingGroupLeft
					{
						clipTL[]={0,0};
						clipBR[]={0.44999999,1};
						class HeadingScale
						{
							horizontal=1;
							source="heading";
							sourceScale=0.1;
							width=4;
							NeverEatSeaWeed=1;
							top=0.30000001;
							bottom=0.69999999;
							lineXleft=0.11;
							lineYright=0.1;
							lineXleftMajor=0.11;
							lineYrightMajor=0.090000004;
							majorLineEach=2;
							numberEach=2;
							step=0.5;
							stepSize=0.055555601;
							align="center";
							scale=1;
							pos[]=
							{
								0.30000001,
								"0.00 + 0.05"
							};
							right[]=
							{
								0.36000001,
								"0.00 + 0.05"
							};
							down[]=
							{
								0.30000001,
								"0.04 + 0.05"
							};
						};
					};
					class HeadingGroupRight: HeadingGroupLeft
					{
						clipTL[]={0.55000001,0};
						clipBR[]={1,1};
						class HeadingScale: HeadingScale;  //found empty after stripping
					};
					class Static
					{
						width=4;
						points[]=
						{
							
							{
								{0.46200001,0.064999998},
								1
							},
							
							{
								{0.53799999,0.064999998},
								1
							},
							
							{
								{0.55800003,0.085000001},
								1
							},
							
							{
								{0.53799999,0.105},
								1
							},
							
							{
								{0.46200001,0.105},
								1
							},
							
							{
								{0.442,0.085000001},
								1
							},
							
							{
								{0.46200001,0.064999998},
								1
							},
							{},
							
							{
								{0.44499999,0.0049999999},
								1
							},
							
							{
								{0.55500001,0.0049999999},
								1
							},
							
							{
								{0.55500001,0.045000002},
								1
							},
							
							{
								{0.44499999,0.045000002},
								1
							},
							
							{
								{0.44499999,0.0049999999},
								1
							},
							{},
							
							{
								"HorizonBank2",
								{0,-0.0019797001},
								1
							},
							
							{
								"HorizonBank2",
								{0.001,-0.00171442},
								1
							},
							
							{
								"HorizonBank2",
								{0.001732,-0.00098984805},
								1
							},
							
							{
								"HorizonBank2",
								{0.0020000001,0},
								1
							},
							
							{
								"HorizonBank2",
								{0.001732,0.00098984805},
								1
							},
							
							{
								"HorizonBank2",
								{0.001,0.00171442},
								1
							},
							
							{
								"HorizonBank2",
								{0,0.0019797001},
								1
							},
							
							{
								"HorizonBank2",
								{-0.001,0.00171442},
								1
							},
							
							{
								"HorizonBank2",
								{-0.001732,0.00098984805},
								1
							},
							
							{
								"HorizonBank2",
								{-0.0020000001,0},
								1
							},
							
							{
								"HorizonBank2",
								{-0.001732,-0.00098984805},
								1
							},
							
							{
								"HorizonBank2",
								{-0.001,-0.00171442},
								1
							},
							
							{
								"HorizonBank2",
								{0,-0.0019797001},
								1
							},
							{},
							
							{
								"HorizonBank2",
								{0,-0.029695399},
								1
							},
							
							{
								"HorizonBank2",
								{0.015,-0.0257162},
								1
							},
							
							{
								"HorizonBank2",
								{0.025979999,-0.0148477},
								1
							},
							
							{
								"HorizonBank2",
								{0.029999999,0},
								1
							},
							{},
							
							{
								"HorizonBank2",
								{-0.029999999,0},
								1
							},
							
							{
								"HorizonBank2",
								{-0.025979999,-0.0148477},
								1
							},
							
							{
								"HorizonBank2",
								{-0.015,-0.0257162},
								1
							},
							
							{
								"HorizonBank2",
								{0,-0.029695399},
								1
							},
							{},
							
							{
								"HorizonBank2",
								{0.029999999,1.29803e-009},
								1
							},
							
							{
								"HorizonBank2",
								{0.050000001,2.1633799e-009},
								1
							},
							{},
							
							{
								"HorizonBank2",
								{-0.029999999,-3.5411399e-010},
								1
							},
							
							{
								"HorizonBank2",
								{-0.050000001,-5.9019101e-010},
								1
							},
							{},
							
							{
								"WeaponAim",
								{-0.050000001,2.1633799e-009},
								1
							},
							
							{
								"WeaponAim",
								{-0.059999999,2.59606e-009},
								1
							},
							{},
							
							{
								"WeaponAim",
								{0.050000001,-5.9019101e-010},
								1
							},
							
							{
								"WeaponAim",
								{0.059999999,-7.0822898e-010},
								1
							},
							{},
							
							{
								"WeaponAim",
								{-0.025,0.0428617},
								1
							},
							
							{
								"WeaponAim",
								{-0.029999999,0.051433999},
								1
							},
							{},
							
							{
								"WeaponAim",
								{0.025,0.0428617},
								1
							},
							
							{
								"WeaponAim",
								{0.029999999,0.051433999},
								1
							},
							{},
							
							{
								"WeaponAim",
								{-0.043301299,0.0247462},
								1
							},
							
							{
								"WeaponAim",
								{-0.0519615,0.029695399},
								1
							},
							{},
							
							{
								"WeaponAim",
								{0.043301299,0.0247462},
								1
							},
							
							{
								"WeaponAim",
								{0.0519615,0.029695399},
								1
							},
							{},
							
							{
								"SliderVSpeedSource",
								{-0.015,0.0099999998},
								1
							},
							
							{
								"SliderVSpeedSource",
								{0,0},
								1
							},
							
							{
								"SliderVSpeedSource",
								{-0.015,-0.0099999998},
								1
							},
							
							{
								"SliderVSpeedSource",
								{-0.015,0.0099999998},
								1
							},
							{},
							
							{
								
								{
									0.89999998,
									"0.6 - 0.3 * 0.04"
								},
								1
							},
							
							{
								
								{
									0.89999998,
									"0.6 + 6.3 * 0.04"
								},
								1
							},
							{},
							
							{
								
								{
									0.89999998,
									"0.6 + 0 * 0.04"
								},
								1
							},
							
							{
								
								{
									0.92000002,
									"0.6 + 0 * 0.04"
								},
								1
							},
							{},
							
							{
								
								{
									0.91000003,
									"0.6 + 1 * 0.04"
								},
								1
							},
							
							{
								
								{
									0.92000002,
									"0.6 + 1 * 0.04"
								},
								1
							},
							{},
							
							{
								
								{
									0.91000003,
									"0.6 + 2 * 0.04"
								},
								1
							},
							
							{
								
								{
									0.92000002,
									"0.6 + 2 * 0.04"
								},
								1
							},
							{},
							
							{
								
								{
									0.89999998,
									"0.6 + 3 * 0.04"
								},
								1
							},
							
							{
								
								{
									0.92000002,
									"0.6 + 3 * 0.04"
								},
								1
							},
							{},
							
							{
								
								{
									0.91000003,
									"0.6 + 4 * 0.04"
								},
								1
							},
							
							{
								
								{
									0.92000002,
									"0.6 + 4 * 0.04"
								},
								1
							},
							{},
							
							{
								
								{
									0.91000003,
									"0.6 + 5 * 0.04"
								},
								1
							},
							
							{
								
								{
									0.92000002,
									"0.6 + 5 * 0.04"
								},
								1
							},
							{},
							
							{
								
								{
									0.89999998,
									"0.6 + 6 * 0.04"
								},
								1
							},
							
							{
								
								{
									0.92000002,
									"0.6 + 6 * 0.04"
								},
								1
							},
							{},
							
							{
								{0.31,0.112},
								1
							},
							
							{
								{0.69,0.112},
								1
							},
							{}
						};
					};
					class Weapons
					{
						source="weapon";
						sourceScale=1;
						align="right";
						scale=0.5;
						pos[]=
						{
							{0.1,0.93000001},
							1
						};
						right[]=
						{
							
							{
								"0.16 - 0.02",
								0.93000001
							},
							1
						};
						down[]=
						{
							{0.1,0.97000003},
							1
						};
					};
					class Ammo
					{
						source="ammo";
						sourceScale=1;
						align="right";
						scale=0.5;
						pos[]=
						{
							{0.1,0.88},
							1
						};
						right[]=
						{
							
							{
								"0.16 - 0.02",
								0.88
							},
							1
						};
						down[]=
						{
							{0.1,0.92000002},
							1
						};
					};
					class cmWeapons
					{
						source="cmweapon";
						sourceScale=1;
						align="left";
						scale=0.5;
						pos[]=
						{
							{0.89999998,0.93000001},
							1
						};
						right[]=
						{
							{0.94,0.93000001},
							1
						};
						down[]=
						{
							{0.89999998,0.97000003},
							1
						};
					};
					class cmAmmo
					{
						source="cmammo";
						sourceScale=1;
						align="left";
						scale=0.5;
						pos[]=
						{
							{0.89999998,0.88},
							1
						};
						right[]=
						{
							{0.94,0.88},
							1
						};
						down[]=
						{
							{0.89999998,0.92000002},
							1
						};
					};
				};
			};
		};
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
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
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F
	{
		_generalMacro="Heli_Light_02_unarmed_base_F";
		forceInGarage=1;
		availableForSupportTypes[]=
		{
			"Drop",
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
		cost=700000;
		enableSweep=0;
	};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F
	{
		_generalMacro="Heli_Light_02_dynamicLoadout_base_F";
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonWeapon_2000Rnd_65x39_belt";
						hardpoints[]=
						{
							"O_SKYFIRE",
							"DAGR",
							"DAR",
							"I_ORCA_RIGHT_PYLON",
							"20MM_TWIN_CANNON",
							"SCALPEL_1RND_EJECTOR",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonRight1: PylonLeft1
					{
						attachment="PylonRack_12Rnd_PG_missiles";
						mirroredMissilePos=1;
						hardpoints[]=
						{
							"O_SKYFIRE",
							"DAGR",
							"DAR",
							"20MM_TWIN_CANNON",
							"SCALPEL_1RND_EJECTOR",
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
							"PylonWeapon_2000Rnd_65x39_belt",
							"PylonRack_12Rnd_PG_missiles"
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
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles"
						};
					};
				};
			};
		};
	};
	class O_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F
	{
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
					"indicatoraltbaro",
					7.1700001
				},
				
				{
					"indicatoraltradar",
					-0.13
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"watchhour",
					0.20999999
				},
				
				{
					"watchminute",
					0.52999997
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
					"horizonbank",
					0
				},
				
				{
					"horizondive",
					0.050000001
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
					"tailrotorimpacthide",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"horizont1_bank",
					0
				},
				
				{
					"horizont1_pitch",
					0.050000001
				},
				
				{
					"horizont2_dive",
					0.050000001
				},
				
				{
					"horizont2_bank",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"horizon2_bank_b",
					0
				},
				
				{
					"horizont3_dive",
					0.050000001
				},
				
				{
					"horizont3_bank",
					0
				},
				
				{
					"horizon3_bank_b",
					0
				},
				
				{
					"indicatorfuel",
					1
				},
				
				{
					"monitors_on",
					0
				},
				
				{
					"indicatorcompass3",
					0
				},
				
				{
					"indicatorcompass4",
					0
				},
				
				{
					"dvere1",
					0
				},
				
				{
					"dvere1_posunz",
					0
				},
				
				{
					"dvere1_hide",
					0
				},
				
				{
					"dvere2",
					0
				},
				
				{
					"dvere2_posunz",
					0
				},
				
				{
					"dvere2_hide",
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
				},
				
				{
					"damagehideglass11",
					0
				},
				
				{
					"damagehideglass12",
					0
				},
				
				{
					"damagehideglass13",
					0
				},
				
				{
					"damagehideglass14",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_1",
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
					"machinegun",
					0.33000001
				},
				
				{
					"zaslehrot",
					780
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
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"hideweapons",
					0
				},
				
				{
					"hideminigun",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"hiderockets_dl",
					1
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_r",
				"light_l",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.175;
			verticalOffsetWorld=0.0049999999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="O_Heli_Light_02_dynamicLoadout_F";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		side=0;
		accuracy=1.5;
		threat[]={0.80000001,1,0.80000001};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport",
			"CAS_Heli"
		};
		textureList[]=
		{
			"Opfor",
			1
		};
	};
	class O_Heli_Light_02_F: Heli_Light_02_base_F
	{
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
					"indicatoraltbaro",
					7.1700001
				},
				
				{
					"indicatoraltradar",
					-0.13
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"watchhour",
					0.20999999
				},
				
				{
					"watchminute",
					0.52999997
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
					"horizonbank",
					0
				},
				
				{
					"horizondive",
					0.050000001
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
					"tailrotorimpacthide",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"horizont1_bank",
					0
				},
				
				{
					"horizont1_pitch",
					0.050000001
				},
				
				{
					"horizont2_dive",
					0.050000001
				},
				
				{
					"horizont2_bank",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"horizon2_bank_b",
					0
				},
				
				{
					"horizont3_dive",
					0.050000001
				},
				
				{
					"horizont3_bank",
					0
				},
				
				{
					"horizon3_bank_b",
					0
				},
				
				{
					"indicatorfuel",
					1
				},
				
				{
					"monitors_on",
					0
				},
				
				{
					"indicatorcompass3",
					0
				},
				
				{
					"indicatorcompass4",
					0
				},
				
				{
					"dvere1",
					0
				},
				
				{
					"dvere1_posunz",
					0
				},
				
				{
					"dvere1_hide",
					0
				},
				
				{
					"dvere2",
					0
				},
				
				{
					"dvere2_posunz",
					0
				},
				
				{
					"dvere2_hide",
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
				},
				
				{
					"damagehideglass11",
					0
				},
				
				{
					"damagehideglass12",
					0
				},
				
				{
					"damagehideglass13",
					0
				},
				
				{
					"damagehideglass14",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_1",
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
					"machinegun",
					0.33000001
				},
				
				{
					"zaslehrot",
					494
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
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"hideweapons",
					0
				},
				
				{
					"hideminigun",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"hiderockets_dl",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_r",
				"light_l",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.175;
			verticalOffsetWorld=0.0049999999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="O_Heli_Light_02_F";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		side=0;
		accuracy=1.5;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport",
			"CAS_Heli"
		};
		textureList[]=
		{
			"Opfor",
			1
		};
	};
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
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
					"indicatoraltbaro",
					7.1700001
				},
				
				{
					"indicatoraltradar",
					-0.13
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"watchhour",
					0.20999999
				},
				
				{
					"watchminute",
					0.52999997
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
					"horizonbank",
					0
				},
				
				{
					"horizondive",
					0.050000001
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
					"tailrotorimpacthide",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"horizont1_bank",
					0
				},
				
				{
					"horizont1_pitch",
					0.050000001
				},
				
				{
					"horizont2_dive",
					0.050000001
				},
				
				{
					"horizont2_bank",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"horizon2_bank_b",
					0
				},
				
				{
					"horizont3_dive",
					0.050000001
				},
				
				{
					"horizont3_bank",
					0
				},
				
				{
					"horizon3_bank_b",
					0
				},
				
				{
					"indicatorfuel",
					1
				},
				
				{
					"monitors_on",
					0
				},
				
				{
					"indicatorcompass3",
					0
				},
				
				{
					"indicatorcompass4",
					0
				},
				
				{
					"dvere1",
					0
				},
				
				{
					"dvere1_posunz",
					0
				},
				
				{
					"dvere1_hide",
					0
				},
				
				{
					"dvere2",
					0
				},
				
				{
					"dvere2_posunz",
					0
				},
				
				{
					"dvere2_hide",
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
				},
				
				{
					"damagehideglass11",
					0
				},
				
				{
					"damagehideglass12",
					0
				},
				
				{
					"damagehideglass13",
					0
				},
				
				{
					"damagehideglass14",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_1",
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
					"machinegun",
					0
				},
				
				{
					"zaslehrot",
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
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"hideweapons",
					1
				},
				
				{
					"hideminigun",
					1
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"hiderockets_dl",
					1
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_r",
				"light_l",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.175;
			verticalOffsetWorld=0.0049999999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="O_Heli_Light_02_unarmed_F";
		displayName="$STR_A3_CfgVehicles_O_Heli_Light_02_Unarmed_F0";
		side=0;
		accuracy=1.5;
		textureList[]=
		{
			"Black",
			1
		};
	};
	class O_Heli_Light_02_v2_F: Heli_Light_02_base_F
	{
		features="Randomization: No						<br />Camo selections: 2 - the whole exterior, missile pod						<br />Script door sources: No						<br />Script animations: Doors, HideWeapon, proxy						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: Slingloads up to 2000 kg						<br />Cargo proxy indexes: 1 to 8";
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
					"indicatoraltbaro",
					7.1700001
				},
				
				{
					"indicatoraltradar",
					-0.13
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorvertspeed",
					0
				},
				
				{
					"indicatorcompass",
					0
				},
				
				{
					"indicatorcompass2",
					0
				},
				
				{
					"watchhour",
					0.20999999
				},
				
				{
					"watchminute",
					0.52999997
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
					"horizonbank",
					0
				},
				
				{
					"horizondive",
					0.050000001
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
					"tailrotorimpacthide",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"horizont1_bank",
					0
				},
				
				{
					"horizont1_pitch",
					0.050000001
				},
				
				{
					"horizont2_dive",
					0.050000001
				},
				
				{
					"horizont2_bank",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm2",
					0
				},
				
				{
					"horizon2_bank_b",
					0
				},
				
				{
					"horizont3_dive",
					0.050000001
				},
				
				{
					"horizont3_bank",
					0
				},
				
				{
					"horizon3_bank_b",
					0
				},
				
				{
					"indicatorfuel",
					1
				},
				
				{
					"monitors_on",
					0
				},
				
				{
					"indicatorcompass3",
					0
				},
				
				{
					"indicatorcompass4",
					0
				},
				
				{
					"dvere1",
					0
				},
				
				{
					"dvere1_posunz",
					0
				},
				
				{
					"dvere1_hide",
					0
				},
				
				{
					"dvere2",
					0
				},
				
				{
					"dvere2_posunz",
					0
				},
				
				{
					"dvere2_hide",
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
				},
				
				{
					"damagehideglass11",
					0
				},
				
				{
					"damagehideglass12",
					0
				},
				
				{
					"damagehideglass13",
					0
				},
				
				{
					"damagehideglass14",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_1",
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
					"machinegun",
					0.33000001
				},
				
				{
					"zaslehrot",
					106
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
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"hideweapons",
					0
				},
				
				{
					"hideminigun",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"hiderockets_dl",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_r",
				"light_l",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.175;
			verticalOffsetWorld=0.0049999999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro="O_Heli_Light_02_v2_F";
		displayName="$STR_A3_CfgVehicles_O_Heli_Light_02_v2_F0";
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		side=0;
		accuracy=1.5;
		weapons[]=
		{
			"LMG_Minigun_heli",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"2000Rnd_65x39_Belt_Tracer_Green_Splash",
			"12Rnd_missiles",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport",
			"CAS_Heli"
		};
		textureList[]=
		{
			"Blackcustom",
			1
		};
	};
};
