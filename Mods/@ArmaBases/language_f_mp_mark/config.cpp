class CfgPatches
{
	class A3_Language_F_MP_Mark
	{
		name="Arma 3 Marksmen (Multiplayer) - Texts and Translations";
		units[]={};
		weapons[]={};
	};
};
class CfgHints
{
	class Multiplayer
	{
		class DynamicGroups
		{
			displayName="$STR_A3_DynamicGroups1";
			description="$STR_A3_DynamicGroups2";
			tip="";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\Rifle_ca.paa";
			arguments[]=
			{
				
				{
					
					{
						"teamSwitch"
					}
				}
			};
			logicalOrder=6;
		};
	};
	class Common
	{
		class Containers
		{
			class EndGameVirtualArsenal_sub
			{
				displayName="$STR_A3_rscdisplaymain_buttonvirtualarsenal";
				description="$STR_A3_EndGameVA2";
				tip="";
				image="\A3\Ui_f\data\GUI\Cfg\Hints\Switch_ca.paa";
				arguments[]={};
			};
		};
	};
};
