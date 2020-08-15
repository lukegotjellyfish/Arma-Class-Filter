/// PhysX part
simulation			= tankX;
enginePower			= 500;
maxOmega 			= 241;
peakTorque 			= 2610;
torqueCurve[] = {
			{ 0,0 },
			{ "(1000/2300)","(1600/2610)" },
			{ "(1400/2300)","(2610/2610)" },
			{ "(2300/2300)","(1900/2610)" }};
thrustDelay			= 0.4;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 100.0;
fuelCapacity		= 770;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
latency 			= 0.1;
tankTurnForce		= 500000; /// Random magic number, expected to be something like 11 x mass of vehicle

/// Gearbox and transmission
idleRpm = 610; // RPM at which the engine idles.
redRpm = 2300; // RPM at which the engine redlines.

engineLosses = 50; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 25; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

changeGearMinEffectivity[] = {0.5,0.15,0.95,0.95,0.95,0.95};
class complexGearbox
{
	GearboxRatios[] = {"R2",-2.235,"N",0,"D1",2.59,"D2",1.79,"D3",1.23,"D4",0.85};
	TransmissionRatios[] = {"High",5.5};
	gearBoxMode = "auto";
	moveOffGear = 1;
	driveString = "D";
	neutralString = "N";
	reverseString = "R";
	transmissionDelay = 0.1;
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
		weight = 100;
		mass = 100;
		MOI = 12;
		latStiffX = 25;
		latStiffY = 280;
		longitudinalStiffnessPerUnitGravity = 100000;
		maxBrakeTorque = 10000;
		sprungMass = 1900;
		springStrength = 45000;
		springDamperRate = 6428;
		dampingRate = 1.0;
		dampingRateInAir = 1200;
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

	class R2: L2 {
		side = "right";
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