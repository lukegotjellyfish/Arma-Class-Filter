	class RHS_su25_base: O_Plane_CAS_02_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSAIRSU25NumberPlaces,'AviaRed']",
			"['Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt']",
			"['Label', cRHSAIRSU25SidePlaces, 'Su25Ex']"
		};
		irTarget=1;
		irTargetSize=1;
		radarTarget=1;
		radarTargetSize=1;
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,6.8000002,-2.04};
		LESH_WheelOffset[]={0,-0.69999999};
		typicalCargo[]=
		{
			"rhs_pilot"
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		icon="\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_su25.paa";
		displayname="$STR_RHS_SU25_Name";
		driverLeftLegAnimName="pedal_L";
		driverRightLegAnimName="pedal_R";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInDriverPrecise="pos driver";
		driverWeaponsInfoType="RHS_RscOptics_Su25_KlenPS";
		HeadAimDown=6;
		headGforceLeaningFactor[]={0.0049999999,0.001,0.015};
		driverCanSee="2+4+8+16";
		allowTabLock=0;
		driverCanEject=1;
		driverCompartments=1;
		class EjectionSystem;  //found empty after stripping
		ejectDamageLimit=1;
		memoryPointDriverOptics="pilotCamera";
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
					initFov="(10 / 120)";
					minFov="(60 / 120)";
					maxFov="(60 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
			};
			minTurn=-12;
			maxTurn=12;
			initTurn=0;
			minElev=-6;
			maxElev=16;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-0;
		};
		weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"rhs_weap_klen_ps",
			"rhs_weap_GSh302"
		};
		magazines[]=
		{
			"rhs_lasermag",
			"rhs_mag_gsh30_bt_250"
		};
		weaponsGroup1=128;
		weaponsGroup4=64;
		memoryPointGun[]=
		{
			"kulomet",
			"kulomet2"
		};
		gunBeg[]=
		{
			"muzzle_1",
			"muzzle_2"
		};
		gunEnd[]=
		{
			"chamber_1",
			"chamber_2"
		};
		selectionFireAnim="zasleh";
		memoryPointLDust="levy prach";
		memoryPointRDust="pravy prach";
		memoryPointLRocket="rocket_1";
		memoryPointRRocket="rocket_2";
		memoryPointLMissile="missile_1";
		memoryPointRMissile="missile_2";
		memorypointcm[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memorypointcmdir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		selectionDamage="trup";
		selectionShowDamage="poskozeni";
		armor=60;
		damageResistance=0.0048000002;
		armorStructural=2;
		epeImpulseDamageCoef=1;
		class Hitpoints
		{
			class HitHull
			{
				armor=999;
				explosionShielding=0;
				passThrough=0.0099999998;
				minimalHit=1;
				radius=0.15000001;
				material=-1;
				name="hit_hull";
				depends="Total";
			};
			class HitAvionics
			{
				armor=1;
				explosionShielding=0.60000002;
				passThrough=0.050000001;
				minimalHit=0.1;
				radius=0.079999998;
				material=-1;
				name="hit_avionics";
				depends="0";
			};
			class HitEngine
			{
				armor=1;
				explosionShielding=0.25;
				passThrough=0.2;
				minimalHit=0.0099999998;
				radius=0.07;
				material=-1;
				name="hit_engine_l";
				depends="0";
			};
			class HitEngine2
			{
				armor=1;
				explosionShielding=0.25;
				passThrough=0.2;
				minimalHit=0.0099999998;
				radius=0.07;
				material=-1;
				name="hit_engine_r";
				depends="0";
			};
			class HitFuel
			{
				armor=1.4;
				explosionShielding=0.2;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				material=-1;
				name="hit_fuel";
				depends="0";
			};
			class HitFuel_left
			{
				armor=1;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				material=-1;
				name="hit_fuel_wing_l";
				depends="0";
			};
			class HitFuel_right
			{
				armor=1;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.1;
				material=-1;
				name="hit_fuel_wing_r";
				depends="0";
			};
			class HitFuel2
			{
				armor=999;
				explosionShielding=0;
				passThrough=0.1;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="(HitFuel_left+HitFuel_right)*0.5";
			};
			class HitLAileron_link
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_aileron_link_l";
				depends="0";
			};
			class HitRAileron_link
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_aileron_link_r";
				depends="0";
			};
			class HitLAileron
			{
				armor=0.60000002;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				material=-1;
				name="hit_aileron_l";
				depends="HitLAileron_link*0.7";
			};
			class HitRAileron
			{
				armor=0.60000002;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				material=-1;
				name="hit_aileron_r";
				depends="HitRAileron_link*0.7";
			};
			class HitControlRear
			{
				armor=0.60000002;
				explosionShielding=0.1;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.039999999;
				material=-1;
				name="hit_control_rear";
				depends="0";
			};
			class HitLCElevator
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_elevator_l";
				depends="HitControlRear";
			};
			class HitRElevator
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_elevator_r";
				depends="HitControlRear";
			};
			class HitLCRudder
			{
				armor=0.60000002;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.12;
				material=-1;
				name="hit_rudder";
				depends="HitControlRear";
			};
			class HitGlass1
			{
				armor=0.5;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.30000001;
				material=-1;
				name="glass1";
				depends="0";
			};
			class HitGlass2
			{
				armor=0.5;
				explosionShielding=0.60000002;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.30000001;
				material=-1;
				name="glass2";
				depends="0";
			};
			class Ind_Fire1
			{
				armor=999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="HitEngine*0.5";
			};
			class Ind_Fire2
			{
				armor=999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="HitEngine2*0.5";
			};
			class Ind_Hydr_L
			{
				armor=999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="(HitLAileron+HitLCElevator+HitLCRudder)*0.5";
			};
			class Ind_Hydr_R
			{
				armor=999;
				explosionShielding=0;
				passThrough=0;
				minimalHit=1;
				radius=0.0099999998;
				material=-1;
				name="hit_fuel";
				depends="(HitRAileron+HitRElevator)*0.5";
			};
			class HitPylon1
			{
				armor=-30;
				material=-1;
				name="hit_pylon_1";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon2
			{
				armor=-30;
				material=-1;
				name="hit_pylon_2";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon3
			{
				armor=-30;
				material=-1;
				name="hit_pylon_3";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon4
			{
				armor=-30;
				material=-1;
				name="hit_pylon_4";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon5
			{
				armor=-30;
				material=-1;
				name="hit_pylon_5";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon6
			{
				armor=-30;
				material=-1;
				name="hit_pylon_6";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon7
			{
				armor=-30;
				material=-1;
				name="hit_pylon_7";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon8
			{
				armor=-30;
				material=-1;
				name="hit_pylon_8";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon9
			{
				armor=-30;
				material=-1;
				name="hit_pylon_9";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
			class HitPylon10
			{
				armor=-30;
				material=-1;
				name="hit_pylon_10";
				passThrough=0;
				minimalHit=0.80000001;
				explosionShielding=0.1;
				radius=0.75;
			};
		};
		incomingMissileDetectionSystem=8;
		lockDetectionSystem=8;
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"n1",
			"n2",
			"i1",
			"i2",
			"tail_decals"
		};
		hiddenselectionstextures[]=
		{
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_rus_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_rus_co.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"a3\data_f\clear_empty.paa",
			"rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vvs"
				};
			};
			class standard2: standard;  //found empty after stripping
			class Camo: standard
			{
				factions[]=
				{
					"rhs_faction_vvs_c"
				};
			};
			class Camo1: Camo;  //found empty after stripping
			class Camo2: standard;  //found empty after stripping
		};
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Su25_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_KH29",
							"RHS_HP_FAB100",
							"RHS_HP_FAB100_MBD3_U4T",
							"RHS_HP_FAB100_MBD3_U6",
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_O25L",
							"RHS_HP_APU68M3_S24",
							"RHS_HP_B13L",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73"
						};
						attachment="rhs_mag_fab250";
						hitpoint="HitPylon1";
						maxweight=1200;
						UIposition[]={0.31999999,0.34999999};
					};
					class pylon2: pylon1
					{
						UIposition[]={0.31999999,0.2};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_KH25",
							"RHS_HP_FAB100",
							"RHS_HP_FAB100_MBD3_U4T",
							"RHS_HP_FAB100_MBD3_U6",
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_O25L",
							"RHS_HP_APU68M3_S24",
							"RHS_HP_B13L",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73"
						};
						hitpoint="HitPylon3";
						UIposition[]={0.33000001,0.40000001};
					};
					class pylon4: pylon3
					{
						UIposition[]={0.33000001,0.15000001};
						mirroredMissilePos=3;
						hitpoint="HitPylon4";
					};
					class pylon5: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_KH25",
							"RHS_HP_FAB100",
							"RHS_HP_FAB100_MBD3_U4T",
							"RHS_HP_FAB100_MBD3_U6",
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_O25L",
							"RHS_HP_APU68M3_S24",
							"RHS_HP_B13L",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73"
						};
						attachment="rhs_mag_b8m1_s8kom";
						hitpoint="HitPylon5";
						maxweight=1200;
						UIposition[]={0.34,0.44999999};
					};
					class pylon6: pylon5
					{
						UIposition[]={0.34,0.1};
						mirroredMissilePos=5;
						hitpoint="HitPylon6";
					};
					class pylon7: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB100",
							"RHS_HP_FAB100_MBD3_U4T",
							"RHS_HP_FAB100_MBD3_U6",
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_KMGU2",
							"RHS_HP_O25L",
							"RHS_HP_APU68M3_S24",
							"RHS_HP_B13L",
							"RHS_HP_B8M1",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_R73"
						};
						attachment="rhs_mag_b8m1_s8df";
						hitpoint="HitPylon7";
						maxweight=1200;
						UIposition[]={0.34999999,0.5};
					};
					class pylon8: pylon7
					{
						UIposition[]={0.34999999,0.050000001};
						mirroredMissilePos=7;
						hitpoint="HitPylon8";
					};
					class pylon9: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_R60"
						};
						attachment="rhs_mag_R60M";
						hitpoint="HitPylon9";
						maxweight=1200;
						UIposition[]={0.36000001,0.55000001};
					};
					class pylon10: pylon9
					{
						UIposition[]={0.36000001,0};
						mirroredMissilePos=9;
						hitpoint="HitPylon10";
					};
					class cmDispenser
					{
						hardpoints[]=
						{
							"RHS_cm_ASO2",
							"RHS_cm_ASO2_x2",
							"RHS_cm_ASO2_x4"
						};
						attachment="rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight=800;
						UIposition[]={0.625,0.27500001};
					};
				};
				class Presets
				{
					class CAS
					{
						attachment[]=
						{
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support";
					};
					class HeavyCAS
					{
						attachment[]=
						{
							"rhs_mag_b13l_s13b",
							"rhs_mag_b13l_s13b",
							"rhs_mag_b13l_s13t",
							"rhs_mag_b13l_s13t",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Close Air Support (S-13)";
					};
					class GroundSupress_S24B
					{
						attachment[]=
						{
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Ground Supress (S-24B)";
					};
					class Bomb
					{
						attachment[]=
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Bomb (FAB-250)";
					};
					class HeavyBomb
					{
						attachment[]=
						{
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Bomb (FAB-500)";
					};
					class AT
					{
						attachment[]=
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Anti Tank (Kh-25ML)";
					};
					class HeavyAT
					{
						attachment[]=
						{
							"rhs_mag_kh29ML",
							"rhs_mag_kh29ML",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Anti Tank (Kh-29ML)";
					};
					class HeavyATMix
					{
						attachment[]=
						{
							"rhs_mag_kh29ML",
							"rhs_mag_kh29ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Anti Tank (Mixed)";
					};
					class Cluster
					{
						attachment[]=
						{
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="Heavy CAS (S-13)";
					};
					class KMGU
					{
						attachment[]=
						{
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname="KMGU-2";
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar;  //found empty after stripping
				};
			};
			class TransportCountermeasuresComponent;  //found empty after stripping
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRSU25NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default";
						value="NoChange";
					};
					class AviaYellow
					{
						name="Aviation Yellow";
						value="AviaYellow";
					};
					class AviaBlue
					{
						name="Aviation Blue";
						value="AviaBlue";
						defaultValue="AviaBlue";
					};
					class AviaRed
					{
						name="Aviation Red";
						value="AviaRed";
					};
					class AviaWhiteOut
					{
						name="Aviation White Out";
						value="AviaWhiteOut";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
					};
					class Default
					{
						name="Default (White)";
						value="Default";
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
				};
			};
			class rhs_decalNumber
			{
				tooltip="Set side number. 2 numbers are required. Type 0 to hide numbers completly";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				defaultValue="-1";
				expression="if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRSU25NumberPlaces}else{[_this, [['Number', cRHSAIRSU25NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalNoseArt
			{
				tooltip="Define Nose Art texture located near the cabin. Appears on both sides";
				property="rhs_decalNoseArt";
				control="Combo";
				expression="if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt',_value] ] ] call rhs_fnc_decalsInit};";
				defaultValue="-1";
				class values
				{
					class Random
					{
						name="Random";
						value=-1;
						defaultValue=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class Arrows
					{
						name="Aviation emblem";
						value=1;
					};
					class Thunders
					{
						name="Thunders";
						value=2;
					};
					class Eyes
					{
						name="Eyes";
						value=3;
					};
					class Stars
					{
						name="Stars";
						value=4;
					};
				};
			};
			class rhs_decalSideArt: rhs_decalNoseArt
			{
				tooltip="Define Side Art texture located near the jet intake. Appears on both sides";
				property="rhs_decalSideArt";
				expression="if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRSU25SidePlaces, 'Su25Ex',_value] ] ] call rhs_fnc_decalsInit};";
				class values
				{
					class Random
					{
						name="Random";
						value=-1;
						defaultValue=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class Crow
					{
						name="Crow";
						value=1;
					};
					class Russia
					{
						name="Russia emblem";
						value=2;
					};
				};
			};
			class rhs_decalTail
			{
				tooltip="Define tail decal that will be drawn on vehicle";
				property="rhs_decalTail";
				control="Combo";
				expression="[_this,[['Label', cRHSAIRSU25TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
				defaultValue=-1;
				class values
				{
					class Default
					{
						name="Default";
						value=-1;
					};
					class Empty
					{
						name="Empty";
						value=0;
					};
					class VVS
					{
						name="VVS Russia";
						value=3;
						defaultValue=3;
					};
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectPlaneHP";
				engineIndex=0;
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectPlaneHP";
				engineIndex=1;
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_General
				{
					color[]={40,20,20};
					ambient[]={0,0,0};
					intensity=2.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=1.45;
						hardLimitEnd=2.45;
					};
					point="light_general";
				};
			};
		};
		class markerlights
		{
			class GreenStill
			{
				activeLight=0;
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=55;
				blinking=0;
				brightness=0.0099999998;
				flareSize=0.5;
				name="zeleny pozicni";
				useFlare=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
			class RedStill: GreenStill
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
			};
			class WhiteStill: GreenStill
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
			};
			class WhiteBlicking: GreenStill
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				name="bily pozicni blik";
			};
			class RedBlinking: WhiteBlicking
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="cerveny pozicni blik";
			};
		};
		class Damage
		{
			tex[]=
			{
				"rhsafrf\addons\rhs_a2port_air\su25\data\rhs_su25_warningLights_empty_ca.paa",
				"rhsafrf\addons\rhs_a2port_air\su25\data\rhs_su25_warningLights_ca.paa"
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="cerveny pozicni";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="zeleny pozicni";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vapour_R_S";
			};
		};
		threat[]={1,1,1};
		driveOnComponent[]=
		{
			"gear_f1",
			"gear_l1",
			"gear_r1"
		};
		defaultUserMFDvalues[]={0,0,0,0,0,0};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax=1;
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				class Pos10Vector
				{
					pos0[]={0.51999998,0.029999999};
					pos10[]={2.02,1.23};
				};
				color[]={0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						pos[]={0.5,0.5};
					};
					class HorizonBankMGun
					{
						source="HorizonBank";
						min=-6.2831898;
						max=6.2831898;
						minAngle=-360;
						maxAngle=360;
						aspectRatio=0.80000001;
					};
					class HorizonBankReverted
					{
						pos0[]={-0,-0};
						pos10[]={0,0};
						source="HorizonBank";
						min=-6.2831898;
						max=6.2831898;
						minAngle=360;
						maxAngle=-360;
						aspectRatio=0.80000001;
					};
					class ImpactPoint
					{
						source="ImpactPoint";
						pos0[]={0.5,0.23};
						pos10[]={1.38,1.46};
					};
					class TargetingPodDir
					{
						source="pilotcamera";
						pos0[]=
						{
							"0.50+0.034",
							"0.27-0.0455"
						};
						pos10[]={2.02,1.47};
					};
					class TargetingPodTarget: TargetingPodDir;  //found empty after stripping
					class MissileFlightTimeRot1
					{
						source="MissileFlightTime";
						sourceScale=2.5;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.840909;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=37;
						max=6;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=55.5;
						max=9;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=74;
						max=12;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=92.5;
						max=15;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=111;
						max=18;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=129.5;
						max=21;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=148;
						max=24;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=166.5;
						max=27;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=185;
						max=30;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=203.5;
						max=33;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=222;
						max=36;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=240.5;
						max=39;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=259;
						max=42;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=277.5;
						max=45;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=296;
						max=48;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=314.5;
						max=51;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=333;
						max=54;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=351.5;
						max=57;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=370;
						max=60;
					};
					class UserRot1
					{
						source="user";
						sourceIndex=4;
						sourceScale=0.0040000002;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.840909;
					};
					class UserRot2: UserRot1
					{
						maxAngle=37;
						max=6;
					};
					class UserRot3: UserRot1
					{
						maxAngle=55.5;
						max=9;
					};
					class UserRot4: UserRot1
					{
						maxAngle=74;
						max=12;
					};
					class UserRot5: UserRot1
					{
						maxAngle=92.5;
						max=15;
					};
					class UserRot6: UserRot1
					{
						maxAngle=111;
						max=18;
					};
					class UserRot7: UserRot1
					{
						maxAngle=129.5;
						max=21;
					};
					class UserRot8: UserRot1
					{
						maxAngle=148;
						max=24;
					};
					class UserRot9: UserRot1
					{
						maxAngle=166.5;
						max=27;
					};
					class UserRot10: UserRot1
					{
						maxAngle=185;
						max=30;
					};
					class UserRot11: UserRot1
					{
						maxAngle=203.5;
						max=33;
					};
					class UserRot12: UserRot1
					{
						maxAngle=222;
						max=36;
					};
					class UserRot13: UserRot1
					{
						maxAngle=240.5;
						max=39;
					};
					class UserRot14: UserRot1
					{
						maxAngle=259;
						max=42;
					};
					class UserRot15: UserRot1
					{
						maxAngle=277.5;
						max=45;
					};
					class UserRot16: UserRot1
					{
						maxAngle=296;
						max=48;
					};
					class UserRot17: UserRot1
					{
						maxAngle=314.5;
						max=51;
					};
					class UserRot18: UserRot1
					{
						maxAngle=333;
						max=54;
					};
					class UserRot19: UserRot1
					{
						maxAngle=351.5;
						max=57;
					};
					class UserRot20: UserRot1
					{
						maxAngle=370;
						max=60;
					};
				};
				class Draw
				{
					color[]={0.69,0.22,0};
					alpha=1;
					class ImpactPoint
					{
						condition="1 - atmissile";
						class Cros
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									1,
									{0.111111,0},
									1
								},
								
								{
									"ImpactPoint",
									1,
									{0.0277778,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									{-0.111111,0},
									1
								},
								
								{
									"ImpactPoint",
									1,
									{-0.0277778,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									{0,0.093434297},
									1
								},
								
								{
									"ImpactPoint",
									1,
									{0,0.0233586},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									{0,-0.093434297},
									1
								},
								
								{
									"ImpactPoint",
									1,
									{0,-0.0233586},
									1
								},
								{}
							};
						};
						class Dot
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.0035000001},
									1
								},
								
								{
									"ImpactPoint",
									{0.0035000001,-0},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0035000001},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0035000001,-0},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0035000001},
									1
								}
							};
						};
						class Ring
						{
							points[]=
							{
								
								{
									"ImpactPoint",
									{0.187939,0.0575216},
									1
								},
								
								{
									"ImpactPoint",
									{0.193185,0.043528698},
									1
								},
								
								{
									"ImpactPoint",
									{0.196962,0.029204501},
									1
								},
								
								{
									"ImpactPoint",
									{0.199239,0.014658},
									1
								},
								
								{
									"ImpactPoint",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"ImpactPoint",
									{0.199239,-0.014658},
									1
								},
								
								{
									"ImpactPoint",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"ImpactPoint",
									{0.193185,-0.043528602},
									1
								},
								
								{
									"ImpactPoint",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"ImpactPoint",
									{0.181262,-0.071076699},
									1
								},
								
								{
									"ImpactPoint",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"ImpactPoint",
									{0.16383,-0.096465103},
									1
								},
								
								{
									"ImpactPoint",
									{0.153209,-0.108105},
									1
								},
								
								{
									"ImpactPoint",
									{0.14142101,-0.118923},
									1
								},
								
								{
									"ImpactPoint",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"ImpactPoint",
									{0.114715,-0.137766},
									1
								},
								
								{
									"ImpactPoint",
									{0.1,-0.14565},
									1
								},
								
								{
									"ImpactPoint",
									{0.0845237,-0.15242399},
									1
								},
								
								{
									"ImpactPoint",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"ImpactPoint",
									{0.051763799,-0.162451},
									1
								},
								
								{
									"ImpactPoint",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"ImpactPoint",
									{0.017431101,-0.167542},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.168182},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.187939,0.0575216},
									1
								},
								
								{
									"ImpactPoint",
									{0.169145,0.051769398},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.196962,0.029204501},
									1
								},
								
								{
									"ImpactPoint",
									{0.187113,0.0277442},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"ImpactPoint",
									{0.18000001,6.6163199e-009},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"ImpactPoint",
									{0.187113,-0.0277442},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"ImpactPoint",
									{0.178542,-0.054645501},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"ImpactPoint",
									{0.155885,-0.075681798},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.153209,-0.108105},
									1
								},
								
								{
									"ImpactPoint",
									{0.145548,-0.1027},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"ImpactPoint",
									{0.12213,-0.122393},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.1,-0.14565},
									1
								},
								
								{
									"ImpactPoint",
									{0.090000004,-0.13108499},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"ImpactPoint",
									{0.0649838,-0.15013701},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"ImpactPoint",
									{0.032993201,-0.157345},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.168182},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.151364},
									1
								},
								{}
							};
						};
						class Triangle
						{
							width=9;
							points[]=
							{
								
								{
									"ImpactPoint",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									
									{
										"HorizonBankReverted",
										0.0099999998,
										0.177
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									
									{
										"HorizonBankReverted",
										-0.0099999998,
										0.177
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								}
							};
						};
						class LaunchAutorization
						{
							width=14;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.17238601},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.205},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class LaunchAutorizationBig
						{
							width=24;
							points[]=
							{
								
								{
									"MissileFlightTimeRot1",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.215},
									1,
									"ImpactPoint",
									1
								}
							};
						};
					};
					class TargetingPod: ImpactPoint
					{
						condition="atmissile-pilotcameralock";
						class Cros
						{
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.111111,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0277778,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.111111,0},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0277778,0},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,0.093434297},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,0.0233586},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.093434297},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0,-0.0233586},
									1
								},
								{}
							};
						};
						class Dot
						{
							points[]=
							{
								
								{
									"TargetingPodDir",
									{0,0.0035000001},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0035000001,-0},
									1
								},
								
								{
									"TargetingPodDir",
									{0,-0.0035000001},
									1
								},
								
								{
									"TargetingPodDir",
									{-0.0035000001,-0},
									1
								},
								
								{
									"TargetingPodDir",
									{0,0.0035000001},
									1
								}
							};
						};
						class Ring
						{
							points[]=
							{
								
								{
									"TargetingPodDir",
									{0.187939,0.0575216},
									1
								},
								
								{
									"TargetingPodDir",
									{0.193185,0.043528698},
									1
								},
								
								{
									"TargetingPodDir",
									{0.196962,0.029204501},
									1
								},
								
								{
									"TargetingPodDir",
									{0.199239,0.014658},
									1
								},
								
								{
									"TargetingPodDir",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"TargetingPodDir",
									{0.199239,-0.014658},
									1
								},
								
								{
									"TargetingPodDir",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"TargetingPodDir",
									{0.193185,-0.043528602},
									1
								},
								
								{
									"TargetingPodDir",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"TargetingPodDir",
									{0.181262,-0.071076699},
									1
								},
								
								{
									"TargetingPodDir",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"TargetingPodDir",
									{0.16383,-0.096465103},
									1
								},
								
								{
									"TargetingPodDir",
									{0.153209,-0.108105},
									1
								},
								
								{
									"TargetingPodDir",
									{0.14142101,-0.118923},
									1
								},
								
								{
									"TargetingPodDir",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"TargetingPodDir",
									{0.114715,-0.137766},
									1
								},
								
								{
									"TargetingPodDir",
									{0.1,-0.14565},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0845237,-0.15242399},
									1
								},
								
								{
									"TargetingPodDir",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"TargetingPodDir",
									{0.051763799,-0.162451},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"TargetingPodDir",
									{0.017431101,-0.167542},
									1
								},
								
								{
									"TargetingPodDir",
									{0,-0.168182},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.187939,0.0575216},
									1
								},
								
								{
									"TargetingPodDir",
									{0.169145,0.051769398},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.196962,0.029204501},
									1
								},
								
								{
									"TargetingPodDir",
									{0.187113,0.0277442},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"TargetingPodDir",
									{0.18000001,6.6163199e-009},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"TargetingPodDir",
									{0.187113,-0.0277442},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"TargetingPodDir",
									{0.178542,-0.054645501},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"TargetingPodDir",
									{0.155885,-0.075681798},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.153209,-0.108105},
									1
								},
								
								{
									"TargetingPodDir",
									{0.145548,-0.1027},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"TargetingPodDir",
									{0.12213,-0.122393},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.1,-0.14565},
									1
								},
								
								{
									"TargetingPodDir",
									{0.090000004,-0.13108499},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"TargetingPodDir",
									{0.0649838,-0.15013701},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"TargetingPodDir",
									{0.032993201,-0.157345},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									{0,-0.168182},
									1
								},
								
								{
									"TargetingPodDir",
									{0,-0.151364},
									1
								},
								{}
							};
						};
						class Triangle
						{
							width=9;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									
									{
										"HorizonBankReverted",
										0.0099999998,
										0.177
									},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									
									{
										"HorizonBankReverted",
										-0.0099999998,
										0.177
									},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								}
							};
						};
						class LaunchAutorization
						{
							width=14;
							points[]=
							{
								
								{
									"TargetingPodDir",
									{0,-0.17238601},
									1
								},
								
								{
									"UserRot1",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot2",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot3",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot4",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot5",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot6",
									{0,0.205},
									1,
									"TargetingPodDir",
									1
								}
							};
						};
						class LaunchAutorizationBig
						{
							width=24;
							points[]=
							{
								
								{
									"UserRot1",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot2",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot3",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot4",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								},
								
								{
									"UserRot5",
									{0,0.215},
									1,
									"TargetingPodDir",
									1
								}
							};
						};
					};
					class TargetingPodTarget: ImpactPoint
					{
						condition="(atmissile)*(pilotcameralock>=0)*laseron";
						class Cros
						{
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									{0.111111,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0.0277778,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{-0.111111,0},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0277778,0},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0,0.093434297},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0,0.0233586},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0,-0.093434297},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0,-0.0233586},
									1
								},
								{}
							};
						};
						class Dot
						{
							points[]=
							{
								
								{
									"TargetingPodTarget",
									{0,0.0035000001},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.0035000001,-0},
									1
								},
								
								{
									"TargetingPodTarget",
									{0,-0.0035000001},
									1
								},
								
								{
									"TargetingPodTarget",
									{-0.0035000001,-0},
									1
								},
								
								{
									"TargetingPodTarget",
									{0,0.0035000001},
									1
								}
							};
						};
						class Ring
						{
							points[]=
							{
								
								{
									"TargetingPodTarget",
									{0.187939,0.0575216},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.193185,0.043528698},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.196962,0.029204501},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.199239,0.014658},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.199239,-0.014658},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.193185,-0.043528602},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.181262,-0.071076699},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.16383,-0.096465103},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.153209,-0.108105},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.14142101,-0.118923},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.114715,-0.137766},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.1,-0.14565},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.0845237,-0.15242399},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.051763799,-0.162451},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.017431101,-0.167542},
									1
								},
								
								{
									"TargetingPodTarget",
									{0,-0.168182},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.187939,0.0575216},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.169145,0.051769398},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.196962,0.029204501},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.187113,0.0277442},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.2,7.3514599e-009},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.18000001,6.6163199e-009},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.196962,-0.029204501},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.187113,-0.0277442},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.187939,-0.0575216},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.178542,-0.054645501},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.173205,-0.084090903},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.155885,-0.075681798},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.153209,-0.108105},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.145548,-0.1027},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.12855799,-0.12883499},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.12213,-0.122393},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.1,-0.14565},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.090000004,-0.13108499},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.068403997,-0.158039},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.0649838,-0.15013701},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0.0347296,-0.165627},
									1
								},
								
								{
									"TargetingPodTarget",
									{0.032993201,-0.157345},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									{0,-0.168182},
									1
								},
								
								{
									"TargetingPodTarget",
									{0,-0.151364},
									1
								},
								{}
							};
						};
						class Triangle
						{
							width=9;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									
									{
										"HorizonBankReverted",
										0.0099999998,
										0.177
									},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									
									{
										"HorizonBankReverted",
										-0.0099999998,
										0.177
									},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									
									{
										"HorizonBankReverted",
										0,
										0.192
									},
									1
								}
							};
						};
						class LaunchAutorization
						{
							width=14;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									{0,-0.17238601},
									1
								},
								
								{
									"UserRot1",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot2",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot3",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot4",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot5",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot6",
									{0,0.205},
									1,
									"TargetingPodTarget",
									1
								}
							};
						};
						class LaunchAutorizationBig
						{
							width=24;
							points[]=
							{
								
								{
									"UserRot1",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot2",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot3",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot4",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								},
								
								{
									"UserRot5",
									{0,0.215},
									1,
									"TargetingPodTarget",
									1
								}
							};
						};
					};
					class StaticReticle
					{
						condition="user5";
						class Shape
						{
							points[]=
							{
								
								{
									
									{
										{0.055,0.145},
										1
									},
									
									{
										{0.95499998,0.145},
										1
									},
									
									{
										{0.95499998,0.84500003},
										1
									},
									
									{
										{0.055,0.84500003},
										1
									}
								}
							};
						};
					};
				};
			};
			class MFD_1
			{
				topLeft="MFD_WS_TL";
				topRight="MFD_WS_TR";
				bottomLeft="MFD_WS_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				font="PuristaMedium";
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=0.5;
					color[]={1,1,1};
					class MgunAmmo
					{
						condition="ammo2>=1";
						class BlackBackground
						{
							color[]={0,0,0};
							alpha=1;
							class AmmoBox
							{
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.838,0.82499999},
											1
										},
										
										{
											{0.92199999,0.82499999},
											1
										},
										
										{
											{0.92199999,0.97500002},
											1
										},
										
										{
											{0.838,0.97500002},
											1
										}
									}
								};
							};
						};
						class Full
						{
							condition="ammo2>=212";
							class AmmoText
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.875,0.81999999},
									1
								};
								right[]=
								{
									{0.91000003,0.81999999},
									1
								};
								down[]=
								{
									{0.875,0.95999998},
									1
								};
							};
						};
						class AlmostFull
						{
							condition="(ammo2>=137)*(ammo2<=211)";
							class AmmoText
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.875,0.81999999},
									1
								};
								right[]=
								{
									{0.91000003,0.81999999},
									1
								};
								down[]=
								{
									{0.875,0.95999998},
									1
								};
							};
						};
						class Half
						{
							condition="(ammo2>=63)*(ammo2<=136)";
							class AmmoText
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.875,0.81999999},
									1
								};
								right[]=
								{
									{0.91000003,0.81999999},
									1
								};
								down[]=
								{
									{0.875,0.95999998},
									1
								};
							};
						};
						class AlmostEmpty
						{
							condition="(ammo2<=62)";
							class AmmoText
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0.875,0.81999999},
									1
								};
								right[]=
								{
									{0.91000003,0.81999999},
									1
								};
								down[]=
								{
									{0.875,0.95999998},
									1
								};
							};
						};
					};
					class WeaponTypeRocket
					{
						condition="rocket";
						class BlackBackground
						{
							color[]={0,0,0};
							alpha=1;
							class AmmoBox
							{
								width=4;
								points[]=
								{
									
									{
										
										{
											{0.838,0.125},
											1
										},
										
										{
											{0.92199999,0.125},
											1
										},
										
										{
											{0.92199999,0.27500001},
											1
										},
										
										{
											{0.838,0.27500001},
											1
										}
									}
								};
							};
						};
						class AmmoText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.875,0.11},
								1
							};
							right[]=
							{
								{0.91000003,0.11},
								1
							};
							down[]=
							{
								{0.875,0.25},
								1
							};
						};
					};
					class WeaponTypeMissiles: WeaponTypeRocket
					{
						condition="missile";
						class BlackBackground: BlackBackground
						{
							class AmmoBox: AmmoBox;  //found empty after stripping
						};
						class AmmoText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.875,0.11},
								1
							};
							right[]=
							{
								{0.91000003,0.11},
								1
							};
							down[]=
							{
								{0.875,0.25},
								1
							};
						};
					};
					class WeaponTypeBombs: WeaponTypeRocket
					{
						condition="bomb";
						class BlackBackground: BlackBackground
						{
							class AmmoBox: AmmoBox;  //found empty after stripping
						};
						class AmmoText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.875,0.11},
								1
							};
							right[]=
							{
								{0.91000003,0.11},
								1
							};
							down[]=
							{
								{0.875,0.25},
								1
							};
						};
					};
					class WeaponTypeMgun: WeaponTypeRocket
					{
						condition="mgun";
						class BlackBackground: BlackBackground
						{
							class AmmoBox: AmmoBox;  //found empty after stripping
						};
						class AmmoText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.875,0.11},
								1
							};
							right[]=
							{
								{0.91000003,0.11},
								1
							};
							down[]=
							{
								{0.875,0.25},
								1
							};
						};
					};
					class Pylon1
					{
						pos[]=
						{
							{0.345,0.34},
							1
						};
						pylon=1;
						name="rhs_su25_box";
					};
					class Pylon2: Pylon1
					{
						pylon=2;
						pos[]=
						{
							{0.405,0.31999999},
							1
						};
					};
					class Pylon3: Pylon1
					{
						pylon=3;
						pos[]=
						{
							{0.28099999,0.31999999},
							1
						};
					};
					class Pylon4: Pylon1
					{
						pylon=4;
						pos[]=
						{
							{0.46900001,0.31999999},
							1
						};
					};
					class Pylon5: Pylon1
					{
						pylon=5;
						pos[]=
						{
							{0.21699999,0.31999999},
							1
						};
					};
					class Pylon6: Pylon1
					{
						pylon=6;
						pos[]=
						{
							{0.53299999,0.31999999},
							1
						};
					};
					class Pylon7: Pylon1
					{
						pylon=7;
						pos[]=
						{
							{0.153,0.31999999},
							1
						};
					};
					class Pylon8: Pylon1
					{
						pylon=8;
						pos[]=
						{
							{0.597,0.31999999},
							1
						};
					};
					class Pylon9: Pylon1
					{
						pylon=9;
						pos[]=
						{
							{0.093999997,0.31999999},
							1
						};
					};
					class Pylon10: Pylon1
					{
						pylon=10;
						pos[]=
						{
							{0.66100001,0.31999999},
							1
						};
					};
				};
			};
			class MFD_2
			{
				topLeft="MFD_Lights_TL";
				topRight="MFD_Lights_TR";
				bottomLeft="MFD_Lights_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones;  //found empty after stripping
				class Draw
				{
					alpha=1;
					color[]={1,1,1};
					class Launch_Authorized
					{
						condition="((impactDistance/LarTop)>=LarAmmoMin)*((impactDistance/LarTop)<=LarAmmoMax)+(user1>=1)+missilelocked";
						color[]={0.69,0.22,0};
						alpha=0.2;
						class Bulb
						{
							points[]=
							{
								
								{
									
									{
										{0.898,0.085000001},
										1
									},
									
									{
										{0.98199999,0.085000001},
										1
									},
									
									{
										{0.98199999,0.51499999},
										1
									},
									
									{
										{0.898,0.51499999},
										1
									}
								}
							};
						};
					};
					class Laser_Active
					{
						color[]={0,0.49000001,0};
						alpha=0.1;
						condition="laseron";
						class Bulb
						{
							points[]=
							{
								
								{
									
									{
										{0.017999999,0.085000001},
										1
									},
									
									{
										{0.102,0.085000001},
										1
									},
									
									{
										{0.102,0.51499999},
										1
									},
									
									{
										{0.017999999,0.51499999},
										1
									}
								}
							};
						};
					};
					class Laser_Cooldown: Laser_Active
					{
						condition="user0";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Bulb: Bulb;  //found empty after stripping
					};
					class Launch_Disengage
					{
						condition="(((impactDistance/LarTop)<=LarAmmoMin)+((impactDistance/LarTop)>=LarAmmoMax))*rocket+(user1<=-1)";
						color[]={0.94,0.0099999998,0};
						alpha=0.07;
						class Bulb
						{
							points[]=
							{
								
								{
									
									{
										{0.017999999,0.48500001},
										1
									},
									
									{
										{0.102,0.48500001},
										1
									},
									
									{
										{0.102,0.91500002},
										1
									},
									
									{
										{0.017999999,0.91500002},
										1
									}
								}
							};
						};
					};
				};
			};
		};
		maxOmega=2000;
		engineMOI=16;
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class Wheel_1
			{
				side="left";
				suspTravelDirection[]={0,-1,0};
				steering=1;
				width=0.16;
				mass=150;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=21500;
				maxHandBrakeTorque=0;
				maxCompression=0.2105;
				maxDroop=0.015;
				sprungMass=4066;
				springStrength=56600;
				springDamperRate=215569.59;
				longitudinalStiffnessPerUnitGravity=8000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class Wheel_1_fake: Wheel_1;  //found empty after stripping
			class Wheel_2: Wheel_1
			{
				steering=0;
				width=0.28;
				springDamperRate=220569.59;
				sprungMass=6652;
				springStrength=151000;
			};
			class Wheel_3: Wheel_2
			{
				side="right";
			};
		};
		maxSpeed=900;
		landingAoa=0.113446;
		landingSpeed=250;
		stallSpeed=190;
		stallWarningTreshold=0.07;
		wheelSteeringSensitivity=1.3;
		airBrake=1;
		airBrakeFrictionCoef=2.2;
		flaps=1;
		flapsFrictionCoef=0.31999999;
		gearsUpFrictionCoef=0.55000001;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.51999998,0.0066999998};
		airFrictionCoefs2[]={0.001,0.0054000001,7.0000002e-005};
		angleOfIndicence=-0.0087266499;
		envelope[]={0,0.07,0.28,0.82999998,1.11,1.74,2.51,3.4100001,4.46,5.6399999,6.96,8.4200001,8.8000002,9.1099997,9.3800001,9.4499998,9.4300003,9,8,7,6};
		altNoForce=15000;
		altFullForce=4000;
		thrustCoef[]={1.28,1.33,1.77,1.4,1.41,1.39,1.36,1.33,1.29,1.25,1.2,1.15,1.05,0.5,0,0,0,0,0};
		aileronSensitivity=0.85000002;
		aileronCoef[]={0,0.1,0.30000001,0.60000002,0.80000001,0.94999999,1,1.02,1.03,1.04,1.04,1,0.89999998,0.69999999,0.30000001,0.2,0.15000001,0.1,0.1};
		elevatorSensitivity=0.94999999;
		elevatorCoef[]={0,0.2,0.94999999,0.80000001,0.75,0.69999999,0.64999998,0.60000002,0.55000001,0.5,0.46000001,0.31999999,0.28999999,0.16,0.14,0.12,0.1,0.090000004,0.079999998};
		rudderInfluence=0.96600002;
		rudderCoef[]={0,0.60000002,1.2,1.5,1.8,2,3.2,3.4000001,3.45,3.5,3.55,3.5999999,2.2,1.3,0.30000001,0.2,0.15000001,0.1,0.1};
		aileronControlsSensitivityCoef=3.5999999;
		elevatorControlsSensitivityCoef=3.4000001;
		rudderControlsSensitivityCoef=3.4000001;
		draconicForceXCoef=13;
		draconicForceYCoef=1.3;
		draconicForceZCoef=1;
		draconicTorqueXCoef[]={4.8000002,5,5.5,6.1999998,6.5999999,7.4000001,8,8.5,8,8.3999996,8.6000004,8.6999998,8.8000002,8.8999996,9,9.1000004};
		draconicTorqueYCoef[]={12,7.5,4,1.5,0.1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		soundIncommingMissile[]=
		{
			"\rhsafrf\addons\rhs_c_a2port_air\sounds\alarm_beep",
			1.098107,
			1
		};
		soundLocked[]=
		{
			"",
			1.5848932,
			1
		};
		class EventHandlers: EventHandlers
		{
			hit="";
			class RHS_EventHandlers
			{
				hit="_this call RHS_fnc_AI_eject";
				init="_this call rhs_fnc_air_init";
				getout="[_this select 0, _this select 2,'rhs_su25_canopy'] call rhs_fnc_K36D_seatEjection";
				engine="[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
			};
		};
	};