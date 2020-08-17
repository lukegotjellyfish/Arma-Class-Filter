class DefaultEventhandlers;
class CfgPatches
{
	class rhsgref_c_tohport_air
	{
		units[]=
		{
			"rhsgref_mi24g_CAS",
			"rhsgref_mi24g_UPK23",
			"rhsgref_mi24g_FAB",
			"rhsgref_b_mi24g_CAS",
			"rhsgref_b_mi24g_UPK23",
			"rhsgref_b_mi24g_FAB"
		};
		weapons[]={};
		name="TKOH ports";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
		};
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class CargoTurret;
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
	};
	class RHS_Mi24_base: Heli_Attack_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_02: CargoTurret_01
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
			};
			class CargoTurret_04: CargoTurret_01
			{
			};
		};
	};
	class RHS_Mi24V_Base: RHS_Mi24_base
	{
	};
	class RHS_Mi24V_VVS_Base: RHS_Mi24V_Base
	{
		class EventHandlers;
	};
	class rhsgref_cdf_Mi35: RHS_Mi24V_VVS_Base
	{
		class Components;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers;
		};
		class AnimationSources;
	};
	class rhsgref_mi24g_base: rhsgref_cdf_Mi35
	{
		hiddenselectionstextures[]=
		{
			"\rhsgref\addons\rhsgref_tohport_air\superhind\data\mi24sh_001_co.paa",
			"\rhsgref\addons\rhsgref_tohport_air\superhind\data\mi24sh_002_co.paa",
			"\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_co.paa"
		};
		class textureSources
		{
			class standard
			{
				factions[]=
				{
					"rhs_faction_vvs_c",
					"rhs_faction_vvs"
				};
			};
			class Camo: standard
			{
			};
			class Camo1: standard
			{
			};
			class Camo2: standard
			{
			};
			class Camo3: standard
			{
			};
			class Camo4: standard
			{
			};
			class Camo5: standard
			{
			};
			class Camo6: standard
			{
			};
			class Camo7: standard
			{
			};
		};
		class Attributes
		{
			class rhs_hideExhaust
			{
				tooltip="Hide exhaust cover. WARNING: DUE TO HOW ENGINE WORKS IT DOESN'T CHANGE EXHAUST MEMORY POINTS";
				property="rhs_hideExhaust";
				control="CheckboxNumber";
				expression="_this animate ['exhaust_hide',_value,true]";
				defaultValue="0";
			};
			class rhs_air_filter
			{
				tooltip="Hide air filter";
				property="rhs_air_filter";
				control="CheckboxNumber";
				expression="_this animate ['HideAirFilter',_value,true]";
				defaultValue="0";
			};
			class rhs_opendoors
			{
				property="rhs_opendoors";
				control="CheckboxNumber";
				expression="_this animateDoor ['Door_Cargo',_value,true]";
				defaultValue="0";
			};
			class rhs_decalNumber_type
			{
				tooltip="Define kind of font that will be drawn on vehicle";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI24NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
				defaultValue=0;
				class values
				{
					class NoChange
					{
						name="Default";
						value="NoChange";
					};
					class AviaCDF
					{
						name="Aviation CDF";
						value="AviaCDF";
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
				expression="if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI24NumberPlaces}else{[_this, [['Number', cRHSAIRMI24NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaCDF'],_value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalTail
			{
				tooltip="Define tail decalthat will be drawn on vehicle";
				property="rhs_decalTail";
				control="Combo";
				expression="[_this,[['Label', cRHSAIRMI24TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
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
		selectionHRotorStill="main rotor static";
		selectionHRotorMove="main rotor blur";
		selectionVRotorStill="tail rotor static";
		selectionVRotorMove="tail rotor blur";
		incomingMissileDetectionSystem="4+8";
		lockDetectionSystem="4+8";
		memoryPointLRocket="rocket_1";
		memoryPointRRocket="rocket_2";
		memoryPointLMissile="rocket_1";
		memoryPointRMissile="rocket_2";
		weapons[]=
		{
			"rhs_weap_DIRCM_Lipa"
		};
		magazines[]=
		{
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa",
			"rhs_mag_DIRCM_Lipa"
		};
		transportsoldier=4;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsgref\addons\rhsgref_tohport_air\SuperHind\loadouts\RHS_Mi24G_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_FAB500",
							"RHS_HP_B13L1",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8df";
						maxweight=550;
						UIposition[]={0.50300002,0.30000001};
						turret[]={};
						hitpoint="HitPylon1";
					};
					class pylon2: pylon1
					{
						UIposition[]={0.16500001,0.30000001};
						mirroredMissilePos=1;
						hitpoint="HitPylon2";
					};
					class pylon3: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_FAB250",
							"RHS_HP_B8V20",
							"RHS_HP_UB16",
							"RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment="rhs_mag_b8v20a_s8kom";
						maxweight=400;
						UIposition[]={0.583,0.34999999};
						turret[]={};
						hitpoint="HitPylon3";
					};
					class pylon4: pylon3
					{
						UIposition[]={0.085000001,0.34999999};
						mirroredMissilePos=3;
						hitpoint="HitPylon4";
					};
					class pylon5: pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_MOKOPA",
							"RHS_HP_INGWE"
						};
						attachment="rhs_mag_zt3_4";
						maxweight=250;
						UIposition[]={0.62800002,0.40000001};
						turret[]={0};
						hitpoint="HitPylon5";
					};
					class pylon6: pylon5
					{
						UIposition[]={0.039999999,0.40000001};
						mirroredMissilePos=5;
						hitpoint="HitPylon6";
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
						UIposition[]={0.33000001,0};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						animDirection="FLIR_VRot";
						angleRangeHorizontal=46;
						angleRangeVertical=36;
						groundNoiseDistanceCoef=0.07;
						maxGroundNoiseDistance=0;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						maxFogSeeThrough=0.94999999;
						minTrackableSpeed=0;
						maxTrackableSpeed=695;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="FLIR_VRot";
						angleRangeHorizontal=46;
						angleRangeVertical=36;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,8000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,8000,16000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportCountermeasuresComponent
			{
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_gi2",
					"Laserdesignator_pilotCamera"
				};
				magazines[]=
				{
					"rhs_mag_GI2_420_HE",
					"rhs_mag_GI2_420_AP",
					"Laserbatteries"
				};
				memoryPointGun="z_gun_chamber";
				particlesPos="z_gun_chamber";
				particlesDir="z_gun_muzzle";
				selectionFireAnim="zasleh";
				maxhorizontalrotspeed=2.444;
				maxverticalrotspeed=1.666;
				initelev=15;
				initturn=0;
				maxelev=15;
				minelev=-55;
				maxturn=110;
				minturn=-110;
				primarygunner=1;
				stabilizedInAxes=3;
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		driveOnComponent[]=
		{
			"wheels"
		};
	};
	class rhsgref_mi24g_CAS: rhsgref_mi24g_base
	{
		side=2;
	};
	class rhsgref_mi24g_UPK23: rhsgref_mi24g_base
	{
		side=2;
		memoryPointGun[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
		gunBeg[]=
		{
			"chase01dir",
			"chase02dir",
			"chase03dir",
			"chase04dir"
		};
		gunEnd[]=
		{
			"chase01",
			"chase02",
			"chase03",
			"chase04"
		};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_upk23_mixed";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_upk23_mixed";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_zt3_4";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_zt3_4";
						turret[]={0};
					};
					class cmDispenser: cmDispenser
					{
					};
				};
			};
		};
	};
	class rhsgref_mi24g_FAB: rhsgref_mi24g_base
	{
		side=2;
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylon1: pylon1
					{
						attachment="rhs_mag_fab250";
						turret[]={};
					};
					class pylon2: pylon2
					{
						attachment="rhs_mag_fab250";
						turret[]={};
					};
					class pylon3: pylon3
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon4: pylon4
					{
						attachment="rhs_mag_b8v20a_s8kom";
						turret[]={};
					};
					class pylon5: pylon5
					{
						attachment="rhs_mag_zt3_4";
						turret[]={0};
					};
					class pylon6: pylon6
					{
						attachment="rhs_mag_zt3_4";
						turret[]={0};
					};
					class cmDispenser: cmDispenser
					{
					};
				};
			};
		};
	};
	class rhsgref_b_mi24g_CAS: rhsgref_mi24g_CAS
	{
		side=1;
	};
	class rhsgref_b_mi24g_UPK23: rhsgref_mi24g_UPK23
	{
		side=1;
	};
	class rhsgref_b_mi24g_FAB: rhsgref_mi24g_FAB
	{
		side=1;
	};
};
