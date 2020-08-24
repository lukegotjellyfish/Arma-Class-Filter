class CfgPatches
{
	class A3_Functions_F_MP_Mark
	{
		name="Arma 3 Marksmen (Multiplayer) - Script Functions";
		units[]={};
		weapons[]={};
	};
};
class CfgFunctions
{
	class A3
	{
		class Inventory
		{
			class inventoryExists
			{
				file="a3\functions_f_mp_mark\inventory\fn_inventoryExists.sqf";
			};
		};
		class Params
		{
			class paramTimeAcceleration
			{
				file="a3\functions_f_mp_mark\params\fn_paramTimeAcceleration.sqf";
			};
		};
	};
	class A3_Mark
	{
		tag="BIS";
		class DynamicGroups
		{
			file="A3\functions_f_mp_mark\DynamicGroups";
			class dynamicGroups;  //found empty after stripping
		};
		class Revive
		{
			file="a3\functions_f_mp_mark\revive";
			class disableRevive;  //found empty after stripping
			class reenableRevive;  //found empty after stripping
			class reviveInit
			{
				postInit=1;
			};
			class reviveEnabled;  //found empty after stripping
			class reviveAllowed;  //found empty after stripping
			class reviveIsValid;  //found empty after stripping
			class reviveIsValidSecure;  //found empty after stripping
			class reviveBleedOut;  //found empty after stripping
			class reviveIconControl;  //found empty after stripping
			class reviveOnState;  //found empty after stripping
			class reviveOnStateJIP;  //found empty after stripping
			class reviveOnBeingRevived;  //found empty after stripping
			class reviveOnForcingRespawn;  //found empty after stripping
			class reviveEhKilled;  //found empty after stripping
			class reviveEhRespawn;  //found empty after stripping
			class reviveEhDammaged;  //found empty after stripping
			class reviveEhHandleDamage;  //found empty after stripping
			class reviveEhHandleHeal;  //found empty after stripping
			class reviveDebug;  //found empty after stripping
			class reviveDamageReset;  //found empty after stripping
			class reviveSecureUnit;  //found empty after stripping
			class reviveGet3dIcons;  //found empty after stripping
			class reviveGetActionIcon;  //found empty after stripping
		};
		class GUI
		{
			file="a3\functions_f_mp_mark\gui";
			class keyHold;  //found empty after stripping
		};
	};
};
class CfgRespawnTemplates
{
	delete Revive;
};
class CfgHints
{
	class DynamicGroups
	{
		displayName="Dynamic Groups";
		class DG_DynamicGroups
		{
			displayName="Dynamic Groups";
			displayNameShort="Groups";
			description="Join or create your own group, invite other players and form your own squad.";
			tip="Press %11 to open/close the Dynamic Groups interface";
			arguments[]=
			{
				
				{
					
					{
						"TeamSwitch"
					}
				}
			};
			image="\A3\Ui_f\data\GUI\Cfg\Hints\Commanding_ca.paa";
		};
	};
	class MP_Marksmen
	{
		displayName="HVT";
		class MK_GroupMarkers
		{
			displayName="$STR_A3_mp_groundsupport_hints_group_markers_label";
			description="Group Markers allow you to visualize friendly groups near your location.";
			tip="Press %3CTRL +%4 %11 to toggle on/off the group markers";
			image="\a3\ui_f\data\gui\cfg\hints\UnitType_CA.paa";
			arguments[]=
			{
				
				{
					
					{
						"TeamSwitch"
					}
				}
			};
		};
	};
};
class CfgNotifications
{
	class DynamicGroups_Base
	{
		iconPicture="\a3\Ui_f\data\GUI\Cfg\Ranks\general_gs.paa";
		duration=4;
		sound="defaultNotification";
		soundClose="defaultNotificationClose";
	};
	class DynamicGroups_PlayerJoined: DynamicGroups_Base
	{
		title="$STR_A3_RscDisplayDynamicGroups_Notifications_Title_NewMember";
		description="$STR_A3_RscDisplayDynamicGroups_Notifications_Description_NewMember";
	};
	class DynamicGroups_PlayerJoinFailed: DynamicGroups_Base
	{
		title="JOIN FAILED";
		description="%1 is full";
	};
	class DynamicGroups_PlayerLeft: DynamicGroups_Base
	{
		title="$STR_A3_RscDisplayDynamicGroups_Notifications_Title_MemberLeft";
		description="$STR_A3_RscDisplayDynamicGroups_Notifications_Description_MemberLeft";
	};
	class DynamicGroups_InviteReceived: DynamicGroups_Base
	{
		title="$STR_A3_RscDisplayDynamicGroups_Notifications_Title_NewInvite";
		description="%1 invited you<br/>Press and hold %2 to accept";
	};
	class DynamicGroups_PromotedToLeader: DynamicGroups_Base
	{
		title="$STR_A3_RscDisplayDynamicGroups_Notifications_Title_Promoted";
		description="$STR_A3_RscDisplayDynamicGroups_Notifications_Description_Promoted";
	};
	class DynamicGroups_GroupDisbanded: DynamicGroups_Base
	{
		title="$STR_A3_RscDisplayDynamicGroups_Notifications_Title_Disbanded";
		description="$STR_A3_RscDisplayDynamicGroups_Notifications_Description_Disbanded";
	};
	class DynamicGroups_Kicked: DynamicGroups_Base
	{
		title="$STR_A3_RscDisplayDynamicGroups_Notifications_Title_Kicked";
		description="$STR_A3_RscDisplayDynamicGroups_Notifications_Description_Kicked";
	};
	class DynamicGroups_Joined: DynamicGroups_Base
	{
		title="Joined New Group";
		description="You joined %1";
	};
};
class CfgRevive
{
	class ActionThresholds
	{
		unconsciousBody=0.5;
		unconsciousHead=10;
		unconsciousArm=0.5;
		unconsciousLeg=0.5;
	};
	class Textures
	{
		class OverlayIcons
		{
			d100_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\d100_ca.paa";
			d50_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\d50_ca.paa";
			d75_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\d75_ca.paa";
			f100_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\f100_ca.paa";
			f50_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\f50_ca.paa";
			f75_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\f75_ca.paa";
			r100_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\r100_ca.paa";
			r50_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\r50_ca.paa";
			r75_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\r75_ca.paa";
			u100_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\u100_ca.paa";
			u50_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\u50_ca.paa";
			u75_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIcons\u75_ca.paa";
		};
		class OverlayIconsGroup
		{
			d100_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\d100_ca.paa";
			d50_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\d50_ca.paa";
			d75_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\d75_ca.paa";
			f100_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\f100_ca.paa";
			f50_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\f50_ca.paa";
			f75_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\f75_ca.paa";
			r100_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\r100_ca.paa";
			r50_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\r50_ca.paa";
			r75_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\r75_ca.paa";
			u100_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\u100_ca.paa";
			u50_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\u50_ca.paa";
			u75_ca="\A3\Ui_f\data\IGUI\Cfg\Revive\overlayIconsGroup\u75_ca.paa";
		};
	};
};
