class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class unloadCargo
			{
				file="\rhsafrf\addons\rhs_c_troops\scripts\unloadCargo.sqf";
				description="unloading bmds/bmp3 cargo in combat";
			};
			class nvgHandler
			{
				file="\rhsafrf\addons\rhs_c_troops\scripts\rhs_nvghandler.sqf";
				description="NVG equip";
			};
		};
	};
};
class CfgPatches
{
	class rhs_c_troops
	{
		units[]=
		{
			"rhs_msv_rifleman",
			"rhs_msv_LAT",
			"rhs_msv_RShG2",
			"rhs_msv_grenadier",
			"rhs_msv_arifleman",
			"rhs_msv_machinegunner",
			"rhs_msv_machinegunner_assistant",
			"rhs_msv_grenadier_rpg",
			"rhs_msv_strelok_rpg_assist",
			"rhs_msv_marksman",
			"rhs_msv_efreitor",
			"rhs_msv_sergeant",
			"rhs_msv_junior_sergeant",
			"rhs_msv_officer_armored",
			"rhs_msv_officer",
			"rhs_msv_at",
			"rhs_msv_aa",
			"rhs_msv_engineer",
			"rhs_msv_medic",
			"rhs_msv_driver_armored",
			"rhs_msv_driver",
			"rhs_msv_crew",
			"rhs_msv_armoredcrew",
			"rhs_msv_combatcrew",
			"rhs_msv_crew_commander",
			"rhs_msv_emr_rifleman",
			"rhs_msv_emr_LAT",
			"rhs_msv_emr_RShG2",
			"rhs_msv_emr_grenadier",
			"rhs_msv_emr_rifleman_patchless",
			"rhs_msv_mflora_rifleman_patchless",
			"rhs_msv_rifleman_patchless",
			"rhs_msv_rifleman_patchless_alt",
			"rhs_msv_rifleman_m88_patchless",
			"rhs_msv_emr_arifleman",
			"rhs_msv_emr_machinegunner",
			"rhs_msv_emr_machinegunner_assistant",
			"rhs_msv_emr_grenadier_rpg",
			"rhs_msv_emr_strelok_rpg_assist",
			"rhs_msv_emr_marksman",
			"rhs_msv_emr_efreitor",
			"rhs_msv_emr_sergeant",
			"rhs_msv_emr_junior_sergeant",
			"rhs_msv_emr_officer_armored",
			"rhs_msv_emr_officer",
			"rhs_msv_emr_at",
			"rhs_msv_emr_aa",
			"rhs_msv_emr_engineer",
			"rhs_msv_emr_medic",
			"rhs_msv_emr_driver_armored",
			"rhs_msv_emr_driver",
			"rhs_msv_emr_crew",
			"rhs_msv_emr_armoredcrew",
			"rhs_msv_emr_combatcrew",
			"rhs_msv_emr_crew_commander",
			"rhs_mvd_izlom_rifleman",
			"rhs_mvd_izlom_rifleman_asval",
			"rhs_mvd_izlom_rifleman_LAT",
			"rhs_mvd_izlom_grenadier_rpg",
			"rhs_mvd_izlom_arifleman",
			"rhs_mvd_izlom_machinegunner",
			"rhs_mvd_izlom_marksman_vss",
			"rhs_vdv_rifleman",
			"rhs_vdv_efreitor",
			"rhs_vdv_grenadier",
			"rhs_vdv_arifleman",
			"rhs_vdv_machinegunner",
			"rhs_vdv_machinegunner_assistant",
			"rhs_vdv_aa",
			"rhs_vdv_at",
			"rhs_vdv_strelok_rpg_assist",
			"rhs_vdv_marksman",
			"rhs_vdv_officer_armored",
			"rhs_vdv_officer",
			"rhs_vdv_junior_sergeant",
			"rhs_vdv_sergeant",
			"rhs_vdv_engineer",
			"rhs_vdv_driver_armored",
			"rhs_vdv_driver",
			"rhs_vdv_medic",
			"rhs_vdv_LAT",
			"rhs_vdv_RSHG2",
			"rhs_vdv_crew",
			"rhs_vdv_crew_commander",
			"rhs_vdv_armoredcrew",
			"rhs_vdv_combatcrew",
			"rhs_vdv_flora_rifleman",
			"rhs_vdv_flora_efreitor",
			"rhs_vdv_flora_grenadier",
			"rhs_vdv_flora_arifleman",
			"rhs_vdv_flora_machinegunner",
			"rhs_vdv_flora_machinegunner_assistant",
			"rhs_vdv_flora_aa",
			"rhs_vdv_flora_at",
			"rhs_vdv_flora_strelok_rpg_assist",
			"rhs_vdv_flora_marksman",
			"rhs_vdv_flora_officer_armored",
			"rhs_vdv_flora_officer",
			"rhs_vdv_flora_junior_sergeant",
			"rhs_vdv_flora_sergeant",
			"rhs_vdv_flora_engineer",
			"rhs_vdv_flora_driver_armored",
			"rhs_vdv_flora_driver",
			"rhs_vdv_flora_medic",
			"rhs_vdv_flora_LAT",
			"rhs_vdv_flora_RSHG2",
			"rhs_vdv_flora_crew",
			"rhs_vdv_flora_crew_commander",
			"rhs_vdv_flora_armoredcrew",
			"rhs_vdv_flora_combatcrew",
			"rhs_vdv_mflora_rifleman",
			"rhs_vdv_mflora_efreitor",
			"rhs_vdv_mflora_grenadier",
			"rhs_vdv_mflora_machinegunner",
			"rhs_vdv_mflora_machinegunner_assistant",
			"rhs_vdv_mflora_aa",
			"rhs_vdv_mflora_at",
			"rhs_vdv_mflora_strelok_rpg_assist",
			"rhs_vdv_mflora_marksman",
			"rhs_vdv_mflora_officer_armored",
			"rhs_vdv_mflora_officer",
			"rhs_vdv_mflora_junior_sergeant",
			"rhs_vdv_mflora_sergeant",
			"rhs_vdv_mflora_engineer",
			"rhs_vdv_mflora_driver_armored",
			"rhs_vdv_mflora_driver",
			"rhs_vdv_mflora_medic",
			"rhs_vdv_mflora_LAT",
			"rhs_vdv_mflora_RSHG2",
			"rhs_vdv_mflora_crew",
			"rhs_vdv_mflora_crew_commander",
			"rhs_vdv_mflora_armoredcrew",
			"rhs_vdv_mflora_combatcrew",
			"rhs_vdv_des_rifleman",
			"rhs_vdv_des_efreitor",
			"rhs_vdv_des_grenadier",
			"rhs_vdv_des_machinegunner",
			"rhs_vdv_des_machinegunner_assistant",
			"rhs_vdv_des_aa",
			"rhs_vdv_des_at",
			"rhs_vdv_des_strelok_rpg_assist",
			"rhs_vdv_des_marksman",
			"rhs_vdv_des_officer_armored",
			"rhs_vdv_des_officer",
			"rhs_vdv_des_junior_sergeant",
			"rhs_vdv_des_sergeant",
			"rhs_vdv_des_engineer",
			"rhs_vdv_des_driver_armored",
			"rhs_vdv_des_driver",
			"rhs_vdv_des_medic",
			"rhs_vdv_des_LAT",
			"rhs_vdv_des_RSHG2",
			"rhs_vdv_des_crew",
			"rhs_vdv_des_crew_commander",
			"rhs_vdv_des_armoredcrew",
			"rhs_vdv_des_combatcrew",
			"rhs_vdv_recon_sergeant",
			"rhs_vdv_recon_efreitor",
			"rhs_vdv_recon_officer_armored",
			"rhs_vdv_recon_officer",
			"rhs_vdv_recon_grenadier",
			"rhs_vdv_recon_engineer",
			"rhs_vdv_recon_marksman",
			"rhs_vdv_recon_marksman_asval",
			"rhs_vdv_recon_marksman_vss",
			"rhs_vdv_recon_machinegunner",
			"rhs_vdv_recon_machinegunner_assistant",
			"rhs_vdv_recon_medic",
			"rhs_vdv_recon_scout",
			"rhs_vdv_recon_scout_akm",
			"rhs_vdv_recon_grenadier_scout",
			"rhs_vdv_recon_arifleman_scout",
			"rhs_vdv_recon_at",
			"rhs_vdv_recon_rifleman",
			"rhs_vdv_recon_rifleman_l",
			"rhs_vdv_recon_rifleman_akms",
			"rhs_vdv_recon_rifleman_ak103",
			"rhs_vdv_recon_rifleman_asval",
			"rhs_vdv_recon_arifleman",
			"rhs_vdv_recon_lat",
			"rhs_vmf_flora_rifleman",
			"rhs_vmf_flora_efreitor",
			"rhs_vmf_flora_grenadier",
			"rhs_vmf_flora_machinegunner",
			"rhs_vmf_flora_machinegunner_assistant",
			"rhs_vmf_flora_aa",
			"rhs_vmf_flora_at",
			"rhs_vmf_flora_strelok_rpg_assist",
			"rhs_vmf_flora_marksman",
			"rhs_vmf_flora_officer_armored",
			"rhs_vmf_flora_officer",
			"rhs_vmf_flora_junior_sergeant",
			"rhs_vmf_flora_sergeant",
			"rhs_vmf_flora_engineer",
			"rhs_vmf_flora_driver_armored",
			"rhs_vmf_flora_driver",
			"rhs_vmf_flora_medic",
			"rhs_vmf_flora_LAT",
			"rhs_vmf_flora_RSHG2",
			"rhs_vmf_flora_crew",
			"rhs_vmf_flora_crew_commander",
			"rhs_vmf_flora_armoredcrew",
			"rhs_vmf_flora_combatcrew",
			"rhs_vmf_recon_rifleman",
			"rhs_vmf_recon_rifleman_l",
			"rhs_vmf_recon_rifleman_akms",
			"rhs_vmf_recon_rifleman_lat",
			"rhs_vmf_recon_grenadier",
			"rhs_vmf_recon_rifleman_asval",
			"rhs_vmf_recon_arifleman",
			"rhs_vmf_recon_machinegunner_assistant",
			"rhs_vmf_recon_efreitor",
			"rhs_vmf_recon_sergeant",
			"rhs_vmf_recon_officer_armored",
			"rhs_vmf_recon_officer",
			"rhs_vmf_recon_marksman",
			"rhs_vmf_recon_marksman_vss",
			"rhs_vmf_recon_medic",
			"rhs_vmf_recon_rifleman_scout",
			"rhs_vmf_recon_rifleman_scout_akm",
			"rhs_vmf_recon_grenadier_scout",
			"rhs_vmf_recon_arifleman_scout",
			"rhs_rva_crew",
			"rhs_rva_crew_armored",
			"rhs_rva_crew_office",
			"rhs_rva_crew_officer_armored",
			"rhs_pilot",
			"rhs_pilot_tan",
			"rhs_pilot_combat_heli",
			"rhs_pilot_transport_heli",
			"Item_rhs_uniform_flora",
			"Item_rhs_uniform_vdv_emr",
			"Item_rhs_uniform_msv_emr",
			"Item_rhs_uniform_vdv_flora",
			"Item_rhs_uniform_vdv_mflora",
			"Item_rhs_uniform_m88_patchless",
			"Item_rhs_uniform_flora_patchless",
			"Item_rhs_uniform_flora_patchless_alt",
			"Item_rhs_uniform_emr_patchless",
			"Item_rhs_uniform_mflora_patchless",
			"Item_rhs_uniform_df15",
			"Item_rhs_uniform_gorka_r_y",
			"Item_rhs_uniform_gorka_r_g",
			"Item_rhs_uniform_vdv_emr_des",
			"Item_rhs_fieldcap",
			"Item_rhs_fieldcap_vsr",
			"Item_rhs_fieldcap_digi",
			"Item_rhs_fieldcap_digi2",
			"Item_rhs_fieldcap_digi_des",
			"Item_rhs_fieldcap_ml",
			"Item_rhs_fieldcap_khk",
			"Item_rhs_fieldcap_helm",
			"Item_rhs_fieldcap_helm_digi",
			"Item_rhs_fieldcap_helm_ml",
			"Item_rhs_beanie",
			"Item_rhs_beanie_green",
			"Item_rhs_6b26",
			"Item_rhs_6b26_bala",
			"Item_rhs_6b26_ess",
			"Item_rhs_6b26_ess_bala",
			"Item_rhs_6b26_green",
			"Item_rhs_6b26_bala_green",
			"Item_rhs_6b26_ess_green",
			"Item_rhs_6b26_ess_bala_green",
			"Item_rhs_6b27m",
			"Item_rhs_6b27m_digi",
			"Item_rhs_6b27m_ml",
			"Item_rhs_6b27m_ess_bala",
			"Item_rhs_6b27m_digi_ess_bala",
			"Item_rhs_6b27m_ML_ess_bala",
			"Item_rhs_6b27m_bala",
			"Item_rhs_6b27m_digi_bala",
			"Item_rhs_6b27m_ml_bala",
			"Item_rhs_6b27m_ess",
			"Item_rhs_6b27m_digi_ess",
			"Item_rhs_6b27m_ml_ess",
			"Item_rhs_6b27m_green",
			"Item_rhs_6b27m_green_ess",
			"Item_rhs_6b27m_green_bala",
			"Item_rhs_6b27m_green_ess_bala",
			"Item_rhs_6b28",
			"Item_rhs_6b28_flora",
			"Item_rhs_6b28_ess",
			"Item_rhs_6b28_flora_ess",
			"Item_rhs_6b28_bala",
			"Item_rhs_6b28_flora_bala",
			"Item_rhs_6b28_ess_bala",
			"Item_rhs_6b28_flora_ess_bala",
			"Item_rhs_6b28_green",
			"Item_rhs_6b28_green_ess",
			"Item_rhs_6b28_green_bala",
			"Item_rhs_6b28_green_ess_bala",
			"Item_rhs_Booniehat_digi",
			"Item_rhs_Booniehat_flora",
			"Item_rhs_ssh68",
			"Item_rhs_zsh7a",
			"Item_rhs_zsh7a_alt",
			"Item_rhs_zsh7a_mike",
			"Item_rhs_zsh7a_mike_green",
			"Item_rhs_zsh7a_mike_alt",
			"Item_rhs_zsh7a_mike_green_alt",
			"Item_rhs_gssh18",
			"Item_rhs_tsh4",
			"Item_rhs_tsh4_ess",
			"Item_rhs_tsh4_bala",
			"Item_rhs_tsh4_ess_bala",
			"Item_rhs_6b47",
			"Item_rhs_6b47_bala",
			"Item_rhs_6b47_ess",
			"Item_rhs_6b47_ess_bala",
			"Item_rhs_6b7_1m",
			"Item_rhs_6b7_1m_ess",
			"Item_rhs_6b7_1m_ess_bala",
			"Item_rhs_6b7_1m_bala1",
			"Item_rhs_6b7_1m_bala1_emr",
			"Item_rhs_6b7_1m_emr_ess",
			"Item_rhs_6b7_1m_emr_ess_bala",
			"Item_rhs_6b7_1m_bala1_flora",
			"Item_rhs_6b7_1m_bala1_olive",
			"Item_rhs_6b7_1m_bala2",
			"Item_rhs_6b7_1m_bala2_emr",
			"Item_rhs_6b7_1m_bala2_flora",
			"Item_rhs_6b7_1m_bala2_olive",
			"Item_rhs_6b7_1m_emr",
			"Item_rhs_6b7_1m_flora",
			"Item_rhs_6b7_1m_flora_ns3",
			"Item_rhs_6b7_1m_olive",
			"Item_rhs_altyn",
			"Item_rhs_altyn_bala",
			"Item_rhs_altyn_visordown",
			"Item_rhs_altyn_novisor",
			"Item_rhs_altyn_novisor_bala",
			"Item_rhs_altyn_novisor_ess",
			"Item_rhs_altyn_novisor_ess_bala",
			"Item_rhs_zsh12",
			"Item_rhs_zsh12_black",
			"Item_rhs_zsh12_bala",
			"Item_rhs_1PN138",
			"Item_rhs_beret_vdv1",
			"Item_rhs_beret_vdv2",
			"Item_rhs_beret_mp1",
			"Item_rhs_beret_milp",
			"Item_rhs_beret_vdv3",
			"Item_rhs_beret_mp2",
			"Item_rhs_6b23",
			"Item_rhs_6b23_crew",
			"Item_rhs_6b23_engineer",
			"Item_rhs_6b23_medic",
			"Item_rhs_6b23_rifleman",
			"Item_rhs_6b23_crewofficer",
			"Item_rhs_6b23_sniper",
			"Item_rhs_6b23_6sh92",
			"Item_rhs_6b23_6sh92_vog",
			"Item_rhs_6b23_6sh92_vog_headset",
			"Item_rhs_6b23_6sh92_headset",
			"Item_rhs_6b23_6sh92_headset_mapcase",
			"Item_rhs_6b23_6sh92_radio",
			"Item_rhs_6sh46",
			"Item_rhs_vest_commander",
			"Item_rhs_vest_pistol_holster",
			"Item_rhs_6b23_digi",
			"Item_rhs_6b23_digi_crew",
			"Item_rhs_6b23_digi_engineer",
			"Item_rhs_6b23_digi_medic",
			"Item_rhs_6b23_digi_rifleman",
			"Item_rhs_6b23_digi_crewofficer",
			"Item_rhs_6b23_digi_sniper",
			"Item_rhs_6b23_digi_6sh92",
			"Item_rhs_6b23_digi_6sh92_vog",
			"Item_rhs_6b23_digi_6sh92_vog_headset",
			"Item_rhs_6b23_digi_6sh92_headset",
			"Item_rhs_6b23_digi_6sh92_headset_mapcase",
			"Item_rhs_6b23_digi_6sh92_radio",
			"Item_rhs_6b23_digi_6sh92_Spetsnaz",
			"Item_rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
			"Item_rhs_6b23_digi_6sh92_headset_spetsnaz",
			"Item_rhs_6b23_digi_6sh92_spetsnaz2",
			"Item_rhs_6b23_digi_6sh92_Vog_Spetsnaz",
			"Item_rhs_6b23_ML",
			"Item_rhs_6b23_ML_crew",
			"Item_rhs_6b23_ML_engineer",
			"Item_rhs_6b23_ML_medic",
			"Item_rhs_6b23_ML_rifleman",
			"Item_rhs_6b23_ML_crewofficer",
			"Item_rhs_6b23_ML_sniper",
			"Item_rhs_6b23_ML_6sh92",
			"Item_rhs_6b23_ML_6sh92_vog",
			"Item_rhs_6b23_ML_6sh92_vog_headset",
			"Item_rhs_6b23_ML_6sh92_headset",
			"Item_rhs_6b23_ML_6sh92_headset_mapcase",
			"Item_rhs_6b23_ML_6sh92_radio",
			"Item_rhs_vydra_3m",
			"Item_rhs_6b23_vydra_3m",
			"Item_rhs_6b23_digi_vydra_3m",
			"Item_rhs_6b23_ML_vydra_3m",
			"Item_rhs_6b23_6sh116",
			"Item_rhs_6b23_6sh116_flora",
			"Item_rhs_6b23_6sh116_od",
			"Item_rhs_6b23_6sh116_vog",
			"Item_rhs_6b23_6sh116_vog_flora",
			"Item_rhs_6b23_6sh116_vog_od",
			"Item_rhs_6b13",
			"Item_rhs_6b13_crewofficer",
			"Item_rhs_6b13_6sh92",
			"Item_rhs_6b13_6sh92_vog",
			"Item_rhs_6b13_6sh92_headset_mapcase",
			"Item_rhs_6b13_6sh92_radio",
			"Item_rhs_6b13_EMR",
			"Item_rhs_6b13_EMR_6sh92",
			"Item_rhs_6b13_EMR_6sh92_vog",
			"Item_rhs_6b13_EMR_6sh92_headset_mapcase",
			"Item_rhs_6b13_EMR_6sh92_radio",
			"Item_rhs_6b13_Flora",
			"Item_rhs_6b13_Flora_crewofficer",
			"Item_rhs_6b13_Flora_6sh92",
			"Item_rhs_6b13_Flora_6sh92_vog",
			"Item_rhs_6b13_Flora_6sh92_headset_mapcase",
			"Item_rhs_6b13_Flora_6sh92_radio",
			"Item_rhs_6b43",
			"Item_rhs_6sh92",
			"Item_rhs_6sh92_vog",
			"Item_rhs_6sh92_vog_headset",
			"Item_rhs_6sh92_headset",
			"Item_rhs_6sh92_radio",
			"Item_rhs_6sh92_digi",
			"Item_rhs_6sh92_digi_vog",
			"Item_rhs_6sh92_digi_vog_headset",
			"Item_rhs_6sh92_digi_headset",
			"Item_rhs_6sh92_digi_radio",
			"Item_rhs_6sh92_vsr",
			"Item_rhs_6sh92_vsr_vog",
			"Item_rhs_6sh92_vsr_vog_headset",
			"Item_rhs_6sh92_vsr_headset",
			"Item_rhs_6sh92_vsr_radio",
			"Item_rhs_acc_npz",
			"Item_rhs_acc_1pn93_1",
			"Item_rhs_acc_1pn93_2",
			"Item_rhs_acc_pso1m2",
			"Item_rhs_acc_pso1m21",
			"Item_rhs_acc_pkas",
			"Item_rhs_acc_pgo7v",
			"Item_rhs_acc_1p29",
			"Item_rhs_acc_1p78",
			"Item_rhs_acc_1p87",
			"Item_rhs_acc_ekp1",
			"Item_rhs_acc_ekp8_02",
			"Item_rhs_acc_ekp8_18",
			"Item_rhs_acc_1p63",
			"Item_rhs_acc_tgpa",
			"Item_rhs_acc_pbs1",
			"Item_rhs_acc_tgpv",
			"Item_rhs_acc_dtk4long",
			"Item_rhs_acc_dtk4short",
			"Item_rhs_acc_dtk4screws",
			"Item_rhs_acc_dtk3",
			"Item_rhs_acc_dtk",
			"Item_rhs_acc_dtk1",
			"Item_rhs_acc_dtk1l",
			"Item_rhs_acc_dtk2",
			"Item_rhs_acc_ak5",
			"Item_rhs_acc_2dpZenit",
			"Item_rhs_acc_pgs64"
		};
		weapons[]=
		{
			"rhs_uniform_flora",
			"rhs_uniform_df15",
			"rhs_uniform_df15_tan",
			"rhs_uniform_msv_emr",
			"rhs_uniform_msv_emr_alt",
			"rhs_uniform_mvd_izlom",
			"rhs_uniform_vdv_emr",
			"rhs_uniform_vdv_emr_des",
			"rhs_uniform_vdv_flora",
			"rhs_uniform_vmf_flora",
			"rhs_uniform_vmf_flora_subdued",
			"rhs_uniform_rva_flora",
			"rhs_uniform_vdv_mflora",
			"rhs_uniform_mflora_patchless",
			"rhs_uniform_emr_des_patchless",
			"rhs_uniform_flora_patchless",
			"rhs_uniform_flora_patchless_alt",
			"rhs_uniform_emr_patchless",
			"rhs_uniform_m88_patchless",
			"rhs_uniform_gorka_r_y",
			"rhs_uniform_gorka_r_g",
			"rhs_fieldcap",
			"rhs_fieldcap_vsr",
			"rhs_fieldcap_digi",
			"rhs_fieldcap_digi2",
			"rhs_fieldcap_digi_des",
			"rhs_fieldcap_ml",
			"rhs_fieldcap_khk",
			"rhs_fieldcap_helm",
			"rhs_fieldcap_helm_digi",
			"rhs_fieldcap_helm_ml",
			"rhs_beanie",
			"rhs_beanie_green",
			"rhs_6b26",
			"rhs_6b26_bala",
			"rhs_6b26_ess",
			"rhs_6b26_ess_bala",
			"rhs_6b26_green",
			"rhs_6b26_bala_green",
			"rhs_6b26_ess_green",
			"rhs_6b26_ess_bala_green",
			"rhs_6b27m",
			"rhs_6b27m_digi",
			"rhs_6b27m_ml",
			"rhs_6b27m_ess_bala",
			"rhs_6b27m_digi_ess_bala",
			"rhs_6b27m_ML_ess_bala",
			"rhs_6b27m_bala",
			"rhs_6b27m_digi_bala",
			"rhs_6b27m_ml_bala",
			"rhs_6b27m_ess",
			"rhs_6b27m_digi_ess",
			"rhs_6b27m_ml_ess",
			"rhs_6b27m_green",
			"rhs_6b27m_green_ess",
			"rhs_6b27m_green_bala",
			"rhs_6b27m_green_ess_bala",
			"rhs_6b28",
			"rhs_6b28_flora",
			"rhs_6b28_ess",
			"rhs_6b28_flora_ess",
			"rhs_6b28_bala",
			"rhs_6b28_flora_bala",
			"rhs_6b28_ess_bala",
			"rhs_6b28_flora_ess_bala",
			"rhs_6b28_green",
			"rhs_6b28_green_ess",
			"rhs_6b28_green_bala",
			"rhs_6b28_green_ess_bala",
			"rhs_Booniehat_digi",
			"rhs_Booniehat_flora",
			"rhs_ssh68",
			"rhs_zsh7a",
			"rhs_zsh7a_alt",
			"rhs_zsh7a_mike",
			"rhs_zsh7a_mike_green",
			"rhs_zsh7a_mike_alt",
			"rhs_zsh7a_mike_green_alt",
			"rhs_gssh18",
			"rhs_tsh4",
			"rhs_tsh4_ess",
			"rhs_tsh4_bala",
			"rhs_tsh4_ess_bala",
			"rhs_6b47",
			"rhs_6b47_bala",
			"rhs_6b47_ess",
			"rhs_6b47_ess_bala",
			"rhs_6b7_1m",
			"rhs_6b7_1m_ess",
			"rhs_6b7_1m_ess_bala",
			"rhs_6b7_1m_bala1",
			"rhs_6b7_1m_bala1_emr",
			"rhs_6b7_1m_emr_ess",
			"rhs_6b7_1m_emr_ess_bala",
			"rhs_6b7_1m_bala1_flora",
			"rhs_6b7_1m_bala1_olive",
			"rhs_6b7_1m_bala2",
			"rhs_6b7_1m_bala2_emr",
			"rhs_6b7_1m_bala2_flora",
			"rhs_6b7_1m_bala2_olive",
			"rhs_6b7_1m_emr",
			"rhs_6b7_1m_flora",
			"rhs_6b7_1m_flora_ns3",
			"rhs_6b7_1m_olive",
			"rhs_altyn",
			"rhs_altyn_bala",
			"rhs_altyn_visordown",
			"rhs_altyn_novisor",
			"rhs_altyn_novisor_bala",
			"rhs_altyn_novisor_ess",
			"rhs_altyn_novisor_ess_bala",
			"rhs_zsh12",
			"rhs_zsh12_black",
			"rhs_zsh12_bala",
			"rhs_1PN138",
			"rhs_beret_vdv1",
			"rhs_beret_vdv2",
			"rhs_beret_mp1",
			"rhs_beret_milp",
			"rhs_beret_vdv3",
			"rhs_beret_mp2",
			"rhs_6b23",
			"rhs_6b23_crew",
			"rhs_6b23_engineer",
			"rhs_6b23_medic",
			"rhs_6b23_rifleman",
			"rhs_6b23_crewofficer",
			"rhs_6b23_sniper",
			"rhs_6b23_6sh92",
			"rhs_6b23_6sh92_vog",
			"rhs_6b23_6sh92_vog_headset",
			"rhs_6b23_6sh92_headset",
			"rhs_6b23_6sh92_headset_mapcase",
			"rhs_6b23_6sh92_radio",
			"rhs_6sh46",
			"rhs_vest_commander",
			"rhs_vest_pistol_holster",
			"rhs_6b23_digi",
			"rhs_6b23_digi_crew",
			"rhs_6b23_digi_engineer",
			"rhs_6b23_digi_medic",
			"rhs_6b23_digi_rifleman",
			"rhs_6b23_digi_crewofficer",
			"rhs_6b23_digi_sniper",
			"rhs_6b23_digi_6sh92",
			"rhs_6b23_digi_6sh92_vog",
			"rhs_6b23_digi_6sh92_vog_headset",
			"rhs_6b23_digi_6sh92_headset",
			"rhs_6b23_digi_6sh92_headset_mapcase",
			"rhs_6b23_digi_6sh92_radio",
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
			"rhs_6b23_digi_6sh92_headset_spetsnaz",
			"rhs_6b23_digi_6sh92_spetsnaz2",
			"rhs_6b23_digi_6sh92_Vog_Spetsnaz",
			"rhs_6b23_ML",
			"rhs_6b23_ML_crew",
			"rhs_6b23_ML_engineer",
			"rhs_6b23_ML_medic",
			"rhs_6b23_ML_rifleman",
			"rhs_6b23_ML_crewofficer",
			"rhs_6b23_ML_sniper",
			"rhs_6b23_ML_6sh92",
			"rhs_6b23_ML_6sh92_vog",
			"rhs_6b23_ML_6sh92_vog_headset",
			"rhs_6b23_ML_6sh92_headset",
			"rhs_6b23_ML_6sh92_headset_mapcase",
			"rhs_6b23_ML_6sh92_radio",
			"rhs_vydra_3m",
			"rhs_6b23_vydra_3m",
			"rhs_6b23_digi_vydra_3m",
			"rhs_6b23_ML_vydra_3m",
			"rhs_6b23_6sh116",
			"rhs_6b23_6sh116_flora",
			"rhs_6b23_6sh116_od",
			"rhs_6b23_6sh116_vog",
			"rhs_6b23_6sh116_vog_flora",
			"rhs_6b23_6sh116_vog_od",
			"rhs_6b13",
			"rhs_6b13_crewofficer",
			"rhs_6b13_6sh92",
			"rhs_6b13_6sh92_vog",
			"rhs_6b13_6sh92_headset_mapcase",
			"rhs_6b13_6sh92_radio",
			"rhs_6b13_EMR",
			"rhs_6b13_EMR_6sh92",
			"rhs_6b13_EMR_6sh92_vog",
			"rhs_6b13_EMR_6sh92_headset_mapcase",
			"rhs_6b13_EMR_6sh92_radio",
			"rhs_6b13_Flora",
			"rhs_6b13_Flora_crewofficer",
			"rhs_6b13_Flora_6sh92",
			"rhs_6b13_Flora_6sh92_vog",
			"rhs_6b13_Flora_6sh92_headset_mapcase",
			"rhs_6b13_Flora_6sh92_radio",
			"rhs_6b43",
			"rhs_6sh92",
			"rhs_6sh92_vog",
			"rhs_6sh92_vog_headset",
			"rhs_6sh92_headset",
			"rhs_6sh92_radio",
			"rhs_6sh92_digi",
			"rhs_6sh92_digi_vog",
			"rhs_6sh92_digi_vog_headset",
			"rhs_6sh92_digi_headset",
			"rhs_6sh92_digi_radio",
			"rhs_6sh92_vsr",
			"rhs_6sh92_vsr_vog",
			"rhs_6sh92_vsr_vog_headset",
			"rhs_6sh92_vsr_headset",
			"rhs_6sh92_vsr_radio"
		};
		name="AFRF Infantry & Equipment";
	};
};
class CfgWorlds
{
	class GenericNames
	{
		class RussianMen
		{
			class FirstNames
			{
				ivan="Ivan";
				mikhail="Mikhail";
				vasili="Vasili";
				boris="Boris";
				pavel="Pavel";
				vladimir="Vladimir";
				oleg="Oleg";
				daniil="Daniil";
				anatoli="Anatoli";
				fedor="Fedor";
				kiril="Kiril";
				pyotr="Pyotr";
				filip="Filip";
				fyodor="Fyodor";
				andrey="Andrey";
				igor="Igor";
				aleksander="Aleksander";
				lev="Lev";
				dimitri="Dimitri";
				viktor="Viktor";
				vasil="Vasil";
				vadim="Vadim";
				stepan="Stepan";
				roman="Roman";
				nikolay="Nikolay";
				yuri="Yuri";
				aleksei="Aleksei";
				ruslan="Ruslan";
				maksim="Maksim";
				valery="Valery";
				vyacheslav="Vyacheslav";
				egor="Egor";
				vitaly="Vitaly";
				sergei="Sergei";
				nikita="Nikita";
				konstantin="Konstantin";
				timofey="Timofey";
				valentin="Valentin";
				leonid="Leonid";
				ilya="Ilya";
				grigoriy="Grigoriy";
				abram="Abram";
				alyosha="Alyosha";
				arkadiy="Arkadiy";
				german="German";
				kuzma="Kuzma";
				semyon="Semyon";
				yevgeniy="Yevgeniy";
			};
			class LastNames
			{
				akulov="Akulov";
				antonov="Antonov";
				afanasyev="Afanasyev";
				bakunin="Bakunin";
				produnov="Produnov";
				kubasov="Kubasov";
				zubov="Zubov";
				blagonravov="Blagonravov";
				davidov="Davidov";
				gusakov="Gusakov";
				nikolayev="Nikolayev";
				ivanov="Ivanov";
				maksimov="Maksimov";
				fisenko="Fisenko";
				komarov="Komarov";
				shcherbakov="Shcherbakov";
				zverev="Zverev";
				zykov="Zykov";
				makarov="Makarov";
				doronin="Doronin";
				turchinsky="Turchinsky";
				gurevich="Gurevich";
				malyukov="Malyukov";
				mikoyan="Mikoyan";
				rogozhkin="Rogozhkin";
				bychkov="Bychkov";
				zhegalov="Zhegalov";
				soloveychik="Soloveychik";
				strugackiy="Strugackiy";
				bulgakov="Bulgakov";
				tolstoy="Tolstoy";
				pushkin="Pushkin";
				dobryakov="Dobryakov";
				timoshenko="Timoshenko";
				alekseev="Alekseev";
				zhitkov="Zhitkov";
				potapenko="Potapenko";
				yefremov="Yefremov";
				krasko="Krasko";
				pashinin="Pashinin";
				yeltsin="Yeltsin";
				medvedev="Medvedev";
				putin="Putin";
				smirnov="Smirnov";
				kuznetsov="Kuznetsov";
				vasilyev="Vasilyev";
				petrov="Petrov";
				golovko="Golovko";
				chapayev="Chapayev";
				mamayev="Mamayev";
				baranov="Baranov";
				khrushchev="Khrushchev";
				beregovoi="Beregovoi";
				derevenko="Derevenko";
				glebov="Glebov";
				gorbunov="Gorbunov";
				pecharov="Pecharov";
				kirygin="Kirygin";
				lermontov="Lermontov";
				litvinov="Litvinov";
				vorobiev="Vorobiev";
				maryshkin="Naryshkin";
				kalashnikov="Kalashnikov";
				morozov="Morozov";
				molotov="Molotov";
				popov="Popov";
				privalov="Privalov";
				titov="Titov";
				sudakov="Sudakov";
				kamenev="Kamenev";
				yakushkin="Yakushkin";
				yagudin="Yagudin";
				babchenko="Babchenko";
				borodin="Borodin";
				borichev="Borichev";
				romanov="Romanov";
				provodnikov="Provodnikov";
				sarafanov="Sarafanov";
				sharapov="Sharapov";
				tokarev="Tokarev";
				volk="Volk";
				zhukov="Zhukov";
			};
		};
	};
};
class CfgGroups
{
	class East
	{
		class rhs_faction_msv
		{
			name="$STR_RHS_FAC_MSV";
			class rhs_group_rus_msv_infantry
			{
				name="$STR_RHS_GROUP_MSV_infantry";
				aliveCategory="Infantry";
				class rhs_group_rus_msv_infantry_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_grenadier_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=0;
						vehicle="rhs_msv_medic";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_section_mg
				{
					name="$STR_RHS_GROUPS_SECTION_MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_section_marksman
				{
					name="$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_section_AT
				{
					name="$STR_RHS_GROUPS_SECTION_AT";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_lat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_section_AA
				{
					name="$STR_RHS_GROUPS_SECTION_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_msv_infantry_emr
			{
				name="$STR_RHS_GROUP_msv_infantry_emr";
				aliveCategory="Infantry";
				class rhs_group_rus_msv_infantry_emr_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_rifleman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_rifleman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_section_mg
				{
					name="$STR_RHS_GROUPS_SECTION_MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_section_marksman
				{
					name="$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_section_AT
				{
					name="$STR_RHS_GROUPS_SECTION_AT";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_at";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_lat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_section_AA
				{
					name="$STR_RHS_GROUPS_SECTION_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_aa";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_aa";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="CORPORAL";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_infantry_emr_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_emr_rifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_msv_Ural
			{
				name="$STR_RHS_GROUP_MSV_Ural";
				aliveCategory="Motorized";
				class rhs_group_rus_msv_Ural_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_uaz_msv_01";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_msv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_msv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_msv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_msv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_Ural_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_Zu23_msv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
			};
			class rhs_group_rus_msv_gaz66
			{
				name="$STR_RHS_GROUP_vdv_gaz66";
				aliveCategory="Motorized";
				class rhs_group_rus_msv_gaz66_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_uaz_msv_01";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_gaz66_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_Zu23_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
				};
			};
			class rhs_group_rus_msv_btr70
			{
				name="$STR_RHS_GROUP_MSV_BTR70";
				aliveCategory="Mechanized";
				class rhs_group_rus_msv_btr70_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_msv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_btr70_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_msv_BTR80
			{
				name="$STR_RHS_GROUP_MSV_BTR80";
				aliveCategory="Mechanized";
				class rhs_group_rus_msv_BTR80_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr80_msv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr80_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_msv_BTR80a
			{
				name="$STR_RHS_GROUP_MSV_BTR80a";
				aliveCategory="Mechanized";
				class rhs_group_rus_msv_BTR80a_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_BTR80a_msv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_BTR80a_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_BTR80a_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_BTR80a_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_BTR80a_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_BTR80a_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_BTR80a_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_msv_bmp1
			{
				name="$STR_RHS_GROUP_MSV_BMP1";
				aliveCategory="Mechanized";
				class rhs_group_rus_msv_bmp1_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={5,-5,0};
					};
					class Unit2: Unit0
					{
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="rhs_bmp1k_msv";
						rank="SERGEANT";
						position[]={19,-22,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad: rhs_group_rus_msv_bmp1_chq
				{
					name="$STR_RHS_GROUPS_SQUAD";
					class Unit0: Unit0
					{
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
					};
					class Unit2: Unit2
					{
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle="rhs_bmp1p_msv";
						rank="CORPORAL";
					};
					class Unit4: Unit0
					{
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={-10,-11,0};
					};
					class Unit5: Unit0
					{
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={31,-39,0};
					};
					class Unit6: Unit0
					{
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={37,-44,0};
					};
					class Unit8: Unit0
					{
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={-20,-20,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad_2mg: rhs_group_rus_msv_bmp1_squad
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					class Unit0: Unit0
					{
						vehicle="rhs_msv_junior_sergeant";
					};
					class Unit1: Unit1
					{
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle="rhs_msv_machinegunner";
					};
					class Unit3: Unit3
					{
						vehicle="rhs_bmp1p_msv";
					};
					class Unit4: Unit4
					{
						vehicle="rhs_msv_machinegunner";
					};
					class Unit5: Unit5
					{
						vehicle="rhs_msv_machinegunner_assistant";
					};
					class Unit6: Unit6
					{
						vehicle="rhs_msv_LAT";
					};
					class Unit7: Unit7
					{
						vehicle="rhs_msv_rifleman";
					};
					class Unit8: Unit8
					{
						vehicle="rhs_msv_rifleman";
					};
				};
				class rhs_group_rus_msv_bmp1_squad_sniper: rhs_group_rus_msv_bmp1_squad
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					class Unit0: Unit0
					{
						vehicle="rhs_msv_junior_sergeant";
					};
					class Unit1: Unit1
					{
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle="rhs_msv_marksman";
					};
					class Unit3: Unit3
					{
						vehicle="rhs_bmp1p_msv";
					};
					class Unit4: Unit4
					{
						vehicle="rhs_msv_machinegunner";
					};
					class Unit5: Unit5
					{
						vehicle="rhs_msv_at";
					};
					class Unit6: Unit6
					{
						vehicle="rhs_msv_medic";
					};
					class Unit7: Unit7
					{
						vehicle="rhs_msv_rifleman";
					};
					class Unit8: Unit8
					{
						vehicle="rhs_msv_rifleman";
					};
				};
				class rhs_group_rus_msv_bmp1_squad_mg_sniper: rhs_group_rus_msv_bmp1_squad
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					class Unit0: Unit0
					{
						vehicle="rhs_msv_sergeant";
					};
					class Unit1: Unit1
					{
						vehicle="rhs_msv_junior_sergeant";
					};
					class Unit2: Unit2
					{
						vehicle="rhs_msv_machinegunner";
					};
					class Unit3: Unit3
					{
						vehicle="rhs_bmp1p_msv";
					};
					class Unit4: Unit4
					{
						vehicle="rhs_msv_marksman";
					};
					class Unit5: Unit5
					{
						vehicle="rhs_msv_machinegunner_assistant";
					};
					class Unit6: Unit6
					{
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
					};
					class Unit7: Unit7
					{
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
					};
					class Unit8: Unit8
					{
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
					};
				};
				class rhs_group_rus_msv_bmp1_squad_aa: rhs_group_rus_msv_bmp1_squad
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					class Unit0: Unit0
					{
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle="rhs_bmp1p_msv";
						rank="CORPORAL";
					};
					class Unit4: Unit4
					{
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
					};
					class Unit5: Unit5
					{
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
					};
					class Unit6: Unit6
					{
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
					};
				};
			};
			class rhs_group_rus_msv_bmp2
			{
				name="$STR_RHS_GROUP_MSV_BMP2";
				aliveCategory="Mechanized";
				class rhs_group_rus_msv_bmp2_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2k_msv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_MSV_BMP3
			{
				name="$STR_RHS_GROUP_MSV_BMP3";
				aliveCategory="Mechanized";
				class rhs_group_rus_MSV_BMP3_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp3_msv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmp3_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmp3_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmp3_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmp3_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_MSV_BMP3_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp3_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_MSV_bmp3m
			{
				name="$STR_RHS_GROUP_MSV_bmp3m";
				aliveCategory="Mechanized";
				class rhs_group_rus_MSV_bmp3m_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp3m_msv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmp3m_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmp3m_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmp3m_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_emr_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_emr_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmp3m_msv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_msv_emr_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_emr_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_emr_machinegunner_assistant";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_msv_emr_marksman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_MSV_bmp3m_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_msv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_msv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp3m_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_msv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_msv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_msv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_msv_bm21
			{
				aliveCategory="Artillery";
				name="BM-21 Artillery";
				class RHS_SPGPlatoon_msv_bm21
				{
					name="BM-21 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_BM21_MSV_01";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_BM21_MSV_01";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_BM21_MSV_01";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="RHS_BM21_MSV_01";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
					class Unit4
					{
						side=0;
						vehicle="RHS_BM21_MSV_01";
						rank="SERGEANT";
						position[]={60,-60,3};
					};
					class Unit5
					{
						side=0;
						vehicle="RHS_BM21_MSV_01";
						rank="CORPORAL";
						position[]={80,-60,3};
					};
				};
				class RHS_SPGSection_msv_bm21
				{
					name="BM-21 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_BM21_MSV_01";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_BM21_MSV_01";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
			};
		};
		class rhs_faction_tv
		{
			name="$STR_RHS_FAC_TV";
			class rhs_group_rus_tv_14
			{
				name="T-14 Groups";
				aliveCategory="Armored";
				class RHS_T14Platoon
				{
					name="T-14 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T14_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T14_tv";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T14_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T14Platoon_AA
				{
					name="T-14 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T14_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T14_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T14Section
				{
					name="T-14 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T14_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T14_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
			};
			class rhs_group_rus_tv_72
			{
				name="T-72 Groups";
				aliveCategory="Armored";
				class RHS_T72BAPlatoon
				{
					name="T-72B g.1984 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t72ba_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t72ba_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t72ba_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
				};
				class RHS_T72BAPlatoon_AA
				{
					name="T-72B g.1984 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t72ba_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t72ba_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T72BASection
				{
					name="T-72B g.1984 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t72ba_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t72ba_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T72BBPlatoon
				{
					name="T-72B g.1985 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BB_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T72BB_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T72BB_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
				};
				class RHS_T72BBPlatoon_AA
				{
					name="T-72B g.1985 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BB_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T72BB_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
				};
				class RHS_T72BBSection
				{
					name="T-72B g.1985 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BB_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T72BB_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T72BCPlatoon
				{
					name="T-72B g.1989 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BC_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T72BC_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T72BC_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
				};
				class RHS_T72BCPlatoon_AA
				{
					name="T-72B g.1989 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BC_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T72BC_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T72BCSection
				{
					name="T-72B g.1989 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BC_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T72BC_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T72BDPlatoon
				{
					name="T-72B3 g.2012 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BD_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T72BD_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T72BD_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
				};
				class RHS_T72BDPlatoon_AA
				{
					name="T-72B3 g.2012 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BD_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T72BD_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T72BDSection
				{
					name="T-72B3 g.2012 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T72BD_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T72BD_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T72BEPlatoon
				{
					name="T-72B3 g.2016 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t72be_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t72be_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t72be_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
				};
				class RHS_T72BEPlatoon_AA
				{
					name="T-72B3 g.2016 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t72be_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t72be_tv";
						rank="SERGEANT";
						position[]={-21,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T72BESection
				{
					name="T-72B3 g.2016 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t72be_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t72be_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
			};
			class rhs_group_rus_tv_80
			{
				name="T-80 Groups";
				aliveCategory="Armored";
				class RHS_T80Platoon
				{
					name="T-80 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T80Platoon_AA
				{
					name="T-80 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T80Section
				{
					name="T-80 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80";
						rank="SERGEANT";
						position[]={-20,-30,2};
					};
				};
				class RHS_T80BPlatoon
				{
					name="T-80B Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80B";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80B";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80B";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T80BPlatoon_AA
				{
					name="T-80B Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80B";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80B";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T80BSection
				{
					name="T-80B Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80B";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80B";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T80BVPlatoon
				{
					name="T-80BV Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80BV";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80BV";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80BV";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T80BVPlatoon_AA
				{
					name="T-80BV Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80BV";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80BV";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T80BVSection
				{
					name="T-80BV Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80BV";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80BV";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T80APlatoon
				{
					name="T-80A Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80A";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80A";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80A";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T80APlatoon_AA
				{
					name="T-80A Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80A";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80A";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T80ASection
				{
					name="T-80A Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80A";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80A";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T80UPlatoon
				{
					name="T-80U Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80U";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80U";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80U";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T80UPlatoon_AA
				{
					name="T-80U Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80U";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80U";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T80USection
				{
					name="T-80U Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80U";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80U";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T80UMPlatoon
				{
					name="T-80UM Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80UM";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80UM";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80UM";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T80UMPlatoon_AA
				{
					name="T-80UM Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80UM";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T80UM";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_T80UMSection
				{
					name="T-80UM Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T80UM";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T80UM";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class rhs_t80ue1Platoon
				{
					name="T-80UE-1 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t80ue1";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t80ue1";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t80ue1";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class rhs_t80ue1Platoon_AA
				{
					name="T-80UE-1 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t80ue1";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t80ue1";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class rhs_t80ue1Section
				{
					name="T-80UE-1 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t80ue1";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t80ue1";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class rhs_t80u45mPlatoon
				{
					name="T-80U (45m) Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t80u45m";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t80u45m";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t80u45m";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class rhs_t80u45mPlatoon_AA
				{
					name="T-80U (45m) Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t80u45m";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t80u45m";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class rhs_t80u45mSection
				{
					name="T-80U (45m) Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t80u45m";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t80u45m";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
			};
			class rhs_group_rus_tv_90
			{
				name="T-90 Groups";
				aliveCategory="Armored";
				class RHS_T90Platoon
				{
					name="T-90 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T90_tv";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T90_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90Platoon_AA
				{
					name="T-90 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T90_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90Section
				{
					name="T-90 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T90_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_t90aPlatoon
				{
					name="T-90A Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_t90a_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_t90a_tv";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_t90a_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_t90aPlatoon_AA
				{
					name="T-90A Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_t90a_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_t90a_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_t90aSection
				{
					name="T-90A Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_t90a_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_t90a_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T90AMPlatoon
				{
					name="T-90AM Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90AM_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T90AM_tv";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T90AM_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90AMPlatoon_AA
				{
					name="T-90AM Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90AM_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T90AM_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90AMSection
				{
					name="T-90AM Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90AM_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T90AM_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T90SMPlatoon
				{
					name="T-90SM Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90SM_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T90SM_tv";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T90SM_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90SMPlatoon_AA
				{
					name="T-90SM Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90SM_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_T90SM_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90SMSection
				{
					name="T-90SM Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_T90SM_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_T90SM_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T90SAPlatoon
				{
					name="T-90SA g.2004 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t90saa_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t90saa_tv";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t90saa_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90SAPlatoon_AA
				{
					name="T-90SA g.2004 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t90saa_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t90saa_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90SASection
				{
					name="T-90SA g.2004 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t90saa_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t90saa_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
				class RHS_T90SABPlatoon
				{
					name="T-90SA g.2016 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t90sab_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t90sab_tv";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t90sab_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90SABPlatoon_AA
				{
					name="T-90SA g.2016 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t90sab_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20.1,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_t90sab_tv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_T90SABSection
				{
					name="T-90SA g.2016 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_t90sab_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_t90sab_tv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
			};
			class rhs_group_rus_tv_2S1
			{
				name="2S1 Artillery";
				aliveCategory="Artillery";
				class RHS_SPGPlatoon_tv_2S1
				{
					name="Artillery 2S1 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_2S1_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_2S1_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_2S1_tv";
						rank="SERGEANT";
						position[]={-20.1,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_2S1_tv";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_SPGSection_tv_2S1
				{
					name="Artillery 2S1 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_2S1_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_2S1_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
				};
			};
			class rhs_group_rus_tv_2s3
			{
				name="2S3 Artillery";
				aliveCategory="Artillery";
				class RHS_SPGPlatoon_tv_2s3
				{
					name="Artillery 2S3 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_2s3_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_2s3_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_2s3_tv";
						rank="SERGEANT";
						position[]={-20.1,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_2s3_tv";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
				};
				class RHS_SPGSection_tv_2s3
				{
					name="Artillery 2S3 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_2s3_tv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_2s3_tv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
				};
			};
		};
		class rhs_faction_vdv
		{
			name="$STR_RHS_FAC_VDV";
			class rhs_group_rus_vdv_infantry
			{
				name="$STR_RHS_GROUP_vdv_infantry";
				aliveCategory="Infantry";
				class rhs_group_rus_vdv_infantry_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_section_mg
				{
					name="$STR_RHS_GROUPS_SECTION_MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_section_marksman
				{
					name="$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_section_AT
				{
					name="$STR_RHS_GROUPS_SECTION_AT";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_lat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_section_AA
				{
					name="$STR_RHS_GROUPS_SECTION_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_des_infantry
			{
				name="$STR_RHS_GROUP_VDV_DES_Infantry";
				aliveCategory="Infantry";
				class rhs_group_rus_vdv_des_infantry_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_rifleman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_des_LAT";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_des_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_des_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_des_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_des_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_des_marksman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_section_mg
				{
					name="$STR_RHS_GROUPS_SECTION_MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_section_marksman
				{
					name="$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_des_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_section_AT
				{
					name="$STR_RHS_GROUPS_SECTION_AT";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_at";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_lat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_des_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_section_AA
				{
					name="$STR_RHS_GROUPS_SECTION_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_aa";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_des_aa";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_des_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_arifleman";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
				class rhs_group_rus_vdv_des_infantry_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_des_efreitor";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_des_LAT";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_des_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_infantry_flora
			{
				name="$STR_RHS_GROUP_vdv_infantry_flora";
				aliveCategory="Infantry";
				class rhs_group_rus_vdv_infantry_flora_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_flora_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=0;
						vehicle="rhs_vdv_flora_medic";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_flora_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_flora_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_flora_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_section_mg
				{
					name="$STR_RHS_GROUPS_SECTION_MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_section_marksman
				{
					name="$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_flora_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_section_AT
				{
					name="$STR_RHS_GROUPS_SECTION_AT";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_at";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_lat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_section_AA
				{
					name="$STR_RHS_GROUPS_SECTION_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_aa";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_aa";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_at";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_flora_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_flora_efreitor";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_flora_rifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_infantry_mflora
			{
				name="$STR_RHS_GROUP_vdv_infantry_mflora";
				aliveCategory="Infantry";
				class rhs_group_rus_vdv_infantry_mflora_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_mflora_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_mflora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=0;
						vehicle="rhs_vdv_mflora_medic";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_mflora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_mflora_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_mflora_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_mflora_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_mflora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_section_mg
				{
					name="$STR_RHS_GROUPS_SECTION_MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_section_marksman
				{
					name="$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_mflora_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_section_AT
				{
					name="$STR_RHS_GROUPS_SECTION_AT";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_at";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_lat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_section_AA
				{
					name="$STR_RHS_GROUPS_SECTION_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_aa";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_aa";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_at";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_mflora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_mflora_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_mflora_efreitor";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_mflora_rifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_infantry_recon
			{
				name="$STR_RHS_GROUP_VDV_Recon_Infantry";
				aliveCategory="Infantry";
				class rhs_group_rus_vdv_infantry_recon_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_recon_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_recon_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_recon_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_recon_rifleman_akms";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_recon_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_recon_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_recon_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_recon_rifleman_lat";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_recon_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_recon_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_recon_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_recon_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_recon_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_recon_rifleman_lat";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_recon_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_recon_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_recon_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_recon_marksman_asval";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_recon_rifleman_lat";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_recon_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_recon_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_recon_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_recon_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_recon_marksman_asval";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_recon_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_recon_arifleman";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_recon_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_recon_efreitor";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_recon_rifleman_lat";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_recon_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_Ural
			{
				name="$STR_RHS_GROUP_vdv_Ural";
				aliveCategory="Motorized";
				class rhs_group_rus_vdv_Ural_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_uaz_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_vdv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_vdv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_vdv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_vdv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_Ural_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_Ural_Zu23_vdv_01";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_gaz66
			{
				name="$STR_RHS_GROUP_vdv_gaz66";
				aliveCategory="Motorized";
				class rhs_group_rus_vdv_gaz66_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_uaz_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_gaz66_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_gaz66_Zu23_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_btr60
			{
				name="$STR_RHS_GROUP_vdv_btr60";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_btr60_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr60_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr60_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr60_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr60_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr60_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_btr60_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr60_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_btr70
			{
				name="$STR_RHS_GROUP_vdv_BTR70";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_btr70_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_btr70_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr70_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_BTR80
			{
				name="$STR_RHS_GROUP_msv_BTR80";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_BTR80_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr80_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr80_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_BTR80a
			{
				name="$STR_RHS_GROUP_msv_BTR80a";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_BTR80a_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_BTR80a_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_BTR80a_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_BTR80a_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_BTR80a_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_BTR80a_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_BTR80a_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_BTR80a_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmp1
			{
				name="$STR_RHS_GROUP_vdv_BMP1";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_bmp1_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp1k_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp1p_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp1p_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp1p_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp1p_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp1_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp1p_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmp2
			{
				name="$STR_RHS_GROUP_vdv_BMP2";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_bmp2_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2k_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmp2_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd1
			{
				name="$STR_RHS_GROUP_vdv_bmd1";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_bmd1_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd1pk";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_bmd1p";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_bmd1p";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_bmd1p";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_bmd1p";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd1_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd1p";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd2
			{
				name="$STR_RHS_GROUP_vdv_bmd2";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_bmd2_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd2k";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_bmd2m";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_bmd2m";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_bmd2m";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_bmd2m";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd2_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd2m";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd4
			{
				name="$STR_RHS_GROUP_vdv_bmd4";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_bmd4_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd4_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd4_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd4m
			{
				name="$STR_RHS_GROUP_vdv_bmd4m";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_bmd4m_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd4m_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4m_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4m_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4m_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4m_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4m_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd4m_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bmd4ma
			{
				name="$STR_RHS_GROUP_vdv_bmd4ma";
				aliveCategory="Mechanized";
				class rhs_group_rus_vdv_bmd4ma_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd4ma_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4ma_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4ma_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4ma_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_bmd4ma_vdv";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_arifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_bmd4ma_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmd4ma_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_mi8
			{
				name="$STR_RHS_GROUP_vdv_mi8";
				aliveCategory="Airborne";
				class rhs_group_rus_vdv_mi8_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="RHS_Mi8MTV3_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_mi8_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="RHS_Mi8MTV3_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={17,0,0};
					};
					class Unit10
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={19,0,0};
					};
				};
				class rhs_group_rus_vdv_mi8_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="RHS_Mi8MTV3_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={17,0,0};
					};
					class Unit10
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={19,0,0};
					};
				};
				class rhs_group_rus_vdv_mi8_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="RHS_Mi8MTV3_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={17,0,0};
					};
					class Unit10
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={19,0,0};
					};
				};
				class rhs_group_rus_vdv_mi8_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="RHS_Mi8MTV3_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={17,0,0};
					};
					class Unit10
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={19,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_mi24
			{
				name="$STR_RHS_GROUP_vdv_mi24";
				aliveCategory="Airborne";
				class rhs_group_rus_vdv_mi24_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_mi24v_vdv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vdv_mi24_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_mi24v_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vdv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vdv_mi24_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_mi24v_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_mi24_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_mi24v_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vdv_mi24_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vdv_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vdv_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vdv_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_mi24v_vdv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vdv_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vdv_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vdv_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vdv_bm21
			{
				name="BM-21 Artillery";
				aliveCategory="Artillery";
				class RHS_SPGPlatoon_vdv_bm21
				{
					name="BM-21 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_BM21_vdv_01";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_BM21_vdv_01";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="RHS_BM21_vdv_01";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit3
					{
						side=0;
						vehicle="RHS_BM21_vdv_01";
						rank="CORPORAL";
						position[]={40,-60,3};
					};
					class Unit4
					{
						side=0;
						vehicle="RHS_BM21_vdv_01";
						rank="SERGEANT";
						position[]={60,-60,3};
					};
					class Unit5
					{
						side=0;
						vehicle="RHS_BM21_vdv_01";
						rank="CORPORAL";
						position[]={80,-60,3};
					};
				};
				class RHS_SPGSection_vdv_bm21
				{
					name="BM-21 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side=0;
						vehicle="RHS_BM21_vdv_01";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="RHS_BM21_vdv_01";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
			};
			class rhs_group_rus_vdv_2s25
			{
				name="Tank (2S25)";
				aliveCategory="Armored";
				class RHS_2S25Platoon
				{
					name="2S25 Platoon";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_sprut_vdv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_sprut_vdv";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_sprut_vdv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_2S25Platoon_AA
				{
					name="2S25 Platoon (Combined)";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_sprut_vdv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_zsu234_aa";
						rank="SERGEANT";
						position[]={20,-30,3};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_sprut_vdv";
						rank="SERGEANT";
						position[]={-20,-30,3};
					};
				};
				class RHS_2S25Section
				{
					name="2S25 Section";
					side=0;
					icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_sprut_vdv";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_sprut_vdv";
						rank="SERGEANT";
						position[]={20,-30,2};
					};
				};
			};
		};
		class rhs_faction_vmf
		{
			name="Russia (VMF)";
			class rhs_group_rus_vmf_infantry
			{
				name="$STR_RHS_GROUP_MSV_infantry";
				aliveCategory="Infantry";
				class rhs_group_rus_vmf_infantry_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="PRIVATE";
						position[]={15,0,0};
					};
					class Unit9
					{
						side=0;
						vehicle="rhs_vmf_flora_medic";
						rank="PRIVATE";
						position[]={17,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_section_mg
				{
					name="$STR_RHS_GROUPS_SECTION_MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_section_marksman
				{
					name="$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_section_AT
				{
					name="$STR_RHS_GROUPS_SECTION_AT";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_at";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_lat";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_section_AA
				{
					name="$STR_RHS_GROUPS_SECTION_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_aa";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_aa";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_at";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="LIEUTENANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_vmf_infantry_recon
			{
				name="$STR_RHS_GROUP_VDV_Recon_Infantry";
				aliveCategory="Infantry";
				class rhs_group_rus_vmf_infantry_recon_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_recon_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_recon_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_recon_officer_armored";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_recon_rifleman_akms";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_recon_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_recon_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_recon_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_recon_rifleman_lat";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_recon_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_recon_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_recon_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_recon_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_recon_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_recon_rifleman_lat";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_recon_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_recon_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_recon_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_recon_marksman_vss";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_recon_rifleman_lat";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_recon_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_recon_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_recon_arifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_recon_arifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_recon_marksman_vss";
						rank="PRIVATE";
						position[]={9,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_recon_fireteam
				{
					name="$STR_RHS_GROUPS_RUS_FIRETEAM";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_recon_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_recon_arifleman";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_recon_machinegunner_assistant";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
				class rhs_group_rus_vmf_infantry_recon_MANEUVER
				{
					name="$STR_RHS_GROUPS_RUS_MANEUVER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_recon_efreitor";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_recon_rifleman_lat";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_recon_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
				};
			};
			class rhs_group_rus_msv_bmp2
			{
				name="$STR_RHS_GROUP_MSV_BMP2";
				aliveCategory="Mechanized";
				class rhs_group_rus_msv_bmp2_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2k_msv";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vmf_flora_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_marksman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_at";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_medic";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_marksman";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_msv_bmp2_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_bmp2_msv";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
			class rhs_group_rus_vmf_BTR80
			{
				name="$STR_RHS_GROUP_MSV_BTR80";
				aliveCategory="Mechanized";
				class rhs_group_rus_vmf_BTR80_chq
				{
					name="$STR_RHS_GROUPS_COMPANY_HQ";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_officer";
						rank="CAPTAIN";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_officer_armored";
						rank="LIEUTENANT";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_crew_commander";
						rank="LIEUTENANT";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr80_vmf";
						rank="SERGEANT";
						position[]={5,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad
				{
					name="$STR_RHS_GROUPS_SQUAD";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_vmf";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad_2mg
				{
					name="$STR_RHS_GROUPS_SQUAD_2MG";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_vmf";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_vmf";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_marksman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad_mg_sniper
				{
					name="$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_efreitor";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_btr80_vmf";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier_rpg";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_strelok_rpg_assist";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner_assistant";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="rhs_vmf_flora_marksman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class rhs_group_rus_vmf_BTR80_squad_aa
				{
					name="$STR_RHS_GROUPS_SQUAD_AA";
					side=0;
					rarityGroup=0.75;
					icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="rhs_vmf_flora_junior_sergeant";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=0;
						vehicle="rhs_vmf_flora_aa";
						rank="CORPORAL";
						position[]={-5,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="rhs_vmf_flora_aa";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="rhs_btr80_vmf";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="rhs_vmf_flora_machinegunner";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="rhs_vmf_flora_grenadier";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="rhs_vmf_flora_LAT";
						rank="PRIVATE";
						position[]={11,0,0};
					};
				};
			};
		};
	};
};
class DefaultEventHandlers;
class UniformSlotInfo;
class CfgVehicles
{
	class B_AssaultPack_Base;
	class rhs_assault_umbts: B_AssaultPack_Base
	{
		displayName="$STR_RHS_UMBTSBACKPACK_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"
		};
		maximumLoad=240;
		mass=35;
	};
	class rhs_assault_umbts_ammo: rhs_assault_umbts
	{
	};
	class rhs_assault_umbts_ammo_recon: rhs_assault_umbts
	{
	};
	class rhs_assault_umbts_engineer: rhs_assault_umbts
	{
		displayName="$STR_RHS_UMBTSBACKPACKENGINEER_NAME";
	};
	class rhs_assault_umbts_engineer_empty: rhs_assault_umbts_engineer
	{
	};
	class rhs_assault_umbts_medic: rhs_assault_umbts
	{
		displayName="$STR_RHS_UMBTSBACKPACKMEDIC_NAME";
	};
	class rhs_assault_umbts_demo: rhs_assault_umbts
	{
		displayName="$STR_RHS_UMBTSBACKPACKDEMOLITIONS_NAME";
	};
	class rhs_rpg: B_AssaultPack_Base
	{
		displayName="$STR_RHS_RPGCARRIER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\gearpack2_rpg_co.paa"
		};
		maximumLoad=140;
		mass=20;
	};
	class rhs_rpg_at: rhs_rpg
	{
	};
	class rhs_rpg_vl: rhs_rpg_at
	{
	};
	class rhs_rpg_v: rhs_rpg_vl
	{
	};
	class rhs_rpg_empty: rhs_rpg
	{
	};
	class rhs_sidor: B_AssaultPack_Base
	{
		displayName="$STR_RHS_SIDOR_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"
		};
		maximumLoad=129;
		mass=20;
	};
	class rhs_sidorMG: rhs_sidor
	{
		displayName="$STR_RHS_SIDORPKBOXES_NAME";
	};
	class rhs_medic_bag: B_AssaultPack_Base
	{
		displayName="$STR_RHS_MEDICBAG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"
		};
		maximumLoad=96;
		mass=15;
	};
	class rhs_medic_bag_filled: rhs_medic_bag
	{
	};
	class B_Parachute;
	class Steerable_Parachute_F;
	class rhs_d6_Parachute: Steerable_Parachute_F
	{
		side=0;
		maxgravity=-10;
		maxliftduration=4;
		maxliftthrust=-40;
		maxrotationx=0.1;
		maxrotationz=0.40000001;
		maxsensitivityhorizontal=0.050000001;
		maxsensitivityvertical=0.0099999998;
		mingravity=-2;
		minliftduration=4;
		minliftthrust=-40;
		minrotationx=-0.1;
		minrotationz=-0.40000001;
		normalgravity=-5;
		thrustaccel=0.001;
		thrustdeccel=0.001;
		thrustnormal=0.001;
		turnforcescale=9.9999997e-005;
		displayName="D-6 Parachute";
	};
	class rhs_d6_Parachute_backpack: B_Parachute
	{
		displayName="D6 Parachute Bag";
		ParachuteClass="rhs_d6_Parachute";
		maximumLoad=0;
		mass=130;
	};
	class Item_Base_F;
	class Item_rhs_uniform_flora: Item_Base_F
	{
		displayName="Flora (MSV)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_vdv_emr: Item_Base_F
	{
		displayName="EMR-Summer (VDV)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_msv_emr: Item_Base_F
	{
		displayName="EMR-Summer (MSV)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_vdv_flora: Item_Base_F
	{
		displayName="Flora (VDV)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_vdv_mflora: Item_Base_F
	{
		displayName="Mountain Flora (VDV)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_m88_patchless: Item_Base_F
	{
		displayName="M88";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_flora_patchless: Item_Base_F
	{
		displayName="Flora";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_flora_patchless_alt: Item_Base_F
	{
		displayName="Flora (Alt.)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_emr_patchless: Item_Base_F
	{
		displayName="EMR-Summer";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_mflora_patchless: Item_Base_F
	{
		displayName="Mountain Flora";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_df15: Item_Base_F
	{
		displayName="DF-15-2";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_gorka_r_y: Item_Base_F
	{
		displayName="Gorka-R (Yellow)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_gorka_r_g: Item_Base_F
	{
		displayName="Gorka-R (Green)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_uniform_vdv_emr_des: Item_Base_F
	{
		displayName="EMR-Desert (VDV)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh46: Item_Base_F
	{
		displayName="6Sh46";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13: Item_Base_F
	{
		displayName="6B13 VSR 3-TsV";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_6sh92: Item_Base_F
	{
		displayName="6B13 VSR 3-TsV (6Sh92)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_crewofficer: Item_Base_F
	{
		displayName="6B13 VSR 3-TsV (Crew Officer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_6sh92_vog: Item_Base_F
	{
		displayName="6B13 VSR 3-TsV (6Sh92/VOG)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_6sh92_headset_mapcase: Item_Base_F
	{
		displayName="6B13 VSR 3-TsV (6Sh92/Headset/Mapcase)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_6sh92_radio: Item_Base_F
	{
		displayName="6B13 VSR 3-TsV (6Sh92/Radio)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_flora: Item_Base_F
	{
		displayName="6B13";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_Flora_crewofficer: Item_Base_F
	{
		displayName="6B13 (Crew Officer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_Flora_6sh92: Item_Base_F
	{
		displayName="6B13 (6Sh92)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_Flora_6sh92_vog: Item_Base_F
	{
		displayName="6B13 (6Sh92/VOG)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_Flora_6sh92_headset_mapcase: Item_Base_F
	{
		displayName="6B13 (6Sh92/Headset/Mapcase)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_Flora_6sh92_radio: Item_Base_F
	{
		displayName="6B13 (6Sh92/Radio)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_emr: Item_Base_F
	{
		displayName="6B13 EMR-Summer";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_emr_crewofficer: Item_Base_F
	{
		displayName="6B13 EMR (Crew Officer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_emr_6sh92: Item_Base_F
	{
		displayName="6B13 EMR (6Sh92)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_emr_6sh92_vog: Item_Base_F
	{
		displayName="6B13 EMR (6Sh92/VOG)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_emr_6sh92_headset_mapcase: Item_Base_F
	{
		displayName="6B13 EMR (6Sh92/Headset/Mapcase)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b13_emr_6sh92_radio: Item_Base_F
	{
		displayName="6B13 EMR (6Sh92/Radio)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23: Item_Base_F
	{
		displayName="6B23";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_crew: Item_Base_F
	{
		displayName="6B23 (Crew)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_crewofficer: Item_Base_F
	{
		displayName="6B23 (Crew Officer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_vest_commander: Item_Base_F
	{
		displayName="Mapcase and Holster";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_engineer: Item_Base_F
	{
		displayName="6B23 (Engineer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_medic: Item_Base_F
	{
		displayName="6B23 (Medic)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_rifleman: Item_Base_F
	{
		displayName="6B23 (Rifleman)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_sniper: Item_Base_F
	{
		displayName="6B23 (Sniper)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_6sh92: Item_Base_F
	{
		displayName="6B23 (6Sh92)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_6sh92_vog: Item_Base_F
	{
		displayName="6B23 (6Sh92/VOG)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_6sh92_vog_headset: Item_Base_F
	{
		displayName="6B23 (6Sh92/VOG/Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_6sh92_headset: Item_Base_F
	{
		displayName="6B23 (6Sh92/Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_6sh92_headset_mapcase: Item_Base_F
	{
		displayName="6B23 (6Sh92/Headset/Mapcase)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_6sh92_radio: Item_Base_F
	{
		displayName="6B23 (6Sh92/Radio)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi: Item_Base_F
	{
		displayName="6B23 EMR-Summer";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_crew: Item_Base_F
	{
		displayName="6B23 EMR-Summer (Crew)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_crewofficer: Item_Base_F
	{
		displayName="6B23 EMR-Summer (Crew Officer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_engineer: Item_Base_F
	{
		displayName="6B23 EMR-Summer (Engineer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_medic: Item_Base_F
	{
		displayName="6B23 EMR-Summer (Medic)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_rifleman: Item_Base_F
	{
		displayName="6B23 EMR-Summer (Rifleman)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_sniper: Item_Base_F
	{
		displayName="6B23 EMR-Summer (Sniper)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_6sh92: Item_Base_F
	{
		displayName="6B23 EMR-Summer (6Sh92)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_6sh92_vog: Item_Base_F
	{
		displayName="6B23 EMR-Summer (6Sh92/VOG)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_6sh92_vog_headset: Item_Base_F
	{
		displayName="6B23 EMR-Summer (6Sh92/VOG/Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_6sh92_headset: Item_Base_F
	{
		displayName="6B23 EMR-Summer (6Sh92/Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_6sh92_headset_mapcase: Item_Base_F
	{
		displayName="6B23 EMR-Summer (6Sh92/Headset/Mapcase)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_digi_6sh92_radio: Item_Base_F
	{
		displayName="6B23 EMR-Summer (6Sh92/Radio)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML: Item_Base_F
	{
		displayName="6B23 Mountain Les";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_crew: Item_Base_F
	{
		displayName="6B23 Mountain Les (Crew)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_crewofficer: Item_Base_F
	{
		displayName="6B23 Mountain Les (Crew Officer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_engineer: Item_Base_F
	{
		displayName="6B23 Mountain Les (Engineer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_medic: Item_Base_F
	{
		displayName="6B23 Mountain Les (Medic)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_rifleman: Item_Base_F
	{
		displayName="6B23 Mountain Les (Rifleman)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_sniper: Item_Base_F
	{
		displayName="6B23 Mountain Les (Sniper)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_6sh92: Item_Base_F
	{
		displayName="6B23 Mountain Les (6Sh92)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_6sh92_vog: Item_Base_F
	{
		displayName="6B23 Mountain Les (6Sh92/VOG)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_6sh92_vog_headset: Item_Base_F
	{
		displayName="6B23 Mountain Les (6Sh92/VOG/Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_6sh92_headset: Item_Base_F
	{
		displayName="6B23 Mountain Les (6Sh92/Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_6sh92_headset_mapcase: Item_Base_F
	{
		displayName="6B23 Mountain Les (6Sh92/Headset/Mapcase)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b23_ML_6sh92_radio: Item_Base_F
	{
		displayName="6B23 Mountain Les (6Sh92/Radio)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92: Item_Base_F
	{
		displayName="6Sh92";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_vog: Item_Base_F
	{
		displayName="6Sh92 (VOG)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_vog_headset: Item_Base_F
	{
		displayName="6Sh92 (VOG/Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_headset: Item_Base_F
	{
		displayName="6Sh92 (Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_radio: Item_Base_F
	{
		displayName="6Sh92 (Radio)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_digi: Item_Base_F
	{
		displayName="6Sh92 EMR-Summer";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_digi_vog: Item_Base_F
	{
		displayName="6Sh92 EMR-Summer (VOG)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_digi_vog_headset: Item_Base_F
	{
		displayName="6Sh92 EMR-Summer (VOG/Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_digi_headset: Item_Base_F
	{
		displayName="6Sh92 EMR-Summer (Headset)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6sh92_digi_radio: Item_Base_F
	{
		displayName="6Sh92 EMR-Summer (Radio)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_vydra_3m: Item_Base_F
	{
		displayName="Vydra-3M";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_fieldcap: Item_Base_F
	{
		displayName="Field Cap";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_fieldcap_helm: Item_Base_F
	{
		displayName="Field Cap (6B27M)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_tsh4: Item_Base_F
	{
		displayName="TSh-4";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_tsh4_ess: Item_Base_F
	{
		displayName="TSh-4 (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_tsh4_bala: Item_Base_F
	{
		displayName="TSh-4 (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_tsh4_ess_bala: Item_Base_F
	{
		displayName="TSh-4 (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_fieldcap_digi_des: Item_Base_F
	{
		displayName="Field Cap EMR-Desert";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_zsh7a: Item_Base_F
	{
		displayName="ZSh-7A (KM-35)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_zsh7a_mike: Item_Base_F
	{
		displayName="ZSh-7A";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_zsh12: Item_Base_F
	{
		displayName="ZSh-1-2";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_gssh18: Item_Base_F
	{
		displayName="GSSh-A-18";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b26: Item_Base_F
	{
		displayName="6B26 Flora";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b26_ess: Item_Base_F
	{
		displayName="6B26 Flora (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b26_bala: Item_Base_F
	{
		displayName="6B26 Flora (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b26_ess_bala: Item_Base_F
	{
		displayName="6B26 Flora (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b26_green: Item_Base_F
	{
		displayName="6B26";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b26_ess_green: Item_Base_F
	{
		displayName="6B26 (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b26_bala_green: Item_Base_F
	{
		displayName="6B26 (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b26_ess_bala_green: Item_Base_F
	{
		displayName="6B26 (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m: Item_Base_F
	{
		displayName="6B27M Flora";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_ess: Item_Base_F
	{
		displayName="6B27M Flora (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_bala: Item_Base_F
	{
		displayName="6B27M Flora (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_ess_bala: Item_Base_F
	{
		displayName="6B27M Flora (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_digi: Item_Base_F
	{
		displayName="6B27M EMR-Summer";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_digi_ess: Item_Base_F
	{
		displayName="6B27M EMR-Summer (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_digi_bala: Item_Base_F
	{
		displayName="6B27M EMR-Summer (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_digi_ess_bala: Item_Base_F
	{
		displayName="6B27M EMR-Summer (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_ml: Item_Base_F
	{
		displayName="6B27M Mountain Les";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_ml_ess: Item_Base_F
	{
		displayName="6B27M Mountain Les (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_ml_bala: Item_Base_F
	{
		displayName="6B27M Mountain Les (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_ml_ess_bala: Item_Base_F
	{
		displayName="6B27M Mountain Les (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_green: Item_Base_F
	{
		displayName="6B27M";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_green_ess: Item_Base_F
	{
		displayName="6B27M (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_green_bala: Item_Base_F
	{
		displayName="6B27M (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b27m_green_ess_bala: Item_Base_F
	{
		displayName="6B27M (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28: Item_Base_F
	{
		displayName="6B28 EMR-Summer";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_ess: Item_Base_F
	{
		displayName="6B28 EMR-Summer (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_bala: Item_Base_F
	{
		displayName="6B28 EMR-Summer (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_ess_bala: Item_Base_F
	{
		displayName="6B28 EMR-Summer (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_flora: Item_Base_F
	{
		displayName="6B28 Flora";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_flora_ess: Item_Base_F
	{
		displayName="6B28 Flora (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_flora_ess_bala: Item_Base_F
	{
		displayName="6B28 Flora (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_flora_bala: Item_Base_F
	{
		displayName="6B28 Flora (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_green: Item_Base_F
	{
		displayName="6B28";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_green_ess: Item_Base_F
	{
		displayName="6B28 (ESS)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_green_bala: Item_Base_F
	{
		displayName="6B28 (Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_6b28_green_ess_bala: Item_Base_F
	{
		displayName="6B28 (ESS/Balaclava)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_ssh68: Item_Base_F
	{
		displayName="SSh-68";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_Booniehat_digi: Item_Base_F
	{
		displayName="Boonie Hat EMR-Summer";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_Booniehat_flora: Item_Base_F
	{
		displayName="Boonie Hat Flora";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_fieldcap_digi: Item_Base_F
	{
		displayName="Field Cap EMR-Summer";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_fieldcap_helm_digi: Item_Base_F
	{
		displayName="Field Cap (6B27M EMR-Summer)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_fieldcap_ml: Item_Base_F
	{
		displayName="Field Cap Mountain Les";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_fieldcap_helm_ml: Item_Base_F
	{
		displayName="Field Cap (6B27M Mountain Les)";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_beanie: Item_Base_F
	{
		displayName="Beanie Flora";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_beanie_green: Item_Base_F
	{
		displayName="Beanie";
		editorCategory="EdCat_Equipment";
	};
	class Item_rhs_acc_npz: Item_Base_F
	{
		displayName="Rail Adapter";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_1pn93_1: Item_Base_F
	{
		displayName="1PN93-1";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_1pn93_2: Item_Base_F
	{
		displayName="1PN93-2";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_pso1m2: Item_Base_F
	{
		displayName="PSO-1M2";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_pso1m21: Item_Base_F
	{
		displayName="PSO-1M2-1";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_pkas: Item_Base_F
	{
		displayName="PK-AS";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_pgo7v: Item_Base_F
	{
		displayName="PGO-7V3";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_1p29: Item_Base_F
	{
		displayName="1P29";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_1p78: Item_Base_F
	{
		displayName="1P78";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_1p87: Item_Base_F
	{
		displayName="1P87";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_ekp1: Item_Base_F
	{
		displayName="EKP-1S-03";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_ekp8_02: Item_Base_F
	{
		displayName="EKP-8-02";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_ekp8_18: Item_Base_F
	{
		displayName="EKP-8-18";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_1p63: Item_Base_F
	{
		displayName="1P63";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_tgpa: Item_Base_F
	{
		displayName="TGP-A";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_pbs1: Item_Base_F
	{
		displayName="PBS-1";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_tgpv: Item_Base_F
	{
		displayName="TGP-V";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_dtk4long: Item_Base_F
	{
		displayName="DTK-4 (7.62)";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_dtk4short: Item_Base_F
	{
		displayName="DTK-4 (5.45)";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_dtk4screws: Item_Base_F
	{
		displayName="DTK-4 (7.62)";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_dtk3: Item_Base_F
	{
		displayName="DTK-3";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_dtk: Item_Base_F
	{
		displayName="DTK";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_dtk1: Item_Base_F
	{
		displayName="DTK-1";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_dtk1l: Item_Base_F
	{
		displayName="DTK-1L";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_dtk2: Item_Base_F
	{
		displayName="DTK-2";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_ak5: Item_Base_F
	{
		displayName="DPM-AK-5";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_2dpZenit: Item_Base_F
	{
		displayName="2DP";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Item_rhs_acc_pgs64: Item_Base_F
	{
		displayName="PG S64";
		editorCategory="EdCat_WeaponAttachments";
	};
	class Man;
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierGB: CAManBase
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
		class Eventhandlers;
	};
	class rhs_infantry_msv_base: SoldierGB
	{
		side=0;
		displayName="$STR_RHS_INF_RIFLEMAN";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Euro"
		};
		genericNames="RussianMen";
		portrait="";
		icon="iconMan";
		accuracy=1.6;
		sensitivity=3;
		threat[]={1,0.1,0.1};
		camouflage=1.4;
		minFireTime=10;
		canCarryBackPack=1;
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_flora";
		primaryAmmoCoef=0.40000001;
		secondaryAmmoCoef=0.2;
		handgunAmmoCoef=0.1;
		cost=100000;
		class Wounds
		{
		};
		selectionClan="";
		selectionbodywound="body_injury";
		selectionlarmwound="l_arm_injury";
		selectionlarmwound1="l_arm_injury";
		selectionlarmwound2="hl";
		selectionllegwound="l_leg_injury";
		selectionllegwound1="l_leg_injury";
		selectionllegwound2="hl";
		selectionrarmwound="r_arm_injury";
		selectionrarmwound1="r_arm_injury";
		selectionrarmwound2="hl";
		selectionRLegWound="r_leg_injury";
		selectionRLegWound1="r_leg_injury";
		selectionrlegwound2="hl";
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rsp30_red",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rsp30_red",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_nspn_red"
		};
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"rhs_6b27m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_co.paa"
		};
		class EventHandlers: Eventhandlers
		{
			class RHS_NVG_Check
			{
				init="_this call rhs_fnc_nvgHandler";
			};
		};
	};
	class rhs_msv_rifleman: rhs_infantry_msv_base
	{
		displayName="$STR_RHS_INF_RIFLEMAN";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m",
			10,
			"rhs_6b27m_ess",
			10,
			"rhs_6b27m_bala",
			5,
			"rhs_6b27m_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
	};
	class rhs_msv_LAT: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_LAT";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=180000;
		threat[]={1,0.69999999,0.30000001};
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_plummag_dtk",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_plummag_dtk",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
		};
		secondaryAmmoCoef=0.5;
	};
	class rhs_msv_RShG2: rhs_msv_LAT
	{
		displayName="$STR_RHS_INF_RShG2";
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rshg2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rshg2",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rshg2_mag"
		};
		secondaryAmmoCoef=0.5;
	};
	class rhs_msv_grenadier: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_GRENADIER";
		cost=130000;
		threat[]={1,0.30000001,0.1};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_gp25_dtk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_gp25_dtk",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25"
		};
	};
	class rhs_msv_arifleman: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_ARIFLEMAN";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_MG_s"
				};
				speechPlural[]=
				{
					"veh_infantry_MG_p"
				};
			};
		};
		nameSound="veh_infantry_MG_s";
		cost=125000;
		threat[]={1,0.1,0.30000001};
		icon="iconManMG";
		weapons[]=
		{
			"rhs_weap_pkp",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkp",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgn"
		};
		backpack="rhs_sidorMG";
		secondaryAmmoCoef=0.5;
	};
	class rhs_msv_machinegunner: rhs_msv_arifleman
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER";
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
	};
	class rhs_msv_machinegunner_assistant: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";
		cost=110000;
		camouflage=1.5;
		linkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_sidorMG";
	};
	class rhs_msv_grenadier_rpg: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=160000;
		threat[]={1,0.5,0.2};
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_plummag_dtk",
			"Throw",
			"Put",
			"rhs_weap_rpg7_pgo"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_plummag_dtk",
			"Throw",
			"Put",
			"rhs_weap_rpg7_pgo"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rpg7_PG7VL_mag"
		};
		backpack="rhs_rpg";
		secondaryAmmoCoef=0.5;
	};
	class rhs_msv_strelok_rpg_assist: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG_ASSISTANT";
		linkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_rpg";
		secondaryAmmoCoef=0.5;
	};
	class rhs_msv_marksman: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_MARKSMAN";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_sniper_s"
				};
				speechPlural[]=
				{
					"veh_infantry_sniper_p"
				};
			};
		};
		nameSound="veh_infantry_sniper_s";
		cost=150000;
		sensitivity=3.3;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_fieldcap_helm",
			50,
			"rhs_Booniehat_flora",
			10,
			"rhs_beanie",
			5,
			"rhs_beanie_green",
			5,
			"rhs_6b27m",
			1,
			"rhs_6b27m_ess",
			1,
			"rhs_6b27m_bala",
			1,
			"rhs_6b27m_ess_bala",
			1,
			"rhs_6b27m_green",
			1,
			"rhs_6b27m_green_ess",
			1,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_fieldcap_helm",
			"rhs_6b23_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap_helm",
			"rhs_6b23_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_svdp_pso1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_svdp_pso1",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_msv_efreitor: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_EFREITOR";
		cost=350000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_sergeant: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_SERGEANT";
		cost=500000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_gp25_dtk",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_gp25_dtk",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};
	class rhs_msv_junior_sergeant: rhs_msv_sergeant
	{
		displayName="$STR_RHS_INF_JUNIOR_SERGEANT";
		cost=450000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_officer_armored: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_OFFICER_ARMORED";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
		nameSound="veh_infantry_officer_s";
		cost=600000;
		camouflage=1.6;
		sensitivity=3;
		icon="iconManOfficer";
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_6b23_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_6b23_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_folded_dtk",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_folded_dtk",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_msv_officer: rhs_msv_officer_armored
	{
		displayName="$STR_RHS_INF_OFFICER";
		linkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_at: rhs_msv_grenadier_rpg
	{
		displayName="AT Specialist";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=180000;
		threat[]={1,0.69999999,0.30000001};
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_rpg_at";
		secondaryAmmoCoef=0.5;
	};
	class rhs_msv_aa: rhs_msv_at
	{
		displayName="$STR_RHS_INF_AA";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=200000;
		threat[]={1,1,0.80000001};
		camouflage=1.5;
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b27m_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put",
			"rhs_weap_igla"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"rhs_weap_igla"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9k38_rocket"
		};
		backpack="";
	};
	class rhs_msv_engineer: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_ENGINEER";
		cost=220000;
		camouflage=1.6;
		sensitivity=2.5;
		canDeactivateMines=1;
		engineer=1;
		detectSkill=60;
		threat[]={1,0.5,0.1};
		icon="iconManEngineer";
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_assault_umbts_engineer";
	};
	class rhs_msv_medic: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_MEDIC";
		attendant=1;
		icon="iconManMedic";
		backpack="rhs_assault_umbts_medic";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_medic_s"
				};
				speechPlural[]=
				{
					"veh_infantry_medic_p"
				};
			};
		};
		nameSound="veh_infantry_medic_s";
		linkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_driver_armored: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_DRIVER_ARMORED";
		engineer=1;
		icon="iconManEngineer";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_msv_driver: rhs_msv_driver_armored
	{
		displayName="$STR_RHS_INF_DRIVER";
		linkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_crew: rhs_msv_rifleman
	{
		displayName="$STR_RHS_INF_CREW";
		cost=90000;
		camouflage=1.6;
		sensitivity=2.5;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		fsmDanger="rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};
	class rhs_msv_armoredcrew: rhs_msv_crew
	{
		displayName="$STR_RHS_INF_CREW_ARMORED";
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_msv_combatcrew: rhs_msv_crew
	{
		displayName="$STR_RHS_INF_CREW_COMBAT";
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_msv_crew_commander: rhs_msv_crew
	{
		displayName="$STR_RHS_INF_CREW_COMMANDER";
		cost=450000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_pilot_base: rhs_infantry_msv_base
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_pilot_s"
				};
				speechPlural[]=
				{
					"veh_infantry_pilot_p"
				};
			};
		};
		nameSound="veh_infantry_pilot_s";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Euro",
			"Head_Asian"
		};
		displayName="Pilot";
		uniformClass="rhs_uniform_df15";
		weapons[]=
		{
			"rhs_weap_makarov_pm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_makarov_pm",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		class Wounds
		{
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_df15_co.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_pilot_tan_base: rhs_pilot_base
	{
		displayName="Pilot";
		uniformClass="rhs_uniform_df15_tan";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_df15khaki_co.paa"
		};
	};
	class rhs_pilot: rhs_pilot_base
	{
		displayName="$STR_RHS_PILOT_NAME";
		cost=160000;
		camouflage=2;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_zsh7a",
			1,
			"rhs_zsh7a_alt",
			1
		};
		linkedItems[]=
		{
			"rhs_zsh7a",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_zsh7a",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_pilot_tan: rhs_pilot_tan_base
	{
		displayName="Pilot (Tan)";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_df15khaki_co.paa"
		};
		nameSound="veh_infantry_pilot_s";
		cost=160000;
		camouflage=2;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_zsh7a",
			1,
			"rhs_zsh7a_alt",
			1
		};
		linkedItems[]=
		{
			"rhs_zsh7a",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_zsh7a",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_pilot_combat_heli: rhs_pilot_base
	{
		displayName="$STR_RHS_PILOTCOMBATHELICOPTER_NAME";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_zsh7a_mike_green",
			1,
			"rhs_zsh7a_mike_green_alt",
			1
		};
		linkedItems[]=
		{
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_pilot_transport_heli: rhs_pilot_base
	{
		displayName="$STR_RHS_PILOTTRANSPORT_NAME";
		linkedItems[]=
		{
			"rhs_gssh18",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_gssh18",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_rifleman: rhs_msv_rifleman
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_LAT: rhs_msv_LAT
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_RShG2: rhs_msv_RShG2
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
	};
	class rhs_msv_emr_grenadier: rhs_msv_grenadier
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_digi_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_digi_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_rifleman_patchless: rhs_msv_emr_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_PATCHLESS";
	};
	class rhs_msv_mflora_rifleman_patchless: rhs_msv_emr_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_mf_co.paa"
		};
		selectionClan="clan";
		class Wounds
		{
		};
	};
	class rhs_msv_rifleman_patchless: rhs_msv_emr_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_patchless_co.paa"
		};
		selectionClan="clan";
		class Wounds
		{
		};
	};
	class rhs_msv_rifleman_patchless_alt: rhs_msv_emr_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_crew_patchless_co.paa"
		};
		selectionClan="clan";
		class Wounds
		{
		};
	};
	class rhs_msv_rifleman_m88_patchless: rhs_msv_emr_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_m88_co.paa"
		};
		selectionClan="clan";
		class Wounds
		{
		};
	};
	class rhs_msv_emr_arifleman: rhs_msv_arifleman
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		displayName="$STR_RHS_INF_ARIFLEMAN";
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_machinegunner: rhs_msv_machinegunner
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_machinegunner_assistant: rhs_msv_machinegunner_assistant
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_sidorMG";
	};
	class rhs_msv_emr_grenadier_rpg: rhs_msv_grenadier_rpg
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_strelok_rpg_assist: rhs_msv_strelok_rpg_assist
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_marksman: rhs_msv_marksman
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_fieldcap_helm_digi",
			50,
			"rhs_Booniehat_digi",
			10,
			"rhs_beanie",
			5,
			"rhs_beanie_green",
			5,
			"rhs_6b27m_digi",
			1,
			"rhs_6b27m_digi_ess",
			1,
			"rhs_6b27m_digi_bala",
			1,
			"rhs_6b27m_digi_ess_bala",
			1,
			"rhs_6b27m_green",
			1,
			"rhs_6b27m_green_ess",
			1,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_fieldcap_helm_digi",
			"rhs_6b23_digi_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap_helm_digi",
			"rhs_6b23_digi_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_efreitor: rhs_msv_emr_grenadier
	{
		displayName="$STR_RHS_INF_EFREITOR";
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		cost=350000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_gp25_1p63",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_gp25_1p63",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rdg2_white",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};
	class rhs_msv_emr_sergeant: rhs_msv_emr_grenadier
	{
		displayName="$STR_RHS_INF_SERGEANT";
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_digi_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_digi_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_gp25_dtk",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_gp25_dtk",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};
	class rhs_msv_emr_junior_sergeant: rhs_msv_emr_sergeant
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		displayName="$STR_RHS_INF_JUNIOR_SERGEANT";
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_6sh92_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_officer_armored: rhs_msv_officer_armored
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_fieldcap_digi",
			"rhs_6b23_digi_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap_digi",
			"rhs_6b23_digi_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_officer: rhs_msv_emr_officer_armored
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		displayName="$STR_RHS_INF_OFFICER";
		linkedItems[]=
		{
			"rhs_fieldcap_digi",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap_digi",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_at: rhs_msv_at
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_aa: rhs_msv_aa
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_digi_ess",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi_ess",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_engineer: rhs_msv_engineer
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_medic: rhs_msv_medic
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_digi",
			10,
			"rhs_6b27m_digi_ess",
			10,
			"rhs_6b27m_digi_bala",
			5,
			"rhs_6b27m_digi_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"rhs_6b23_digi_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_driver_armored: rhs_msv_driver_armored
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_fieldcap_digi",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap_digi",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_driver: rhs_msv_driver
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_fieldcap_digi",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap_digi",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_crew: rhs_msv_crew
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1,
			"rhs_tsh4_bala",
			1,
			"rhs_tsh4_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_6sh46",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_6sh46",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_armoredcrew: rhs_msv_armoredcrew
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1,
			"rhs_tsh4_bala",
			1,
			"rhs_tsh4_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_digi_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_digi_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_combatcrew: rhs_msv_combatcrew
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1,
			"rhs_tsh4_bala",
			1,
			"rhs_tsh4_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_msv_emr_crew_commander: rhs_msv_crew_commander
	{
		uniformClass="rhs_uniform_msv_emr";
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1,
			"rhs_tsh4_bala",
			1,
			"rhs_tsh4_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_infantry_vdv_base: rhs_infantry_msv_base
	{
		displayName="$STR_RHS_INF_RIFLEMAN";
		accuracy=2.3;
		sensitivity=3;
		threat[]={1,0.1,0.1};
		camouflage=1.2;
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		selectionClan="clan";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		uniformClass="rhs_uniform_vdv_emr";
		class Wounds
		{
		};
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_rifleman: rhs_infantry_vdv_base
	{
		displayName="$STR_RHS_INF_RIFLEMAN";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28",
			10,
			"rhs_6b28_ess",
			10,
			"rhs_6b28_bala",
			5,
			"rhs_6b28_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
	};
	class rhs_vdv_rifleman_alt: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_2";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_6b47",
			"rhs_6b23_6sh116",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b47",
			"rhs_6b23_6sh116",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_fieldcap_digi2"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_fieldcap_digi2"
		};
		weapons[]=
		{
			"rhs_weap_ak74mr_1p87",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74mr_1p87",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
	};
	class rhs_vdv_rifleman_lite: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_L";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_LAT: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_LAT";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=180000;
		threat[]={1,0.69999999,0.30000001};
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
		};
		secondaryAmmoCoef=0.5;
	};
	class rhs_vdv_RShG2: rhs_vdv_LAT
	{
		displayName="$STR_RHS_INF_RShG2";
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rshg2",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rshg2",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rshg2_mag"
		};
	};
	class rhs_vdv_grenadier: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_GRENADIER";
		cost=130000;
		threat[]={1,0.30000001,0.1};
		linkedItems[]=
		{
			"rhs_6b28_ess_bala",
			"rhs_6b23_digi_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_ess_bala",
			"rhs_6b23_digi_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_gp25_dtk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_gp25_dtk",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};
	class rhs_vdv_grenadier_alt: rhs_vdv_rifleman_alt
	{
		displayName="$STR_RHS_INF_GRENADIER_2";
		cost=130000;
		threat[]={1,0.30000001,0.1};
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_6b47_bala",
			"rhs_6b23_6sh116_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b47_bala",
			"rhs_6b23_6sh116_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_fieldcap_digi2"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_fieldcap_digi2"
		};
		weapons[]=
		{
			"rhs_weap_ak74mr_gp25_1p87",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74mr_gp25_1p87",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_GRD40_White"
		};
	};
	class rhs_vdv_rifleman_asval: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_ASVAL";
		weapons[]=
		{
			"rhs_weap_asval",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_asval",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
	};
	class rhs_vdv_arifleman: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_ARIFLEMAN";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_MG_s"
				};
				speechPlural[]=
				{
					"veh_infantry_MG_p"
				};
			};
		};
		nameSound="veh_infantry_MG_s";
		cost=125000;
		threat[]={1,0.1,0.30000001};
		icon="iconManMG";
		linkedItems[]=
		{
			"rhs_6b28_bala",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_bala",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pkp",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkp",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
		backpack="rhs_sidorMG";
		secondaryAmmoCoef=0.5;
	};
	class rhs_vdv_machinegunner: rhs_vdv_arifleman
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER";
		cost=125000;
		threat[]={1,0.1,0.30000001};
		icon="iconManMG";
		linkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
	};
	class rhs_vdv_machinegunner_assistant: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";
		cost=110000;
		camouflage=1.5;
		backpack="rhs_sidorMG";
	};
	class rhs_vdv_marksman: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_MARKSMAN";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_sniper_s"
				};
				speechPlural[]=
				{
					"veh_infantry_sniper_p"
				};
			};
		};
		nameSound="veh_infantry_sniper_s";
		cost=150000;
		sensitivity=3.3;
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_Booniehat_digi",
			50,
			"rhs_beanie",
			5,
			"rhs_beanie_green",
			5,
			"rhs_6b28",
			1,
			"rhs_6b28_ess",
			1,
			"rhs_6b28_bala",
			1,
			"rhs_6b28_ess_bala",
			1,
			"rhs_6b28_green",
			1,
			"rhs_6b28_green_ess",
			1,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_Booniehat_digi",
			"rhs_6b23_digi_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_Booniehat_digi",
			"rhs_6b23_digi_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_svds_pso1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_svds_pso1",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};
	};
	class rhs_vdv_marksman_asval: rhs_vdv_rifleman_asval
	{
		displayName="$STR_RHS_INF_MARKSMAN_ASVAL";
		weapons[]=
		{
			"rhs_asval_pso1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_asval_pso1",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_20rnd_9x39mm_SP5",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn"
		};
	};
	class rhs_vdv_efreitor: rhs_vdv_LAT
	{
		displayName="$STR_RHS_INF_EFREITOR";
		cost=350000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_6b28_green_ess_bala",
			"rhs_6b23_digi_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green_ess_bala",
			"rhs_6b23_digi_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_1p63",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_1p63",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
	};
	class rhs_vdv_sergeant: rhs_vdv_LAT
	{
		displayName="$STR_RHS_INF_SERGEANT";
		cost=500000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		linkedItems[]=
		{
			"rhs_6b28_ess",
			"rhs_6b23_digi_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_ess",
			"rhs_6b23_digi_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_pkas",
			"rhs_weap_rpg26",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_pkas",
			"rhs_weap_rpg26",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgn",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
		};
	};
	class rhs_vdv_junior_sergeant: rhs_vdv_sergeant
	{
		displayName="$STR_RHS_INF_JUNIOR_SERGEANT";
		cost=450000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_digi_6sh92_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_digi_6sh92_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_officer_armored: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_OFFICER_ARMORED";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
		nameSound="veh_infantry_officer_s";
		cost=600000;
		camouflage=1.6;
		sensitivity=3;
		icon="iconManOfficer";
		headgearList[]={};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_digi_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_digi_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_vdv_officer: rhs_vdv_officer_armored
	{
		displayName="$STR_RHS_INF_OFFICER";
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_grenadier_rpg: rhs_vdv_grenadier
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=160000;
		threat[]={1,0.5,0.2};
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put",
			"rhs_weap_rpg7_pgo"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put",
			"rhs_weap_rpg7_pgo"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_rpg7_PG7VL_mag"
		};
		backpack="rhs_rpg";
		secondaryAmmoCoef=0.5;
	};
	class rhs_vdv_at: rhs_vdv_grenadier_rpg
	{
		displayName="AT Specialist";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=180000;
		threat[]={1,0.69999999,0.30000001};
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rpg7_pgo",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_rpg7_pgo",
			"Throw",
			"Put"
		};
		backpack="rhs_rpg_at";
		secondaryAmmoCoef=0.5;
	};
	class rhs_vdv_aa: rhs_vdv_at
	{
		displayName="$STR_RHS_INF_AA";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=200000;
		threat[]={1,1,0.80000001};
		camouflage=1.5;
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b28_ess",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_ess",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_igla",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"rhs_weap_igla",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_9k38_rocket"
		};
		backpack="";
	};
	class rhs_vdv_strelok_rpg_assist: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG_ASSISTANT";
		linkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_nspn_red"
		};
		backpack="rhs_rpg";
		secondaryAmmoCoef=0.5;
	};
	class rhs_vdv_medic: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_MEDIC";
		attendant=1;
		icon="iconManMedic";
		backpack="rhs_assault_umbts_medic";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_medic_s"
				};
				speechPlural[]=
				{
					"veh_infantry_medic_p"
				};
			};
		};
		nameSound="veh_infantry_medic_s";
		linkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_engineer: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_ENGINEER";
		cost=220000;
		camouflage=1.6;
		sensitivity=2.5;
		canDeactivateMines=1;
		engineer=1;
		detectSkill=60;
		threat[]={1,0.5,0.1};
		icon="iconManEngineer";
		linkedItems[]=
		{
			"rhs_6b28_green_ess_bala",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green_ess_bala",
			"rhs_6b23_digi_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_assault_umbts_engineer";
	};
	class rhs_vdv_driver_armored: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_DRIVER_ARMORED";
		engineer=1;
		icon="iconManEngineer";
		headgearList[]={};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_driver: rhs_vdv_driver_armored
	{
		displayName="$STR_RHS_INF_DRIVER";
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_crew: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_CREW";
		cost=90000;
		camouflage=1.6;
		sensitivity=2.5;
		engineer=1;
		icon="iconManEngineer";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1,
			"rhs_tsh4_bala",
			1,
			"rhs_tsh4_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		fsmDanger="rhsafrf\addons\rhs_c_troops\scripts\dangerCrew.fsm";
	};
	class rhs_vdv_armoredcrew: rhs_vdv_crew
	{
		displayName="$STR_RHS_INF_CREW_ARMORED";
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_digi_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_digi_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_combatcrew: rhs_vdv_crew
	{
		displayName="$STR_RHS_INF_CREW_COMBAT";
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_crew_commander: rhs_vdv_crew
	{
		displayName="$STR_RHS_INF_CREW_COMMANDER";
		cost=450000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_infantry_vdv_des_base: rhs_infantry_vdv_base
	{
		displayName="$STR_RHS_INF_RIFLEMAN";
		accuracy=2.3;
		sensitivity=3;
		threat[]={1,0.1,0.1};
		camouflage=1.2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\emr_desert_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		class Wounds
		{
		};
		uniformClass="rhs_uniform_vdv_emr_des";
		linkedItems[]=
		{
			"rhs_6b27m_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_des_rifleman: rhs_infantry_vdv_des_base
	{
		displayName="$STR_RHS_INF_RIFLEMAN";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28",
			10,
			"rhs_6b28_ess",
			10,
			"rhs_6b28_bala",
			5,
			"rhs_6b28_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_dtk",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_rgn",
			"rhs_mag_rgn"
		};
	};
	class rhs_vdv_des_rifleman_lite: rhs_vdv_des_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_L";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_emr_des_rifleman_patchless: rhs_vdv_des_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\emr_desert_co.paa",
			"",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		selectionClan="clan";
	};
	class rhs_vdv_des_LAT: rhs_vdv_LAT
	{
		displayName="$STR_RHS_INF_LAT";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_RShG2: rhs_vdv_RShG2
	{
		displayName="$STR_RHS_INF_RShG2";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_grenadier: rhs_vdv_grenadier
	{
		displayName="$STR_RHS_INF_GRENADIER";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_rifleman_asval: rhs_vdv_rifleman_asval
	{
		displayName="$STR_RHS_INF_RIFLEMAN_ASVAL";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_arifleman: rhs_vdv_arifleman
	{
		displayName="$STR_RHS_INF_ARIFLEMAN";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_machinegunner: rhs_vdv_machinegunner
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_machinegunner_assistant: rhs_vdv_machinegunner_assistant
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_marksman: rhs_vdv_marksman
	{
		displayName="$STR_RHS_INF_MARKSMAN";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_marksman_asval: rhs_vdv_marksman_asval
	{
		displayName="$STR_RHS_INF_MARKSMAN_ASVAL";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_efreitor: rhs_vdv_efreitor
	{
		displayName="$STR_RHS_INF_EFREITOR";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_sergeant: rhs_vdv_sergeant
	{
		displayName="$STR_RHS_INF_SERGEANT";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_junior_sergeant: rhs_vdv_junior_sergeant
	{
		displayName="$STR_RHS_INF_JUNIOR_SERGEANT";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_officer_armored: rhs_vdv_officer_armored
	{
		displayName="$STR_RHS_INF_OFFICER_ARMORED";
		uniformClass="rhs_uniform_vdv_emr_des";
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_digi_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_digi_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_des_officer: rhs_vdv_officer
	{
		displayName="$STR_RHS_INF_OFFICER";
		uniformClass="rhs_uniform_vdv_emr_des";
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_des_grenadier_rpg: rhs_vdv_grenadier_rpg
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_at: rhs_vdv_at
	{
		displayName="AT Specialist";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_aa: rhs_vdv_aa
	{
		displayName="$STR_RHS_INF_AA";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG_ASSISTANT";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_medic: rhs_vdv_medic
	{
		displayName="$STR_RHS_INF_MEDIC";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_engineer: rhs_vdv_engineer
	{
		displayName="$STR_RHS_INF_ENGINEER";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_driver_armored: rhs_vdv_driver_armored
	{
		displayName="$STR_RHS_INF_DRIVER_ARMORED";
		uniformClass="rhs_uniform_vdv_emr_des";
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_des_driver: rhs_vdv_driver
	{
		displayName="$STR_RHS_INF_DRIVER";
		uniformClass="rhs_uniform_vdv_emr_des";
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_des_crew: rhs_vdv_crew
	{
		displayName="$STR_RHS_INF_CREW";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_armoredcrew: rhs_vdv_armoredcrew
	{
		displayName="$STR_RHS_INF_CREW_ARMORED";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_combatcrew: rhs_vdv_combatcrew
	{
		displayName="$STR_RHS_INF_CREW_COMBAT";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_des_crew_commander: rhs_vdv_crew_commander
	{
		displayName="$STR_RHS_INF_CREW_COMMANDER";
		uniformClass="rhs_uniform_vdv_emr_des";
	};
	class rhs_vdv_gorka_r_y_rifleman: rhs_vdv_rifleman
	{
		uniformClass="rhs_uniform_gorka_r_y";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian",
			"rhs_scarf"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\gorkaR_y_co.paa"
		};
		class Wounds
		{
		};
		linkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_gorka_r_g_rifleman: rhs_vdv_gorka_r_y_rifleman
	{
		uniformClass="rhs_uniform_gorka_r_g";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian",
			"rhs_scarf"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\gorkaR_g_co.paa"
		};
	};
	class rhs_vdv_gorka_1_a_rifleman: rhs_vdv_gorka_r_y_rifleman
	{
		uniformClass="rhs_uniform_gorka_1_a";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\gorka_1_co.paa"
		};
		class Wounds
		{
		};
	};
	class rhs_vdv_gorka_1_b_rifleman: rhs_vdv_gorka_1_a_rifleman
	{
		uniformClass="rhs_uniform_gorka_1_b";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\gorka_1_berezka_co.paa"
		};
	};
	class rhs_vdv_flora_rifleman: rhs_vdv_rifleman
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa"
		};
		class Wounds
		{
		};
		linkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_rifleman_lite: rhs_vdv_flora_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_L";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_efreitor: rhs_vdv_efreitor
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_grenadier: rhs_vdv_grenadier
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_grenadier_rpg: rhs_vdv_grenadier_rpg
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_machinegunner: rhs_vdv_machinegunner
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_machinegunner_assistant: rhs_vdv_machinegunner_assistant
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_at: rhs_vdv_at
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_aa: rhs_vdv_aa
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_flora_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_flora_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_marksman: rhs_vdv_marksman
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_Booniehat_flora",
			50,
			"rhs_beret_vdv1",
			10,
			"rhs_beanie",
			5,
			"rhs_beanie_green",
			5,
			"rhs_6b28_flora",
			1,
			"rhs_6b28_flora_ess",
			1,
			"rhs_6b28_flora_bala",
			1,
			"rhs_6b28_flora_ess_bala",
			1,
			"rhs_6b28_green",
			1,
			"rhs_6b28_green_ess",
			1,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_officer_armored: rhs_vdv_officer_armored
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_officer: rhs_vdv_officer
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_sergeant: rhs_vdv_sergeant
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_junior_sergeant: rhs_vdv_junior_sergeant
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_6sh92_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_6sh92_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_engineer: rhs_vdv_engineer
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_driver_armored: rhs_vdv_driver_armored
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_driver: rhs_vdv_driver
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_medic: rhs_vdv_medic
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_flora",
			"rhs_6b23_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_LAT: rhs_vdv_LAT
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_RShG2: rhs_vdv_RShG2
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b28_flora",
			10,
			"rhs_6b28_flora_ess",
			10,
			"rhs_6b28_flora_bala",
			5,
			"rhs_6b28_flora_ess_bala",
			5,
			"rhs_6b28_green",
			2,
			"rhs_6b28_green_ess",
			2,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28_green",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_crew: rhs_vdv_crew
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_6sh46",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_6sh46",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_crew_commander: rhs_vdv_crew_commander
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_armoredcrew: rhs_vdv_armoredcrew
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_flora_combatcrew: rhs_vdv_combatcrew
	{
		uniformClass="rhs_uniform_vdv_flora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		Items[]=
		{
			"'FirstAidKit'"
		};
		RespawnItems[]=
		{
			"'FirstAidKit'"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_tsh4",
			1,
			"rhs_tsh4_ess",
			1
		};
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_rifleman: rhs_vdv_rifleman
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\mf_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		class Wounds
		{
		};
	};
	class rhs_vdv_mflora_rifleman_lite: rhs_vdv_mflora_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_L";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_efreitor: rhs_vdv_efreitor
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6sh92_digi_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6sh92_digi_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_grenadier: rhs_vdv_grenadier
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_digi_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_digi_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_grenadier_rpg: rhs_vdv_grenadier_rpg
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_machinegunner: rhs_vdv_machinegunner
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_digi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_machinegunner_assistant: rhs_vdv_machinegunner_assistant
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_ML",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_ML",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_at: rhs_vdv_at
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_aa: rhs_vdv_aa
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_ML",
			"rhs_6b23_ML_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_ML",
			"rhs_6b23_ML_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_marksman: rhs_vdv_marksman
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_beret_vdv1",
			20,
			"rhs_beanie",
			10,
			"rhs_beanie_green",
			10,
			"rhs_6b27m_ml",
			1,
			"rhs_6b27m_ml_ess",
			1,
			"rhs_6b27m_ml_bala",
			1,
			"rhs_6b27m_ML_ess_bala",
			1,
			"rhs_6b28_green",
			1,
			"rhs_6b28_green_ess",
			1,
			"rhs_6b28_green_bala",
			1,
			"rhs_6b28_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_ML_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_ML_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_officer_armored: rhs_vdv_officer_armored
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_ML_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6b23_ML_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_officer: rhs_vdv_officer
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_sergeant: rhs_vdv_sergeant
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_ML_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_ML_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_junior_sergeant: rhs_vdv_junior_sergeant
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6sh92_digi_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6sh92_digi_vog_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_engineer: rhs_vdv_engineer
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_ML_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_ML_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_driver_armored: rhs_vdv_driver_armored
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_driver: rhs_vdv_driver
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		linkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_vdv1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_medic: rhs_vdv_medic
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_ML_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_ML_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_LAT: rhs_vdv_LAT
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_digi_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_digi_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_RShG2: rhs_vdv_RShG2
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b27m_ml",
			10,
			"rhs_6b27m_ml_ess",
			10,
			"rhs_6b27m_ml_bala",
			5,
			"rhs_6b27m_ML_ess_bala",
			5,
			"rhs_6b27m_green",
			2,
			"rhs_6b27m_green_ess",
			2,
			"rhs_6b27m_green_bala",
			1,
			"rhs_6b27m_green_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_crew: rhs_vdv_crew
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_6sh46",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_6sh46",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_crew_commander: rhs_vdv_crew_commander
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_armoredcrew: rhs_vdv_armoredcrew
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_ML_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b23_ML_crew",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_mflora_combatcrew: rhs_vdv_combatcrew
	{
		uniformClass="rhs_uniform_vdv_mflora";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_recon_rifleman: rhs_vdv_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN";
		headgearList[]={};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_SF_s"
				};
				speechPlural[]=
				{
					"veh_infantry_SF_p"
				};
			};
		};
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid",
			"rhs_scarf"
		};
		nameSound="veh_infantry_SF_s";
		uniformClass="rhs_uniform_gorka_r_y";
		camouflage=0.60000002;
		sensitivity=3.5;
		detectSkill=30;
		class Wounds
		{
		};
		weapons[]=
		{
			"rhs_weap_45th_ak74m",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_ak74m",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b28",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b28",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_rifleman_l: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_L";
		uniformClass="rhs_uniform_gorka_r_g";
		weapons[]=
		{
			"rhs_weap_45th_ak74m_camo",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_ak74m_camo",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"rhs_6sh92_digi",
			"rhs_beanie_green",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi",
			"rhs_beanie_green",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_recon_rifleman_akms: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_AKMS";
		uniformClass="rhs_uniform_gorka_r_g";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_headset_spetsnaz",
			"rhs_6b28_green_bala",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_headset_spetsnaz",
			"rhs_6b28_green_bala",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_45th_akms",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_akms",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_rifleman_ak103: rhs_vdv_recon_rifleman_akms
	{
		displayName="$STR_RHS_INF_RIFLEMAN_AK103";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_headset_spetsnaz",
			"rhs_6b28",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_headset_spetsnaz",
			"rhs_6b28",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_45th_ak103",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_ak103",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_89",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_rifleman_lat: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_LAT";
		weapons[]=
		{
			"rhs_weap_45th_ak74m",
			"rhs_weap_rpg26",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_ak74m",
			"rhs_weap_rpg26",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_rpg26_mag",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_grenadier: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_GRENADIER";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
			"rhs_6b28_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
			"rhs_6b28_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_45th_ak74m_gp25",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_ak74m_gp25",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VG40TB",
			"rhs_VG40TB",
			"rhs_VG40SZ",
			"rhs_VG40OP_red",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_rifleman_asval: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_ASVAL";
		weapons[]=
		{
			"rhs_weap_45th_asval",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_asval",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_arifleman: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_ARIFLEMAN";
		uniformClass="rhs_uniform_gorka_r_g";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b28_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b28_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pkp",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkp",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		backpack="rhs_sidorMG";
	};
	class rhs_vdv_recon_machinegunner_assistant: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER_ASSISTANT";
		cost=110000;
		camouflage=1.5;
		backpack="rhs_sidorMG";
	};
	class rhs_vdv_recon_efreitor: rhs_vdv_recon_rifleman_lat
	{
		displayName="$STR_RHS_INF_EFREITOR";
		cost=350000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_radio",
			"rhs_6b28",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_radio",
			"rhs_6b28",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_45th_akms",
			"rhs_weap_rpg26",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_akms",
			"rhs_weap_rpg26",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_rpg26_mag",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_fakel",
			"rhs_mag_fakel",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_sergeant: rhs_vdv_recon_rifleman_lat
	{
		displayName="$STR_RHS_INF_SERGEANT";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_headset_mapcase",
			"rhs_6b28_ess",
			"rhs_tr8_periscope_pip",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_headset_mapcase",
			"rhs_6b28_ess",
			"rhs_tr8_periscope_pip",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_45th_ak74m_pkas",
			"rhs_weap_rpg26",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_ak74m_pkas",
			"rhs_weap_rpg26",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_rpg26_mag",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_fakel",
			"rhs_mag_fakel",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_officer_armored: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_OFFICER_ARMORED";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
		nameSound="veh_infantry_officer_s";
		cost=600000;
		camouflage=1.6;
		sensitivity=3;
		icon="iconManOfficer";
		linkedItems[]=
		{
			"rhs_Booniehat_digi",
			"rhs_6b23_digi_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_Booniehat_digi",
			"rhs_6b23_digi_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_vdv_recon_officer: rhs_vdv_recon_officer_armored
	{
		displayName="$STR_RHS_INF_OFFICER";
		linkedItems[]=
		{
			"rhs_Booniehat_digi",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_Booniehat_digi",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vdv_recon_marksman: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_MARKSMAN";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_sniper_s"
				};
				speechPlural[]=
				{
					"veh_infantry_sniper_p"
				};
			};
		};
		nameSound="veh_infantry_sniper_s";
		cost=150000;
		sensitivity=3.3;
		weapons[]=
		{
			"rhs_weap_svds_pso1",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_svds_pso1",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"rhs_6b23_digi_sniper",
			"rhs_balaclava",
			"rhs_pdu4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_sniper",
			"rhs_balaclava",
			"rhs_pdu4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnMagazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_marksman_asval: rhs_vdv_recon_marksman
	{
		displayName="$STR_RHS_INF_MARKSMAN_ASVAL";
		weapons[]=
		{
			"rhs_asval_pso1",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_asval_pso1",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vdv_recon_marksman_vss: rhs_vdv_recon_marksman_asval
	{
		displayName="$STR_RHS_INF_MARKSMAN_VSS";
		weapons[]=
		{
			"rhs_weap_45th_vss",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_vss",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
	};
	class rhs_vdv_recon_medic: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHS_INF_MEDIC";
		attendant=1;
		icon="iconManMedic";
		nameSound="veh_infantry_medic_s";
		weapons[]=
		{
			"rhs_weap_45th_ak74_ekp1",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_ak74_ekp1",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b28",
			"rhs_6b23_digi_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_assault_umbts_medic";
	};
	class rhs_vdv_recon_rifleman_scout: rhs_vdv_recon_rifleman
	{
		displayName="$STR_RHSUSF_INF_SCOUT_AK74";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid",
			"rhs_scarf"
		};
		uniformClass="rhs_uniform_gorka_r_g";
		linkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_Booniehat_digi",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_Booniehat_digi",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_45th_ak74m_sup",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_ak74m_sup",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		backpack="rhs_assault_umbts_ammo";
	};
	class rhs_vdv_recon_rifleman_scout_akm: rhs_vdv_recon_rifleman_akms
	{
		displayName="$STR_RHSUSF_INF_SCOUT";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid",
			"rhs_scarf"
		};
		uniformClass="rhs_uniform_gorka_r_g";
		weapons[]=
		{
			"rhs_weap_45th_akm",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_akm",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_Booniehat_digi",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_Booniehat_digi",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		backpack="rhs_assault_umbts_ammo_recon";
	};
	class rhs_vdv_recon_grenadier_scout: rhs_vdv_recon_rifleman_scout_akm
	{
		displayName="$STR_RHSUSF_INF_SCOUT_GR";
		uniformClass="rhs_uniform_gorka_r_g";
		linkedItems[]=
		{
			"rhs_6sh92_digi_vog_headset",
			"rhs_Booniehat_digi",
			"G_Bandanna_khk",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi_vog_headset",
			"rhs_Booniehat_digi",
			"G_Bandanna_khk",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_45th_akm_gp25",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_akm_gp25",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm_U",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VG40TB",
			"rhs_VG40TB",
			"rhs_VG40SZ",
			"rhs_VG40OP_red",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		backpack="rhs_assault_umbts_ammo_recon";
	};
	class rhs_vdv_recon_arifleman_scout: rhs_vdv_recon_rifleman_scout
	{
		displayName="$STR_RHSUSF_INF_SCOUT_PKP";
		uniformClass="rhs_uniform_gorka_r_g";
		linkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_Booniehat_digi",
			"G_Bandanna_tan",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_Booniehat_digi",
			"G_Bandanna_tan",
			"Binocular",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pkp",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkp",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		backpack="rhs_sidorMG";
	};
	class rhs_mvd_izlom_rifleman: rhs_infantry_vdv_base
	{
		uniformClass="rhs_uniform_mvd_izlom";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Russian",
			"Head_Asian"
		};
		displayName="$STR_RHS_INF_RIFLEMAN_AK103";
		headgearList[]={};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\T_izlom_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		linkedItems[]=
		{
			"rhs_6b23_6sh92",
			"rhs_6b27m_green_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_6sh92",
			"rhs_6b27m_green_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak103_dtk",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak103_dtk",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_mvd_izlom_rifleman_asval: rhs_mvd_izlom_rifleman
	{
		displayName="$STR_RHS_INF_RIFLEMAN_ASVAL";
		weapons[]=
		{
			"rhs_weap_45th_asval",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_asval",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_20rnd_9x39mm_SP6",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_mvd_izlom_rifleman_LAT: rhs_mvd_izlom_rifleman
	{
		displayName="$STR_RHS_INF_LAT";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=180000;
		threat[]={1,0.69999999,0.30000001};
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak103_dtk",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak103_dtk",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_rpg26_mag"
		};
		secondaryAmmoCoef=0.5;
	};
	class rhs_mvd_izlom_grenadier_rpg: rhs_mvd_izlom_rifleman
	{
		displayName="$STR_RHS_INF_GRENADIER_RPG";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_AT_s"
				};
				speechPlural[]=
				{
					"veh_infantry_AT_p"
				};
			};
		};
		nameSound="veh_infantry_AT_s";
		cost=160000;
		threat[]={1,0.5,0.2};
		icon="iconManAT";
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_rifleman",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak103_dtk",
			"rhs_weap_pya",
			"Throw",
			"Put",
			"rhs_weap_rpg7_pgo"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak103_dtk",
			"rhs_weap_pya",
			"Throw",
			"Put",
			"rhs_weap_rpg7_pgo"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_rpg7_PG7VL_mag"
		};
		backpack="rhs_rpg";
		secondaryAmmoCoef=0.5;
	};
	class rhs_mvd_izlom_arifleman: rhs_mvd_izlom_rifleman
	{
		displayName="$STR_RHS_INF_ARIFLEMAN";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_MG_s"
				};
				speechPlural[]=
				{
					"veh_infantry_MG_p"
				};
			};
		};
		nameSound="veh_infantry_MG_s";
		cost=125000;
		threat[]={1,0.1,0.30000001};
		icon="iconManMG";
		weapons[]=
		{
			"rhs_weap_pkp",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkp",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn"
		};
		backpack="rhs_sidorMG";
		secondaryAmmoCoef=0.5;
	};
	class rhs_mvd_izlom_machinegunner: rhs_mvd_izlom_arifleman
	{
		displayName="$STR_RHS_INF_MACHINEGUNNER";
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pkm",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkm",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
	};
	class rhs_mvd_izlom_marksman: rhs_mvd_izlom_rifleman
	{
		displayName="$STR_RHS_INF_MARKSMAN";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_sniper_s"
				};
				speechPlural[]=
				{
					"veh_infantry_sniper_p"
				};
			};
		};
		nameSound="veh_infantry_sniper_s";
		cost=150000;
		sensitivity=3.3;
		linkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green",
			"rhs_6b23_sniper",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_svdp_pso1",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_svdp_pso1",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_mvd_izlom_marksman_vss: rhs_mvd_izlom_rifleman_asval
	{
		displayName="$STR_RHS_INF_MARKSMAN_VSS";
		weapons[]=
		{
			"rhs_weap_45th_vss",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_45th_vss",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
	};
	class rhs_mvd_izlom_efreitor: rhs_mvd_izlom_rifleman_LAT
	{
		displayName="$STR_RHS_INF_EFREITOR";
		cost=350000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m",
			"rhs_6b23_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_mvd_izlom_sergeant: rhs_mvd_izlom_rifleman
	{
		displayName="$STR_RHS_INF_SERGEANT";
		cost=500000;
		camouflage=1.4;
		sensitivity=3.3;
		icon="iconManLeader";
		linkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b27m_green_ess",
			"rhs_6b23_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_ak103_dtk",
			"rhs_weap_pya",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak103_dtk",
			"rhs_weap_pya",
			"Binocular",
			"Throw",
			"Put"
		};
	};
	class rhs_vmf_flora_rifleman: rhs_vdv_rifleman
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_vmf_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vmf_co.paa"
		};
		class Wounds
		{
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_bala1_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_bala1_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_rifleman_subdued: rhs_vmf_flora_rifleman
	{
		uniformClass="rhs_uniform_vmf_flora_subdued";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_vmf_co.paa",
			"rhsafrf\addons\rhs_infantry\data\Shevrons_vmf_subdued_co.paa"
		};
	};
	class rhs_vmf_flora_rifleman_lite: rhs_vmf_flora_rifleman
	{
		uniformClass="rhs_uniform_vmf_flora";
		displayName="$STR_RHS_INF_RIFLEMAN_L";
		linkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_efreitor: rhs_vdv_efreitor
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_Flora_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_Flora_6sh92_radio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_grenadier: rhs_vdv_grenadier
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_bala2_flora",
			"rhs_6b13_Flora_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_bala2_flora",
			"rhs_6b13_Flora_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_grenadier_rpg: rhs_vdv_grenadier_rpg
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_machinegunner: rhs_vdv_machinegunner
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_bala1_flora",
			"rhs_6b13_flora",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_bala1_flora",
			"rhs_6b13_flora",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_machinegunner_assistant: rhs_vdv_machinegunner_assistant
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_bala2_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_bala2_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_at: rhs_vdv_at
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_bala1_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_bala1_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_aa: rhs_vdv_aa
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_marksman: rhs_vdv_marksman
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_Booniehat_flora",
			50,
			"rhs_beret_mp1",
			10,
			"rhs_beanie",
			10,
			"rhs_beanie_green",
			10,
			"rhs_6b7_1m_flora",
			1,
			"rhs_6b7_1m_flora_ns3",
			1,
			"rhs_6b7_1m_bala1_flora",
			1,
			"rhs_6b7_1m_bala2_flora",
			1,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		weapons[]=
		{
			"rhs_weap_svdp_pso1",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_svdp_pso1",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_officer_armored: rhs_vdv_officer_armored
	{
		uniformClass="rhs_uniform_vmf_flora";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_6b13_Flora_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_6b13_Flora_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_officer: rhs_vdv_officer
	{
		uniformClass="rhs_uniform_vmf_flora";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_sergeant: rhs_vdv_sergeant
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_Flora_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_Flora_6sh92_headset_mapcase",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_junior_sergeant: rhs_vdv_junior_sergeant
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_Flora_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_Flora_6sh92_vog",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_engineer: rhs_vdv_engineer
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_driver_armored: rhs_vdv_driver_armored
	{
		uniformClass="rhs_uniform_vmf_flora";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_driver: rhs_vdv_driver
	{
		uniformClass="rhs_uniform_vmf_flora";
		headgearList[]={};
		linkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_beret_mp1",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_medic: rhs_vdv_medic
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_LAT: rhs_vdv_LAT
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_RShG2: rhs_vdv_RShG2
	{
		uniformClass="rhs_uniform_vmf_flora";
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";
		};
		headgearList[]=
		{
			"rhs_6b7_1m_flora",
			15,
			"rhs_6b7_1m_flora_ns3",
			5,
			"rhs_6b7_1m_bala1_flora",
			5,
			"rhs_6b7_1m_bala2_flora",
			5,
			"rhs_6b7_1m",
			1,
			"rhs_6b7_1m_ess",
			1,
			"rhs_6b7_1m_bala1",
			1,
			"rhs_6b7_1m_bala2",
			1,
			"rhs_6b7_1m_ess_bala",
			1
		};
		linkedItems[]=
		{
			"rhs_6b7_1m_bala2_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b7_1m_bala2_flora",
			"rhs_6b13_6sh92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_crew: rhs_vdv_crew
	{
		uniformClass="rhs_uniform_vmf_flora";
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_6sh46",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_6sh46",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_crew_commander: rhs_vdv_crew_commander
	{
		uniformClass="rhs_uniform_vmf_flora";
		linkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_armoredcrew: rhs_vdv_armoredcrew
	{
		uniformClass="rhs_uniform_vmf_flora";
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b13_flora",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_6b13_flora",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_flora_combatcrew: rhs_vdv_combatcrew
	{
		uniformClass="rhs_uniform_vmf_flora";
		linkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4_ess",
			"rhs_vydra_3m",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_rifleman: rhs_vdv_recon_rifleman
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala1_emr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala1_emr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_rifleman_l: rhs_vdv_recon_rifleman_asval
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6sh92_digi",
			"rhs_beret_mp1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi",
			"rhs_beret_mp1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_asval_grip",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_asval_grip",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
	};
	class rhs_vmf_recon_rifleman_akms: rhs_vdv_recon_rifleman_akms
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala2_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala2_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_akms",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rgn",
			"rhs_mag_fakel",
			"rhs_mag_fakel",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
	};
	class rhs_vmf_recon_rifleman_lat: rhs_vdv_recon_rifleman_lat
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_grenadier: rhs_vdv_recon_grenadier
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
			"rhs_6b7_1m_bala2_emr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
			"rhs_6b7_1m_bala2_emr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_rifleman_asval: rhs_vdv_recon_rifleman_asval
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala1_emr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala1_emr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_vmf_asval",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_vmf_asval",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
	};
	class rhs_vmf_recon_arifleman: rhs_vdv_recon_arifleman
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_emr_ess_bala",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_emr_ess_bala",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_pkp",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkp",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
	};
	class rhs_vmf_recon_machinegunner_assistant: rhs_vdv_recon_machinegunner_assistant
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala2_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b7_1m_bala2_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_efreitor: rhs_vdv_recon_efreitor
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b47_bala",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b47_bala",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_beret_mp1"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_beret_mp1"
		};
	};
	class rhs_vmf_recon_sergeant: rhs_vdv_recon_sergeant
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b47_ess_bala",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b47_ess_bala",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_beret_mp1"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_beret_mp1"
		};
	};
	class rhs_vmf_recon_officer_armored: rhs_vdv_recon_officer_armored
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b47",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_6b47",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_beret_mp1"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_beret_mp1"
		};
	};
	class rhs_vmf_recon_officer: rhs_vdv_recon_officer
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_beret_mp1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_6sh92_Spetsnaz",
			"rhs_beret_mp1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_marksman: rhs_vdv_recon_marksman
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_sniper",
			"rhs_6b7_1m_bala1_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_sniper",
			"rhs_6b7_1m_bala1_olive",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_marksman_vss: rhs_vdv_recon_marksman_vss
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_sniper",
			"rhs_beanie_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_sniper",
			"rhs_beanie_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_vmf_vss",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_vmf_vss",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_beret_mp1"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138",
			"rhs_beret_mp1"
		};
	};
	class rhs_vmf_recon_medic: rhs_vdv_recon_medic
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6b23_digi_medic",
			"rhs_6b7_1m_bala2_emr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_digi_medic",
			"rhs_6b7_1m_bala2_emr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_rifleman_scout: rhs_vdv_recon_rifleman_scout
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_beanie_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_beanie_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_rifleman_scout_akm: rhs_vdv_recon_rifleman_scout_akm
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_beanie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_beanie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_grenadier_scout: rhs_vdv_recon_grenadier_scout
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		weapons[]=
		{
			"rhs_weap_akms_gp25",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms_gp25",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"rhs_6sh92_digi_vog_headset",
			"rhs_beanie_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi_vog_headset",
			"rhs_beanie_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_vmf_recon_arifleman_scout: rhs_vdv_recon_arifleman_scout
	{
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Asian",
			"Head_Russian",
			"Head_Russian_camo_arid",
			"Head_Russian_camo_lush",
			"Head_Russian_camo_semiarid"
		};
		uniformClass="rhs_uniform_gorka_r_y";
		linkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_beanie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi_radio",
			"rhs_beanie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_rva_crew: rhs_infantry_msv_base
	{
		displayName="$STR_RHS_INF_DRIVER";
		uniformClass="rhs_uniform_rva_flora";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_pilot_s"
				};
				speechPlural[]=
				{
					"veh_infantry_pilot_p"
				};
			};
		};
		engineer=1;
		icon="iconManEngineer";
		identityTypes[]=
		{
			"LanguageRUS_F",
			"Head_Euro",
			"Head_Asian"
		};
		Items[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"rhs_1PN138"
		};
		linkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_vest_pistol_holster",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_pya",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_17",
			"rhs_mag_rdg2_white",
			"rhs_mag_nspd"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camob"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_rva_co.paa"
		};
	};
	class rhs_rva_crew_armored: rhs_rva_crew
	{
		displayName="$STR_RHS_INF_DRIVER_ARMORED";
		linkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_6b23",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_rva_crew_officer: rhs_rva_crew
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
		nameSound="veh_infantry_officer_s";
		cost=600000;
		camouflage=1.6;
		sensitivity=3;
		icon="iconManOfficer";
		displayName="$STR_RHS_INF_OFFICER";
		linkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_aks74u",
			"rhs_weap_makarov_pm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class rhs_rva_crew_officer_armored: rhs_rva_crew_officer
	{
		displayName="$STR_RHS_INF_OFFICER_ARMORED";
		linkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_6b23_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"rhs_fieldcap",
			"rhs_6b23_crewofficer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class rhs_invisible_man: rhs_infantry_msv_base
	{
		displayName="invisibru";
		uniformClass="rhs_uniform_invisible";
	};
};
class UniformItem;
class CfgGlasses
{
	class G_Balaclava_blk;
	class None
	{
		identityTypes[]+=
		{
			"rhs_scarf",
			130
		};
	};
	class rhs_scarf: G_Balaclava_blk
	{
		displayname="$STR_RHS_SCARF_NAME";
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"rhs_scarf",
			30
		};
	};
	class rhs_balaclava: G_Balaclava_blk
	{
		displayname="$STR_RHS_BALACLAVA_NAME";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
	};
	class rhs_balaclava1_olive: G_Balaclava_blk
	{
		displayname="$STR_RHS_BALACLAVA1OLIVE_NAME";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class rhs_uniform_flora: Uniform_Base
	{
		displayName="$STR_RHS_FLORAMSV_NAME";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="rhs_msv_rifleman";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_df15: rhs_uniform_flora
	{
		displayName="$STR_RHS_DF152_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_pilot_base";
		};
	};
	class rhs_uniform_df15_tan: rhs_uniform_df15
	{
		displayName="$STR_RHS_DF152_TAN_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_pilot_tan_base";
		};
	};
	class rhs_uniform_msv_emr: rhs_uniform_flora
	{
		displayName="$STR_RHS_EMRSUMMERMSV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_msv_emr_rifleman";
		};
	};
	class rhs_uniform_mvd_izlom: rhs_uniform_flora
	{
		displayName="$STR_RHS_IZLOM_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_mvd_izlom_rifleman";
		};
	};
	class rhs_uniform_vdv_emr: rhs_uniform_flora
	{
		displayName="$STR_RHS_EMRSUMMERVDV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vdv_rifleman";
		};
	};
	class rhs_uniform_vdv_emr_des: rhs_uniform_flora
	{
		displayName="$STR_RHS_EMRDESERTVDV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vdv_des_rifleman";
		};
	};
	class rhs_uniform_vdv_flora: rhs_uniform_flora
	{
		displayName="$STR_RHS_FLORAVDV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vdv_flora_rifleman";
		};
	};
	class rhs_uniform_vmf_flora: rhs_uniform_flora
	{
		displayName="$STR_RHS_FLORAVMF_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vmf_flora_rifleman";
		};
	};
	class rhs_uniform_vmf_flora_subdued: rhs_uniform_vmf_flora
	{
		displayName="$STR_RHS_FLORAVMF_SUBDUED_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vmf_flora_rifleman_subdued";
		};
	};
	class rhs_uniform_rva_flora: rhs_uniform_flora
	{
		displayName="$STR_RHS_FLORARVA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_rva_crew";
		};
	};
	class rhs_uniform_vdv_mflora: rhs_uniform_flora
	{
		displayName="$STR_RHS_MOUNTAINFLORAVDV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vdv_mflora_rifleman";
		};
	};
	class rhs_uniform_mflora_patchless: rhs_uniform_flora
	{
		displayName="$STR_RHS_MOUNTAINFLORA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_msv_mflora_rifleman_patchless";
		};
	};
	class rhs_uniform_emr_des_patchless: rhs_uniform_flora
	{
		displayName="$STR_RHS_EMRDESERT_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_emr_des_rifleman_patchless";
		};
	};
	class rhs_uniform_flora_patchless: rhs_uniform_flora
	{
		displayName="$STR_RHS_FLORA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_msv_rifleman_patchless";
		};
	};
	class rhs_uniform_flora_patchless_alt: rhs_uniform_flora
	{
		displayName="$STR_RHS_FLORA_ALT_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_msv_rifleman_patchless_alt";
		};
	};
	class rhs_uniform_emr_patchless: rhs_uniform_flora
	{
		displayName="$STR_RHS_EMRSUMMER_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_msv_emr_rifleman_patchless";
		};
	};
	class rhs_uniform_m88_patchless: rhs_uniform_flora
	{
		displayName="$STR_RHS_M88_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_msv_rifleman_m88_patchless";
		};
	};
	class rhs_uniform_gorka_r_y: rhs_uniform_flora
	{
		displayName="$STR_RHS_GORKARY_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vdv_gorka_r_y_rifleman";
		};
	};
	class rhs_uniform_gorka_r_g: rhs_uniform_gorka_r_y
	{
		displayName="$STR_RHS_GORKARG_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vdv_gorka_r_g_rifleman";
		};
	};
	class rhs_uniform_gorka_1_a: rhs_uniform_flora
	{
		displayName="Gorka 1 (Afghanka)";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vdv_gorka_1_a_rifleman";
		};
	};
	class rhs_uniform_gorka_1_b: rhs_uniform_gorka_1_a
	{
		displayName="Gorka 1 (Berezka)";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_vdv_gorka_1_b_rifleman";
		};
	};
	class rhs_uniform_invisible: rhs_uniform_gorka_r_y
	{
		displayName="Invisibru";
		class ItemInfo: ItemInfo
		{
			uniformClass="rhs_invisible_man";
		};
	};
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class HeadGearItem;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class rhs_fieldcap: H_HelmetB
	{
		allowedFacewear[]=
		{
			"",
			8,
			"rhs_scarf",
			1,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_FIELDCAP_NAME";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_co.paa"
		};
		descriptionShort="No Armor";
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[]=
			{
				"Camo1"
			};
			mass=5;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap";
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_fieldcap_vsr: rhs_fieldcap
	{
		displayName="$STR_RHS_FIELDCAPVSR_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\6b27_vsr_co.paa"
		};
	};
	class rhs_fieldcap_digi: rhs_fieldcap
	{
		displayName="$STR_RHS_FIELDCAPEMRSUMMER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_fieldcap_digi_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_digi";
		};
	};
	class rhs_fieldcap_digi2: rhs_fieldcap
	{
		displayName="$STR_RHS_FIELDCAPEMRSUMMER2_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_fieldcap_digi2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_fieldcap_digi2";
		};
	};
	class rhs_fieldcap_digi_des: rhs_fieldcap_digi
	{
		displayName="$STR_RHS_FIELDCAPEMRDES_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_fieldcap_emr_desert_co.paa"
		};
	};
	class rhs_fieldcap_ml: rhs_fieldcap
	{
		displayName="$STR_RHS_FIELDCAPML_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"
		};
	};
	class rhs_fieldcap_khk: rhs_fieldcap
	{
		displayName="$STR_RHS_FIELDCAPKHK_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_khk_co.paa"
		};
	};
	class rhs_fieldcap_helm: rhs_fieldcap
	{
		displayName="$STR_RHS_FIELDCAP6B27M_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_co.paa",
			"rhsafrf\addons\rhs_infantry\data\6b27_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			mass=20;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_helm";
		};
	};
	class rhs_fieldcap_helm_digi: rhs_fieldcap_helm
	{
		displayName="$STR_RHS_FIELDCAP6B27MEMRSUMMER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_fieldcap_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_helm_digi";
		};
	};
	class rhs_fieldcap_helm_ml: rhs_fieldcap_helm
	{
		displayName="$STR_RHS_FIELDCAP6B27MML_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa",
			"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"
		};
	};
	class rhs_fieldcap_izlom: rhs_fieldcap_digi2
	{
		displayName="$STR_RHS_FIELDCAPIZLOM_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\cap2_izlom.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_fieldcap_digi2";
		};
	};
	class rhs_beanie: H_HelmetB
	{
		allowedFacewear[]=
		{
			"",
			8,
			"rhs_scarf",
			1,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_BEANIE_FLORA";
		Scope=2;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\beanie_camo_co.paa"
		};
		descriptionShort="No Armor";
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[]=
			{
				"Camo1"
			};
			mass=5;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_beanie";
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_beanie_green: rhs_beanie
	{
		displayName="$STR_RHS_BEANIE";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\beanie_green_co.paa"
		};
	};
	class rhs_6b26: H_HelmetB
	{
		Scope=2;
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B26FLORA_NAME";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b26_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1"
			};
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26";
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class rhs_6b26_bala: rhs_6b26
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B26BALAFLORA_NAME";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1"
			};
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_bala";
		};
	};
	class rhs_6b26_ess: rhs_6b26
	{
		displayName="$STR_RHS_6B26ESSFLORA_NAME";
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Aviator"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
		};
	};
	class rhs_6b26_ess_bala: rhs_6b26
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B26ESSBALAFLORA_NAME";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess_bala";
		};
	};
	class rhs_6b26_green: rhs_6b26
	{
		displayName="$STR_RHS_6B26_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green";
		};
	};
	class rhs_6b26_bala_green: rhs_6b26_green
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B26BALA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_bala";
		};
	};
	class rhs_6b26_ess_green: rhs_6b26_green
	{
		displayName="$STR_RHS_6B26ESS_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess";
		};
	};
	class rhs_6b26_ess_bala_green: rhs_6b26_green
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B26ESSBALA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess_bala";
		};
	};
	class rhs_6b27m: H_HelmetB
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B27MFLORA_NAME";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1"
			};
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m";
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class rhs_6b27m_digi: rhs_6b27m
	{
		displayName="$STR_RHS_6B27MEMRSUMMER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"
		};
	};
	class rhs_6b27m_ml: rhs_6b27m
	{
		displayName="$STR_RHS_6B27MML_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"
		};
	};
	class rhs_6b27m_ess_bala: rhs_6b27m
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B27MFLORAESSBALACLAVA_NAME";
		class ItemInfo: ItemInfo
		{
			mass=34.32;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_ess_bala";
		};
	};
	class rhs_6b27m_digi_ess_bala: rhs_6b27m_ess_bala
	{
		displayName="$STR_RHS_6B27MEMRSUMMERESSBALACLAVA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"
		};
	};
	class rhs_6b27m_ML_ess_bala: rhs_6b27m_ess_bala
	{
		displayName="$STR_RHS_6B27MMLESSBALACLAVA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"
		};
	};
	class rhs_6b27m_bala: rhs_6b27m
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B27MFLORABALACLAVA_NAME";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_bala";
		};
	};
	class rhs_6b27m_digi_bala: rhs_6b27m_bala
	{
		displayName="$STR_RHS_6B27MEMRSUMMERBALACLAVA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"
		};
	};
	class rhs_6b27m_ml_bala: rhs_6b27m_bala
	{
		displayName="$STR_RHS_6B27MMLBALACLAVA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"
		};
	};
	class rhs_6b27m_ess: rhs_6b27m
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B27MFLORAESS_NAME";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_ess";
		};
	};
	class rhs_6b27m_digi_ess: rhs_6b27m_ess
	{
		displayName="$STR_RHS_6B27MEMRSUMMERESS_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"
		};
	};
	class rhs_6b27m_ml_ess: rhs_6b27m_ess
	{
		displayName="$STR_RHS_6B27MMLESS_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"
		};
	};
	class rhs_6b27m_green: rhs_6b27m
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B27M_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green";
		};
	};
	class rhs_6b27m_green_ess: rhs_6b27m_ess
	{
		displayName="$STR_RHS_6B27MESS_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_ess";
		};
	};
	class rhs_6b27m_green_bala: rhs_6b27m_bala
	{
		displayName="$STR_RHS_6B27MBALACLAVA_NAME";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_bala";
		};
	};
	class rhs_6b27m_green_ess_bala: rhs_6b27m_ess_bala
	{
		displayName="$STR_RHS_6B27MESSBALACLAVA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_ess_bala";
		};
	};
	class rhs_6b28: rhs_6b27m
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B28EMRSUMMER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_co"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class rhs_6b28_flora: rhs_6b28
	{
		displayName="$STR_RHS_6B28FLORA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_flora_co.paa"
		};
	};
	class rhs_6b28_ess: rhs_6b28
	{
		displayName="$STR_RHS_6B28EMRSUMMERESS_NAME";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_ess";
		};
	};
	class rhs_6b28_flora_ess: rhs_6b28_ess
	{
		displayName="$STR_RHS_6B28FLORAESS_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_flora_co.paa"
		};
	};
	class rhs_6b28_bala: rhs_6b28
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B28EMRSUMMERBALACLAVA_NAME";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_bala";
		};
	};
	class rhs_6b28_flora_bala: rhs_6b28_bala
	{
		displayName="$STR_RHS_6B28FLORABALACLAVA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_flora_co.paa"
		};
	};
	class rhs_6b28_ess_bala: rhs_6b28
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B28EMRSUMMERESSBALACLAVA_NAME";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_ess_bala";
		};
	};
	class rhs_6b28_flora_ess_bala: rhs_6b28_ess_bala
	{
		displayName="$STR_RHS_6B28FLORAESSBALACLAVA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_flora_co.paa"
		};
	};
	class rhs_6b28_green: rhs_6b28
	{
		displayName="$STR_RHS_6B28_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green";
		};
	};
	class rhs_6b28_green_ess: rhs_6b28_ess
	{
		displayName="$STR_RHS_6B28ESS_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_ess";
		};
	};
	class rhs_6b28_green_bala: rhs_6b28
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B28BALACLAVA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_bala";
		};
	};
	class rhs_6b28_green_ess_bala: rhs_6b28
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B28ESSBALACLAVA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\rhs_6b28_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_ess_bala";
		};
	};
	class rhs_Booniehat_digi: ItemCore
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_BOONIEHATEMRSUMMER_NAME";
		weaponPoolAvailable=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry\Data\boonie_emr_co.paa"
		};
		descriptionShort="No Armor";
		class ItemInfo: HeadGearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class rhs_Booniehat_flora: rhs_Booniehat_digi
	{
		displayName="$STR_RHS_BOONIEHATFLORA_NAME";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry\Data\boonie_flora_co.paa"
		};
	};
	class rhs_ssh68: rhs_6b27m
	{
		allowedFacewear[]=
		{
			"",
			8,
			"rhs_scarf",
			1,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_SSH68_NAME";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry\data\ssh68_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_ssh68";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
					passThrough=0.5;
				};
			};
		};
	};
	class rhs_zsh7a: H_HelmetB
	{
		displayName="$STR_RHS_ZSH7AKM35_NAME";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry\data\rhs_zsh7a_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=11;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7";
			allowedSlots[]={801,901,701,605};
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\rhsafrf\addons\rhs_infantry\data\rhs_zsh7a_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
					passThrough=0.5;
				};
			};
		};
	};
	class rhs_zsh7a_alt: rhs_zsh7a
	{
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_alt";
		};
	};
	class rhs_zsh7a_mike: rhs_zsh7a
	{
		displayName="$STR_RHS_ZSH7A_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike";
		};
	};
	class rhs_zsh7a_mike_green: rhs_zsh7a_mike
	{
		displayName="$STR_RHS_ZSH7A_NAME";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry\data\rhs_zsh7a_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike";
			hiddenSelectionsTextures[]=
			{
				"\rhsafrf\addons\rhs_infantry\data\rhs_zsh7a_green_co.paa"
			};
		};
	};
	class rhs_zsh7a_mike_alt: rhs_zsh7a_mike
	{
		displayName="$STR_RHS_ZSH7A_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike_alt";
		};
	};
	class rhs_zsh7a_mike_green_alt: rhs_zsh7a_mike_green
	{
		displayName="$STR_RHS_ZSH7A_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike_alt";
		};
	};
	class rhs_gssh18: H_HelmetB
	{
		displayName="$STR_RHS_GSSH18_NAME";
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadGearItem
		{
			mass=1;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_gssh18";
			allowedSlots[]={801,901,701,605};
		};
	};
	class rhs_tsh4: H_HelmetB
	{
		allowedFacewear[]=
		{
			"",
			3,
			"rhs_scarf",
			5,
			"G_Aviator",
			2
		};
		displayName="$STR_RHS_TSH4_NAME";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=5;
			hiddenSelections[]=
			{
				"camo1"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";
			allowedSlots[]={801,901,701,605};
		};
	};
	class rhs_tsh4_ess: rhs_tsh4
	{
		allowedFacewear[]=
		{
			"",
			3,
			"rhs_scarf",
			7
		};
		displayName="$STR_RHS_TSH4ESS_NAME";
		class ItemInfo: ItemInfo
		{
			mass=6;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess";
		};
	};
	class rhs_tsh4_bala: rhs_tsh4
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_TSH4BALACLAVA_NAME";
		class ItemInfo: ItemInfo
		{
			mass=6;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_bala";
		};
	};
	class rhs_tsh4_ess_bala: rhs_tsh4
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_TSH4ESSBALACLAVA_NAME";
		class ItemInfo: ItemInfo
		{
			mass=6;
			uniformModel="\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess_bala";
		};
	};
	class rhs_6b47: rhs_6b28
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B47_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47";
		};
	};
	class rhs_6b47_bala: rhs_6b47
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B47_BALA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_bala";
		};
	};
	class rhs_6b47_ess: rhs_6b47
	{
		displayName="$STR_RHS_6B47_ESS_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_ess";
		};
	};
	class rhs_6b47_ess_bala: rhs_6b47
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B47_ESS_BALA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_ess_bala";
		};
	};
	class rhs_6b7_1m: rhs_6b28
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B71M_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m";
		};
	};
	class rhs_6b7_1m_ess: rhs_6b7_1m
	{
		displayName="$STR_RHS_6B71M_ESS_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_ess";
		};
	};
	class rhs_6b7_1m_ess_bala: rhs_6b7_1m
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B71M_ESS_BALA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_ess_bala";
		};
	};
	class rhs_6b7_1m_bala1: rhs_6b7_1m
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B71M_BALA_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_balaclava1";
		};
	};
	class rhs_6b7_1m_bala1_emr: rhs_6b7_1m_bala1
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B71M_EMR_BALA_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava1";
		};
	};
	class rhs_6b7_1m_emr_ess: rhs_6b7_1m_bala1
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B71M_EMR_ESS_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ess";
		};
	};
	class rhs_6b7_1m_emr_ess_bala: rhs_6b7_1m_bala1
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B71M_EMR_ESS_BALA_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ess_bala";
		};
	};
	class rhs_6b7_1m_bala1_flora: rhs_6b7_1m_bala1_emr
	{
		displayName="$STR_RHS_6B71M_FLORA_BALA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava1";
		};
	};
	class rhs_6b7_1m_bala1_olive: rhs_6b7_1m_bala1_emr
	{
		displayName="$STR_RHS_6B71M_OLIVE_BALA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava1";
		};
	};
	class rhs_6b7_1m_bala2: rhs_6b7_1m
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B71M_BALA_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_balaclava2";
		};
	};
	class rhs_6b7_1m_bala2_emr: rhs_6b7_1m_bala2
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_6B71M_EMR_BALA_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava2";
		};
	};
	class rhs_6b7_1m_bala2_flora: rhs_6b7_1m_bala2_emr
	{
		displayName="$STR_RHS_6B71M_FLORA_BALA_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava2";
		};
	};
	class rhs_6b7_1m_bala2_olive: rhs_6b7_1m_bala2_emr
	{
		displayName="$STR_RHS_6B71M_OLIVE_BALA_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa",
				"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava2";
		};
	};
	class rhs_6b7_1m_emr: rhs_6b7_1m
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_6B71M_EMR_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover";
		};
	};
	class rhs_6b7_1m_flora: rhs_6b7_1m_emr
	{
		displayName="$STR_RHS_6B71M_FLORA_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa"
		};
	};
	class rhs_6b7_1m_flora_ns3: rhs_6b7_1m_flora
	{
		displayName="$STR_RHS_6B71M_FLORA_NS3_NAME";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ns3";
		};
	};
	class rhs_6b7_1m_olive: rhs_6b7_1m_emr
	{
		displayName="$STR_RHS_6B71M_OLIVE_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa"
		};
	};
	class rhs_altyn: rhs_6b7_1m_emr
	{
		allowedFacewear[]={};
		displayName="$STR_RHS_ALTYN_NAME";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_altyn_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1"
			};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class rhs_altyn_bala: rhs_altyn
	{
		displayName="$STR_RHS_ALTYN_BALA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_bala";
		};
	};
	class rhs_altyn_visordown: rhs_altyn
	{
		displayName="$STR_RHS_ALTYN_VISORDOWN_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class rhs_altyn_novisor: rhs_altyn
	{
		displayName="$STR_RHS_ALTYN_NOVISOR_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor";
		};
	};
	class rhs_altyn_novisor_bala: rhs_altyn_novisor
	{
		displayName="$STR_RHS_ALTYN_NOVISOR_BALA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_bala";
		};
	};
	class rhs_altyn_novisor_ess: rhs_altyn
	{
		displayName="$STR_RHS_ALTYN_NOVISOR_ESS_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_ess";
		};
	};
	class rhs_altyn_novisor_ess_bala: rhs_altyn_novisor_ess
	{
		displayName="$STR_RHS_ALTYN_NOVISOR_ESS_BALA_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_ess_bala";
		};
	};
	class rhs_zsh12: rhs_altyn_novisor
	{
	};
	class rhs_zsh12_black: rhs_zsh12
	{
	};
	class rhs_zsh12_bala: rhs_altyn_novisor_bala
	{
	};
	class NVGoggles;
	class rhs_1PN138: NVGoggles
	{
		Scope=2;
		ScopeCurator=2;
		displayName="$STR_RHS_1PN138";
		descriptionShort="1PN138 Monocular Night Vision Device";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_ON.p3d";
			mass=15;
		};
	};
	class rhs_beret_vdv1: rhs_Booniehat_flora
	{
		allowedFacewear[]=
		{
			"",
			8,
			"rhs_scarf",
			1,
			"G_Aviator",
			1
		};
		displayName="$STR_RHS_BERET_VDV_NAME";
		weaponPoolAvailable=1;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_vdv_beret_co.paa"
		};
		descriptionShort="No Armor";
		class ItemInfo: HeadGearItem
		{
			mass=5;
			allowedSlots[]={801,901,701,605};
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_vdv_beret";
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_beret_vdv2: rhs_beret_vdv1
	{
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_vdv_beret2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_vdv_beret2";
		};
	};
	class rhs_beret_mp1: rhs_beret_vdv1
	{
		displayName="$STR_RHS_BERET_MP_NAME";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_mp_beret_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_mp_beret";
		};
	};
	class rhs_beret_milp: rhs_beret_vdv1
	{
		displayName="$STR_RHS_BERET_MILP_NAME";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_milp_beret_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_milp_beret";
		};
	};
	class rhs_beret_vdv3: rhs_beret_milp
	{
		displayName="$STR_RHS_BERET_VDV_NAME";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_vdv_beret3_co.paa"
		};
	};
	class rhs_beret_mp2: rhs_beret_vdv1
	{
		displayName="$STR_RHS_BERET_MP_NAME";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_mp_beret2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_mp_beret2";
		};
	};
	class rhs_beret_mvd: rhs_beret_milp
	{
		displayName="$STR_RHS_BERET_MVD_NAME";
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_infantry2\gear\head\data\T_beret_red_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_milp_beret";
		};
	};
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class rhs_6b23: Vest_Camo_Base
	{
		displayName="$STR_RHS_6B23_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
		};
		descriptionShort="Armor Level 4";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23";
			containerClass="Supply20";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=8;
					PassThrough=0.40000001;
					simulation="RHS_Gost_2";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
			};
		};
	};
	class rhs_6b23_crew: rhs_6b23
	{
		displayName="$STR_RHS_6B23CREW_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
			containerClass="Supply90";
			mass=70;
		};
	};
	class rhs_6b23_engineer: rhs_6b23
	{
		displayName="$STR_RHS_6B23ENGINEER_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhs_6b23_medic: rhs_6b23
	{
		displayName="$STR_RHS_6B23MEDIC_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
			containerClass="Supply130";
			mass=80;
		};
	};
	class rhs_6b23_rifleman: rhs_6b23
	{
		displayName="$STR_RHS_6B23RIFLEMAN_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_rifleman";
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhs_6b23_crewofficer: rhs_6b23
	{
		displayName="$STR_RHS_6B23CREWOFFICER_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
			containerClass="Supply60";
			mass=65;
		};
	};
	class rhs_6b23_sniper: rhs_6b23
	{
		displayName="$STR_RHS_6B23SNIPER_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhs_6b23_6sh92: rhs_6b23
	{
		displayName="$STR_RHS_6B236SH92_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92";
			containerClass="Supply100";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
					PassThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="22 + 		3";
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
			};
		};
	};
	class rhs_6b23_6sh92_vog: rhs_6b23_6sh92
	{
		displayName="$STR_RHS_6B236SH92VOG_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog";
			containerClass="Supply120";
			mass=80;
		};
	};
	class rhs_6b23_6sh92_vog_headset: rhs_6b23_6sh92_vog
	{
		displayName="$STR_RHS_6B236SH92VOGHEADSET_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_headset";
		};
	};
	class rhs_6b23_6sh92_headset: rhs_6b23_6sh92
	{
		displayName="$STR_RHS_6B236SH92HEADSET_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset";
		};
	};
	class rhs_6b23_6sh92_headset_mapcase: rhs_6b23_6sh92
	{
		displayName="$STR_RHS_6B236SH92HEADSETMAPCASE_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_mapcase";
			containerClass="Supply120";
			mass=80;
		};
	};
	class rhs_6b23_6sh92_radio: rhs_6b23_6sh92
	{
		displayName="$STR_RHS_6B236SH92RADIO_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio";
		};
	};
	class rhs_6sh46: Vest_Camo_Base
	{
		displayName="$STR_RHS_6SH46_NAME";
		hiddenSelectionsTextures[]={};
		descriptionShort="No Armor";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh46";
			containerClass="Supply40";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_vest_commander: Vest_Camo_Base
	{
		displayName="$STR_RHS_MAPCASEANDHOLSTER_NAME";
		hiddenSelectionsTextures[]={};
		descriptionShort="No Armor";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_commander";
			containerClass="Supply40";
			mass=20;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_vest_pistol_holster: rhs_vest_commander
	{
		displayName="$STR_RHS_HOLSTER_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_pistol_holster";
			containerClass="Supply20";
			mass=5;
		};
	};
	class rhs_6b23_digi: rhs_6b23
	{
		displayName="$STR_RHS_6B23EMRSUMMER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_crew: rhs_6b23_crew
	{
		displayName="$STR_RHS_6B23EMRSUMMERCREW_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_engineer: rhs_6b23_engineer
	{
		displayName="$STR_RHS_6B23EMRSUMMERENGINEER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_medic: rhs_6b23_medic
	{
		displayName="$STR_RHS_6B23EMRSUMMERMEDIC_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_rifleman: rhs_6b23_rifleman
	{
		displayName="$STR_RHS_6B23EMRSUMMERRIFLEMAN_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_crewofficer: rhs_6b23_crewofficer
	{
		displayName="$STR_RHS_6B23EMRSUMMERCREWOFFICER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_sniper: rhs_6b23_sniper
	{
		displayName="$STR_RHS_6B23EMRSUMMERSNIPER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92: rhs_6b23_6sh92
	{
		displayName="$STR_RHS_6B23EMRSUMMER6SH92_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_vog: rhs_6b23_6sh92_vog
	{
		displayName="$STR_RHS_6B23EMRSUMMER6SH92VOG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset
	{
		displayName="$STR_RHS_6B23EMRSUMMER6SH92VOGHEADSET_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_headset: rhs_6b23_6sh92_headset
	{
		displayName="$STR_RHS_6B23EMRSUMMER6SH92HEADSET_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase
	{
		displayName="$STR_RHS_6B23EMRSUMMER6SH92HEADSETMAPCASE_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_radio: rhs_6b23_6sh92_radio
	{
		displayName="$STR_RHS_6B23EMRSUMMER6SH92RADIO_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_Spetsnaz: rhs_6b23_6sh92_radio
	{
		displayName="$STR_RHS_6B23EMR6SH92RADIOSPNZ_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio_spetsnaz";
			containerClass="Supply100";
			mass=70;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=8;
					PassThrough=0.40000001;
					simulation="RHS_Gost_2";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="22 + 		3";
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz: rhs_6b23_6sh92_radio
	{
		displayName="$STR_RHS_6B23EMR6SH92VOGRADIOSPNZ_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_radio_spetsnaz";
			containerClass="Supply120";
			mass=75;
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_headset_spetsnaz: rhs_6b23_6sh92_radio
	{
		displayName="$STR_RHS_6B23EMR6SH92HEADSETSPNZ_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_spetsnaz";
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_spetsnaz2: rhs_6b23_6sh92_radio
	{
		displayName="$STR_RHS_6B23EMR6SH92SPNZ_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_spetsnaz";
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_digi_6sh92_Vog_Spetsnaz: rhs_6b23_6sh92_radio
	{
		displayName="$STR_RHS_6B23EMR6SH92VOGSPNZ_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_spetsnaz";
			containerClass="Supply120";
			mass=75;
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b23_ML: rhs_6b23
	{
		displayName="$STR_RHS_6B23ML_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_crew: rhs_6b23_crew
	{
		displayName="$STR_RHS_6B23MLCREW_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_engineer: rhs_6b23_engineer
	{
		displayName="$STR_RHS_6B23MLENGINEER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_medic: rhs_6b23_medic
	{
		displayName="$STR_RHS_6B23MLMEDIC_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_rifleman: rhs_6b23_rifleman
	{
		displayName="$STR_RHS_6B23MLRIFLEMAN_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_crewofficer: rhs_6b23_crewofficer
	{
		displayName="$STR_RHS_6B23MLCREWOFFICER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_sniper: rhs_6b23_sniper
	{
		displayName="$STR_RHS_6B23MLSNIPER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_6sh92: rhs_6b23_6sh92
	{
		displayName="$STR_RHS_6B23ML6SH92_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_6sh92_vog: rhs_6b23_6sh92_vog
	{
		displayName="$STR_RHS_6B23ML6SH92VOG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset
	{
		displayName="$STR_RHS_6B23ML6SH92VOGHEADSET_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_6sh92_headset: rhs_6b23_6sh92_headset
	{
		displayName="$STR_RHS_6B23ML6SH92HEADSET_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase
	{
		displayName="$STR_RHS_6B23ML6SH92HEADSETMAPCASE_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_6b23_ML_6sh92_radio: rhs_6b23_6sh92_radio
	{
		displayName="$STR_RHS_6B23ML6SH92RADIO_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"
		};
	};
	class rhs_vydra_3m: Vest_Camo_Base
	{
		displayName="$STR_RHS_VYDRA3M_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
		};
		descriptionShort="No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1"
			};
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_vydra_3m";
			containerClass="Supply80";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=0.80000001;
				};
			};
		};
	};
	class rhs_6b23_vydra_3m: rhs_6b23_6sh92
	{
		displayName="$STR_RHS_6B23VYDRA3M_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa",
			"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
			containerClass="Supply100";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=8;
					PassThrough=0.40000001;
					simulation="RHS_Gost_2";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="22 + 		3";
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
			};
		};
	};
	class rhs_6b23_digi_vydra_3m: rhs_6b23_vydra_3m
	{
		displayName="$STR_RHS_6B23EMRVYDRA3M_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
		};
	};
	class rhs_6b23_ML_vydra_3m: rhs_6b23_vydra_3m
	{
		displayName="$STR_RHS_6B23MLVYDRA3M_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa",
			"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"
		};
	};
	class rhs_6b23_6sh116: rhs_6b23_digi
	{
		displayName="$STR_RHS_6B23EMRSUMMER6SH116_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3"
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
					PassThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
					PassThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="22 + 		3";
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_co.paa"
		};
	};
	class rhs_6b23_6sh116_flora: rhs_6b23_6sh116
	{
		displayName="$STR_RHS_6B23FLORA6SH116_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_flora_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_flora_co.paa"
		};
	};
	class rhs_6b23_6sh116_od: rhs_6b23_6sh116
	{
		displayName="$STR_RHS_6B23OD6SH116_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_od_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_od_co.paa"
		};
	};
	class rhs_6b23_6sh116_vog: rhs_6b23_6sh116
	{
		displayName="$STR_RHS_6B23EMRSUMMER6SH116VOG_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
			mass=85;
			containerClass="Supply160";
		};
	};
	class rhs_6b23_6sh116_vog_flora: rhs_6b23_6sh116_vog
	{
		displayName="$STR_RHS_6B23FLORA6SH116VOG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_flora_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_flora_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
		};
	};
	class rhs_6b23_6sh116_vog_od: rhs_6b23_6sh116_vog
	{
		displayName="$STR_RHS_6B23OD6SH116VOG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_od_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_od_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
		};
	};
	class rhs_6b13: rhs_6b23
	{
		displayName="$STR_RHS_6B13_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_vsr_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"
		};
		descriptionShort="Armor Level 6";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";
			containerClass="Supply20";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=16;
					PassThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
					PassThrough=0.1;
					simulation="RHS_Gost_6";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
					PassThrough=0.1;
					simulation="RHS_Gost_6";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
			};
		};
	};
	class rhs_6b13_crewofficer: rhs_6b13
	{
		displayName="$STR_RHS_6B13CREWOFFICER_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_crewofficer";
			containerClass="Supply40";
			mass=85;
		};
	};
	class rhs_6b13_6sh92: rhs_6b13
	{
		displayName="$STR_RHS_6B136SH92_NAME";
		descriptionShort="Armor Level 6";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";
			containerClass="Supply100";
			mass=95;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=16;
					PassThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor="28 + 		3";
					PassThrough=0.1;
					simulation="RHS_Gost_6";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
					PassThrough=0.1;
					simulation="RHS_Gost_6";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
			};
		};
	};
	class rhs_6b13_6sh92_vog: rhs_6b13_6sh92
	{
		displayName="$STR_RHS_6B136SH92VOG_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
			containerClass="Supply120";
			mass=100;
		};
	};
	class rhs_6b13_6sh92_headset_mapcase: rhs_6b13_6sh92
	{
		displayName="$STR_RHS_6B136SH92HEADSETMAPCASE_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";
			containerClass="Supply120";
			mass=100;
		};
	};
	class rhs_6b13_6sh92_radio: rhs_6b13_6sh92
	{
		displayName="$STR_RHS_6B136SH92RADIO_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
		};
	};
	class rhs_6b13_EMR: rhs_6b13
	{
		displayName="$STR_RHS_6B13EMRSUMMER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b13_EMR_6sh92: rhs_6b13_6sh92
	{
		displayName="$STR_RHS_6B13EMR6SH92_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b13_EMR_6sh92_vog: rhs_6b13_6sh92_vog
	{
		displayName="$STR_RHS_6B13EMR6SH92VOG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b13_EMR_6sh92_headset_mapcase: rhs_6b13_6sh92_headset_mapcase
	{
		displayName="$STR_RHS_6B13EMR6SH92HEADSETMAPCASE_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b13_EMR_6sh92_radio: rhs_6b13_6sh92_radio
	{
		displayName="$STR_RHS_6B13EMR6SH92RADIO_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6b13_Flora: rhs_6b13
	{
		displayName="$STR_RHS_6B13FLORA_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
		};
	};
	class rhs_6b13_Flora_crewofficer: rhs_6b13_crewofficer
	{
		displayName="$STR_RHS_6B13FLORACREWOFFICER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
		};
	};
	class rhs_6b13_Flora_6sh92: rhs_6b13_6sh92
	{
		displayName="$STR_RHS_6B13FLORA6SH92_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
		};
	};
	class rhs_6b13_Flora_6sh92_vog: rhs_6b13_6sh92_vog
	{
		displayName="$STR_RHS_6B13FLORA6SH92VOG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
		};
	};
	class rhs_6b13_Flora_6sh92_headset_mapcase: rhs_6b13_6sh92_headset_mapcase
	{
		displayName="$STR_RHS_6B13FLORA6SH92HEADSETMAPCASE_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
		};
	};
	class rhs_6b13_Flora_6sh92_radio: rhs_6b13_6sh92_radio
	{
		displayName="$STR_RHS_6B13FLORA6SH92RADIO_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
		};
	};
	class rhs_6b43: rhs_6b23
	{
		displayName="$STR_RHS_6B43_NAME";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry2\data\6B43_co.paa"
		};
		descriptionShort="Armor Level 6";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b43_m";
			containerClass="Supply20";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=16;
					PassThrough=0.30000001;
					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
					PassThrough=0.1;
					simulation="RHS_Gost_6";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
					PassThrough=0.1;
					simulation="RHS_Gost_6";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
					simulation="RHS_Gost_4";
				};
			};
		};
	};
	class rhs_6sh92: Vest_Camo_Base
	{
		displayName="$STR_RHS_6SH92_NAME";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"
		};
		descriptionShort="No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92";
			containerClass="Supply100";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=0.80000001;
				};
			};
		};
	};
	class rhs_6sh92_vog: rhs_6sh92
	{
		displayName="$STR_RHS_6SH92VOG_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog";
			containerClass="Supply120";
			mass=20;
		};
	};
	class rhs_6sh92_vog_headset: rhs_6sh92_vog
	{
		displayName="$STR_RHS_6SH92VOGHEADSET_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog_headset";
		};
	};
	class rhs_6sh92_headset: rhs_6sh92
	{
		displayName="$STR_RHS_6SH92HEADSET_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_headset";
		};
	};
	class rhs_6sh92_radio: rhs_6sh92
	{
		displayName="$STR_RHS_6SH92RADIO_NAME";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_radio";
		};
	};
	class rhs_6sh92_digi: rhs_6sh92
	{
		displayName="$STR_RHS_6SH92EMRSUMMER_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6sh92_digi_vog: rhs_6sh92_vog
	{
		displayName="$STR_RHS_6SH92EMRSUMMERVOG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6sh92_digi_vog_headset: rhs_6sh92_vog_headset
	{
		displayName="$STR_RHS_6SH92EMRSUMMERVOGHEADSET_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6sh92_digi_headset: rhs_6sh92_headset
	{
		displayName="$STR_RHS_6SH92EMRSUMMERHEADSET_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6sh92_digi_radio: rhs_6sh92_radio
	{
		displayName="$STR_RHS_6SH92EMRSUMMERRADIO_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa",
			"rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"
		};
	};
	class rhs_6sh92_vsr: rhs_6sh92
	{
		displayName="$STR_RHS_6SH92VSR_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"
		};
	};
	class rhs_6sh92_vsr_vog: rhs_6sh92_vog
	{
		displayName="$STR_RHS_6SH92VSRVOG_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"
		};
	};
	class rhs_6sh92_vsr_vog_headset: rhs_6sh92_vog_headset
	{
		displayName="$STR_RHS_6SH92VSRVOGHEADSET_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"
		};
	};
	class rhs_6sh92_vsr_headset: rhs_6sh92_headset
	{
		displayName="$STR_RHS_6SH92VSRHEADSET_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"
		};
	};
	class rhs_6sh92_vsr_radio: rhs_6sh92_radio
	{
		displayName="$STR_RHS_6SH92VSRRADIO_NAME";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"
		};
	};
};
