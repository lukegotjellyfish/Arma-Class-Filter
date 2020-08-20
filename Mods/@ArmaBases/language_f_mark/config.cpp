class CfgPatches
{
	class A3_Language_F_Mark
	{
		name="Arma 3 Marksmen - Texts and Translations";
		units[]={};
		weapons[]={};
	};
};
class CfgHints
{
	class Weapons_basic
	{
		class WeaponBasics
		{
			description="$STR_A3_WeaponBasics2";
			tip="";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\Rifle_ca.paa";
			arguments[]=
			{
				
				{
					
					{
						"defaultAction"
					}
				},
				
				{
					
					{
						"nextWeapon"
					}
				},
				
				{
					
					{
						"optics"
					}
				},
				
				{
					
					{
						"holdBreath"
					}
				},
				
				{
					
					{
						"reloadMagazine"
					}
				}
			};
			logicalOrder=1;
		};
		class Ballistics
		{
			description="$STR_A3_Ballistics2";
			tip="";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\Zeroing_ca.paa";
			arguments[]={};
			logicalOrder=11;
		};
		class TargetLeading
		{
			description="$STR_A3_TargetLeading2";
			tip="";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\Shoot_ca.paa";
			arguments[]={};
			logicalOrder=13;
		};
		class WeaponDeployment
		{
			description="$STR_A3_WeaponDeployment2";
			tip="$STR_A3_WeaponDeployment3";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\WeaponDeployment_ca.paa";
			arguments[]=
			{
				
				{
					
					{
						"deployWeaponAuto"
					}
				}
			};
			logicalOrder=9;
		};
		class WeaponResting
		{
			description="$STR_A3_WeaponResting2";
			tip="";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\WeaponResting_ca.paa";
			arguments[]={};
			logicalOrder=8;
		};
		class Zooming
		{
			class Optics_sub
			{
				description="$STR_A3_Optics2";
				tip="";
				image="\A3\Ui_f\data\GUI\Cfg\Hints\Optics_ca.paa";
				arguments[]=
				{
					
					{
						
						{
							"optics"
						}
					},
					
					{
						
						{
							"opticsMode"
						}
					},
					
					{
						
						{
							"zoomIn"
						}
					},
					
					{
						
						{
							"zoomOut"
						}
					},
					
					{
						
						{
							"zeroingUp"
						}
					},
					
					{
						
						{
							"zeroingDown"
						}
					}
				};
			};
			class BulletDropCompensator_sub
			{
				description="$STR_A3_BulletDropCompensator2";
				tip="";
				image="\A3\Ui_f\data\GUI\Cfg\Hints\Targets_ca.paa";
				arguments[]={};
			};
			class MilDot_sub
			{
				description="$STR_A3_MilDot2";
				tip="$STR_A3_MilDot3";
				image="\A3\Ui_f\data\GUI\Cfg\Hints\Targets_ca.paa";
				arguments[]={};
			};
		};
	};
	class Weapons
	{
		class WeaponInertia
		{
			description="$STR_A3_WeaponInertia2";
			tip="$STR_A3_WeaponInertia3";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\WeaponInertia_ca.paa";
			arguments[]={};
			logicalOrder=5;
		};
	};
	class WeaponList
	{
		class DMR02
		{
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CFGWEAPONS_DMR_02_BASE_F0"
				},
				
				{
					"STR_A3_CFGWEAPONS_SRIFLE_DMR_02_F_LIBRARY0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			weapon="srifle_DMR_02_F";
			logicalOrder=8;
		};
		class DMR03
		{
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CFGWEAPONS_DMR_03_BASE_F0"
				},
				
				{
					"STR_A3_CFGWEAPONS_SRIFLE_DMR_03_F_LIBRARY0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			weapon="srifle_DMR_03_F";
			logicalOrder=9;
		};
		class DMR04
		{
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CFGWEAPONS_DMR_04_BASE_F0"
				},
				
				{
					"STR_A3_CFGWEAPONS_SRIFLE_DMR_04_F_LIBRARY0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			weapon="srifle_DMR_04_F";
			logicalOrder=3;
		};
		class DMR05
		{
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CFGWEAPONS_DMR_05_BASE_F0"
				},
				
				{
					"STR_A3_CFGWEAPONS_SRIFLE_DMR_05_BLK_F_LIBRARY0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			weapon="srifle_DMR_05_blk_F";
			logicalOrder=4;
		};
		class DMR06
		{
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CFGWEAPONS_DMR_06_BASE_F0"
				},
				
				{
					"STR_A3_CFGWEAPONS_SRIFLE_DMR_06_CAMO_F_LIBRARY0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			weapon="srifle_DMR_06_camo_F";
			logicalOrder=10;
		};
		class MMG01
		{
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CFGWEAPONS_MMG_01_BASE_F0"
				},
				
				{
					"STR_A3_CFGWEAPONS_MMG_01_HEX_F_LIBRARY0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			weapon="MMG_01_hex_F";
			logicalOrder=18;
		};
		class MMG02
		{
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CFGWEAPONS_MMG_02_BASE_F0"
				},
				
				{
					"STR_A3_CFGWEAPONS_MMG_02_CAMO_F_LIBRARY0"
				}
			};
			image="\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			weapon="MMG_02_camo_F";
			logicalOrder=27;
		};
	};
	class Tactics
	{
		class Suppression
		{
			description="$STR_A3_Suppression2";
			tip="$STR_A3_Suppression3";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\Automatic_ca.paa";
			arguments[]={};
			logicalOrder=2;
		};
	};
	class UAV
	{
		class RemoteCameras
		{
			description="$STR_A3_RemoteCameras2";
			tip="";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\RemoteDesignators_ca.paa";
			arguments[]=
			{
				
				{
					
					{
						"TurretElevationUp"
					}
				},
				
				{
					
					{
						"TurretElevationDown"
					}
				}
			};
			logicalOrder=10;
		};
		class AVCamera
		{
			description="$STR_A3_AVCamera2";
			tip="";
			image="\A3\Ui_f\data\GUI\Cfg\Hints\Thirdperson_ca.paa";
			arguments[]=
			{
				
				{
					
					{
						"UavViewToggle"
					}
				}
			};
			logicalOrder=11;
		};
	};
	class DlcMessage
	{
		class Dlc332350
		{
			description="$STR_A3_CfgHints_DlcMessage_Dlc2885201";
			tip="$STR_A3_CfgHints_DlcMessage_Dlc28852002";
			arguments[]=
			{
				
				{
					
					{
						"OpenDlcScreen"
					}
				}
			};
			image="\a3\data_f_mark\logos\arma3_mark_icon_hint_ca.paa";
		};
		class Dlc332350FM
		{
			description="$STR_A3_CfgHints_DlcMessage_Dlc2885201";
			tip="$STR_A3_CfgHints_DlcMessage_Dlc28852002";
			arguments[]=
			{
				
				{
					
					{
						"OpenDlcScreen"
					}
				}
			};
			image="\a3\data_f_mark\logos\arma3_mark_icon_hint_ca.paa";
		};
	};
	class PremiumContent
	{
		class PremiumMark
		{
			description="$STR_A3_CfgHints_PremiumContent_PremiumMark1";
			tip="$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[]={};
			image="\a3\data_f_mark\logos\arma3_mark_icon_hint_ca.paa";
			logicalOrder=5;
		};
	};
};
