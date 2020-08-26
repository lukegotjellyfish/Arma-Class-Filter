#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import re
import csv


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
	"rhs_mag_30Rnd_556x45_Mk262_Stanag",
	"rhs_mag_30Rnd_556x45_Mk318_Stanag",
	"rhs_mag_30Rnd_556x45_Mk318_Stanag",
	"rhs_mag_30Rnd_556x45_M855_Stanag",
	"rhs_mag_30Rnd_556x45_M855_Stanag",
	"rhsgref_30rnd_556x45_m21",
	"rhssaf_30rnd_556x45_EPR_G36",
	"rhs_200rnd_556x45_B_SAW",
	"rhs_200rnd_556x45_B_SAW",
	"rhsgref_8Rnd_762x63_M2B_M1rifle",
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
	"rhs_10Rnd_762x54mmR_7N14",
	"rhsgref_10Rnd_792x57_m76",
	"rhsgref_5Rnd_762x54_m38",
	"rhsgref_5Rnd_762x54_m38",
	"rhs_100Rnd_762x54mmR",
	"rhs_100Rnd_762x54mmR",
	"rhssaf_250Rnd_762x54R",
	"rhs_20rnd_9x39mm_SP6",
	"rhs_20rnd_9x39mm_SP6",
	"rhsusf_5Rnd_762x51_m62_Mag",
	"rhs_30Rnd_545x39_7N22_AK",
	"rhs_30Rnd_545x39_7N10_AK",
	"rhs_10rnd_9x39mm_SP5",
	"rhs_10rnd_9x39mm_SP5",
	"rhs_30Rnd_545x39_7N6_AK",
	"rhs_30Rnd_545x39_7N6M_AK",
	"rhsgref_30rnd_556x45_vhs2",
	"rhs_30Rnd_762x39mm",
	"rhs_30Rnd_762x39mm",
	"rhs_30Rnd_762x39mm",
	"rhs_30Rnd_762x39mm"
]

#Classes for launcher page
launchers = [
	"rhs_weap_rpg26",
	"rhs_weap_rpg7",
	"rhs_weap_rshg2",
	"rhs_weap_rpg7",
	"rhs_weap_rpg7",
	"rhs_weap_rpg7",
	"rhs_weap_m72a7",
	"rhs_weap_M136",
	"rhs_weap_maaws",
	"rhs_weap_M136_hedp",
	"rhs_weap_smaw",
	"rhs_weap_maaws",
	"rhs_weap_smaw",
	"rhs_weap_m32_Base_F",
	"rhs_weap_M320"
]
launcherAmmo = [
	"rhs_rpg26_rocket",
	"rhs_rpg7v2_pg7vl",
	"rhs_rshg2_rocket",
	"rhs_rpg7v2_pg7vr",
	"rhs_rpg7v2_og7v",
	"rhs_rpg7v2_tbg7v",
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

				if line.startswith("	class"):
					  #print("Class found " + line.replace("\n",""))
					#This regex search is required for my generated config.cpp files as
					# classes that end as empty are stripped to a single line with a comment
					# marking them as stripped to a single line.
					if line.count(":") == 1:
						_className = re.search("class [^\n:]*: ([^\n;]*)", line).group(1).replace("\n","")
					else:
						_className = re.search("class ([^\n;]*)", line).group(1).replace("\n","")

					if _className != className:
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
				elif line.replace("	","") == "};\n":
					skipEnd -= 1
					#If skips are 0, the end of the class has been reached
					if skipEnd == 0:
						onClass = False
				classBody.append(line.replace("\n",""))

				if onClass == False:
					# print(cviolet2 + "----------------------" + cend + \
					# 	cgreen + cbold + "Recursion ended" + cend + \
					# 	cviolet2 + "----------------------" + cend)
					return classBody
	return classBody


def OrderResult(result):
	#Create list for sorting of each class in returned class details
	orderedResult = []
	onClass = 0
	construct = []
	tabCount = ""
	for a in result:
		print(a)
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
	try:
		os.mkdir(fileName)
	except FileExistsError:
		pass

	for _class in itemList:
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
								file.write(_temp + "\n")
						except AttributeError:
							continue

		print(cviolet2 + "-------------------------------" + cend + \
		(cgreen + cbold + "Next class" + cend) + \
		cviolet2 + "-------------------------------" + cend)


#List of file contents
fileList = []
walkList = ["S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@ArmaBases", "..\\Mods"]
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
	"weaponLockDelay",
	"weaponLockSystem"
]
launcherAmmoAttributes = [
	"mass",
	"initSpeed",
	"count",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	""
]
OrderedClasses(bluForWeapons, "BluForWeapons", weaponAttributes)
OrderedClasses(opForWeapons, "OpForWeapons", weaponAttributes)
OrderedClasses(bluForMagazines, "BluForMagazines", ammoAttributes)
OrderedClasses(opForMagazines, "OpForMagazines", ammoAttributes)
OrderedClasses(launchers, "Launchers", launcherAttributes)
#OrderedClasses(launcherAmmo, "LauncherAmmo", launcherAmmoAttributes)
#OrderedClasses()
#OrderedClasses()
#OrderedClasses()
#OrderedClasses()