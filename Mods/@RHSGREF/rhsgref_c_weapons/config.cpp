class CfgPatches
{
	class rhsgref_c_weapons
	{
		units[]=
		{
			"rhsgref_weapons_crate",
			"rhs_mine_smine35_press",
			"rhs_mine_smine35_trip",
			"rhs_mine_smine44_trip",
			"rhs_mine_smine44_press",
			"rhs_mine_m2a3b_press",
			"rhs_mine_m2a3b_trip",
			"rhs_mine_glasmine43_hz",
			"rhs_mine_glasmine43_bz",
			"rhs_mine_a200_bz",
			"rhs_mine_a200_dz35",
			"rhs_mine_stockmine43_2m",
			"rhs_mine_stockmine43_4m",
			"rhs_mine_TM43",
			"rhs_mine_m3_pressure",
			"rhs_mine_M3_tripwire",
			"rhs_mine_mk2_pressure",
			"rhs_mine_Mk2_tripwire",
			"rhs_mine_M7A2",
			"rhs_mine_smine35_press_module",
			"rhs_mine_smine35_trip_module",
			"rhs_mine_smine44_trip_module",
			"rhs_mine_smine44_press_module",
			"rhs_mine_m2a3b_press_module",
			"rhs_mine_m2a3b_trip_module",
			"rhs_mine_glasmine43_hz_module",
			"rhs_mine_glasmine43_bz_module",
			"rhs_mine_a200_bz_module",
			"rhs_mine_a200_dz35_module",
			"rhs_mine_stockmine43_2m_module",
			"rhs_mine_stockmine43_4m_module",
			"rhs_mine_m3_pressure_module",
			"rhs_mine_M3_tripwire_module",
			"rhs_mine_mk2_pressure_module",
			"rhs_mine_Mk2_tripwire_module",
			"rhs_mine_M7A2_module",
			"rhs_mine_TM43_module"
		};
		weapons[]=
		{
			"rhs_mtz_slot",
			"rhs_weap_kar98k",
			"rhs_weap_m38",
			"rhs_weap_m38_rail",
			"rhs_weap_mosin_sbr",
			"rhs_weap_dsr1",
			"rhs_weap_m76",
			"rhs_weap_savz61",
			"rhs_weap_savz61_folded",
			"rhs_weap_savz58p",
			"rhs_weap_savz58v",
			"rhs_weap_savz58v_fold",
			"rhs_weap_savz58p_rail",
			"rhs_weap_savz58v_rail",
			"rhs_weap_savz58v_rail_fold",
			"rhs_weap_savz58v_ris",
			"rhs_weap_savz58v_ris_fold",
			"rhs_weap_savz58v_ris_grip1",
			"rhs_weap_savz58v_ris_grip2",
			"rhs_weap_savz58v_ris_grip3",
			"rhs_weap_savz58v_ris_fold_grip1",
			"rhs_weap_savz58v_ris_fold_grip2",
			"rhs_weap_savz58v_ris_fold_grip3",
			"rhs_weap_savz58p_black",
			"rhs_weap_savz58v_black",
			"rhs_weap_savz58v_fold_black",
			"rhs_weap_savz58p_rail_black",
			"rhs_weap_savz58v_rail_black",
			"rhs_weap_savz58v_rail_fold_black",
			"rhs_weap_Izh18",
			"rhs_weap_stgw57",
			"rhs_weap_m3a1",
			"rhs_weap_MP44",
			"rhs_weap_K98k_byf43",
			"rhs_weap_m1garand_sa43",
			"rhs_weap_mg42",
			"rhs_weap_mg42_aa",
			"rhs_weap_vhsd2",
			"rhs_weap_vhsd2_bg",
			"rhs_weap_vhsd2_ct15x",
			"rhs_weap_vhsd2_bg_ct15x",
			"rhs_weap_vhsk2",
			"rhs_weap_tt33",
			"rhs_weap_rpg75",
			"rhs_weap_panzerfaust60"
		};
		magazines[]={};
		requiredVersion=1.3200001;
		requiredAddons[]=
		{
			"rhsgref_main"
		};
		name="GREF Weapons";
		author="$STR_RHS_AUTHOR_FULL";
		url="http://www.rhsmods.org/";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class rhs_picattinny_russian_rifle_scopes_slot;
class rhs_picattinny_russian_rifle_scopes_slot_long;
class rhs_russian_ak_barrel_slot;
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};
	class rhs_rscOptics_m21a_mtz: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_acc_mtz_handler;_this call rhs_fnc_safemode";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler",
			"RHS_npz_rail_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=9999;
		};
		class RHS_npz_rail_handler: RscPicture
		{
			idc=9897;
		};
	};
	class rhs_rscOptics_m21s_mtz: rhs_rscOptics_m21a_mtz;  //found empty after stripping
	class rhs_rscOptics_m70ab2: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_weapon;_this call rhs_fnc_safemode";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler",
			"RHS_ak_fold_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=9999;
		};
		class RHS_ak_fold_handler: RscPicture
		{
			idc=9899;
		};
	};
	class rhs_rscOptics_m92: rhs_rscOptics_m70ab2;  //found empty after stripping
	class rhs_rscOptics_m21a: rhs_rscOptics_m70ab2;  //found empty after stripping
	class rhs_rscOptics_m21s: rhs_rscOptics_m70ab2;  //found empty after stripping
	class rhs_rscOptics_vz58v: rhs_rscOptics_m70ab2;  //found empty after stripping
	class rhs_rscOptics_vz58v_rail: rhs_rscOptics_m70ab2;  //found empty after stripping
	class rhs_rscOptics_vz58v_ris: rhs_rscOptics_m70ab2;  //found empty after stripping
	class rhs_rscOptics_m70b1: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_safemode";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=9999;
		};
	};
	class rhs_rscOptics_m76: rhs_rscOptics_m70b1;  //found empty after stripping
	class rhs_rscOptics_vz58p: rhs_rscOptics_m70b1;  //found empty after stripping
	class rhs_rscOptics_vz58p_rail: rhs_rscOptics_m70b1;  //found empty after stripping
	class rhs_rscOptics_stgw57: rhs_rscOptics_m70ab2;  //found empty after stripping
	class rhs_rscOptics_m3a1: rhs_rscOptics_m70b1;  //found empty after stripping
	class rhs_rscOptics_acc_mtz: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_acc_mtz";
	};
	class rhs_kar98k_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=1;
		};
	};
	class rhs_mosin_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=1;
		};
	};
	class rhs_rscOptics_m1garand_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode;_this call rhs_fnc_m1garand_ads";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler",
			"RHS_m1garand_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=1;
		};
		class RHS_m1garand_handler: RscPicture
		{
			idc=9798;
		};
	};
	class rhs_rscOptics_vz61: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_PP;_this call rhs_fnc_safemode";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler",
			"RHS_pp_fold_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=9999;
		};
		class RHS_pp_fold_handler: RscPicture
		{
			idc=9898;
		};
	};
	class rhs_rscOptics_vhs: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_safemode";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=9999;
		};
	};
	class rhs_rscOptics_fnfal: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_safemode";
		controls[]=
		{
			"CA_Zeroing",
			"RHS_safemode_handler"
		};
		class RHS_safemode_handler: RscPicture
		{
			idc=9999;
		};
	};
	class rhs_rscOptics_acc_l2a2: RscWeaponZeroing
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this # 0,true] call RHS_fnc_sight_l2a2;";
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc=170;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,0,0,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,0,0,0};
				height=0.001;
			};
			class Controls
			{
				class RHS_Illumination: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.44,0.98000002,0.20999999,1};
					shadow=0;
					text="rhsgref\addons\rhsgref_weapons3\acc\scopes\l2a2\Optic\rhs_suit_optic_illum_ca.paa";
					x="-3.54 *   (0.01875 * Safezoneh)";
					y="-9.85 *   (0.025 * SafezoneH)";
					w="60.5 *   (0.01875 * SafezoneH)";
					h="60.5 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	class rhs_rscOptics_acc_l2a2_3d: RscWeaponZeroing
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  [_this select 0,true] call RHS_fnc_sight_1p29;";
	};
	class rhs_rscOptics_mg42_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_handle_mg; ";
	};
};
class CfgRecoils
{
	class recoil_default;
	class rhs_recoil_fnfal: recoil_default
	{
		muzzleOuter[]={0.30000001,1.2,0.30000001,0.30000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.015;
	};
};
class CfgOpticsEffect
{
	class rhs_ANPVS2_Abera
	{
		type="chromaberration";
		priority=250;
		params[]={0.039999999,0.039999999,1};
	};
	class rhs_ANPVS2_Blur
	{
		type="radialblur";
		priority=100;
		params[]={0.40000001,0,0,0};
	};
	class rhs_ANPVS2_FilmGrain
	{
		type="FilmGrain";
		priority=2050;
		params[]={0.15000001,0.40000001,1.5700001,0.5,0.5,1};
	};
};
class rhsgref_792CartridgeEject
{
	class rhsgref_792Cartridge_FX1
	{
		simulation="particles";
		type="rhsgref_792Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class rhsgref_792Cartridge_FX1Med
	{
		simulation="particles";
		type="rhsgref_792Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
class rhsgref_792LinkEject
{
	class rhsgref_792Link_FX1
	{
		simulation="particles";
		type="rhsgref_792Link";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class CfgCloudlets
{
	class MachineGunCartridge;
	class MachineGunEject;
	class rhsgref_792Link: MachineGunEject
	{
		interval=0.050000001;
		particleShape="\A3\data_f\ParticleEffects\Universal\AmmoBelt_Links.p3d";
		size[]={1};
	};
	class rhsgref_792Cartridge: MachineGunCartridge
	{
		interval=0.050000001;
		particleShape="\rhsgref\addons\rhsgref_c_weapons\data\casing_792_SmE.p3d";
		size[]={1};
	};
};
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	class compatibleItems
	{
		rhsgref_acc_RX01_camo=1;
		rhsgref_acc_RX01_NoFilter_camo=1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class asdg_OpticRail1913_long: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems;
};
class rhs_russian_rifle_scopes_slot: asdg_OpticSideMount
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
};
class rhs_russian_rifle_scopes_slot_npz: rhs_russian_rifle_scopes_slot
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class asdg_UnderSlot: asdg_SlotInfo
{
	linkProxy="\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
	iconPicture="\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint="Bottom";
	class compatibleItems;  //found empty after stripping
};
class asdg_OpticRailL1A1: asdg_OpticRail
{
	linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	displayName="$STR_A3_CowsSlot0";
	class compatibleItems
	{
		rhsgref_acc_l1a1_l2a2=1;
		rhsgref_acc_l1a1_l2a2_3d=1;
		rhsgref_acc_l1a1_anpvs2=1;
	};
};
class rhs_l1a1_rifle_scopes_slot: asdg_OpticRailL1A1
{
	iconPosition[]={0,0};
	iconScale=1;
	iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
	iconPinPoint="Left";
};
class rhs_western_rifle_scopes_slot_short: asdg_OpticRail1913_short;  //found empty after stripping
class rhs_western_rifle_scopes_slot_long: asdg_OpticRail1913_long;  //found empty after stripping
class rhs_western_rifle_underbarrel_slot_bis: UnderBarrelSlot;  //found empty after stripping
class rhs_rifle_gripod_slot: UnderBarrelSlot
{
	displayName="Gripod slot";
	class compatibleItems;  //found empty after stripping
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot
{
	linkProxy="rhsusf\addons\rhsusf_weapons\rhs_grip_proxy";
};
class rhs_western_mg_gripod_slot: rhs_western_rifle_gripod_slot
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems;  //found empty after stripping
};
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems
	{
		rhsgref_sdn6_suppressor=1;
	};
};
class rhs_western_762rifle_muzzle_slot: asdg_MuzzleSlot_762
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class rhs_FAL_muzzle_slot: rhs_western_762rifle_muzzle_slot
{
	class compatibleItems: compatibleItems
	{
		rhsgref_acc_falMuzzle_l1a1=1;
	};
};
class asdg_MuzzleSlot_9MM: asdg_MuzzleSlot
{
	displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems;  //found empty after stripping
};
class rhs_western_9mmpistol_muzzle_slot: asdg_MuzzleSlot_9MM
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class rhs_western_rifle_underbarrel_slot: asdg_UnderSlot
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class rhs_western_46mmsmg_muzzle_slot: asdg_MuzzleSlot
{
	displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
	linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
	class compatibleItems;  //found empty after stripping
};
class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot
{
	class compatibleItems;  //found empty after stripping
};
class rhs_western_rifle_scopes_slot: CowsSlot
{
	compatibleItems[]={};
};
class asdg_FrontSideRail: asdg_SlotInfo
{
	linkProxy="\a3\data_f\proxies\weapon_slots\side";
	displayName="$STR_A3_PointerSlot0";
	class compatibleItems;  //found empty after stripping
};
class rhs_western_rifle_laser_slot_top: asdg_FrontSideRail;  //found empty after stripping
class rhs_western_rifle_laser_slot: rhs_western_rifle_laser_slot_top
{
	class compatibleItems: compatibleItems;  //found empty after stripping
};
class asdg_PistolUnderRail: asdg_SlotInfo
{
	linkProxy="\a3\data_f\proxies\weapon_slots\SIDE";
	displayName="$STR_A3_PointerSlot0";
	iconPicture="\a3\weapons_f_mark\Data\UI\attachment_under";
	iconPinpoint="Bottom";
	class compatibleItems;  //found empty after stripping
};
class rhs_western_pistol_laser_slot: asdg_PistolUnderRail;  //found empty after stripping
class rhs_optics_debug: rhs_rifle_gripod_slot
{
	class compatibleItems
	{
		rhsgref_acc_l1a1_l2a2=1;
		rhsgref_acc_l1a1_anpvs2=1;
	};
};
class CfgMineTriggers
{
	class Default;
	class WireTrigger;
	class RangeTrigger;
	class rhsgref_glmi43_trigger: Default
	{
		mineTriggerType="radius";
		mineTriggerRange=0.1;
		mineTriggerMass=9;
		mineMagnetic=0;
	};
	class rhsgref_sMine_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-2,0.050000001,0};
		mineWireEnd[]={2,0.050000001,0};
		mineTriggerMass=14;
	};
	class rhsgref_StMi43_2m_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-1,0,0};
		mineWireEnd[]={1,0.25,0};
		mineTriggerMass=14;
	};
	class rhsgref_StMi43_4m_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-2,0.1,0};
		mineWireEnd[]={2,0.25,0};
		mineTriggerMass=14;
	};
	class rhsgref_Mk2_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-2,0.025,-0.1};
		mineWireEnd[]={2,0.025,-0.1};
		mineTriggerMass=14;
	};
	class rhsgref_M2A3_tripwire_trigger: WireTrigger
	{
		restrictZoneCenter[]={0.1,0,0};
		restrictZoneRadius=3;
		mineWireStart[]={-2,0.023,0.050000001};
		mineWireEnd[]={2,0.023,0.050000001};
		mineTriggerMass=14;
	};
	class rhsgref_pressure_trigger: RangeTrigger
	{
		mineTriggerRange=0.60000002;
		mineTriggerActivationRange=1;
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_9x21_Ball;
	class rhs_ammo_9x17: B_9x21_Ball
	{
		hit=4.8699999;
		typicalSpeed=272;
		airFriction=-0.0017671455;
		caliber=0.338;
		deflecting=37;
		visibleFire=1.8;
		audibleFire=3.6500001;
	};
	class rhs_ammo_762x25_Ball: BulletBase
	{
		hit=4.9457779;
		indirectHit=0;
		indirectHitRange=0;
		suppressionRadiusBulletClose=2;
		cartridge="FxCartridge_9mm";
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber=0.77399999;
		deflecting=29;
		visibleFire=1.5;
		audibleFire=3;
		cost=100;
		typicalSpeed=390.10001;
		airFriction=-0.0027667;
	};
	class rhs_ammo_8mm_mhp: BulletBase
	{
		scope=2;
		hit=3.4313264;
		indirectHit=0;
		indirectHitRange=0;
		suppressionRadiusBulletClose=2;
		cartridge="FxCartridge_9mm";
		caliber=0.53333336;
		deflecting=30;
		visibleFire=5;
		audibleFire=9;
		cost=100;
		typicalSpeed=290;
		airFriction=-0.0018;
	};
	class rhs_ammo_792x57_Ball: BulletBase
	{
		hit=11.55;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1.2;
		airLock=1;
		caliber=0.44999999;
		model="\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale=1.2;
		tracerStartTime=0.045000002;
		tracerEndTime=1.5;
		airFriction=-0.00068140001;
		typicalSpeed=838;
	};
	class rhs_ammo_75x55_Ball: BulletBase
	{
		hit=11.55;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1.2;
		airLock=1;
		caliber=0.44999999;
		model="\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale=1.2;
		tracerStartTime=0.045000002;
		tracerEndTime=1.5;
		airFriction=-0.00068140001;
		typicalSpeed=838;
	};
	class rhs_ammo_762x63_M2B_ball: BulletBase
	{
		hit=13.75;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1.2;
		airLock=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber=0.44999999;
		airFriction=-0.00068140001;
		typicalSpeed=838;
	};
	class rhs_ammo_762x63_M1T_tracer: BulletBase
	{
		hit=13.75;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1.2;
		airLock=1;
		caliber=0.44999999;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=0.60000002;
		tracerStartTime=0.045000002;
		tracerEndTime=1.5;
		airFriction=-0.00068140001;
		typicalSpeed=838;
	};
	class rhs_ammo_792x33_SmE_ball: BulletBase
	{
		hit=7.5;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=22;
		audibleFire=18;
		visibleFireTime=3;
		cost=1.2;
		airLock=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		caliber=0.44;
		tracerScale=1.2;
		tracerStartTime=0.045000002;
		tracerEndTime=1.5;
		airFriction=-0.00101;
		typicalSpeed=685;
	};
	class GrenadeHand;
	class SmokeShell;
	class rhs_ammo_f1: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons\grenades\throw\frag_f1";
		explosionTime=4;
	};
	class rhsgref_ammo_rkg3em: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em.p3d";
		rhs_submunition="rhsgref_ammo_rkg3em_fly";
		rhs_submunition_uxo="rhsgref_ammo_rkg3em_uxo";
		rhs_fuseTime[]={0.30000001,0.34999999,0.40000001};
		simulationStep=0.001;
		explosionTime=-1;
		timeToLive=5;
		explosionEffects="";
		CraterEffects="";
		SoundSetExplosion[]={};
		multiSoundHit[]={};
		hit=0.1;
		indirectHit=0;
	};
	class rhsgref_ammo_rkg3em_uxo: SmokeShell
	{
		model="\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em.p3d";
		smokeColor[]={0,0,0,0};
		explosionTime=0.001;
		grenadeFireSound[]={};
		grenadeBurningSound[]={};
	};
	class rhsgref_ammo_rkg3em_fly: GrenadeHand
	{
		rhs_submunition="rhsgref_ammo_rkg3em_explosion";
		hit=180;
		indirectHit=12;
		indirectHitRange=3;
		model="\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em_thrown.p3d";
		explosionTime=-1;
		SoundSetExplosion[]={};
	};
	class rhsgref_ammo_rkg3em_explosion: BulletBase
	{
		hit=140;
		indirectHit=8;
		indirectHitRange=3;
		simulationStep=9.9999997e-006;
		simulation="shotShell";
		deflecting=0;
		explosive=1;
		timeToLive=1;
		explosionTime=0;
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
		submunitionAmmo="rhsgref_ammo_rkg3em_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
	class rhs_ammo_3bk12_penetrator;
	class rhsgref_ammo_rkg3em_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=29.3333;
	};
	class rhs_grenade_m1939e_ammo: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39early_proj";
		defaultMagazine="rhs_grenade_m1939e_mag";
		explosionTime=4.5;
	};
	class rhs_grenade_m1939l_ammo: rhs_grenade_m1939e_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39late_proj";
		defaultMagazine="rhs_grenade_m1939l_mag";
	};
	class rhs_grenade_m1939e_f_ammo: rhs_grenade_m1939e_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39early_f_proj";
		defaultMagazine="rhs_grenade_m1939e_f_mag";
	};
	class rhs_grenade_m1939l_f_ammo: rhs_grenade_m1939e_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M39\thrown\m39late_f_proj";
		defaultMagazine="rhs_grenade_m1939l_f_mag";
	};
	class rhs_grenade_nbhgr39_ammo: SmokeShell
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\NM39\thrown\nm39_early_proj";
		explosionTime=7;
	};
	class rhs_grenade_nbhgr39B_ammo: rhs_grenade_nbhgr39_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\NM39\thrown\nm39_late_proj";
	};
	class rhs_grenade_sthgr24_ammo: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_proj";
		explosionTime=5;
	};
	class rhs_grenade_sthgr24_heerfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_heer_proj";
	};
	class rhs_grenade_sthgr24_ssfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_ss_proj";
	};
	class rhs_grenade_sthgr24_x7bundle_ammo: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M24\thrown\m24late_bundle_proj";
		explosionTime=5;
		hit=56;
		indirectHit=56;
		IndirecthitRange=7;
	};
	class rhs_grenade_sthgr43_ammo: rhs_grenade_sthgr24_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_proj";
		explosionTime=4.5;
	};
	class rhs_grenade_sthgr43_heerfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_heer_proj";
		explosionTime=4.5;
	};
	class rhs_grenade_sthgr43_ssfrag_ammo: rhs_grenade_sthgr24_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M43\thrown\m43_ss_proj";
		explosionTime=4.5;
	};
	class rhs_grenade_mkii_ammo: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_ii_proj";
		explosionTime=4.5;
	};
	class rhs_grenade_mkiiia1_ammo: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_iii_proj";
		explosionTime=4.5;
	};
	class rhs_grenade_anm8_ammo: SmokeShell
	{
		smokeColor[]={1,1,1,1};
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\M8_proj";
	};
	class rhs_grenade_m15_ammo: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\M15_proj";
		explosionTime=4.5;
		hit=2;
		indirectHit=2;
		indirectHitRange=2;
		explosionEffects="RHS_GDM40Effect";
	};
	class rhs_grenade_mki_ammo: SmokeShell
	{
		AIAmmoUsageFlags="1+4";
		smokeColor[]={1,1,1,0.5};
		lightColor[]={0.5,0.5,0.5,0.5};
		effectsSmoke="EmptyEffect";
		effectFlare="CounterMeasureFlare";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\thrown\mk_i_proj";
		intensity=55000;
		brightness=12;
		size=1;
		useFlare=1;
		flareSize=2;
		timeToLive=30;
		triggerTime=5;
		triggerSpeedCoef=1;
		deflecting=10;
		simulation="shotIlluminating";
	};
	class RocketBase;
	class R_PG32V_F: RocketBase;  //found empty after stripping
	class rhs_ammo_rpg75_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags="128+256+512";
		model="rhsgref\addons\rhsgref_weapons2\rpg75\rhs_rpg75_projectile";
		submunitionAmmo="rhs_ammo_rpg75_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		cost=100;
		hit=200;
		indirectHit=10;
		indirectHitRange=1;
		explosive=0.34999999;
		caliber=0.1;
		airFriction=0.63999999;
		sideAirFriction=9.9999997e-006;
		simulationStep=0.0099999998;
		maxSpeed=189;
		initTime=0;
		thrustTime=0;
		thrust=0;
		fuseDistance=5;
		visibleFire=28;
		audibleFire=16;
		whistleDist=4;
		timeToLive=6;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="RocketBackEffectsNLAW";
		effectsMissile="missile3";
	};
	class rhs_ammo_rpg75_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=22;
	};
	class rhs_ammo_panzerfaust60_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags="128+256+512";
		model="rhsgref\addons\rhsgref_weapons2\pzf\rhs_pzf60_projectile";
		submunitionAmmo="rhs_ammo_panzerfaust60_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.2};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1000;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		cost=60;
		hit=200;
		indirectHit=10;
		indirectHitRange=1;
		explosive=0.34999999;
		caliber=0.1;
		airFriction=0.60000002;
		sideAirFriction=0.2;
		simulationStep=0.001;
		maxSpeed=189;
		initTime=0;
		thrustTime=0;
		thrust=0;
		fuseDistance=5;
		visibleFire=28;
		audibleFire=16;
		whistleDist=4;
		timeToLive=6;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="RocketBackEffectsNLAW";
		effectsMissile="missile3";
	};
	class rhs_ammo_panzerfaust60_penetrator: rhs_ammo_3bk12_penetrator
	{
		caliber=13.3333;
		submunitionConeType[]=
		{
			"randomcenter",
			45
		};
	};
	class ShellBase;
	class APERSBoundingMine_Range_Ammo;
	class APERSMine_Range_Ammo;
	class rhs_mine_bounding_trigger_base: APERSMine_Range_Ammo
	{
		soundHit1[]={};
		soundHit2[]={};
		multiSoundHit[]={};
		soundTrigger[]={};
		SoundSetExplosion[]={};
		soundActivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Placement_01",
			0.39810699,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersMine_Deactivate_01",
			1.41254,
			1,
			20
		};
		explosionEffects="";
		CraterEffects="";
		deleteParentWhenTriggered=1;
		submunitionConeAngle[]={0,10};
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			1
		};
		submunitionInitSpeed=5;
		mineJumpEffects="MineJumpEffect";
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
	};
	class rhs_mine_smine35_press_ammo: APERSBoundingMine_Range_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_PROJ_PRESS";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_PRESS";
		defaultMagazine="rhs_mine_smine35_press_mag";
		cost=200;
		mineBoundingDist=1.25;
		mineBoundingTime=0.5;
		mineDiveSpeed=1;
		minePlaceDist=0.5;
	};
	class rhs_mine_smine35_trip_ammo: rhs_mine_bounding_trigger_base
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_HELPER_TRIP";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_TRIP";
		defaultMagazine="rhs_mine_smine35_trip_mag";
		cost=200;
		mineTrigger="rhsgref_sMine_tripwire_trigger";
		minePlaceDist=0.5;
		submunitionAmmo[]=
		{
			"rhs_mine_smine35_trip_explo_ammo",
			1
		};
		submunitionInitSpeed=4;
	};
	class rhs_mine_smine35_trip_explo_ammo: ShellBase
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_SUBMUNITION_TRIP";
		explosionTime=0.3125;
		hit=20;
		indirectHit=20;
		indirectHitRange=20;
	};
	class rhs_mine_smine44_trip_ammo: rhs_mine_smine35_trip_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_HELPER_TRIP";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_TRIP";
		defaultMagazine="rhs_mine_smine44_trip_mag";
		submunitionAmmo[]=
		{
			"rhs_mine_smine44_trip_explo_ammo",
			1
		};
	};
	class rhs_mine_smine44_trip_explo_ammo: rhs_mine_smine35_trip_explo_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_SUBMUNITION_TRIP";
		explosionTime=0.25;
		hit=20;
		indirectHit=20;
		indirectHitRange=20;
	};
	class rhs_mine_smine44_press_ammo: APERSBoundingMine_Range_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_PROJ_PRESS";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_PRESS";
		defaultMagazine="rhs_mine_smine44_press_mag";
		mineTrigger="rhsgref_pressure_trigger";
		cost=200;
		mineBoundingDist=0.91439998;
		mineBoundingTime=0.5;
		mineDiveSpeed=1;
		minePlaceDist=0.5;
	};
	class rhs_mine_m2a3b_press_ammo: rhs_mine_bounding_trigger_base
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_PRESSURE";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_DISABLED";
		defaultMagazine="rhs_mine_m2a3b_press_mag";
		cost=200;
		minePlaceDist=0.5;
		mineTrigger="rhsgref_pressure_trigger";
		soundActivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Placement_01",
			1,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Deactivate_01",
			1.99526,
			1,
			20
		};
		soundTrigger[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersBoundingMine_Trigger_01",
			3.98107,
			1,
			20
		};
		deleteParentWhenTriggered=1;
		submunitionAmmo[]=
		{
			"rhs_mine_m2a3b_explo_ammo",
			1
		};
		submunitionConeAngle[]={0,10};
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			1
		};
		submunitionInitSpeed=5;
		explosionEffects="BoundingMineExplosion";
	};
	class rhs_mine_m2a3b_trip_ammo: rhs_mine_m2a3b_press_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_TRIPWIRE";
		defaultMagazine="rhs_mine_m2a3b_trip_mag";
		mineTrigger="rhsgref_M2A3_tripwire_trigger";
	};
	class rhs_mine_m2a3b_explo_ammo: ShellBase
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_SUBMUNITION";
		explosionTime=0.40000001;
		hit=15;
		indirectHit=15;
		indirectHitRange=10;
	};
	class rhs_mine_glasmine43_hz_ammo: APERSMine_Range_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_DISABLED";
		defaultMagazine="rhs_mine_glasmine43_hz_mag";
		cost=200;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class rhs_mine_glasmine43_bz_ammo: rhs_mine_glasmine43_hz_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_DISABLED";
		defaultMagazine="rhs_mine_glasmine43_bz_mag";
	};
	class rhs_mine_a200_bz_ammo: APERSMine_Range_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_BZ_HELPER";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DISABLED";
		defaultMagazine="rhs_mine_a200_bz_mag";
		cost=200;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class rhs_mine_a200_dz35_ammo: rhs_mine_a200_bz_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DZ35_HELPER";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DISABLED";
		defaultMagazine="rhs_mine_a200_dz35_mag";
	};
	class rhs_mine_M3_pressure_ammo: APERSMine_Range_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_DISABLED";
		defaultMagazine="rhs_mine_m3_pressure_mag";
		cost=200;
		hit=20;
		indirectHit=20;
		IndirecthitRange=10;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class rhs_mine_Mk2_pressure_ammo: APERSMine_Range_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_DISABLED";
		defaultMagazine="rhs_mine_mk2_pressure_mag";
		cost=200;
		hit=8;
		indirectHit=8;
		IndirecthitRange=6;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class rhs_mine_M7A2_ammo: APERSMine_Range_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_HELPER_SURFACE";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_DISABLED";
		defaultMagazine="rhs_mine_M7A2_mag";
		cost=200;
		hit=852;
		indirectHit=852;
		indirectHitRange=3;
		mineTrigger="rhsgref_pressure_trigger";
	};
	class APERSTripMine_Wire_Ammo;
	class rhs_mine_stockmine43_2m_ammo: APERSTripMine_Wire_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_2M";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_DISABLED_2M";
		defaultMagazine="rhs_mine_stockmine43_2m_mag";
		cost=200;
		hit=8;
		indirectHit=8;
		indirectHitRange=4;
		mineTrigger="rhsgref_StMi43_2m_tripwire_trigger";
	};
	class rhs_mine_stockmine43_4m_ammo: rhs_mine_stockmine43_2m_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_4M";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_DISABLED_4M";
		defaultMagazine="rhs_mine_stockmine43_4m_mag";
		mineTrigger="rhsgref_StMi43_4m_tripwire_trigger";
	};
	class rhs_mine_M3_tripwire_ammo: rhs_mine_M3_pressure_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_DISABLED";
		defaultMagazine="rhs_mine_M3_tripwire_mag";
		mineTrigger="rhsgref_Mk2_tripwire_trigger";
	};
	class rhs_mine_Mk2_tripwire_ammo: rhs_mine_Mk2_pressure_ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_DISABLED";
		defaultMagazine="rhs_mine_Mk2_tripwire_mag";
		mineTrigger="rhsgref_Mk2_tripwire_trigger";
	};
	class ATMine_Range_Ammo;
	class rhs_mine_TM43_ammo: ATMine_Range_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43_proj";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43";
		defaultMagazine="rhs_mine_TM43_mag";
	};
	class DemoCharge_Remote_Ammo;
	class rhs_charge_tnt_x2_ammo: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\TNT_BLOCK_x2\TNT_BLOCK_x2_HELPER";
		explosionTime=4.5;
		hit=210;
		indirectHit=170;
		IndirecthitRange=3;
		defaultMagazine="rhs_charge_tnt_x2_mag";
	};
	class rhs_charge_sb3kg_ammo: GrenadeHand
	{
		model="\rhsgref\addons\rhsgref_weapons2\grenades\Sprengbuechse3kg\SB3kg_proj";
		explosionTime=5;
		hit=210;
		indirectHit=300;
		IndirecthitRange=10;
		defaultMagazine="rhs_charge_sb3kg_mag";
	};
	class rhs_charge_M2tet_x2_ammo: DemoCharge_Remote_Ammo
	{
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_HELPER";
		mineModelDisabled="\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_ITEM";
		defaultMagazine="rhs_charge_M2tet_x2_mag";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class rhs_mag_m1garand_ads: CA_Magazine
	{
		scope=1;
		count=1;
		mass=0;
		picture="\A3\Weapons_F\Data\clear_empty.paa";
	};
	class rhs_mag_762x25_8: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		type=16;
		displayName="$STR_RHS_CFGMAGAZINES_8RND_762X25_MAG_TT33";
		descriptionShort="$STR_RHS_CFGMAGAZINES_8RND_762X25_TT33_MAG_Desc_0";
		picture="\rhsafrf\addons\rhs_weapons\icons\Pya_mag_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_pya_mag";
		ammo="rhs_ammo_762x25_Ball";
		count=8;
		initSpeed=450;
		mass=4.29;
	};
	class rhs_mag_6x8mm_mhp: CA_Magazine
	{
		scope=2;
		type=16;
		displayName="$STR_RHS_CFGMAGAZINES_6RND_8X22_MAG_NAMBU";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_type94mag_01_ca.paa";
		ammo="rhs_ammo_8mm_mhp";
		count=6;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_RHSUSF_7RND_45ACP_DESCRIPTION_SHORT";
		model="rhsgref\addons\rhsgref_weapons2\magazines\rhs_type94_mag.p3d";
	};
	class rhsgref_30rnd_1143x23_M1911B_SMG: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		type=16;
		displayName="$STR_RHSGREF_MAG_45ACP_M1911_30RND_SMG";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m3a1mag_01_ca.paa";
		ammo="rhs_ammo_45ACP_MHP";
		count=30;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort=".45ACP ball rounds in 30Rnd magazine.";
		model="\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m3a1_mag.p3d";
		modelSpecial="rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_1143x23_m3_30rnd";
		modelSpecialIsProxy=1;
		mass=17.469999;
	};
	class rhsgref_30rnd_1143x23_M1911B_2mag_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_45ACP_M1911_30RND_2MAG_SMG";
		model="\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m3a1_junglemag.p3d";
		modelSpecial="rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_1143x23_m3x2_30rnd";
	};
	class rhsgref_30rnd_1143x23_M1T_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_45ACP_M1T_30RND_SMG";
		ammo="rhs_ammo_45ACP_MHPT_Orange";
		tracersEvery=1;
		descriptionShort=".45ACP tracer rounds in 30Rnd magazine.";
	};
	class rhsgref_30rnd_1143x23_M1T_2mag_SMG: rhsgref_30rnd_1143x23_M1T_SMG
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_45ACP_M1T_30RND_2MAG_SMG";
		model="\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m3a1_junglemag.p3d";
		modelSpecial="rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_1143x23_m3x2_30rnd";
	};
	class rhsgref_20rnd_1143x23_M1911B_SMG: rhsgref_30rnd_1143x23_M1911B_SMG
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_45ACP_M1911_20RND_SMG";
		count=20;
		descriptionShort=".45ACP ball rounds in 20Rnd magazine.";
	};
	class rhsgref_20rnd_1143x23_M1T_SMG: rhsgref_30rnd_1143x23_M1T_SMG
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_45ACP_M1T_20RND_SMG";
		count=20;
		descriptionShort=".45ACP tracer rounds in 20Rnd magazine.";
	};
	class rhsgref_20rnd_765x17_vz61: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		mass=5.5;
		scope=2;
		displayName="$STR_RHSGREF_20RND_765X17_VZ61_DISPLAYNAME";
		descriptionShort="$STR_RHSGREF_20RND_765X17_VZ61_DESCRIPTIONSHORT";
		picture="\rhsgref\addons\rhsgref_weapons\icons\m_sa61_20rnd_icon_ca.paa";
		ammo="rhs_ammo_9x17";
		count=20;
		initSpeed=320;
		model="\rhsgref\addons\rhsgref_weapons\magazines\rhs_20rnd_scorpion_mag";
		modelSpecial="rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_765x17_vz61_20rnd";
		modelSpecialIsProxy=1;
	};
	class rhsgref_10rnd_765x17_vz61: rhsgref_20rnd_765x17_vz61
	{
		author="$STR_RHS_AUTHOR_FULL";
		count=10;
		mass=3.5;
		displayName="$STR_RHSGREF_10RND_765X17_VZ61_DISPLAYNAME";
		descriptionShort="$STR_RHSGREF_10RND_765X17_VZ61_DESCRIPTIONSHORT";
		picture="\rhsgref\addons\rhsgref_weapons\icons\m_sa61_10rnd_icon_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons\magazines\rhs_10rnd_scorpion_mag";
		modelSpecial="rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_765x17_vz61_10rnd";
	};
	class rhsgref_30rnd_556x45_m21: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="30rnd M21 M855";
		picture="\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";
		ammo="rhs_ammo_556x45_M855_Ball";
		mass=10.35;
		count=30;
		initSpeed=925;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="Used to shoot 5.56 bullets";
		magazineGroup[]=
		{
			"rhs_m21_mag_group"
		};
		model="\rhsgref\addons\rhsgref_weapons\magazines\rhs_30rnd_m21_mag";
	};
	class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21
	{
		tracersEvery=1;
		lastRoundsTracer=30;
		displayName="30rnd M21 M856A1 (Tracer)";
		descriptionShort="Used to shoot 5.56 tracer bullets";
		displaynameshort="Tracers";
		magazineGroup[]=
		{
			"rhs_m21_mag_group"
		};
	};
	class rhsgref_30rnd_556x45_vhs2: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="30rnd VHS-2 M855A1";
		displaynameshort="M855A1";
		picture="\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";
		ammo="rhs_ammo_556x45_M855A1_Ball";
		mass=7.6999998;
		count=30;
		initSpeed=910;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="Used to shoot 5.56 bullets";
		magazineGroup[]=
		{
			"rhs_vhs2_mag_group"
		};
		model="\rhsgref\addons\rhsgref_weapons\magazines\rhs_30rnd_vhs2_mag";
		modelSpecial="\rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_556x45_vhs2_30rnd";
		modelSpecialIsProxy=1;
	};
	class rhsgref_30rnd_556x45_vhs2_t: rhsgref_30rnd_556x45_vhs2
	{
		tracersEvery=1;
		lastRoundsTracer=30;
		displayName="30rnd VHS-2 M856A1 (Tracer)";
		descriptionShort="Used to shoot 5.56 tracer bullets";
		displaynameshort="Tracers";
		magazineGroup[]=
		{
			"rhs_vhs2_mag_group"
		};
	};
	class rhsgref_5Rnd_792x57_kar98k: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHSGREF_5RND_792X57_KAR98K_DISPLAYNAME";
		model="\rhsgref\addons\rhsgref_weapons\kar98k\792x57clip";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo="rhs_ammo_792x57_Ball";
		count=5;
		initSpeed=869;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_RHSGREF_5RND_792X57_KAR98K_DESCRIPTIONSHORT";
		mass=2.97;
	};
	class rhsgref_10Rnd_792x57_m76: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="10rnd M76 7.9x57mm M75";
		picture="\rhsgref\addons\rhsgref_weapons\icons\m_m76mag_icon_ca.paa";
		ammo="rhs_ammo_792x57_Ball";
		count=10;
		initSpeed=730;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="Used to shoot 7.92 bullets";
		magazineGroup[]=
		{
			"rhs_m76_mag_group"
		};
		mass=6.9400001;
		model="\rhsgref\addons\rhsgref_weapons\magazines\rhs_10rnd_m76_mag";
	};
	class rhsgref_5Rnd_762x54_m38: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHSGREF_5RND_762X54_M38_DISPLAYNAME";
		model="\rhsgref\addons\rhsgref_weapons\m38\762x54clip";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo="rhs_B_762x54_Ball";
		count=5;
		initSpeed=823;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_RHSGREF_5RND_762X54_M38_DESCRIPTIONSHORT";
		mass=2.6400001;
	};
	class rhs_30Rnd_762x39mm;
	class rhs_30Rnd_762x39mm_Savz58: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		mass=13.53;
		picture="\rhsafrf\addons\rhs_weapons\gear_mags\rhs_gear_mag_762x39_ak_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons\magazines\rhs_savz58_762_mag";
		ammo="rhs_B_762x39_Ball";
		count=30;
		initSpeed=718;
		displayName="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_VZ58";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_VZ58_MAG_Desc_0";
	};
	class rhs_30Rnd_762x39mm_tracer;
	class rhs_30Rnd_762x39mm_Savz58_tracer: rhs_30Rnd_762x39mm_tracer
	{
		author="$STR_RHS_AUTHOR_FULL";
		model="\rhsgref\addons\rhsgref_weapons\magazines\rhs_savz58_762_mag";
		tracersEvery=1;
		ammo="rhs_B_762x39_Tracer";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_VZ58_TRACER";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_VZ58_MAG_Desc_2";
	};
	class rhsgref_24rnd_75x55_Stgw57: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="24Rnd Stgw 57 7.5x55mm";
		picture="\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";
		ammo="rhs_ammo_75x55_Ball";
		mass=7.6999998;
		count=24;
		initSpeed=750;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="Caliber: 7.5x55mm Tracer&lt;br /&gt;Rounds: 24&lt;br /&gt;Used in: Stgw 57";
	};
	class rhsgref_8Rnd_762x63_M2B_M1rifle: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHSGREF_MAG_30CAL_M2_8RND_M1R";
		displayNameShort="M2 Ball";
		model="\rhsgref\addons\rhsgref_weapons2\magazines\rhs_m1garand_clip";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo="rhs_ammo_762x63_M2B_ball";
		count=8;
		initSpeed=770;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort=".30-06 ball rounds in 8Rnd en bloc clip.";
		mass=5.2800002;
		modelSpecial="rhsgref\addons\rhsgref_weapons2\mag_proxies\rhs_mag_762x63_m1clip_8rnd";
		modelSpecialIsProxy=1;
	};
	class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhsgref_8Rnd_762x63_M2B_M1rifle
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_30CAL_M1T_8RND_M1R";
		displayNameShort="M1 Tracer";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo="rhs_ammo_762x63_M1T_tracer";
		initSpeed=770;
		tracersEvery=1;
		lastRoundsTracer=0;
		descriptionShort=".30-06 tracer rounds in 8Rnd en bloc clip.";
		mass=5.2800002;
	};
	class rhsgref_30Rnd_792x33_SmE_StG: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		displayName="$STR_RHSGREF_MAG_792_SME_30RND_StG";
		model="\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mp44_mag";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo="rhs_ammo_792x33_SmE_ball";
		count=30;
		initSpeed=685;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="7.92x33 ball rounds in a 30Rnd StG magazine.";
		mass=11.66;
	};
	class rhsgref_25Rnd_792x33_SmE_StG: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		displayName="$STR_RHSGREF_MAG_792_SME_25RND_StG";
		model="\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mp44_mag";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo="rhs_ammo_792x33_SmE_ball";
		count=25;
		initSpeed=685;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="7.92x33 ball rounds in a 25Rnd StG magazine.";
		mass=11.66;
	};
	class rhsgref_50Rnd_792x57_SmE_drum: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		displayName="$STR_RHSGREF_MAG_792_SME_50RND_DRUM";
		model="\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mg42_50rnd_drum";
		modelSpecial="rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_drum_50rnd";
		modelSpecialIsProxy=1;
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_drum_mag_ca.paa";
		ammo="rhs_ammo_792x57_Ball";
		count=50;
		initSpeed=770;
		tracersEvery=5;
		lastRoundsTracer=0;
		descriptionShort="7.92x57 ball rounds rounds in a 50Rnd drum, with a daytime tracer every 5 rounds.";
		mass=17.799999;
	};
	class rhsgref_50Rnd_792x57_SmE_notracers_drum: rhsgref_50Rnd_792x57_SmE_drum
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_792_SME_50RND_DRUM_NOTRACERS";
		tracersEvery=0;
		descriptionShort="7.92x57 rounds in a 50Rnd drum. There are no tracers in the belts.";
	};
	class rhsgref_50Rnd_792x57_SmK_drum: rhsgref_50Rnd_792x57_SmE_drum
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_792_SMK_50RND_DRUM";
		ammo="rhs_ammo_792x57_Ball";
		initSpeed=798;
		tracersEvery=5;
		descriptionShort="7.92x57 hardened steel ball rounds in a 50Rnd drum, with a daytime tracer every 5 rounds.";
	};
	class rhsgref_50Rnd_792x57_SmK_alltracers_drum: rhsgref_50Rnd_792x57_SmK_drum
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_792_SMK_50RND_DRUM_ALLTRACERS";
		tracersEvery=1;
		descriptionShort="7.92x57 hardened steel ball daytime tracer rounds in a 50Rnd drum.";
	};
	class rhsgref_296Rnd_792x57_SmE_belt: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeCurator=2;
		displayName="$STR_RHSGREF_MAG_792_SME_296RND_BELT";
		model="\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mg42_loose_belt";
		modelSpecial="rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd";
		modelSpecialIsProxy=1;
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_drum_mag_ca.paa";
		ammo="rhs_ammo_792x57_Ball";
		count=296;
		initSpeed=770;
		tracersEvery=5;
		lastRoundsTracer=0;
		descriptionShort="7.92x57 ball rounds rounds in a loose 296Rnd belt, with a daytime tracer every 5 rounds.";
		mass=105.5;
	};
	class rhsgref_296Rnd_792x57_SmE_notracers_belt: rhsgref_296Rnd_792x57_SmE_belt
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_792_SME_296RND_BELT_NOTRACERS";
		tracersEvery=0;
		descriptionShort="7.92x57 rounds in a loose 296Rnd belt. There are no tracers in the belt.";
	};
	class rhsgref_296Rnd_792x57_SmK_belt: rhsgref_296Rnd_792x57_SmE_belt
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_792_SMK_296RND_BELT";
		ammo="rhs_ammo_792x57_Ball";
		initSpeed=798;
		tracersEvery=5;
		descriptionShort="7.92x57 hardened steel ball rounds in a 296Rnd belt, with a daytime tracer every 5 rounds.";
	};
	class rhsgref_296Rnd_792x57_SmK_alltracers_belt: rhsgref_296Rnd_792x57_SmK_belt
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_MAG_792_SMK_296RND_BELT_ALLTRACERS";
		tracersEvery=1;
		descriptionShort="7.92x57 hardened steel ball daytime tracer rounds in a 296Rnd belt.";
	};
	class HandGrenade;
	class rhs_mag_f1: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_f1";
		displayName="$STR_RHS_F1_NAME";
		displayNameShort="F1 grenade";
		descriptionshort="$STR_RHS_F1_DES";
		picture="\rhsgref\addons\rhsgref_weapons\icons\f1_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons\grenades\frag_F1";
		mass=13.2;
	};
	class rhsgref_mag_rkg3em: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhsgref_ammo_rkg3em";
		displayName="$STR_RHS_RKG3EM_NAME";
		displayNameShort="$STR_RHS_RKG3EM_NAME";
		descriptionshort="$STR_RHS_RKG3EM_DES";
		picture="\rhsgref\addons\rhsgref_weapons\icons\rkg3em_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons\rkg_3em\rkg_3em";
		mass=23.540001;
		initSpeed=15;
	};
	class rhs_grenade_m1939e_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_m1939e_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m39grenade_e_ca.paa";
		displayName="Ei.Hgr.39 Concussive (Early)";
		displayNameShort="M.39";
		descriptionShort="Early Model 1939 Eihandgranate Concussive Grenade. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M39\m39early";
		deflecting=60;
		initSpeed=20;
		mass=7.48;
	};
	class rhs_grenade_m1939l_mag: rhs_grenade_m1939e_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_m1939l_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m39grenade_l_ca.paa";
		displayName="Ei.Hgr.39 Concussive (Late)";
		displayNameShort="M.39";
		descriptionShort="Late Production Model 1939 Eihandgranate Concussive Grenade. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M39\m39late";
	};
	class rhs_grenade_m1939e_f_mag: rhs_grenade_m1939e_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_m1939e_f_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m39grenade_efrag_ca.paa";
		displayName="Ei.Hgr.39 Fragmentation (Early)";
		displayNameShort="M.39 Frag";
		descriptionShort="Early Production Model 1939 Eihandgranate Concussive Grenade with Fragmentation Sleeve. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M39\m39early_f";
	};
	class rhs_grenade_m1939l_f_mag: rhs_grenade_m1939e_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_m1939l_f_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m39grenade_lfrag_ca.paa";
		displayName="Ei.Hgr.39 Fragmentation (Late)";
		displayNameShort="M.39 Frag";
		descriptionShort="Late Production Model 1939 Eihandgranate Concussive Grenade with Fragmentation Sleeve. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M39\m39late_f";
	};
	class SmokeShell;
	class rhs_grenade_nbhgr39_mag: SmokeShell
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_nbhgr39_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39_ca.paa";
		displayName="Nb.Hgr.39 (Early)";
		displayNameShort="M.39 Smoke";
		descriptionShort="Early Production Model 39 smoke stick grenade. The fuze has a timer of 7 seconds before igniting the smoke.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\NM39\nm39_early";
		initSpeed=17;
		mass=13.09;
	};
	class rhs_grenade_nbhgr39B_mag: rhs_grenade_nbhgr39_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_nbhgr39B_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName="Nb.Hgr.39B (Late)";
		displayNameShort="M.39 Smoke";
		descriptionShort="Late Production Model 39B smoke grenade. The fuze has a timer of 4-5 seconds before igniting the smoke.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\NM39\nm39_late";
		mass=10;
	};
	class rhs_grenade_sthgr24_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_sthgr24_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName="St.Hgr.24";
		displayNameShort="M.24";
		descriptionShort="Late Production Model 24 stick grenade. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M24\m24late";
		initSpeed=18;
		mass=13.09;
	};
	class rhs_grenade_sthgr24_heerfrag_mag: rhs_grenade_sthgr24_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_sthgr24_heerfrag_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName="St.Hgr.24 Fragmentation (Heer)";
		displayNameShort="M.24 Frag";
		descriptionShort="Late Production Model 24 stick grenade with a Heer fragmentation sleeve. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M24\m24late_heer";
	};
	class rhs_grenade_sthgr24_SSfrag_mag: rhs_grenade_sthgr24_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_sthgr24_ssfrag_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName="St.Hgr.24 Fragmentation (SS)";
		displayNameShort="M.24 Frag";
		descriptionShort="Late Production Model 24 stick grenade with a SS fragmentation sleeve. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M24\m24late_ss";
	};
	class rhs_grenade_sthgr24_x7bundle_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_sthgr24_x7bundle_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_nbhgr39b_ca.paa";
		displayName="St.Hgr.24 x7 Bundle";
		displayNameShort="M.24 x7";
		descriptionShort="Seven Late Production Model 24 stick grenade bound together into a single charge. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M24\m24late_bundle";
		initSpeed=11;
		mass=50;
	};
	class rhs_grenade_sthgr43_mag: rhs_grenade_sthgr24_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_sthgr43_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m43grenade_ca.paa";
		displayName="St.Hgr.43";
		displayNameShort="M.43";
		descriptionShort="Late Production Model 24 stick grenade. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M43\m43";
	};
	class rhs_grenade_sthgr43_heerfrag_mag: rhs_grenade_sthgr24_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_sthgr43_heerfrag_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m43grenade_heerfrag_ca.paa";
		displayName="St.Hgr.43 Fragmentation (Heer)";
		displayNameShort="M.43 Frag";
		descriptionShort="Late Production Model 43 stick grenade with a Heer fragmentation sleeve. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M43\m43_heer";
	};
	class rhs_grenade_sthgr43_SSfrag_mag: rhs_grenade_sthgr24_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_sthgr43_ssfrag_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m43grenade_ssfrag_ca.paa";
		displayName="St.Hgr.43 Fragmentation (SS)";
		displayNameShort="M.43 Frag";
		descriptionShort="Late Production Model 43 stick grenade with a SS fragmentation sleeve. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\M43\m43_ss";
	};
	class rhs_grenade_mkii_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_mkii_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkii_ca.paa";
		displayName="Mk 2 Fragmentation";
		displayNameShort="Mk 2 Frag";
		descriptionShort="Mk 2 fragmentation grenade. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\mk_ii";
		mass=13.09;
	};
	class rhs_grenade_mkiiia1_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_mkiiia1_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkiii_ca.paa";
		displayName="Mk 3A1 Concussion";
		displayNameShort="Mk 3A1 Off.";
		descriptionShort="Mk 3 A1 offensive concussion grenade. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\mk_iii";
		initSpeed=22;
		mass=6.8860002;
	};
	class rhs_grenade_anm8_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_anm8_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m8_ca.paa";
		displayName="M8 Smoke Grenade";
		displayNameShort="M8 Smoke";
		descriptionShort="M8 smoke grenade. The fuze ignites with a delay of 1-2 seconds and burns for about 1 minute.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\M8";
		mass=12;
	};
	class rhs_grenade_m15_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_m15_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m15_ca.paa";
		displayName="M15 WP Grenade";
		displayNameShort="M15 WP";
		descriptionShort="M15 bursting white phosphorus grenade. The fuze has a timer of 4-5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\M15";
		mass=19;
	};
	class rhs_grenade_mki_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_grenade_mki_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mki_ca.paa";
		displayName="Mk 1 Illumination";
		displayNameShort="Mk 1";
		descriptionShort="Mk 1 illumination grenade. The fuze has a timer of 5 seconds.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\US\mk_i";
		initSpeed=22;
		mass=4;
	};
	class rhsgref_1Rnd_00Buck: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="1Rnd 00 Buckshot";
		displayNameShort="Buckshot";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 1<br />Used in: IZh-18";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_12g_buck.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_buckshot_single";
		modelSpecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_buckshot_1rnd.p3d";
		modelSpecialIsProxy=1;
		ammo="rhs_ammo_12g_00buckshot";
		count=1;
		mass=1;
		deleteIfEmpty=0;
		initSpeed=336;
	};
	class rhsgref_1Rnd_Slug: rhsgref_1Rnd_00Buck
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="1Rnd 12g Slug";
		displayNameShort="Slug";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_12g_slug.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_slug_single";
		modelSpecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_slug_1rnd.p3d";
		modelSpecialIsProxy=1;
		ammo="rhs_ammo_12g_slug";
		initSpeed=395;
	};
	class FakeMagazine;
	class rhs_rpg75_mag: FakeMagazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		allowedSlots[]={701,901};
		scope=1;
		scopeArsenal=0;
		displayName="RPG-75";
		displayNameShort="AT";
		descriptionShort="$STR_RHS_RPG26_DES";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_rpg75_mag_ca.paa";
		model="\A3\weapons_f\empty";
		ammo="rhs_ammo_rpg75_rocket";
		type="6 * 256";
		initSpeed=189;
		mass=17.6;
	};
	class rhs_panzerfaust60_mag: FakeMagazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		allowedSlots[]={701,901};
		scope=1;
		scopeArsenal=0;
		displayName="Panzerfaust 60";
		displayNameShort="AT";
		descriptionShort="HEAT";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_rpg75_mag_ca.paa";
		model="\A3\weapons_f\empty";
		ammo="rhs_ammo_panzerfaust60_rocket";
		type="6 * 256";
		initSpeed=45;
		mass=3;
	};
	class APERSBoundingMine_Range_Mag;
	class rhs_mine_smine35_press_mag: APERSBoundingMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_smine35_press_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_smine35_ca.paa";
		displayName="S.Mi.35 (S.Mi.Z.35) APB Mine";
		displayNameShort="S.Mi.35";
		descriptionShort="Schrapnellmine 35 Bounding Anti-Personnel Mine with S.Mi.Z.35 pressure igniter.";
		mass=80;
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_PRESS";
	};
	class rhs_mine_smine35_trip_mag: rhs_mine_smine35_press_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_smine35_trip_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_smine35_trip_ca.paa";
		displayName="S.Mi.35 (W) APB Mine";
		displayNameShort="S.Mi.35";
		descriptionShort="Schrapnellmine 35 Bounding Anti-Personnel Mine with W adapter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_ITEM_TRIP";
	};
	class rhs_mine_smine44_trip_mag: APERSBoundingMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_smine44_trip_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_smine44_trip_ca.paa";
		displayName="S.Mi.44 (S.Mi.Z.44) APB Mine";
		displayNameShort="S.Mi.44";
		descriptionShort="Schrapnellmine 44 Bounding Anti-Personnel Mine with S.Mi.Z.44 dual-tripwire igniter.";
		mass=80;
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_TRIP";
	};
	class rhs_mine_smine44_press_mag: rhs_mine_smine44_trip_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_smine44_press_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_smine44_ca.paa";
		displayName="S.Mi.44 (S.Mi.Z.35) APB Mine";
		displayNameShort="S.Mi.44";
		descriptionShort="Schrapnellmine 44 Bounding Anti-Personnel Mine with S.Mi.Z.35 pressure igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_ITEM_PRESS";
	};
	class rhs_mine_m2a3b_press_mag: APERSBoundingMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_m2a3b_press_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2a3b_ca.paa";
		displayName="M2A3B APB Mine";
		displayNameShort="M2A3B";
		descriptionShort="M2A3B Bounding Anti-Personnel Mine with M6 pressure-configured igniter.";
		mass=40;
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_ITEM";
	};
	class rhs_mine_m2a3b_trip_mag: rhs_mine_m2a3b_press_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_m2a3b_trip_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2a3b_trip_ca.paa";
		displayName="M2A3B (Tripwire) APB Mine";
		displayNameShort="M2A3B";
		descriptionShort="M2A3B Bounding Anti-Personnel Mine with M6 tripwire-configured igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_ITEM";
	};
	class APERSMine_Range_Mag;
	class rhs_mine_glasmine43_hz_mag: APERSMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_glasmine43_hz_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_glasmine43_hz_ca.paa";
		displayName="Gl.Mi.43 (H.Z.44) AP Mine";
		displayNameShort="Gl.Mi.43";
		descriptionShort="Glasmine 43 Anti-Personnel Mine with Hebelzünder 44 pressure igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HZ_ITEM";
		mass=26.4;
	};
	class rhs_mine_glasmine43_bz_mag: rhs_mine_glasmine43_hz_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_glasmine43_bz_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_glasmine43_b_ca.paa";
		displayName="Gl.Mi.43 (B.Z.) AP Mine";
		displayNameShort="Gl.Mi.43";
		descriptionShort="Glasmine 43 Anti-Personnel Mine with Bück chemical pressure igniter. Undetectable by metal detectors.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_BZ_ITEM";
	};
	class rhs_mine_a200_bz_mag: APERSMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_a200_bz_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_a200_bz_ca.paa";
		displayName="Beh.Schu.Mi.A200 (B.Z.) AP Mine";
		displayNameShort="A200";
		descriptionShort="A200 Anti-Personnel Mine with Bück chemical pressure igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_BZ_ITEM";
		mass=25;
		maxLeadSpeed=0;
		maxThrowHoldTime=2;
		maxThrowIntensityCoef=1.4;
		minThrowIntensityCoef=0.30000001;
	};
	class rhs_mine_a200_dz35_mag: rhs_mine_a200_bz_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_a200_dz35_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_a200_dz35_ca.paa";
		displayName="Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
		displayNameShort="A200";
		descriptionShort="A200 Anti-Personnel Mine with D.Z.35 pressure igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DZ35_ITEM";
	};
	class rhs_mine_m3_pressure_mag: APERSMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_M3_pressure_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m3_ca.paa";
		displayName="M3 AP Mine";
		displayNameShort="M3";
		descriptionShort="M3 Anti-Personnel Mine with M7 pressure-configured igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_ITEM";
		mass=60;
		maxLeadSpeed=0;
		maxThrowHoldTime=2;
		maxThrowIntensityCoef=1.4;
		minThrowIntensityCoef=0.30000001;
	};
	class rhs_mine_mk2_pressure_mag: APERSMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_Mk2_pressure_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkiimine_ca.paa";
		displayName="Mk 2 AP Mine";
		displayNameShort="Mk 2 Mi.";
		descriptionShort="Mk 2 Grenade with M6 pressure-configured igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_ITEM";
		mass=13.09;
	};
	class rhs_mine_M7A2_mag: APERSMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_M7A2_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m7a2_ca.paa";
		displayName="M7A2 AP Mine";
		displayNameShort="M7A2";
		descriptionShort="M7A2 Anti-Personnel Mine with M602 chemical igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_ITEM";
		mass=48.400002;
	};
	class APERSTripMine_Wire_Mag;
	class rhs_mine_stockmine43_2m_mag: APERSTripMine_Wire_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_stockmine43_2m_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_stmi43_2m.paa";
		displayName="St.Mi.43/I (2m) AP Mine";
		displayNameShort="St.Mi.43 (2m)";
		descriptionShort="Stockmine 43/I Anti-Personnel Mine with Z.Z.42 pull igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_ITEM_2M";
		mass=44;
	};
	class rhs_mine_stockmine43_4m_mag: rhs_mine_stockmine43_2m_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_stockmine43_4m_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_stmi43_4m.paa";
		displayName="St.Mi.43/II (4m) AP Mine";
		displayNameShort="St.Mi.43 (4m)";
		descriptionShort="Stockmine 43/II Anti-Personnel Mine with Z.Z.42 pull igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_ITEM_4M";
	};
	class rhs_mine_M3_tripwire_mag: APERSTripMine_Wire_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_M3_tripwire_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m3_trip_ca.paa";
		displayName="M3 (Tripwire) AP Mine";
		displayNameShort="M3";
		descriptionShort="M3 Anti-Personnel Mine with M7 tripwire-configured igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M3_ITEM";
		mass=60;
	};
	class rhs_mine_Mk2_tripwire_mag: APERSTripMine_Wire_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_Mk2_tripwire_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mkiimine_trip_ca.paa";
		displayName="Mk 2 (Tripwire) AP Mine";
		displayNameShort="Mk 2 Mi.";
		descriptionShort="Mk 2 Grenade with M6 tripwire-configured igniter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\MKII_BOOBYTRAP\MKII_TRAP_ITEM";
		mass=13.09;
	};
	class ATMine_Range_Mag;
	class rhs_mine_TM43_mag: ATMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_mine_TM43_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_tmi43_ca.paa";
		displayName="Tellermine 43";
		displayNameShort="T.Mi. 43";
		descriptionShort="Tellermine 43 anti-tank mine.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43";
		mass=100;
	};
	class DemoCharge_Remote_Mag;
	class rhs_charge_tnt_x2_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_charge_tnt_x2_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_compb_ca.paa";
		displayName="TNT Charge (1lb Thrown)";
		displayNameShort="TNT x2";
		descriptionShort="Two .5lb TNT blocks with M1 Fuse Lighter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\TNT_BLOCK_x2\TNT_BLOCK_x2_ITEM";
		initSpeed=18;
		mass=10;
	};
	class rhs_charge_sb3kg_mag: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_charge_sb3kg_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2t_ca.paa";
		displayName="Sprengbuechse (3kg)";
		displayNameShort="Sprengbuechse (3kg)";
		descriptionShort="Sprengbuechse 3kg demolition charge.";
		model="\rhsgref\addons\rhsgref_weapons2\grenades\Sprengbuechse3kg\SB3kg";
		initSpeed=10;
		mass=66;
	};
	class rhs_charge_M2tet_x2_mag: DemoCharge_Remote_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		ammo="rhs_charge_M2tet_x2_ammo";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_m2t_ca.paa";
		displayName="Tetrytol Charge (2.5lb Placed)";
		displayNameShort="Tet. x2";
		descriptionShort="Two M2 Tetrytol blocks with M1 Fuse Lighter.";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2_TETRYTOL_x2\M2TET_x2_ITEM";
		mass=25;
	};
	class rhs_mag_20Rnd_762x51_m80_fnfal: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="20rnd FN FAL M80";
		displayNameShort="M80 Ball";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_mag_20Rnd_762x51_m80_fnfal_ca.paa";
		count=20;
		ammo="rhs_ammo_762x51_M80_Ball";
		mass=16.5;
		initSpeed=844;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: FN FAL";
		model="rhsgref\addons\rhsgref_weapons3\magazines\rhs_20rnd_fnfal_mag.p3d";
		modelSpecial="rhsgref\addons\rhsgref_weapons3\mag_proxies\rhs_mag_762x51_fnfal_20rnd";
		modelSpecialIsProxy=1;
	};
	class rhs_mag_20Rnd_762x51_m80a1_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="20rnd FN FAL M80A1 EPR";
		displayNameShort="M80A1 EPR";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
	};
	class rhs_mag_20Rnd_762x51_m62_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="20rnd FN FAL M62 (Tracer)";
		displayNameShort="M62 Tracer";
		ammo="rhs_ammo_762x51_M62_tracer";
		tracersEvery=1;
	};
	class rhs_mag_20Rnd_762x51_m61_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="20rnd FN FAL M61 AP";
		displayNameShort="M61 AP";
		ammo="rhs_ammo_762x51_M61_AP";
	};
	class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="30rnd FN FAL M80";
		scope=1;
		count=30;
		mass=22.24;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 30<br />Used in: FN FAL";
		modelSpecial="rhsgref\addons\rhsgref_weapons3\mag_proxies\rhs_mag_762x51_fnfal_30rnd";
	};
	class rhs_mag_30Rnd_762x51_m80a1_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="30rnd FN FAL M80A1 EPR";
		displayNameShort="M80A1 EPR";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
	};
	class rhs_mag_30Rnd_762x51_m62_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="30rnd FN FAL M62 (Tracer)";
		displayNameShort="M62 Tracer";
		ammo="rhs_ammo_762x51_M62_tracer";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_762x51_m61_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="30rnd FN FAL M61 AP";
		displayNameShort="M61 AP";
		ammo="rhs_ammo_762x51_M61_AP";
	};
};
class CfgMagazineWells
{
	class CBA_762x25_TT
	{
		RHSGREF_Magazines[]=
		{
			"rhs_mag_762x25_8"
		};
	};
	class CBA_32ACP_Vz61
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_20rnd_765x17_vz61",
			"rhsgref_10rnd_765x17_vz61"
		};
	};
	class CBA_45ACP_Grease
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_30rnd_1143x23_M1911B_SMG",
			"rhsgref_30rnd_1143x23_M1T_SMG",
			"rhsgref_30rnd_1143x23_M1911B_2mag_SMG",
			"rhsgref_30rnd_1143x23_M1T_2mag_SMG"
		};
	};
	class CBA_556x45_G36
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_30rnd_556x45_vhs2",
			"rhsgref_30rnd_556x45_vhs2_t"
		};
	};
	class CBA_556x45_M21
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21_t"
		};
	};
	class CBA_75x55_STGW57
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_24rnd_75x55_Stgw57"
		};
	};
	class CBA_762x39_VZ58
	{
		RHSGREF_Magazines[]=
		{
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58_tracer"
		};
	};
	class CBA_762x51_FAL
	{
		RHSGREF_Magazines[]=
		{
			"rhs_mag_20Rnd_762x51_m61_fnfal",
			"rhs_mag_20Rnd_762x51_m62_fnfal",
			"rhs_mag_20Rnd_762x51_m80_fnfal",
			"rhs_mag_20Rnd_762x51_m80a1_fnfal"
		};
	};
	class CBA_762x51_FAL_L
	{
		RHSGREF_Magazines[]=
		{
			"rhs_mag_30Rnd_762x51_m61_fnfal",
			"rhs_mag_30Rnd_762x51_m62_fnfal",
			"rhs_mag_30Rnd_762x51_m80_fnfal",
			"rhs_mag_30Rnd_762x51_m80a1_fnfal"
		};
	};
	class CBA_762x54R_Mosin
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_5Rnd_762x54_m38"
		};
	};
	class CBA_792x33_StG
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_30Rnd_792x33_SmE_StG",
			"rhsgref_25Rnd_792x33_SmE_StG"
		};
	};
	class CBA_792x57_K98
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_5Rnd_792x57_kar98k"
		};
	};
	class CBA_792x57_M76
	{
		RHSGREF_Magazines[]=
		{
			"rhsgref_10Rnd_792x57_m76"
		};
	};
};
class CfgVehicles
{
	class Box_Syndicate_Wps_F;
	class rhsgref_weapons_crate: Box_Syndicate_Wps_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_CRATE";
		scope=2;
		type=0;
		transportMaxWeapons=70;
		transportMaxMagazines=40;
		class EventHandlers
		{
			init="[_this select 0,0] call rhs_fnc_virtualAmmoBoxGREF;";
		};
		SLX_XEH_DISABLED=1;
		class TransportWeapons;  //found empty after stripping
		class TransportMagazines;  //found empty after stripping
		class TransportItems;  //found empty after stripping
	};
	class Weapon_Base_F;
	class rhs_weapon_base: Weapon_Base_F
	{
		scope=1;
		scopeCurator=1;
		author="$STR_RHS_AUTHOR_FULL";
		vehicleClass="WeaponsPrimary";
	};
	class rhs_weapon_kar98k: rhs_weapon_base
	{
		scope=2;
		scopeCurator=2;
		class TransportWeapons
		{
			class rhs_weap_kar98k
			{
				weapon="rhs_weap_kar98k";
				count=1;
			};
		};
		displayName="$STR_RHS_WEAP_KAR98K_DISPLAYNAME";
		class TransportMagazines
		{
			class rhsgref_5Rnd_792x57_kar98k
			{
				magazine="rhsgref_5Rnd_792x57_kar98k";
				count=1;
			};
		};
	};
	class rhs_weapon_m38: rhs_weapon_base
	{
		scope=2;
		scopeCurator=2;
		class TransportWeapons
		{
			class rhs_weap_m38
			{
				weapon="rhs_weap_m38";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_M38";
		class TransportMagazines
		{
			class rhsgref_5Rnd_762x54_m38
			{
				magazine="rhsgref_5Rnd_762x54_m38";
				count=1;
			};
		};
	};
	class rhs_weapon_m38_rail: rhs_weapon_m38
	{
		class TransportWeapons
		{
			class rhs_weap_m38_rail
			{
				weapon="rhs_weap_m38_rail";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_M38_2";
	};
	class rhs_weapon_mosin_sbr: rhs_weapon_m38
	{
		class TransportWeapons
		{
			class rhs_weap_mosin_sbr
			{
				weapon="rhs_weap_mosin_sbr";
				count=1;
			};
		};
		displayName="Mosin SBR";
	};
	class rhs_weapon_vhsd2: rhs_weapon_base
	{
		scope=2;
		scopeCurator=2;
		class TransportWeapons
		{
			class rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=1;
			};
		};
		displayName="VHS-D2";
		class TransportMagazines
		{
			class rhsgref_30rnd_556x45_vhs2
			{
				magazine="rhsgref_30rnd_556x45_vhs2";
				count=1;
			};
		};
	};
	class rhs_weapon_vhsd2_bg: rhs_weapon_vhsd2
	{
		class TransportWeapons
		{
			class rhs_weap_vhsd2_bg
			{
				weapon="rhs_weap_vhsd2_bg";
				count=1;
			};
		};
		displayName="VHS-D2 (VHS-BG)";
	};
	class rhs_weapon_vhsd2_ct15x: rhs_weapon_vhsd2
	{
		class TransportWeapons
		{
			class rhs_weap_vhsd2_ct15x
			{
				weapon="rhs_weap_vhsd2_ct15x";
				count=1;
			};
		};
		displayName="VHS-D2 (CT-1.5x)";
	};
	class rhs_weapon_vhsd2_bg_ct15x: rhs_weapon_vhsd2
	{
		class TransportWeapons
		{
			class rhs_weap_vhsd2_bg_ct15x
			{
				weapon="rhs_weap_vhsd2_bg_ct15x";
				count=1;
			};
		};
		displayName="VHS-D2 (VHS-BG/CT-1.5x)";
	};
	class rhs_weapon_vhsk2: rhs_weapon_vhsd2
	{
		class TransportWeapons
		{
			class rhs_weap_vhsk2
			{
				weapon="rhs_weap_vhsk2";
				count=1;
			};
		};
		displayName="VHS-K2";
	};
	class rhs_weapon_dsr1: rhs_weapon_base
	{
		scope=1;
		scopeCurator=1;
		class TransportWeapons
		{
			class rhs_weap_dsr1
			{
				weapon="rhs_weap_dsr1";
				count=1;
			};
		};
		displayName="DSR-1";
		class TransportMagazines
		{
			class rhsusf_5Rnd_762x51_m118_special_Mag
			{
				magazine="rhsusf_5Rnd_762x51_m118_special_Mag";
				count=1;
			};
		};
	};
	class rhs_weapon_m70ab2: rhs_weapon_base
	{
		scope=1;
		scopeCurator=1;
		class TransportWeapons
		{
			class rhs_weap_akms
			{
				weapon="rhs_weap_akms";
				count=1;
			};
		};
		displayName="$STR_RHS_WEAP_AKMS";
		class TransportMagazines
		{
			class rhs_30Rnd_762x39mm
			{
				magazine="rhs_30Rnd_762x39mm";
				count=1;
			};
		};
	};
	class rhs_weapon_m70ab2_fold: rhs_weapon_m70ab2
	{
		class TransportWeapons
		{
			class rhs_weap_akms_folded
			{
				weapon="rhs_weap_akms_folded";
				count=1;
			};
		};
		displayName="$STR_RHS_WEAP_AKMS_FOLDED";
	};
	class rhs_weapon_m70b1: rhs_weapon_m70ab2
	{
		class TransportWeapons
		{
			class rhs_weap_akm
			{
				weapon="rhs_weap_akm";
				count=1;
			};
		};
		displayName="$STR_RHS_WEAP_AKM";
	};
	class rhs_weapon_m92: rhs_weapon_m70ab2;  //found empty after stripping
	class rhs_weapon_m92_fold: rhs_weapon_m70ab2
	{
		class TransportWeapons
		{
			class rhs_weap_akms_folded
			{
				weapon="rhs_weap_akms_folded";
				count=1;
			};
		};
		displayName="$STR_RHS_WEAP_AKMS_FOLDED";
	};
	class rhs_weapon_m21a: rhs_weapon_base
	{
		scope=1;
		scopeCurator=1;
		class TransportWeapons
		{
			class rhs_weap_vhsd2
			{
				weapon="rhs_weap_vhsd2";
				count=1;
			};
		};
		displayName="VHS-D2";
		class TransportMagazines
		{
			class rhsgref_30rnd_556x45_vhs2
			{
				magazine="rhsgref_30rnd_556x45_vhs2";
				count=1;
			};
		};
	};
	class rhs_weapon_m21a_pr: rhs_weapon_m21a;  //found empty after stripping
	class rhs_weapon_m21a_fold: rhs_weapon_m21a;  //found empty after stripping
	class rhs_weapon_m21s: rhs_weapon_m21a
	{
		class TransportWeapons
		{
			class rhs_weap_vhsk2
			{
				weapon="rhs_weap_vhsk2";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_M21S";
	};
	class rhs_weapon_m21s_pr: rhs_weapon_m21a
	{
		class TransportWeapons
		{
			class rhs_weap_vhsk2
			{
				weapon="rhs_weap_vhsk2";
				count=1;
			};
		};
		displayName="VHS-K2";
	};
	class rhs_weapon_m21s_fold: rhs_weapon_m21a
	{
		class TransportWeapons
		{
			class rhs_weap_m21s_fold
			{
				weapon="rhs_weap_m21s_fold";
				count=1;
			};
		};
		displayName="VHS-K2";
	};
	class rhs_weapon_m76: rhs_weapon_base
	{
		scope=2;
		scopeCurator=2;
		class TransportWeapons
		{
			class rhs_weap_m76
			{
				weapon="rhs_weap_m76";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_M76";
		class TransportMagazines
		{
			class rhsgref_10Rnd_792x57_m76
			{
				magazine="rhsgref_10Rnd_792x57_m76";
				count=1;
			};
		};
	};
	class rhs_weapon_savz58p: rhs_weapon_base
	{
		scope=2;
		scopeCurator=2;
		class TransportWeapons
		{
			class rhs_weap_savz58p
			{
				weapon="rhs_weap_savz58p";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_SAVZ58P";
		class TransportMagazines
		{
			class rhs_30Rnd_762x39mm_Savz58
			{
				magazine="rhs_30Rnd_762x39mm_Savz58";
				count=1;
			};
		};
	};
	class rhs_weapon_savz58v: rhs_weapon_savz58p
	{
		class TransportWeapons
		{
			class rhs_weap_savz58v
			{
				weapon="rhs_weap_savz58v";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_SAVZ58V";
	};
	class rhs_weapon_savz58v_fold: rhs_weapon_savz58p
	{
		class TransportWeapons
		{
			class rhs_weap_savz58v_fold
			{
				weapon="rhs_weap_savz58v_fold";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_FOLD";
	};
	class rhs_weapon_savz58p_rail: rhs_weapon_savz58p
	{
		class TransportWeapons
		{
			class rhs_weap_savz58p_rail
			{
				weapon="rhs_weap_savz58p_rail";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_SAVZ58P_RAIL";
	};
	class rhs_weapon_savz58v_rail: rhs_weapon_savz58p
	{
		class TransportWeapons
		{
			class rhs_weap_savz58v_rail
			{
				weapon="rhs_weap_savz58v_rail";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RAIL";
	};
	class rhs_weapon_savz58v_rail_fold: rhs_weapon_savz58p
	{
		class TransportWeapons
		{
			class rhs_weap_savz58v_rail_fold
			{
				weapon="rhs_weap_savz58v_rail_fold";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RAIL_FOLD";
	};
	class rhs_weapon_savz58v_ris: rhs_weapon_savz58p
	{
		class TransportWeapons
		{
			class rhs_weap_savz58v_ris
			{
				weapon="rhs_weap_savz58v_ris";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RIS";
	};
	class rhs_weapon_savz58v_ris_fold: rhs_weapon_savz58p
	{
		class TransportWeapons
		{
			class rhs_weap_savz58v_ris_fold
			{
				weapon="rhs_weap_savz58v_ris_fold";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RIS_FOLD";
	};
	class rhs_weapon_tt33: rhs_weapon_base
	{
		scope=2;
		scopeCurator=2;
		class TransportWeapons
		{
			class rhs_weap_tt33
			{
				weapon="rhs_weap_tt33";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_WEAP_TT33";
		class TransportMagazines
		{
			class rhs_mag_762x25_8
			{
				magazine="rhs_mag_762x25_8";
				count=1;
			};
		};
	};
	class rhs_weapon_savz61: rhs_weapon_base
	{
		scope=2;
		scopeCurator=2;
		class TransportWeapons
		{
			class rhs_weap_savz61
			{
				weapon="rhs_weap_savz61";
				count=1;
			};
		};
		displayName="$STR_RHS_WEAP_SAVZ61_DISPLAYNAME";
		class TransportMagazines
		{
			class rhsgref_20rnd_765x17_vz61
			{
				magazine="rhsgref_20rnd_765x17_vz61";
				count=1;
			};
		};
	};
	class rhs_weapon_Izh18: rhs_weapon_base
	{
		scope=2;
		scopeCurator=2;
		class TransportWeapons
		{
			class rhs_weap_Izh18
			{
				weapon="rhs_weap_Izh18";
				count=1;
			};
		};
		displayName="$STR_RHS_WEAP_IZH18_DISPLAYNAME";
		class TransportMagazines
		{
			class rhsgref_1Rnd_00Buck
			{
				magazine="rhsgref_1Rnd_00Buck";
				count=1;
			};
		};
	};
	class MineBase;
	class ModuleMine_APERSMine_F;
	class rhs_mine_smine35_press: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_smine35_press.paa";
		scope=2;
		ammo="rhs_mine_smine35_press_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_PROJ_PRESS";
		displayName="S.Mi.35 (S.Mi.Z.35) APB Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_smine35_press_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="S.Mi.35 (S.Mi.Z.35) APB Mine";
		explosive="rhs_mine_smine35_press_ammo";
	};
	class rhs_mine_smine35_trip: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_smine35_trip.paa";
		scope=2;
		ammo="rhs_mine_smine35_trip_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine35\SMI35_HELPER_TRIP";
		displayName="S.Mi.35 (W) APB Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_smine35_trip_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="S.Mi.35 (W) APB Mine";
		explosive="rhs_mine_smine35_trip_ammo";
	};
	class rhs_mine_smine44_trip: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_smine44_trip.paa";
		scope=2;
		ammo="rhs_mine_smine44_trip_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_HELPER_TRIP";
		displayName="S.Mi.44 (W) APB Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_smine44_trip_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="S.Mi.44 (W) APB Mine";
		explosive="rhs_mine_smine44_trip_ammo";
	};
	class rhs_mine_smine44_press: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_smine44_press.paa";
		scope=2;
		ammo="rhs_mine_smine44_press_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Smine44\SMI44_PROJ_PRESS";
		displayName="S.Mi.44 (S.Mi.Z.44) APB Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_smine44_press_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="S.Mi.44 (S.Mi.Z.44) APB Mine";
		explosive="rhs_mine_smine44_press_ammo";
	};
	class rhs_mine_m2a3b_press: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_m2a3b_press.paa";
		scope=2;
		ammo="rhs_mine_m2a3b_press_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_PRESSURE";
		displayName="M2A3B APB Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_m2a3b_press_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="M2A3B APB Mine";
		explosive="rhs_mine_m2a3b_press_ammo";
	};
	class rhs_mine_m2a3b_trip: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_m2a3b_trip.paa";
		scope=2;
		ammo="rhs_mine_m2a3b_trip_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M2A3B\M2A3_HELPER_TRIPWIRE";
		displayName="M2A3B (Tripwire) APB Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_m2a3b_trip_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="M2A3B (Tripwire) APB Mine";
		explosive="rhs_mine_m2a3b_trip_ammo";
	};
	class rhs_mine_glasmine43_hz: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_glasmine43_hz.paa";
		scope=2;
		ammo="rhs_mine_glasmine43_hz_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		displayName="Gl.Mi.43 (H.Z.44) AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_glasmine43_hz_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="Gl.Mi.43 (H.Z.44) AP Mine";
		explosive="rhs_mine_glasmine43_hz_ammo";
	};
	class rhs_mine_glasmine43_bz: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_glasmine43_bz.paa";
		scope=2;
		ammo="rhs_mine_glasmine43_bz_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Glasmine43\GLMI43_HELPER";
		displayName="Gl.Mi.43 (B.Z.) AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_glasmine43_bz_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="Gl.Mi.43 (B.Z.) AP Mine";
		explosive="rhs_mine_glasmine43_bz_ammo";
	};
	class rhs_mine_a200_bz: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_a200_bz.paa";
		scope=2;
		ammo="rhs_mine_a200_bz_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_BZ_HELPER";
		displayName="Beh.Schu.Mi.A200 (B.Z.) AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_a200_bz_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="Beh.Schu.Mi.A200 (B.Z.) AP Mine";
		explosive="rhs_mine_a200_bz_ammo";
	};
	class rhs_mine_a200_dz35: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_a200_dz35.paa";
		scope=2;
		ammo="rhs_mine_a200_dz35_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\A200\A200_DZ35_HELPER";
		displayName="Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_a200_dz35_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
		explosive="rhs_mine_a200_dz35_ammo";
	};
	class rhs_mine_stockmine43_2m: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_stockmine43_2m.paa";
		scope=2;
		ammo="rhs_mine_stockmine43_2m_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_2M";
		displayName="St.Mi.43/I (2m) AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_stockmine43_2m_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="St.Mi.43/I (2m) AP Mine";
		explosive="rhs_mine_stockmine43_2m_ammo";
	};
	class rhs_mine_stockmine43_4m: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_stockmine43_4m.paa";
		scope=2;
		ammo="rhs_mine_stockmine43_4m_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\Stockmine43\STMI43_HELPER_4M";
		displayName="St.Mi.43/II (4m) AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_stockmine43_4m_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="St.Mi.43/II (4m) AP Mine";
		explosive="rhs_mine_stockmine43_4m_ammo";
	};
	class rhs_mine_TM43: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_TM43.paa";
		scope=2;
		ammo="rhs_mine_TM43_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\TM43\TM43_proj";
		displayName="Tellermine 43";
		icon="iconExplosiveAT";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_TM43_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="Tellermine 43";
		explosive="rhs_mine_TM43_ammo";
	};
	class rhs_mine_m3_pressure: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_m3_pressure.paa";
		scope=2;
		ammo="rhs_mine_M3_pressure_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		displayName="M3 AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_m3_pressure_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="M3 AP Mine";
		explosive="rhs_mine_M3_pressure_ammo";
	};
	class rhs_mine_M3_tripwire: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_m3_tripwire.paa";
		scope=2;
		ammo="rhs_mine_M3_tripwire_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		displayName="M3 (Tripwire) AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_M3_tripwire_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="M3 (Tripwire) AP Mine";
		explosive="rhs_mine_M3_tripwire_ammo";
	};
	class rhs_mine_mk2_pressure: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_mk2_pressure.paa";
		scope=2;
		ammo="rhs_mine_Mk2_pressure_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_PRESSURE";
		displayName="Mk 2 AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_mk2_pressure_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="Mk 2 AP Mine";
		explosive="rhs_mine_Mk2_pressure_ammo";
	};
	class rhs_mine_Mk2_tripwire: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_mk2_tripwire.paa";
		scope=2;
		ammo="rhs_mine_Mk2_tripwire_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M3\M6M7FUZE_HELPER_TRIPWIRE";
		displayName="Mk 2 (Tripwire) AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_Mk2_tripwire_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="Mk 2 (Tripwire) AP Mine";
		explosive="rhs_mine_Mk2_tripwire_ammo";
	};
	class rhs_mine_M7A2: MineBase
	{
		editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhs_mine_m7a2.paa";
		scope=2;
		ammo="rhs_mine_M7A2_ammo";
		model="\rhsgref\addons\rhsgref_weapons2\mines\M7A2\M7A2_HELPER_SURFACE";
		displayName="M7A2 AP Mine";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="";
		};
	};
	class rhs_mine_M7A2_module: ModuleMine_APERSMine_F
	{
		scopeCurator=2;
		displayName="M7A2 AP Mine";
		explosive="rhs_mine_M7A2_ammo";
	};
	class Site_F;
	class Site_Minefield: Site_F
	{
		class Arguments
		{
			class minesType
			{
				class values
				{
					class rhs_smine35_press_mine
					{
						name="S.Mi.35 (S.Mi.Z.35) APB Mine";
						value="rhs_mine_smine35_press";
						default=0;
					};
					class rhs_smine35_trip_mine
					{
						name="S.Mi.35 (W) APB Mine";
						value="rhs_mine_smine35_trip";
						default=0;
					};
					class rhs_smine44_trip_mine
					{
						name="S.Mi.44 (W) APB Mine";
						value="rhs_mine_smine44_trip";
						default=0;
					};
					class rhs_smine44_press_mine
					{
						name="S.Mi.44 (S.Mi.Z.44) APB Mine";
						value="rhs_mine_smine44_press";
						default=0;
					};
					class rhs_m2a3b_press_mine
					{
						name="M2A3B APB Mine";
						value="rhs_mine_m2a3b_press";
						default=0;
					};
					class rhs_m2a3b_trip_mine
					{
						name="M2A3B (Tripwire) APB Mine";
						value="rhs_mine_m2a3b_trip";
						default=0;
					};
					class rhs_glasmine43_hz_mine
					{
						name="Gl.Mi.43 (H.Z.44) AP Mine";
						value="rhs_mine_glasmine43_hz";
						default=0;
					};
					class rhs_glasmine43_bz_mine
					{
						name="Gl.Mi.43 (B.Z.) AP Mine";
						value="rhs_mine_glasmine43_bz";
						default=0;
					};
					class rhs_a200_bz_mine
					{
						name="Beh.Schu.Mi.A200 (B.Z.) AP Mine";
						value="rhs_mine_a200_bz";
						default=0;
					};
					class rhs_a200_dz35_mine
					{
						name="Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
						value="rhs_mine_a200_dz35";
						default=0;
					};
					class rhs_stockmine43_2m_mine
					{
						name="St.Mi.43/I (2m) AP Mine";
						value="rhs_mine_stockmine43_2m";
						default=0;
					};
					class rhs_stockmine43_4m_mine
					{
						name="St.Mi.43/II (4m) AP Mine";
						value="rhs_mine_stockmine43_4m";
						default=0;
					};
					class rhs_TM43_mine
					{
						name="Tellermine 43";
						value="rhs_mine_TM43";
						default=0;
					};
					class rhs_m3_pressure_mine
					{
						name="M3 AP Mine";
						value="rhs_mine_m3_pressure";
						default=0;
					};
					class rhs_M3_tripwire_mine
					{
						name="M3 (Tripwire) AP Mine";
						value="rhs_mine_M3_tripwire";
						default=0;
					};
					class rhs_mk2_pressure_mine
					{
						name="Mk 2 AP Mine";
						value="rhs_mine_mk2_pressure";
						default=0;
					};
					class rhs_Mk2_tripwire_mine
					{
						name="Mk 2 (Tripwire) AP Mine";
						value="rhs_mine_Mk2_tripwire";
						default=0;
					};
					class rhs_M7A2_mine
					{
						name="M7A2 AP Mine";
						value="rhs_mine_M7A2";
						default=0;
					};
				};
			};
		};
	};
	class Item_Base_F;
	class Item_rhsgref_sdn6_suppressor: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_RHSGREF_SDN6_SUPPRESSOR_DISPLAYNAME";
		author="$STR_RHS_AUTHOR_FULL";
		vehicleClass="WeaponAccessories";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class rhsgref_sdn6_suppressor
			{
				name="rhsgref_sdn6_suppressor";
				count=1;
			};
		};
	};
	class WeaponHolder_Single_limited_item_F;
	class rhs_magazine_base: WeaponHolder_Single_limited_item_F
	{
		vehicleClass="Magazines";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Magazines";
	};
	class rhs_magazine_rhs_mag_762x25_8: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mag_762x25_8
			{
				magazine="rhs_mag_762x25_8";
				count=1;
			};
		};
		displayName="$STR_RHS_CFGMAGAZINES_8RND_762X25_MAG_TT33";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_30rnd_1143x23_M1911B_SMG: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_30rnd_1143x23_M1911B_SMG
			{
				magazine="rhsgref_30rnd_1143x23_M1911B_SMG";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_45ACP_M1911_30RND_SMG";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_30rnd_1143x23_M1911B_2mag_SMG: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_30rnd_1143x23_M1911B_2mag_SMG
			{
				magazine="rhsgref_30rnd_1143x23_M1911B_2mag_SMG";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_45ACP_M1911_30RND_2MAG_SMG";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_30rnd_1143x23_M1T_SMG: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_30rnd_1143x23_M1T_SMG
			{
				magazine="rhsgref_30rnd_1143x23_M1T_SMG";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_45ACP_M1T_30RND_SMG";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_30rnd_1143x23_M1T_2mag_SMG: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_30rnd_1143x23_M1T_2mag_SMG
			{
				magazine="rhsgref_30rnd_1143x23_M1T_2mag_SMG";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_45ACP_M1T_30RND_2MAG_SMG";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_20rnd_765x17_vz61: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_20rnd_765x17_vz61
			{
				magazine="rhsgref_20rnd_765x17_vz61";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_20RND_765X17_VZ61_DISPLAYNAME";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_10rnd_765x17_vz61: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_10rnd_765x17_vz61
			{
				magazine="rhsgref_10rnd_765x17_vz61";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_10RND_765X17_VZ61_DISPLAYNAME";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_30rnd_556x45_vhs2: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_30rnd_556x45_vhs2
			{
				magazine="rhsgref_30rnd_556x45_vhs2";
				count=1;
			};
		};
		displayName="30rnd VHS-2 M855A1";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_30rnd_556x45_vhs2_t: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_30rnd_556x45_vhs2_t
			{
				magazine="rhsgref_30rnd_556x45_vhs2_t";
				count=1;
			};
		};
		displayName="30rnd VHS-2 M856A1 (Tracer)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_5Rnd_792x57_kar98k: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_5Rnd_792x57_kar98k
			{
				magazine="rhsgref_5Rnd_792x57_kar98k";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_5RND_792X57_KAR98K_DISPLAYNAME";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_10Rnd_792x57_m76: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_10Rnd_792x57_m76
			{
				magazine="rhsgref_10Rnd_792x57_m76";
				count=1;
			};
		};
		displayName="10rnd M76 7.9x57mm M75";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_5Rnd_762x54_m38: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_5Rnd_762x54_m38
			{
				magazine="rhsgref_5Rnd_762x54_m38";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_5RND_762X54_M38_DISPLAYNAME";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_30Rnd_762x39mm_Savz58: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_30Rnd_762x39mm_Savz58
			{
				magazine="rhs_30Rnd_762x39mm_Savz58";
				count=1;
			};
		};
		displayName="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_VZ58";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_30Rnd_762x39mm_Savz58_tracer: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_30Rnd_762x39mm_Savz58_tracer
			{
				magazine="rhs_30Rnd_762x39mm_Savz58_tracer";
				count=1;
			};
		};
		displayName="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_VZ58_TRACER";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_8Rnd_762x63_M2B_M1rifle: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_8Rnd_762x63_M2B_M1rifle
			{
				magazine="rhsgref_8Rnd_762x63_M2B_M1rifle";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_30CAL_M2_8RND_M1R";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle
			{
				magazine="rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_30CAL_M1T_8RND_M1R";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_30Rnd_792x33_SmE_StG: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_30Rnd_792x33_SmE_StG
			{
				magazine="rhsgref_30Rnd_792x33_SmE_StG";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SME_30RND_StG";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_25Rnd_792x33_SmE_StG: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_25Rnd_792x33_SmE_StG
			{
				magazine="rhsgref_25Rnd_792x33_SmE_StG";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SME_25RND_StG";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_50Rnd_792x57_SmE_drum: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_50Rnd_792x57_SmE_drum
			{
				magazine="rhsgref_50Rnd_792x57_SmE_drum";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SME_50RND_DRUM";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_50Rnd_792x57_SmE_notracers_drum: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_50Rnd_792x57_SmE_notracers_drum
			{
				magazine="rhsgref_50Rnd_792x57_SmE_notracers_drum";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SME_50RND_DRUM_NOTRACERS";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_50Rnd_792x57_SmK_drum: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_50Rnd_792x57_SmK_drum
			{
				magazine="rhsgref_50Rnd_792x57_SmK_drum";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SMK_50RND_DRUM";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_50Rnd_792x57_SmK_alltracers_drum: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_50Rnd_792x57_SmK_alltracers_drum
			{
				magazine="rhsgref_50Rnd_792x57_SmK_alltracers_drum";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SMK_50RND_DRUM_ALLTRACERS";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_296Rnd_792x57_SmE_belt: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_296Rnd_792x57_SmE_belt
			{
				magazine="rhsgref_296Rnd_792x57_SmE_belt";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SME_296RND_BELT";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_296Rnd_792x57_SmE_notracers_belt: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_296Rnd_792x57_SmE_notracers_belt
			{
				magazine="rhsgref_296Rnd_792x57_SmE_notracers_belt";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SME_296RND_BELT_NOTRACERS";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_296Rnd_792x57_SmK_belt: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_296Rnd_792x57_SmK_belt
			{
				magazine="rhsgref_296Rnd_792x57_SmK_belt";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SMK_296RND_BELT";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_296Rnd_792x57_SmK_alltracers_belt: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_296Rnd_792x57_SmK_alltracers_belt
			{
				magazine="rhsgref_296Rnd_792x57_SmK_alltracers_belt";
				count=1;
			};
		};
		displayName="$STR_RHSGREF_MAG_792_SMK_296RND_BELT_ALLTRACERS";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_mag_rkg3em: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_mag_rkg3em
			{
				magazine="rhsgref_mag_rkg3em";
				count=1;
			};
		};
		displayName="$STR_RHS_RKG3EM_NAME";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mag_f1: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mag_f1
			{
				magazine="rhs_mag_f1";
				count=1;
			};
		};
		displayName="$STR_RHS_F1_NAME";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_m1939e_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_m1939e_mag
			{
				magazine="rhs_grenade_m1939e_mag";
				count=1;
			};
		};
		displayName="Ei.Hgr.39 Concussive (Early)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_m1939l_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_m1939l_mag
			{
				magazine="rhs_grenade_m1939l_mag";
				count=1;
			};
		};
		displayName="Ei.Hgr.39 Concussive (Late)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_m1939e_f_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_m1939e_f_mag
			{
				magazine="rhs_grenade_m1939e_f_mag";
				count=1;
			};
		};
		displayName="Ei.Hgr.39 Fragmentation (Early)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_m1939l_f_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_m1939l_f_mag
			{
				magazine="rhs_grenade_m1939l_f_mag";
				count=1;
			};
		};
		displayName="Ei.Hgr.39 Fragmentation (Late)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_nbhgr39_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_nbhgr39_mag
			{
				magazine="rhs_grenade_nbhgr39_mag";
				count=1;
			};
		};
		displayName="Nb.Hgr.39 (Early)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_nbhgr39B_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_nbhgr39B_mag
			{
				magazine="rhs_grenade_nbhgr39B_mag";
				count=1;
			};
		};
		displayName="Nb.Hgr.39B (Late)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_sthgr24_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_sthgr24_mag
			{
				magazine="rhs_grenade_sthgr24_mag";
				count=1;
			};
		};
		displayName="St.Hgr.24";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_sthgr24_heerfrag_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_sthgr24_heerfrag_mag
			{
				magazine="rhs_grenade_sthgr24_heerfrag_mag";
				count=1;
			};
		};
		displayName="St.Hgr.24 Fragmentation (Heer)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_sthgr24_SSfrag_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_sthgr24_SSfrag_mag
			{
				magazine="rhs_grenade_sthgr24_SSfrag_mag";
				count=1;
			};
		};
		displayName="St.Hgr.24 Fragmentation (SS)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_sthgr24_x7bundle_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_sthgr24_x7bundle_mag
			{
				magazine="rhs_grenade_sthgr24_x7bundle_mag";
				count=1;
			};
		};
		displayName="St.Hgr.24 x7 Bundle";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_sthgr43_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_sthgr43_mag
			{
				magazine="rhs_grenade_sthgr43_mag";
				count=1;
			};
		};
		displayName="St.Hgr.43";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_sthgr43_heerfrag_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_sthgr43_heerfrag_mag
			{
				magazine="rhs_grenade_sthgr43_heerfrag_mag";
				count=1;
			};
		};
		displayName="St.Hgr.43 Fragmentation (Heer)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_sthgr43_SSfrag_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_sthgr43_SSfrag_mag
			{
				magazine="rhs_grenade_sthgr43_SSfrag_mag";
				count=1;
			};
		};
		displayName="St.Hgr.43 Fragmentation (SS)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_mkii_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_mkii_mag
			{
				magazine="rhs_grenade_mkii_mag";
				count=1;
			};
		};
		displayName="Mk 2 Fragmentation";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_mkiiia1_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_mkiiia1_mag
			{
				magazine="rhs_grenade_mkiiia1_mag";
				count=1;
			};
		};
		displayName="Mk 3A1 Concussion";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_anm8_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_anm8_mag
			{
				magazine="rhs_grenade_anm8_mag";
				count=1;
			};
		};
		displayName="M8 Smoke Grenade";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_m15_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_m15_mag
			{
				magazine="rhs_grenade_m15_mag";
				count=1;
			};
		};
		displayName="M15 WP Grenade";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_grenade_mki_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_grenade_mki_mag
			{
				magazine="rhs_grenade_mki_mag";
				count=1;
			};
		};
		displayName="Mk 1 Illumination";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_charge_tnt_x2_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_charge_tnt_x2_mag
			{
				magazine="rhs_charge_tnt_x2_mag";
				count=1;
			};
		};
		displayName="TNT Charge (1lb Thrown)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_charge_sb3kg_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_charge_sb3kg_mag
			{
				magazine="rhs_charge_sb3kg_mag";
				count=1;
			};
		};
		displayName="Sprengbuechse (3kg)";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_1Rnd_00Buck: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_1Rnd_00Buck
			{
				magazine="rhsgref_1Rnd_00Buck";
				count=1;
			};
		};
		displayName="1Rnd 00 Buckshot";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhsgref_1Rnd_Slug: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhsgref_1Rnd_Slug
			{
				magazine="rhsgref_1Rnd_Slug";
				count=1;
			};
		};
		displayName="1Rnd 12g Slug";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_smine35_press_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_smine35_press_mag
			{
				magazine="rhs_mine_smine35_press_mag";
				count=1;
			};
		};
		displayName="S.Mi.35 (S.Mi.Z.35) APB Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_smine35_trip_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_smine35_trip_mag
			{
				magazine="rhs_mine_smine35_trip_mag";
				count=1;
			};
		};
		displayName="S.Mi.35 (W) APB Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_smine44_trip_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_smine44_trip_mag
			{
				magazine="rhs_mine_smine44_trip_mag";
				count=1;
			};
		};
		displayName="S.Mi.44 (S.Mi.Z.44) APB Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_smine44_press_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_smine44_press_mag
			{
				magazine="rhs_mine_smine44_press_mag";
				count=1;
			};
		};
		displayName="S.Mi.44 (S.Mi.Z.35) APB Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_m2a3b_press_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_m2a3b_press_mag
			{
				magazine="rhs_mine_m2a3b_press_mag";
				count=1;
			};
		};
		displayName="M2A3B APB Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_m2a3b_trip_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_m2a3b_trip_mag
			{
				magazine="rhs_mine_m2a3b_trip_mag";
				count=1;
			};
		};
		displayName="M2A3B (Tripwire) APB Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_glasmine43_hz_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_glasmine43_hz_mag
			{
				magazine="rhs_mine_glasmine43_hz_mag";
				count=1;
			};
		};
		displayName="Gl.Mi.43 (H.Z.44) AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_glasmine43_bz_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_glasmine43_bz_mag
			{
				magazine="rhs_mine_glasmine43_bz_mag";
				count=1;
			};
		};
		displayName="Gl.Mi.43 (B.Z.) AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_a200_bz_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_a200_bz_mag
			{
				magazine="rhs_mine_a200_bz_mag";
				count=1;
			};
		};
		displayName="Beh.Schu.Mi.A200 (B.Z.) AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_a200_dz35_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_a200_dz35_mag
			{
				magazine="rhs_mine_a200_dz35_mag";
				count=1;
			};
		};
		displayName="Beh.Schu.Mi.A200 (D.Z.35) AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_stockmine43_2m_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_stockmine43_2m_mag
			{
				magazine="rhs_mine_stockmine43_2m_mag";
				count=1;
			};
		};
		displayName="St.Mi.43/I (2m) AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_stockmine43_4m_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_stockmine43_4m_mag
			{
				magazine="rhs_mine_stockmine43_4m_mag";
				count=1;
			};
		};
		displayName="St.Mi.43/II (4m) AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_m3_pressure_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_m3_pressure_mag
			{
				magazine="rhs_mine_m3_pressure_mag";
				count=1;
			};
		};
		displayName="M3 AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_M3_tripwire_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_M3_tripwire_mag
			{
				magazine="rhs_mine_M3_tripwire_mag";
				count=1;
			};
		};
		displayName="M3 (Tripwire) AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_mk2_pressure_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_mk2_pressure_mag
			{
				magazine="rhs_mine_mk2_pressure_mag";
				count=1;
			};
		};
		displayName="Mk 2 AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_Mk2_tripwire_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_Mk2_tripwire_mag
			{
				magazine="rhs_mine_Mk2_tripwire_mag";
				count=1;
			};
		};
		displayName="Mk 2 (Tripwire) AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_M7A2_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_M7A2_mag
			{
				magazine="rhs_mine_M7A2_mag";
				count=1;
			};
		};
		displayName="M7A2 AP Mine";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_mine_TM43_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_mine_TM43_mag
			{
				magazine="rhs_mine_TM43_mag";
				count=1;
			};
		};
		displayName="Tellermine 43";
		author="$STR_RHS_AUTHOR_FULL";
	};
	class rhs_magazine_rhs_charge_M2tet_x2_mag: rhs_magazine_base
	{
		scope=2;
		class TransportMagazines
		{
			class rhs_charge_M2tet_x2_mag
			{
				magazine="rhs_charge_M2tet_x2_mag";
				count=1;
			};
		};
		displayName="Tetrytol Charge (2.5lb Placed)";
		author="$STR_RHS_AUTHOR_FULL";
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class SMG_01_Base;
	class SMG_01_F: SMG_01_Base
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class RHS_SAFE_BASE;
	class GP25_Base;
	class RifleGrenade_Base: GP25_Base
	{
		displayName="Rifle Grenade";
		descriptionShort="Rifle Grenade launcher<br/>Caliber: 20mm";
		useModelOptics=0;
		useExternalOptic=0;
		reloadaction="RHS_GestureReloadGP30";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
			1,
			1,
			10
		};
		magazines[]={};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"rhs_gp25_shot_SoundSet",
				"UGL_Tail_SoundSet",
				"UGL_InteriorTail_SoundSet"
			};
			recoil="M240Recoil";
			recoilProne="M240Recoil";
			minRange=30;
			minRangeProbab=0.1;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		cameraDir="OP_look";
		discreteDistance[]={50,100,150,200,250};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye1",
			"OP_eye2",
			"OP_eye3",
			"OP_eye4"
		};
		discreteDistanceInitIndex=1;
		magazineReloadSwitchPhase=0.63;
	};
	class rhs_weap_kar98k_Base_F: Rifle_Base_F
	{
		dlc="RHS_GREF";
		magazines[]=
		{
			"rhsgref_5Rnd_792x57_kar98k"
		};
		magazineWell[]=
		{
			"CBA_792x57_K98"
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="Bolt action Rifle<br />Caliber: 7.92x57mm";
		optics=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		dexterity=1.8;
		recoil="recoil_dmr_01";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RifleAssaultCloud";
			};
			class RHSUSF_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHSUSF_BarrelRefract";
			};
		};
		weaponInfoType="RscWeaponZeroing";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_200",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800",
			"eye_900",
			"eye_1000",
			"eye_1100",
			"eye_1200",
			"eye_1300",
			"eye_1400",
			"eye_1500",
			"eye_1600",
			"eye_1700",
			"eye_1800",
			"eye_1900",
			"eye_2000"
		};
		discreteDistanceInitIndex=0;
		cameraDir="eye_look";
		maxZeroing=2000;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;  //found empty after stripping
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot;  //found empty after stripping
			class UnderBarrelSlot;  //found empty after stripping
		};
		opticsZoomMin=0.27500001;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		reloadAction="RHS_GestureReloadM1903A1";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\awmhands.rtm"
		};
		reloadMagazineSound[]=
		{
			"\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope",
			0.80000001,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=1.6;
			dispersion=0.0002909;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		class Eventhandlers: Eventhandlers
		{
			class RHS_BoltAction
			{
				fired="[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
			};
		};
		rhs_boltActionSound[]=
		{
			"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt.wss",
			1.42,
			1,
			20
		};
		rhs_boltActionAnim="RHS_GestureRechamberM1903A1";
	};
	class rhs_weap_kar98k: rhs_weap_kar98k_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_kar98k_ca.paa";
		scope=2;
		dlc="RHS_GREF";
		displayName="$STR_RHS_WEAP_KAR98K_DISPLAYNAME";
		model="\rhsgref\addons\rhsgref_weapons\kar98k\kar98k.p3d";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		inertia=0.94999999;
		weaponInfoType="rhs_kar98k_handler";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=81.400002;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="Kar98k";
			onHoverText="Kar98k";
		};
		baseWeapon="rhs_weap_kar98k";
	};
	class rhs_weap_m38_Base_F: Rifle_Base_F
	{
		dlc="RHS_GREF";
		magazines[]=
		{
			"rhsgref_5Rnd_762x54_m38"
		};
		magazineWell[]=
		{
			"CBA_762x54R_Mosin"
		};
		class Library
		{
			libTextDesc="";
		};
		optics=0;
		reloadAction="RHS_GestureReloadM38";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		recoil="recoil_dmr_01";
		class GunParticles: GunParticles
		{
			class RHSUSF_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHSUSF_BarrelRefract";
			};
		};
		weaponInfoType="rhs_mosin_handler";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye2",
			"eye3",
			"eye4",
			"eye5",
			"eye6",
			"eye7",
			"eye8",
			"eye9",
			"eye10"
		};
		cameraDir="eye_look";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class CowsSlot
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class MuzzleSlot
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class UnderBarrelSlot
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
		};
		opticsZoomMin=0.27500001;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Bolt action Rifle<br/>Caliber: 7.62x54mm";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m38.rtm"
		};
		dexterity=1.8;
		reloadMagazineSound[]=
		{
			"\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope",
			0.80000001,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=1.6;
			dispersion=0.000235;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		class far_optic1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=700;
		};
		class medium_optic2: far_optic1
		{
			requiredOpticType=2;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=4;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDispersion=5;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsgref\addons\rhsgref_weapons\m38\data\m38_co.paa"
		};
		class Eventhandlers: Eventhandlers
		{
			class RHS_BoltAction
			{
				fired="[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
			};
		};
		rhs_boltActionSound[]=
		{
			"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt.wss",
			1.42,
			1,
			20
		};
		rhs_boltActionAnim="RHS_GestureRechamberM38";
	};
	class rhs_weap_m38: rhs_weap_m38_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m38_ca.paa";
		scopeArsenal=2;
		scope=2;
		displayName="$STR_RHSGREF_WEAP_M38";
		model="\rhsgref\addons\rhsgref_weapons\m38\m38.p3d";
		weaponInfoType="rhs_mosin_handler";
		initSpeed=-0.95999998;
		inertia=0.87;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=74.800003;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="m38";
			onHoverText="m38";
		};
		baseWeapon="rhs_weap_m38";
	};
	class rhs_weap_m38_rail: rhs_weap_m38
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m38_rail_ca.paa";
		scopeArsenal=2;
		scope=2;
		model="\rhsgref\addons\rhsgref_weapons\m38\m38_rail.p3d";
		displayName="$STR_RHSGREF_WEAP_M38_2";
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsgref\addons\rhsgref_weapons\m38\data\m38_2_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot
			{
				iconPosition[]={0.44999999,0.25};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Center";
			};
			icon="\rhsgref\addons\rhsgref_weapons\icons\w_m382_inv_ca.paa";
			mass=74.800003;
		};
		baseWeapon="rhs_weap_m38_rail";
	};
	class rhs_weap_mosin_sbr: rhs_weap_m38_rail
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_mosin_sbr_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons\m38\rhs_mosin_sbr.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_mosin_sbr.rtm"
		};
		initSpeed=-0.89999998;
		inertia=0.62;
		recoil="recoil_mmg_02";
		displayName="$STR_RHSGREF_WEAP_M38_SBR";
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
		discreteDistanceCameraPoint[]=
		{
			"eye"
		};
		class Single: Single
		{
			reloadTime=1.6;
			dispersion=0.001635;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		class far_optic1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=700;
		};
		class medium_optic2: far_optic1
		{
			requiredOpticType=2;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=4;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDispersion=5;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
		};
		hiddenSelections[]=
		{
			""
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot
			{
				iconPosition[]={0.44999999,0.25};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Center";
			};
			class MuzzleSlot: rhs_western_762rifle_muzzle_slot
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			mass=74.800003;
		};
		baseWeapon="rhs_weap_mosin_sbr";
	};
	class rhs_weap_XM2010_Base_F;
	class rhs_weap_dsr1: rhs_weap_XM2010_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_dsr1_ca.paa";
		scopeArsenal=1;
		scope=1;
		dlc="RHS_GREF";
		displayName="DSR-1";
		magazines[]=
		{
			"rhsusf_5Rnd_762x51_m118_special_Mag",
			"rhsusf_5Rnd_762x51_m993_Mag",
			"rhsusf_5Rnd_762x51_m62_Mag"
		};
		model="\rhsgref\addons\rhsgref_weapons\dsr\dsr1.p3d";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"rhsgref\addons\rhsgref_weapons\dsr\data\dsr-1_co.paa"
		};
		weaponInfoType="rhs_m2010_handler";
		initSpeed=-0.95999998;
		inertia=0.87;
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot;  //found empty after stripping
			class rhs_mtz_slot;  //found empty after stripping
			mass=129.8;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="DSR-Precision DSR-1";
			onHoverText="DSR-Precision DSR-1";
		};
		baseWeapon="rhs_weap_dsr1";
	};
	class rhs_weap_m70_base: Rifle_Base_F
	{
		dlc="RHS_GREF";
		magazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
		magazineWell[]=
		{
			"CBA_762x39_AK"
		};
		magazineReloadSwitchPhase=0.25;
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="$STR_A3_CfgWeapons_XM_base_F0";
		optics=0;
		dexterity=1.8;
		maxRecoilSway=0.0080000004;
		swayDecaySpeed=1.25;
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHS_BarrelRefract";
			};
		};
		weaponInfoType="rhs_rscOptics_akm";
		discreteDistance[]={440,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"rhs_acc_pbs1",
					"rhs_acc_dtk1l"
				};
			};
			class rhs_npz_slot;  //found empty after stripping
			class PointerSlot: rhs_russian_ak_barrel_slot;  //found empty after stripping
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		reloadAction="RHS_GestureReloadAK762";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m70_stock.rtm"
		};
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		class RGMuzzle: RifleGrenade_Base;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE"
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\weapons\Khaybar\reload_khaibar",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.0020999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.0020999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=3;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
	};
	class rhs_weap_m70ab2: rhs_weap_m70_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m70ab2_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_M70AB2";
		descriptionShort="Zastava M-70 rifle";
		model="\rhsgref\addons\rhsgref_weapons\m70\rhs_m70ab2";
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_100",
			"eye_200",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800",
			"eye_900",
			"eye_1000"
		};
		discreteDistance[]={350,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=0;
		cameraDir="eye_look";
		weaponInfoType="rhs_rscOptics_m70ab2";
		dexterity=1.8099999;
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		muzzles[]=
		{
			"this",
			"RGMuzzle",
			"SAFE"
		};
		magazineWell[]=
		{
			"AK_762x39"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=87.339996;
		};
		rhs_fold="rhs_weap_m70ab2_fold";
		baseWeapon="rhs_weap_m70ab2";
	};
	class rhs_weap_m70ab2_fold: rhs_weap_m70ab2
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m70ab2_fold_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_M70AB2_FOLD";
		model="\rhsgref\addons\rhsgref_weapons\m70\rhs_m70ab2_fold";
		recoil="recoil_mmg_01";
		rhs_fold="rhs_weap_m70ab2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=65.510002;
		};
	};
	class rhs_weap_m70b1: rhs_weap_m70ab2
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m70b1_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_M70B1";
		model="\rhsgref\addons\rhsgref_weapons\m70\rhs_m70b1";
		weaponInfoType="rhs_rscOptics_m70b1";
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=91.739998;
		};
		baseWeapon="rhs_weap_m70b1";
	};
	class rhs_weap_m92: rhs_weap_m70_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m92_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_M92";
		descriptionShort="Zastava M-92 rifle";
		weaponInfoType="rhs_rscOptics_m92";
		discreteDistance[]={300,500};
		discreteDistanceInitIndex=0;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m92_stock.rtm"
		};
		magazineWell[]=
		{
			"AK_762x39"
		};
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.37;
		initSpeed=-0.92000002;
		recoil="recoil_akm";
		model="\rhsgref\addons\rhsgref_weapons\m92\rhs_m92";
		UiPicture="\rhsgref\addons\rhsgref_weapons\icons\saf_m92_gear_x.paa";
		class Single: Single
		{
			dispersion=0.0025500001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.0025500001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			mass=78.540001;
		};
		rhs_fold="rhs_weap_m92_fold";
		baseWeapon="rhs_weap_m92";
	};
	class rhs_weap_m92_fold: rhs_weap_m92
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m92_fold_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_M92_FOLD";
		model="\rhsgref\addons\rhsgref_weapons\m92\rhs_m92_fold";
		recoil="recoil_mmg_02";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;  //found empty after stripping
			mass=58.91;
		};
		rhs_fold="rhs_weap_m92";
	};
	class rhs_weap_m76: rhs_weap_m70_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m76_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_M76";
		descriptionShort="Zastava M-76 Marksman";
		magazines[]=
		{
			"rhsgref_10Rnd_792x57_m76"
		};
		magazineWell[]=
		{
			"CBA_792x57_M76"
		};
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		aimTransitionSpeed=0.75;
		recoil="recoil_akm";
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_100",
			"eye_200",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800",
			"eye_900",
			"eye_1000"
		};
		discreteDistance[]={350,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex=0;
		cameraDir="eye_look";
		model="\rhsgref\addons\rhsgref_weapons\m76\rhs_wep_m76";
		weaponInfoType="rhs_rscOptics_m76";
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00095000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=3;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: rhs_russian_rifle_scopes_slot;  //found empty after stripping
			class PointerSlot;  //found empty after stripping
			mass=95.699997;
		};
		baseWeapon="rhs_weap_m76";
	};
	class rhs_weap_m21_base: rhs_weap_m70_base
	{
		scope=0;
		author="$STR_RHS_AUTHOR_FULL";
		displayName="M-21";
		descriptionShort="Zastava M-21 assault rifle";
		magazines[]=
		{
			"rhsgref_30rnd_556x45_m21",
			"rhsgref_30rnd_556x45_m21_t"
		};
		magazineWell[]=
		{
			"CBA_556x45_M21"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m21_stock.rtm"
		};
		discreteDistance[]={300,500};
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		modes[]=
		{
			"Single",
			"Single_AI",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.0020999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.0020999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burstRangeMax=3;
			minRange=200;
			minRangeProbab=0.5;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=3;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
		};
		reloadAction="RHS_GestureReloadAKS";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: rhs_russian_rifle_scopes_slot;  //found empty after stripping
			class MuzzleSlot: rhs_western_rifle_muzzle_slot;  //found empty after stripping
			class rhs_mtz_slot: SlotInfo
			{
				compatibleItems[]=
				{
					"rhs_acc_mtz"
				};
			};
			mass=91.300003;
		};
	};
	class rhs_weap_m21a: rhs_weap_m21_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m21a_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_M21A";
		weaponInfoType="rhs_rscOptics_m21a";
		model="\rhsgref\addons\rhsgref_weapons\m21\rhs_m21a";
		rhs_mtz="rhs_weap_m21a_pr";
		rhs_fold="rhs_weap_m21a_fold";
		baseWeapon="rhs_weap_m21a";
	};
	class rhs_weap_m21a_pr: rhs_weap_m21_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m21a_pr_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_M21A_PIC";
		weaponInfoType="rhs_rscOptics_m21s_mtz";
		model="\rhsgref\addons\rhsgref_weapons\m21\rhs_m21a_pr";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=91.300003;
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot;  //found empty after stripping
			class rhs_mtz_slot;  //found empty after stripping
		};
		rhs_mtz="rhs_weap_m21a";
		baseWeapon="rhs_weap_m21a_pr";
	};
	class rhs_weap_m21a_fold: rhs_weap_m21a
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m21a_fold_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_M21A_FOLD";
		model="\rhsgref\addons\rhsgref_weapons\m21\rhs_m21a_fold";
		recoil="recoil_mxc";
		rhs_fold="rhs_weap_m21a";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.480003;
		};
	};
	class rhs_weap_m21s: rhs_weap_m21_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m21s_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_M21S";
		weaponInfoType="rhs_rscOptics_m21s";
		initSpeed=-0.98000002;
		class Single: Single
		{
			dispersion=0.0032500001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.0032500001;
		};
		model="\rhsgref\addons\rhsgref_weapons\m21\rhs_m21s";
		reloadAction="RHS_GestureReloadAK_1hand";
		rhs_mtz="rhs_weap_m21s_pr";
		rhs_fold="rhs_weap_m21s_fold";
		baseWeapon="rhs_weap_m21s";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=89.540001;
		};
	};
	class rhs_weap_m21s_pr: rhs_weap_m21a_pr
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m21s_pr_ca.paa";
		displayName="$STR_RHSGREF_WEAP_M21S_PIC";
		weaponInfoType="rhs_rscOptics_m21s_mtz";
		initSpeed=-0.98000002;
		class Single: Single
		{
			dispersion=0.0032500001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.0032500001;
		};
		model="\rhsgref\addons\rhsgref_weapons\m21\rhs_m21s_pr";
		reloadAction="RHS_GestureReloadAK_1hand";
		rhs_mtz="rhs_weap_m21s";
		baseWeapon="rhs_weap_m21s_pr";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=89.540001;
		};
	};
	class rhs_weap_m21s_fold: rhs_weap_m21s
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m21s_fold_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_M21S_FOLD";
		model="\rhsgref\addons\rhsgref_weapons\m21\rhs_m21s_fold";
		recoil="recoil_mxc";
		rhs_fold="rhs_weap_m21s";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=67.160004;
		};
	};
	class rhs_weap_savz61: SMG_01_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz61_ca.paa";
		dlc="RHS_GREF";
		displayName="$STR_RHS_WEAP_SAVZ61_DISPLAYNAME";
		scope=2;
		weaponInfoType="rhs_rscOptics_vz61";
		rhs_fold="rhs_weap_savz61_folded";
		magazines[]=
		{
			"rhsgref_20rnd_765x17_vz61",
			"rhsgref_10rnd_765x17_vz61"
		};
		magazineWell[]=
		{
			"CBA_32ACP_Vz61"
		};
		class Library
		{
			libTextDesc="The Škorpion vz. 61 is a Czechoslovak 7.65 mm machine pistol developed in 1959 by Miroslav Rybář (1924–1970) and produced under the official designation Samopal vzor 61 by the Česká zbrojovka arms factory in Uherský Brod from 1961 to 1979.";
		};
		model="\rhsgref\addons\rhsgref_weapons\savz61\rhs_savz61";
		reloadAction="GestureReloadSMG_02";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName="PistolCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=28.16;
			allowedSlots[]={901};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				compatibleItems[]={};
			};
			class PointerSlot;  //found empty after stripping
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Sub-machine gun <br/>Caliber: 7.65x17 mm";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz61.rtm"
		};
		selectionfireanim="zasleh";
		discreteDistance[]={75,150};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Single
		{
			reloadTime=0.075000003;
			dispersion=0.00050000002;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.075000003;
			dispersion=0.00050000002;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.2;
			aiRateOfFireDistance=50;
		};
		baseWeapon="rhs_weap_savz61";
	};
	class rhs_weap_savz61_folded: rhs_weap_savz61
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz61_folded_ca.paa";
		type=2;
		mass=28.16;
		recoil="recoil_ebr";
		reloadAction="GestureReloadPistol";
		model="\rhsgref\addons\rhsgref_weapons\savz61\rhs_savz61_folded";
		handAnim[]={};
		class SAFE_PISTOL: RHS_SAFE_BASE;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE_PISTOL"
		};
		displayName="$STR_RHS_WEAP_SAVZ61_FOLDED_DISPLAYNAME";
		descriptionShort="$STR_RHS_WEAP_SAVZ61_FOLDED_DESCRIPTIONSHORT";
		rhs_fold="rhs_weap_savz61";
		baseWeapon="rhs_weap_savz61_folded";
	};
	class rhs_weap_savz58_base: Rifle_Base_F
	{
		dlc="RHS_GREF";
		magazines[]=
		{
			"rhs_30Rnd_762x39mm_Savz58",
			"rhs_30Rnd_762x39mm_Savz58_tracer"
		};
		magazineWell[]=
		{
			"CBA_762x39_VZ58"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="";
		};
		optics=0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_co"
		};
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		dexterity=1.6;
		recoil="recoil_ktbc";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHS_BarrelRefract";
			};
		};
		weaponInfoType="rhs_rscOptics_vz58p";
		cameraDir="eye_look";
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_100",
			"eye_200",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800",
			"eye_900",
			"eye_1000"
		};
		discreteDistance[]={350,100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68.199997;
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"rhsgref_acc_zendl"
				};
				iconPosition[]={-0.050000001,0.36000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class PointerSlot;  //found empty after stripping
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_A3_CfgWeapons_XM_base_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58.rtm"
		};
		reloadAction="RHS_GestureReloadAK762";
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE"
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\weapons\Khaybar\reload_khaibar",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"Single_AI",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075000003;
			dispersion=0.0020999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.075000003;
			dispersion=0.0020999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burstRangeMax=3;
			minRange=200;
			minRangeProbab=0.5;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=3;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDispersion=6;
			aiRateOfFireDistance=800;
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
	};
	class rhs_weap_savz58_rail_base: rhs_weap_savz58_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58_rail_base_ca.paa";
		weaponInfoType="rhs_rscOptics_vz58p_rail";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=69.199997;
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot;  //found empty after stripping
			class MuzzleSlot: MuzzleSlot;  //found empty after stripping
			class PointerSlot;  //found empty after stripping
		};
	};
	class rhs_weap_savz58_ris_base: rhs_weap_savz58_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58_ris_base_ca.paa";
		weaponInfoType="rhs_rscOptics_vz58v_ris";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co",
			"rhsgref\addons\rhsgref_weapons\savz58\data\vz_ups_co",
			"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long;  //found empty after stripping
			class MuzzleSlot: MuzzleSlot;  //found empty after stripping
			class PointerSlot: rhs_western_rifle_laser_slot;  //found empty after stripping
			class GripodSlot: rhs_western_rifle_gripod_slot;  //found empty after stripping
		};
	};
	class rhs_weap_savz58p: rhs_weap_savz58_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58p_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58P";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58P";
		model="\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58p";
		baseWeapon="rhs_weap_savz58p";
	};
	class rhs_weap_savz58v: rhs_weap_savz58_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58V";
		model="\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58v";
		recoil="recoil_mxc";
		baseWeapon="rhs_weap_savz58v";
		weaponInfoType="rhs_rscOptics_vz58v";
		rhs_fold="rhs_weap_savz58v_fold";
	};
	class rhs_weap_savz58v_fold: rhs_weap_savz58v
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_fold_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_FOLD";
		model="\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58v_folded";
		recoil="recoil_mmg_01";
		rhs_fold="rhs_weap_savz58v";
	};
	class rhs_weap_savz58p_rail: rhs_weap_savz58_rail_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58p_rail_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58P_RAIL";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58P_RAIL";
		model="\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58p_rail";
		baseWeapon="rhs_weap_savz58p_rail";
	};
	class rhs_weap_savz58v_rail: rhs_weap_savz58_rail_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_rail_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RAIL";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58V_RAIL";
		model="\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58v_rail";
		recoil="recoil_mxc";
		baseWeapon="rhs_weap_savz58v_rail";
		weaponInfoType="rhs_rscOptics_vz58v_rail";
		rhs_fold="rhs_weap_savz58v_rail_fold";
	};
	class rhs_weap_savz58v_rail_fold: rhs_weap_savz58v_rail
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_rail_fold_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RAIL_FOLD";
		model="\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58v_rail_folded";
		recoil="recoil_mmg_01";
		rhs_fold="rhs_weap_savz58v_rail";
	};
	class rhs_weap_savz58v_ris: rhs_weap_savz58_ris_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_ris_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RIS";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58V_RIS";
		model="\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58p_rail_ris";
		recoil="recoil_mxc";
		baseWeapon="rhs_weap_savz58v_ris";
		weaponInfoType="rhs_rscOptics_vz58v_ris";
		rhs_fold="rhs_weap_savz58v_ris_fold";
		rhs_grip1_change="rhs_weap_savz58v_ris_grip1";
		rhs_grip2_change="rhs_weap_savz58v_ris_grip2";
		rhs_grip3_change="rhs_weap_savz58v_ris_grip3";
	};
	class rhs_weap_savz58v_ris_fold: rhs_weap_savz58v_ris
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_ris_fold_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RIS_FOLD";
		model="\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58p_rail_ris_folded";
		recoil="recoil_mmg_01";
		rhs_fold="rhs_weap_savz58v_ris";
		rhs_grip1_change="rhs_weap_savz58v_ris_fold_grip1";
		rhs_grip2_change="rhs_weap_savz58v_ris_fold_grip2";
		rhs_grip3_change="rhs_weap_savz58v_ris_fold_grip3";
	};
	class rhs_weap_savz58v_ris_grip1: rhs_weap_savz58v_ris
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_savz58v_ris_grip2: rhs_weap_savz58v_ris
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip2";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_savz58v_ris_grip3: rhs_weap_savz58v_ris
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_savz58v_ris_fold_grip1: rhs_weap_savz58v_ris_fold
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_savz58v_ris_fold_grip2: rhs_weap_savz58v_ris_fold
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip2";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_savz58v_ris_fold_grip3: rhs_weap_savz58v_ris_fold
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_savz58p_black: rhs_weap_savz58p
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58p_black_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58P_BLACK";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58P_BLACK";
		baseWeapon="rhs_weap_savz58p_black";
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
		};
	};
	class rhs_weap_savz58v_black: rhs_weap_savz58v
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_black_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_BLACK";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58V_BLACK";
		baseWeapon="rhs_weap_savz58v_black";
		weaponInfoType="rhs_rscOptics_vz58v";
		rhs_fold="rhs_weap_savz58v_fold_black";
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
		};
	};
	class rhs_weap_savz58v_fold_black: rhs_weap_savz58v_fold
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_fold_black_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_FOLD_BLACK";
		rhs_fold="rhs_weap_savz58v_black";
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
		};
	};
	class rhs_weap_savz58p_rail_black: rhs_weap_savz58p_rail
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58p_rail_black_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58P_RAIL_BLACK";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58P_RAIL_BLACK";
		baseWeapon="rhs_weap_savz58p_rail_black";
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
		};
	};
	class rhs_weap_savz58v_rail_black: rhs_weap_savz58v_rail
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_rail_black_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RAIL_BLACK";
		descriptionShort="$STR_RHSGREF_WEAP_SAVZ58V_RAIL_BLACK";
		baseWeapon="rhs_weap_savz58v_rail_black";
		weaponInfoType="rhs_rscOptics_vz58v_rail";
		rhs_fold="rhs_weap_savz58v_rail_fold_black";
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
		};
	};
	class rhs_weap_savz58v_rail_fold_black: rhs_weap_savz58v_rail_fold
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_savz58v_rail_fold_black_ca.paa";
		scope=1;
		displayName="$STR_RHSGREF_WEAP_SAVZ58V_RAIL_FOLD_BLACK";
		rhs_fold="rhs_weap_savz58v_rail_black";
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co"
		};
		hiddenSelectionsMaterials[]=
		{
			"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
			"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
		};
	};
	class rhs_weap_Izh18: Rifle_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_Izh18_ca.paa";
		dlc="RHS_GREF";
		scope=2;
		model="\rhsgref\addons\rhsgref_weapons\izh_18\rhs_izh_18.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_izh18.rtm"
		};
		magazines[]=
		{
			"rhsgref_1Rnd_00Buck",
			"rhsgref_1Rnd_Slug"
		};
		optics=1;
		modelOptics="-";
		displayname="$STR_RHS_WEAP_IZH18_DISPLAYNAME";
		descriptionShort="Shotgun<br />Caliber: 12 gauge";
		weaponInfoType="RscWeaponZeroing";
		modes[]=
		{
			"Single"
		};
		distanceZoomMin=50;
		distanceZoomMax=50;
		discreteDistance[]={50};
		discreteDistanceInitIndex=0;
		reloadAction="RHS_GestureReloadIZh18";
		magazineReloadSwitchPhase=0.43000001;
		reloadSound[]=
		{
			"A3\sounds_f\weapons\M320\M320_reload",
			0.1,
			1,
			30
		};
		reloadMagazineSound[]=
		{
			"\rhsgref\addons\rhsgref_weapon_sounds\reloads\izh18_reload",
			1,
			1,
			30
		};
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundsetshot[]=
				{
					"HunterShotgun_01_Shot_SoundSet",
					"HunterShotgun_01_Tail_SoundSet"
				};
			};
			reloadTime=0.5;
			minRange=1;
			minRangeProbab=0.44999999;
		};
		inertia=0.60000002;
		dexterity=1.5;
		fireSpreadAngle=0.94999999;
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot;  //found empty after stripping
			allowedSlots[]={901};
			mass=71.720001;
		};
	};
	class rhs_weap_vhs2_base: Rifle_Base_F
	{
		dlc="RHS_GREF";
		model="\rhsgref\addons\rhsgref_weapons\vhs2\vhs_d2.p3d";
		magazines[]=
		{
			"rhsgref_30rnd_556x45_vhs2",
			"rhsgref_30rnd_556x45_vhs2_t"
		};
		magazineWell[]=
		{
			"CBA_556x45_G36"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="";
		};
		optics=0;
		hiddenSelections[]=
		{
			"Mat_1",
			"Mat_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons\vhs2\data\vhsmatone_co",
			"\rhsgref\addons\rhsgref_weapons\vhs2\data\vhsmattwo_co"
		};
		maxRecoilSway=0.0080000004;
		swayDecaySpeed=1.25;
		dexterity=1.6;
		recoil="recoil_ktbc";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHS_BarrelRefract";
			};
		};
		memoryPointCamera="eye";
		discreteDistance[]={100,200,300,400};
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_A3_CfgWeapons_XM_base_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs.rtm"
		};
		reloadAction="GestureReloadKatiba";
		magazineReloadSwitchPhase=0.52999997;
		weaponInfoType="rhs_rscOptics_vhs";
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE"
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"Single_AI",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.071000002;
			dispersion=0.0020999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.071000002;
			dispersion=0.0020999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burstRangeMax=3;
			minRange=200;
			minRangeProbab=0.5;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=3;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDispersion=6;
			aiRateOfFireDistance=800;
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		class VHS_BG: UGL_F
		{
			displayName="VHS-BG";
			descriptionShort="VHS-BG";
			useModelOptics=0;
			useExternalOptic=0;
			reloadAction="rhs_GestureReloadM320_ugl";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload",
				0.79432797,
				1,
				10
			};
			magazines[]=
			{
				"rhs_mag_M441_HE",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M397_HET",
				"rhs_mag_M4009",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_M661_green",
				"rhs_mag_M662_red",
				"rhs_mag_M713_red",
				"rhs_mag_M714_white",
				"rhs_mag_M715_green",
				"rhs_mag_M716_yellow"
			};
			magazineWell[]=
			{
				"UGL_40x36"
			};
			cameraDir="gl_look";
			discreteDistance[]={50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[]=
			{
				"gl_eye_50m",
				"gl_eye_100m",
				"gl_eye_150m",
				"gl_eye_200m",
				"gl_eye_250m",
				"gl_eye_300m",
				"gl_eye_350m"
			};
			discreteDistanceInitIndex=1;
			magazineReloadSwitchPhase=0.56;
		};
	};
	class rhs_weap_vhsd2: rhs_weap_vhs2_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_vhsd2_ca.paa";
		scope=2;
		class WeaponSlotsInfo
		{
			mass=85.800003;
			allowedSlots[]={901};
			class CowsSlot: rhs_western_rifle_scopes_slot_short;  //found empty after stripping
			class PointerSlot: rhs_western_rifle_laser_slot;  //found empty after stripping
			class MuzzleSlot: rhs_western_rifle_muzzle_slot;  //found empty after stripping
			class GripodSlot: rhs_western_rifle_gripod_slot;  //found empty after stripping
		};
		displayName="VHS-D2";
		baseWeapon="rhs_weap_vhsd2";
		rhs_grip1_change="rhs_weap_vhsd2_grip1";
		rhs_grip2_change="rhs_weap_vhsd2_grip2";
		rhs_grip3_change="rhs_weap_vhsd2_grip3";
	};
	class rhs_weap_vhsd2_grip1: rhs_weap_vhsd2
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_vhsd2_grip2: rhs_weap_vhsd2
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip2";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_vhsd2_grip3: rhs_weap_vhsd2
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_vhsd2_bg: rhs_weap_vhs2_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_vhsd2_bg_ca.paa";
		scope=2;
		model="\rhsgref\addons\rhsgref_weapons\vhs2\vhs_d2_GL.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_gl.rtm"
		};
		muzzles[]=
		{
			"this",
			"VHS_BG",
			"SAFE"
		};
		class WeaponSlotsInfo
		{
			mass=127.6;
			allowedSlots[]={901};
			class CowsSlot: rhs_western_rifle_scopes_slot_short;  //found empty after stripping
			class PointerSlot: rhs_western_rifle_laser_slot;  //found empty after stripping
			class MuzzleSlot: rhs_western_rifle_muzzle_slot;  //found empty after stripping
		};
		displayName="VHS-D2 (VHS-BG)";
		baseWeapon="rhs_weap_vhsd2_bg";
	};
	class rhs_weap_vhsd2_ct15x: rhs_weap_vhs2_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_vhsd2_ct15x_ca.paa";
		scope=2;
		model="\rhsgref\addons\rhsgref_weapons\vhs2\vhs_d2_ct15x.p3d";
		class WeaponSlotsInfo
		{
			mass=94.599998;
			allowedSlots[]={901};
			class PointerSlot: rhs_western_rifle_laser_slot;  //found empty after stripping
			class MuzzleSlot: rhs_western_rifle_muzzle_slot;  //found empty after stripping
			class GripodSlot: rhs_western_rifle_gripod_slot;  //found empty after stripping
		};
		class OpticsModes
		{
			class Optic
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.166667;
				opticsZoomMax=0.166667;
				opticsZoomInit=0.166667;
				memoryPointCamera="opticview";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=300;
				distanceZoomMax=300;
				opticsPPEffects[]={};
			};
			class Ironsight: Optic
			{
				opticsID=2;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
		displayName="VHS-D2 (CT-1.5x)";
		baseWeapon="rhs_weap_vhsd2_ct15x";
		rhs_grip1_change="rhs_weap_vhsd2_ct15x_grip1";
		rhs_grip2_change="rhs_weap_vhsd2_ct15x_grip2";
		rhs_grip3_change="rhs_weap_vhsd2_ct15x_grip3";
	};
	class rhs_weap_vhsd2_ct15x_grip1: rhs_weap_vhsd2_ct15x
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_vhsd2_ct15x_grip2: rhs_weap_vhsd2_ct15x
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip2";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_vhsd2_ct15x_grip3: rhs_weap_vhsd2_ct15x
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_vhsd2_bg_ct15x: rhs_weap_vhsd2_ct15x
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_vhsd2_bg_ct15x_ca.paa";
		scope=2;
		model="\rhsgref\addons\rhsgref_weapons\vhs2\vhs_d2_ct15x_GL.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_gl.rtm"
		};
		muzzles[]=
		{
			"this",
			"VHS_BG",
			"SAFE"
		};
		class WeaponSlotsInfo
		{
			mass=136.39999;
			allowedSlots[]={901};
			class PointerSlot: rhs_western_rifle_laser_slot;  //found empty after stripping
			class MuzzleSlot: rhs_western_rifle_muzzle_slot;  //found empty after stripping
		};
		displayName="VHS-D2 (VHS-BG/CT-1.5x)";
		baseWeapon="rhs_weap_vhsd2_bg_ct15x";
	};
	class rhs_weap_vhsk2: rhs_weap_vhsd2
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_vhsk2_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons\vhs2\vhs_k2.p3d";
		initspeed=-0.96700001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=82.5;
		};
		displayName="VHS-K2";
		baseWeapon="rhs_weap_vhsk2";
		rhs_grip1_change="rhs_weap_vhsk2_grip1";
		rhs_grip2_change="rhs_weap_vhsk2_grip2";
		rhs_grip3_change="rhs_weap_vhsk2_grip3";
	};
	class rhs_weap_vhsk2_grip1: rhs_weap_vhsk2
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip1";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_vhsk2_grip2: rhs_weap_vhsk2
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip2";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_vhsk2_grip3: rhs_weap_vhsk2
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_vfg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="rhsusf_acc_grip3";
				slot="GripodSlot";
			};
		};
	};
	class rhs_weap_stgw57_base: Rifle_Base_F
	{
		dlc="RHS_GREF";
		magazines[]=
		{
			"rhsgref_24rnd_75x55_Stgw57"
		};
		magazineWell[]=
		{
			"CBA_75x55_STGW57"
		};
		optics=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsgref\addons\rhsgref_weapons\stgw57\Data\stgw57_ca"
		};
		reloadAction="RHS_GestureReloadAK";
		maxRecoilSway=0.0080000004;
		swayDecaySpeed=1.25;
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHS_BarrelRefract";
			};
		};
		weaponInfoType="rhs_rscOptics_stgw57";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=125.4;
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot;  //found empty after stripping
			class PointerSlot;  //found empty after stripping
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_A3_CfgWeapons_XM_base_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58.rtm"
		};
		dexterity=1.6;
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.12;
			dispersion=0.0020999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.12;
			dispersion=0.0020999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\weapons\Khaybar\reload_khaibar",
			1,
			1,
			10
		};
	};
	class rhs_weap_stgw57: rhs_weap_stgw57_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_stgw57_ca.paa";
		scope=0;
		displayName="Stgw 57";
		descriptionShort="Stgw 57";
		model="\rhsgref\addons\rhsgref_weapons\stgw57\rhs_stgw57.p3d";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		baseWeapon="rhs_weap_stgw57";
	};
	class rhs_weap_m3a1_base: Rifle_Base_F
	{
		dlc="RHS_GREF";
		author="$STR_RHS_AUTHOR_FULL";
		magazines[]=
		{
			"rhsgref_30rnd_1143x23_M1911B_SMG",
			"rhsgref_30rnd_1143x23_M1T_SMG",
			"rhsgref_30rnd_1143x23_M1911B_2mag_SMG",
			"rhsgref_30rnd_1143x23_M1T_2mag_SMG"
		};
		magazineWell[]=
		{
			"CBA_45ACP_Grease"
		};
		class Library
		{
			libTextDesc="";
		};
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE"
		};
		optics=0;
		reloadAction="RHS_GestureReloadM3Grease";
		magazineReloadSwitchPhase=0.36000001;
		recoil="recoil_mx";
		cursor="smg";
		maxRecoilSway=0.032499999;
		swayDecaySpeed=1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RifleAssaultCloud";
			};
		};
		weaponInfoType="rhs_rscOptics_m3a1";
		discreteDistance[]={90};
		discreteDistanceInitIndex=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;  //found empty after stripping
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot;  //found empty after stripping
			class UnderBarrelSlot;  //found empty after stripping
		};
		class OpticsModes
		{
			class IronSight
			{
				opticsID=1;
				useModelOptics=0;
				visionMode[]={};
				opticsPPEffects[]={};
				opticsZoomMin=0.27500001;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=90;
				distanceZoomMax=90;
				cameraDir="";
			};
			class Overview: IronSight
			{
				opticsID=2;
				opticsFlare=1;
				opticsDisablePeripherialVision=0;
				memoryPointCamera="opticsView";
				visionMode[]={};
				opticsPPEffects[]={};
			};
		};
		descriptionShort="SMG Rifle<br />Caliber: .45 ACP";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m3a1.rtm"
		};
		dexterity=1.8;
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		reloadMagazineSound[]=
		{
			"rhsgref\addons\rhsgref_weapon_sounds\reloads\m3a1_reload",
			1,
			1,
			10
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.15000001;
			dispersion=0.00131;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_auto_prone_smg_01";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			aiRateOfFireDistance=50;
		};
	};
	class rhs_weap_m3a1: rhs_weap_m3a1_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m3a1_ca.paa";
		scope=2;
		scopeCurator=2;
		model="\rhsgref\addons\rhsgref_weapons2\m3a1\rhs_m3a1.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79.400002;
		};
		inertia=0.34999999;
		dexterity=1.7;
		initSpeed=280;
		displayName="$STR_RHSGREF_WEAP_M3A1_DISPLAY_NAME";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="$str_a3_cfgweapons_hgun_smg_01_library0";
		};
		descriptionShort="Submachine Gun<br />Caliber: .45ACP";
	};
	class rhs_weap_m3a1_specops: rhs_weap_m3a1_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m3a1_specops_ca.paa";
		scope=2;
		scopeCurator=2;
		model="\rhsgref\addons\rhsgref_weapons2\m3a1\rhs_m3a1_specops.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79.400002;
			class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot;  //found empty after stripping
		};
		dexterity=1.7;
		initSpeed=280;
		displayName="$STR_RHSGREF_WEAP_M3A1_SPECOPS_DISPLAY_NAME";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		class Library
		{
			libTextDesc="$str_a3_cfgweapons_hgun_smg_01_library0";
		};
		descriptionShort="Submachine Gun<br />Caliber: .45ACP";
		weaponInfoType="rhs_rscOptics_m3a1";
	};
	class rhs_weap_MP44_base: Rifle_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		dlc="RHS_GREF";
		model="\rhsgref\addons\rhsgref_weapons2\mp44\rhs_mp44.p3d";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"rhsgref_30Rnd_792x33_SmE_StG",
			"rhsgref_25Rnd_792x33_SmE_StG"
		};
		magazineWell[]=
		{
			"CBA_792x33_StG"
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="Assault Rifle<br />Caliber: 7.92x33mm";
		optics=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsgref\addons\rhsgref_weapons2\mp44\data\mp44_co.paa"
		};
		reloadAction="RHS_GestureReloadMP44";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_mp44.rtm"
		};
		maxRecoilSway=0.0080000004;
		swayDecaySpeed=1.25;
		dexterity=1.6;
		inertia=0.60000002;
		recoil="recoil_mk20";
		recoilProne="assaultRifleBase";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHS_BarrelRefract";
			};
		};
		cameraDir="eye_look";
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_200",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800"
		};
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101.2;
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot;  //found empty after stripping
			class PointerSlot;  //found empty after stripping
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE"
		};
		reloadMagazineSound[]=
		{
			"\rhsgref\addons\rhsgref_weapon_sounds\reloads\mp44_reload",
			1.5,
			1,
			30
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.103448;
			dispersion=0.0020999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.103448;
			dispersion=0.0020999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
	};
	class rhs_weap_MP44: rhs_weap_MP44_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_MP44_ca.paa";
		scope=2;
		scopeCurator=2;
		displayName="$STR_RHSGREF_WEAP_MP44_DISPLAY_NAME";
	};
	class rhs_weap_M1garand_Base_F: Rifle_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		dlc="RHS_GREF";
		magazines[]=
		{
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle"
		};
		magazineWell[]={};
		magazineReloadSwitchPhase=0.15000001;
		class Library
		{
			libTextDesc="";
		};
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		class ADS: RHS_SAFE_BASE
		{
			magazines[]=
			{
				"rhs_mag_m1garand_ads"
			};
		};
		muzzles[]=
		{
			"this",
			"SAFE",
			"ADS"
		};
		optics=0;
		reloadAction="RHS_GestureReloadM1Garand";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		recoil="recoil_dmr_01";
		model="\rhsgref\addons\rhsgref_weapons2\m1garand\rhs_m1garand_sa43.p3d";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RifleAssaultCloud";
			};
		};
		weaponInfoType="rhs_rscOptics_m1garand_handler";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_200",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800",
			"eye_900",
			"eye_1000",
			"eye_1100",
			"eye_1200"
		};
		discreteDistanceInitIndex=0;
		cameraDir="eye_look";
		maxZeroing=1200;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;  //found empty after stripping
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot;  //found empty after stripping
			class UnderBarrelSlot;  //found empty after stripping
		};
		opticsZoomMin=0.27500001;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Semi-automatic Rifle<br />Caliber: .30-06";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m1garand.rtm"
		};
		dexterity=1.8;
		inertia=0.94999999;
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.00044999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
			displayName="";
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		reloadMagazineSound[]=
		{
			"\rhsgref\addons\rhsgref_weapon_sounds\reloads\m1garand_reload",
			1,
			1,
			20
		};
		class Eventhandlers: Eventhandlers
		{
			class RHSGREF_garandPing
			{
				fired="_this call RHS_fnc_m1Handler;";
			};
		};
	};
	class rhs_weap_m1garand_sa43: rhs_weap_M1garand_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m1garand_sa43_ca.paa";
		scope=2;
		scopeCurator=2;
		dlc="RHS_GREF";
		displayName="$STR_RHSGREF_WEAP_M1RIFLE_DISPLAY_NAME";
		model="\rhsgref\addons\rhsgref_weapons2\m1garand\rhs_m1garand_sa43.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=94.800003;
			class MuzzleSlot;  //found empty after stripping
			class CowsSlot;  //found empty after stripping
			class PointerSlot: PointerSlot;  //found empty after stripping
			class UnderBarrelSlot;  //found empty after stripping
		};
		class LinkedItems
		{
			class LinkedItemsOptic;  //found empty after stripping
			class LinkedItemsAcc;  //found empty after stripping
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class ItemInfo
		{
			priority=1;
			RMBhint="M1 Garand";
			onHoverText="M1 Garand";
		};
		baseWeapon="rhs_weap_m1garand_sa43";
	};
	class rhs_weap_mg42_base: Rifle_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_mg42_base_ca.paa";
		dlc="RHS_GREF";
		scope=1;
		magazines[]=
		{
			"rhsgref_50Rnd_792x57_SmE_drum",
			"rhsgref_50Rnd_792x57_SmE_notracers_drum",
			"rhsgref_50Rnd_792x57_SmK_drum",
			"rhsgref_50Rnd_792x57_SmK_alltracers_drum",
			"rhsgref_296Rnd_792x57_SmE_belt",
			"rhsgref_296Rnd_792x57_SmE_notracers_belt",
			"rhsgref_296Rnd_792x57_SmK_belt",
			"rhsgref_296Rnd_792x57_SmK_alltracers_belt"
		};
		weaponInfoType="rhs_rscOptics_mg42_handler";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_200",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800",
			"eye_900",
			"eye_1000",
			"eye_1100",
			"eye_1200",
			"eye_1300",
			"eye_1400",
			"eye_1500",
			"eye_1600",
			"eye_1700",
			"eye_1800",
			"eye_1900",
			"eye_2000"
		};
		discreteDistanceInitIndex=0;
		cameraDir="eye_look";
		maxZeroing=2000;
		class GunParticles
		{
			class MG42_WhiteGas
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="RifleAssaultCloud";
			};
			class MuzzleRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHS_BarrelRefractHeavy";
			};
			class MachineGunCartridge
			{
				positionName="shelleject_start";
				directionName="shelleject_end";
				effectName="rhsgref_792CartridgeEject";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=254.5;
			class PointerSlot;  //found empty after stripping
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="AA Sight";
				compatibleItems[]=
				{
					"rhsgref_mg42_acc_AAsight"
				};
			};
			class MuzzleSlot;  //found empty after stripping
			class UnderBarrelSlot;  //found empty after stripping
		};
		maxRecoilSway=0.0080000004;
		swayDecaySpeed=1.25;
		recoil="recoil_zafir";
		opticsZoomMin=0.27500001;
		opticsZoomMax=1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		dexterity=1.8;
		aimTransitionSpeed=0.29627356;
		reloadAction="RHS_GestureReloadMG42";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_MG42.rtm"
		};
		descriptionShort="General Purpose Machine Gun<br />Caliber: 7.92×57mm";
		class Library
		{
			libTextDesc="The MG42 is a 7.92×57mm Mauser general purpose machine gun used extensively by the German armed forces during the second half of World War II.";
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		inertia=0.80000001;
		class manual: Mode_FullAuto
		{
			reloadTime=0.050000001;
			dispersion=0.00079999998;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.57999998;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=8;
			burstRangeMax=12;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.57999998;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.57999998;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=6;
			burstRangeMax=12;
			aiRateOfFire=3;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.57999998;
			maxRange=600;
			maxRangeProbab=0.039999999;
		};
		class far: close
		{
			burst=5;
			burstRangeMax=12;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefY=12;
		aiDispersionCoefX=6;
		magazineReloadSwitchPhase=0.56;
		rhs_deployedHandAnim="RHS_GestureHoldMG42";
	};
	class rhs_weap_mg42: rhs_weap_mg42_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_mg42_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_MG42_DISPLAY_NAME";
		model="\rhsgref\addons\rhsgref_weapons2\mg42\rhs_mg42.p3d";
		baseWeapon="rhs_weap_mg42";
	};
	class rhs_weap_mg42_aa: rhs_weap_mg42
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsgref_mg42_acc_AAsight";
			};
			class LinkedItemsAcc;  //found empty after stripping
		};
	};
	class rhs_weap_m79: Rifle_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_m79_x_ca.paa";
		dlc="RHS_GREF";
		scope=2;
		displayname="M79";
		descriptionShort="M79 Grenade Launcher<br />Caliber: 40mm";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		model="\rhsgref\addons\rhsgref_weapons2\m79\rhs_M79";
		magazines[]=
		{
			"rhs_mag_M441_HE",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M781_Practice",
			"rhs_mag_M397_HET",
			"rhs_mag_M4009",
			"rhs_mag_m576",
			"rhs_mag_M585_white",
			"rhs_mag_M661_green",
			"rhs_mag_M662_red",
			"rhs_mag_M713_red",
			"rhs_mag_M714_white",
			"rhs_mag_M715_green",
			"rhs_mag_M716_yellow"
		};
		magazineWell[]=
		{
			"UGL_40x36"
		};
		magazineReloadSwitchPhase=0.25999999;
		class Library
		{
			libTextDesc="";
		};
		optics=0;
		reloadAction="RHS_GestureReloadM79GL";
		reloadMagazineSound[]=
		{
			"\rhsgref\addons\rhsgref_weapon_sounds\reloads\m79_reload",
			0.79432797,
			1,
			20
		};
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		dexterity=1.8;
		aimTransitionSpeed=0.64999998;
		recoil="recoil_gm6";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RifleAssaultCloud";
			};
		};
		weaponInfoType="RscWeaponZeroing";
		cameraDir="gl_look";
		discreteDistance[]={50,75,100,125,150,175,200,225,250,275,300,325,350,375};
		discreteDistanceCameraPoint[]=
		{
			"gl_eye_50m",
			"gl_eye_75m",
			"gl_eye_100m",
			"gl_eye_125m",
			"gl_eye_150m",
			"gl_eye_175m",
			"gl_eye_200m",
			"gl_eye_225m",
			"gl_eye_250m",
			"gl_eye_275m",
			"gl_eye_300m",
			"gl_eye_325m",
			"gl_eye_350m",
			"gl_eye_375m"
		};
		discreteDistanceInitIndex=0;
		opticsZoomMin=0.27500001;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=50;
		distanceZoomMax=375;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.400002;
			class PointerSlot;  //found empty after stripping
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot;  //found empty after stripping
			class UnderBarrelSlot;  //found empty after stripping
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_M79.rtm"
		};
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE"
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"rhs_m203_shot_SoundSet",
					"UGL_Tail_SoundSet",
					"UGL_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.075000003;
			dispersion=0.0002909;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
	};
	class rhs_weap_fnfal_base: Rifle_Base_F
	{
		dlc="RHS_GREF";
		magazines[]=
		{
			"rhs_mag_20Rnd_762x51_m80_fnfal"
		};
		magazineWell[]=
		{
			"CBA_762x51_FAL",
			"CBA_762x51_FAL_L"
		};
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		optics=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		dexterity=1.6;
		inertia=0.60000002;
		recoil="rhs_recoil_fnfal";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="RHS_BarrelRefract";
			};
		};
		weaponInfoType="rhs_rscOptics_fnfal";
		cameraDir="eye_look";
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_300",
			"eye_400",
			"eye_500",
			"eye_600"
		};
		discreteDistance[]={182,274,365,457,548};
		discreteDistanceInitIndex=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95;
			class CowsSlot;  //found empty after stripping
			class MuzzleSlot: rhs_FAL_muzzle_slot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class PointerSlot;  //found empty after stripping
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Battle Rifle<br />Caliber: 7.62x51mm";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_fnfal.rtm"
		};
		reloadAction="RHS_GestureReloadFNFAL";
		class SAFE: RHS_SAFE_BASE;  //found empty after stripping
		muzzles[]=
		{
			"this",
			"SAFE"
		};
		reloadMagazineSound[]=
		{
			"\rhsgref\addons\rhsgref_weapon_sounds\reloads\l1a1_reload",
			1,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"Single_AI",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.085714303;
			dispersion=0.0020999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.085714303;
			dispersion=0.0020999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burstRangeMax=3;
			minRange=200;
			minRangeProbab=0.5;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=3;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDispersion=6;
			aiRateOfFireDistance=800;
		};
		class fullauto_medium: FullAuto
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=200;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
	};
	class rhs_weap_fnfal50_61_base: rhs_weap_fnfal_base;  //found empty after stripping
	class rhs_weap_fnfal50_62_base: rhs_weap_fnfal_base;  //found empty after stripping
	class rhs_weap_fnfal50_63_base: rhs_weap_fnfal_base;  //found empty after stripping
	class rhs_weap_fnfal50_64_base: rhs_weap_fnfal_base;  //found empty after stripping
	class rhs_weap_l1a1_base: rhs_weap_fnfal_base
	{
		displayname="L1A1 (Polymer)";
		model="\rhsgref\addons\rhsgref_weapons3\fnfal\rhs_l1a1.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: rhs_l1a1_rifle_scopes_slot;  //found empty after stripping
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhsgref_acc_falMuzzle_l1a1";
			};
		};
		modes[]=
		{
			"Single",
			"Single_AI",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Single
		{
			reloadTime=0.088888898;
		};
		class Single_AI: Single
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burstRangeMax=3;
			minRange=200;
			minRangeProbab=0.5;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=3;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDispersion=6;
			aiRateOfFireDistance=800;
		};
	};
	class rhs_weap_l1a1_wood_base: rhs_weap_l1a1_base
	{
		displayname="L1A1 (Wood)";
		model="\rhsgref\addons\rhsgref_weapons3\fnfal\rhs_l1a1_wood.p3d";
	};
	class rhs_weap_l1a1: rhs_weap_l1a1_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_l1a1_ca.paa";
		scope=2;
		scopeArsenal=2;
		baseWeapon="rhs_weap_l1a1";
	};
	class rhs_weap_l1a1_wood: rhs_weap_l1a1_wood_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_l1a1_wood_ca.paa";
		scope=2;
		scopeArsenal=2;
		baseWeapon="rhs_weap_l1a1_wood";
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};
	class rhs_weap_rpg75: Launcher_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_rpg75_ca.paa";
		dlc="RHS_GREF";
		scope=2;
		displayName="RPG-75";
		descriptionShort="Rocket launcher<br/>Caliber: 68mm<br/>Type: Single-shot Anti-tank";
		rhs_disposable=1;
		reloadTime=1;
		magazineReloadTime=1;
		model="\rhsgref\addons\rhsgref_weapons2\rpg75\rhs_rpg75.p3d";
		modelOptics="-";
		aimTransitionSpeed=0.75;
		recoil="recoil_single_law";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		magazines[]=
		{
			"rhs_rpg75_mag"
		};
		reloadAction="ReloadRPG";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_rpg75.rtm"
		};
		class StandardSound
		{
			soundSetShot[]=
			{
				"Launcher_RPG32_Shot_SoundSet",
				"Launcher_RPG32_Tail_SoundSet"
			};
		};
		showToPlayer=1;
		minRange=10;
		minRangeProbab=0.89999998;
		midRange=200;
		midRangeProbab=0.69999999;
		maxRange=350;
		maxRangeProbab=0.1;
		aiRateOfFire=7;
		aiRateOfFireDistance=300;
		dispersion=0.15000001;
		weaponInfoType="rhs_rscOptics_disposable";
		optics=1;
		class OpticsModes
		{
			class ironsight
			{
				opticsID=2;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"WeaponsOptics"
				};
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=0.60000002;
				opticsZoomInit=0.60000002;
				visionMode="";
				discreteDistanceInitIndex=0;
				discreteDistance[]={200};
				cameraDir="eye_look";
				discreteDistanceCameraPoint[]=
				{
					"eye"
				};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
		class Library
		{
			libTextDesc="The RPG-75 is a portable, disposable, single-shot anti-tank weapon, developed in the 1970s in Czechoslovakia.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=52.799999;
		};
		class ItemInfo
		{
			priority=3;
			RMBhint="$STR_RHS_RPG26_NAME";
			onHoverText="$STR_RHS_RPG26_NAME";
		};
		class Eventhandlers: EventHandlers
		{
			class RHS_DisposableWeapon
			{
				fired="_this call rhs_fnc_disposable;";
			};
		};
	};
	class rhs_weap_rpg75_used: rhs_weap_rpg75
	{
		scope=1;
		displayname="RPG-75 (used)";
		weaponInfoType="RscWeaponZeroing";
		magazines[]=
		{
			"rhs_launcher_dummy_mag"
		};
		model="\rhsgref\addons\rhsgref_weapons2\rpg75\rhs_rpg75_used.p3d";
	};
	class rhs_weap_panzerfaust60: Launcher_Base_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_panzerfaust60_ca.paa";
		dlc="RHS_GREF";
		scope=2;
		displayname="Panzerfaust 60";
		descriptionShort="Rocket launcher<br/>Caliber: 149mm<br/>Type: Single-shot Anti-tank";
		model="\rhsgref\addons\rhsgref_weapons2\pzf\rhs_pzf60.p3d";
		weaponInfoType="rhs_rscOptics_disposable";
		recoil="recoil_single_law";
		rhs_disposable=1;
		reloadTime=1;
		magazineReloadTime=1;
		aimTransitionSpeed=0.75;
		inertia=0.80000001;
		dispersion=0.25;
		magazines[]=
		{
			"rhs_panzerfaust60_mag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_pzf60.rtm"
		};
		class StandardSound
		{
			soundSetShot[]=
			{
				"Launcher_RPG32_Shot_SoundSet",
				"Launcher_RPG32_Tail_SoundSet"
			};
		};
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		showToPlayer=1;
		minRange=10;
		minRangeProbab=0.89999998;
		midRange=60;
		midRangeProbab=0.69999999;
		maxRange=80;
		maxRangeProbab=0.1;
		aiRateOfFire=4;
		aiRateOfFireDistance=60;
		optics=1;
		modelOptics="-";
		class OpticsModes
		{
			class ironsight
			{
				opticsID=2;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"WeaponsOptics"
				};
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=0.60000002;
				opticsZoomInit=0.60000002;
				visionMode="";
				discreteDistanceInitIndex=0;
				discreteDistance[]={30,60,80};
				cameraDir="eye_look";
				discreteDistanceCameraPoint[]=
				{
					"eye_30",
					"eye_60",
					"eye_80"
				};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
		baseWeapon="rhs_weap_panzerfaust60";
		class Eventhandlers: EventHandlers
		{
			class RHS_DisposableWeapon
			{
				fired="_this call rhs_fnc_disposable;";
			};
		};
	};
	class rhs_weap_panzerfaust60_used: rhs_weap_panzerfaust60
	{
		scope=1;
		displayname="Panzerfaust 60 (used)";
		weaponInfoType="RscWeaponZeroing";
		magazines[]=
		{
			"rhs_launcher_dummy_mag"
		};
		model="\rhsgref\addons\rhsgref_weapons2\pzf\rhs_pzf60_used.p3d";
	};
	class acc_pointer_IR;
	class acc_flashlight;
	class muzzle_snds_H;
	class rhsusf_acc_compm4;
	class rhs_acc_scope_base: ItemCore
	{
		dlc="RHS_GREF";
		scope=0;
		displayName="$STR_RHS_ACC_PSO1M2";
		picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pso1_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\acc\scopes\pso1\rhs_pso1";
		descriptionShort="$STR_RHS_ACC_PSO1M2_SD";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13.64;
			RMBhint="Optical Sniper Sight";
			optics=1;
			modelOptics="\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso_scope";
			class OpticsModes
			{
				class pso1_scope
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					discreteDistance[]={100,200,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex=2;
					opticsZoomMin="0.35/4";
					opticsZoomMax="0.35/4";
					opticsZoomInit="0.35/4";
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=200;
					distanceZoomMax=1000;
					cameraDir="";
				};
				class rhs_1p29_iron
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye_svd";
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
			};
		};
		inertia=0.2;
	};
	class rhsgref_acc_RX01_camo: rhsusf_acc_compm4
	{
		dlc="RHS_GREF";
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_ACC_RX01_CAMO";
		picture="\rhsgref\addons\rhsgref_weapons\icons\rhs_RX01filter_camo_icon_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons\acc\scopes\rx01_camo\rhs_reflexsight_camo.p3d";
		descriptionShort="$STR_RHSUSF_ACC_COLLIMATOR_SD";
		inertia=0;
	};
	class rhsgref_acc_RX01_NoFilter_camo: rhsusf_acc_compm4
	{
		dlc="RHS_GREF";
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHSGREF_ACC_RX01NOFILTER_CAMO";
		picture="\rhsgref\addons\rhsgref_weapons\icons\rhs_RX01nofilter_camo_icon_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons\acc\scopes\rx01_camo\rhs_reflexsight_nofilter_camo.p3d";
		descriptionShort="$STR_RHSUSF_ACC_COLLIMATOR_SD";
		inertia=0;
	};
	class rhs_acc_mtz: rhs_acc_scope_base
	{
		scope=1;
		scopeArsenal=0;
		author="$STR_RHS_AUTHOR_FULL";
		weaponInfoType="rhs_rscOptics_acc_mtz";
		displayName="MTZ Rail";
		picture="\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_npz_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\acc\scopes\npz\rhs_npz";
		inertia=0;
	};
	class rhsgref_muzzleFlash_L1A1: ItemCore
	{
		scope=2;
		model="rhsgref\addons\rhsgref_muzzleflash\models\muzzle_flash_fnfal.p3d";
	};
	class rhsgref_silencer_base: muzzle_snds_H
	{
		dlc="RHS_GREF";
		scope=0;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=7;
			class MagazineCoef
			{
				initSpeed=1.01;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.2;
				audibleFire=0.40000001;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			soundTypeIndex=1;
			inertia=0.2;
		};
	};
	class rhsgref_sdn6_suppressor: rhsgref_silencer_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_RHSGREF_SDN6_SUPPRESSOR_DISPLAYNAME";
		picture="\rhsgref\addons\rhsgref_weapons\icons\sdn6.paa";
		model="\rhsgref\addons\rhsgref_weapons\m38\rhs_sdn6";
	};
	class rhsgref_acc_zendl: rhsgref_silencer_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		picture="\rhsgref\addons\rhsgref_weapons\gear_acc\rhs_acc_zendlcomp_ca";
		model="\rhsgref\addons\rhsgref_weapons\acc\muzzle\zendl_comp\zendl.p3d";
		displayName="$STR_RHSGREF_ACC_ZENDL_DISPLAYNAME";
		class ItemInfo: ItemInfo
		{
			mass=5;
			soundTypeIndex=0;
			class MagazineCoef: MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef: AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.85000002;
				audibleFire=1;
				visibleFireTime=0.85000002;
				audibleFireTime=1;
				cost=1;
			};
			class MuzzleCoef: MuzzleCoef
			{
				dispersionCoef="0.96f";
				fireLightCoef="0.9f";
				recoilCoef="0.79f";
				recoilProneCoef="0.79f";
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			inertia=0.2;
		};
		inertia=0;
	};
	class rhsgref_acc_falMuzzle_l1a1: rhsgref_silencer_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		picture="\rhsgref\addons\rhsgref_weapons\gear_acc\rhs_acc_zendlcomp_ca";
		model="\rhsgref\addons\rhsgref_weapons3\acc\muzzle\rhs_L1A1_flashHider";
		displayName="L1A1 SLR Flash Hider";
		class ItemInfo: ItemInfo
		{
			mass=5;
			soundTypeIndex=0;
			class MagazineCoef: MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef: AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.94999999;
				audibleFire=1;
				visibleFireTime=0.85000002;
				audibleFireTime=1;
				cost=1;
			};
			class MuzzleCoef: MuzzleCoef
			{
				dispersionCoef="0.97f";
				fireLightCoef="0.9f";
				recoilCoef="0.95f";
				recoilProneCoef="0.95f";
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="rhsgref_muzzleFlash_L1A1";
		};
		inertia=0;
	};
	class rhsgref_K98k_acc_sighthood_add: acc_flashlight
	{
		dlc="RHS_GREF";
		scope=2;
		scopeCurator=2;
		displayName="K98k Sight Hood";
		descriptionShort="Adds the hood over the K98k's front sight";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_k98k_sighthood_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons2\k98k\sighthood_byf44";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=2;
			class Pointer;  //found empty after stripping
			class FlashLight
			{
				color[]={0,0,0};
				ambient[]={0,0,0};
				size=0;
				innerAngle=0;
				outerAngle=0;
				coneFadeCoef=10;
				intensity=0;
				dayLight=0;
				useFlare=0;
				FlareSize=0;
				flareMaxDistance="100.0f";
				onlyInNvg=0;
				position="flashdir";
				direction="flash";
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=0;
					hardLimitEnd=0;
				};
				scale[]={0};
			};
		};
		inertia=0.1;
	};
	class rhsgref_mg42_acc_AAsight: ItemCore
	{
		dlc="RHS_GREF";
		scope=2;
		displayName="MG42 AA Sight";
		picture="\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_AAsight_ca.paa";
		model="\rhsgref\addons\rhsgref_weapons2\mg42\rhs_mg42_AAsight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=4;
			RMBhint="Anti-Aircraft Sight";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="opticview";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0.1;
	};
	class rhsgref_acc_l2a2: rhs_acc_scope_base
	{
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhsgref_acc_l1a1_l2a2_ca.paa";
		scope=1;
		author="$STR_RHS_AUTHOR_FULL";
		displayName="L2A2 SUIT";
		model="\rhsgref\addons\rhsgref_weapons3\acc\scopes\l2a2\rhs_l2a2.p3d";
		descriptionShort="Optical Sight<br />Magnification: 4x";
		weaponInfoType="rhs_rscOptics_acc_l2a2";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=17.6;
			RMBhint="Optical Sight";
			optics=1;
			modelOptics="\rhsgref\addons\rhsgref_weapons3\acc\scopes\l2a2\Optic\rhs_L2A2_SUIT_scope.p3d";
			class OpticsModes
			{
				class rhs_scope
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					discreteDistance[]={300,500};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.087499999;
					opticsZoomMax=0.087499999;
					opticsZoomInit=0.087499999;
					memoryPointCamera="opticview";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=200;
					distanceZoomMax=1000;
					cameraDir="";
				};
				class rhs_iron
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsZoomMin=0.27500001;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					discreteDistance[]={440};
					discreteDistanceInitIndex=0;
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class rhsgref_acc_l2a2_3d: rhsgref_acc_l2a2
	{
		weaponInfoType="rhs_rscOptics_acc_l2a2_3d";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class rhs_scope: rhs_scope
				{
					useModelOptics=0;
					memoryPointCamera="eye";
					opticsZoomMin=0.087499999;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
				};
				class rhs_iron: rhs_iron;  //found empty after stripping
			};
		};
	};
	class rhsgref_acc_l1a1_l2a2: rhsgref_acc_l2a2
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		rhs_optic_base="rhsgref_acc_l1a1_l2a2";
	};
	class rhsgref_acc_l1a1_l2a2_3d: rhsgref_acc_l2a2_3d
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=1;
		rhs_optic_base="rhsgref_acc_l1a1_l2a2";
	};
	class rhsgref_acc_anpvs2_base: rhs_acc_scope_base
	{
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhsgref_acc_l1a1_anpvs2_ca.paa";
		scope=0;
		displayName="AN/PVS-2";
		model="\rhsgref\addons\rhsgref_weapons3\acc\scopes\pvs2\rhs_pvs2.p3d";
		descriptionShort="$STR_RHS_ACC_1PN931_SD";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=14;
			RMBhint="Optical Sniper Night Sight";
			optics=1;
			modelOptics="\rhsgref\addons\rhsgref_weapons3\acc\scopes\pvs2\Optic\rhs_anpvs2_scope.p3d";
			class OpticsModes
			{
				class 1pn93_scope
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"rhs_ANPVS2_Abera",
						"rhs_ANPVS2_Blur",
						"rhs_ANPVS2_FilmGrain"
					};
					discreteDistance[]={150};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.0625;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=150;
					distanceZoomMax=150;
					cameraDir="";
				};
				class rhs_1p29_iron
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye2";
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
			};
		};
		inertia=0.25;
	};
	class rhsgref_acc_l1a1_anpvs2: rhsgref_acc_anpvs2_base
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
	};
	class rhs_weap_m21s_eo: rhs_weap_m21s_pr
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_552";
			};
		};
	};
	class rhs_weap_m76_pso: rhs_weap_m76
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_pso1m2";
			};
		};
	};
	class rhs_weap_vhsd2_eo: rhs_weap_vhsd2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_552";
			};
		};
	};
	class rhs_weap_l1a1_suit: rhs_weap_l1a1
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsgref_acc_l1a1_l2a2";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhsgref_acc_falMuzzle_l1a1";
			};
		};
	};
	class rhs_weap_l1a1_pvs2: rhs_weap_l1a1
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsgref_acc_l1a1_anpvs2";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhsgref_acc_falMuzzle_l1a1";
			};
		};
	};
	class rhs_weap_pya;
	class rhs_weap_tt33: rhs_weap_pya
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_tt33_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_TT33";
		descriptionShort="Pistol<br/>Caliber: 7.62x25mm";
		model="\rhsgref\addons\rhsgref_weapons\tt33\rhs_tt33";
		modelOptics="-";
		class SAFE_PISTOL: RHS_SAFE_BASE
		{
			discreteDistance[]={25};
			discreteDistanceCameraPoint[]=
			{
				"eye_25"
			};
			cameraDir="eye_look";
		};
		muzzles[]=
		{
			"this",
			"SAFE_PISTOL"
		};
		weaponInfoType="rhs_rscOptics_pistol";
		class WeaponSlotsInfo
		{
			mass=18.26;
			class CowsSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class MuzzleSlot;  //found empty after stripping
			class PointerSlot;  //found empty after stripping
			holsterOffset="holster";
			holsterScale=0.87;
		};
		discreteDistance[]={25};
		discreteDistanceCameraPoint[]=
		{
			"eye_25"
		};
		cameraDir="eye_look";
		maxZeroing=25;
		magazines[]=
		{
			"rhs_mag_762x25_8"
		};
		magazineWell[]=
		{
			"CBA_762x25_TT"
		};
		dispersion=0.02;
		ffCount=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		baseWeapon="rhs_weap_tt33";
	};
	class rhs_weap_type94_new: rhs_weap_pya
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsgref\addons\rhsgref_inventoryicons\data\weapons\rhs_weap_type94_new_ca.paa";
		scope=2;
		displayName="$STR_RHSGREF_WEAP_TYPE94";
		descriptionShort="Pistol<br/>Caliber: 8x22mm";
		model="\rhsgref\addons\rhsgref_weapons2\type94\rhs_type94_new.p3d";
		modelOptics="-";
		muzzles[]=
		{
			"this",
			"SAFE_PISTOL"
		};
		weaponInfoType="rhs_rscOptics_pistol";
		class WeaponSlotsInfo
		{
			mass=18.26;
			class CowsSlot
			{
				iconPosition[]={0,0};
				iconScale=1;
				iconPicture="\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint="Left";
			};
			class MuzzleSlot;  //found empty after stripping
			class PointerSlot;  //found empty after stripping
			holsterOffset="holster";
			holsterScale=0.87;
		};
		discreteDistance[]={25};
		discreteDistanceCameraPoint[]=
		{
			"eye_25"
		};
		cameraDir="eye_look";
		maxZeroing=25;
		magazines[]=
		{
			"rhs_mag_6x8mm_mhp"
		};
		dispersion=0.02;
		ffCount=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		baseWeapon="rhs_weap_type94_new";
	};
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"rhsgref_Throw_Grenade",
			"rhsgref_Throw_ATGrenade",
			"rhsgref_Throw_TNT_x2",
			"rhsgref_Throw_sb3kg",
			"rhsgref_Throw_m1939",
			"rhsgref_Throw_m1939_f",
			"rhsgref_Throw_nbhgr39",
			"rhsgref_Throw_sthgr24",
			"rhsgref_Throw_sthgr24_f",
			"rhsgref_Throw_sthgr24_x7bundle",
			"rhsgref_Throw_sthgr43",
			"rhsgref_Throw_sthgr43_f",
			"rhsgref_Throw_mki",
			"rhsgref_Throw_mkii",
			"rhsgref_Throw_mkiii",
			"rhsgref_Throw_anm8",
			"rhsgref_Throw_m15"
		};
		class ThrowMuzzle: GrenadeLauncher;  //found empty after stripping
		class rhsgref_Throw_Grenade: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_mag_f1"
			};
		};
		class rhsgref_throw_ATGrenade: ThrowMuzzle
		{
			magazines[]=
			{
				"rhsgref_mag_rkg3em"
			};
			class Eventhandlers
			{
				class RHS_ThrowAction
				{
					fired="[_this select 0, _this select 6] call RHS_FNC_RKG3_IMPACT;";
				};
			};
		};
		class rhsgref_Throw_tnt_x2: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_charge_tnt_x2_mag"
			};
		};
		class rhsgref_Throw_sb3kg: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_charge_sb3kg_mag"
			};
		};
		class rhsgref_Throw_m1939: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_m1939e_mag",
				"rhs_grenade_m1939l_mag"
			};
		};
		class rhsgref_Throw_m1939_f: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_m1939e_f_mag",
				"rhs_grenade_m1939l_f_mag"
			};
		};
		class rhsgref_Throw_nbhgr39: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_nbhgr39_mag",
				"rhs_grenade_nbhgr39B_mag"
			};
		};
		class rhsgref_Throw_sthgr24: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr24_mag"
			};
		};
		class rhsgref_Throw_sthgr24_f: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr24_heerfrag_mag",
				"rhs_grenade_sthgr24_SSfrag_mag"
			};
		};
		class rhsgref_Throw_sthgr24_x7bundle: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr24_x7bundle_mag"
			};
		};
		class rhsgref_Throw_sthgr43: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr43_mag"
			};
		};
		class rhsgref_Throw_sthgr43_f: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_sthgr43_heerfrag_mag",
				"rhs_grenade_sthgr43_SSfrag_mag"
			};
		};
		class rhsgref_Throw_mki: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_mki_mag"
			};
		};
		class rhsgref_Throw_mkii: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_mkii_mag"
			};
		};
		class rhsgref_Throw_mkiii: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_mkiiia1_mag"
			};
		};
		class rhsgref_Throw_anm8: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_anm8_mag"
			};
		};
		class rhsgref_Throw_m15: ThrowMuzzle
		{
			magazines[]=
			{
				"rhs_grenade_m15_mag"
			};
		};
	};
	class Default;
	class Put: Default
	{
		muzzles[]+=
		{
			"rhsgref_Mine_Muzzle"
		};
		class PutMuzzle: Default;  //found empty after stripping
		class rhsgref_Mine_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"rhs_mine_smine35_press_mag",
				"rhs_mine_smine35_trip_mag",
				"rhs_mine_smine44_press_mag",
				"rhs_mine_smine44_trip_mag",
				"rhs_mine_glasmine43_hz_mag",
				"rhs_mine_glasmine43_bz_mag",
				"rhs_mine_stockmine43_2m_mag",
				"rhs_mine_stockmine43_4m_mag",
				"rhs_mine_a200_bz_mag",
				"rhs_mine_a200_dz35_mag",
				"rhs_mine_TM43_mag",
				"rhs_mine_m2a3b_press_mag",
				"rhs_mine_m2a3b_trip_mag",
				"rhs_mine_m3_pressure_mag",
				"rhs_mine_mk2_pressure_mag",
				"rhs_mine_M3_tripwire_mag",
				"rhs_mine_Mk2_tripwire_mag",
				"rhs_mine_M7A2_mag",
				"rhs_charge_M2tet_x2_mag"
			};
		};
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class acc_mtz
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_mtz.sqf";
				description="MTZ mounting handler";
			};
			class acc_mtz_handler
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_mtz_dismount.sqf";
				description="MTZ dismounting handler";
			};
			class rkg3_impact
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_rkg3_impact.sqf";
			};
			class sight_l2a2
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_sight_l2a2.sqf";
			};
			class virtualAmmoBoxGREF
			{
				file="\rhsgref\addons\rhsgref_c_weapons\scripts\virtualAmmoBox.sqf";
				description="[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxGREF, make a object virtual ammo box with GREF gear inside";
			};
			class m1Handler
			{
				file="RHSGREF\addons\rhsgref_c_weapons\scripts\rhs_m1Handler.sqf";
				description="Handles the Ping Sound.";
			};
			class m1garand_ads
			{
				file="RHSGREF\addons\rhsgref_c_weapons\scripts\rhs_m1garand_ads.sqf";
			};
		};
	};
};
class CfgSounds
{
	sounds[]={};
	class rhs_kar98k_bolt
	{
		name="rhs_m2010_bolt";
		sound[]=
		{
			"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt",
			0.41999999,
			1,
			20
		};
		titles[]={};
	};
};
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		RHS_GestureRechamberM1903A1[]=
		{
			"RHS_GestureRechamberM1903A1_Context",
			"Gesture"
		};
		RHS_GestureRechamberM38[]=
		{
			"RHS_GestureRechamberM38_Context",
			"Gesture"
		};
		RHS_GestureReloadM1903A1="RHS_GestureReloadM1903A1";
		RHS_GestureReloadM38="RHS_GestureReloadM38";
		RHS_GestureReloadM1Garand="RHS_GestureReloadM1Garand";
		RHS_GestureReloadM3Grease="RHS_GestureReloadM3Grease";
		RHS_GestureReloadMG42="RHS_GestureReloadMG42";
		RHS_GestureReloadMP44="RHS_GestureReloadMP44";
		RHS_GestureReloadFNFAL="RHS_GestureReloadFNFAL";
		RHS_GestureReloadIZh18="RHS_GestureReloadIZh18";
		RHS_GestureReloadM79GL="RHS_GestureReloadM79GL";
		rhs_GestureHoldMG42="rhs_GestureHoldMG42";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			RHS_GestureRechamberM1903A1[]=
			{
				"RHS_GestureRechamberM1903A1_Context",
				"Gesture"
			};
			RHS_GestureReloadM1903A1[]=
			{
				"RHS_GestureReloadM1903A1",
				"Gesture"
			};
			RHS_GestureRechamberM38[]=
			{
				"RHS_GestureRechamberM38_Context",
				"Gesture"
			};
			RHS_GestureReloadM38[]=
			{
				"RHS_GestureReloadM38",
				"Gesture"
			};
			RHS_GestureReloadM1Garand[]=
			{
				"RHS_GestureReloadM1Garand",
				"Gesture"
			};
			RHS_GestureReloadM3Grease[]=
			{
				"RHS_GestureReloadM3Grease",
				"Gesture"
			};
			RHS_GestureReloadMG42[]=
			{
				"RHS_GestureReloadMG42",
				"Gesture"
			};
			RHS_GestureReloadMP44[]=
			{
				"RHS_GestureReloadMP44",
				"Gesture"
			};
			RHS_GestureReloadFNFAL[]=
			{
				"RHS_GestureReloadFNFAL",
				"Gesture"
			};
			RHS_GestureReloadIZh18[]=
			{
				"RHS_GestureReloadIZh18",
				"Gesture"
			};
			RHS_GestureReloadM79GL[]=
			{
				"RHS_GestureReloadM79GL",
				"Gesture"
			};
			rhs_GestureHoldMG42[]=
			{
				"RHS_GestureHoldMG42",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			RHS_GestureRechamberM1903A1[]=
			{
				"RHS_GestureRechamberM1903A1_Prone",
				"Gesture"
			};
			RHS_GestureReloadM1903A1[]=
			{
				"RHS_GestureReloadM1903A1_Prone",
				"Gesture"
			};
			RHS_GestureRechamberM38[]=
			{
				"RHS_GestureRechamberM38_Prone",
				"Gesture"
			};
			RHS_GestureReloadM38[]=
			{
				"RHS_GestureReloadM38_Prone",
				"Gesture"
			};
			RHS_GestureReloadM1Garand[]=
			{
				"RHS_GestureReloadM1Garand_Prone",
				"Gesture"
			};
			RHS_GestureReloadM3Grease[]=
			{
				"RHS_GestureReloadM3Grease_Prone",
				"Gesture"
			};
			RHS_GestureReloadMG42[]=
			{
				"RHS_GestureReloadMG42_Prone",
				"Gesture"
			};
			RHS_GestureReloadMP44[]=
			{
				"RHS_GestureReloadMP44_Prone",
				"Gesture"
			};
			RHS_GestureReloadFNFAL[]=
			{
				"RHS_GestureReloadFNFAL_Prone",
				"Gesture"
			};
			RHS_GestureReloadIZh18[]=
			{
				"RHS_GestureReloadIZh18_Prone",
				"Gesture"
			};
			RHS_GestureReloadM79GL[]=
			{
				"RHS_GestureReloadM79GL_Prone",
				"Gesture"
			};
			rhs_GestureHoldMG42[]=
			{
				"RHS_GestureHoldMG42_Prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureRechamberM1903A1[]=
			{
				"RHS_GestureRechamberM1903A1_Prone",
				"Gesture"
			};
			RHS_GestureReloadM1903A1[]=
			{
				"RHS_GestureReloadM1903A1_Prone",
				"Gesture"
			};
			RHS_GestureRechamberM38[]=
			{
				"RHS_GestureRechamberM38_Prone",
				"Gesture"
			};
			RHS_GestureReloadM38[]=
			{
				"RHS_GestureReloadM38_Prone",
				"Gesture"
			};
			RHS_GestureReloadM1Garand[]=
			{
				"RHS_GestureReloadM1Garand_Prone",
				"Gesture"
			};
			RHS_GestureReloadM3Grease[]=
			{
				"RHS_GestureReloadM3Grease_Prone",
				"Gesture"
			};
			RHS_GestureReloadMG42[]=
			{
				"RHS_GestureReloadMG42_Context",
				"Gesture"
			};
			RHS_GestureReloadMP44[]=
			{
				"RHS_GestureReloadMP44_Context",
				"Gesture"
			};
			RHS_GestureReloadFNFAL[]=
			{
				"RHS_GestureReloadFNFAL_Context",
				"Gesture"
			};
			RHS_GestureReloadIZh18[]=
			{
				"RHS_GestureReloadIZh18_Context",
				"Gesture"
			};
			RHS_GestureReloadM79GL[]=
			{
				"RHS_GestureReloadM79GL_Context",
				"Gesture"
			};
			rhs_GestureHoldMG42[]=
			{
				"RHS_GestureHoldMG42_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureRechamberM1903A1[]=
			{
				"RHS_GestureRechamberM1903A1_Context",
				"Gesture"
			};
			RHS_GestureReloadM1903A1[]=
			{
				"RHS_GestureReloadM1903A1_Context",
				"Gesture"
			};
			RHS_GestureRechamberM38[]=
			{
				"RHS_GestureRechamberM38_Context",
				"Gesture"
			};
			RHS_GestureReloadM38[]=
			{
				"RHS_GestureReloadM38_Context",
				"Gesture"
			};
			RHS_GestureReloadM1Garand[]=
			{
				"RHS_GestureReloadM1Garand_Context",
				"Gesture"
			};
			RHS_GestureReloadM3Grease[]=
			{
				"RHS_GestureReloadM3Grease_Context",
				"Gesture"
			};
			RHS_GestureReloadMG42[]=
			{
				"RHS_GestureReloadMG42_Context",
				"Gesture"
			};
			RHS_GestureReloadMP44[]=
			{
				"RHS_GestureReloadMP44_Context",
				"Gesture"
			};
			RHS_GestureReloadFNFAL[]=
			{
				"RHS_GestureReloadFNFAL_Context",
				"Gesture"
			};
			RHS_GestureReloadIZh18[]=
			{
				"RHS_GestureReloadIZh18_Context",
				"Gesture"
			};
			RHS_GestureReloadM79GL[]=
			{
				"RHS_GestureReloadM79GL_Context",
				"Gesture"
			};
			rhs_GestureHoldMG42[]=
			{
				"RHS_GestureHoldMG42_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			RHS_GestureRechamberM1903A1[]=
			{
				"RHS_GestureRechamberM1903A1_Context",
				"Gesture"
			};
			RHS_GestureReloadM1903A1[]=
			{
				"RHS_GestureReloadM1903A1_Context",
				"Gesture"
			};
			RHS_GestureRechamberM38[]=
			{
				"RHS_GestureRechamberM38_Context",
				"Gesture"
			};
			RHS_GestureReloadM38[]=
			{
				"RHS_GestureReloadM38_Context",
				"Gesture"
			};
			RHS_GestureReloadM1Garand[]=
			{
				"RHS_GestureReloadM1Garand_Context",
				"Gesture"
			};
			RHS_GestureReloadM3Grease[]=
			{
				"RHS_GestureReloadM3Grease_Context",
				"Gesture"
			};
			RHS_GestureReloadMG42[]=
			{
				"RHS_GestureReloadMG42_Prone",
				"Gesture"
			};
			RHS_GestureReloadMP44[]=
			{
				"RHS_GestureReloadMP44_Prone",
				"Gesture"
			};
			RHS_GestureReloadFNFAL[]=
			{
				"RHS_GestureReloadFNFAL_Prone",
				"Gesture"
			};
			RHS_GestureReloadIZh18[]=
			{
				"RHS_GestureReloadIZh18_Prone",
				"Gesture"
			};
			RHS_GestureReloadM79GL[]=
			{
				"RHS_GestureReloadM79GL_Prone",
				"Gesture"
			};
			rhs_GestureHoldMG42[]=
			{
				"RHS_GestureHoldMG42_Context",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class RHS_GestureRechamberM1903A1: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\rechamber_1903a1_standing.rtm";
			speed=0.59998;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class RHS_GestureRechamberM1903A1_Prone: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\rechamber_1903a1_prone.rtm";
			speed=0.59998;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.0099999998;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class RHS_GestureRechamberM1903A1_Context: RHS_GestureRechamberM1903A1
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM1903A1: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_1903a1_standing.rtm";
			speed=0.1875;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.02667,0,0.93333,0,0.94889998,1};
			leftHandIKEnd=1;
		};
		class RHS_GestureReloadM1903A1_Prone: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_1903a1_prone.rtm";
			speed=0.1875;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.02667,0,0.93333,0,0.94889998,1};
			leftHandIKEnd=1;
		};
		class RHS_GestureReloadM1903A1_Context: RHS_GestureReloadM1903A1
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureRechamberM38: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\9130_rechamber_standing.rtm";
			speed=0.59998;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class RHS_GestureRechamberM38_Prone: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\9130_rechamber_prone.rtm";
			speed=0.59998;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.0099999998;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
		};
		class RHS_GestureRechamberM38_Context: RHS_GestureRechamberM38
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM38: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\9130_reload_standing.rtm";
			speed=-4.9333;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.033,0,0.91000003,0,0.94,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.033,0,0.96600002,0,0.99000001,1};
			leftHandIKEnd=1;
		};
		class RHS_GestureReloadM38_Prone: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\9130_reload_prone.rtm";
			speed=0.1875;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.02667,0,0.93333,0,0.94889998,1};
			leftHandIKEnd=1;
		};
		class RHS_GestureReloadM38_Context: RHS_GestureReloadM38
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM1Garand: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_m1_garand.rtm";
			speed=0.240385;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.03125,0,0.88999999,0,0.9375,1};
			rightHandIKCurve[]={0,1,0.026667001,1,0.039999999,0,0.88,0,0.90219998,1};
		};
		class RHS_GestureReloadM1Garand_Prone: RHS_GestureReloadM1Garand
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_m1_garand_prone.rtm";
		};
		class RHS_GestureReloadM1Garand_Context: RHS_GestureReloadM1Garand
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM3Grease: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_M3A1.rtm";
			speed=0.28999999;
			leftHandIKCurve[]={0,1,0.050000001,0,0.93000001,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.30000001,0,0.98000002,0,0.99900001,1};
		};
		class RHS_GestureReloadM3Grease_prone: RHS_GestureReloadM3Grease
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_M3A1_prone.rtm";
		};
		class RHS_GestureReloadM3Grease_Context: RHS_GestureReloadM3Grease_prone
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadMG42: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_mg42_standing.rtm";
			speed=-10.233334;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.029315,0,0.120521,0,0.14005999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.146579,1,0.16611999,0,0.94462001,0,0.97068,1};
		};
		class RHS_GestureReloadMG42_Prone: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_mg42_prone.rtm";
			speed=-10.233334;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.029315,0,0.120521,0,0.14005999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.146579,1,0.16611999,0,0.94462001,0,0.97068,1};
		};
		class RHS_GestureReloadMG42_Context: RHS_GestureReloadMG42
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadMP44: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_MP44.rtm";
			speed=0.243902;
			leftHandIKCurve[]={0,1,0.050000001,0,0.93000001,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.89999998,0,0.94999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadMP44_prone: RHS_GestureReloadMP44
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_MP44_prone.rtm";
		};
		class RHS_GestureReloadMP44_Context: RHS_GestureReloadMP44
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadFNFAL: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_FNFAL.rtm";
			speed=0.25;
			leftHandIKCurve[]={0,1,0.029999999,0,0.93000001,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.94,0,0.99000001,1};
		};
		class RHS_GestureReloadFNFAL_prone: RHS_GestureReloadFNFAL
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_fnfal_prone.rtm";
			mask="handsWeapon";
		};
		class RHS_GestureReloadFNFAL_Context: RHS_GestureReloadFNFAL_prone
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadIZh18: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_IZh18.rtm";
			speed=0.20999999;
			leftHandIKCurve[]={0,1,0.050000001,0,0.93000001,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.89999998,0,0.94999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadIZh18_prone: RHS_GestureReloadIZh18
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_izh18_prone.rtm";
		};
		class RHS_GestureReloadIZh18_Context: RHS_GestureReloadIZh18_prone
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureReloadM79GL: GestureReloadBase
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_M79GL.rtm";
			speed=0.27026999;
			leftHandIKCurve[]={0,1,0.2,0,0.94999999,0,0.99000001,1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,0.99000001,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class RHS_GestureReloadM79GL_prone: RHS_GestureReloadM79GL
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\reload_M79GL_prone.rtm";
			mask="handsWeapon";
		};
		class RHS_GestureReloadM79GL_Context: RHS_GestureReloadM79GL_prone
		{
			mask="handsWeapon_context";
		};
		class RHS_GestureHoldMG42: Default
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\rhs_gesture_MG42.rtm";
			looped=1;
			speed=1;
			mask="leftHand";
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0};
			enableOptics=1;
			canPullTrigger=1;
			disableWeapons=0;
		};
		class RHS_GestureHoldMG42_prone: RHS_GestureHoldMG42
		{
			file="\rhsgref\addons\rhsgref_c_weapons\anims\rhs_gesture_MG42_prone.rtm";
		};
		class RHS_GestureHoldMG42_Context: RHS_GestureHoldMG42
		{
			mask="handsWeapon_context";
		};
	};
};
