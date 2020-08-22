class CfgPatches
{
	class rhs_c_bmp3
	{
		units[]=
		{
			"rhs_bmp3_msv",
			"rhs_bmp3_late_msv",
			"rhs_bmp3m_msv",
			"rhs_bmp3mera_msv"
		};
		weapons[]={};
		name="BMP-3 IFV";
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
			class bmp3_init
			{
				file="\rhsafrf\addons\rhs_c_bmp3\scripts\rhs_bmp3_init.sqf";
				description="BMP3 decal init";
			};
			class bmp3_autoloader
			{
				file="\rhsafrf\addons\rhs_c_bmp3\scripts\rhs_autoloader_bmp3.sqf";
				description="Autoloader gun anim & stub ejection for BMP3";
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
	class rhs_bmp3tank_base: Tank_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSBMP3NumberPlaces,'DefaultRed']",
			"['Label',cRHSBMP3PlnSymPlaces, 'Platoon',12]"
		};
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		accuracy=0.30000001;
		side=0;
		class MFD
		{
			class MFD_Left
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="rhs_digital_font_var";
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0.07,0.14,0.07};
					alpha=0.12;
					condition="on";
					class FuelNumber
					{
						source="fuel";
						sourceScale=677;
						scale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.205},
							1
						};
						right[]=
						{
							{0.755,0.205},
							1
						};
						down[]=
						{
							{0.65499997,0.51499999},
							1
						};
					};
				};
			};
			class MFD_Right
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="rhs_digital_font_var";
				class Bones;  //found empty after stripping
				class Draw
				{
					color[]={0.07,0.14,0.07};
					alpha=0.12;
					condition="on";
					class rpmNumber
					{
						source="rpm";
						sourceScale=1;
						scale=1;
						refreshRate=0.050000001;
						align="left";
						pos[]=
						{
							{0.30500001,0.205},
							1
						};
						right[]=
						{
							{0.405,0.205},
							1
						};
						down[]=
						{
							{0.30500001,0.51499999},
							1
						};
					};
					class SpeedNumber
					{
						source="speed";
						sourceScale=3.5999999;
						scale=1;
						refreshRate=0.050000001;
						align="left";
						pos[]=
						{
							{0.79500002,0.205},
							1
						};
						right[]=
						{
							{0.89499998,0.205},
							1
						};
						down[]=
						{
							{0.79500002,0.51499999},
							1
						};
					};
				};
			};
		};
		mapsize=7.0999999;
		typicalCargo[]=
		{
			"rhs_msv_crew_commander",
			"rhs_msv_crew",
			"rhs_msv_crew",
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
		transportsoldier=7;
		unloadInCombat=1;
		weaponsGroup1="1 + 16";
		weaponsGroup2=128;
		weaponsGroup3=2;
		weaponsGroup4=4;
		tf_range_api=35000;
		waterPPInVehicle=0;
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
		driverForceOptics=0;
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=0;
		LODDriverOpticsOut=0;
		headGforceLeaningFactor[]={0.015,0.011,0.015};
		simulation="tankX";
		maxSpeed=70;
		normalSpeedForwardCoef=0.73000002;
		slowSpeedForwardCoef=0.34999999;
		fuelCapacity=30;
		RHS_fuelCapacity=672;
		tankTurnForce=280000;
		tankTurnForceAngMinSpd=0.60000002;
		tankTurnForceAngSpd=0.81999999;
		accelAidForceCoef=4;
		accelAidForceYOffset=-4;
		accelAidForceSpd=2.8299999;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.050000001;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=0.69999999;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		waterResistanceCoef=0.15000001;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		torqueCurve[]=
		{
			{0,0},
			{0.229167,0.648871},
			{0.40000001,0.891855},
			{0.55590302,1},
			{0.65694398,0.993155},
			{0.81388903,0.973306},
			{0.90486097,0.92334002},
			{1.05,0}
		};
		engineMOI=18;
		enginePower=368;
		peakTorque=1461;
		minOmega=84;
		maxOmega=301;
		idleRpm=800;
		redRpm=2880;
		thrustDelay=0.60000002;
		clutchStrength=30;
		brakeIdleSpeed=1.78;
		latency=0.60000002;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineLosses=25;
		transmissionLosses=15;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.347222,0.347222,0,0.9375,0.347222,0.88541698,0.65972197,0.95486099,0.65972197,1,0.65972197};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.51,
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
				-10,
				"N",
				0,
				"D1",
				10
			};
			TransmissionRatios[]=
			{
				"High",
				19
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.30000001;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				steering=0;
				width=0.315;
				mass=120;
				MOI=7.5615001;
				maxBrakeTorque=4000;
				sprungMass=1333.33;
				springStrength=127500;
				springDamperRate=11000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				dampingRate=1034;
				dampingRateInAir=1034;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=32000;
				frictionVsSlipGraph[]=
				{
					{0,0.64999998},
					{0.18000001,1},
					{0.69999999,0.94999999}
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
		incomingMissileDetectionSystem=0;
		tracksSpeed=1.35;
		wheelCircumference=1.9220001;
		attenuationEffectType="TankAttenuation";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_APC_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_APC_p"
				};
			};
		};
		nameSound="veh_vehicle_APC_s";
		extCameraPosition[]={0,2,-9};
		HeadAimDown=0;
		cost=1500000;
		enableGPS=0;
		class ViewPilot: ViewPilot
		{
			initAngleX=-12;
			minAngleY=-110;
			maxAngleY=110;
		};
		armor=200;
		armorStructural=500;
		fuelExplosionPower=0.5;
		damageResistance=0.02;
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
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.25;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.068999998;
				explosionShielding=0.0089999996;
				radius=0.17;
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
			class HitFuel
			{
				armor=1.2;
				explosionShielding=0.001;
				material=-1;
				passThrough=0;
				name="palivo";
				radius=0.050000001;
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
						commanding=4;
						primaryObserver=1;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-5;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							3.1622777,
							1,
							30
						};
						memoryPointGun="usti hlavne3";
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
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.101;
							minFov=0.102;
							maxFov=0.102;
							visionMode[]=
							{
								"Normal"
							};
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								initFov=0.14;
								minFov=0.14;
								maxFov=0.14;
							};
							class PZU: ViewOptics
							{
								initFov=0.175;
								minFov=0.175;
								maxFov=0.175;
							};
							class Night: Wide
							{
								initFov=0.166667;
								minFov=0.166667;
								maxFov=0.166667;
								visionMode[]=
								{
									"NVG"
								};
							};
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
						startEngine=0;
						LodOpticsIn=0;
						LodOpticsOut=0;
						usePiP=2;
						class HitPoints
						{
							class HitTurretCom
							{
								armor=0.30000001;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
								isTurret=1;
							};
							class HitGunCom
							{
								armor=0.30000001;
								material=-1;
								name="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.15000001;
								isGun=1;
							};
						};
						selectionFireAnim="";
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
					"rhs_weap_2a70",
					"rhs_weap_2a72",
					"rhs_weap_pkt_bmd_coax",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3UOF17_22",
					"rhs_mag_9m117_8",
					"rhs_mag_3uof8_305",
					"rhs_mag_3ubr6_195",
					"rhs_mag_762x54mm_2000",
					"rhs_mag_3d17_6",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				animationSourceStickX="joystick_gunner_X";
				animationSourceStickY="joystick_gunner_Y";
				maxHorizontalRotSpeed=0.55000001;
				maxVerticalRotSpeed=0.55000001;
				minElev=-5;
				maxElev=60;
				initElev=10;
				startEngine=0;
				canUseScanners=0;
				allowTabLock=0;
				class OpticsIn
				{
					class DayMain: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Day2: DayMain
					{
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
					};
					class Day3: DayMain
					{
						initFov=0.050000001;
						minFov=0.050000001;
						maxFov=0.050000001;
					};
					class night: DayMain
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
				forceHideGunner=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				usePiP=2;
				headAimDown=15;
				armorLights=0.1;
				class ViewGunner
				{
					initAngleX=-15;
					minAngleX=-65;
					maxAngleX=85;
					initAngleY=-5;
					minAngleY=-150;
					maxAngleY=150;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				commanding=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="vez";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
						isGun=1;
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
			class GPMGTurret1: NewTurret
			{
				animationSourceHatch="hatchR";
				proxyIndex=8;
				selectionFireAnim="zasleh3";
				hasGunner=1;
				isPersonTurret=1;
				showAsCargo=1;
				proxyType="CPCargo";
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-100;
				maxOutTurn=120;
				initOutTurn=0;
				usePip=1;
				dontCreateAI=1;
				forceHideGunner=0;
				primaryObserver=0;
				primaryGunner=0;
				commanding=0;
				LodOpticsIn=0;
				LodOpticsOut=0;
				minElev=-24;
				maxElev=35;
				minTurn=-10;
				maxTurn=10;
				weapons[]=
				{
					"rhs_weap_pkt_bmd_bow1"
				};
				magazines[]=
				{
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250"
				};
				ejectDeadGunner=0;
				memoryPointGun="memoryPointGun2";
				usePreciseGetInAction=0;
				preciseGetInOut=0;
				startEngine=0;
				class Turrets;  //found empty after stripping
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
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
					initFov=0.166666;
					minFov=0.166666;
					maxFov=0.166666;
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-150},
						{45,150}
					};
					limitsArrayBottom[]=
					{
						{-24,-150},
						{-24,150}
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
				class HitPoints
				{
					class HitTurret_Bow1
					{
						armor=0.5;
						material=-1;
						name="hit_obsgun2";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun_Bow1
					{
						armor=0.60000002;
						material=-1;
						name="hit_obsgun2";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
						isGun=1;
					};
				};
			};
			class GPMGTurret2: GPMGTurret1
			{
				proxyIndex=9;
				animationSourceHatch="hatchL";
				weapons[]=
				{
					"rhs_weap_pkt_bmd_bow2"
				};
				commanding=1;
				memoryPointGun="memoryPointGun3";
				selectionFireAnim="zasleh4";
				personTurretAction="vehicle_turnout_2";
				class HitPoints
				{
					class HitTurret_Bow2
					{
						armor=0.5;
						material=-1;
						name="hit_obsgun3";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun_Bow2
					{
						armor=0.60000002;
						material=-1;
						name="hit_obsgun3";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
						isGun=1;
					};
				};
			};
		};
		class textureSources
		{
			class standard;  //found empty after stripping
			class rhs_sand: standard;  //found empty after stripping
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHSBMP3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				class values
				{
					class DefaultRed
					{
						name="Default (Red)";
						value="DefaultRed";
					};
					class Default
					{
						name="Default";
						value="Default";
						defaultValue="Default";
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
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSBMP3NumberPlaces}else{[_this, [['Number', cRHSBMP3NumberPlaces, _this getVariable ['rhs_decalNumber_type','DefaultRed'], _value] ] ] call rhs_fnc_decalsInit}};";
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
				};
			};
			class rhs_decalPlatoon
			{
				tooltip="Set platoon symbol located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHSBMP3PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
		};
		class Damage;  //found empty after stripping
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
		armorLights=0.1;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_bmp3_init;";
				fired="_this call RHS_fnc_bmp3_autoloader;";
				hitpart="_this call rhs_fnc_hitSpall";
				engine="[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay";
				getOut="_this call rhs_fnc_hatchAbandon";
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
	class rhs_bmp3_msv: rhs_bmp3tank_base;  //found empty after stripping
	class rhs_bmp3_late_msv: rhs_bmp3tank_base
	{
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_sand: rhs_sand;  //found empty after stripping
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics;  //found empty after stripping
				};
				magazines[]=
				{
					"rhs_mag_3UOF17_22",
					"rhs_mag_9m117m_8",
					"rhs_mag_3uof8_305",
					"rhs_mag_3ubr11_195",
					"rhs_mag_762x54mm_2000",
					"rhs_mag_3d17_6",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
			};
			class GPMGTurret1: GPMGTurret1;  //found empty after stripping
			class GPMGTurret2: GPMGTurret2;  //found empty after stripping
		};
	};
	class rhs_bmp3m_msv: rhs_bmp3tank_base
	{
		enableGPS=1;
		reportOwnPosition=1;
		enginePower=478;
		peakTorque=1650;
		torqueCurve[]=
		{
			{0,0},
			{0.22889601,0.64909101},
			{0.40000001,0.89212102},
			{0.51915598,1},
			{0.657143,0.99272698},
			{0.81396103,0.970303},
			{0.94285703,0.95212102},
			{1.05,0}
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				dampingRate=1034;
				dampingRateInAir=1034;
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
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_sand: rhs_sand;  //found empty after stripping
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
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
								class MinimapDisplay
								{
									componentType="MinimapDisplayComponent";
									resource="RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
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
								class MinimapDisplay
								{
									componentType="MinimapDisplayComponent";
									resource="RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
								};
							};
						};
					};
				};
				magazines[]=
				{
					"rhs_mag_3UOF191_22",
					"rhs_mag_9m117m1_8",
					"rhs_mag_3uof8_305",
					"rhs_mag_3ubr11_195",
					"rhs_mag_762x54mm_2000",
					"rhs_mag_3d17_6",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
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
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
					};
					class Medium: Wide
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow: Medium
					{
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Narrow2: Narrow
					{
						directionStabilized=1;
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
			class GPMGTurret1: GPMGTurret1;  //found empty after stripping
			class GPMGTurret2: GPMGTurret2;  //found empty after stripping
		};
	};
	class rhs_bmp3mera_msv: rhs_bmp3m_msv
	{
		class HitPoints: HitPoints
		{
			class Armor_Composite_50
			{
				armor=999;
				material=-1;
				name="Armor_CE_50_Hit";
				armorComponent="Armor_CE_50";
				simulation="RHS_Composite_50";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
		};
		class textureSources: textureSources
		{
			class standard: standard;  //found empty after stripping
			class rhs_sand: rhs_sand;  //found empty after stripping
		};
	};
};
