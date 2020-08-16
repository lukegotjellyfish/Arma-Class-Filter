/// PhysX part
simulation			= tankX;
enginePower			= 368;
maxOmega 			= 301;
peakTorque 			= 1461;

torqueCurve[] = {
	{"0/2880" , "0/1461"},
	{"660/2880" , "948/1461"},
	{"1152/2880" , "1303/1461"},
	{"1601/2880" , "1461/1461"},
	{"1892/2880" , "1451/1461"},
	{"2344/2880" , "1422/1461"},
	{"2606/2880" , "1349/1461"},
	{"3024/2880" , "0/1461"}
};

thrustDelay			= 0.9;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 60.0;
fuelCapacity		= 672;
AGM_fuelCapacity = 672;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
latency 			= 0.6;
tankTurnForce		= 230000; /// Random magic number, expected to be something like 11 x mass of vehicle
tankTurnForceAngSpd	= 2;
accelAidForceCoef	= 4;
accelAidForceSpd	= 2.0;

/// Gearbox and transmission
idleRpm = 650; // RPM at which the engine idles.
redRpm = 2880; // RPM at which the engine redlines.

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

changeGearMinEffectivity[] = {0.5,0.15,0.95,0.95,0.95,0.95};
class complexGearbox {
	GearboxRatios[] =
	{
		//"R2",-5.25, nie chce dzia?a??
		"R1",-3.31,
		"N",0,
		"D1",3.31,
		"D2",1.934,
		"D3",1.132,
		"D4",0.662
	};
	TransmissionRatios[] = {"High",12.7};
	gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
	moveOffGear        = 2; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
	driveString        = "D"; // string to display in the HUD for forward gears.
	neutralString      = "N"; // string to display in the HUD for neutral gear.
	reverseString      = "R"; // string to display in the HUD for reverse gears.
	transmissionDelay  = 0.6;
};
/// end of gearbox

class Wheels {
	class L2 {
		damping  = 75.0;
		// tanks do not have steerable wheels
		steering = 0;
		/// We need to distinguish the side to apply the right thrust value
		side = "left";
		/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
		weight = 92.9;
		mass = 92.9;
		MOI = 10.2;
		latStiffX = 25;
		latStiffY = 280;
		longitudinalStiffnessPerUnitGravity = 100000;
		maxBrakeTorque = 10000;
		sprungMass = 1800;
		springStrength = 80000;
		springDamperRate = 15700;
		dampingRate = 1.0;
		dampingRateInAir = 2900;
		dampingRateDamaged = 10.0;
		dampingRateDestroyed = 10000.0;
		maxDroop = 0.18;
		maxCompression = 0.18;
	};
	class L3: L2 {
	};
	class L4: L2 {
	};
	class L5: L2 {
	};
	class L6: L2 {
	};
	class L7: L2 {
	};
	// rear left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L9: L2 {
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L1: L2 {
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};

	class R3: R2 {
	};
	class R4: R2 {
	};
	class R5: R2 {
	};
	class R6: R2 {
	};
	class R7: R2 {
	};
	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R9: R2 {
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R1: R2 {
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
};
/// End of PhysX