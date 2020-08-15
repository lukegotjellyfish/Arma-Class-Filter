simulation				= "tankX";
normalSpeedForwardCoef	= 0.85;
slowSpeedForwardCoef	= 0.5;
RHS_FUEL_RANGE(500)
RHS_fuelCapacity		= 1885;
maxSpeed				= 60;

/// BUOYANCY

canFloat			= 1;
waterLeakiness		= 250.0;
maxFordingDepth		= 0.05;
waterResistance		= 2;
waterDamageEngine	= 0.9;

engineShiftY			= 0.7;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns
waterLinearDampingCoefY	= 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX	= 2;		/// affects sliding of the ship in turns
waterAngularDampingCoef	= 7.2;		/// increase this for smoother movement, but beware too high values
waterResistanceCoef		= 1.75;		/// how much does water slow the ship down
waterEffectSpeed		= 5;		/// limit of displaying the standard water effect
engineEffectSpeed		= 5;		/// limit of displaying the engine effect
waterFastEffectSpeed	= 28;			/// increase this for smoother movement, but beware too high
rudderForceCoef = 4.5;

// ARTIFICIAL FORCES
tankTurnForce			= 0.31e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.72;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 4.0;					// acceleration aid force
accelAidForceYOffset	= -3.6;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0

