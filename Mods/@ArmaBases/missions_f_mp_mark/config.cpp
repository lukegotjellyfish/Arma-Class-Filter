class CfgPatches
{
	class A3_Missions_F_MP_Mark
	{
		name="Arma 3 Marksmen (Multiplayer) - Playable Content";
		units[]={};
		weapons[]={};
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
	class MPMissions
	{
		class MP_Marksmen_01
		{
			briefingName="$STR_A3_mp_marksmen_01_missionnamelobby";
			overviewText="$STR_A3_mp_marksmen_01_overview";
			overview="$STR_A3_mp_marksmen_01_overview";
			directory="A3\Missions_F_MP_Mark\MPScenarios\MP_Marksmen_01.Altis";
		};
	};
};
class CfgMPGameTYpes
{
	class EndGame
	{
		name="$STR_a3_cfgmpgametypes_endgame_name";
		shortcut="$STR_a3_cfgmpgametypes_endgame_shortcut";
		id=21;
		description="";
		featured=1;
	};
};
class CfgSentences
{
	class MP_Marksmen_01
	{
		class 01_Wait
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_01_Wait.bikb";
			class Sentences
			{
				class mp_marksmen_01_01_wait_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\01_Wait\mp_marksmen_01_01_wait_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_01_wait_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\01_Wait\mp_marksmen_01_01_wait_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 03_Start
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_03_Start.bikb";
			class Sentences
			{
				class mp_marksmen_01_03_start_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\03_Start\mp_marksmen_01_03_start_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_03_start_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\03_Start\mp_marksmen_01_03_start_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 05_EndGood
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_05_EndGood.bikb";
			class Sentences
			{
				class mp_marksmen_01_05_endgood_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\05_EndGood\mp_marksmen_01_05_endgood_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_05_endgood_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\05_EndGood\mp_marksmen_01_05_endgood_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 07_EndBad
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_07_EndBad.bikb";
			class Sentences
			{
				class mp_marksmen_01_07_endbad_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\07_EndBad\mp_marksmen_01_07_endbad_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_07_endbad_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\07_EndBad\mp_marksmen_01_07_endbad_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 10_FobControl
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_10_FobControl.bikb";
			class Sentences
			{
				class mp_marksmen_01_10_fobcontrol_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\10_FobControl\mp_marksmen_01_10_fobcontrol_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_10_fobcontrol_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\10_FobControl\mp_marksmen_01_10_fobcontrol_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 15_IntelRetrieved
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_15_IntelRetrieved.bikb";
			class Sentences
			{
				class mp_marksmen_01_15_intelretrieved_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\15_IntelRetrieved\mp_marksmen_01_15_intelretrieved_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_15_intelretrieved_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\15_IntelRetrieved\mp_marksmen_01_15_intelretrieved_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 17_IntelWanted
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_17_IntelWanted.bikb";
			class Sentences
			{
				class mp_marksmen_01_17_intelwanted_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\17_IntelWanted\mp_marksmen_01_17_intelwanted_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_17_intelwanted_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\17_IntelWanted\mp_marksmen_01_17_intelwanted_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 18_IntelRevealed
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_18_IntelRevealed.bikb";
			class Sentences
			{
				class mp_marksmen_01_18_intelrevealed_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\18_IntelRevealed\mp_marksmen_01_18_intelrevealed_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_18_intelrevealed_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\18_IntelRevealed\mp_marksmen_01_18_intelrevealed_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 20_IntelShouldDestroy
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_20_IntelShouldDestroy.bikb";
			class Sentences
			{
				class mp_marksmen_01_20_intelshoulddestroy_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\20_IntelShouldDestroy\mp_marksmen_01_20_intelshoulddestroy_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_20_intelshoulddestroy_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\20_IntelShouldDestroy\mp_marksmen_01_20_intelshoulddestroy_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 25_EndGameStart
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_25_EndGameStart.bikb";
			class Sentences
			{
				class mp_marksmen_01_25_endgamestart_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\25_EndGameStart\mp_marksmen_01_25_endgamestart_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_25_endgamestart_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\25_EndGameStart\mp_marksmen_01_25_endgamestart_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 30_PickupSchematicsFirst
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_30_PickupSchematicsFirst.bikb";
			class Sentences
			{
				class mp_marksmen_01_30_pickupschematicsfirst_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\30_PickupSchematicsFirst\mp_marksmen_01_30_pickupschematicsfirst_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_30_pickupschematicsfirst_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\30_PickupSchematicsFirst\mp_marksmen_01_30_pickupschematicsfirst_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 35_PreventUpload
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_35_PreventUpload.bikb";
			class Sentences
			{
				class mp_marksmen_01_35_preventupload_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\35_PreventUpload\mp_marksmen_01_35_preventupload_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_35_preventupload_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\35_PreventUpload\mp_marksmen_01_35_preventupload_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 40_PickupSchematics
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_40_PickupSchematics.bikb";
			class Sentences
			{
				class mp_marksmen_01_40_pickupschematics_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\40_PickupSchematics\mp_marksmen_01_40_pickupschematics_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_40_pickupschematics_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\40_PickupSchematics\mp_marksmen_01_40_pickupschematics_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 45_PreventUpload
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_45_PreventUpload.bikb";
			class Sentences
			{
				class mp_marksmen_01_45_preventupload_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\45_PreventUpload\mp_marksmen_01_45_preventupload_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_45_preventupload_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\45_PreventUpload\mp_marksmen_01_45_preventupload_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
		class 50_Upload
		{
			file="\a3\missions_f_MP_Mark\kb\MP_Marksmen_01\MP_Marksmen_01_50_Upload.bikb";
			class Sentences
			{
				class mp_marksmen_01_50_upload_BHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\50_Upload\mp_marksmen_01_50_upload_BHQ_0.ogg"
					};
					actor="BIS_BHQ";
					variant="";
					variantText="";
					class Arguments;  //found empty after stripping
				};
				class mp_marksmen_01_50_upload_OHQ_0
				{
					speech[]=
					{
						"\a3\dubbing_f_mp_mark\mp_marksmen_01\50_Upload\mp_marksmen_01_50_upload_OHQ_0.ogg"
					};
					actor="BIS_OHQ";
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
