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
bluForWeapons = ["rhs_weap_M590_5RD", "rhs_weap_M107", "rhs_weap_XM2010",
"rhs_weap_m1garand_sa43", "rhs_weap_m14ebrri", "rhs_weap_sr25", "rhs_weap_l1a1_base",
"rhs_weap_SCARH_STD", "rhs_weap_m40a5", "rhs_weap_m24sws", "rhs_weap_kar98k",
"rhs_weap_mg42_base", "rhs_weap_mosin_sbr", "rhs_weap_m240G", "rhs_weap_m4a1_blockII",
"rhs_weap_mk18", "rhs_weap_m27iar", "rhs_weap_hk416d145", "rhs_weap_m16a4",
"rhs_weap_m4a1", "rhs_weap_m21a", "rhs_weap_g36kv", "rhs_weap_m249", "rhs_weap_m249_pip",
"rhs_weap_MP44", "rhsusf_weap_MP7A2", "rhsusf_weap_m9", "rhsusf_weap_glock17g4",
"rhs_weap_m3a1_specops", "rhsusf_weap_m1911a1", "rhs_weap_savz61", "rhs_weap_type94_new"]

bluForMagazines = [
"rhsusf_mag_10Rnd_STD_50BMG_M33",
"rhsusf_5Rnd_300winmag_xm2010",
"rhsgref_8Rnd_762x63_M2B_M1rifle",
"rhs_mag_20Rnd_SCAR_762x51_m80_ball"
]

opForWeapons = ["rhs_weap_Izh18", "rhs_weap_t5000", "rhs_weap_svdp", "rhs_weap_svdp_npz", "rhs_weap_m76",
"rhs_weap_m38", "rhs_weap_m38_rail", "rhs_weap_pkm", "rhs_weap_pkp", "rhs_weap_m84", "rhs_weap_asval",
"rhs_weap_asval_npz", "rhs_weap_dsr1", "rhs_weap_ak74mr", "rhs_weap_ak74m", "rhs_weap_vss",
"rhs_weap_vss_npz", "rhs_weap_ak74", "rhs_weap_aks74un", "rhs_weap_vhsd2", "rhs_weap_akmn",
"rhs_weap_savz58p_rail", "rhs_weap_savz58v_fold", "rhs_weap_ak103"]

opForMagazines = [
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
"",
"",
"",
""
]

#Classes for launcher page
bluForLaunchers = []
bluForLauncherAmmo = []
opForLaunchers = []
opForLauncherAmo = []

#Classes for vehicles
bluForVehicles = []
opForVehicles = []


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
					if line.count(":") == 1 :
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

				"""
				Add a function here to add a description of attribute to EOL
				"""
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
	onClass = False
	construct = []
	for a in result:
		if a.replace("	","").startswith("class") or onClass == True:
			tabCount = a.count("	")
			onClass = True
			construct.append(a)
		if a == tabCount * "	" + "};":
			onClass = False
			orderedResult.append(construct)
			construct = []

	#Empty lists are being added to the list on second run, need to fix this at the core
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
		className = re.search("class ([^:]*):", orderedResult[0][0]).group(1)

		with open(fileName + "\\" + className + ".cpp", "w", encoding="utf-8") as file:
			file.write(className + "\n")
			addedForClass = []
			for classBody in orderedResult:
				#print(classBody)
				#del classBody[-1] #last item is a duplicate }; and I have no idea why

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
								print(item.replace('"',"").replace(",",""))
								file.write("	" + item.replace("	","") + "\n")
							continue

						if findMagazines == True and item.replace("	","").startswith("magazines[]="):
							addedForClass.append("magazines")
							file.write("magazines[] = {\n")
							magazinesFlag = True


						try:
							_temp = re.search("(" + attribute + "=[^\n]*)", item).group(1)
							_attribute = re.search("([^=]*)=",_temp).group(1)
							if _attribute not in addedForClass:
								addedForClass.append(_attribute)
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

weaponAttributes = ["dispersion", "mass", "maxZeroing", "recoil", "reloadTime"]
ammoAttributes = ["hit", "count", "indirectHit","indirectHitRange","timeToLive","explosive", "deflecting", "caliber", "typicalSpeed", "airFriction", "initSpeed"]
#OrderedClasses(bluForWeapons, "BluForWeapons", weaponAttributes, findMagazines=True)
#OrderedClasses(opForWeapons, "OpForWeapons", weaponAttributes, findMagazines=True)
OrderedClasses(bluForMagazines, "BluForMagazines", ammoAttributes)

#OrderedClasses()
#OrderedClasses()
#OrderedClasses()
#OrderedClasses()