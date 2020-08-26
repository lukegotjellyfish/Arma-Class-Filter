class CfgPatches
{
	class A3_Ui_F_MP_Mark
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Marksmen (Multiplayer) - User Interface";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Mark"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class DefaultFont
{
	font="RobotoCondensed";
};
class ScrollBar
{
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.30000001};
	thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow=0;
	scrollSpeed=0.059999999;
	width=0;
	height=0;
	autoScrollEnabled=0;
	autoScrollSpeed=-1;
	autoScrollDelay=5;
	autoScrollRewind=0;
};
class CfgScriptPaths
{
	MpMarkDisplays="A3\ui_f_mp_mark\UI\displays\";
	MpMarkTitles="A3\ui_f_mp_mark\UI\RscTitles\";
};
class RscControlsGroup
{
	class VScrollbar;
	class HScrollbar;
};
class IGUIBack;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscText;
class RscTitle;
class RscPicture;
class RscPictureKeepAspect;
class RscActivePicture;
class RscActivePictureKeepAspect;
class RscTree;
class RscStructuredText
{
	class Attributes;
};
class RscActiveText;
class RscButtonTextOnly;
class RscShortcutButton;
class RscCheckbox;
class RscButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscListBox;
class RscListNBox;
class RscEdit;
class RscXSliderH;
class RscXListBox;
class RscFrame;
class RscHTML;
class RscStandardDisplay;
class RscCombo;
class RscVignette;
class RscProgress;
class RscHitZones;
class RscLadderPicture;
class RscMapControl
{
	class Legend;
	class Task;
	class Waypoint;
	class WaypointCompleted;
	class CustomMark;
	class Command;
	class Bush;
	class Rock;
	class SmallTree;
	class Tree;
	class busstop;
	class fuelstation;
	class hospital;
	class church;
	class lighthouse;
	class power;
	class powersolar;
	class powerwave;
	class powerwind;
	class quay;
	class transmitter;
	class watertower;
	class Cross;
	class Chapel;
	class Shipwreck;
	class Bunker;
	class Fortress;
	class Fountain;
	class Ruin;
	class Stack;
	class Tourism;
	class ViewTower;
};
