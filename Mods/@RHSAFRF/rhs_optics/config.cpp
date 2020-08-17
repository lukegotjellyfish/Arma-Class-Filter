class CfgPatches
{
	class rhs_optics
	{
		units[]={};
		weapons[]={};
		version="0.1.1.1";
	};
};
class CfgFontFamilies
{
	class rhs_font_rus
	{
		fonts[]=
		{
			"\rhsafrf\addons\rhs_optics\scripts\font_rus\rus_font_b-bold46"
		};
	};
	class rhs_digital_font
	{
		fonts[]=
		{
			"\rhsafrf\addons\rhs_optics\scripts\digitalfont\digital46"
		};
	};
	class rhs_digital_font_var
	{
		fonts[]=
		{
			"\rhsafrf\addons\rhs_optics\scripts\digitalfont_var\digital_var46"
		};
	};
	class rhs_digital_font_rus
	{
		fonts[]=
		{
			"\rhsafrf\addons\rhs_optics\scripts\digitalfont_rus\digital_var46"
		};
	};
};
class RscMapControl;
class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
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
class RHS_1g42_1v528_computer
{
	enableSimulation=1;
	idd=101;
	movingenable=0;
	class Controls
	{
		class switch: rhs_1v528_Button
		{
			idc=7400;
			x="0.548478 * safezoneW + safezoneX";
			y="0.565828 * safezoneH + safezoneY";
			w="0.0352567 * safezoneW";
			h="0.0470196 * safezoneH";
			tooltip="On/Off";
			soundClick[]=
			{
				"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_pyk.ogg",
				0.88999999,
				1
			};
			action="['0',2] call rhs_fnc_1v528_setRange";
		};
		class check: rhs_1v528_Button
		{
			idc=7401;
			x="0.583735 * safezoneW + safezoneX";
			y="0.565828 * safezoneH + safezoneY";
			w="0.0352567 * safezoneW";
			h="0.0470196 * safezoneH";
			tooltip="Check controls";
			soundClick[]=
			{
				"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\button_press.ogg",
				0.88999999,
				1
			};
			action="['0',3] call rhs_fnc_1v528_setRange";
		};
		class switch_base: rhs_1v528_Button
		{
			idc=0;
			x=0;
			y=0;
			w=0;
			h=0;
			soundClick[]=
			{
				"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_click.ogg",
				0.88999999,
				1
			};
		};
		class d0: switch_base
		{
			idc=7501;
			x="0.5 * safezoneW + safezoneX";
			y="0.481192 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="0m";
			action="['0',0] call rhs_fnc_1v528_setRange";
		};
		class d50: switch_base
		{
			idc=7502;
			x="0.495593 * safezoneW + safezoneX";
			y="0.462384 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="50m";
			action="['50',0] call rhs_fnc_1v528_setRange";
		};
		class d100: switch_base
		{
			idc=7503;
			x="0.482372 * safezoneW + safezoneX";
			y="0.462384 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="100m";
			action="['100',0] call rhs_fnc_1v528_setRange";
		};
		class d150: switch_base
		{
			idc=7504;
			x="0.486779 * safezoneW + safezoneX";
			y="0.443576 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="150m";
			action="['150',0] call rhs_fnc_1v528_setRange";
		};
		class d200: switch_base
		{
			idc=7505;
			x="0.482372 * safezoneW + safezoneX";
			y="0.434173 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.00940393 * safezoneH";
			tooltip="200m";
			action="['200',0] call rhs_fnc_1v528_setRange";
		};
		class d250: switch_base
		{
			idc=7506;
			x="0.486779 * safezoneW + safezoneX";
			y="0.415365 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="250";
			action="['250',0] call rhs_fnc_1v528_setRange";
		};
		class d300: switch_base
		{
			idc=7507;
			x="0.477965 * safezoneW + safezoneX";
			y="0.396557 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="300m";
			action="['300',0] call rhs_fnc_1v528_setRange";
		};
		class d350: switch_base
		{
			idc=7508;
			x="0.491186 * safezoneW + safezoneX";
			y="0.396557 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="350m";
			action="['350',0] call rhs_fnc_1v528_setRange";
		};
		class d400: switch_base
		{
			idc=7509;
			x="0.491186 * safezoneW + safezoneX";
			y="0.377749 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="400m";
			action="['400',0] call rhs_fnc_1v528_setRange";
		};
		class d450: switch_base
		{
			idc=7510;
			x="0.504407 * safezoneW + safezoneX";
			y="0.387153 * safezoneH + safezoneY";
			w="0.00881419 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="450m";
			action="['450',0] call rhs_fnc_1v528_setRange";
		};
		class d500: switch_base
		{
			idc=7511;
			x="0.513221 * safezoneW + safezoneX";
			y="0.377749 * safezoneH + safezoneY";
			w="0.00440709 * safezoneW";
			h="0.0282118 * safezoneH";
			tooltip="500m";
			action="['500',0] call rhs_fnc_1v528_setRange";
		};
		class d550: switch_base
		{
			idc=7512;
			x="0.517628 * safezoneW + safezoneX";
			y="0.387153 * safezoneH + safezoneY";
			w="0.00881419 * safezoneW";
			h="0.0282118 * safezoneH";
			tooltip="550m";
			action="['550',0] call rhs_fnc_1v528_setRange";
		};
		class d600: switch_base
		{
			idc=7513;
			x="0.526443 * safezoneW + safezoneX";
			y="0.377749 * safezoneH + safezoneY";
			w="0.00881419 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="600m";
			action="['600',0] call rhs_fnc_1v528_setRange";
		};
		class d650: switch_base
		{
			idc=7514;
			x="0.526443 * safezoneW + safezoneX";
			y="0.396557 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.00940393 * safezoneH";
			tooltip="650m";
			action="['650',0] call rhs_fnc_1v528_setRange";
		};
		class d700: switch_base
		{
			idc=7515;
			x="0.539664 * safezoneW + safezoneX";
			y="0.396557 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="700m";
			action="['700',0] call rhs_fnc_1v528_setRange";
		};
		class d750: switch_base
		{
			idc=7516;
			x="0.53085 * safezoneW + safezoneX";
			y="0.415365 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="750m";
			action="['750',0] call rhs_fnc_1v528_setRange";
		};
		class d80: switch_base
		{
			idc=7517;
			x="0.544071 * safezoneW + safezoneX";
			y="0.424769 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="800m";
			action="['800',0] call rhs_fnc_1v528_setRange";
		};
		class d850: switch_base
		{
			idc=7518;
			x="0.53085 * safezoneW + safezoneX";
			y="0.443576 * safezoneH + safezoneY";
			w="0.00881419 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="850m";
			action="['850',0] call rhs_fnc_1v528_setRange";
		};
		class d900: switch_base
		{
			idc=7519;
			x="0.535257 * safezoneW + safezoneX";
			y="0.462384 * safezoneH + safezoneY";
			w="0.0132213 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="900m";
			action="['900',0] call rhs_fnc_1v528_setRange";
		};
		class d950: switch_base
		{
			idc=7520;
			x="0.526443 * safezoneW + safezoneX";
			y="0.462384 * safezoneH + safezoneY";
			w="0.00881419 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="950m";
			action="['950',0] call rhs_fnc_1v528_setRange";
		};
		class d1000: switch_base
		{
			idc=7521;
			x="0.517628 * safezoneW + safezoneX";
			y="0.462384 * safezoneH + safezoneY";
			w="0.00881419 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="1000m";
			action="['1000',0] call rhs_fnc_1v528_setRange";
		};
		class gA: switch_base
		{
			idc=7421;
			x="0.544071 * safezoneW + safezoneX";
			y="0.443576 * safezoneH + safezoneY";
			w="0.0308497 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="Automatic mode";
			action="['aw',1] call rhs_fnc_1v528_setRange";
		};
		class g0: switch_base
		{
			idc=7422;
			x="0.548478 * safezoneW + safezoneX";
			y="0.405961 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="0m";
			action="['0',1] call rhs_fnc_1v528_setRange";
		};
		class g1000: switch_base
		{
			idc=7423;
			x="0.552885 * safezoneW + safezoneX";
			y="0.387153 * safezoneH + safezoneY";
			w="0.0176284 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="1000m";
			action="['1000',1] call rhs_fnc_1v528_setRange";
		};
		class g2000: switch_base
		{
			idc=7424;
			x="0.570513 * safezoneW + safezoneX";
			y="0.368345 * safezoneH + safezoneY";
			w="0.0176284 * safezoneW";
			h="0.0376157 * safezoneH";
			tooltip="2000m";
			action="['2000',1] call rhs_fnc_1v528_setRange";
		};
		class g3000: switch_base
		{
			idc=7425;
			x="0.592549 * safezoneW + safezoneX";
			y="0.368345 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0376157 * safezoneH";
			tooltip="3000m";
			action="['3000',1] call rhs_fnc_1v528_setRange";
		};
		class rhs_1v528_background: RscPicture
		{
			idc=1200;
			x="0.328123 * safezoneW + safezoneX";
			y="0.358941 * safezoneH + safezoneY";
			w="0.317311 * safezoneW";
			h="0.291522 * safezoneH";
		};
		class switch_distance_100: rhs_1v528_background
		{
			idc=1201;
		};
		class switch_distance_1000: rhs_1v528_background
		{
			idc=1202;
		};
		class switch_slope: rhs_1v528_background
		{
			idc=1203;
		};
		class light_slope: rhs_1v528_background
		{
			idc=1205;
		};
		class light_w: rhs_1v528_background
		{
			idc=1206;
		};
		class light_st_beta: rhs_1v528_background
		{
			idc=1207;
		};
		class light_st_alpha: rhs_1v528_background
		{
			idc=1208;
		};
		class distance_100: rhs_1v528_Button
		{
			x="0.5 * safezoneW + safezoneX";
			y="0.415365 * safezoneH + safezoneY";
			w="0.0308497 * safezoneW";
			h="0.0376157 * safezoneH";
			tooltip="Distance switch 100m";
			idc=31;
		};
		class Distance_1000: distance_100
		{
			x="0.574921 * safezoneW + safezoneX";
			y="0.415365 * safezoneH + safezoneY";
			w="0.0352567 * safezoneW";
			h="0.0470196 * safezoneH";
			tooltip="Distance switch 1000m";
			idc=31;
		};
		class Slope_text: distance_100
		{
			x="0.544071 * safezoneW + safezoneX";
			y="0.518808 * safezoneH + safezoneY";
			w="0.0528851 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="Angle sensor";
		};
		class switch_off: distance_100
		{
			x="0.552885 * safezoneW + safezoneX";
			y="0.612847 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="Off";
		};
		class switch_on: distance_100
		{
			x="0.552885 * safezoneW + safezoneX";
			y="0.54702 * safezoneH + safezoneY";
			w="0.0220355 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="On";
		};
		class t_ground: distance_100
		{
			x="0.429487 * safezoneW + safezoneX";
			y="0.603443 * safezoneH + safezoneY";
			w="0.0264426 * safezoneW";
			h="0.0282118 * safezoneH";
			tooltip="Ground temperature";
		};
		class t_air: distance_100
		{
			x="0.5 * safezoneW + safezoneX";
			y="0.603443 * safezoneH + safezoneY";
			w="0.0264426 * safezoneW";
			h="0.0282118 * safezoneH";
			tooltip="Air temperature";
		};
		class delta: distance_100
		{
			x="0.358973 * safezoneW + safezoneX";
			y="0.612847 * safezoneH + safezoneY";
			w="0.0308497 * safezoneW";
			h="0.0282118 * safezoneH";
			tooltip="Delta D adjustment";
		};
		class pressure: distance_100
		{
			x="0.354566 * safezoneW + safezoneX";
			y="0.490596 * safezoneH + safezoneY";
			w="0.048478 * safezoneW";
			h="0.0188079 * safezoneH";
			tooltip="Air pressure";
		};
		class deltaV: distance_100
		{
			x="0.429487 * safezoneW + safezoneX";
			y="0.481192 * safezoneH + safezoneY";
			w="0.0264426 * safezoneW";
			h="0.0282118 * safezoneH";
			tooltip="Delta V adjustment";
		};
		class manualD: distance_100
		{
			x="0.53085 * safezoneW + safezoneX";
			y="0.481192 * safezoneH + safezoneY";
			w="0.0396638 * safezoneW";
			h="0.0282118 * safezoneH";
			tooltip="Manual distance input";
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
			class HitConfirm: Seeker
			{
			};
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
class RHS_P37_Radar
{
	idd=314;
	scriptName="RscCustomInfoSensors";
	scriptPath="IGUI";
	onUnload="['onUnload',_this,'RscCustomInfoSensors','IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsBackground
	{
		class Background: RscPicture
		{
			IDC=15110;
			x=0;
			y="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
			h="(40 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			colorText[]=
			{
				"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8)"
			};
		};
		class BackgroundGroup: RscControlsGroupNoScrollbars
		{
			IDC=15111;
			x="0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y="1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Viewport: RscControlsGroupNoScrollbars
				{
					IDC=101;
					x=0;
					y=0;
					w="(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Circles: RscPicture
				{
					IDC=102;
					x="0 - 0.7875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w="(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 1.325 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1.325 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[]=
					{
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
					};
				};
				class OwnerVehicle: RscPicture
				{
					IDC=103;
					x="0.5 * (		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 1.325 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1.2875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y="0.5 * (		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1.325 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					w="1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[]=
					{
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
						"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
					};
				};
			};
		};
	};
	class controls
	{
		class RadarOff: RscIGUIText
		{
			style=2;
			idc=106;
			x="0.2 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y=0;
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="0.3 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscIGUIText
		{
			colorBackground[]=
			{
				"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
			};
			idc=15112;
			x=0;
			y=0;
			w="(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class RadarOn: RadarOff
		{
			idc=105;
			colorText[]={0,1,1,1};
		};
		class Heading: RscIGUIText
		{
			style=2;
			idc=111;
			x="0.55 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y=0;
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="0.15 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			sizeEx="0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Range: RscIGUIValue
		{
			IDC=104;
			style=1;
			x="0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y=0;
			w="0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Target: RscIGUIText
		{
			IDC=107;
			x=0;
			y="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TargetRange: RscIGUIText
		{
			IDC=108;
			x=0;
			y="1.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TargetAlt: RscIGUIText
		{
			IDC=110;
			style=1;
			x="0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y="1.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TargetSpeed: RscIGUIText
		{
			IDC=109;
			style=1;
			x="0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w="0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class sectors
	{
		icon15="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector15_ca.paa";
		icon30="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector30_ca.paa";
		icon45="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector45_ca.paa";
		icon60="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector60_ca.paa";
		icon75="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector75_ca.paa";
		icon90="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector90_ca.paa";
		icon105="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector105_ca.paa";
		icon120="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector120_ca.paa";
		icon135="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector135_ca.paa";
		icon150="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector150_ca.paa";
		icon165="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector165_ca.paa";
		icon180="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector180_ca.paa";
		icon195="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector195_ca.paa";
		icon210="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector210_ca.paa";
		icon225="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector225_ca.paa";
		icon240="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector240_ca.paa";
		icon255="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector255_ca.paa";
		icon270="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector270_ca.paa";
		icon285="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector285_ca.paa";
		icon300="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector300_ca.paa";
		icon315="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector315_ca.paa";
		icon330="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector330_ca.paa";
		icon345="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector345_ca.paa";
		icon360="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector360_ca.paa";
	};
	class targets
	{
		colorGroup[]={0.69999999,1,0.40000001,1};
		colorAssigned[]={1,0,0,1};
		colorMarked[]={1,1,1,1};
		iconLaserTarget="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\LaserTarget_ca.paa";
		iconNVTarget="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\NVTarget_ca.paa";
		iconActiveSensor="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\ActiveSensor_ca.paa";
		iconMarkedTarget="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\MarkedTarget_ca.paa";
		iconAssignedTarget="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AssignedTarget_ca.paa";
		colorUnknown[]={1,1,1,1};
		iconUnknownAir="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
		iconUnknownAirRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
		iconUnknownGround="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
		iconUnknownGroundRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
		iconUnknownMan="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\UnknownMan_ca.paa";
		iconUnknownManRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\UnknownManRemote_ca.paa";
		colorFriendly[]={0,1,0,1};
		iconFriendlyAir="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
		iconFriendlyAirRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
		iconFriendlyGround="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
		iconFriendlyGroundRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
		iconFriendlyMan="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\FriendlyMan_ca.paa";
		iconFriendlyManRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\FriendlyManRemote_ca.paa";
		colorEnemy[]={1,0,0,1};
		iconEnemyAir="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
		iconEnemyAirRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
		iconEnemyGround="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
		iconEnemyGroundRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
		iconEnemyMan="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\EnemyMan_ca.paa";
		iconEnemyManRemote="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\EnemyManRemote_ca.paa";
	};
	class threats
	{
		colorMarking[]={1,1,0,1};
		colorLocking[]={1,0.5,0,1};
		colorMissile[]={1,0,0,1};
		iconmissile="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\missile_ca.paa";
		iconlocking="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\locking_ca.paa";
		iconmarking="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\marking_ca.paa";
		iconsector="A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\sector_ca.paa";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class sight_bmp2
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_bmp2.sqf";
				description="FCS for BMP-2";
			};
			class sight_btr80a
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_btr80a.sqf";
				description="FCS for BTR-80A";
			};
			class sight_1pz32
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pz32.sqf";
				description="FCS for BTR-80 (1PZ-3-2)";
			};
			class sight_1pz3
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pz3.sqf";
				description="FCS for TKN-3B & 1PZ-3";
			};
			class rF_t72
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_rF_t72.sqf";
				description="FCS for T72";
			};
			class rF_t72_Animate
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_rF_T72_anim.sqf";
				description="FCS for T72 - Gun Animation Part";
			};
			class sight_1g42
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g42.sqf";
				description="FCS for 1G42 Sights (T80 series)";
			};
			class sight_1g46
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g46.sqf";
				description="FCS for 1G46 Sights (T80U/T90 series)";
			};
			class sight_lead
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_lead.sqf";
				description="Calculating lead for tanks";
			};
			class sight_1g42_setElev
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g42_elev.sqf";
				description="Calculating elevation for 1g42";
			};
			class sight_bmp2_tkn3
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_bmp2_tkn3.sqf";
				description="FCS for TKN3-B Sights (BMP2)";
			};
			class sight_tkn3
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn3.sqf";
				description="FCS for TKN3-B Sights (T72B/BMP series)";
			};
			class sight_tkn4s
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn4s.sqf";
				description="FCS for TKN4-S Sights (T80U/T90 series)";
			};
			class sight_tkn4s_setElev
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn4s_elev.sqf";
				description="Calculating elevation for TKN4-S";
			};
			class sight_sprutsd
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_sprutsd.sqf";
				description="FCS for Sprut-SD";
			};
			class sight_1k13_3s_sprut
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1k13_3s_sprut.sqf";
				description="FCS for TKN4-S Sights (T80A/U/T90 series)";
			};
			class sight_1k13_3s_bmp3
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1k13_3s_bmp3.sqf";
				description="FCS for TKN4-S Sights (T80A/U/T90 series)";
			};
			class sight_essa
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa.sqf";
				description="FCS Catherine for BMD4 & BMP3M";
			};
			class sight_sosnau
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_sosnau.sqf";
				description="FCS Sosna-U for T-72B3";
			};
			class sight_essa_commander
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa_commander.sqf";
				description="FCS Catherine for BMD4 & BMP3M";
			};
			class sight_essa_elev
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa_elev.sqf";
				description="FCS Catherine for BMD4 & BMP3M";
			};
			class sight_agava2
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_agava2.sqf";
				description="FCS AGAVA-2 for T-80UM";
			};
			class sight_plissa
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_plissa.sqf";
				description="FCS PLISSA for T-80UE-1";
			};
			class sight_prp3_mortar
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_prp3_mortar.sqf";
				description="FCS for PRP3 mortar";
			};
			class sight_9s475
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_9s475.sqf";
				description="FCS for Mi-24 missle launcher";
			};
			class sight_1pn22m
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pn22m.sqf";
				description="FCS for 1PN22M sight used on BMP & BMD 1";
			};
			class ammoSwitch
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_ammoSwitch.sqf";
				description="Handling of automatic shell loading for tanks with autoloaders";
			};
			class ammoIndexing
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_ammoIndexing.sqf";
				description="Indexing rounds in carousel";
			};
			class openBallisticMenu
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_openBallisticMenu.sqf";
				description="Handling of automatic shell loading for tanks with autoloaders";
			};
			class autoloader
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_autoloader.sqf";
				description="Handling of automatic shell loading for tanks with autoloaders";
			};
			class autoloader_ui_eh
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_autoloader_ui_eh.sqf";
				description="Handling of inGameUISetEventHandler for autoloaders";
			};
			class autoloaderSwitch
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_autoloaderSwitch.sqf";
				description="Sequential Mode autoloader switch handler";
			};
			class fireOnMove
			{
				file="\rhsafrf\addons\rhs_optics\scripts\rhs_fireOnMove.sqf";
				description="Fire on move script";
			};
			class findAngle
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_findAngle.sqf";
				description="FCS PLISSA for T-80UE-1";
			};
			class findAngle2
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_findAngle2.sqf";
				description="FCS PLISSA for T-80UE-1";
			};
			class calcBalistic
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_calcBalistic.sqf";
				description="FCS PLISSA for T-80UE-1";
			};
			class calcBalistic2
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_calcBalistic2.sqf";
				description="FCS PLISSA for T-80UE-1";
			};
			class gunOffset
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_gunOffset.sqf";
				description="Gun & view mem point offset fixer";
			};
			class autoTrack
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_autoTrack.sqf";
				description="Auto track target script";
			};
			class compass_sprutsd
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_compass_sprutsd.sqf";
				description="Compass for Sprut-SD";
			};
			class compass_t72
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_compass_t72.sqf";
				description="Compass for T72";
			};
			class compass_t80
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_compass_t80.sqf";
				description="Compass for T80 Tanks";
			};
			class pipHandler_bmp3
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_pipHandler_bmp3.sqf";
				description="PiP windows handler for BMP3";
			};
			class pipHandler_bmp3m
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_pipHandler_bmp3m.sqf";
				description="PiP windows handler for BMP3M";
			};
			class ui_staticWeapon
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_ui_staticWeapon.sqf";
				description="UI handler for rotation of static weapons";
			};
			class fcs_2s3
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_2s3.sqf";
				description="Simple fcs function for 2s3";
			};
			class 1v528_setRange
			{
				file="\rhsafrf\addons\rhs_optics\scripts\1v528\setRange.sqf";
				description="Calculating elevation for 1g42";
			};
			class randomRadio
			{
				file="\rhsafrf\addons\rhs_optics\scripts\rhs_randomRadio.sqf";
				description="Random Radio script";
			};
			class laserTarget
			{
				file="\rhsafrf\addons\rhs_optics\scripts\rhs_laserTarget.sqf";
				description="Check laser target";
			};
			class su25_klenps
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_su25_klenps.sqf";
				description="Klen-PS simulation for Su-25";
			};
		};
		class SPO15_functions
		{
			class rwr_spo15
			{
				file="\rhsafrf\addons\rhs_optics\scripts\rhs_rwr_spo15.sqf";
				description="SPO-15 Beryeza main handler";
			};
			class rwr_spo15_eh
			{
				file="\rhsafrf\addons\rhs_optics\scripts\rhs_rwr_spo15_eh.sqf";
				description="SPO-15 Incoming Missile EH";
			};
		};
		class Ka52_functions
		{
			class ka52_handler
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_ka52.sqf";
				description="Ka-52 sync handler";
			};
			class sight_Samshin
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_samshin.sqf";
				description="Ka-52 Samshin-1 simulation handler";
			};
			class sight_Samshin_elev
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_samshin_elev.sqf";
				description="Ka-52 Samshin-1 simulation handler";
			};
		};
		class Mi28_functions
		{
			class Mi28_handler
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28.sqf";
				description="Mi-28sync handler";
			};
			class sight_mi28_fcs
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28_fcs.sqf";
				description="Mi-28 OPS-28 'TOR' simulation handler";
			};
			class sight_mi28_fcs_pilot
			{
				file="\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28_fcs_pilot.sqf";
				description="Mi-28 TOES-521 camera simulation handler";
			};
		};
	};
};
class CfgSounds
{
	class RHS_SwitchClick
	{
		name="Tank switch click";
		sound[]=
		{
			"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_click.ogg",
			1,
			1
		};
		titles[]={};
	};
	class RHS_SwitchToggle
	{
		name="Tank toggle click";
		sound[]=
		{
			"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_pyk.ogg",
			1,
			1
		};
		titles[]={};
	};
	class RHS_ButtonPress
	{
		name="Tank button press";
		sound[]=
		{
			"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\button_press.ogg",
			1,
			1
		};
		titles[]={};
	};
	class rhs_rwr_beep_single
	{
		name="beep";
		sound[]=
		{
			"rhsafrf\addons\rhs_optics\sounds\single_beep.wav",
			1.5848932,
			1,
			1
		};
		titles[]=
		{
			0,
			""
		};
	};
	class rhs_rwr_beep_short: rhs_rwr_beep_single
	{
		sound[]=
		{
			"rhsafrf\addons\rhs_optics\sounds\short_beep.wav",
			1.5848932,
			1,
			1
		};
	};
	class rhs_rwr_beep_long: rhs_rwr_beep_single
	{
		sound[]=
		{
			"rhsafrf\addons\rhs_optics\sounds\long_beep.wav",
			1.5848932,
			1,
			1
		};
	};
};
