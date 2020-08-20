class CfgPatches
{
	class A3_Functions_F_Mark
	{
		name="Arma 3 Marksmen - Script Functions";
		units[]={};
		weapons[]={};
	};
};
class CfgFunctions
{
	class A3_Mark
	{
		tag="BIS";
		class Vehicles
		{
			file="A3\functions_f_mark\Vehicles";
			class baseVehicle;  //found empty after stripping
			class exportVehicle;  //found empty after stripping
			class garage;  //found empty after stripping
			class garage3DEN;  //found empty after stripping
			class initVehicleCrew;  //found empty after stripping
			class initVehicle;  //found empty after stripping
			class initVehicleKart;  //found empty after stripping
			class loadVehicle;  //found empty after stripping
			class saveVehicle;  //found empty after stripping
			class setVehicleMass
			{
				ext=".fsm";
			};
			class getVehicleCustomization;  //found empty after stripping
		};
		class VR
		{
			file="A3\functions_f_mark\VR";
			class VRCourseWeaponHandlingA1
			{
				ext=".fsm";
			};
			class VRCourseWeaponHandlingA2
			{
				ext=".fsm";
			};
			class VRCourseWeaponHandlingA3
			{
				ext=".fsm";
			};
			class VRCourseWeaponHandlingB1
			{
				ext=".fsm";
			};
			class VRCourseWeaponHandlingB2
			{
				ext=".fsm";
			};
			class VRCourseWeaponHandlingB3
			{
				ext=".fsm";
			};
			class VRCourseWeaponHandlingC2
			{
				ext=".fsm";
			};
			class VRCourseWeaponHandlingC1
			{
				ext=".fsm";
			};
		};
	};
};
