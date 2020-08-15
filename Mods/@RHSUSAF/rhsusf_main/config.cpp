class CfgPatches
{
	class rhsusf_main
	{
		units[]={};
		weapons[]={};
		versionDesc="RHS";
		version="0.3.8.1359";
	};
};
class CfgMods
{
	class Mod_Base;
	class RHS_USAF: Mod_Base
	{
		logo="\rhsusf\addons\rhsusf_main\data\rhs_logo_ca.paa";
		logoOver="\rhsusf\addons\rhsusf_main\data\rhs_logo_ca.paa";
		logoSmall="\rhsusf\addons\rhsusf_main\data\rhs_logo_ca.paa";
		fieldManualTopicAndHint[]=
		{
			"RHS_USAF",
			"RHS_USAF_MAIN"
		};
		hideName=1;
		hidePicture=0;
		tooltip="RHS: USAF";
		tooltipOwned="RHS: USAF";
		name="RHS: United States Armed Forces";
		overview="United States Armed Forces brought to Arma 3 in full glory!";
		action="http://www.rhsmods.org/";
		dir="rhsusf";
	};
	class RHSUSAF: RHS_USAF
	{
	};
	class RHSUSAFDEV: RHS_USAF
	{
		logo="\rhsusf\addons\rhsusf_main\data\rhsdev_logo_ca.paa";
		logoOver="\rhsusf\addons\rhsusf_main\data\rhsdev_logo_ca.paa";
		logoSmall="\rhsusf\addons\rhsusf_main\data\rhsdev_logo_ca.paa";
		tooltip="RHS: USAF Development Version";
		tooltipOwned="RHS: USAF Development Version";
		name="RHS: United States Armed Forces [Development Version]";
		overview="Development version, please report bugs to http://feedback.rhsmods.org/view_all_bug_page.php";
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class RHS_USAF
		{
			list[]=
			{
				"rhsusf_main_loadorder",
				"rhsusf_main",
				"rhsusf_optics",
				"rhsusf_uav",
				"rhsusf_decals",
				"rhsusf_sounds",
				"rhsusf_weapon_sounds",
				"rhsusf_c_weaponsounds",
				"rhsusf_muzzleflash",
				"rhsusf_c_identity",
				"rhsusf_caiman",
				"rhsusf_c_uav",
				"rhsusf_c_a2port_car",
				"rhsusf_c_heavyweapons",
				"rhsusf_c_airweapons",
				"rhsusf_c_f22",
				"rhsusf_c_hemtt_a2",
				"rhsusf_c_weapons",
				"rhsusf_c_radio",
				"rhsusf_c_troops",
				"rhsusf_c_Caiman",
				"rhsusf_c_ch53",
				"rhsusf_c_fmtv",
				"rhsusf_c_HEMTT_A4",
				"rhsusf_c_hmmwv",
				"rhsusf_c_m109",
				"rhsusf_c_m1117",
				"rhsusf_c_m113",
				"rhsusf_c_m1a1",
				"rhsusf_c_m1a2",
				"rhsusf_c_markvsoc",
				"rhsusf_c_mrzr",
				"rhsusf_c_mtvr",
				"rhsusf_c_rg33",
				"rhsusf_c_RG33L",
				"rhsusf_c_statics",
				"rhsusf_cars",
				"rhsusf_ch53",
				"rhsusf_c_m252",
				"rhsusf_c_melb",
				"rhsusf_c_himars",
				"rhsusf_c_Cougar",
				"rhsusf_c_stryker"
			};
		};
	};
};
class CfgVideoOptions
{
	class PiP
	{
		class 6000_meters
		{
			value=6000;
		};
		class 8000_meters
		{
			value=8000;
		};
		class 12000_meters
		{
			value=12000;
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
			class findPlayer
			{
				file="rhsusf\addons\rhsusf_main\scripts\rhs_findPlayer.sqf";
				description="Find player controled unit";
			};
			class hitSpall
			{
				file="rhsusf\addons\rhsusf_main\scripts\rhs_hitSpall.sqf";
				description="Spalling (WIP)";
			};
		};
	};
	class RHS
	{
		tag="RHS";
		class functions
		{
			class findPlayer
			{
				file="rhsusf\addons\rhsusf_main\scripts\rhs_findPlayer.sqf";
				description="Find player controled unit";
			};
			class isPlayer
			{
				file="rhsusf\addons\rhsusf_main\scripts\rhs_isPlayer.sqf";
				description="Find player controled unit";
			};
			class menuOptions
			{
				file="rhsusf\addons\rhsusf_main\scripts\rhs_menuOptions.sqf";
				description="Handling of options menu";
			};
			class dynamicObjectDrawing
			{
				file="rhsusf\addons\rhsusf_main\scripts\rhs_dynamicOD.sqf";
				description="Dynamic Object Drawing";
			};
			class dynamicObjectDrawing_loop
			{
				file="rhsusf\addons\rhsusf_main\scripts\rhs_dynamicOD_loop.sqf";
				description="Dynamic Object Drawing - main loop";
			};
			class UI_Options
			{
				file="rhsusf\addons\rhsusf_main\scripts\rhs_UI_Options.sqf";
			};
		};
	};
};
class RscListbox;
class RscListNBox;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscPicture;
class RscActiveText;
class RscCombo;
class RscProgress;
class RscButton;
class RscButtonMenu;
class RscObject;
class RscStandardDisplay;
class RscStructuredText;
class RscControlsGroupNoScrollbars;
class RscHTML;
class RscEdit;
class RscTitle;
class RscVignette;
class RscFrame;
class RscControlsGroupNoHScrollbars;
class RscControlsGroup;
class RscIGProgress;
class RscHitZones;
class RscIGUIValue;
class RscIGUIText;
class RscPictureKeepAspect;
class RscUnitInfo;
class VScrollbar;
class HScrollbar;
class RscOpticsValue;
class RscOpticsText;
class RscLadderPicture;
class Attributes;
class RscDisplayGetReady;
class IGUIBack;
class CA_Title;
class ScrollBar;
class RscShortcutButton;
class RHS_Options_Button: RscShortcutButton
{
	default=0;
	idc=-1;
	type=16;
	style="0x02 + 0xC0";
	action="(findDisplay 49) closeDisplay 0; 0 spawn {_n=  createDialog 'RHS_Options_Menu';0 spawn rhs_fnc_menuOptions;};";
	class ShortcutPos
	{
		left=0;
		top=0;
		w=0;
		h=0;
	};
	class TextPos
	{
		left=0.0099999998;
		top=0;
		right=0;
		bottom=0;
	};
	animTextureDefault="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled="#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed="#(argb,8,8,3)color(1,1,1,1)";
	color2[]={0,0,0,1};
	color[]={1,1,1,1};
	colorBackground[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',1])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.647])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.5])"
	};
	colorBackground2[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',1])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.647])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.5])"
	};
	colorBackgroundFocused[]={1,1,1,0};
	colorDisabled[]={1,1,1,0.25};
	colorFocused[]={0,0,0,1};
	colorText[]={1,1,1,1};
	period=1.2;
	periodFocus=1.2;
	periodOver=1.2;
	tooltip="Configure Various RHS Options";
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	tooltipColorText[]={1,1,1,1};
	x="1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
	y="0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +  (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
	w="15 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h="1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
class RscDisplayMPInterrupt: RscStandardDisplay
{
	class controls
	{
		class RHS_Options: RHS_Options_Button
		{
		};
	};
};
class RscDisplayInterrupt: RscStandardDisplay
{
	class controls
	{
		class RHS_Options: RHS_Options_Button
		{
		};
	};
};
class RscDisplayInterruptEditor3D: RscStandardDisplay
{
	class controls
	{
		class RHS_Options: RHS_Options_Button
		{
		};
	};
};
class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
	class controls
	{
		class RHS_Options: RHS_Options_Button
		{
		};
	};
};
class RscCheckbox;
class RHS_Options_Menu
{
	enableSimulation=1;
	idd=101;
	movingenable=0;
	class Controls
	{
		class rhs_background: RscPicture
		{
			idc=1200;
			colorText[]={1,1,1,1};
			x="0.336938 * safezoneW + safezoneX";
			y="-0.0924473 * safezoneH + safezoneY";
			w="0.321718 * safezoneW";
			h="1.16609 * safezoneH";
		};
		class rhs_version_text: RscStructuredText
		{
			x="0.354566 * safezoneW + safezoneX";
			y="0.246094 * safezoneH + safezoneY";
			w="0.123399 * safezoneW";
			h="0.0188079 * safezoneH";
			size="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			colorText[]={0.1,0.1,0.1,0.89999998};
			colorBackground[]={-1,-1,-1,0};
			colorActive[]={-1,-1,-1,0};
			font="EtelkaMonospaceProBold";
			shadow=0;
			class Attributes
			{
				font="EtelkaMonospaceProBold";
				color="#4f4848";
				align="left";
				shadow=0;
			};
		};
		class rhs_version_input: rhs_version_text
		{
			x="0.491186 * safezoneW + safezoneX";
			y="0.246094 * safezoneH + safezoneY";
			w="0.0661064 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_miscOption_text: rhs_version_text
		{
			x="0.354566 * safezoneW + safezoneX";
			y="0.302518 * safezoneH + safezoneY";
			w="0.123399 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_option1_text: rhs_version_text
		{
			tooltip="Toggle random vehicle radio chatter";
			x="0.367787 * safezoneW + safezoneX";
			y="0.340133 * safezoneH + safezoneY";
			w="0.110177 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_checkbox1: RscCheckbox
		{
			idc=2801;
			checked="(profilenamespace getvariable ['rhs_vehicleRadioChatter',1])";
			x="0.487043 * safezoneW + safezoneX";
			y="0.33543105 * safezoneH + safezoneY";
			w="0.0176284 * safezoneW";
			h="0.0282118 * safezoneH";
			color[]={0.1,0.1,0.1,0.69999999};
			colorFocused[]={0.1,0.1,0.1,0.94999999};
			colorHover[]={0.1,0.1,0.1,0.94999999};
			colorPressed[]={0.1,0.1,0.1,0.94999999};
			colorDisabled[]={0.1,0.1,0.1,0.30000001};
			colorBackground[]={0,0,0,0};
			colorBackgroundFocused[]={0,0,0,0};
			colorBackgroundHover[]={0,0,0,0};
			colorBackgroundPressed[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			onCheckedChanged="profileNamespace setVariable ['rhs_vehicleRadioChatter', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option2_text: rhs_option1_text
		{
			tooltip="Active Tire Pressure script is used on BTRs, Ural & Tochka-U to keep pressure in wheels even when damaged";
			x="0.367787 * safezoneW + safezoneX";
			y="0.366624 * safezoneH + safezoneY";
			w="0.110177 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_checkbox2: rhs_checkbox1
		{
			checked="(profilenamespace getvariable ['rhs_activeTirePressure',1])";
			idc=2802;
			x="0.487043 * safezoneW + safezoneX";
			y="0.36192205 * safezoneH + safezoneY";
			w="0.0176284 * safezoneW";
			h="0.0282118 * safezoneH";
			onCheckedChanged="profileNamespace setVariable ['rhs_activeTirePressure', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option3_text: rhs_option1_text
		{
			tooltip="Toggle automatic target leading for fire control systems";
			x="0.367787 * safezoneW + safezoneX";
			y="0.393115 * safezoneH + safezoneY";
			w="0.110177 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_checkbox3: rhs_checkbox1
		{
			checked="(profilenamespace getvariable['rhs_fcsTargetLead',1])";
			idc=2803;
			x="0.487043 * safezoneW + safezoneX";
			y="0.38841305 * safezoneH + safezoneY";
			w="0.0176284 * safezoneW";
			h="0.0282118 * safezoneH";
			onCheckedChanged="profileNamespace setVariable ['rhs_fcsTargetLead', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option4_text: rhs_option1_text
		{
			tooltip="Automatic throw away of used disposables launchers after changing weapon";
			x="0.367787 * safezoneW + safezoneX";
			y="0.423115 * safezoneH + safezoneY";
			w="0.110177 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_checkbox4: rhs_checkbox1
		{
			checked="(profilenamespace getvariable['rhs_throwDisposable',1])";
			idc=2804;
			x="0.487043 * safezoneW + safezoneX";
			y="0.41641305 * safezoneH + safezoneY";
			w="0.0176284 * safezoneW";
			h="0.0282118 * safezoneH";
			onCheckedChanged="profileNamespace setVariable ['rhs_throwDisposable', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option5_text: rhs_option1_text
		{
			tooltip="Disables weapon safemode switch script";
			x="0.367787 * safezoneW + safezoneX";
			y="0.450115 * safezoneH + safezoneY";
			w="0.110177 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_checkbox5: rhs_checkbox1
		{
			checked="(profilenamespace getvariable['rhs_disableSafe',1])";
			idc=2805;
			x="0.487043 * safezoneW + safezoneX";
			y="0.44641305 * safezoneH + safezoneY";
			w="0.0176284 * safezoneW";
			h="0.0282118 * safezoneH";
			onCheckedChanged="profileNamespace setVariable ['rhs_disableSafe', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option6_text: rhs_option1_text
		{
			tooltip="Disables automatic weapon animation change on deploy";
			x="0.367787 * safezoneW + safezoneX";
			y="0.480115 * safezoneH + safezoneY";
			w="0.110177 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_checkbox6: rhs_checkbox1
		{
			checked="(profilenamespace getvariable['rhs_disableAnimChange',0])";
			idc=2805;
			x="0.487043 * safezoneW + safezoneX";
			y="0.47641305 * safezoneH + safezoneY";
			w="0.0176284 * safezoneW";
			h="0.0282118 * safezoneH";
			onCheckedChanged="profileNamespace setVariable ['rhs_disableAnimChange', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option7_text: rhs_option1_text
		{
			tooltip="Manual rifle bolting. By default, you need to hold fire button in order to delay reload anim. Switching this on will require you to press fire button again in order to bolt rifle [RO2 style]";
			x="(0.14+0.367787) * safezoneW + safezoneX";
		};
		class rhs_checkbox7: rhs_checkbox1
		{
			checked="(profilenamespace getvariable ['rhs_manualBolting',0])";
			idc=2802;
			x="(0.14+0.487043) * safezoneW + safezoneX";
			onCheckedChanged="profileNamespace setVariable ['rhs_manualBolting', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option8_text: rhs_option2_text
		{
			tooltip="If available, optic will be replaced with prefered type";
			x="(0.14+0.367787) * safezoneW + safezoneX";
		};
		class rhs_option9_text: rhs_option3_text
		{
			tooltip="Enable Voice Announcer aka 'Bitching Betty' in aircrafts";
			x="(0.14+0.367787) * safezoneW + safezoneX";
		};
		class rhs_checkbox9: rhs_checkbox3
		{
			checked="(profilenamespace getvariable ['rhs_voiceAnnouncer',1])";
			idc=2805;
			x="(0.14+0.487043) * safezoneW + safezoneX";
			onCheckedChanged="profileNamespace setVariable ['rhs_voiceAnnouncer', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option10_text: rhs_option4_text
		{
			tooltip="Vehicles are always visible within terrain draw distance when controling planes or helicopters";
			x="(0.14+0.367787) * safezoneW + safezoneX";
		};
		class rhs_checkbox10: rhs_checkbox4
		{
			checked="(profilenamespace getvariable ['rhs_dynamicObjectDistance',1])";
			idc=2822;
			x="(0.14+0.487043) * safezoneW + safezoneX";
			onCheckedChanged="profileNamespace setVariable ['rhs_dynamicObjectDistance', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option11_text: rhs_option5_text
		{
			tooltip="Afterburner is activated once throttle is at 100%. By default afterburner is activated by pressing turbo key";
			x="(0.14+0.367787) * safezoneW + safezoneX";
		};
		class rhs_checkbox11: rhs_checkbox5
		{
			checked="(profilenamespace getvariable ['rhs_afterburner_mode',0])";
			idc=2823;
			x="(0.14+0.487043) * safezoneW + safezoneX";
			onCheckedChanged="profileNamespace setVariable ['rhs_afterburner_mode', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option12_text: rhs_option6_text
		{
			tooltip="Toggle vanilla lock UI icons like locking, selected target, impact point, etc. Changes are applied after game restart";
			x="(0.14+0.367787) * safezoneW + safezoneX";
		};
		class rhs_keybinding_static_text: rhs_version_text
		{
			idc=1105;
			tooltip="User Action Keys are defined in Menu >> Configuration >> Controls >> Custom Controls";
			x="0.355095 * safezoneW + safezoneX";
			y="(0.033*2)*(2.1267/safezoneH)+ 0.491725 * safezoneH + safezoneY";
			w="0.123399 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_keybinding_inf_static_text: rhs_version_text
		{
			idc=1106;
			x="0.361794 * safezoneW + safezoneX";
			y="(0.033*2)*(2.1267/safezoneH)+0.521817 * safezoneH + safezoneY";
			w="0.123399 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_keybinding_inf1_static_text: rhs_version_text
		{
			idc=1107;
			tooltip="Used in: Folding, NPZ dismount & Bipod script";
			x="0.373252 * safezoneW + safezoneX";
			y="(0.033*2)*(2.1267/safezoneH)+0.54796 * safezoneH + safezoneY";
			w="0.123399 * safezoneW";
			h="0.0188079 * safezoneH";
		};
		class rhs_keybinding_inf2_static_text: rhs_keybinding_inf1_static_text
		{
			idc=1108;
			tooltip="Used in: Flashlight/Laser script";
			y="(0.033*2)*(2.1267/safezoneH)+0.563006 * safezoneH + safezoneY";
		};
		class rhs_keybinding_inf3_static_text: rhs_keybinding_inf1_static_text
		{
			idc=1109;
			tooltip="Used in: Kobra (changing reticle) & AT4 (peephole)  script";
			y="(0.033*2)*(2.1267/safezoneH)+0.579933 * safezoneH + safezoneY";
		};
		class rhs_keybinding_inf4_static_text: rhs_keybinding_inf1_static_text
		{
			idc=1110;
			tooltip="Used in infantry LRF to determine range to target";
			y="(0.033*2)*(2.1267/safezoneH)+0.594227 * safezoneH + safezoneY";
		};
		class rhs_keybinding_inf5_static_text: rhs_keybinding_inf1_static_text
		{
			idc=1111;
			tooltip="Used for switching weapon to safe mode";
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*1)*(2.1267/safezoneH)+0.594227 * safezoneH + safezoneY";
		};
		class rhs_keybinding_veh_static_text: rhs_keybinding_inf_static_text
		{
			idc=1111;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.61943 * safezoneH + safezoneY";
		};
		class rhs_keybinding_veh1_static_text: rhs_keybinding_inf1_static_text
		{
			idc=1112;
			tooltip="Open balistic computer menu to manualy input range. Avaiable in i.e. T80 or M1 tanks";
			y="(0.033*2)*(2.1267/safezoneH)+(0.033*2)*(2.1267/safezoneH)+0.645761 * safezoneH + safezoneY";
		};
		class rhs_keybinding_veh2_static_text: rhs_keybinding_veh1_static_text
		{
			idc=1113;
			tooltip="FCS or optic range adjustment";
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.659867 * safezoneH + safezoneY";
		};
		class rhs_keybinding_veh3_static_text: rhs_keybinding_veh1_static_text
		{
			idc=1114;
			tooltip="FCS or optic range adjustment";
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.674161 * safezoneH + safezoneY";
		};
		class rhs_keybinding_veh4_static_text: rhs_keybinding_veh1_static_text
		{
			idc=1115;
			tooltip="FCS target lasing";
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.687326 * safezoneH + safezoneY";
		};
		class rhs_keybinding_veh5_static_text: rhs_keybinding_veh1_static_text
		{
			idc=1116;
			tooltip="Stops automatic lead calculation";
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.702373 * safezoneH + safezoneY";
		};
		class rhs_keybinding_veh6_static_text: rhs_keybinding_veh1_static_text
		{
			idc=1117;
			tooltip="Used for autoloader control in T tanks. Determines next loaded round";
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.717373 * safezoneH + safezoneY";
		};
		class rhs_keybinding_veh7_static_text: rhs_keybinding_veh1_static_text
		{
			idc=1118;
			tooltip="Used for autoloader sequential modecontrol in T tanks. Determines if next round is automaticly loaded into gun";
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.732373 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_inf1: RscCombo
		{
			idc=1500;
			x="0.50133 * safezoneW + safezoneX";
			y="(0.033*2)*(2.1267/safezoneH)+ 0.552543 * safezoneH + safezoneY";
			w="0.150177 * safezoneW";
			h="0.0109079 * safezoneH";
			font="EtelkaMonospaceProBold";
			sizeEX="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			colorText[]={0,0,0,1};
			colorBackground[]={0.99000001,0.98000002,0.67000002,1};
			colorScrollbar[]={1,0,0,1};
			colorSelectBackground[]={0.80000001,0.80000001,0.80000001,1};
			colorDisabled[]={1,1,1,0.44999999};
			onLBSelChanged="rhs_options_comboChng=_this";
		};
		class rhs_keybinding_listbox_inf2: rhs_keybinding_listbox_inf1
		{
			idc=1501;
			y="(0.033*2)*(2.1267/safezoneH)+ 0.567708 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_inf3: rhs_keybinding_listbox_inf1
		{
			idc=1502;
			y="(0.033*2)*(2.1267/safezoneH)+ 0.582002 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_inf4: rhs_keybinding_listbox_inf1
		{
			idc=1503;
			y="(0.033*2)*(2.1267/safezoneH)+ 0.596108 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_inf5: rhs_keybinding_listbox_inf1
		{
			idc=1504;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*1)*(2.1267/safezoneH)+0.596108 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_veh1: rhs_keybinding_listbox_inf1
		{
			idc=1600;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.646701 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_veh2: rhs_keybinding_listbox_veh1
		{
			idc=1601;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.660807 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_veh3: rhs_keybinding_listbox_veh1
		{
			idc=1602;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.675853 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_veh4: rhs_keybinding_listbox_veh1
		{
			idc=1603;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.691088 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_veh5: rhs_keybinding_listbox_veh1
		{
			idc=1604;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.706075 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_veh6: rhs_keybinding_listbox_veh1
		{
			idc=1605;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.721075 * safezoneH + safezoneY";
		};
		class rhs_keybinding_listbox_veh7: rhs_keybinding_listbox_veh1
		{
			idc=1606;
			y="(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.736075 * safezoneH + safezoneY";
		};
		class rhs_listbox8: rhs_keybinding_listbox_inf1
		{
			idc=2821;
			x="0.610043 * safezoneW + safezoneX";
			y="0.36892205 * safezoneH + safezoneY";
			w="0.030177 * safezoneW";
			h="0.0129079 * safezoneH";
			onLBSelChanged="profileNamespace setVariable ['rhs_preferedOptic', (_this select 1)];saveProfileNamespace;[] call RHS_fnc_preferedOptic";
		};
		class rhs_listbox12: rhs_keybinding_listbox_inf1
		{
			idc=2824;
			x="0.590043 * safezoneW + safezoneX";
			y="0.48041305 * safezoneH + safezoneY";
			w="0.050177 * safezoneW";
			h="0.0129079 * safezoneH";
			onLBSelChanged="[_this select 1] call RHS_fnc_UI_Options";
		};
	};
};
class CfgArmorSimulations
{
	class Armor_ERA_Light;
	class Armor_ERA_Heavy;
	class RHS_ERA_Arat1: Armor_ERA_Heavy
	{
		class AP
		{
			hit[]={1};
			speed[]={0.89999998,1};
		};
		class HE
		{
			hit[]={0.1,1};
			speed[]={1};
		};
		class HEAT
		{
			hit[]={2};
			speed[]={0.1,0.1};
		};
		class TandemHEAT
		{
			hit[]={3};
			speed[]={0.85000002,1};
		};
	};
	class RHS_ERA_Arat2: RHS_ERA_Arat1
	{
		class AP
		{
			hit[]={1};
			speed[]={0.89999998,1};
		};
		class HE
		{
			hit[]={0.1,1};
			speed[]={1};
		};
		class HEAT
		{
			hit[]={2};
			speed[]={0.15000001,0.15000001};
		};
		class TandemHEAT
		{
			hit[]={3};
			speed[]={0.94999999,1};
		};
	};
	class RHS_ERA_Arat2_Mixed: RHS_ERA_Arat2
	{
		class HEAT
		{
			hit[]={2};
			speed[]={0.050000001,0.050000001};
		};
		class TandemHEAT
		{
			hit[]={3};
			speed[]={0.64999998,1};
		};
	};
	class RHS_SLAT: Armor_ERA_Light
	{
		class HEAT
		{
			hit[]={3};
			speed[]={0.30000001,0.30000001};
		};
		class TandemHEAT
		{
			hit[]={3};
			speed[]={1,1};
		};
	};
	class RHS_ERA_BUSK: Armor_ERA_Heavy
	{
		class AP
		{
			hit[]={1};
			speed[]={0.89999998,1};
		};
		class HE
		{
			hit[]={0.1,1};
			speed[]={1};
		};
		class HEAT
		{
			hit[]={2};
			speed[]={0.1,0.1};
		};
		class TandemHEAT
		{
			hit[]={3};
			speed[]={0.85000002,1};
		};
	};
	class RHS_Hull_Helicopter
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={1};
			speed[]={1};
		};
		class HE
		{
			hit[]={10};
			speed[]={1};
		};
		class HEAT
		{
			hit[]={3};
			speed[]={1};
		};
		class TandemHEAT
		{
			hit[]={3};
			speed[]={1};
		};
	};
	class RHS_MinePlow
	{
		class Default
		{
			hit[]={0.0099999998};
			speed[]={1};
		};
		class AP
		{
			hit[]={1};
			speed[]={1};
		};
		class HE
		{
			hit[]={0.0099999998};
			speed[]={1};
		};
		class HEAT
		{
			hit[]={1};
			speed[]={1};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={1};
		};
	};
	class RHS_Composite_40
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.40000001,0.40000001};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.40000001,0.40000001};
		};
	};
	class RHS_Composite_50
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.5,0.5};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.5,0.5};
		};
	};
	class RHS_Composite_55
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.55000001,0.55000001};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.55000001,0.55000001};
		};
	};
	class RHS_Composite_60
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.60000002,0.60000002};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.60000002,0.60000002};
		};
	};
	class RHS_Composite_65
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.64999998,0.64999998};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.64999998,0.64999998};
		};
	};
	class RHS_Composite_70
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.69999999,0.69999999};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.69999999,0.69999999};
		};
	};
	class RHS_Composite_75
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.75,0.75};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.75,0.75};
		};
	};
	class RHS_Composite_80
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.80000001,0.80000001};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.80000001,0.80000001};
		};
	};
	class RHS_Composite_85
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.85000002,0.85000002};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.85000002,0.85000002};
		};
	};
	class RHS_Composite_90
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.89999998,0.89999998};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.89999998,0.89999998};
		};
	};
	class RHS_Composite_95
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP: Default
		{
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1};
			speed[]={0.94999999,0.94999999};
		};
		class TandemHEAT
		{
			hit[]={1};
			speed[]={0.94999999,0.94999999};
		};
	};
};
class CfgFactionClasses
{
	class rhs_faction_usarmy
	{
		priority=-5;
		side=1;
		icon="\rhsusf\addons\rhsusf_main\data\armylogo.paa";
		flag="\rhsusf\addons\rhsusf_main\data\flag_us_co.paa";
		backpack_tf_faction_radio_api="tf_rt1523g_rhs";
	};
	class rhs_faction_usmc: rhs_faction_usarmy
	{
		priority=-3;
		icon="\rhsusf\addons\rhsusf_main\data\usmclogo.paa";
		backpack_tf_faction_radio_api="tf_rt1523g_rhs";
	};
	class rhs_faction_usarmy_wd: rhs_faction_usarmy
	{
		priority=-5;
		icon="\rhsusf\addons\rhsusf_main\data\armylogo.paa";
	};
	class rhs_faction_usarmy_d: rhs_faction_usarmy
	{
		priority=-4;
		icon="\rhsusf\addons\rhsusf_main\data\armylogo.paa";
	};
	class rhs_faction_usmc_wd: rhs_faction_usarmy
	{
		priority=-3;
		icon="\rhsusf\addons\rhsusf_main\data\usmclogo.paa";
	};
	class rhs_faction_usmc_d: rhs_faction_usarmy
	{
		priority=-2;
		icon="\rhsusf\addons\rhsusf_main\data\usmclogo.paa";
	};
	class rhs_faction_usaf: rhs_faction_usarmy
	{
		priority=-1;
		icon="\rhsusf\addons\rhsusf_main\data\usaflogo.paa";
	};
	class rhs_faction_usn: rhs_faction_usarmy
	{
		priority=1;
		icon="\rhsusf\addons\rhsusf_main\data\navylogo.paa";
	};
	class rhs_faction_socom: rhs_faction_usarmy
	{
		priority=2;
		icon="\rhsusf\addons\rhsusf_main\data\socomlogo.paa";
	};
};
class CfgVehicleClasses
{
	class rhs_vehclass_apc
	{
		displayname="$STR_RHSUSF_VEHCLASS_APC";
	};
	class rhs_vehclass_apc_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_APC_D";
	};
	class rhs_vehclass_apc_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_APC_WD";
	};
	class rhs_vehclass_ifv
	{
		displayname="$STR_RHSUSF_VEHCLASS_IFV";
	};
	class rhs_vehclass_ifv_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_IFV_D";
	};
	class rhs_vehclass_ifv_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_IFV_WD";
	};
	class rhs_vehclass_car
	{
		displayname="$STR_RHSUSF_VEHCLASS_CAR";
	};
	class rhs_vehclass_car_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_CAR_D";
	};
	class rhs_vehclass_car_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_CAR_WD";
	};
	class rhs_vehclass_mrap
	{
		displayname="$STR_RHSUSF_VEHCLASS_MRAP";
	};
	class rhs_vehclass_mrap_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_MRAP_D";
	};
	class rhs_vehclass_mrap_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_MRAP_WD";
	};
	class rhs_vehclass_truck
	{
		displayname="$STR_RHSUSF_VEHCLASS_TRUCK";
	};
	class rhs_vehclass_truck_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_TRUCK_D";
	};
	class rhs_vehclass_truck_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_TRUCK_WD";
	};
	class rhs_vehclass_tank
	{
		displayname="$STR_RHSUSF_VEHCLASS_TANK";
	};
	class rhs_vehclass_tank_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_TANK_D";
	};
	class rhs_vehclass_tank_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_TANK_WD";
	};
	class rhs_vehclass_infantry
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY";
	};
	class rhs_vehclass_infantry_recon
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_RECON";
	};
	class rhs_vehclass_infantry_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_D";
	};
	class rhs_vehclass_infantry_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_WD";
	};
	class rhs_vehclass_infantry_ucp
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_UCP";
	};
	class rhs_vehclass_infantry_ucp_arb
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_UCP_ARB";
	};
	class rhs_vehclass_infantry_ocp
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_OCP";
	};
	class rhs_vehclass_infantry_ocp_arb
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_OCP_ARB";
	};
	class rhs_vehclass_lar
	{
		displayname="$STR_RHSUSF_VEHCLASS_LAR";
	};
	class rhs_vehclass_force_recon
	{
		displayname="$STR_RHSUSF_VEHCLASS_FORCERECON";
	};
	class rhs_vehclass_MARSOC
	{
		displayname="$STR_RHSUSF_VEHCLASS_MARSOC";
	};
	class rhs_vehclass_SWCC
	{
		displayname="$STR_RHSUSF_VEHCLASS_SWCC";
	};
	class rhs_vehclass_artillery
	{
		displayname="$STR_RHSUSF_VEHCLASS_ARTILLERY";
	};
	class rhs_vehclass_radar
	{
		displayname="$STR_RHSUSF_VEHCLASS_RADAR";
	};
	class rhs_vehclass_targeting
	{
		displayname="$STR_RHSUSF_VEHCLASS_TARGETING";
	};
	class rhs_vehclass_launcher
	{
		displayname="$STR_RHSUSF_VEHCLASS_LAUNCHER";
	};
	class rhs_vehclass_aircraft
	{
		displayname="$STR_RHSUSF_VEHCLASS_AIRPLANE";
	};
	class rhs_vehclass_helicopter
	{
		displayname="$STR_RHSUSF_VEHCLASS_HELICOPTER";
	};
	class rhs_vehclass_helicopter_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_HELICOPTER_D";
	};
	class rhs_vehclass_helicopter_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_HELICOPTER_WD";
	};
	class rhs_vehclass_aa
	{
		displayname="$STR_RHSUSF_VEHCLASS_AA";
	};
};
class CfgEditorSubcategories
{
	class rhs_EdSubcat_apc
	{
		displayname="$STR_RHSUSF_VEHCLASS_APC";
	};
	class rhs_EdSubcat_apc_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_APC_D";
	};
	class rhs_EdSubcat_apc_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_APC_WD";
	};
	class rhs_EdSubcat_ifv
	{
		displayname="$STR_RHSUSF_VEHCLASS_IFV";
	};
	class rhs_EdSubcat_ifv_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_IFV_D";
	};
	class rhs_EdSubcat_ifv_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_IFV_WD";
	};
	class rhs_EdSubcat_car
	{
		displayname="$STR_RHSUSF_VEHCLASS_CAR";
	};
	class rhs_EdSubcat_car_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_CAR_D";
	};
	class rhs_EdSubcat_car_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_CAR_WD";
	};
	class rhs_EdSubcat_mrap
	{
		displayname="$STR_RHSUSF_VEHCLASS_MRAP";
	};
	class rhs_EdSubcat_mrap_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_MRAP_D";
	};
	class rhs_EdSubcat_mrap_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_MRAP_WD";
	};
	class rhs_EdSubcat_truck
	{
		displayname="$STR_RHSUSF_VEHCLASS_TRUCK";
	};
	class rhs_EdSubcat_truck_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_TRUCK_D";
	};
	class rhs_EdSubcat_truck_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_TRUCK_WD";
	};
	class rhs_EdSubcat_tank
	{
		displayname="$STR_RHSUSF_VEHCLASS_TANK";
	};
	class rhs_EdSubcat_tank_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_TANK_D";
	};
	class rhs_EdSubcat_tank_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_TANK_WD";
	};
	class rhs_EdSubcat_infantry
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY";
	};
	class rhs_EdSubcat_infantry_recon
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_RECON";
	};
	class rhs_EdSubcat_infantry_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_D";
	};
	class rhs_EdSubcat_infantry_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_WD";
	};
	class rhs_EdSubcat_infantry_ucp
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_UCP";
	};
	class rhs_EdSubcat_infantry_ucp_arb
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_UCP_ARB";
	};
	class rhs_EdSubcat_infantry_ocp
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_OCP";
	};
	class rhs_EdSubcat_infantry_ocp_arb
	{
		displayname="$STR_RHSUSF_VEHCLASS_INFANTRY_OCP_ARB";
	};
	class rhs_EdSubcat_USASOC
	{
		displayname="$STR_RHSUSF_VEHCLASS_USASOC";
	};
	class rhs_EdSubcat_lar
	{
		displayname="$STR_RHSUSF_VEHCLASS_LAR";
	};
	class rhs_EdSubcat_force_recon
	{
		displayname="$STR_RHSUSF_VEHCLASS_FORCERECON";
	};
	class rhs_EdSubcat_MARSOC
	{
		displayname="$STR_RHSUSF_VEHCLASS_MARSOC";
	};
	class rhs_EdSubcat_SWCC
	{
		displayname="$STR_RHSUSF_VEHCLASS_SWCC";
	};
	class rhs_EdSubcat_artillery
	{
		displayname="$STR_RHSUSF_VEHCLASS_ARTILLERY";
	};
	class rhs_EdSubcat_radar
	{
		displayname="$STR_RHSUSF_VEHCLASS_RADAR";
	};
	class rhs_EdSubcat_targeting
	{
		displayname="$STR_RHSUSF_VEHCLASS_TARGETING";
	};
	class rhs_EdSubcat_launcher
	{
		displayname="$STR_RHSUSF_VEHCLASS_LAUNCHER";
	};
	class rhs_EdSubcat_aircraft
	{
		displayname="$STR_RHSUSF_VEHCLASS_AIRPLANE";
	};
	class rhs_EdSubcat_helicopter
	{
		displayname="$STR_RHSUSF_VEHCLASS_HELICOPTER";
	};
	class rhs_EdSubcat_helicopter_d
	{
		displayname="$STR_RHSUSF_VEHCLASS_HELICOPTER_D";
	};
	class rhs_EdSubcat_helicopter_wd
	{
		displayname="$STR_RHSUSF_VEHCLASS_HELICOPTER_WD";
	};
	class rhs_EdSubcat_aa
	{
		displayname="$STR_RHSUSF_VEHCLASS_AA";
	};
};
class DefaultEventhandlers
{
	class RHS_DefaultEventhandlers
	{
		hitpart="_this call rhs_fnc_hitPart";
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles;
	class Air;
	class Helicopter;
	class Plane;
	class Land;
	class Man;
	class CAManBase;
	class LandVehicle;
	class Tank;
	class Tank_F;
	class Car;
	class Car_F;
	class Ship;
	class Ship_F;
};
class CfgSounds
{
	class rhs_usa_land_rc_1
	{
		name="English Radio Chatter 01";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio1.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_2
	{
		name="English Radio Chatter 02";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio2.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_3
	{
		name="English Radio Chatter 03";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio3.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_4
	{
		name="English Radio Chatter 04";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio4.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_5
	{
		name="English Radio Chatter 05";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio5.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_6
	{
		name="English Radio Chatter 06";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio6.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_7
	{
		name="English Radio Chatter 07";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio7.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_8
	{
		name="English Radio Chatter 08";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio8.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_9
	{
		name="English Radio Chatter 09";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio09.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_10
	{
		name="English Radio Chatter 10";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio10.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_11
	{
		name="English Radio Chatter 11";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio11.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_12
	{
		name="English Radio Chatter 12";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio12.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_13
	{
		name="English Radio Chatter 13";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio13.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_14
	{
		name="English Radio Chatter 14";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio14.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_15
	{
		name="English Radio Chatter 15";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio15.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_16
	{
		name="English Radio Chatter 16";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio16.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_17
	{
		name="English Radio Chatter 17";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio17.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_18
	{
		name="English Radio Chatter 18";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio18.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_19
	{
		name="English Radio Chatter 19";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio19.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_20
	{
		name="English Radio Chatter 20";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio20.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_21
	{
		name="English Radio Chatter 21";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio21.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_22
	{
		name="English Radio Chatter 22";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio22.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_23
	{
		name="English Radio Chatter 23";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio23.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_24
	{
		name="English Radio Chatter 24";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio24.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_25
	{
		name="English Radio Chatter 25";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio25.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_26
	{
		name="English Radio Chatter 26";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio26.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_27
	{
		name="English Radio Chatter 27";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio27.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_28
	{
		name="English Radio Chatter 28";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio28.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_29
	{
		name="English Radio Chatter 29";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio29.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_30
	{
		name="English Radio Chatter 30";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio30.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_31
	{
		name="English Radio Chatter 31";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio31.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_32
	{
		name="English Radio Chatter 32";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio32.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_33
	{
		name="English Radio Chatter 33";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio33.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_34
	{
		name="English Radio Chatter 34";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio34.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_35
	{
		name="English Radio Chatter 35";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio35.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_land_rc_36
	{
		name="English Radio Chatter 36";
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio36.wss",
			0.40000001,
			1
		};
		titles[]={};
	};
	class rhs_usa_jet_rc_1
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_1",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_2
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_2",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_3
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_3",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_4
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_4",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_5
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_5",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_6
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_6",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_7
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_7",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_8
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_8",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_9
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_9",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_10
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_10",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_11
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_11",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_12
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_12",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_13
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_13",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_14
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_14",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_15
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_15",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_16
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_16",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
	class rhs_usa_jet_rc_17
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_17",
			0.40000001,
			1
		};
		titles[]={};
		name="";
	};
};
class CfgRadio
{
	class rhs_usa_land_rc_1
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio1",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_2
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio2",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_3
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio3",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_4
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio4",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_5
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio5",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_6
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio6",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_7
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio7",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_8
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio8",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_9
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio9",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_10
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio10",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_11
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio11",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_12
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio12",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_13
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio13",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_14
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio14",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_15
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio15",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_16
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio16",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_17
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio17",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_18
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio18",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_19
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio19",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_20
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio20",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_21
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio21",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_22
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio22",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_23
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio23",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_24
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio24",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_25
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio25",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_26
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio26",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_27
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio27",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_28
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio28",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_29
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio29",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_land_rc_30
	{
		sound[]=
		{
			"A3\Sounds_F\sfx\radio\ambient_radio30",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_1
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_1",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_2
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_2",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_3
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_3",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_4
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_4",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_5
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_5",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_6
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_6",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_7
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_7",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_8
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_8",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_9
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_9",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_10
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_10",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_11
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_11",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_12
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_12",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_13
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_13",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_14
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_14",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_15
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_15",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_16
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_16",
			0.40000001,
			1
		};
		title="";
	};
	class rhs_usa_jet_rc_17
	{
		sound[]=
		{
			"rhsusf\addons\rhsusf_radio\jet\us_air_17",
			0.40000001,
			1
		};
		title="";
	};
};
class CfgHints
{
	class RHS_USAF
	{
		class RHS_USAF_MAIN
		{
			description="United States Armed Forces brought to Arma 3 in full glory!<br/><br/>USAF focuses on United States military equipment from 2010 to present. Dozens of vehicles, units, and weapons, all modeled and textured with the finest details and packed with features.<br/><br/>For more information please visit our frequently asked questions page at <a href='http://www.rhsmods.org/faq'>www.rhsmods.org/faq</a> and our wiki at <a href='http://www.rhsmods.org/w'>www.rhsmods.org/w</a>. For bug reports and feature requests please visit our feedback tracker at <a href='http://feedback.rhsmods.org/'>www.feedback.rhsmods.org</a>.<br/><br/><a href='http://www.rhsmods.org/'>www.rhsmods.org</a>";
			image="\rhsusf\addons\rhsusf_main\data\rhs_logobig_ca.paa";
			arguments[]={};
		};
		class RHS_USAF_AMMO
		{
			description="AP - Armor Piercing<br/>AP-T - Armor Piercing Tracer<br/>AP-I - Armor Piercing Incendiary<br/>APHE - Armour Piercing High Explosive<br/>APBC - Armour Piercing Ballistic Capped<br/>APCR - Armour Piercing Composite Rigid<br/>APDS - Armour Piercing Discarding Sabot<br/>APFSDS - Armour Piercing Fin Stabilised Discarding Sabot<br/>HE - High-explosive<br/>HE-T - High Explosive Tracer<br/>HE-I - High Explosive Incendiary<br/>HEAT - High Explosive Anti Tank<br/>";
			image="\a3\ui_f\data\gui\cfg\Hints\ammotype_ca.paa";
			arguments[]={};
		};
		class RHS_USAF_TVM
		{
			description="Targeting guided missiles in the A-10A is achieved through the television monitor (TVM) which provides a direct video feed from seeker located in the nose of the AGM-65 to the pilot of the aircraft. Essentially, you see exactly what the missile sees.<br/><br/>In order to use the TVM, switch weapons to an AGM-65 Maverick variant and press the %11 key to look through the TVM. Upon looking through the TVM, %3you will see a blank screen on the TVM%4. This is normal. In order to activate the TVM, you need to turn on the thermal seeker in the AGM-65 by pressing the %12 key. Once activated, the TVM should now function like any other targeting camera in Arma 3 with a few small differences:<br/><br/>1. While not looking directly through the TVM camera, the seeker of the Maverick can be slewed around the HUD and TVM using the user 15-18 keys. If you have those keys bound, you will see them mapped below:<br/>%2Move seeker left (User 15): %13<br/>%2Move seeker right (User 16): %14<br/>%2Move seeker up (User 17): %15<br/>%2Move seeker down (User 18): %16<br/><br/>2. Within the TVM, there is a cross that moves across the screen as the seeker moves around. This cross tells the pilot where the AGM-65 seeker is pointed in relation to the direction of the aircraft. When the cross reaches the edge of the TVM, that means the seeker has reached the gimbal limit of the seeker head. In addition, after pressing the stabilize turret key (%17), the cross will begin flashing to indicate that the camera/seeker is successfully locked and stabilized to the terrain it is pointing at.<br/><br/>3. With only one AGM-65 left, the camera feed will immediately cut as soon as the missile is fired. Since the seeker in the missile is what is acting as the camera for the pilot, once the missile leaves the rail, there is nothing left to serve as a feed for the TVM. For this reason, it is sometimes wise to save a single AGM-65 as an emergency only weapon, just so the pilot has a camera to spot and target ground vehicles with.";
			image="\a3\ui_f_jets\data\gui\cfg\hints\AircraftTgtCamera_ca.paa";
			arguments[]=
			{
				
				{
					
					{
						"pilotCamera"
					}
				},
				
				{
					
					{
						"nightVision"
					}
				},
				
				{
					
					{
						"User15"
					}
				},
				
				{
					
					{
						"User16"
					}
				},
				
				{
					
					{
						"User17"
					}
				},
				
				{
					
					{
						"User18"
					}
				},
				
				{
					
					{
						"vehLockTurretView"
					}
				}
			};
		};
	};
};
class CfgMarkers
{
	class flag_NATO;
	class rhs_flag_USA: flag_NATO
	{
		name="USA";
		icon="\rhsusf\addons\rhsusf_main\data\flag_map\flag_us_co.paa";
	};
};
