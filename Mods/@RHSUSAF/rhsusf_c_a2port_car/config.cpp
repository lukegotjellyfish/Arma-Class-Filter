class CfgPatches
{
		weapons[]={};
		version=1;
	};
};
class CfgAnimationSourceSounds
{
	class RHS_HMMWV_Door
	{
		class DoorMovement
		{
			loop=0;
			terminate=0;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_1",
				0.56234097,
				1,
				20
			};
			sound1[]=
			{
				"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_2",
				0.56234097,
				1,
				20
			};
			sound2[]=
			{
				"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_3",
				0.56234097,
				1,
				20
			};
			sound3[]=
			{
				"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_4",
				0.56234097,
				1,
				20
			};
			sound[]=
			{
				"sound0",
				0.2,
				"sound1",
				0.2,
				"sound2",
				0.40000001,
				"sound3",
				0.2
			};
		};
		class OpenTheDoor
		{
			loop=0;
			terminate=0;
			trigger="direction * (phase factor[0.01,0.02])";
			sound0[]=
			{
				"\rhsusf\addons\rhsusf_a2port_car\sounds\hmmwv\hmmwv_open_door",
				"db+6",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
		class SlamTheDoor
		{
			loop=0;
			terminate=0;
			trigger="(1 - direction) * (phase factor[0.1,0.09])";
			sound0[]=
			{
				"\rhsusf\addons\rhsusf_a2port_car\sounds\hmmwv\hmmwv_slam_door",
				"db+6",
				1,
				20
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class RHSUSF_Truck_Door
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\rhsusf\addons\rhsusf_a2port_car\sounds\truck\truck_ext_getout",
				"db+12",
				1,
				60
			};
			sound1[]=
			{
				"\rhsusf\addons\rhsusf_a2port_car\sounds\truck\truck_int_getout",
				"db+12",
				1,
				60
			};
			sound[]=
			{
				"sound0",
				0.5,
				"sound1",
				0.5
			};
		};
	};
	class RHS_Gearbox
	{
		class GearMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\rhsusf\addons\rhsusf_a2port_car\sounds\Gear_Change",
				"db+14",
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
	class RHS_Wipers
	{
		class DoorMovement
		{
			loop=0;
			terminate=1;
			trigger="(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[]=
			{
				"\rhsusf\addons\rhsusf_a2port_car\sounds\wipers.wss",
				"db+8",
				1,
				60
			};
			sound[]=
			{
				"sound0",
				1
			};
		};
	};
};
class CfgSoundEffects
{
	class AttenuationsEffects
	{
		class RHS_CarAttenuation
		{
				gain[]={0.89999998,0.80000001,0.69999999,0.60000002};
			};
				gain[]={0.89999998,0.80000001,0.60000002,0.5};
			};
			class Echo
			{
				WetDryMix=0.1;
				Feedback=0.1;
				Delay=1;
			};
		};
	};
};
