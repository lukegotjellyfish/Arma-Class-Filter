class CfgPatches
{
	class A3_Music_F_Mark
	{
		author="$STR_A3_Bohemia_Interactive";
		name="Arma 3 Marksmen - Soundtrack";
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
class CfgMusic
{
	class LeadTrack01_F_Mark
	{
		name="$STR_A3_CFGMUSIC_LEADTRACK01_F_MARK";
		sound[]=
		{
			"\A3\Music_f_Mark\Music\LeadTrack01_F_Mark.ogg",
			1,
			1
		};
		duration=158;
		musicClass="Lead";
	};
	class LeadTrack02_F_Mark
	{
		name="$STR_A3_CFGMUSIC_LEADTRACK02_F_MARK";
		sound[]=
		{
			"\A3\Music_f_Mark\Music\LeadTrack02_F_Mark.ogg",
			1,
			1
		};
		duration=171.53999;
		musicClass="Lead";
	};
	class LeadTrack03_F_Mark
	{
		name="$STR_A3_CFGMUSIC_LEADTRACK03_F_MARK";
		sound[]=
		{
			"\A3\Music_f_Mark\Music\LeadTrack03_F_Mark.ogg",
			1,
			1
		};
		duration=130.36;
		musicClass="Calm";
	};
};
