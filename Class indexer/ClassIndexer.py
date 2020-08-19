# -*- coding: utf-8 -*-
import csv
import os


os.environ['LINES'] = "10000000"
os.environ['COLUMNS'] = "500"
os.system("")

cgreen   = '\33[32m'
cgrey    = '\33[90m'
cviolet2 = '\33[95m'

cbold    = '\33[1m'

cend     = '\033[0m'

bluForWeapons = ["rhs_weap_M590_5RD", "rhs_weap_M107", "rhs_weap_XM2010",
"rhs_weap_m1garand_sa43", "rhs_weap_m14ebrri", "rhs_weap_sr25", "rhs_weap_l1a1",
"rhs_weap_SCARH_STD", "rhs_weap_m40a5", "rhs_weap_m24sws", "rhs_weap_kar98k",
"rhs_weap_mg42", "rhs_weap_mosin_sbr", "rhs_weap_m240G", "rhs_weap_m4a1_blockII",
"rhs_weap_mk18", "rhs_weap_m27iar", "rhs_weap_hk416d145:", "rhs_weap_m16a4",
"rhs_weap_m4a1", "rhs_weap_m21a", "rhs_weap_g36kv", "rhs_weap_m249", "rhs_weap_m249_pip",
"rhs_weap_MP44", "rhsusf_weap_MP7A2", "rhsusf_weap_m9", "rhsusf_weap_glock17g4",
"rhs_weap_m3a1_specops", "rhsusf_weap_m1911a1", "rhs_weap_savz61", "rhs_weap_type94_new"]

bluForAmmo = ["rhs_ammo_12g_slug", "rhs_ammo_12g_00buckshot", "rhsusf_ammo_127x99_M33_Ball",
"rhsusf_ammo_127x99_mk211", "rhsusf_B_300winmag", "rhs_ammo_762x63_M2B_ball",
"rhs_ammo_762x51_M118_Special_Ball", "rhs_ammo_762x51_M80_Ball", "rhs_ammo_762x51_M993_Ball",
"rhs_ammo_792x57_Ball", "rhs_B_762x54_Ball", "rhs_ammo_762x51_M80A1EPR_Ball",
"rhs_ammo_556x45_Mk262_Ball", "rhs_ammo_556x45_Mk318_Ball", "rhs_ammo_556x45_M855_Ball",
"rhs_ammo_556x45_M855A1_Ball", "rhs_ammo_792x33_SmE_ball", "rhs_ammo_46x30_JHP",
"rhs_ammo_9x19_JHP", "rhs_ammo_45ACP_MHP", "rhs_ammo_9x17", "rhs_ammo_8mm_mhp"]

bluForVehicles = []

opForWeapons = ["rhs_weap_Izh18", "rhs_weap_t5000", "rhs_weap_svdp", "rhs_weap_svdp_npz", "rhs_weap_m76",
"rhs_weap_m38", "rhs_weap_m38_rail", "rhs_weap_pkm", "rhs_weap_pkp", "rhs_weap_m84", "rhs_weap_asval",
"rhs_weap_asval_npz", "rhs_weap_dsr1", "rhs_weap_ak74mr", "rhs_weap_ak74m", "rhs_weap_vss",
"rhs_weap_vss_npz", "rhs_weap_ak74", "rhs_weap_aks74un", "rhs_weap_vhsd2", "rhs_weap_akmn",
"rhs_weap_savz58p_rail", "rhs_weap_savz58v_fold", "rhs_weap_ak103"]

opForAmmo = ["rhs_ammo_12g_slug", "rhs_ammo_12g_00buckshot", "B_338_Ball", "rhs_B_762x54_7N14_Ball",
"rhs_B_762x54_7N14_Ball", "rhs_ammo_792x57_Ball", "rhs_B_762x54_Ball", "rhs_B_762x54_Ball",
"rhs_B_762x54_Ball", "rhs_B_762x54_Ball", "rhs_B_762x54_Ball", "rhs_B_9x39_SP6",
"rhs_B_9x39_SP6", "rhs_ammo_762x51_M62_tracer", "rhs_B_545x39_7N22_Ball",
"rhs_B_545x39_7N10_Ball", "rhs_B_9x39_SP5", "rhs_B_9x39_SP5", "rhs_B_545x39_Ball",
"rhs_B_545x39_Ball", "rhs_ammo_556x45_M855A1_Ball", "rhs_B_762x39_Ball",
"rhs_B_762x39_Ball", "rhs_B_762x39_Ball", "rhs_B_762x39_Ball_89"]

opForVehicles = []

def csvCreator(filePath):
	with open(filePath + "\\config.cpp", "r", encoding="utf-8") as configFile, \
		 open("config.csv", "a", encoding="utf-8", newline='\n') as csvFile:
		lines = configFile.readlines()

		csvwriter = csv.writer(csvFile, delimiter=',')

		x = 0
		for line in lines:
			if line.startswith("	class"):
				strippedLine = line.replace("\n","")
				print("[" + cgreen + str(x).zfill(5) + cend + "]" + cgrey + strippedLine + cend)
				csvwriter.writerow([filePath, x, strippedLine])
			x += 1


#Clear config.csv/Create empty config.csv
open("config.csv", "w", encoding="utf-8").close()

for root, dirs, files in os.walk("..\\Mods"):
	for file in files:
		if file == 'config.cpp':
			print(cviolet2 + "-------------------------------" + \
				cend + (cgreen + cbold + root + cend) + cviolet2 + \
				"-------------------------------" + cend)
			csvCreator(root)
