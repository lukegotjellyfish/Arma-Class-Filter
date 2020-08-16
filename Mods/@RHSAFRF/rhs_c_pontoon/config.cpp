class CfgPatches
{
	class rhs_c_pontoon
	{
		units[]=
		{
			"rhs_pontoon_static",
			"rhs_pontoon_float"
		};
		weapons[]={};
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class pontoon
		{
			file="rhsafrf\addons\rhs_c_pontoon\scripts";
		};
	};
};
class CfgVehicles
{
	class House;
	class House_F: House
	{
	class rhs_pontoon_static: House_F
	{
		cost=8000;
		armor=1500;
		icon="iconObject_2x3";
		editorSubCategory="rhs_EdSubcat_boat";
		class Attributes
		{
			class rhs_fold_pontoon
			{
				property="rhs_fold_pontoon";
				control="CheckboxNumber";
				expression="_this animateSource ['fold_source',_value,true];_this enableVehicleCargo (_value isEqualTo 1);";
				defaultValue="0";
			};
		};
		class EventHandlers: EventHandlers
		{
			class rhs_pontoon_static
			{
				dragged3DEN="[_this # 0,'rhs_pontoon_static'] call rhs_fnc_pontoon_update;";
				registeredToWorld3DEN="[_this # 0,'rhs_pontoon_static'] call rhs_fnc_pontoon_update;";
			};
		};
	};
	class Thing;
	class ThingX: Thing
	{
		class Eventhandlers;
	};
	class rhs_pontoon_float: ThingX
	{
		cost=8000;
		armor=1500;
		icon="iconObject_2x3";
		editorSubCategory="rhs_EdSubcat_boat";
		waterLeakiness=9.9999997e-005;
		waterResistanceCoef=0.2;
		class Attributes
		{
			class rhs_fold_pontoon
			{
				property="rhs_fold_pontoon";
				control="CheckboxNumber";
				expression="_this animateSource ['fold_source',_value,true];_this enableVehicleCargo (_value isEqualTo 1);";
				defaultValue="0";
			};
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
		class EventHandlers: Eventhandlers
		{
			class rhs_pontoon_static
			{
				init="(_this select 0) enableVehicleCargo false";
			};
		};
	};
};
class CfgNonAIVehicles
{
	class Bridge_base_F;
	class Land_rhs_pmp_static: Bridge_base_F
	{
		cost=8000;
		armor=1500;
	};
};
