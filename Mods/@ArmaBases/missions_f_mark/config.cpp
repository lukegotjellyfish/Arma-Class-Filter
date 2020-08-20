class CfgPatches
{
	class A3_Missions_F_Mark
	{
		name="Arma 3 Marksmen - Playable Content";
		units[]={};
		weapons[]={};
	};
};
class CfgIdentities
{
	class MARK_O_Hossein
	{
		name="$STR_A3_CFGIDENTITIES_Hossein0";
		face="PersianHead_A3_02";
		glasses="G_Balaclava_blk";
		speaker="Male03PER";
		pitch=1;
	};
	class MARK_B_Player1
	{
		name="$STR_A3_NATOMen_LastNames89";
		nameSound="OConnor";
		face="WhiteHead_20";
		glasses="None";
		speaker="Male03ENG";
		pitch=1;
	};
	class MARK_B_Player2
	{
		name="$STR_A3_NATOMen_LastNames21";
		nameSound="Walker";
		face="WhiteHead_01";
		glasses="G_Bandanna_shades";
		speaker="Male07ENG";
		pitch=1;
	};
	class MARK_B_Player3
	{
		name="$STR_A3_CfgIdentities_PB_B_GolfOne0";
		nameSound="Lopez";
		face="WhiteHead_05";
		glasses="None";
		speaker="Male05ENG";
		pitch=1;
	};
	class MARK_B_Player4
	{
		name="$STR_A3_CfgIdentities_Jackson0";
		nameSound="Jackson";
		face="WhiteHead_11";
		glasses="G_Tactical_Clear";
		speaker="Male08ENG";
		pitch=1;
	};
};
class CfgFiringDrills
{
	class SP_FD11
	{
		color[]={0.69019598,0.25097999,0.65490198,1};
		colorName="purple";
		objectCOF="BIS_firingDrills1";
		statistic="FD11";
		onReset="reset.sqf";
		leaderboard="1134250";
		recolor[]=
		{
			"BIS_FD_recolor1",
			"BIS_FD_recolor2",
			"BIS_FD_recolor3",
			"BIS_FD_recolor4",
			"BIS_FD_recolor5",
			"BIS_FD_recolor6",
			"BIS_FD_recolor7",
			"BIS_FD_recolor8",
			"BIS_FD_recolor9",
			"BIS_FD_recolor10",
			"BIS_FD_recolor11",
			"BIS_FD_recolor12",
			"BIS_FD_recolor13",
			"BIS_FD_recolor14",
			"BIS_FD_recolor15",
			"BIS_FD_recolor16",
			"BIS_FD_recolor17",
			"BIS_FD_recolor18",
			"BIS_FD_recolor19",
			"BIS_FD_recolor20",
			"BIS_FD_recolor21",
			"BIS_FD_recolor22",
			"BIS_FD_recolor23",
			"BIS_FD_recolor24",
			"BIS_FD_recolor25",
			"BIS_FD_recolor26",
			"BIS_FD_recolor27",
			"BIS_FD_recolor28",
			"BIS_FD_recolor29",
			"BIS_FD_recolor30",
			"BIS_FD_recolor31",
			"BIS_FD_recolor32",
			"BIS_FD_recolor33",
			"BIS_FD_recolor34",
			"BIS_FD_recolor35",
			"BIS_FD_recolor36"
		};
		decals[]={};
		ruleSelectors[]=
		{
			"BIS_FD_ruleSelector1",
			"BIS_FD_ruleSelector2"
		};
		restartSelectors[]=
		{
			"BIS_FD_restartSelector1"
		};
		quitSelectors[]=
		{
			"BIS_FD_quitSelector1"
		};
		containersWeapons[]=
		{
			"BIS_FD_weapons1"
		};
		containersMagazines[]=
		{
			"BIS_FD_ammo1",
			"BIS_FD_ammo2",
			"BIS_FD_ammo3",
			"BIS_FD_ammo4"
		};
		containersMagazinesCount[]={10,3,5};
		weapons[]=
		{
			"srifle_DMR_03_AMS_F",
			"MMG_02_black_RCO_BI_F",
			"hgun_P07_F"
		};
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"130Rnd_338_Mag",
			"16Rnd_9x21_Mag"
		};
		weaponsCompetitor[]=
		{
			"srifle_DMR_03_AMS_F",
			"hgun_P07_F"
		};
		magazinesCompetitor[]=
		{
			"20Rnd_762x51_Mag",
			"16Rnd_9x21_Mag"
		};
		timesMedals[]={277.10001,238,209.5};
		class RuleSets
		{
			competitive[]={2,0,2,2,2,1};
			training[]={1,2,1,1,1,0};
		};
		class DynOs
		{
			class DynO1
			{
				script="dyno_sp_fd11.sqf";
				positionAnchor="BIS_FD_DynO1Anchor";
			};
		};
		class CheckPoints
		{
			class CP1
			{
				object="BIS_FD_CP1";
			};
			class CP2
			{
				object="BIS_FD_CP2";
				shootingBoxes[]=
				{
					"BIS_FD_CP2_Box"
				};
				weapons[]=
				{
					"srifle_DMR_03_AMS_F"
				};
				stances[]=
				{
					"stand"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target2_1";
						upTime=4;
					};
					class T2: T1
					{
						object="BIS_FD_target2_2";
						upTime=5;
					};
					class T3: T1
					{
						object="BIS_FD_target2_3";
						trigger[]=
						{
							"BIS_FD_target2_1",
							"BIS_FD_target2_2"
						};
						upTime=6;
					};
					class T4: T3
					{
						object="BIS_FD_target2_4";
						positions[]=
						{
							"BIS_FD_target2_4A",
							"BIS_FD_target2_4B"
						};
						directions[]=
						{
							"BIS_FD_target2_4A",
							"BIS_FD_target2_4B"
						};
						upTime=6.5;
					};
					class T5: T3
					{
						object="BIS_FD_target2_5";
						positions[]=
						{
							"BIS_FD_target2_5A",
							"BIS_FD_target2_5B",
							"BIS_FD_target2_5C"
						};
						directions[]=
						{
							"BIS_FD_target2_5A",
							"BIS_FD_target2_5B",
							"BIS_FD_target2_5C"
						};
						triggerTime=2;
						upTime=8;
					};
					class Optional1
					{
						object="BIS_FD_bonus2_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus2_2";
					};
				};
			};
			class CP3
			{
				object="BIS_FD_CP3";
				shootingBoxes[]=
				{
					"BIS_FD_CP3_Box"
				};
				weapons[]=
				{
					"srifle_DMR_03_AMS_F"
				};
				stances[]=
				{
					"crouch"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target3_1";
						upTime=8;
					};
					class T2: T1
					{
						object="BIS_FD_target3_2";
					};
					class T3: T1
					{
						object="BIS_FD_target3_3";
						positions[]=
						{
							"BIS_FD_target3_3A",
							"BIS_FD_target3_3B"
						};
						directions[]=
						{
							"BIS_FD_target3_3A",
							"BIS_FD_target3_3B"
						};
						upTime=9;
					};
					class T4: T1
					{
						object="BIS_FD_target3_4";
						trigger[]=
						{
							"BIS_FD_target3_1",
							"BIS_FD_target3_2",
							"BIS_FD_target3_3"
						};
						triggerTime=3;
						upTime=5;
						positionsMove[]=
						{
							"BIS_FD_target3_4_WP1"
						};
						timesMove[]={5};
					};
					class T5: T4
					{
						object="BIS_FD_target3_5";
						positionsMove[]=
						{
							"BIS_FD_target3_5_WP1"
						};
					};
					class T6: T4
					{
						object="BIS_FD_target3_6";
						triggerTime=0;
						upTime=9;
						positions[]=
						{
							"BIS_FD_target3_6A",
							"BIS_FD_target3_6B",
							"BIS_FD_target3_6C"
						};
						directions[]=
						{
							"BIS_FD_target3_6A",
							"BIS_FD_target3_6B",
							"BIS_FD_target3_6C"
						};
						positionsMove[]={};
						timesMove[]={};
					};
					class T7: T4
					{
						object="BIS_FD_target3_7";
						triggerTime=0;
						upTime=10.5;
						positions[]=
						{
							"BIS_FD_target3_7A",
							"BIS_FD_target3_7B"
						};
						directions[]=
						{
							"BIS_FD_target3_7A",
							"BIS_FD_target3_7B"
						};
						positionsMove[]={};
						timesMove[]={};
					};
					class T8: T1
					{
						object="BIS_FD_target3_8";
						trigger[]=
						{
							"BIS_FD_target3_4",
							"BIS_FD_target3_5",
							"BIS_FD_target3_6",
							"BIS_FD_target3_7"
						};
						triggerTime=3;
						upTime=9.5;
					};
					class T9: T8
					{
						object="BIS_FD_target3_9";
						positions[]=
						{
							"BIS_FD_target3_9A",
							"BIS_FD_target3_9B"
						};
						directions[]=
						{
							"BIS_FD_target3_9A",
							"BIS_FD_target3_9B"
						};
						upTime=12;
					};
					class T10: T8
					{
						object="BIS_FD_target3_10";
						triggerTime=5;
						upTime=12;
					};
					class T11: T8
					{
						object="BIS_FD_target3_11";
						upTime=10.5;
					};
					class T12: T8
					{
						object="BIS_FD_target3_12";
						positions[]=
						{
							"BIS_FD_target3_12A",
							"BIS_FD_target3_12B",
							"BIS_FD_target3_12C"
						};
						directions[]=
						{
							"BIS_FD_target3_12A",
							"BIS_FD_target3_12B",
							"BIS_FD_target3_12C"
						};
						triggerTime=5;
					};
					class T13
					{
						object="BIS_FD_target3_13";
						trigger[]=
						{
							"BIS_FD_target3_8",
							"BIS_FD_target3_9",
							"BIS_FD_target3_10",
							"BIS_FD_target3_11",
							"BIS_FD_target3_12"
						};
						triggerTime=2;
						upTime=20;
					};
					class T14: T1
					{
						object="BIS_FD_target3_14";
						trigger[]=
						{
							"BIS_FD_target3_8",
							"BIS_FD_target3_9",
							"BIS_FD_target3_10",
							"BIS_FD_target3_11",
							"BIS_FD_target3_12"
						};
						triggerTime=4;
						upTime=10;
						positionsMove[]=
						{
							"BIS_FD_target3_14_WP1"
						};
						timesMove[]={10};
					};
					class Optional1
					{
						object="BIS_FD_bonus3_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus3_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus3_3";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus3_4";
					};
					class Optional5: Optional1
					{
						object="BIS_FD_bonus3_5";
					};
					class Optional6: Optional1
					{
						object="BIS_FD_bonus3_6";
					};
					class Optional7: Optional1
					{
						object="BIS_FD_bonus3_7";
					};
					class Optional8
					{
						object="BIS_FD_bonus3_8";
						optional=1;
						bonus=5;
					};
					class Optional9: Optional8
					{
						object="BIS_FD_bonus3_9";
					};
					class Optional10: Optional8
					{
						object="BIS_FD_bonus3_10";
					};
					class Optional11: Optional8
					{
						object="BIS_FD_bonus3_11";
					};
				};
			};
			class CP3A
			{
				object="BIS_FD_CP3A";
				class Targets
				{
					class Optional12
					{
						object="BIS_FD_bonus3_12";
						optional=1;
						bonus=10;
					};
					class Optional13: Optional12
					{
						object="BIS_FD_bonus3_13";
					};
					class Optional14: Optional12
					{
						object="BIS_FD_bonus3_14";
					};
					class Optional15: Optional12
					{
						object="BIS_FD_bonus3_15";
					};
					class Optional16: Optional12
					{
						object="BIS_FD_bonus3_16";
					};
					class Optional17: Optional12
					{
						object="BIS_FD_bonus3_17";
					};
					class Optional18
					{
						object="BIS_FD_bonus3_18";
						optional=1;
						bonus=5;
					};
					class Optional19: Optional18
					{
						object="BIS_FD_bonus3_19";
					};
					class Optional20: Optional18
					{
						object="BIS_FD_bonus3_20";
					};
					class Optional21: Optional18
					{
						object="BIS_FD_bonus3_21";
					};
					class Optional22: Optional18
					{
						object="BIS_FD_bonus3_22";
					};
					class Optional23: Optional18
					{
						object="BIS_FD_bonus3_23";
					};
					class Optional24: Optional12
					{
						object="BIS_FD_bonus3_24";
					};
					class Optional25: Optional12
					{
						object="BIS_FD_bonus3_25";
					};
					class Optional26: Optional12
					{
						object="BIS_FD_bonus3_26";
					};
					class Optional27: Optional18
					{
						object="BIS_FD_bonus3_27";
					};
					class Optional28: Optional18
					{
						object="BIS_FD_bonus3_28";
					};
					class Optional29: Optional18
					{
						object="BIS_FD_bonus3_29";
					};
				};
			};
			class CP4
			{
				object="BIS_FD_CP4";
				shootingBoxes[]=
				{
					"BIS_FD_CP4_Box"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target4_1";
						positions[]=
						{
							"BIS_FD_target4_1A",
							"BIS_FD_target4_1B",
							"BIS_FD_target4_1C"
						};
						directions[]=
						{
							"BIS_FD_target4_1A",
							"BIS_FD_target4_1B",
							"BIS_FD_target4_1C"
						};
						upTime=30;
					};
					class T2: T1
					{
						object="BIS_FD_target4_2";
						positions[]={};
						directions[]={};
					};
					class T3: T1
					{
						object="BIS_FD_target4_3";
						upTime=32;
						positions[]={};
						directions[]={};
					};
					class T4: T1
					{
						object="BIS_FD_target4_4";
						positions[]={};
						directions[]={};
					};
					class T5: T1
					{
						object="BIS_FD_target4_5";
						positions[]=
						{
							"BIS_FD_target4_5A",
							"BIS_FD_target4_5B",
							"BIS_FD_target4_5C"
						};
						directions[]=
						{
							"BIS_FD_target4_5A",
							"BIS_FD_target4_5B",
							"BIS_FD_target4_5C"
						};
						upTime=30.5;
					};
					class T6: T1
					{
						object="BIS_FD_target4_6";
						positions[]={};
						directions[]={};
					};
					class T7: T1
					{
						object="BIS_FD_target4_7";
						trigger[]=
						{
							"BIS_FD_target4_1",
							"BIS_FD_target4_2",
							"BIS_FD_target4_3",
							"BIS_FD_target4_4",
							"BIS_FD_target4_5",
							"BIS_FD_target4_6"
						};
						positions[]={};
						directions[]={};
						triggerTime=1;
						upTime=22;
					};
					class T8: T7
					{
						object="BIS_FD_target4_8";
					};
					class T9: T7
					{
						object="BIS_FD_target4_9";
					};
					class T10: T7
					{
						object="BIS_FD_target4_10";
					};
					class T11: T7
					{
						object="BIS_FD_target4_11";
					};
					class T12: T7
					{
						object="BIS_FD_target4_12";
					};
					class T13: T1
					{
						object="BIS_FD_target4_13";
						trigger[]=
						{
							"BIS_FD_target4_7",
							"BIS_FD_target4_8",
							"BIS_FD_target4_9",
							"BIS_FD_target4_10",
							"BIS_FD_target4_11",
							"BIS_FD_target4_12"
						};
						positions[]={};
						directions[]={};
						triggerTime=3;
						upTime=36;
						positionsMove[]=
						{
							"BIS_FD_target4_13_WP1"
						};
						timesMove[]={26};
					};
					class T14: T13
					{
						object="BIS_FD_target4_14";
						upTime=34;
						positionsMove[]=
						{
							"BIS_FD_target4_14_WP1"
						};
						timesMove[]={24};
					};
					class T15: T13
					{
						object="BIS_FD_target4_15";
						upTime=34;
						positionsMove[]=
						{
							"BIS_FD_target4_15_WP1"
						};
						timesMove[]={24};
					};
					class T16: T13
					{
						object="BIS_FD_target4_16";
						upTime=39;
						positionsMove[]=
						{
							"BIS_FD_target4_16_WP1"
						};
						timesMove[]={29};
					};
					class T17: T13
					{
						object="BIS_FD_target4_17";
						upTime=38.5;
						positionsMove[]=
						{
							"BIS_FD_target4_17_WP1"
						};
						timesMove[]={28.5};
					};
					class T18: T13
					{
						object="BIS_FD_target4_18";
						positionsMove[]=
						{
							"BIS_FD_target4_18_WP1"
						};
					};
					class T19: T13
					{
						object="BIS_FD_target4_19";
						positionsMove[]=
						{
							"BIS_FD_target4_19_WP1"
						};
					};
					class T20: T13
					{
						object="BIS_FD_target4_20";
						upTime=40;
						positionsMove[]=
						{
							"BIS_FD_target4_20_WP1"
						};
						timesMove[]={30};
					};
					class Optional1
					{
						object="BIS_FD_bonus4_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus4_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus4_3";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus4_4";
					};
					class Optional5
					{
						object="BIS_FD_bonus4_5";
						optional=1;
						bonus=5;
					};
					class Optional6: Optional5
					{
						object="BIS_FD_bonus4_6";
					};
					class Optional7: Optional5
					{
						object="BIS_FD_bonus4_7";
					};
					class Optional8: Optional5
					{
						object="BIS_FD_bonus4_8";
					};
				};
			};
			class CP5
			{
				object="BIS_FD_CP5";
				shootingBoxes[]=
				{
					"BIS_FD_CP5_Box"
				};
				weapons[]=
				{
					"MMG_02_black_RCO_BI_F"
				};
				stances[]=
				{
					"crouch"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target5_1";
						upTime=9;
					};
					class T2: T1
					{
						object="BIS_FD_target5_2";
						positions[]=
						{
							"BIS_FD_target5_2A",
							"BIS_FD_target5_2B"
						};
						directions[]=
						{
							"BIS_FD_target5_2A",
							"BIS_FD_target5_2B"
						};
					};
					class T3: T1
					{
						object="BIS_FD_target5_3";
						upTime=10.5;
					};
					class T4: T1
					{
						object="BIS_FD_target5_4";
						triggerTime=4;
						upTime=10;
					};
					class T5: T1
					{
						object="BIS_FD_target5_5";
						triggerTime=4;
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot5_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot5_2";
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot5_3";
					};
					class NoShoot4: NoShoot1
					{
						object="BIS_FD_noShoot5_4";
					};
					class NoShoot5: NoShoot1
					{
						object="BIS_FD_noShoot5_5";
					};
					class T6: T1
					{
						object="BIS_FD_target5_6";
						trigger[]=
						{
							"BIS_FD_target5_1",
							"BIS_FD_target5_2",
							"BIS_FD_target5_3",
							"BIS_FD_target5_4",
							"BIS_FD_target5_5"
						};
						triggerTime=2;
						positions[]=
						{
							"BIS_FD_target5_6A",
							"BIS_FD_target5_6B"
						};
						directions[]=
						{
							"BIS_FD_target5_6A",
							"BIS_FD_target5_6B"
						};
						upTime=22;
					};
					class T7: T6
					{
						object="BIS_FD_target5_7";
						chance=0.69999999;
						positions[]=
						{
							"BIS_FD_target5_7A",
							"BIS_FD_target5_7B"
						};
						directions[]=
						{
							"BIS_FD_target5_7A",
							"BIS_FD_target5_7B"
						};
					};
					class T8: T6
					{
						object="BIS_FD_target5_8";
						positions[]={};
						directions[]={};
						upTime=24;
					};
					class T9: T6
					{
						object="BIS_FD_target5_9";
						positions[]={};
						directions[]={};
						upTime=24;
					};
					class T10: T6
					{
						object="BIS_FD_target5_10";
						positions[]=
						{
							"BIS_FD_target5_10A",
							"BIS_FD_target5_10B"
						};
						directions[]=
						{
							"BIS_FD_target5_10A",
							"BIS_FD_target5_10B"
						};
					};
					class T11: T6
					{
						object="BIS_FD_target5_11";
						chance=0.80000001;
						positions[]={};
						directions[]={};
						upTime=22.5;
					};
					class NoShoot6: NoShoot1
					{
						object="BIS_FD_noShoot5_6";
						trigger="BIS_FD_target5_5";
						positionsMove[]=
						{
							"BIS_FD_noShoot5_6_WP1"
						};
						timesMove[]={22};
					};
					class NoShoot7: NoShoot6
					{
						object="BIS_FD_noShoot5_7";
						positionsMove[]=
						{
							"BIS_FD_noShoot5_7_WP1"
						};
						timesMove[]={24};
					};
					class NoShoot8: NoShoot6
					{
						object="BIS_FD_noShoot5_8";
						positionsMove[]=
						{
							"BIS_FD_noShoot5_8_WP1"
						};
					};
					class NoShoot9: NoShoot6
					{
						object="BIS_FD_noShoot5_9";
						positionsMove[]=
						{
							"BIS_FD_noShoot5_9_WP1"
						};
						timesMove[]={26};
					};
					class NoShoot10: NoShoot6
					{
						object="BIS_FD_noShoot5_10";
						positionsMove[]=
						{
							"BIS_FD_noShoot5_10_WP1"
						};
						timesMove[]={26};
					};
					class Optional1
					{
						object="BIS_FD_bonus5_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus5_2";
					};
					class Optional3
					{
						object="BIS_FD_bonus5_3";
						optional=1;
						bonus=5;
					};
					class Optional4: Optional3
					{
						object="BIS_FD_bonus5_4";
					};
					class Optional5: Optional3
					{
						object="BIS_FD_bonus5_5";
					};
					class Optional6: Optional3
					{
						object="BIS_FD_bonus5_6";
					};
					class Optional7: Optional3
					{
						object="BIS_FD_bonus5_7";
					};
					class Optional8: Optional3
					{
						object="BIS_FD_bonus5_8";
					};
					class Optional9: Optional3
					{
						object="BIS_FD_bonus5_9";
					};
					class Optional10: Optional3
					{
						object="BIS_FD_bonus5_10";
					};
					class Optional11: Optional3
					{
						object="BIS_FD_bonus5_11";
					};
					class Optional12: Optional3
					{
						object="BIS_FD_bonus5_12";
					};
					class Optional13: Optional3
					{
						object="BIS_FD_bonus5_13";
					};
					class Optional14: Optional3
					{
						object="BIS_FD_bonus5_14";
					};
					class Optional15: Optional3
					{
						object="BIS_FD_bonus5_15";
					};
					class Optional16: Optional3
					{
						object="BIS_FD_bonus5_16";
					};
					class Optional17: Optional3
					{
						object="BIS_FD_bonus5_17";
					};
					class Optional18: Optional3
					{
						object="BIS_FD_bonus5_18";
					};
					class Optional19: Optional3
					{
						object="BIS_FD_bonus5_19";
					};
					class Optional20: Optional3
					{
						object="BIS_FD_bonus5_20";
					};
					class Optional21: Optional3
					{
						object="BIS_FD_bonus5_22";
					};
					class Optional22: Optional3
					{
						object="BIS_FD_bonus5_22";
					};
					class Optional23: Optional3
					{
						object="BIS_FD_bonus5_23";
					};
				};
			};
			class CP6
			{
				object="BIS_FD_CP6";
				shootingBoxes[]=
				{
					"BIS_FD_CP6_Box"
				};
				weapons[]=
				{
					"MMG_02_black_RCO_BI_F"
				};
				stances[]=
				{
					"prone"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target6_1";
						upTime=10;
						positionsMove[]=
						{
							"BIS_FD_target6_1_WP1"
						};
						timesMove[]={10};
					};
					class T2: T1
					{
						object="BIS_FD_target6_2";
						positionsMove[]=
						{
							"BIS_FD_target6_2_WP1"
						};
					};
					class T1A: T1
					{
						object="BIS_FD_target6_1A";
						triggerTime=4;
						upTime=9;
						positionsMove[]=
						{
							"BIS_FD_target6_1A_WP1"
						};
						timesMove[]={9};
					};
					class T2A: T1
					{
						object="BIS_FD_target6_2A";
						triggerTime=4;
						upTime=9.5;
						positionsMove[]=
						{
							"BIS_FD_target6_2A_WP1"
						};
						timesMove[]={9.5};
					};
					class T3: T1
					{
						object="BIS_FD_target6_3";
						triggerTime=8;
						upTime=12;
						positionsMove[]=
						{
							"BIS_FD_target6_3_WP1"
						};
						timesMove[]={12};
					};
					class T4: T1
					{
						object="BIS_FD_target6_4";
						triggerTime=8;
						upTime=12;
						positionsMove[]=
						{
							"BIS_FD_target6_4_WP1"
						};
						timesMove[]={12};
					};
					class T5: T1
					{
						object="BIS_FD_target6_5";
						triggerTime=8;
						upTime=11;
						positionsMove[]=
						{
							"BIS_FD_target6_5_WP1"
						};
						timesMove[]={11};
					};
					class T6: T1
					{
						object="BIS_FD_target6_6";
						triggerTime=8.5;
						upTime=12.5;
						positionsMove[]=
						{
							"BIS_FD_target6_6_WP1"
						};
						timesMove[]={12.5};
					};
					class T7: T1
					{
						object="BIS_FD_target6_7";
						triggerTime=9;
						upTime=13.5;
						positionsMove[]=
						{
							"BIS_FD_target6_7_WP1"
						};
						timesMove[]={13.5};
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot6_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot6_2";
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot6_3";
					};
					class T8: T1
					{
						object="BIS_FD_target6_8";
						trigger[]=
						{
							"BIS_FD_target6_1",
							"BIS_FD_target6_2",
							"BIS_FD_target6_3",
							"BIS_FD_target6_4",
							"BIS_FD_target6_5",
							"BIS_FD_target6_6",
							"BIS_FD_target6_7"
						};
						triggerTime=5;
						upTime=40;
						positionsMove[]=
						{
							"BIS_FD_target6_8_WP1"
						};
						timesMove[]={20};
					};
					class T9: T8
					{
						object="BIS_FD_target6_9";
						upTime=32;
						positionsMove[]={};
						timesMove[]={};
					};
					class T10: T8
					{
						object="BIS_FD_target6_10";
						chance=0.5;
						upTime=24;
						positionsMove[]={};
						timesMove[]={};
						positions[]=
						{
							"BIS_FD_target6_10A",
							"BIS_FD_target6_10B"
						};
						directions[]=
						{
							"BIS_FD_target6_10A",
							"BIS_FD_target6_10B"
						};
					};
					class T11: T8
					{
						object="BIS_FD_target6_11";
						chance=0.30000001;
						positionsMove[]={};
						timesMove[]={};
					};
					class T12: T8
					{
						object="BIS_FD_target6_12";
						positionsMove[]={};
						timesMove[]={};
					};
					class T13: T8
					{
						object="BIS_FD_target6_13";
						chance=0.80000001;
						upTime=29;
						positionsMove[]={};
						timesMove[]={};
					};
					class T14: T8
					{
						object="BIS_FD_target6_14";
						upTime=28.5;
						positionsMove[]={};
						timesMove[]={};
					};
					class T15: T8
					{
						object="BIS_FD_target6_15";
						positionsMove[]={};
						timesMove[]={};
						positions[]=
						{
							"BIS_FD_target6_15A",
							"BIS_FD_target6_15B",
							"BIS_FD_target6_15C"
						};
						directions[]=
						{
							"BIS_FD_target6_15A",
							"BIS_FD_target6_15B",
							"BIS_FD_target6_15C"
						};
					};
					class T16: T8
					{
						object="BIS_FD_target6_16";
						chance=0.60000002;
						triggerTime=9;
						positionsMove[]={};
						timesMove[]={};
					};
					class T17: T8
					{
						object="BIS_FD_target6_17";
						triggerTime=9;
						positionsMove[]={};
						timesMove[]={};
						positions[]=
						{
							"BIS_FD_target6_17A",
							"BIS_FD_target6_17B"
						};
						directions[]=
						{
							"BIS_FD_target6_17A",
							"BIS_FD_target6_17B"
						};
					};
					class T18: T8
					{
						object="BIS_FD_target6_18";
						triggerTime=12;
						upTime=23;
						positionsMove[]=
						{
							"BIS_FD_target6_18_WP1"
						};
						timesMove[]={16};
					};
					class T19: T8
					{
						object="BIS_FD_target6_19";
						positions[]=
						{
							"BIS_FD_target6_19A",
							"BIS_FD_target6_19B"
						};
						directions[]=
						{
							"BIS_FD_target6_19A",
							"BIS_FD_target6_19B"
						};
						positionsMove[]={};
						timesMove[]={};
					};
					class T20: T8
					{
						object="BIS_FD_target6_20";
						chance=0.69999999;
						positionsMove[]={};
						timesMove[]={};
					};
					class T21: T8
					{
						object="BIS_FD_target6_21";
						upTime=44;
						triggerTime=15;
						positions[]=
						{
							"BIS_FD_target6_21A",
							"BIS_FD_target6_21B"
						};
						directions[]=
						{
							"BIS_FD_target6_21A",
							"BIS_FD_target6_21B"
						};
						positionsMove[]={};
						timesMove[]={};
					};
					class T22: T8
					{
						object="BIS_FD_target6_22";
						triggerTime=15;
						upTime=44;
						positionsMove[]=
						{
							"BIS_FD_target6_22_WP1"
						};
						timesMove[]={29};
					};
					class Optional1
					{
						object="BIS_FD_bonus6_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus6_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus6_3";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus6_4";
					};
					class Optional5: Optional1
					{
						object="BIS_FD_bonus6_5";
					};
					class Optional6: Optional1
					{
						object="BIS_FD_bonus6_6";
					};
					class Optional7
					{
						object="BIS_FD_bonus6_7";
						optional=1;
						bonus=5;
					};
					class Optional8: Optional7
					{
						object="BIS_FD_bonus6_8";
					};
				};
			};
			class CP7
			{
				object="BIS_FD_CP7";
			};
		};
	};
	class SP_FD12
	{
		color[]={0.69019598,0.25097999,0.65490198,1};
		colorName="purple";
		objectCOF="BIS_firingDrills1";
		statistic="FD12";
		onReset="reset.sqf";
		leaderboard="1134251";
		recolor[]=
		{
			"BIS_FD_recolor1",
			"BIS_FD_recolor2",
			"BIS_FD_recolor3",
			"BIS_FD_recolor4",
			"BIS_FD_recolor5",
			"BIS_FD_recolor6",
			"BIS_FD_recolor7",
			"BIS_FD_recolor8",
			"BIS_FD_recolor9",
			"BIS_FD_recolor10",
			"BIS_FD_recolor11",
			"BIS_FD_recolor12",
			"BIS_FD_recolor13",
			"BIS_FD_recolor14",
			"BIS_FD_recolor15",
			"BIS_FD_recolor16",
			"BIS_FD_recolor17",
			"BIS_FD_recolor18",
			"BIS_FD_recolor19",
			"BIS_FD_recolor20",
			"BIS_FD_recolor21",
			"BIS_FD_recolor22",
			"BIS_FD_recolor23",
			"BIS_FD_recolor24",
			"BIS_FD_recolor25",
			"BIS_FD_recolor26",
			"BIS_FD_recolor27",
			"BIS_FD_recolor28",
			"BIS_FD_recolor29",
			"BIS_FD_recolor30",
			"BIS_FD_recolor31",
			"BIS_FD_recolor32",
			"BIS_FD_recolor33",
			"BIS_FD_recolor34",
			"BIS_FD_recolor35",
			"BIS_FD_recolor36",
			"BIS_FD_recolor37",
			"BIS_FD_recolor38",
			"BIS_FD_recolor39",
			"BIS_FD_recolor40",
			"BIS_FD_recolor41",
			"BIS_FD_recolor42",
			"BIS_FD_recolor43",
			"BIS_FD_recolor44",
			"BIS_FD_recolor45",
			"BIS_FD_recolor46",
			"BIS_FD_recolor47",
			"BIS_FD_recolor48",
			"BIS_FD_recolor49",
			"BIS_FD_recolor50",
			"BIS_FD_recolor51",
			"BIS_FD_recolor52",
			"BIS_FD_recolor53",
			"BIS_FD_recolor54",
			"BIS_FD_recolor55",
			"BIS_FD_recolor56",
			"BIS_FD_recolor57",
			"BIS_FD_recolor58",
			"BIS_FD_recolor59",
			"BIS_FD_recolor60",
			"BIS_FD_recolor61",
			"BIS_FD_recolor62"
		};
		decals[]=
		{
			
			{
				"BIS_FD_decal1",
				"a3\Missions_F_Beta\data\img\decals\decal_target_target5_ca",
				2
			},
			
			{
				"BIS_FD_decal1",
				"A3\Missions_F_Beta\data\img\decals\decal_penetrate5_ca",
				3
			},
			
			{
				"BIS_FD_decal3",
				"a3\Missions_F_Beta\data\img\decals\decal_target_noshoot5_ca",
				2
			},
			
			{
				"BIS_FD_decal3",
				"a3\Missions_F_Beta\data\img\decals\decal_watch_out5_ca",
				3
			},
			
			{
				"BIS_FD_decal3",
				"a3\Missions_F_Beta\data\img\decals\decal_penetrate5_ca",
				5
			},
			
			{
				"BIS_FD_decal4",
				"a3\Missions_F_Beta\data\img\decals\decal_watch_out5_ca",
				4
			},
			
			{
				"BIS_FD_decal4",
				"a3\Missions_F_Beta\data\img\decals\decal_penetrate5_ca",
				5
			},
			
			{
				"BIS_FD_decal4",
				"a3\Missions_F_Beta\data\img\decals\decal_target_right5_ca",
				2
			},
			
			{
				"BIS_FD_decal4",
				"a3\Missions_F_Beta\data\img\decals\decal_noshoot_target5_ca",
				3
			}
		};
		ruleSelectors[]=
		{
			"BIS_FD_ruleSelector1",
			"BIS_FD_ruleSelector2"
		};
		restartSelectors[]=
		{
			"BIS_FD_restartSelector1"
		};
		quitSelectors[]=
		{
			"BIS_FD_quitSelector1"
		};
		containersWeapons[]=
		{
			"BIS_FD_weapons1"
		};
		containersMagazines[]=
		{
			"BIS_FD_ammo1",
			"BIS_FD_ammo2",
			"BIS_FD_ammo3",
			"BIS_FD_ammo4",
			"BIS_FD_ammo5",
			"BIS_FD_vehicle1",
			"BIS_FD_vehicle2"
		};
		containersMagazinesCount[]={10,10};
		weapons[]=
		{
			"srifle_DMR_06_olive_F",
			"hgun_Pistol_heavy_02_Yorris_F"
		};
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"6Rnd_45ACP_Cylinder"
		};
		weaponsCompetitor[]=
		{
			"srifle_DMR_06_olive_F",
			"hgun_Pistol_heavy_02_Yorris_F"
		};
		magazinesCompetitor[]=
		{
			"20Rnd_762x51_Mag",
			"6Rnd_45ACP_Cylinder"
		};
		timesMedals[]={600,520,470.53};
		class RuleSets
		{
			competitive[]={2,0,2,2,2,1};
			training[]={1,2,1,1,1,0};
		};
		class DynOs
		{
			class DynO1
			{
				script="dyno_sp_fd12.sqf";
				positionAnchor="BIS_FD_DynO1Anchor";
			};
		};
		class CheckPoints
		{
			class CP1
			{
				object="BIS_FD_CP1";
			};
			class CP2
			{
				object="BIS_FD_CP2";
				class Targets
				{
					class T1
					{
						object="BIS_FD_target2_1";
					};
					class T2: T1
					{
						object="BIS_FD_target2_2";
					};
					class T3: T1
					{
						object="BIS_FD_target2_3";
					};
					class T4
					{
						object="BIS_FD_target2_4";
					};
					class T5: T4
					{
						object="BIS_FD_target2_5";
					};
					class T6: T4
					{
						object="BIS_FD_target2_6";
					};
					class T7
					{
						object="BIS_FD_target2_7";
					};
					class T8: T7
					{
						object="BIS_FD_target2_8";
					};
					class T9: T7
					{
						object="BIS_FD_target2_9";
					};
					class T10
					{
						object="BIS_FD_target2_10";
					};
					class T11
					{
						object="BIS_FD_target2_11";
						trigger="BIS_FD_target2_10";
					};
					class Optional1
					{
						object="BIS_FD_bonus2_1";
						optional=1;
						bonus=25;
						upTime=4;
						triggerTime=0.5;
						trigger="BIS_FD_target2_11";
					};
					class T12: T10
					{
						object="BIS_FD_target2_12";
					};
					class T13: T11
					{
						object="BIS_FD_target2_13";
						trigger="BIS_FD_target2_12";
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus2_2";
						trigger="BIS_FD_target2_13";
					};
					class T14: T10
					{
						object="BIS_FD_target2_14";
					};
					class T15: T11
					{
						object="BIS_FD_target2_15";
						trigger="BIS_FD_target2_14";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus2_3";
						trigger="BIS_FD_target2_15";
					};
					class T16
					{
						object="BIS_FD_target2_16";
					};
					class T17: T16
					{
						object="BIS_FD_target2_17";
					};
					class T18
					{
						object="BIS_FD_target2_18";
						trigger[]=
						{
							"BIS_FD_target2_16",
							"BIS_FD_target2_17"
						};
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus2_4";
						trigger="BIS_FD_target2_18";
					};
					class Optional5
					{
						object="BIS_FD_bonus2_5";
						optional=1;
						bonus=5;
					};
					class Optional6: Optional5
					{
						object="BIS_FD_bonus2_6";
					};
					class Optional7: Optional5
					{
						object="BIS_FD_bonus2_7";
					};
					class Optional8: Optional5
					{
						object="BIS_FD_bonus2_8";
					};
					class Optional9: Optional5
					{
						object="BIS_FD_bonus2_9";
					};
				};
			};
			class CP3
			{
				object="BIS_FD_CP3";
				class Targets
				{
					class T1
					{
						object="BIS_FD_target3_1";
					};
					class T2
					{
						object="BIS_FD_target3_2";
						trigger="BIS_FD_target3_1";
					};
					class Optional1
					{
						object="BIS_FD_bonus3_1";
						optional=1;
						bonus=25;
						upTime=4;
						triggerTime=0.5;
						trigger="BIS_FD_target3_2";
					};
					class T3: T2
					{
						object="BIS_FD_target3_3";
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus3_2";
						trigger="BIS_FD_target3_3";
					};
					class T4: T2
					{
						object="BIS_FD_target3_4";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus3_3";
						trigger="BIS_FD_target3_4";
					};
					class T5
					{
						object="BIS_FD_target3_5";
					};
					class T6
					{
						object="BIS_FD_target3_6";
						trigger="BIS_FD_target3_5";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus3_4";
						trigger="BIS_FD_target3_6";
					};
					class T7: T6
					{
						object="BIS_FD_target3_7";
					};
					class Optional5: Optional1
					{
						object="BIS_FD_bonus3_5";
						trigger="BIS_FD_target3_7";
					};
					class T8
					{
						object="BIS_FD_target3_8";
					};
					class T9
					{
						object="BIS_FD_target3_9";
						trigger="BIS_FD_target3_8";
					};
					class Optional6: Optional1
					{
						object="BIS_FD_bonus3_6";
						trigger="BIS_FD_target3_9";
					};
					class T10
					{
						object="BIS_FD_target3_10";
					};
					class T11: T10
					{
						object="BIS_FD_target3_11";
						trigger="BIS_FD_target3_10";
					};
					class T12: T11
					{
						object="BIS_FD_target3_12";
					};
					class T13: T10
					{
						object="BIS_FD_target3_13";
						trigger[]=
						{
							"BIS_FD_target3_11",
							"BIS_FD_target3_12"
						};
					};
					class T14: T13
					{
						object="BIS_FD_target3_14";
					};
					class T15: T13
					{
						object="BIS_FD_target3_15";
					};
					class T16: T10
					{
						object="BIS_FD_target3_16";
						trigger[]=
						{
							"BIS_FD_target3_13",
							"BIS_FD_target3_14",
							"BIS_FD_target3_15"
						};
					};
					class T17: T16
					{
						object="BIS_FD_target3_17";
					};
					class T18: T16
					{
						object="BIS_FD_target3_18";
					};
					class T19: T16
					{
						object="BIS_FD_target3_19";
					};
					class T20: T10
					{
						object="BIS_FD_target3_20";
						trigger[]=
						{
							"BIS_FD_target3_16",
							"BIS_FD_target3_17",
							"BIS_FD_target3_18",
							"BIS_FD_target3_19"
						};
					};
					class Optional7: Optional1
					{
						object="BIS_FD_bonus3_7";
						trigger="BIS_FD_target3_20";
					};
					class Optional8: Optional7
					{
						object="BIS_FD_bonus3_8";
					};
					class Optional9: Optional7
					{
						object="BIS_FD_bonus3_9";
					};
					class Optional10: Optional7
					{
						object="BIS_FD_bonus3_10";
					};
					class Optional11
					{
						object="BIS_FD_bonus3_11";
						optional=1;
						bonus=5;
					};
					class Optional12: Optional11
					{
						object="BIS_FD_bonus3_12";
					};
					class Optional13: Optional11
					{
						object="BIS_FD_bonus3_13";
					};
					class T21
					{
						object="BIS_FD_target3_21";
						positions[]=
						{
							"BIS_FD_target3_21A",
							"BIS_FD_target3_21B"
						};
						directions[]=
						{
							"BIS_FD_target3_21A",
							"BIS_FD_target3_21B"
						};
					};
					class T22: T21
					{
						object="BIS_FD_target3_22";
						trigger="BIS_FD_target3_26";
						positions[]=
						{
							"BIS_FD_target3_22A",
							"BIS_FD_target3_22B",
							"BIS_FD_target3_22C"
						};
						directions[]=
						{
							"BIS_FD_target3_22A",
							"BIS_FD_target3_22B",
							"BIS_FD_target3_22C"
						};
					};
					class T23: T21
					{
						object="BIS_FD_target3_23";
						trigger="BIS_FD_target3_24";
						positions[]={};
						directions[]={};
					};
					class T24: T21
					{
						object="BIS_FD_target3_24";
						trigger="BIS_FD_target3_22";
						positions[]=
						{
							"BIS_FD_target3_24A",
							"BIS_FD_target3_24B"
						};
						directions[]=
						{
							"BIS_FD_target3_24A",
							"BIS_FD_target3_24B"
						};
					};
					class T25: T21
					{
						object="BIS_FD_target3_25";
						trigger="BIS_FD_target3_23";
						positions[]=
						{
							"BIS_FD_target3_25A",
							"BIS_FD_target3_25B",
							"BIS_FD_target3_25C"
						};
						directions[]=
						{
							"BIS_FD_target3_25A",
							"BIS_FD_target3_25B",
							"BIS_FD_target3_25C"
						};
					};
					class T26: T21
					{
						object="BIS_FD_target3_26";
						trigger="BIS_FD_target3_21";
						positions[]={};
						directions[]={};
					};
				};
			};
			class CP4
			{
				object="BIS_FD_CP4";
				class Targets
				{
					class Optional1
					{
						object="BIS_FD_bonus4_1";
						optional=1;
						bonus=5;
					};
					class T1
					{
						object="BIS_FD_target4_1";
					};
					class T2
					{
						object="BIS_FD_target4_2";
						trigger="BIS_FD_target4_1";
						upTime=9;
						positionsMove[]=
						{
							"BIS_FD_target4_2_WP1"
						};
						timesMove[]={9};
					};
					class T3: T2
					{
						object="BIS_FD_target4_3";
						upTime=8;
						positionsMove[]=
						{
							"BIS_FD_target4_3_WP1"
						};
						timesMove[]={8};
					};
					class T4: T2
					{
						object="BIS_FD_target4_4";
						positionsMove[]=
						{
							"BIS_FD_target4_4_WP1"
						};
					};
					class T5: T2
					{
						object="BIS_FD_target4_5";
						upTime=9.5;
						positionsMove[]=
						{
							"BIS_FD_target4_5_WP1"
						};
						timesMove[]={9.5};
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus4_2";
					};
					class T6
					{
						object="BIS_FD_target4_6";
					};
					class T7
					{
						object="BIS_FD_target4_7";
						trigger="BIS_FD_target4_6";
						upTime=5;
						positionsMove[]=
						{
							"BIS_FD_target4_7_WP1"
						};
						timesMove[]={5};
					};
					class T8: T7
					{
						object="BIS_FD_target4_8";
						trigger="BIS_FD_target4_7";
						upTime=7;
						positionsMove[]=
						{
							"BIS_FD_target4_8_WP1"
						};
						timesMove[]={7};
					};
					class Optional14
					{
						object="BIS_FD_bonus4_14";
						optional=1;
						bonus=10;
					};
					class Optional15: Optional14
					{
						object="BIS_FD_bonus4_15";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus4_3";
					};
					class T9
					{
						object="BIS_FD_target4_9";
					};
					class T10
					{
						object="BIS_FD_target4_10";
						trigger="BIS_FD_target4_9";
						upTime=9;
					};
					class T11
					{
						object="BIS_FD_target4_11";
						trigger="BIS_FD_target4_9";
						upTime=11;
					};
					class T12: T11
					{
						object="BIS_FD_target4_12";
						chance=0.5;
						upTime=12.5;
					};
					class T13: T11
					{
						object="BIS_FD_target4_13";
						upTime=9.5;
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot4_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot4_2";
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot4_3";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus4_4";
					};
					class T14
					{
						object="BIS_FD_target4_14";
					};
					class NoShoot4
					{
						object="BIS_FD_noShoot4_4";
						noShoot=1;
						trigger="BIS_FD_target4_14";
						positionsMove[]=
						{
							"BIS_FD_noShoot4_4_WP1"
						};
						timesMove[]={12};
					};
					class NoShoot5: NoShoot4
					{
						object="BIS_FD_noShoot4_5";
						positionsMove[]=
						{
							"BIS_FD_noShoot4_5_WP1"
						};
					};
					class NoShoot6: NoShoot4
					{
						object="BIS_FD_noShoot4_6";
						positionsMove[]=
						{
							"BIS_FD_noShoot4_6_WP1"
						};
						timesMove[]={13};
					};
					class NoShoot7: NoShoot4
					{
						object="BIS_FD_noShoot4_7";
						positionsMove[]=
						{
							"BIS_FD_noShoot4_7_WP1"
						};
					};
					class T15
					{
						object="BIS_FD_target4_15";
						trigger="BIS_FD_target4_14";
						triggerTime=3;
						upTime=11;
						positions[]=
						{
							"BIS_FD_target4_15A",
							"BIS_FD_target4_15B"
						};
						directions[]=
						{
							"BIS_FD_target4_15A",
							"BIS_FD_target4_15B"
						};
					};
					class T16: T15
					{
						object="BIS_FD_target4_16";
						upTime=11.5;
						positions[]={};
						directions[]={};
					};
					class T17: T15
					{
						object="BIS_FD_target4_17";
						chance=0.80000001;
						triggerTime=4;
						upTime=10;
						positions[]=
						{
							"BIS_FD_target4_17A",
							"BIS_FD_target4_17B"
						};
						directions[]=
						{
							"BIS_FD_target4_17A",
							"BIS_FD_target4_17B"
						};
					};
					class T18: T15
					{
						object="BIS_FD_target4_18";
						triggerTime=4;
						upTime=10;
						positions[]={};
						directions[]={};
					};
					class Optional5: Optional1
					{
						object="BIS_FD_bonus4_5";
					};
					class T19
					{
						object="BIS_FD_target4_19";
					};
					class T20
					{
						object="BIS_FD_target4_20";
						trigger="BIS_FD_target4_19";
						upTime=10;
						positions[]=
						{
							"BIS_FD_target4_20A",
							"BIS_FD_target4_20B"
						};
						directions[]=
						{
							"BIS_FD_target4_20A",
							"BIS_FD_target4_20B"
						};
					};
					class T21: T20
					{
						object="BIS_FD_target4_21";
						chance=0.69999999;
						triggerTime=2;
						positions[]={};
						directions[]={};
					};
					class T22: T20
					{
						object="BIS_FD_target4_22";
						upTime=11.5;
						positions[]={};
						directions[]={};
					};
					class T23: T20
					{
						object="BIS_FD_target4_23";
						chance=0.80000001;
						upTime=11.5;
						positions[]=
						{
							"BIS_FD_target4_23A",
							"BIS_FD_target4_23B"
						};
						directions[]=
						{
							"BIS_FD_target4_23A",
							"BIS_FD_target4_23B"
						};
					};
					class T24: T20
					{
						object="BIS_FD_target4_24";
						triggerTime=5.5;
						positions[]=
						{
							"BIS_FD_target4_24A",
							"BIS_FD_target4_24B"
						};
						directions[]=
						{
							"BIS_FD_target4_24A",
							"BIS_FD_target4_24B"
						};
					};
					class Optional6: Optional1
					{
						object="BIS_FD_bonus4_6";
					};
					class Optional7: Optional1
					{
						object="BIS_FD_bonus4_7";
					};
					class Optional8: Optional1
					{
						object="BIS_FD_bonus4_8";
					};
					class Optional9: Optional1
					{
						object="BIS_FD_bonus4_9";
					};
					class Optional10: Optional1
					{
						object="BIS_FD_bonus4_10";
					};
					class Optional11: Optional1
					{
						object="BIS_FD_bonus4_11";
					};
					class Optional12: Optional1
					{
						object="BIS_FD_bonus4_12";
					};
					class Optional13: Optional1
					{
						object="BIS_FD_bonus4_13";
					};
				};
			};
			class CP5
			{
				object="BIS_FD_CP5";
				class Targets
				{
					class T1
					{
						object="BIS_FD_target5_1";
					};
					class T2: T1
					{
						object="BIS_FD_target5_2";
						chance=0.80000001;
						upTime=22;
					};
					class T3: T1
					{
						object="BIS_FD_target5_3";
						upTime=20;
					};
					class T4: T1
					{
						object="BIS_FD_target5_4";
						chance=0.5;
						positions[]=
						{
							"BIS_FD_target5_4A",
							"BIS_FD_target5_4B",
							"BIS_FD_target5_4C"
						};
						directions[]=
						{
							"BIS_FD_target5_4A",
							"BIS_FD_target5_4B",
							"BIS_FD_target5_4C"
						};
					};
					class T5: T1
					{
						object="BIS_FD_target5_5";
					};
					class T6: T1
					{
						object="BIS_FD_target5_6";
						upTime=44;
					};
					class T7: T1
					{
						object="BIS_FD_target5_7";
						upTime=49;
					};
					class T8: T1
					{
						object="BIS_FD_target5_8";
						positions[]=
						{
							"BIS_FD_target5_8A",
							"BIS_FD_target5_8B"
						};
						directions[]=
						{
							"BIS_FD_target5_8A",
							"BIS_FD_target5_8B"
						};
					};
					class T9: T1
					{
						object="BIS_FD_target5_9";
					};
					class T10: T1
					{
						object="BIS_FD_target5_10";
						upTime=38;
					};
					class T11: T1
					{
						object="BIS_FD_target5_11";
						upTime=40;
					};
					class T12: T1
					{
						object="BIS_FD_target5_12";
						upTime=50;
					};
					class T13: T1
					{
						object="BIS_FD_target5_13";
						upTime=58;
					};
					class T14: T1
					{
						object="BIS_FD_target5_14";
						chance=0.69999999;
						upTime=50;
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot5_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot5_2";
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot5_3";
					};
					class NoShoot4: NoShoot1
					{
						object="BIS_FD_noShoot5_4";
					};
					class NoShoot5: NoShoot1
					{
						object="BIS_FD_noShoot5_5";
					};
					class Optional1
					{
						object="BIS_FD_bonus5_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus5_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus5_3";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus5_4";
					};
					class Optional5: Optional1
					{
						object="BIS_FD_bonus5_5";
					};
					class Optional6: Optional1
					{
						object="BIS_FD_bonus5_6";
					};
					class Optional7: Optional1
					{
						object="BIS_FD_bonus5_7";
					};
					class Optional8
					{
						object="BIS_FD_bonus5_8";
						optional=1;
						bonus=5;
					};
					class Optional9: Optional8
					{
						object="BIS_FD_bonus5_9";
					};
					class Optional10: Optional8
					{
						object="BIS_FD_bonus5_10";
					};
					class Optional11: Optional8
					{
						object="BIS_FD_bonus5_11";
					};
					class Optional12: Optional8
					{
						object="BIS_FD_bonus5_12";
					};
					class Optional13: Optional8
					{
						object="BIS_FD_bonus5_13";
					};
					class Optional14: Optional8
					{
						object="BIS_FD_bonus5_14";
					};
					class Optional15: Optional8
					{
						object="BIS_FD_bonus5_15";
					};
					class Optional16: Optional8
					{
						object="BIS_FD_bonus5_16";
					};
				};
			};
			class CP6
			{
				object="BIS_FD_CP6";
				class Targets
				{
					class T1
					{
						object="BIS_FD_target6_1";
					};
					class T2: T1
					{
						object="BIS_FD_target6_2";
						triggerTime=2;
					};
					class T3: T1
					{
						object="BIS_FD_target6_3";
					};
					class T4: T1
					{
						object="BIS_FD_target6_4";
						chance=0.60000002;
					};
					class T5: T1
					{
						object="BIS_FD_target6_5";
						chance=0.5;
						triggerTime=3;
						positions[]=
						{
							"BIS_FD_target6_5A",
							"BIS_FD_target6_5B"
						};
						directions[]=
						{
							"BIS_FD_target6_5A",
							"BIS_FD_target6_5B"
						};
					};
					class T6: T1
					{
						object="BIS_FD_target6_6";
						triggerTime=10;
						upTime=15;
						positionsMove[]=
						{
							"BIS_FD_target6_6_WP1"
						};
						timesMove[]={15};
					};
					class T7: T1
					{
						object="BIS_FD_target6_7";
						triggerTime=13;
						chance=0.60000002;
					};
					class T8: T1
					{
						object="BIS_FD_target6_8";
						triggerTime=13;
						positions[]=
						{
							"BIS_FD_target6_8A",
							"BIS_FD_target6_8B"
						};
						directions[]=
						{
							"BIS_FD_target6_8A",
							"BIS_FD_target6_8B"
						};
					};
					class T9: T1
					{
						object="BIS_FD_target6_9";
						triggerTime=16;
						positions[]=
						{
							"BIS_FD_target6_9A",
							"BIS_FD_target6_9B"
						};
						directions[]=
						{
							"BIS_FD_target6_9A",
							"BIS_FD_target6_9B"
						};
					};
					class T10: T1
					{
						object="BIS_FD_target6_10";
						triggerTime=25;
					};
					class T11: T1
					{
						object="BIS_FD_target6_11";
						chance=0.69999999;
						triggerTime=25;
					};
					class T12: T1
					{
						object="BIS_FD_target6_12";
						triggerTime=27;
					};
					class T13: T1
					{
						object="BIS_FD_target6_13";
						chance=0.5;
						triggerTime=27;
						positions[]=
						{
							"BIS_FD_target6_13A",
							"BIS_FD_target6_13B",
							"BIS_FD_target6_13C"
						};
						directions[]=
						{
							"BIS_FD_target6_13A",
							"BIS_FD_target6_13B",
							"BIS_FD_target6_13C"
						};
					};
					class T14: T1
					{
						object="BIS_FD_target6_14";
						triggerTime=29;
						positions[]=
						{
							"BIS_FD_target6_14A",
							"BIS_FD_target6_14B"
						};
						directions[]=
						{
							"BIS_FD_target6_14A",
							"BIS_FD_target6_14B"
						};
					};
					class T15: T1
					{
						object="BIS_FD_target6_15";
						triggerTime=29;
						upTime=20;
						positionsMove[]=
						{
							"BIS_FD_target6_15_WP1"
						};
						timesMove[]={12};
					};
					class T16: T1
					{
						object="BIS_FD_target6_16";
						chance=0.69999999;
						triggerTime=30.5;
					};
					class T17: T1
					{
						object="BIS_FD_target6_17";
						triggerTime=31;
					};
					class T18: T1
					{
						object="BIS_FD_target6_18";
						triggerTime=40;
						positions[]=
						{
							"BIS_FD_target6_18A",
							"BIS_FD_target6_18B"
						};
						directions[]=
						{
							"BIS_FD_target6_18A",
							"BIS_FD_target6_18B"
						};
					};
					class T19: T1
					{
						object="BIS_FD_target6_19";
						chance=0.69999999;
						triggerTime=40;
					};
					class T20: T1
					{
						object="BIS_FD_target6_20";
						chance=0.5;
						triggerTime=40.5;
					};
					class T21: T1
					{
						object="BIS_FD_target6_21";
						triggerTime=41.5;
						positions[]=
						{
							"BIS_FD_target6_21A",
							"BIS_FD_target6_21B"
						};
						directions[]=
						{
							"BIS_FD_target6_21A",
							"BIS_FD_target6_21B"
						};
					};
					class T22: T1
					{
						object="BIS_FD_target6_22";
						triggerTime=48;
						chance=0.80000001;
					};
					class T23: T1
					{
						object="BIS_FD_target6_23";
						chance=0.5;
						triggerTime=53;
					};
					class T24: T1
					{
						object="BIS_FD_target6_24";
						chance=0.5;
						triggerTime=53;
					};
					class T25: T1
					{
						object="BIS_FD_target6_25";
						chance=0.80000001;
						triggerTime=67.5;
						positions[]=
						{
							"BIS_FD_target6_25A",
							"BIS_FD_target6_25B",
							"BIS_FD_target6_25C"
						};
						directions[]=
						{
							"BIS_FD_target6_25A",
							"BIS_FD_target6_25B",
							"BIS_FD_target6_25C"
						};
					};
					class T26: T1
					{
						object="BIS_FD_target6_26";
						triggerTime=57.5;
						positions[]=
						{
							"BIS_FD_target6_26A",
							"BIS_FD_target6_26B"
						};
						directions[]=
						{
							"BIS_FD_target6_26A",
							"BIS_FD_target6_26B"
						};
					};
					class T27: T1
					{
						object="BIS_FD_target6_27";
						triggerTime=57.5;
					};
					class T28: T1
					{
						object="BIS_FD_target6_28";
						triggerTime=68;
					};
					class T29: T1
					{
						object="BIS_FD_target6_29";
						triggerTime=67;
					};
					class T30: T1
					{
						object="BIS_FD_target6_30";
						triggerTime=67;
					};
					class T31: T1
					{
						object="BIS_FD_target6_31";
						triggerTime=70;
						positions[]=
						{
							"BIS_FD_target6_31A",
							"BIS_FD_target6_31B",
							"BIS_FD_target6_31C"
						};
						directions[]=
						{
							"BIS_FD_target6_31A",
							"BIS_FD_target6_31B",
							"BIS_FD_target6_31C"
						};
					};
					class T32: T1
					{
						object="BIS_FD_target6_32";
						triggerTime=70;
					};
					class T33: T1
					{
						object="BIS_FD_target6_33";
						triggerTime=70;
						chance=0.5;
					};
					class T34: T1
					{
						object="BIS_FD_target6_34";
						triggerTime=75;
						positionsMove[]=
						{
							"BIS_FD_target6_34_WP1"
						};
						timesMove[]={13};
					};
					class T35: T1
					{
						object="BIS_FD_target6_35";
						triggerTime=75;
						positionsMove[]=
						{
							"BIS_FD_target6_35_WP1"
						};
						timesMove[]={13};
					};
					class T36: T1
					{
						object="BIS_FD_target6_36";
						triggerTime=76;
						positionsMove[]=
						{
							"BIS_FD_target6_36_WP1"
						};
						timesMove[]={13};
					};
					class T37: T1
					{
						object="BIS_FD_target6_37";
						triggerTime=76.5;
						positionsMove[]=
						{
							"BIS_FD_target6_37_WP1"
						};
						timesMove[]={14};
					};
					class T38: T1
					{
						object="BIS_FD_target6_38";
						triggerTime=79;
						positionsMove[]=
						{
							"BIS_FD_target6_38_WP1"
						};
						timesMove[]={14};
					};
					class T39: T1
					{
						object="BIS_FD_target6_39";
						triggerTime=82;
					};
					class Optional1
					{
						object="BIS_FD_bonus6_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus6_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus6_3";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus6_4";
					};
					class Optional5: Optional1
					{
						object="BIS_FD_bonus6_5";
					};
					class Optional6: Optional1
					{
						object="BIS_FD_bonus6_6";
					};
					class Optional7
					{
						object="BIS_FD_bonus6_7";
						optional=1;
						bonus=5;
					};
					class Optional8: Optional7
					{
						object="BIS_FD_bonus6_8";
					};
					class Optional9: Optional7
					{
						object="BIS_FD_bonus6_9";
					};
					class Optional10: Optional7
					{
						object="BIS_FD_bonus6_10";
					};
					class Optional11: Optional7
					{
						object="BIS_FD_bonus6_11";
					};
					class Optional12: Optional7
					{
						object="BIS_FD_bonus6_12";
					};
					class Optional13: Optional7
					{
						object="BIS_FD_bonus6_13";
					};
				};
			};
			class CP7
			{
				object="BIS_FD_CP7";
			};
		};
	};
	class SP_FD13
	{
		color[]={0.69019598,0.25097999,0.65490198,1};
		colorName="purple";
		objectCOF="BIS_firingDrills1";
		statistic="FD13";
		onReset="reset.sqf";
		leaderboard="1134252";
		recolor[]=
		{
			"BIS_FD_recolor1",
			"BIS_FD_recolor2",
			"BIS_FD_recolor3",
			"BIS_FD_recolor4",
			"BIS_FD_recolor5",
			"BIS_FD_recolor6",
			"BIS_FD_recolor7",
			"BIS_FD_recolor8",
			"BIS_FD_recolor9",
			"BIS_FD_recolor10",
			"BIS_FD_recolor11",
			"BIS_FD_recolor12",
			"BIS_FD_recolor13",
			"BIS_FD_recolor14",
			"BIS_FD_recolor15",
			"BIS_FD_recolor16",
			"BIS_FD_recolor17",
			"BIS_FD_recolor18",
			"BIS_FD_recolor19",
			"BIS_FD_recolor20",
			"BIS_FD_recolor21",
			"BIS_FD_recolor22"
		};
		decals[]={};
		ruleSelectors[]=
		{
			"BIS_FD_ruleSelector1",
			"BIS_FD_ruleSelector2"
		};
		restartSelectors[]=
		{
			"BIS_FD_restartSelector1"
		};
		quitSelectors[]=
		{
			"BIS_FD_quitSelector1"
		};
		containersWeapons[]=
		{
			"BIS_FD_weapons1"
		};
		containersMagazines[]=
		{
			"BIS_FD_ammo1",
			"BIS_FD_ammo2",
			"BIS_FD_ammo3",
			"BIS_FD_ammo4"
		};
		containersMagazinesCount[]={10,10,10};
		weapons[]=
		{
			"SMG_01_Holo_pointer_snds_F",
			"hgun_Pistol_heavy_01_snds_F",
			"srifle_DMR_04_ACO_F"
		};
		magazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"11Rnd_45ACP_Mag",
			"10Rnd_127x54_Mag"
		};
		weaponsCompetitor[]=
		{
			"SMG_01_Holo_pointer_snds_F",
			"hgun_Pistol_heavy_01_snds_F"
		};
		magazinesCompetitor[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"11Rnd_45ACP_Mag"
		};
		timesMedals[]={225,203.5,191};
		class RuleSets
		{
			competitive[]={2,0,2,2,2,1};
			training[]={1,2,1,1,1,0};
		};
		class DynOs
		{
			class DynO1
			{
				script="dyno_sp_fd13.sqf";
				positionAnchor="BIS_FD_DynO1Anchor";
			};
		};
		class CheckPoints
		{
			class CP1
			{
				object="BIS_FD_CP1";
			};
			class CP2
			{
				object="BIS_FD_CP2";
				height=29.089899;
				class Targets
				{
					class T1
					{
						object="BIS_FD_target2_1";
						upTime=9;
						positions[]=
						{
							"BIS_FD_target2_1A",
							"BIS_FD_target2_1B",
							"BIS_FD_target2_1C"
						};
						directions[]=
						{
							"BIS_FD_target2_1A",
							"BIS_FD_target2_1B",
							"BIS_FD_target2_1C"
						};
						heights[]={29.0746,29.0821,29.066099};
					};
					class T2: T1
					{
						object="BIS_FD_target2_2";
						upTime=5;
						positions[]=
						{
							"BIS_FD_target2_2A",
							"BIS_FD_target2_2B"
						};
						directions[]=
						{
							"BIS_FD_target2_2A",
							"BIS_FD_target2_2B"
						};
						heights[]={29.2276,29.254};
					};
					class T3: T1
					{
						object="BIS_FD_target2_3";
						positions[]={};
						directions[]={};
					};
					class T4: T1
					{
						object="BIS_FD_target2_4";
						upTime=5;
						positions[]={};
						directions[]={};
					};
					class T5: T1
					{
						object="BIS_FD_target2_5";
						chance=0.69999999;
						upTime=5;
						positions[]=
						{
							"BIS_FD_target2_5A",
							"BIS_FD_target2_5B"
						};
						directions[]=
						{
							"BIS_FD_target2_5A",
							"BIS_FD_target2_5B"
						};
						heights[]={29.053301,29.1043};
					};
					class T6: T1
					{
						object="BIS_FD_target2_6";
						chance=0.60000002;
						upTime=8.5;
						triggerTime=2;
						positions[]=
						{
							"BIS_FD_target2_6A",
							"BIS_FD_target2_6B"
						};
						directions[]=
						{
							"BIS_FD_target2_6A",
							"BIS_FD_target2_6B"
						};
						heights[]={33.696701,33.458};
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot2_1";
						noShoot=1;
						positions[]=
						{
							"BIS_FD_noShoot2_1A",
							"BIS_FD_noShoot2_1B"
						};
						directions[]=
						{
							"BIS_FD_noShoot2_1A",
							"BIS_FD_noShoot2_1B"
						};
						heights[]={29.0937,29.0914};
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot2_2";
						chance=0.69999999;
						positions[]={};
						directions[]={};
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot2_3";
						positions[]={};
						directions[]={};
					};
					class Optional1
					{
						object="BIS_FD_bonus2_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus2_2";
					};
				};
			};
			class CP3
			{
				object="BIS_FD_CP3";
				height=29.089899;
				class Targets
				{
					class T1
					{
						object="BIS_FD_target3_1";
						upTime=8;
						triggerTime=1;
						positions[]=
						{
							"BIS_FD_target3_1A",
							"BIS_FD_target3_1B"
						};
						directions[]=
						{
							"BIS_FD_target3_1A",
							"BIS_FD_target3_1B"
						};
						heights[]={33.529301,33.536999};
					};
					class T2: T1
					{
						object="BIS_FD_target3_2";
						upTime=9.5;
						positions[]={};
						directions[]={};
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot3_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot3_2";
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot3_3";
						positions[]=
						{
							"BIS_FD_noShoot3_3A",
							"BIS_FD_noShoot3_3B"
						};
						directions[]=
						{
							"BIS_FD_noShoot3_3A",
							"BIS_FD_noShoot3_3B"
						};
						heights[]={33.525398,33.525299};
					};
					class Optional1
					{
						object="BIS_FD_bonus3_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus3_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus3_3";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus3_4";
					};
				};
			};
			class CP4
			{
				object="BIS_FD_CP4";
				height=31.336599;
				class Targets
				{
					class T1
					{
						object="BIS_FD_target4_1";
						upTime=6;
					};
					class T2: T1
					{
						object="BIS_FD_target4_2";
						upTime=6;
						positions[]=
						{
							"BIS_FD_target4_2A",
							"BIS_FD_target4_2B"
						};
						directions[]=
						{
							"BIS_FD_target4_2A",
							"BIS_FD_target4_2B"
						};
						heights[]={29.1007,29.069099};
					};
					class T3: T1
					{
						object="BIS_FD_target4_3";
						chance=0.5;
						upTime=10;
						positions[]=
						{
							"BIS_FD_target4_3A",
							"BIS_FD_target4_3B"
						};
						directions[]=
						{
							"BIS_FD_target4_3A",
							"BIS_FD_target4_3B"
						};
						heights[]={33.872101,33.5504};
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot4_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot4_2";
					};
					class Optional1
					{
						object="BIS_FD_bonus4_1";
						optional=1;
						bonus=10;
					};
				};
			};
			class CP5
			{
				object="BIS_FD_CP5";
				height=31.336599;
				class Targets
				{
					class T1
					{
						object="BIS_FD_target5_1";
						upTime=6;
						positionsMove[]=
						{
							"BIS_FD_target5_1_WP1"
						};
						timesMove[]={6};
					};
					class T2: T1
					{
						object="BIS_FD_target5_2";
						upTime=7.5;
						positionsMove[]=
						{
							"BIS_FD_target5_2_WP1"
						};
						timesMove[]={7.5};
					};
					class T3
					{
						object="BIS_FD_target5_3";
						upTime=10;
						positions[]=
						{
							"BIS_FD_target5_3A",
							"BIS_FD_target5_3B"
						};
						directions[]=
						{
							"BIS_FD_target5_3A",
							"BIS_FD_target5_3B"
						};
					};
					class T4: T3
					{
						object="BIS_FD_target5_4";
						upTime=11.5;
						chance=0.69999999;
						triggerTime=4;
						positions[]={};
						directions[]={};
					};
					class T5: T3
					{
						object="BIS_FD_target5_5";
						upTime=11.5;
						chance=0.89999998;
						triggerTime=4;
						positions[]=
						{
							"BIS_FD_target5_5A",
							"BIS_FD_target5_5B"
						};
						directions[]=
						{
							"BIS_FD_target5_5A",
							"BIS_FD_target5_5B"
						};
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot5_1";
						noShoot=1;
						positionsMove[]=
						{
							"BIS_FD_noShoot5_1_WP1"
						};
						timesMove[]={6};
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot5_2";
						positionsMove[]=
						{
							"BIS_FD_noShoot5_2_WP1"
						};
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot5_3";
						positionsMove[]=
						{
							"BIS_FD_noShoot5_3_WP1"
						};
					};
				};
			};
			class CP6
			{
				object="BIS_FD_CP6";
				height=34.0009;
				class Targets
				{
					class T1
					{
						object="BIS_FD_target6_1";
						upTime=7;
						positions[]=
						{
							"BIS_FD_target6_1A",
							"BIS_FD_target6_1B",
							"BIS_FD_target6_1C"
						};
						directions[]=
						{
							"BIS_FD_target6_1A",
							"BIS_FD_target6_1B",
							"BIS_FD_target6_1C"
						};
						heights[]={34.1106,33.960602,33.981602};
					};
					class T2: T1
					{
						object="BIS_FD_target6_2";
						upTime=5;
						positionsMove[]=
						{
							"BIS_FD_target6_2_WP1"
						};
						timesMove[]={5};
						positions[]={};
						directions[]={};
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot6_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot6_2";
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot6_3";
						chance=0.5;
					};
					class Optional1
					{
						object="BIS_FD_bonus6_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus6_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus6_3";
					};
				};
			};
			class CP7
			{
				object="BIS_FD_CP7";
				height=33.5383;
				class Targets
				{
					class T1
					{
						object="BIS_FD_target7_1";
						upTime=7;
						positions[]=
						{
							"BIS_FD_target7_1A",
							"BIS_FD_target7_1B"
						};
						directions[]=
						{
							"BIS_FD_target7_1A",
							"BIS_FD_target7_1B"
						};
						heights[]={33.546398,33.547501};
					};
					class T2
					{
						object="BIS_FD_target7_2";
						upTime=5;
					};
					class T3: T2
					{
						object="BIS_FD_target7_3";
						upTime=8;
						triggerTime=1;
						chance=0.5;
					};
				};
			};
			class CP8
			{
				object="BIS_FD_CP8";
				height=31.364401;
				class Targets
				{
					class T1
					{
						object="BIS_FD_target8_1";
						upTime=6;
					};
					class T2: T1
					{
						object="BIS_FD_target8_2";
						positions[]=
						{
							"BIS_FD_target8_2A",
							"BIS_FD_target8_2B",
							"BIS_FD_target8_2C"
						};
						directions[]=
						{
							"BIS_FD_target8_2A",
							"BIS_FD_target8_2B",
							"BIS_FD_target8_2C"
						};
					};
					class T3: T1
					{
						object="BIS_FD_target8_3";
						upTime=7.5;
						chance=0.69999999;
					};
					class T4: T1
					{
						object="BIS_FD_target8_4";
						trigger[]=
						{
							"BIS_FD_target8_1",
							"BIS_FD_target8_2",
							"BIS_FD_target8_3"
						};
						upTime=9;
						positionsMove[]=
						{
							"BIS_FD_target8_4_WP1"
						};
						timesMove[]={6};
					};
					class T5: T4
					{
						object="BIS_FD_target8_5";
						upTime=15;
						positionsMove[]=
						{
							"BIS_FD_target8_5_WP1"
						};
						timesMove[]={12};
					};
				};
			};
			class CP9
			{
				object="BIS_FD_CP9";
				height=24.6527;
				weapons[]=
				{
					"srifle_DMR_04_ACO_F"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target9_1";
						upTime=8;
						triggerTime=10;
						positions[]=
						{
							"BIS_FD_target9_1A",
							"BIS_FD_target9_1B"
						};
						directions[]=
						{
							"BIS_FD_target9_1A",
							"BIS_FD_target9_1B"
						};
					};
					class T2
					{
						object="BIS_FD_target9_2";
						upTime=12;
						chance=0.80000001;
					};
					class T3: T2
					{
						object="BIS_FD_target9_3";
						triggerTime=2;
						chance=1;
						positions[]=
						{
							"BIS_FD_target9_3A",
							"BIS_FD_target9_3B"
						};
						directions[]=
						{
							"BIS_FD_target9_3A",
							"BIS_FD_target9_3B"
						};
					};
					class T4: T2
					{
						object="BIS_FD_target9_4";
						chance=1;
						positions[]=
						{
							"BIS_FD_target9_4A",
							"BIS_FD_target9_4B"
						};
						directions[]=
						{
							"BIS_FD_target9_4A",
							"BIS_FD_target9_4B"
						};
						heights[]={33.5961,30.082701};
					};
					class T5: T2
					{
						object="BIS_FD_target9_5";
						chance=1;
						upTime=6;
						triggerTime=7;
					};
					class T6: T2
					{
						object="BIS_FD_target9_6";
						upTime=6;
						triggerTime=7;
						chance=0.5;
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot9_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot9_2";
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot9_3";
					};
					class Optional1
					{
						object="BIS_FD_bonus9_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus9_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus9_3";
					};
				};
			};
			class CP10
			{
				object="BIS_FD_CP10";
				weapons[]=
				{
					"srifle_DMR_04_ACO_F"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target10_1";
						upTime=12;
						positions[]=
						{
							"BIS_FD_target10_1A",
							"BIS_FD_target10_1B"
						};
						directions[]=
						{
							"BIS_FD_target10_1A",
							"BIS_FD_target10_1B"
						};
					};
					class T2: T1
					{
						object="BIS_FD_target10_2";
						upTime=10;
						positionsMove[]=
						{
							"BIS_FD_target10_2_WP1"
						};
						timesMove[]={10};
						positions[]={};
						directions[]={};
					};
					class T3: T1
					{
						object="BIS_FD_target10_3";
						positions[]={};
						directions[]={};
					};
					class T4: T1
					{
						object="BIS_FD_target10_4";
						upTime=14;
						positions[]=
						{
							"BIS_FD_target10_4A",
							"BIS_FD_target10_4B",
							"BIS_FD_target10_4C"
						};
						directions[]=
						{
							"BIS_FD_target10_4A",
							"BIS_FD_target10_4B",
							"BIS_FD_target10_4C"
						};
					};
					class T5: T1
					{
						object="BIS_FD_target10_5";
						chance=0.69999999;
						triggerTime=2;
						upTime=8;
						positions[]={};
						directions[]={};
					};
					class Optional1
					{
						object="BIS_FD_bonus10_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus10_2";
					};
				};
			};
			class CP11
			{
				object="BIS_FD_CP11";
				weapons[]=
				{
					"srifle_DMR_04_ACO_F"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target11_1";
						upTime=15;
					};
					class T2: T1
					{
						object="BIS_FD_target11_2";
					};
					class T3: T1
					{
						object="BIS_FD_target11_3";
						triggerTime=3;
						upTime=8;
						positions[]=
						{
							"BIS_FD_target11_3A",
							"BIS_FD_target11_3B",
							"BIS_FD_target11_3C"
						};
						directions[]=
						{
							"BIS_FD_target11_3A",
							"BIS_FD_target11_3B",
							"BIS_FD_target11_3C"
						};
						heights[]={13.8414,13.0329,13.1316};
					};
					class T4: T1
					{
						object="BIS_FD_target11_4";
						triggerTime=5;
						positions[]=
						{
							"BIS_FD_target11_4A",
							"BIS_FD_target11_4B"
						};
						directions[]=
						{
							"BIS_FD_target11_4A",
							"BIS_FD_target11_4B"
						};
						heights[]={13.1498,13.1694};
					};
					class T5: T1
					{
						object="BIS_FD_target11_5";
						triggerTime=5;
						upTime=18;
						chance=0.5;
					};
					class T6: T1
					{
						object="BIS_FD_target11_6";
						trigger="BIS_FD_target11_3";
						upTime=13;
						positionsMove[]=
						{
							"BIS_FD_target11_6_WP1"
						};
						timesMove[]={10};
					};
					class T7: T1
					{
						object="BIS_FD_target11_7";
						trigger="BIS_FD_target11_3";
						upTime=13;
						positionsMove[]=
						{
							"BIS_FD_target11_7_WP1"
						};
						timesMove[]={10};
					};
					class T8: T1
					{
						object="BIS_FD_target11_8";
						trigger="BIS_FD_target11_3";
						upTime=20;
						positionsMove[]=
						{
							"BIS_FD_target11_8_WP1"
						};
						timesMove[]={15};
					};
					class T9: T1
					{
						object="BIS_FD_target11_9";
						trigger="BIS_FD_target11_3";
						positionsMove[]=
						{
							"BIS_FD_target11_9_WP1"
						};
						timesMove[]={10};
					};
				};
			};
			class CP12
			{
				object="BIS_FD_CP12";
				weapons[]=
				{
					"srifle_DMR_04_ACO_F"
				};
				class Targets
				{
					class T1
					{
						object="BIS_FD_target12_1";
						upTime=10;
					};
					class T2: T1
					{
						object="BIS_FD_target12_2";
						positions[]=
						{
							"BIS_FD_target12_2A",
							"BIS_FD_target12_2B"
						};
						directions[]=
						{
							"BIS_FD_target12_2A",
							"BIS_FD_target12_2B"
						};
					};
					class T3: T1
					{
						object="BIS_FD_target12_3";
						triggerTime=2;
						upTime=8;
						chance=0.40000001;
						positions[]=
						{
							"BIS_FD_target12_3A",
							"BIS_FD_target12_3B",
							"BIS_FD_target12_3C"
						};
						directions[]=
						{
							"BIS_FD_target12_3A",
							"BIS_FD_target12_3B",
							"BIS_FD_target12_3C"
						};
					};
					class T4: T1
					{
						object="BIS_FD_target12_4";
						trigger="BIS_FD_target12_3";
						chance=0.5;
					};
					class T5: T1
					{
						object="BIS_FD_target12_5";
						trigger="BIS_FD_target12_3";
						chance=0.5;
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot12_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot12_2";
						chance=0.69999999;
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot12_3";
					};
					class Optional1
					{
						object="BIS_FD_bonus12_1";
						optional=1;
						bonus=10;
					};
					class Optional2: Optional1
					{
						object="BIS_FD_bonus12_2";
					};
					class Optional3: Optional1
					{
						object="BIS_FD_bonus12_3";
					};
					class Optional4: Optional1
					{
						object="BIS_FD_bonus12_4";
					};
				};
			};
			class CP13
			{
				object="BIS_FD_CP13";
				class Targets
				{
					class T1
					{
						object="BIS_FD_target13_1";
						upTime=6;
						positions[]=
						{
							"BIS_FD_target13_1A",
							"BIS_FD_target13_1B",
							"BIS_FD_target13_1C",
							"BIS_FD_target13_1D"
						};
						directions[]=
						{
							"BIS_FD_target13_1A",
							"BIS_FD_target13_1B",
							"BIS_FD_target13_1C",
							"BIS_FD_target13_1D"
						};
					};
					class T2: T1
					{
						object="BIS_FD_target13_2";
						chance=0.69999999;
						triggerTime=2;
						upTime=12;
						positions[]={};
						directions[]={};
					};
					class T3: T1
					{
						object="BIS_FD_target13_3";
						trigger="BIS_FD_target13_2";
						upTime=15;
						positionsMove[]=
						{
							"BIS_FD_target13_3_WP1"
						};
						timesMove[]={10};
						positions[]={};
						directions[]={};
					};
					class T4: T1
					{
						object="BIS_FD_target13_4";
						upTime=15;
						positionsMove[]=
						{
							"BIS_FD_target13_4_WP1"
						};
						timesMove[]={20};
						positions[]={};
						directions[]={};
					};
					class T5: T1
					{
						object="BIS_FD_target13_5";
						upTime=17;
						positionsMove[]=
						{
							"BIS_FD_target13_5_WP1"
						};
						timesMove[]={12};
						positions[]={};
						directions[]={};
					};
					class NoShoot1
					{
						object="BIS_FD_noShoot13_1";
						noShoot=1;
					};
					class NoShoot2: NoShoot1
					{
						object="BIS_FD_noShoot13_2";
					};
					class NoShoot3: NoShoot1
					{
						object="BIS_FD_noShoot13_3";
					};
					class NoShoot4: NoShoot1
					{
						object="BIS_FD_noShoot13_4";
					};
				};
			};
			class CP14
			{
				object="BIS_FD_CP14";
			};
		};
	};
};
class CfgFunctions
{
	class A3_Missions_F_Mark
	{
		tag="BIS";
		project="arma3";
	};
};
class CfgMissions
{
	class Campaigns;  //found empty after stripping
	class MPMissions
	{
		class Showcase_FiringFromVehicles
		{
			directory="a3\Missions_F_Mark\MPScenarios\MP_COOP_FiringFromVehicles.Altis";
			overviewText="$STR_A3_SHOWCASE_FIRINGFROMVEHICLES_OVERVIEW";
			briefingName="$STR_A3_SHOWCASE_FIRINGFROMVEHICLES_MISSION_NAME2";
			overviewPicture="a3\Missions_F_Mark\data\img\Showcase_FiringFromVehicles_overview_CA.paa";
		};
	};
	class Challenges
	{
		class Firing_Drills
		{
			class Purple
			{
				briefingName="$STR_A3_FIRING_DRILLS_PURPLE";
				overviewText="$STR_A3_FIRING_DRILLS_PURPLE_OVERVIEW";
				overviewPicture="\a3\Missions_F_Mark\data\img\FiringDrills_Purple_overview_CA.paa";
				class SP_FD11
				{
					directory="a3\Missions_F_Mark\Challenges\firing_drills\sp_fd11.altis";
					briefingName="$STR_A3_FIRING_DRILLS_COF_PURPLE01_NAME";
					overviewText="$STR_A3_FIRING_DRILLS_COF_PURPLE01_OVERVIEW";
					overviewPicture="\a3\Missions_F_Mark\data\img\SP_FD11_overview_CA.paa";
					overviewPictureUnowned="\a3\Missions_F_Mark\data\img\SP_FD11_overview_blackwhite_CA.paa";
					overviewScript="\A3\Modules_F_Beta\FiringDrills\scripts\overviewScript.sqf";
				};
				class SP_FD12: SP_FD11
				{
					directory="a3\Missions_F_Mark\Challenges\firing_drills\sp_fd12.altis";
					briefingName="$STR_A3_FIRING_DRILLS_COF_PURPLE02_NAME";
					overviewText="$STR_A3_FIRING_DRILLS_COF_PURPLE02_OVERVIEW";
					overviewPicture="\a3\Missions_F_Mark\data\img\SP_FD12_overview_CA.paa";
					overviewPictureUnowned="\a3\Missions_F_Mark\data\img\SP_FD12_overview_blackwhite_CA.paa";
				};
				class SP_FD13: SP_FD11
				{
					directory="a3\Missions_F_Mark\Challenges\firing_drills\sp_fd13.altis";
					briefingName="$STR_A3_FIRING_DRILLS_COF_PURPLE03_NAME";
					overviewText="$STR_A3_FIRING_DRILLS_COF_PURPLE03_OVERVIEW";
					overviewPicture="\a3\Missions_F_Mark\data\img\SP_FD13_overview_CA.paa";
					overviewPictureUnowned="\a3\Missions_F_Mark\data\img\SP_FD13_overview_blackwhite_CA.paa";
				};
			};
		};
	};
	class Showcases
	{
		class Showcase_FiringFromVehicles
		{
			directory="a3\missions_f_mark\showcases\showcase_firingfromvehicles.altis";
			overviewText="$STR_A3_SHOWCASE_FIRINGFROMVEHICLES_OVERVIEW";
			briefingName="$STR_A3_SHOWCASE_FIRINGFROMVEHICLES_MISSION_NAME1";
			overviewPicture="a3\Missions_F_Mark\data\img\Showcase_FiringFromVehicles_overview_CA.paa";
		};
		class Showcase_Marksman
		{
			directory="a3\missions_f_mark\showcases\showcase_marksman.altis";
			overviewText="$STR_A3_SHOWCASE_MARKSMAN_SHOWCASE_SUMMARY_TEXT";
			briefingName="$STR_A3_SHOWCASE_MARKSMAN_MISSION_NAME";
			overviewPicture="a3\Missions_F_Mark\data\img\Showcase_Marksman_overview_CA.paa";
			overviewPictureUnowned="a3\Missions_F_Mark\data\img\Showcase_Marksman_overview_blackwhite_CA.paa";
		};
	};
};
class CfgVRCourses
{
	class Default
	{
		official=0;
		icon="\A3\Structures_F_Bootcamp\VR\Helpers\Data\VR_Symbol_default_CA.paa";
		locks[]={};
	};
	class WeaponHandlingA: Default
	{
		title="$STR_A3_VR_WH1_title";
		icon="\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling1_CA.paa";
		locks[]={};
		official=1;
		class Stages
		{
			class Stage1
			{
				title="$STR_A3_VR_WH1_stage1";
				function="BIS_fnc_VRCourseWeaponHandlingA1";
			};
			class Stage2
			{
				title="$STR_A3_VR_WH1_stage2";
				function="BIS_fnc_VRCourseWeaponHandlingA2";
			};
			class Stage3
			{
				title="$STR_A3_VR_WH1_stage3";
				function="BIS_fnc_VRCourseWeaponHandlingA3";
			};
		};
	};
	class WeaponHandlingB: Default
	{
		title="$STR_A3_VR_WH2_title";
		icon="\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling2_CA.paa";
		locks[]={};
		official=1;
		class Stages
		{
			class Stage1
			{
				title="$STR_A3_VR_WH2_stage1";
				function="BIS_fnc_VRCourseWeaponHandlingB1";
			};
			class Stage2
			{
				title="$STR_A3_VR_WH2_stage2";
				function="BIS_fnc_VRCourseWeaponHandlingB2";
			};
			class Stage3
			{
				title="$STR_A3_VR_WH2_stage3";
				function="BIS_fnc_VRCourseWeaponHandlingB3";
			};
		};
	};
	class WeaponHandlingC: Default
	{
		title="$STR_A3_VR_WH3_title";
		icon="\A3\Structures_F_Mark\VR\Helpers\Data\VR_Symbol_MARK_WeaponHandling3_CA.paa";
		locks[]={};
		official=1;
		class Stages
		{
			class Stage1
			{
				title="$STR_A3_VR_WH3_stage1";
				function="BIS_fnc_VRCourseWeaponHandlingC1";
			};
			class Stage2
			{
				title="$STR_A3_VR_WH3_stage2";
				function="BIS_fnc_VRCourseWeaponHandlingC2";
			};
		};
	};
};
class CfgSentences
{
	class Showcase_FiringFromVehicles
	{
		class 01_Spotted
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_01_Spotted.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_01_spotted_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\01_Spotted\showcase_firingfromvehicles_01_spotted_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_01_spotted_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\01_Spotted\showcase_firingfromvehicles_01_spotted_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_01_spotted_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\01_Spotted\showcase_firingfromvehicles_01_spotted_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_01_spotted_BHQ_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\01_Spotted\showcase_firingfromvehicles_01_spotted_BHQ_1.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 01b_Spotted_Remote
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_01b_Spotted_Remote.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_01b_spotted_remote_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\01b_Spotted_Remote\showcase_firingfromvehicles_01b_spotted_remote_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_01b_spotted_remote_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\01b_Spotted_Remote\showcase_firingfromvehicles_01b_spotted_remote_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_01b_spotted_remote_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\01b_Spotted_Remote\showcase_firingfromvehicles_01b_spotted_remote_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_01b_spotted_remote_BHQ_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\01b_Spotted_Remote\showcase_firingfromvehicles_01b_spotted_remote_BHQ_1.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 05_Sentries
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_05_Sentries.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_05_sentries_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\05_Sentries\showcase_firingfromvehicles_05_sentries_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_05_sentries_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\05_Sentries\showcase_firingfromvehicles_05_sentries_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_05_sentries_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\05_Sentries\showcase_firingfromvehicles_05_sentries_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_05_sentries_SFA_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\05_Sentries\showcase_firingfromvehicles_05_sentries_SFA_2.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 10_Located
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_10_Located.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_10_located_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\10_Located\showcase_firingfromvehicles_10_located_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_10_located_HEL_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\10_Located\showcase_firingfromvehicles_10_located_HEL_0.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_10_located_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\10_Located\showcase_firingfromvehicles_10_located_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_10_located_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\10_Located\showcase_firingfromvehicles_10_located_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 10b_Located_Remote
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_10b_Located_Remote.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_10b_located_remote_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\10b_Located_Remote\showcase_firingfromvehicles_10b_located_remote_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_10b_located_remote_HEL_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\10b_Located_Remote\showcase_firingfromvehicles_10b_located_remote_HEL_0.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_10b_located_remote_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\10b_Located_Remote\showcase_firingfromvehicles_10b_located_remote_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_10b_located_remote_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\10b_Located_Remote\showcase_firingfromvehicles_10b_located_remote_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 15_Technical
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_15_Technical.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_15_technical_HEL_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15_Technical\showcase_firingfromvehicles_15_technical_HEL_0.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15_technical_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15_Technical\showcase_firingfromvehicles_15_technical_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15_technical_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15_Technical\showcase_firingfromvehicles_15_technical_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15_technical_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15_Technical\showcase_firingfromvehicles_15_technical_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15_technical_SFA_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15_Technical\showcase_firingfromvehicles_15_technical_SFA_2.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15_technical_BHQ_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15_Technical\showcase_firingfromvehicles_15_technical_BHQ_1.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15_technical_SFA_3
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15_Technical\showcase_firingfromvehicles_15_technical_SFA_3.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15_technical_SFA_4
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15_Technical\showcase_firingfromvehicles_15_technical_SFA_4.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 15b_Technical_Remote
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_15b_Technical_Remote.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_15b_technical_remote_HEL_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15b_Technical_Remote\showcase_firingfromvehicles_15b_technical_remote_HEL_0.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15b_technical_remote_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15b_Technical_Remote\showcase_firingfromvehicles_15b_technical_remote_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15b_technical_remote_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15b_Technical_Remote\showcase_firingfromvehicles_15b_technical_remote_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15b_technical_remote_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15b_Technical_Remote\showcase_firingfromvehicles_15b_technical_remote_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15b_technical_remote_SFA_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15b_Technical_Remote\showcase_firingfromvehicles_15b_technical_remote_SFA_2.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15b_technical_remote_BHQ_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15b_Technical_Remote\showcase_firingfromvehicles_15b_technical_remote_BHQ_1.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15b_technical_remote_SFA_3
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15b_Technical_Remote\showcase_firingfromvehicles_15b_technical_remote_SFA_3.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_15b_technical_remote_SFA_4
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\15b_Technical_Remote\showcase_firingfromvehicles_15b_technical_remote_SFA_4.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 20_Destroyed
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_20_Destroyed.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_20_destroyed_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\20_Destroyed\showcase_firingfromvehicles_20_destroyed_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_20_destroyed_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\20_Destroyed\showcase_firingfromvehicles_20_destroyed_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 20b_Destroyed_Remote
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_20b_Destroyed_Remote.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_20b_destroyed_remote_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\20b_Destroyed_Remote\showcase_firingfromvehicles_20b_destroyed_remote_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_20b_destroyed_remote_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\20b_Destroyed_Remote\showcase_firingfromvehicles_20b_destroyed_remote_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 23_Orders
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_23_Orders.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_23_orders_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_BHQ_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_BHQ_1.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_BHQ_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_BHQ_2.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_BHQ_3
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_BHQ_3.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_BHQ_4
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_BHQ_4.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_HEL_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_HEL_0.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_BHQ_5
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_BHQ_5.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_BHQ_6
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_BHQ_6.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_23_orders_SFA_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\23_Orders\showcase_firingfromvehicles_23_orders_SFA_2.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 25_Plan
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_25_Plan.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_25_plan_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\25_Plan\showcase_firingfromvehicles_25_plan_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_25_plan_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\25_Plan\showcase_firingfromvehicles_25_plan_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_25_plan_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\25_Plan\showcase_firingfromvehicles_25_plan_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_25_plan_SFA_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\25_Plan\showcase_firingfromvehicles_25_plan_SFA_2.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_25_plan_HEL_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\25_Plan\showcase_firingfromvehicles_25_plan_HEL_0.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_25_plan_SFA_3
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\25_Plan\showcase_firingfromvehicles_25_plan_SFA_3.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 30_Bug_Out
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_30_Bug_Out.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_30_bug_out_HEL_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_HEL_0.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_30_bug_out_HEL_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_HEL_1.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_30_bug_out_HEL_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_HEL_2.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_30_bug_out_HEL_3
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_HEL_3.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_30_bug_out_HEL_4
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_HEL_4.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_30_bug_out_HEL_5
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_HEL_5.ogg"
					};
					actor="BIS_heli1D";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_30_bug_out_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_30_bug_out_BHQ_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_BHQ_1.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_30_bug_out_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\30_Bug_Out\showcase_firingfromvehicles_30_bug_out_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 32_Church_Contact
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_32_Church_Contact.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_32_church_contact_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\32_Church_Contact\showcase_firingfromvehicles_32_church_contact_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 33_Church_Clear
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_33_Church_Clear.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_33_church_clear_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\33_Church_Clear\showcase_firingfromvehicles_33_church_clear_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 35_Crew_Found
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_35_Crew_Found.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_35_crew_found_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\35_Crew_Found\showcase_firingfromvehicles_35_crew_found_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_35_crew_found_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\35_Crew_Found\showcase_firingfromvehicles_35_crew_found_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_35_crew_found_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\35_Crew_Found\showcase_firingfromvehicles_35_crew_found_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 40_All_In
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_40_All_In.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_40_all_in_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\40_All_In\showcase_firingfromvehicles_40_all_in_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 45_Extracted
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_45_Extracted.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_45_extracted_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\45_Extracted\showcase_firingfromvehicles_45_extracted_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_45_extracted_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\45_Extracted\showcase_firingfromvehicles_45_extracted_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 50_Artillery
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_50_Artillery.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_50_artillery_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\50_Artillery\showcase_firingfromvehicles_50_artillery_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_50_artillery_SFA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\50_Artillery\showcase_firingfromvehicles_50_artillery_SFA_1.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_50_artillery_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\50_Artillery\showcase_firingfromvehicles_50_artillery_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_50_artillery_SFA_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\50_Artillery\showcase_firingfromvehicles_50_artillery_SFA_2.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_50_artillery_BHQ_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\50_Artillery\showcase_firingfromvehicles_50_artillery_BHQ_1.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_50_artillery_SFA_3
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\50_Artillery\showcase_firingfromvehicles_50_artillery_SFA_3.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_50_artillery_SFA_4
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\50_Artillery\showcase_firingfromvehicles_50_artillery_SFA_4.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class x01_ROE_Failed
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_x01_ROE_Failed.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_x01_roe_failed_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\x01_ROE_Failed\showcase_firingfromvehicles_x01_roe_failed_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class x05_UAV_No_Ammo
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_x05_UAV_No_Ammo.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_x05_uav_no_ammo_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\x05_UAV_No_Ammo\showcase_firingfromvehicles_x05_uav_no_ammo_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_firingfromvehicles_x05_uav_no_ammo_BHQ_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\x05_UAV_No_Ammo\showcase_firingfromvehicles_x05_uav_no_ammo_BHQ_1.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class x10_UAV_Warning
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_x10_UAV_Warning.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_x10_uav_warning_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\x10_UAV_Warning\showcase_firingfromvehicles_x10_uav_warning_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class x15_UAV_Punish
		{
			file="\a3\missions_f_Mark\kb\Showcase_FiringFromVehicles\Showcase_FiringFromVehicles_x15_UAV_Punish.bikb";
			class Sentences
			{
				class showcase_firingfromvehicles_x15_uav_punish_SFA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_firingfromvehicles\x15_UAV_Punish\showcase_firingfromvehicles_x15_uav_punish_SFA_0.ogg"
					};
					actor="BIS_SFA";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
	};
	class Showcase_Marksman
	{
		class 01_Prologue
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_01_Prologue.bikb";
			class Sentences
			{
				class showcase_marksman_01_prologue_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\01_Prologue\showcase_marksman_01_prologue_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_01_prologue_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\01_Prologue\showcase_marksman_01_prologue_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_01_prologue_PLA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\01_Prologue\showcase_marksman_01_prologue_PLA_1.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 05_VillaCleared
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_05_VillaCleared.bikb";
			class Sentences
			{
				class showcase_marksman_05_villacleared_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\05_VillaCleared\showcase_marksman_05_villacleared_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_05_villacleared_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\05_VillaCleared\showcase_marksman_05_villacleared_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 10_IntelFound
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_10_IntelFound.bikb";
			class Sentences
			{
				class showcase_marksman_10_intelfound_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\10_IntelFound\showcase_marksman_10_intelfound_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_10_intelfound_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\10_IntelFound\showcase_marksman_10_intelfound_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_10_intelfound_PLA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\10_IntelFound\showcase_marksman_10_intelfound_PLA_1.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_10_intelfound_PLA_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\10_IntelFound\showcase_marksman_10_intelfound_PLA_2.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_10_intelfound_LED_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\10_IntelFound\showcase_marksman_10_intelfound_LED_1.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_10_intelfound_PLA_3
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\10_IntelFound\showcase_marksman_10_intelfound_PLA_3.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 15_LZClear
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_15_LZClear.bikb";
			class Sentences
			{
				class showcase_marksman_15_lzclear_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\15_LZClear\showcase_marksman_15_lzclear_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_15_lzclear_PLA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\15_LZClear\showcase_marksman_15_lzclear_PLA_1.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_15_lzclear_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\15_LZClear\showcase_marksman_15_lzclear_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_15_lzclear_LED_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\15_LZClear\showcase_marksman_15_lzclear_LED_1.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_15_lzclear_LED_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\15_LZClear\showcase_marksman_15_lzclear_LED_2.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 20_GetIn
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_20_GetIn.bikb";
			class Sentences
			{
				class showcase_marksman_20_getin_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\20_GetIn\showcase_marksman_20_getin_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 25_ChangeOfPlan
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_25_ChangeOfPlan.bikb";
			class Sentences
			{
				class showcase_marksman_25_changeofplan_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\25_ChangeOfPlan\showcase_marksman_25_changeofplan_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_25_changeofplan_LED_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\25_ChangeOfPlan\showcase_marksman_25_changeofplan_LED_1.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_25_changeofplan_LED_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\25_ChangeOfPlan\showcase_marksman_25_changeofplan_LED_2.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_25_changeofplan_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\25_ChangeOfPlan\showcase_marksman_25_changeofplan_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 30_Details
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_30_Details.bikb";
			class Sentences
			{
				class showcase_marksman_30_details_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\30_Details\showcase_marksman_30_details_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_30_details_LED_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\30_Details\showcase_marksman_30_details_LED_1.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_30_details_LED_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\30_Details\showcase_marksman_30_details_LED_2.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_30_details_LED_3
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\30_Details\showcase_marksman_30_details_LED_3.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_30_details_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\30_Details\showcase_marksman_30_details_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_30_details_LED_4
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\30_Details\showcase_marksman_30_details_LED_4.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_30_details_PLA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\30_Details\showcase_marksman_30_details_PLA_1.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 35_CampInfo
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_35_CampInfo.bikb";
			class Sentences
			{
				class showcase_marksman_35_campinfo_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\35_CampInfo\showcase_marksman_35_campinfo_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_35_campinfo_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\35_CampInfo\showcase_marksman_35_campinfo_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_35_campinfo_LED_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\35_CampInfo\showcase_marksman_35_campinfo_LED_1.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_35_campinfo_LED_2
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\35_CampInfo\showcase_marksman_35_campinfo_LED_2.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_35_campinfo_PLA_1
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\35_CampInfo\showcase_marksman_35_campinfo_PLA_1.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 40_LiveFeed
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_40_LiveFeed.bikb";
			class Sentences
			{
				class showcase_marksman_40_livefeed_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\40_LiveFeed\showcase_marksman_40_livefeed_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 45_Signal
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_45_Signal.bikb";
			class Sentences
			{
				class showcase_marksman_45_signal_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\45_Signal\showcase_marksman_45_signal_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class 50_Victory
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_50_Victory.bikb";
			class Sentences
			{
				class showcase_marksman_50_victory_PLA_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\50_Victory\showcase_marksman_50_victory_PLA_0.ogg"
					};
					actor="BIS_Player";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class showcase_marksman_50_victory_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\50_Victory\showcase_marksman_50_victory_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
		class x01_Losses
		{
			file="\a3\missions_f_Mark\kb\Showcase_Marksman\Showcase_Marksman_x01_Losses.bikb";
			class Sentences
			{
				class showcase_marksman_x01_losses_LED_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mark\showcase_marksman\x01_Losses\showcase_marksman_x01_losses_LED_0.ogg"
					};
					actor="BIS_Medusa";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
			};
			class Arguments;  //found empty after stripping
			class Special;  //found empty after stripping
			startWithVocal[]=
			{
				"hour"
			};
			startWithConsonant[]=
			{
				"europe",
				"university"
			};
		};
	};
};
