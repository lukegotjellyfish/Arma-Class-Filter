#!/usr/bin/env python
# -*- coding: utf-8 -*-

import os
import re
import errno

os.system("")

cred     = '\033[91m'
cgreen   = '\33[32m'
cgrey    = '\33[90m'
cviolet2 = '\33[95m'

cbold    = '\33[1m'

cend     = '\033[0m'

#\n^\s*$
attributeSkip = ["author","url","requiredVersion", "onLoad","dlc","category","editorSubcategory",
"vehicleClass","insideSoundCoef","unitInfoType","model","Icon","mapSize","transportMaxBackpacks","transportSoldier",
"destrType","crewExplosionProtection","camShakeCoef","dustFrontLeftPos","dustFrontRightPos","dustBackLeftPos","dustBackRightPos","tf_hasLRradio_api",
"selectionBrakeLights","selectionBackLights","driverAction","driverInAction","driverLeftHandAnimName","driverRightHandAnimName","cargoProxyIndexes",
"getInProxyOrder","getInAction","getOutAction","driverDoor","viewDriverInExternal","forceHideDriver","factions","textureList","cargoCompartments",
"visual","ammoExplosionEffect","boneName","center","boundary","suspForceAppPointOffset","tireForceAppPointOffset","tex", "picture","editorPreview",
"scope", "faction", "showNVGGunner","gunnerLeftHandAnimName","gunnerRightHandAnimName","body","gun","animationSourceBody","animationSourceGun",
"turretInfoType","discreteDistance","discreteDistanceInitIndex","gunnerForceOptics","gunnerOutOpticsShowCursor","gunnerAction","gunnerInAction",
"lodTurnedIn","lodTurnedOut","lodOpticsOut","canhideGunner","inGunnerMayFire","outGunnerMayFire","viewGunnerInExternal","gunnerGetInAction",
"gunnerGetOutAction","gunnerDoor","gunnerCompartments","castGunnerShadow","gunBeg","gunEnd","memoryPointGunnerOptics","memoryPointGunnerOutOptics",
"gunnerOpticsModel","gunnerOutOpticsModel","optics","disableSoundAttenuation","memoryPointsGetInGunner","memoryPointsGetInGunnerDir","crew",
"rhs_grip1_change","rhs_grip2_change","rhs_grip3_change","baseWeapon","displayName","inertia","dexterity", "distanceZoomMin", "distanceZoomMax",
"cameraDir", "weaponInfoType", "UiPicture", "magazineReloadSwitchPhase", "reloadAction", "maxRecoilSway", "swayDecaySpeed", "aimTransitionSpeed",
"minRange", "minRangeProbab", "midRange", "midRangeProbab", "maxRange", "maxRangeProbab", "showToPlayer", "aiRateOfFire", "aiRateOfFireDistance",
"requiredOpticType","aiDispersionCoefY", "aiDispersionCoefX","allowedSlots", "type", "descriptionShort","soundContinuous","soundBurst",
"deployedPivot","hasBipod","holsterScale","holsterOffset","RMBhint","priority","onHoverText","cartridge","suppressionRadiusBulletClose","visibleFire",
"audibleFire","maxLeadSpeed"]

multiAttributeSkip = ["requiredAddons[]", "controls[]","cargoAction[]","memoryPointsGetInCargo[]","memoryPointsGetInCargoDir[]","cargoDoors[]","textures[]",
"aggregateReflectors[]","mat[]","HiddenSelectionsTextures[]","soundServo[]", "modes[]","hiddenSelections[]","hiddenSelectionsTextures[]",
"handAnim[]","discreteDistanceCameraPoint[]", "caseless[]", "soundBullet[]", "sounds[]", "drySound[]","muzzles[]",
"bullet1[]","bullet2[]","bullet3[]","bullet4[]","bullet5[]","bullet6[]","bullet7[]","bullet8[]","bullet9[]","bullet10[]","bullet11[]","bullet12[]",
"reloadMagazineSound[]","changeFiremodeSound[]"]

classSkip = ["class CfgMovesBasic", "class RscInGameUI","class CfgMovesMaleSdr: CfgMovesBasic", "class ObjectTexture", "class DoorB", "class DoorL: DoorB",
"class DoorR: DoorB", "class TurnIn", "class CargoTurret_01: CargoTurret", "class AnimationSources", "class UserActions","class RHS_Engine_Smoke",
"class RHS_Engine_Fire: RHS_Engine_Smoke","class RHS_Engine_Sparks: RHS_Engine_Smoke", "class RHS_Engine_Sounds: RHS_Engine_Smoke",
"class RHS_Engine_Smoke_small1: RHS_Engine_Smoke","class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1", "class Reflectors", "class RenderTargets",
"class RHSUSF_EventHandlers","class TransportBackpacks","class TransportMagazines","class TransportItems","class TransportWeapons",
"class rhsusf_CGRCAT1A2_usmc_d: rhsusf_Cougar_base", "class DestructionEffects", "class CowsSlot", "class MuzzleSlot", "class PointerSlot",
"class UnderBarrelSlot", "class LinkedItems", "class GunParticles", "class StandardSound", "class Library","class close","class short",
"class medium","class far_optic1","class far_optic2","class OpticsModes"]

def newFile(root, file):
	with open(root + "\\\\" + file, "r", encoding="UTF-8") as f:
		lines = f.readlines()

	modDir = re.search("@[^\\\\]*", root).group(0)
	#print(root, file)
	folder = re.search("addons\\\\[^\\\\]*", root).group(0).replace("addons\\","")
	#print("Mod: " + modDir)
	print(cviolet2 + "-------------------------------" + cend + (cgreen + cbold + folder + cend) + cviolet2 + "-------------------------------" + cend)
	#input("Halt")
	pathToCreate = "Mods\\" + modDir + "\\" + folder + "\\"
	fileToCreate = pathToCreate + "\\" + file
	if not os.path.exists(os.path.dirname(pathToCreate)):
		try:
			os.makedirs(os.path.dirname(pathToCreate))
		except OSError as exc: # Guard against race condition
			if exc.errno != errno.EEXIST:
				raise

	#print(fileToCreate)
	#input("Halt")
	fileWriteList = []
	index = 0
	toSkip = 0
	for line in lines:
		if toSkip > 0:
			#print("Skipped [" + line.replace("\n","") + "]")
			toSkip -= 1
			index += 1
			continue
		lineStripped = line.replace("	","")

		#Found class line
		if lineStripped.startswith("class"):
			tabCount = line.count("	")
			i = 0
			for x in classSkip:
				if lineStripped.startswith(x):
					tabCount = line.count("	")
					while True:
						if line[-2] != ";":
							i += 1
							if (lines[index+i] == tabCount * "	" + "};\n"):
								break
						#Single-line class
						else:
							break
			toSkip = i
			if i > 0:
				index += 1
				continue

			fileWriteList.append(line)

		#Found single-line attribute
		elif (lineStripped.endswith(";\n") and lineStripped.startswith("}") == False):
			cont = False
			for x in attributeSkip:
				if lineStripped.startswith(x):
					cont = True
			if cont == True:
				index += 1
				continue
			fileWriteList.append(line)

		#Found multi-line attribute
		elif lineStripped.endswith("=\n"):
			tabCount = line.count("	")
			i = 0
			for x in multiAttributeSkip:
				if lineStripped.startswith(x):
					while True:
						if (lines[index+i] == tabCount * "	" + "};\n"):
							break
						i += 1
					toSkip = i
			if i > 0:
				index += 1
				continue
			fileWriteList.append(line)

		else:
			fileWriteList.append(line)

		index += 1

	with open(fileToCreate, "w", encoding="UTF-8") as writeToThisFile:
		x = 0
		toSkip = 0
		for item in fileWriteList:
			if toSkip > 0:
				toSkip -= 1
				x += 1
				continue

			tabCount = line.count("	")
	#do i need one of the if statements? can i combine the sub-if statement into the one above? maybe. This mess aesthetically fits the project though
			if item.replace("	","").startswith("class") and not item.endswith(";\n") and fileWriteList[x+2].replace("	","").endswith("};\n"):
				if fileWriteList[x+1].count("	") != tabCount:
					pass
				else:
					writeToThisFile.write(item.replace("\n","") + ";  //found empty after stripping\n")
					print(cred + "[EMPTY CLASS] " + cend + cgrey + item.replace("\n","") + cend)
					x += 1
					toSkip = 2
					continue
			writeToThisFile.write(item)
			x += 1

mods = ["S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSAFRF",
		"S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSUSAF",
		"S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSGREF",
		"S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSSAF"]

for x in mods:
	for root, dirs, files in os.walk(x):
		for file in files:
			if file == 'config.cpp' or file == "physx_config.hpp":
				newFile(root, file)


#\n^\s*$  blanknewline





















#Tried using MySQL because why and why not
#There is literally no reason for me trying this, it would require faux sub-tables,
 #something I didn't even try although now I think about it - it sounds really good

#Database for each 
#Parent mod: table

"""
	modLine = re.search("@.*", filePath).group(0).split("\\")
	modName = modLine[0].replace("@","").lower()
	addonName = modLine[2].lower()

	cursor.execute("DROP database IF EXISTS " + modName)
	cursor.execute("CREATE DATABASE " + modName)

	mydb = mysql.connector.connect(
		host="localhost",
		user="root",
		password="rootpass",
		database=modName
	)
	cursor = mydb.cursor()

	cursor.execute("DROP TABLE IF EXISTS " + addonName)
	cursor.execute("CREATE TABLE " + addonName + " (id INT AUTO_INCREMENT PRIMARY KEY, line VARCHAR(5000), type VARCHAR(10))")

	for item in classList:
		sql = "INSERT INTO " + addonName + " (id, line, type) VALUES (%s, %s, %s)"
		val = (item, lines[item], "class")
		cursor.execute(sql, val)

	for item in attributeList:
		print(item)
		try:
			if item[0] == -1:
				for x in item:
					if x == -1: continue
					sql = "INSERT INTO " + addonName + " (id, line, type) VALUES (%s, %s, %s)"
					val = (x, lines[x], "attribute")
					cursor.execute(sql, val)
				continue
		except TypeError:
			pass
		sql = "INSERT INTO " + addonName + " (id, line, type) VALUES (%s, %s, %s)"
		val = (item, lines[item], "attribute")
		cursor.execute(sql, val)
	mydb.commit()
"""