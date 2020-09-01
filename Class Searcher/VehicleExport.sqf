_vehicleMatrix = [
	[
		"RHS_M2A2_BUSKI_WD",
		"RHS_M2A2_wd",
		"RHS_M2A3_BUSKIII_WD",
		"RHS_M6_wd",
		"rhsgref_cdf_b_ural_Zu23",
		"rhsusf_m1025_w",
		"rhsusf_m1025_w_m2",
		"rhsusf_m1025_w_Mk19",
		"rhsusf_m1045_w",
		"rhsusf_m1117_w",
		"rhsusf_m113_usarmy",
		"rhsusf_m113_usarmy_medical",
		"rhsusf_m113_usarmy_Mk19",
		"rhsusf_m1220_m153_m2_usarmy_wd",
		"rhsusf_M1220_MK19_usarmy_wd",
		"rhsusf_m1220_usarmy_wd",
		"rhsusf_m1232_MK19_usarmy_wd",
		"rhsusf_m1232_usarmy_wd",
		"rhsusf_m1a1aim_tuski_wd",
		"rhsusf_m1a1fep_wd",
		"rhsusf_m1a1hc_wd",
		"rhsusf_m1a2sep1tuskiiwd_usarmy"
	],
	[
		"RHS_UAZ_MSV_01",
		"rhsgref_ins_uaz_dshkm",
		"rhs_tigr_3camo_msv",
		"rhsgref_cdf_b_reg_uaz_ags",
		"rhs_tigr_sts_vdv",
		"rhsgref_ins_uaz_spg9",
		"rhsgref_BRDM2_vdv",
		"rhsgref_BRDM2_ATGM_vdv",
		"rhs_gaz66_zu23_msv",
		"rhs_bmd1r",
		"rhs_btr80_msv",
		"rhsgref_ins_bmp1k",
		"rhsgref_ins_bmp1p",
		"rhsgref_ins_bmp2d",
		"rhs_zsu234_aa",
		"rhs_sprut_vdv",
		"rhs_bmd2m",
		"rhs_bmp3_msv",
		"rhs_btr80a_msv",
		"rhs_bmd4_vdv",
		"rhs_t72bb_tv",
		"rhs_t80bvk",
		"rhs_t80uk",
		"rhs_t72bc_tv",
		"rhs_t90a_tv",
		"rhs_bmd4ma_vdv",
		"rhs_t90a_tv",
		"rhs_t72bd_tv",
		"rhs_bmp3mera_msv",
		"rhs_t80ue1"
	]
];


{
	{
		_configs = configProperties [configFile >> "CfgVehicles" >> _x];
		diag_log format["%1 = [", _x];
		{
			if isText _x then {
				diag_log (format["    [%1,%2]", _x, getText _x]);
			};
			if isNumber _x then {
				diag_log (format["    [%1,%2]", _x, getNumber _x]);
			};
			if isArray _x then {
				diag_log (format["    [%1,%2]", _x, getArray _x]);
			};
		} foreach _configs;
		diag_log "]";
	} foreach _x;
} foreach _vehicleMatrix