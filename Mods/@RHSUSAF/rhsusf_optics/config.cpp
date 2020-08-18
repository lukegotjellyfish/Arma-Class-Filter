class CfgPatches
{
	class rhsusf_optics
	{
		units[]={};
		weapons[]={};
	};
};
class CfgFontFamilies
{
	class rhsusf_digital_font
	{
		fonts[]=
		{
			"\rhsusf\addons\rhsusf_optics\scripts\digitalfont\digital46"
		};
	};
	class rhsusf_digital_font_var
	{
		fonts[]=
		{
			"\rhsusf\addons\rhsusf_optics\scripts\digitalfont_var\digital_var46"
		};
	};
	class rhsusf_digital_font_usa
	{
		fonts[]=
		{
			"\rhsusf\addons\rhsusf_optics\scripts\digitalfont_usa\digitalfont_usa46"
		};
	};
	class rhsusf_txled
	{
		fonts[]=
		{
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled6",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled7",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled9",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled10",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled11",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled12",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled13",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled14",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled15",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled16",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled17",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled18",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled19",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled20",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled21",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled22",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled23",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled24",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled25",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled26",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled27",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled28",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled29",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled30",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled31",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled34",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled37",
			"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled46"
		};
		spaceWidth=0.30000001;
		spacing=0.2;
	};
};
class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscMapControl;
class RscControlsGroup;
class rhs_1v528_Button
{
	access=0;
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	style=2;
	x=0;
	y=0;
	w="<null>";
	h="<null>";
	shadow=2;
	font="PuristaMedium";
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	borderSize=0;
	offsetX=0;
	offsetY=0;
	offsetPressedX=0;
	offsetPressedY=0;
	period=1.2;
	periodFocus=1.2;
	periodOver=1.2;
};
class RHS_m1_ccp_computer
{
	enableSimulation=1;
	idd=101;
	movingenable=0;
	class Controls
	{
		class us_button_base: rhs_1v528_Button
		{
			idc=1;
			soundClick[]=
			{
				"rhsusf\addons\rhsusf_optics\scripts\us_komp\sounds\button.wav",
				0.88999999,
				1
			};
			x="0.477965 * safezoneW + safezoneX";
			y="0.415365 * safezoneH + safezoneY";
			w=0;
			h=0;
		};
		class num9: us_button_base
		{
			idc=7509;
			x="0.477965 * safezoneW + safezoneX";
			y="0.415365 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[9] call rhsusf_fnc_ccp_setRange";
		};
		class num8: us_button_base
		{
			idc=7508;
			x="0.447115 * safezoneW + safezoneX";
			y="0.415365 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[8] call rhsusf_fnc_ccp_setRange";
		};
		class num7: us_button_base
		{
			idc=7507;
			x="0.414943 * safezoneW + safezoneX";
			y="0.418186 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[7] call rhsusf_fnc_ccp_setRange";
		};
		class num6: us_button_base
		{
			idc=7506;
			x="0.477965 * safezoneW + safezoneX";
			y="0.490596 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[6] call rhsusf_fnc_ccp_setRange";
		};
		class num5: us_button_base
		{
			idc=7505;
			x="0.447115 * safezoneW + safezoneX";
			y="0.490596 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[5] call rhsusf_fnc_ccp_setRange";
		};
		class num4: us_button_base
		{
			idc=7504;
			x="0.416265 * safezoneW + safezoneX";
			y="0.490596 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[4] call rhsusf_fnc_ccp_setRange";
		};
		class num3: us_button_base
		{
			idc=7503;
			x="0.477965 * safezoneW + safezoneX";
			y="0.556424 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[3] call rhsusf_fnc_ccp_setRange";
		};
		class num2: us_button_base
		{
			idc=7502;
			x="0.447115 * safezoneW + safezoneX";
			y="0.556424 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[2] call rhsusf_fnc_ccp_setRange";
		};
		class num1: us_button_base
		{
			idc=7501;
			x="0.416265 * safezoneW + safezoneX";
			y="0.556424 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[1] call rhsusf_fnc_ccp_setRange";
		};
		class num0: us_button_base
		{
			idc=7500;
			x="0.447115 * safezoneW + safezoneX";
			y="0.622251 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[0] call rhsusf_fnc_ccp_setRange";
		};
		class enter: us_button_base
		{
			idc=7401;
			x="0.411858 * safezoneW + safezoneX";
			y="0.688079 * safezoneH + safezoneY";
			w="0.0352567 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[11] call rhsusf_fnc_ccp_setRange";
		};
		class clear: us_button_base
		{
			idc=7402;
			x="0.46915 * safezoneW + safezoneX";
			y="0.688079 * safezoneH + safezoneY";
			w="0.0352567 * safezoneW";
			h="0.0470196 * safezoneH";
			action="[12] call rhsusf_fnc_ccp_setRange";
		};
		class range: us_button_base
		{
			idc=7403;
			x="0.522035 * safezoneW + safezoneX";
			y="0.603443 * safezoneH + safezoneY";
			w="0.0352567 * safezoneW";
			h="0.0752314 * safezoneH";
			action="[13] call rhsusf_fnc_ccp_setRange";
		};
		class background: RscPicture
		{
			idc=1200;
			x="0.314902 * safezoneW + safezoneX";
			y="0.105035 * safezoneH + safezoneY";
			w="0.370196 * safezoneW";
			h="0.78993 * safezoneH";
		};
		class screen1: RscPicture
		{
			idc=1201;
			x="0.451522 * safezoneW + safezoneX";
			y="0.3181325 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0282118 * safezoneH";
		};
		class screen2: screen1
		{
			idc=1202;
			x="0.436301 * safezoneW + safezoneX";
		};
		class screen3: screen1
		{
			idc=1203;
			x="0.420672 * safezoneW + safezoneX";
		};
		class screen4: screen1
		{
			idc=1204;
			x="0.403044 * safezoneW + safezoneX";
		};
		class range_lit: RscPicture
		{
			idc=1205;
			x="0.513221 * safezoneW + safezoneX";
			y="0.584635 * safezoneH + safezoneY";
			w="0.0528851 * safezoneW";
			h="0.112847 * safezoneH";
		};
	};
};
class RscCompass;
class CfgInGameUI
{
	class Cursor
	{
		class Targeting
		{
			class MarkedTarget
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorLockable[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorFriendly[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class MarkedTargetNoLos: MarkedTarget
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"0.6+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorLockable[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorFriendly[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class Seeker
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerLocked: Seeker
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerNoLOS: Seeker
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"0.6+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class ImpactPoint: Seeker
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class ImpactPointNoLOS: ImpactPoint
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class HitPrediction: Seeker
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class HitConfirm: Seeker;  //found empty after stripping
			class KnownTarget: Seeker
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class LaserTarget: KnownTarget
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class MarkedTargetNoLosRemote: MarkedTarget
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorLockable[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorFriendly[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerRemote
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerLockedRemote: Seeker
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerNoLosRemote: Seeker
			{
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
		};
	};
};
class CfgFunctions
{
	class RHSUSF
	{
		tag="RHSUSF";
		class functions
		{
			class RF_M1
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1.sqf";
				description="FCS Script for M1 Abrams series";
			};
			class rf_M1_digit
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1_digit.sqf";
				description="FCS Digits showing Script for M1 Abrams series";
			};
			class rf_M1_elev
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1_elev.sqf";
				description="FCS Digits showing Script for M1 Abrams series";
			};
			class sight_m1_lead
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_lead_m1.sqf";
				description="M1 Lead calculation";
			};
			class fireOnMove
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_fireOnMove.sqf";
				description="Fire on move script";
			};
			class ccp_setRange
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\us_komp\setRange.sqf";
				description="FCS Digits showing Script for M1 Abrams series";
			};
			class findAngle
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\RHS_findAngle.sqf";
				description="FCS PLISSA for T-80UE-1";
			};
			class calcBalistic
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\RHS_calcBalistic.sqf";
				description="FCS PLISSA for T-80UE-1";
			};
			class gunOffset
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\RHS_gunOffset.sqf";
				description="Gun & view mem point offset fixer";
			};
			class uh1_Handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_uh1_Handler.sqf";
				description="UH-1Y FLIR Observer Handler";
			};
			class uh1_obsHandler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_uh1_obsHandler.sqf";
				description="UH-1Y FLIR Observer Handler";
			};
			class announcer
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_announcer.sqf";
				description="Announcer handler";
			};
			class incomingMissile
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_incomingMissle.sqf";
				description="incoming missile voice announcer";
			};
			class pipHandler_m113
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_pipHandler_m113.sqf";
				description="M113 Driver PiP Handler";
			};
			class pipHandler_m1117
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_pipHandler_m1117.sqf";
				description="M1117 gunner feed Handler";
			};
			class m1117com
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_m1117com.sqf";
				description="M1117 gunner feed";
			};
			class autoTrack
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\RHS_autoTrack.sqf";
				description="Auto track target script";
			};
			class laserTarget
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_laserTarget.sqf";
				description="Additional functionality and interaction for FCS laser range finders";
			};
			class ammoIndexing
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\RHS_ammoIndexing.sqf";
				description="Indexing rounds in carousel";
			};
			class randomRadio
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_randomRadio.sqf";
				description="Random Radio script";
			};
			class IBAS_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_ibas_handler.sqf";
				description="FCS handler for M2A3 IBAS sight (used on M2A2SA/M2A3/M2A3ECP1/M2A3ECP2)";
			};
			class IBAS_CIV_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_ibas_civ_handler.sqf";
				description="FCS handler for M2A3 CIV commander's sight (used on M2A2SA/M2A3/M2A3ECP1/M2A3ECP2)";
			};
			class ISU_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_isu_handler.sqf";
				description="FCS handler for M2 ISU sight (used on M2/M2A1/M2A2)";
			};
			class ODS_ISU_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_ods_isu_handler.sqf";
				description="FCS handler for M2A2ODS ISU sight (used on M2A2ODS)";
			};
			class A10A_tvm_screen
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_a10a_tvm_screen.sqf";
				description="FCS handler for A-10A TVM targeting screen";
			};
			class CWSS_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_cwss_handler.sqf";
				description="FCS handler for M1A1 CWSS commander's sight";
			};
			class LRAS3_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_LRAS3_handler.sqf";
				description="FCS handler for LRAS3 optic";
			};
			class ITAS_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_ITAS_handler.sqf";
				description="FCS handler for ITAS sight";
			};
			class MITAS_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_MITAS_handler.sqf";
				description="FCS handler for MITAS sight";
			};
			class stryker_m151_loader
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_m151_loader.sqf";
			};
			class stryker_m151_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_m151_handler.sqf";
			};
			class stryker_unitInfo
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_unitInfo.sqf";
			};
			class stryker_unitInfo_m1134
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_unitInfo_m1134.sqf";
			};
			class matv_unitInfo
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_matv_unitInfo.sqf";
			};
			class CROWS_M153_loader
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_CROWS_M153_loader.sqf";
			};
			class CROWS_M153_handler
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_CROWS_M153_handler.sqf";
			};
			class BFT_Update
			{
				file="\rhsusf\addons\rhsusf_optics\scripts\rhs_bft_update.sqf";
			};
		};
	};
};
