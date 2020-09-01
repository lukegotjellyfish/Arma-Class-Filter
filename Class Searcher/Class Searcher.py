#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import re
import csv
from pathlib import Path

"""
TODO:
- create dict/list for classes to elimated repeated searches
"""


#Console setup for coloured output
os.system("")

#cmd colours
cred     = '\033[91m'
cgreen   = '\33[32m'
cgrey    = '\33[90m'
cviolet2 = '\33[95m'

#cmd styles
cbold    = '\33[1m'

#cmd endstyle
cend     = '\033[0m'


#Classes for weapons pages
bluForWeapons = [
	"rhs_weap_M590_5RD",
	"rhs_weap_M107",
	"rhs_weap_XM2010",
	"rhs_weap_m1garand_sa43",
	"rhs_weap_m14ebrri",
	"rhs_weap_sr25",
	"rhs_weap_l1a1_base",
	"rhs_weap_SCARH_STD",
	"rhs_weap_m40a5",
	"rhs_weap_m24sws",
	"rhs_weap_kar98k",
	"rhs_weap_mg42_base",
	"rhs_weap_mosin_sbr",
	"rhs_weap_m240G",
	"rhs_weap_m4a1_blockII",
	"rhs_weap_mk18",
	"rhs_weap_m27iar",
	"rhs_weap_hk416d145",
	"rhs_weap_m16a4",
	"rhs_weap_m4a1",
	"rhs_weap_m21a",
	"rhs_weap_g36kv",
	"rhs_weap_m249",
	"rhs_weap_m249_pip",
	"rhs_weap_MP44",
	"rhsusf_weap_MP7A2",
	"rhsusf_weap_m9",
	"rhsusf_weap_glock17g4",
	"rhs_weap_m3a1_specops",
	"rhsusf_weap_m1911a1",
	"rhs_weap_savz61",
	"rhs_weap_type94_new"
]
bluForMagazines = [
	"rhsusf_5Rnd_00Buck",
	"rhsusf_5Rnd_Slug",
	"rhsusf_mag_10Rnd_STD_50BMG_M33",
	"rhsusf_mag_10Rnd_STD_50BMG_mk211",
	"rhsusf_5Rnd_300winmag_xm2010",
	"rhsgref_8Rnd_762x63_M2B_M1rifle",
	"rhsusf_20Rnd_762x51_m118_special_Mag",
	"rhs_mag_20Rnd_762x51_m80_fnfal",
	"rhs_mag_20Rnd_SCAR_762x51_m80_ball",
	"rhsusf_10Rnd_762x51_m993_Mag",
	"rhsusf_5Rnd_762x51_m993_Mag",
	"rhsgref_5Rnd_792x57_kar98k",
	"rhsgref_50Rnd_792x57_SmE_drum",
	"rhsgref_5Rnd_762x54_m38",
	"rhsusf_100Rnd_762x51_m80a1epr",
	"rhs_mag_30Rnd_556x45_Mk262_Stanag",
	"rhs_mag_30Rnd_556x45_Mk318_Stanag",
	"rhs_mag_30Rnd_556x45_M855_Stanag",
	"rhsgref_30rnd_556x45_m21",
	"rhssaf_30rnd_556x45_EPR_G36",
	"rhs_200rnd_556x45_B_SAW",
	"rhsusf_mag_40Rnd_46x30_JHP",
	"rhsusf_mag_15Rnd_9x19_JHP",
	"rhsusf_mag_17Rnd_9x19_JHP",
	"rhsgref_30rnd_1143x23_M1911B_SMG",
	"rhsusf_mag_7x45acp_MHP",
	"rhsgref_20rnd_765x17_vz61",
	"rhs_mag_6x8mm_mhp"
]
opForWeapons = [
	"rhs_weap_Izh18",
	"rhs_weap_t5000",
	"rhs_weap_svdp",
	"rhs_weap_svdp_npz",
	"rhs_weap_m76",
	"rhs_weap_m38",
	"rhs_weap_m38_rail",
	"rhs_weap_pkm",
	"rhs_weap_pkp",
	"rhs_weap_m84",
	"rhs_weap_asval",
	"rhs_weap_asval_npz",
	"rhs_weap_dsr1",
	"rhs_weap_ak74mr",
	"rhs_weap_ak74m",
	"rhs_weap_vss",
	"rhs_weap_vss_npz",
	"rhs_weap_ak74",
	"rhs_weap_aks74un",
	"rhs_weap_vhsd2",
	"rhs_weap_akmn",
	"rhs_weap_savz58p_rail",
	"rhs_weap_savz58v_fold",
	"rhs_weap_ak103"
]
opForMagazines = [
	"rhsgref_1Rnd_00Buck",
	"rhsgref_1Rnd_Slug",
	"rhs_5Rnd_338lapua_t5000",
	"rhs_10Rnd_762x54mmR_7N14",
	"rhsgref_10Rnd_792x57_m76",
	"rhsgref_5Rnd_762x54_m38",
	"rhs_100Rnd_762x54mmR",
	"rhssaf_250Rnd_762x54R",
	"rhs_20rnd_9x39mm_SP6",
	"rhsusf_5Rnd_762x51_m62_Mag",
	"rhs_30Rnd_545x39_7N22_AK",
	"rhs_30Rnd_545x39_7N10_AK",
	"rhs_10rnd_9x39mm_SP5",
	"rhs_30Rnd_545x39_7N6_AK",
	"rhs_30Rnd_545x39_7N6M_AK",
	"rhsgref_30rnd_556x45_vhs2",
	"rhs_30Rnd_762x39mm",
	"rhs_30Rnd_762x39mm"
]

#Classes for launcher page
launchers = [
	"rhs_weap_rpg26",
	"rhs_weap_rshg2",
	"rhs_weap_m72a7",
	"rhs_weap_M136",
	"rhs_weap_maaws",
	"rhs_weap_M136_hedp",
	"rhs_weap_smaw",
	"rhs_weap_m32_Base_F",
	"rhs_weap_M320"
]
guidedLaunchers = [
	"rhs_weap_igla",
	"rhs_weap_fim92",
	"rhs_weap_fgm148"
]
guidedLauncherAmmo = [
	"rhs_mag_9k38_rocket",
	"rhs_fim92_mag",
	"rhs_fgm148_magazine_AT"
]
launcherAmmo = [
	"rhs_rpg26_mag",
	"rhs_rpg7_PG7VL_mag",
	"rhs_rshg2_mag",
	"rhs_rpg7_PG7VR_mag",
	"rhs_rpg7_OG7V_mag",
	"rhs_rpg7_TBG7V_mag",
	"rhs_m72a7_mag",
	"rhs_m136_mag",
	"rhs_mag_maaws_HEAT",
	"rhs_m136_hedp_mag",
	"rhs_mag_smaw_HEAA",
	"rhs_mag_maaws_HE",
	"rhs_mag_smaw_HEDP",
	"rhsusf_mag_6Rnd_M441_HE",
	"rhs_mag_M441_HE"
]
launcherPenetrators = [
	"rhs_ammo_M_fgm148_AT_penetrator",
	"rhs_ammo_M136_hedp_penetrator",
	"rhs_ammo_M136_penetrator",
	"rhs_ammo_maaws_HEAT_penetrator",
	"rhs_ammo_smaw_HEAA_penetrator",
	"rhs_ammo_smaw_HEDP_penetrator",
	"rhs_ammo_thermobaric_wave",
	"rhs_rpg26_penetrator",
	"rhs_rpg7v2_pg7vl_penetrator",
	"rhs_rpg7v2_pg7vr_penetrator"
]

#Classes for vehicles
sharedVehicles = [
	"A3_Soft_F_Quadbike_01",
	"A3_Soft_F_Gamma_SUV_01",
	"A3_Soft_F_Gamma_Hatchback_01",
	"A3_Soft_F_Kart_Kart_01"
]
bluForVehicles       = [
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
]
bluForVehicleWeapons = [
	"RHS_M2",
	"RHS_M2_Abrams_Gunner",
	"RHS_M2_CROWS_M153",
	"RHS_M2_M1117",
	"RHS_MK19",
	"rhs_weap_2A14",
	"rhs_weap_m240_abrams_coax",
	"rhs_weap_m240_bradley_coax",
	"RHS_weap_M242BC",
	"rhs_weap_m256",
	"Rhs_weap_TOW_Launcher",
	"rhs_weap_tow_launcher_static",
	"rhsusf_weap_M257_8",
	"rhsusf_weap_M259",
	"Rhs_weap_stinger_Launcher"
]
bluForVWeapMagazines = [
	"RHS_48Rnd_40mm_MK19_M1001",
	"RHS_48Rnd_40mm_MK19_M430A1",
	"RHS_96Rnd_40mm_MK19_M430A1",
	"rhs_ammo_TOW2_BB",
	"rhs_ammo_TOW2A_AT",
	"rhs_ammo_TOW2B_AT",
	"rhs_mag_100rnd_127x99_mag_Tracer_Red",
	"rhs_mag_1100Rnd_762x51_M240",
	"rhs_mag_200rnd_127x99_mag_Tracer_Red",
	"rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
	"rhs_mag_230Rnd_25mm_M242_HEI",
	"rhs_mag_2Rnd_TOW2A",
	"rhs_mag_2Rnd_TOW2B_AERO",
	"rhs_mag_2Rnd_TOW2BB",
	"rhs_mag_400rnd_127x99_mag_Tracer_Red",
	"Rhs_mag_4Rnd_stinger",
	"rhs_mag_70Rnd_25mm_M242_APFSDS",
	"rhs_mag_762x51_M240_1200",
	"RHS_mag_AZP23_100",
	"rhs_mag_M829A1",
	"rhs_mag_M830A1",
	"rhsusf_mag_L8A3_8"
]
bluForVWeapPenetrators = []

opForVehicles        = [
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
opForVehicleWeapons  = [
	"rhs_weap_2A14",
	"rhs_weap_2a28",
	"rhs_weap_2a42",
	"rhs_weap_2a46_2",
	"rhs_weap_2a46m_4",
	"rhs_weap_2a46m_5",
	"rhs_weap_2a46m",
	"rhs_weap_2a70",
	"rhs_weap_2a72_btr",
	"rhs_weap_2a72",
	"rhs_weap_2a75",
	"rhs_weap_902a",
	"rhs_weap_902b",
	"rhs_weap_9k11",
	"rhs_weap_9k133",
	"rhs_weap_9m113",
	"rhs_weap_9P148",
	"RHS_weap_AGS30",
	"rhs_weap_DSHKM",
	"rhs_weap_kpvt",
	"rhs_weap_nsvt_t72",
	"rhs_weap_pkt_bmd_coax",
	"rhs_weap_pkt_btr",
	"rhs_weap_pkt_btr80a",
	"rhs_weap_pkt",
	"rhs_weap_PL1",
	"rhs_weap_s8",
	"rhs_weap_SPG9"
]
opForVWeapMagazines  = [
	"rhs_mag_127x108mm_50",
	"rhs_mag_145x115mm_50",
	"rhs_mag_3bk18m_6",
	"rhs_mag_3bk18m_8",
	"rhs_mag_3bk29_8",
	"rhs_mag_3bk31_3",
	"rhs_mag_3bk31_8",
	"rhs_mag_3bm22_14",
	"rhs_mag_3bm42_7",
	"rhs_mag_3bm46_10",
	"rhs_mag_3bm46_8",
	"rhs_mag_3d17_12",
	"rhs_mag_3d17_6",
	"rhs_mag_3of26_5",
	"rhs_mag_3of26_6",
	"rhs_mag_3of26_7",
	"rhs_mag_3ubr11_150",
	"rhs_mag_3ubr11_195",
	"rhs_mag_3ubr11_227",
	"rhs_mag_3ubr6_195",
	"rhs_mag_3ubr8_120",
	"rhs_mag_3ubr8_160",
	"rhs_mag_3UOF17_22",
	"rhs_mag_3UOF191_22",
	"rhs_mag_3uof8_150",
	"rhs_mag_3uof8_180",
	"rhs_mag_3uof8_237",
	"rhs_mag_3uof8_305",
	"rhs_mag_3uof8_340",
	"rhs_mag_762x54mm_2000",
	"rhs_mag_762x54mm_250",
	"rhs_mag_9m113_5",
	"rhs_mag_9m113M",
	"rhs_mag_9m117_8",
	"rhs_mag_9m117m_8",
	"rhs_mag_9m117m1_8",
	"rhs_mag_9m119_4",
	"rhs_mag_9m119rx_6",
	"rhs_mag_9m133_2",
	"rhs_mag_9m14m",
	"RHS_mag_AZP23_100",
	"rhs_mag_AZP23_2000",
	"rhs_mag_og15v_20",
	"rhs_mag_OG9V",
	"rhs_mag_pg15v_20",
	"rhs_mag_PG9V",
	"rhs_mag_s8_12",
	"RHS_mag_VOG30_30"
]
opForVWeapPenetrators = [
]

def findClass(className):
	print("Searching files for class [" + className + "]")
	skipEnd = 0
	onClass = False
	classBody = []
	for configFile in fileList:
		for line in configFile:
			#Classes we want are either "\tclass x\n" or "\tclass x: y\n"
			if line == "	class " + className + "\n" \
				or line.startswith("	class " + className + ":") \
					or onClass == True:

				onClass = True
				# print(cred + line.replace("\n","") + cend)

				if line.startswith("	class " + className + ":"):
					  #print("Class found " + line.replace("\n",""))
					#This regex search is required for my generated config.cpp files as
					# classes that end as empty are stripped to a single line with a comment
					# marking them as stripped to a single line.
					_className = re.search("class [^\n:]*: ([^\n;]*)", line).group(1).replace("\n","")

					# print(cgreen + line.replace("\n","") + cend)

					#print(cred + "New findClass(_className[" + _className + "] | className[" + className + "])" + cend)
					#print("Inherit added on end of array: " + str(findClass(_className)))
					foundClass = findClass(_className)

					if len(foundClass) == 1:
						for returnedList in foundClass:
							for returnedItem in returnedList:
								classBody.append(returnedItem)
					else:
						for returnedItem in foundClass:
							classBody.append(returnedItem)

				#Add ammo stats taken from magazine
				elif line.replace("	","").startswith("ammo=") and line.replace("	", "") != 'ammo="";\n':
					ammoClass = re.search('ammo="([^"]*)";', line).group(1)

					foundClass = findClass(ammoClass)
					if len(foundClass) == 1:
						for returnedList in foundClass:
							for returnedItem in returnedList:
								classBody.append(returnedItem)
					else:
						for returnedItem in foundClass:
							classBody.append(returnedItem)

				#If opening brace found, add a skip to avoid ending on next brace
				#For the length o fthe class, skip = 1 as the class opens with a brace
				elif line.replace("	","") == "{\n":
					skipEnd += 1
				#The next ending brace was found, discount skip
				elif line.replace("	","") == "};\n" or line.replace("	","") == "},\n":
					skipEnd -= 1
					#If skips are 0, the end of the class has been reached
					if skipEnd == 0:
						onClass = False
				classBody.append(line.replace("\n",""))

				if onClass == False:
					print(cviolet2 + "----------------------" + cend + \
						cgreen + cbold + "Recursion ended" + cend + \
						cviolet2 + "----------------------" + cend)
					return classBody
	return classBody

def OrderResult(result):
	#Create list for sorting of each class in returned class details
	orderedResult = []
	onClass = 0
	construct = []
	tabCount = ""
	for a in result:
		if a.count("	class") > 0 or onClass > 0:
			tabCount = a.count("	")
			onClass += 1
			construct.append(a.replace("	",""))
		if a.count("	};") > 0 and a.count("	") == tabCount:
			onClass -= 1
			orderedResult.append(construct)
			construct = []

	reversedList = list(reversed(orderedResult))
	fixedReversedList = [x for x in reversedList if x]
	return fixedReversedList

def OrderedClasses(itemList, fileName, includeList, findMagazines=False):

	Path(fileName).mkdir(parents=True, exist_ok=True)

	for _class in itemList:

		writeArray = []
		for wantedAttribute in includeList:
			writeArray.append("-----")

		result = findClass(_class)
		orderedResult = OrderResult(result)

		with open(fileName + "\\" + _class + ".cpp", "w", encoding="utf-8") as file:
			file.write(_class + "\n")
			addedForClass = []
			for classBody in orderedResult:
				for attribute in includeList:
					magazinesFlag = False
					for item in classBody:
						if findMagazines == True and magazinesFlag == True:
							if item.endswith("};"):
								file.write("};\n")
								magazinesFlag = False
							elif item.endswith("{"):
								pass
							else:
								file.write("	" + item.replace("	","") + "\n")
							continue

						if findMagazines == True and item.replace("	","").startswith("magazines[]="):
							addedForClass.append("magazines")
							file.write("magazines[] = {\n")
							magazinesFlag = True

						try:
							_temp = re.search("(" + attribute + "=[^\n]*)", item).group(1)
							if attribute not in addedForClass:
								addedForClass.append(attribute)
								x = 0
								for wantedAttribute in includeList:
									if wantedAttribute == attribute:
										writeArray[x] = _temp
									x += 1

						except AttributeError:
							continue
			for writeAttribute in writeArray:
				file.write(writeAttribute + "\n")

		print(cviolet2 + "-------------------------------" + cend + \
		(cgreen + cbold + "Next class" + cend) + \
		cviolet2 + "-------------------------------" + cend)


#List of file contents
fileList = []
walkList = ["..\\Mods", "S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@ArmaBases"]
for walk in walkList:
	for root, dirs, files in os.walk(walk):
		for file in files:
			if file == 'config.cpp':
				with open(root + "\\" + file, "r", encoding="utf-8") as f:
					fileList.append(f.readlines())
					print(cviolet2 + "-------------------------------" + \
					cend + (cgreen + cbold + root + cend) + cviolet2 + \
					"-------------------------------" + cend)

weaponAttributes = [
	"dispersion",
	"mass",
	"maxZeroing",
	"recoil",
	"reloadTime"
]
ammoAttributes = [
	"airFriction",
	"caliber",
	"count",
	"deflecting",
	"explosive",
	"hit",
	"indirectHit",
	"indirectHitRange",
	"initSpeed",
	"timeToLive",
	"typicalSpeed"
]
launcherAttributes = [
	"canLock",
	"cmImmunity",
	"dispersion",
	"lockAcquire",
	"mass",
	"maxZeroing",
	"recoil",
	"reloadAction",
	"magazineReloadTime",
	"weaponLockDelay",
	"weaponLockSystem"
]
launcherAmmoAttributes = [
	"airFriction",
	"caliber",
	"cmImmunity",
	"count",
	"deleteParentWhenTriggered",
	"explosive",
	"hit",
	"indirectHit",
	"indirectHitRange",
	"initSpeed",
	"maneuvrability",
	"manualControl",
	"mass",
	"maxControlRange",
	"maxSpeed",
	"missileKeepLockedCone",
	"missileLockCone",
	"missileLockMaxDistance",
	"missileLockMaxSpeed",
	"missileLockMinDistance",
	"sideAirFriction",
	"submunitionAmmo",
	"submunitionConeAngle",
	"submunitionInitSpeed",
	"submunitionParentSpeedCoef",
	"thrust",
	"thrustTime",
	"timeToLive",
	"trackLead",
	"trackOversteer",
	"triggerOnImpact",
	"typicalSpeed",
	"warheadName"
]
vehicleAttributes = [
	"maxSpeed", #Maximum speed able to be achieved under engine power alone
	"turnCoef", #Maximum steering angle
	"terrainCoef", #Higher = low friction on rough ground slows vehicle more
	"enginePower", #Power of engine in kilowatts
	"peakTorque", #Maximum torque from engine in newton metres
	"LockDetectionSystem", #specifices what locks can be detected https://community.bistudio.com/wiki/Arma_3_Targeting_config_reference#lockDetectionSystem
	"incomingMissileDetectionSystem", #Specifies what guided munitions can be detected https://community.bistudio.com/wiki/Arma_3_Targeting_config_reference#incomingMissileDetectionSystem
	"minElev", #Max angle gun can be depressed
	"maxElev", #Max angle gun can be elevated
	"minturn", #Max negative angle wheel can be turned
	"maxturn", #Max angle wheel can be turned
	"discreteDistance" #Zeroing presets (pageup-pagedown)
]
vehicleWeaponAttributes = [
	"canLock",
	"cmImmunity",
	"dispersion",
	"lockAcquire",
	"magazineReloadTime",
	"mass",
	"maxZeroing",
	"recoil",
	"reloadAction",
	"reloadTime",
	"submunitionAmmo",
	"weaponLockDelay",
	"weaponLockSystem"
]


#Ordered Classes
OrderedClasses(bluForWeapons         , "BluFor//BluForWeapons"         , weaponAttributes       )
OrderedClasses(bluForMagazines       , "BluFor//BluForMagazines"       , ammoAttributes         )

OrderedClasses(opForWeapons          , "OpFor//OpForWeapons"          , weaponAttributes       )
OrderedClasses(opForMagazines        , "OpFor//OpForMagazines"        , ammoAttributes         )

OrderedClasses(launchers             , "Launchers//Launchers"             , launcherAttributes     )
OrderedClasses(guidedLaunchers       , "Launchers//GuidedLaunchers"       , launcherAttributes     )
OrderedClasses(launcherAmmo          , "Launchers//LauncherAmmo"          , launcherAmmoAttributes )
OrderedClasses(launcherPenetrators   , "Launchers//Penetrators"           , launcherAmmoAttributes )
OrderedClasses(guidedLauncherAmmo    , "Launchers//GuidedLauncherAmmo"    , launcherAmmoAttributes )

# OrderedClasses(bluForVehicles        , "BluFor//BluForVehicles"        , vehicleAttributes      )
OrderedClasses(bluForVehicleWeapons  , "BluFor//BluForVehicleWeapons"  , vehicleWeaponAttributes)
OrderedClasses(bluForVWeapMagazines  , "BluFor//BluForVWeapMagazines"  , launcherAmmoAttributes )
#OrderedClasses(bluForVWeapPenetrators, "BluFor//BluForVWeapPenetrators", launcherAmmoAttributes )

# OrderedClasses(opForVehicles         , "OpFor//OpForVehicles"         , vehicleAttributes      )
OrderedClasses(opForVehicleWeapons   , "OpFor//OpForVehicleWeapons"   , vehicleWeaponAttributes)
OrderedClasses(opForVWeapMagazines   , "OpFor//OpForVWeapMagazines"   , launcherAmmoAttributes )
#OrderedClasses(opForVWeapPenetrators , "OpFor//OpForVWeapPenetrators" , launcherAmmoAttributes )
