class CfgPatches
{
	class rhs_c_bmk_t
	{
		units[]=
		{
			"rhs_bkm_t",
			"rhs_bmk_t"
		};
		weapons[]={};
	};
	class rhs_c_bkm_t: rhs_c_bmk_t;  //found empty after stripping
};
class CfgVehicles
{
	class Ship_F;
	class rhs_bmk_t_base: Ship_F
	{
		displayName="BMK Tug";
		editorSubCategory="rhs_EdSubcat_boat";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		simulation="shipX";
		maxSpeed=17;
		normalSpeedForwardCoef=0.5;
		slowSpeedForwardCoef=0.30000001;
		enginePower=565.5;
		peakTorque=379;
		maxOmega=251.32742;
		redRpm=2400;
		thrustDelay=1.5;
		engineMOI=1.5;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2,
				"N",
				0,
				"D1",
				4.5999999
			};
			TransmissionRatios[]=
			{
				"High",
				1
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		waterResistance=0.5;
		waterDamageEngine=0.89999998;
		waterAngularDampingCoef=1;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterPPInVehicle=0;
		waterResistanceCoef=0.1;
		engineShiftY=0.30000001;
		engineShiftZ=-3;
		rudderForceCoef=3.5;
		rudderForceCoefAtMaxSpeed=0.30000001;
		hideProxyInCombat=1;
		class CargoTurret;
		class Turrets;  //found empty after stripping
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		attenuationEffectType="OpenCarAttenuation";
		soundGeneralCollision2[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02",
			"db5",
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03",
			"db5",
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
			0.34
		};
		class Damage;  //found empty after stripping
	};
	class rhs_bmk_t: rhs_bmk_t_base
	{
		side=0;
	};
	class rhs_bkm_t: rhs_bmk_t;  //found empty after stripping
};
