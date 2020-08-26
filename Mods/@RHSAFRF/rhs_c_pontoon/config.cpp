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
		requiredVersion=1.96;
		requiredAddons[]=
		{
			"rhs_main"
		};
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
			class pontoon_update;  //found empty after stripping
			class pontoon_climbAboard;  //found empty after stripping
			class pontoon_loadOnVehicle;  //found empty after stripping
		};
	};
};
class CfgVehicles
{
	class House;
	class House_F: House
	{
		class EventHandlers;
		class DestructionEffects;
	};
	class rhs_pontoon_static: House_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		cost=8000;
		armor=1500;
		model="rhsafrf\addons\rhs_pontoon\rhs_pmp_static.p3d";
		displayName="Pontoon (static)";
		displayNameShort="Pontoon (s)";
		vehicleClass="rhs_vehclass_boat";
		icon="iconObject_2x3";
		editorSubCategory="rhs_EdSubcat_boat";
		faction="rhs_faction_vmf";
		class Attributes
		{
			class rhs_fold_pontoon
			{
				displayName="Fold Pontoon";
				property="rhs_fold_pontoon";
				control="CheckboxNumber";
				expression="_this animateSource ['fold_source',_value,true];_this enableVehicleCargo (_value isEqualTo 1);";
				defaultValue="0";
			};
		};
		class AnimationSources
		{
			class fold_source
			{
				source="user";
				animPeriod=4;
				initPhase=0;
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
		class UserActions
		{
			class climbAboard
			{
				displayName="Climb aboard";
				position="climbAboard";
				showWindow=1;
				priority=14;
				radius=5;
				onlyForPlayer=0;
				condition="alive this && {this animationSourcePhase 'fold_source' isEqualTo 0} && {((getPosASL this) # 2) > ((getposasl (call rhs_fnc_findPlayer)) # 2)}";
				statement="[] spawn rhs_fnc_pontoon_climbAboard;";
				shortcut="moveForward";
				actionNamedSel="action_selection";
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
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		cost=8000;
		armor=1500;
		model="rhsafrf\addons\rhs_pontoon\rhs_pmp_float.p3d";
		displayName="Pontoon (floating)";
		vehicleClass="rhs_vehclass_boat";
		icon="iconObject_2x3";
		editorSubCategory="rhs_EdSubcat_boat";
		waterLeakiness=9.9999997e-005;
		waterResistanceCoef=0.2;
		class Attributes
		{
			class rhs_fold_pontoon
			{
				displayName="Fold Pontoon";
				property="rhs_fold_pontoon";
				control="CheckboxNumber";
				expression="_this animateSource ['fold_source',_value,true];_this enableVehicleCargo (_value isEqualTo 1);";
				defaultValue="0";
			};
		};
		class AnimationSources
		{
			class fold_source
			{
				source="user";
				animPeriod=4;
				initPhase=0;
			};
		};
		class UserActions
		{
			class climbAboard
			{
				displayName="Climb aboard pontoon";
				position="climbAboard";
				showWindow=1;
				priority=14;
				radius=5;
				onlyForPlayer=0;
				condition="alive this && {this animationSourcePhase 'fold_source' isEqualTo 0} && {((getPosASL this) # 2) > ((getposasl (call rhs_fnc_findPlayer)) # 2)}";
				statement="[] spawn rhs_fnc_pontoon_climbAboard;";
				shortcut="moveForward";
				actionNamedSel="action_selection";
			};
			class fold: climbAboard
			{
				displayName="Fold pontoon";
				shortcut="";
				priority=3;
				condition="alive this && {this animationSourcePhase 'fold_source' isEqualTo 0}";
				statement="this animateSource ['fold_source',1];this enableVehicleCargo true;";
			};
			class unfold: fold
			{
				displayName="Unfold pontoon";
				condition="alive this && {this animationSourcePhase 'fold_source' isEqualTo 1}";
				statement="this animateSource ['fold_source',0];this enableVehicleCargo false;";
			};
			class load: fold
			{
				displayName="Load pontoon on nearby vehicle";
				condition="alive this && {this animationSourcePhase 'fold_source' isEqualTo 1}";
				statement="[this] call rhs_fnc_pontoon_loadOnVehicle;";
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
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		cost=8000;
		armor=1500;
		model="rhsafrf\addons\rhs_pontoon\rhs_pmp_static.p3d";
		displayName="Pontoon (static)";
		class UserActions
		{
			class climbAboard
			{
				displayName="Climb aboard";
				position="climbAboard";
				showWindow=1;
				priority=14;
				radius=5;
				onlyForPlayer=0;
				condition="alive this && {this animationSourcePhase 'fold_source' isEqualTo 0}";
				statement="[] spawn rhs_fnc_pontoon_climbAboard;";
				shortcut="";
			};
		};
	};
};
