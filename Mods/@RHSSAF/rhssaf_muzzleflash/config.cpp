class CfgPatches
{
	class rhssaf_muzzleflash
	{
		units[]={};
		weapons[]={};
		name="RHS: SAF muzzleflashes";
		versionDesc="RHS";
		version="VERSION";
	};
};
class CfgAddons
{
	class PreloadBanks;  //found empty after stripping
	class PreloadAddons
	{
		class RHS_SAF
		{
			list[]=
			{
				"rhssaf_muzzleflash"
			};
		};
	};
};
