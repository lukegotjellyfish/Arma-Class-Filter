		//----- General Parameters -----//
		normalSpeedForwardCoef=0.9;
		turnCoef=3.5;
		terrainCoef=0.5;
		simulation="carx";

		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=105;
		RHS_FUEL_RANGE(400)
		wheelCircumference = 2.95;

		brakeIdleSpeed=2.0;
		maxFordingDepth=0.4;
		waterSpeedFactor=0.3;
		waterResistance=10;
		waterResistanceCoef=0.2;
		waterLeakiness = 250.0;

		//----- Gearbox Parameters -----//
		class complexGearbox;  //found empty after stripping
			TransmissionRatios[] = {"High",8.2};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[]={0.95,0.0,0.99,0.99,0.99,0.99,0.99,0.99};
		switchTime = 0.31;
		latency = 1.3;
		transmissionLosses = 18;

		//----- Clutch and Driveline Parameters -----//
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 85.0;

		dampingRateFullThrottle=0.078;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{__EVAL(700/2200),__EVAL(745/1627)},
		{__EVAL(1000/2200),__EVAL(1280/1627)},
		{__EVAL(1300/2200),__EVAL(1627/1627)},
		{__EVAL(1400/2200),__EVAL(1627/1627)},
		{__EVAL(1600/2200),__EVAL(1612/1627)},
		{__EVAL(2000/2200),__EVAL(1585/1627)},
		{__EVAL(2100/2200),__EVAL(1530/1627)},
		{__EVAL(2316/2200),__EVAL(0/1627)}
		};

		enginePower = 336;
		peakTorque = __EVAL(1627*1.4);
		minOmega = 65;
		maxOmega = 230.38;
		idleRPM = 700;
		redRPM = 2200;

		engineLosses = 12;
		thrustDelay=1.0;
		engineBrakeCoef = 0.8;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef	= 26.5;
		antiRollbarForceLimit	= 26.5;
		antiRollbarSpeedMin		= 10;
		antiRollbarSpeedMax		= 75;

		accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0
		accelAidForceCoef		= 4.0;					// acceleration aid force
		accelAidForceYOffset	= -1.3;					// Y offset from the CoG where to apply the accelAidForce

		class Wheels
		{
			class L1
			{
				side					= "left";
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;

				width		= 0.37;
				steering	= 1;
				mass		= 80;
				MOI			= 25;

				dampingRate				= 0.1;
				dampingRateDamaged		= 1;
				dampingRateDestroyed	= 1000;

				maxBrakeTorque		= 35000;
				maxHandBrakeTorque	= 0;

				maxCompression	= 0.12;
				maxDroop		= 0.12;

				sprungMass			= -1;
				springStrength		= 405000;
				springDamperRate	= 45725;


				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX = 40;
				latStiffY = 180;
				frictionVsSlipGraph[]=
				{
					{0,2.5},
					{0.5,2.3},
					{1,2}
				};
			};
			class L2: L1
			{
				steering				= 0;
			};
			class R1: L1
			{
				steering				= 1;
				side					= "right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
			};
			class R2: R1
			{
				steering				= 0;
			};

		};
		/// End of PhysX