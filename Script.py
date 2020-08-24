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

#Regex strip to multi-line attribute and class names
#([^\[]*\[\])=\n[^\{]*\{[^\}]*\};\n

#\n^\s*$
attributeSkip = [
	"AIAmmoUsageFlags",
	"aiDispersionCoefX",
	"aiDispersionCoefY",
	"aimTransitionSpeed",
	"aiRateOfFire",
	"aiRateOfFireDistance",
	"allowedSlots",
	'ammo="";',
	"ammoExplosionEffect",
	"animationSourceBody",
	"animationSourceGun",
	"audibleFire",
	"author",
	"baseWeapon",
	"body",
	"boneName",
	"boundary",
	"cameraDir",
	"camShakeCoef",
	"canhideGunner",
	"cargoCompartments",
	"cargoProxyIndexes",
	"cartridge",
	"castGunnerShadow",
	"category",
	"center",
	"CraterEffects",
	"crew",
	"crewExplosionProtection",
	"deployedPivot",
	"descriptionShort",
	"destrType",
	"dexterity",
	"disableSoundAttenuation",
	"discreteDistance",
	"discretedistance[]",
	"discreteDistanceInitIndex",
	"distanceZoomMax",
	"distanceZoomMin",
	"dlc",
	"driverAction",
	"driverDoor",
	"driverInAction",
	"driverLeftHandAnimName",
	"driverRightHandAnimName",
	"dustBackLeftPos",
	"dustBackRightPos",
	"dustFrontLeftPos",
	"dustFrontRightPos",
	"editorPreview",
	"editorSubcategory",
	"effectFly",
	"effectsMissile",
	"effectsMissileInit",
	"explosionEffects",
	"faction",
	"factions",
	"forceHideDriver",
	"getInAction",
	"getInProxyOrder",
	"getOutAction",
	"gun",
	"gunBeg",
	"gunEnd",
	"gunnerAction",
	"gunnerCompartments",
	"gunnerDoor",
	"gunnerForceOptics",
	"gunnerGetInAction",
	"gunnerGetOutAction",
	"gunnerInAction",
	"gunnerLeftHandAnimName",
	"gunnerOpticsModel",
	"gunnerOutOpticsModel",
	"gunnerOutOpticsShowCursor",
	"gunnerRightHandAnimName",
	"hasBipod",
	"holsterOffset",
	"holsterScale",
	"Icon",
	"inertia",
	"inGunnerMayFire",
	"insideSoundCoef",
	"lodOpticsOut",
	"lodTurnedIn",
	"lodTurnedOut",
	"magazineReloadSwitchPhase",
	"mapSize",
	"maxLeadSpeed",
	"maxRange",
	"maxRangeProbab",
	"maxRecoilSway",
	"memoryPointGunnerOptics",
	"memoryPointGunnerOutOptics",
	"memoryPointsGetInGunner",
	"memoryPointsGetInGunnerDir",
	"midRange",
	"midRangeProbab",
	"minRange",
	"minRangeProbab",
	"model",
	"onHoverText",
	"onLoad",
	"optics",
	"outGunnerMayFire",
	"picture",
	"priority",
	"reloadAction",
	"requiredOpticType",
	"requiredVersion",
	"rhs_cartridge",
	"rhs_grip1_change",
	"rhs_grip2_change",
	"rhs_grip3_change",
	"RMBhint",
	"scope",
	"selectionBackLights",
	"selectionBrakeLights",
	"showNVGGunner",
	"showToPlayer",
	"soundBurst",
	"soundContinuous",
	"suppressionRadiusBulletClose",
	"suspForceAppPointOffset",
	"swayDecaySpeed",
	"tex",
	"textureList",
	"tf_hasLRradio_api",
	"tireForceAppPointOffset",
	"transportMaxBackpacks",
	"transportSoldier",
	"turretInfoType",
	"type",
	"UiPicture",
	"unitInfoType",
	"url",
	"vehicleClass",
	"viewDriverInExternal",
	"viewGunnerInExternal",
	"visibleFire",
	"visual",
	"weaponInfoType",
	"whistleDist",
	"whistleOnFire"
]
multiAttributeSkip = [
	"aggregateReflectors[]",
	"armorCrash0[]",
	"ArmorCrash0[]",
	"ArmorCrash1[]",
	"ArmorCrash2[]",
	"ArmorCrash3[]",
	"buildCrash0[]",
	"buildCrash1[]",
	"buildCrash2[]",
	"buildCrash3[]",
	"bullet1[]",
	"bullet10[]",
	"bullet11[]",
	"bullet12[]",
	"bullet2[]",
	"bullet3[]",
	"bullet4[]",
	"bullet5[]",
	"bullet6[]",
	"bullet7[]",
	"bullet8[]",
	"bullet9[]",
	"bulletFly[]",
	"bulletFly1[]",
	"bulletFly10[]",
	"bulletFly11[]",
	"bulletFly12[]",
	"bulletFly2[]",
	"bulletFly3[]",
	"bulletFly4[]",
	"bulletFly5[]",
	"bulletFly6[]",
	"bulletFly7[]",
	"bulletFly8[]",
	"bulletFly9[]",
	"cabinOpenSound[]",
	"cargoAction[]",
	"cargoDoors[]",
	"caseless[]",
	"changeFiremodeSound[]",
	"class CamShakeExplode",
	"class CamShakeFire",
	"class CamShakeHit",
	"class CamShakePlayerFire",
	"class HitEffects",
	"class SuperSonicCrack",
	"controls[]",
	"Crash0[]",
	"discreteDistanceCameraPoint[]",
	"drySound[]",
	"handAnim[]",
	"hiddenSelections[]",
	"hiddenSelectionsTextures[]",
	"HiddenSelectionsTextures[]",
	"hitArmor[]",
	"hitArmorInt[]",
	"hitBell[]",
	"hitBuilding[]",
	"hitConcrete[]",
	"hitDefault[]",
	"hitFoliage[]",
	"hitGlass[]",
	"hitGlassArmored[]",
	"hitGroundHard[]",
	"hitGroundSoft[]",
	"hitMan[]",
	"hitMetal[]",
	"hitMetalInt[]",
	"hitMetalplate[]",
	"hitPlastic[]",
	"hitRubber[]",
	"hitTyre[]",
	"hitWater[]",
	"hitWood[]",
	"impactArmor[]",
	"impactBuilding[]",
	"impactConcrete[]",
	"impactDefault[]",
	"impactFoliage[]",
	"impactGlass[]",
	"impactGlassArmored[]",
	"impactGroundHard[]",
	"impactGroundSoft[]",
	"impactIron[]",
	"impactMan[]",
	"impactMetal[]",
	"impactMetalplate[]",
	"impactPlastic[]",
	"impactRubber[]",
	"impactTyre[]",
	"impactWater[]",
	"impactWood[]",
	"mat[]",
	"magazineWell[]",
	"memoryPointsGetInCargo[]",
	"memoryPointsGetInCargoDir[]",
	"modes[]",
	"muzzles[]",
	"reloadmagazinesound[]",
	"reloadMagazineSound[]",
	"reloadSound[]",
	"requiredAddons[]",
	"soundArmorCrash[]",
	"soundBell1[]",
	"soundBuildingCrash[]",
	"soundBullet[]",
	"soundConcrete1[]",
	"soundConcrete2[]",
	"soundConcrete3[]",
	"soundConcrete4[]",
	"soundConcrete5[]",
	"soundConcrete6[]",
	"soundConcrete7[]",
	"soundConcrete8[]",
	"soundDammage[]",
	"soundDefault1[]",
	"soundDefault2[]",
	"soundDefault3[]",
	"soundDefault4[]",
	"soundDefault5[]",
	"soundDefault6[]",
	"soundDefault7[]",
	"soundDefault8[]",
	"soundEngineOffExt[]",
	"soundEngineOffInt[]",
	"soundEngineOnExt[]",
	"soundEngineOnInt[]",
	"soundFly[]",
	"soundGeneralCollision1[]",
	"soundGetIn[]",
	"soundGetOut[]",
	"soundGlass1[]",
	"soundGlass2[]",
	"soundGlass3[]",
	"soundGlass4[]",
	"soundGlass5[]",
	"soundGlass6[]",
	"soundGlass7[]",
	"soundGlass8[]",
	"soundGlassArmored1[]",
	"soundGlassArmored2[]",
	"soundGlassArmored3[]",
	"soundGlassArmored4[]",
	"soundGlassArmored5[]",
	"soundGlassArmored6[]",
	"soundGlassArmored7[]",
	"soundGlassArmored8[]",
	"soundGroundHard1[]",
	"soundGroundHard2[]",
	"soundGroundHard3[]",
	"soundGroundHard4[]",
	"soundGroundHard5[]",
	"soundGroundHard6[]",
	"soundGroundHard7[]",
	"soundGroundHard8[]",
	"soundGroundSoft1[]",
	"soundGroundSoft2[]",
	"soundGroundSoft3[]",
	"soundGroundSoft4[]",
	"soundGroundSoft5[]",
	"soundGroundSoft6[]",
	"soundGroundSoft7[]",
	"soundGroundSoft8[]",
	"soundHitBody1[]",
	"soundHitBody2[]",
	"soundHitBody3[]",
	"soundHitBody4[]",
	"soundHitBody5[]",
	"soundHitBody6[]",
	"soundHitBody7[]",
	"soundHitBody8[]",
	"soundHitBuilding1[]",
	"soundHitBuilding2[]",
	"soundHitBuilding3[]",
	"soundHitBuilding4[]",
	"soundHitBuilding5[]",
	"soundHitBuilding6[]",
	"soundHitBuilding7[]",
	"soundHitBuilding8[]",
	"soundHitFoliage1[]",
	"soundHitFoliage2[]",
	"soundHitFoliage3[]",
	"soundHitFoliage4[]",
	"soundHitFoliage5[]",
	"soundHitFoliage6[]",
	"soundHitFoliage7[]",
	"soundHitFoliage8[]",
	"soundImpactDefault1[]",
	"soundLocked[]",
	"soundMetal1[]",
	"soundMetal2[]",
	"soundMetal3[]",
	"soundMetal4[]",
	"soundMetal5[]",
	"soundMetal6[]",
	"soundMetal7[]",
	"soundMetal8[]",
	"soundMetalInt1[]",
	"soundMetalInt2[]",
	"soundMetalInt3[]",
	"soundMetalInt4[]",
	"soundMetalInt5[]",
	"soundMetalInt6[]",
	"soundPlastic1[]",
	"soundPlastic2[]",
	"soundPlastic3[]",
	"soundPlastic4[]",
	"soundPlastic5[]",
	"soundPlastic6[]",
	"soundPlastic7[]",
	"soundPlastic8[]",
	"soundRubber1[]",
	"soundRubber2[]",
	"soundRubber3[]",
	"soundRubber4[]",
	"soundRubber5[]",
	"soundRubber6[]",
	"sounds[]",
	"soundServo[]",
	"SoundSetExplosion[]",
	"soundTyre1[]",
	"soundTyre2[]",
	"soundTyre3[]",
	"soundTyre4[]",
	"soundTyre5[]",
	"soundTyre6[]",
	"soundTyre7[]",
	"soundTyre8[]",
	"soundVehiclePlate1[]",
	"soundVehiclePlate2[]",
	"soundVehiclePlate3[]",
	"soundVehiclePlate4[]",
	"soundVehiclePlate5[]",
	"soundVehiclePlate6[]",
	"soundVehiclePlate7[]",
	"soundVehiclePlate8[]",
	"soundVehiclePlateInt1[]",
	"soundVehiclePlateInt10[]",
	"soundVehiclePlateInt11[]",
	"soundVehiclePlateInt12[]",
	"soundVehiclePlateInt13[]",
	"soundVehiclePlateInt14[]",
	"soundVehiclePlateInt15[]",
	"soundVehiclePlateInt2[]",
	"soundVehiclePlateInt3[]",
	"soundVehiclePlateInt4[]",
	"soundVehiclePlateInt5[]",
	"soundVehiclePlateInt6[]",
	"soundVehiclePlateInt7[]",
	"soundVehiclePlateInt8[]",
	"soundVehiclePlateInt9[]",
	"soundWater1[]",
	"soundWater2[]",
	"soundWater3[]",
	"soundWater4[]",
	"soundWater5[]",
	"soundWater6[]",
	"soundWater7[]",
	"soundWater8[]",
	"soundWood1[]",
	"soundWood2[]",
	"soundWood3[]",
	"soundWood4[]",
	"soundWood5[]",
	"soundWood6[]",
	"soundWood7[]",
	"soundWood8[]",
	"soundWoodCrash[]",
	"supersonicCrackFar[]"
	"supersonicCrackFar[]",
	"supersonicCrackNear[]",
	"textures[]",
	"WoodCrash0[]",
	"WoodCrash1[]",
	"WoodCrash2[]",
	"WoodCrash3[]",
	"WoodCrash4[]",
	"WoodCrash5[]"
]
classSkip = [
	"class AnimationSources",
	"class CamShakeExplode",
	"class CamShakeFire",
	"class CamShakeHit",
	"class CamShakePlayerFire",
	"class CamShakePlayerFire",
	"class CargoTurret_01: CargoTurret",
	"class CfgMovesBasic",
	"class CfgMovesMaleSdr: CfgMovesBasic",
	"class close",
	"class CowsSlot",
	"class DestructionEffects",
	"class DoorB",
	"class DoorL",
	"class DoorR",
	"class far_optic1",
	"class far_optic2",
	"class FullAuto",
	"class fullauto_medium",
	"class GunParticles",
	"class HitEffects",
	"class Library",
	"class LinkedItems",
	"class medium",
	"class MuzzleSlot",
	"class ObjectTexture",
	"class OpticsModes",
	"class PointerSlot",
	"class Reflectors",
	"class RenderTargets",
	"class RHS_Engine_Fire",
	"class RHS_Engine_Smoke_small1",
	"class RHS_Engine_Smoke_small2",
	"class RHS_Engine_Smoke",
	"class RHS_Engine_Sounds",
	"class RHS_Engine_Sparks",
	"class RHSUSF_EventHandlers",
	"class RscInGameUI",
	"class short",
	"class Sounds",
	"class SpeechVariants",
	"class StandardSound",
	"class SuperSonicCrack",
	"class TransportBackpacks",
	"class TransportItems",
	"class TransportMagazines",
	"class TransportWeapons",
	"class TurnIn",
	"class UnderBarrelSlot",
	"class UserActions",
]

def newFile(root, file, logfile):
	with open(root + "\\\\" + file, "r", encoding="UTF-8") as f:
		lines = f.readlines()

	modDir = re.search("@[^\\\\]*", root).group(0)
	folder = re.search("addons\\\\[^\\\\]*", root).group(0).replace("addons\\","")

	logfile.write("-------------------------------" + folder + "-------------------------------")
	print(cviolet2 + "-------------------------------" + cend + (cgreen + cbold + folder + cend) + cviolet2 + "-------------------------------" + cend)

	pathToCreate = "Mods\\" + modDir + "\\" + folder + "\\"
	fileToCreate = pathToCreate + "\\" + file

	if not os.path.exists(os.path.dirname(pathToCreate)):
		try:
			os.makedirs(os.path.dirname(pathToCreate))
		except OSError as exc:
			if exc.errno != errno.EEXIST:
				raise

	fileWriteList = []
	index = 0
	toSkip = 0
	for line in lines:
		if toSkip > 0:
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
				preppedLine = line.replace("\n","").replace("	","  ")
				logfile.write("[SKIPPED CLASS]     " + preppedLine + "\n")
				#print(cred + "[SKIPPED CLASS]     " + cend + cgrey + preppedLine + cend)
				index += 1
				continue

			fileWriteList.append(line)

		#Found single-line attribute
		elif (lineStripped.endswith(";\n") and lineStripped.startswith("}") == False):
			cont = False
			for x in attributeSkip:
				if lineStripped.startswith(x):
					cont = True
					break
			if cont == True:
				index += 1
				preppedLine = line.replace("\n","").replace("	","  ")
				logfile.write("[SKIPPED ATTRIBUTE]     " + preppedLine + "\n")
				#print(cred + "[SKIPPED ATTRIBUTE] " + cend + cgrey + preppedLine + cend)
				continue
			preppedLine = line.replace("\n","").replace("	","  ")
			logfile.write("[ADDED]             " + preppedLine)
			#print(cgreen + "[ADDED]             " + cend + preppedLine)
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
				preppedLine = line.replace("\n","").replace("	","  ")
				logfile.write("[SKIPPED ATTRIBUTE]     " + preppedLine + "\n")
				#print(cred + "[SKIPPED ATTRIBUTE] " + cend + cgrey + preppedLine + cend)
				index += 1
				continue
			preppedLine = line.replace("\n","").replace("	","  ")
			logfile.write("[ADDED]             " + preppedLine)
			#print(cgreen + "[ADDED]             " + cend + preppedLine)
			fileWriteList.append(line)

		else:
			preppedLine = line.replace("\n","").replace("	","  ")
			logfile.write("[ADDED]             " + preppedLine)
			#print(cgreen + "[ADDED]             " + cend + preppedLine)
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

			if item.replace("	","").startswith("class") and not item.endswith(";\n"):
				#input("Found multiLine class [" + item.replace("\n","") + "], press to continue")
				if fileWriteList[x+1].replace("	","") == "{\n":
					#input("MultiLine class first line is a brace")
					if fileWriteList[x+2].replace("	","") == "};\n":
						#input("MultiLine class second line is a closing brace - do not add body of class")
						writeToThisFile.write(item.replace("\n","") + ";  //found empty after stripping\n")
						preppedLine = line.replace("\n","").replace("	","  ")
						logfile.write("[EMPTY CLASS]     " + preppedLine + "\n")
						#print(cred + "[EMPTY CLASS]     " + cend + cgrey + preppedLine + cend)
						x += 1
						toSkip = 2
						continue
					else:
						pass
				else:
					pass
			writeToThisFile.write(item)
			x += 1

mods = ["S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSAFRF",
		"S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSUSAF",
		"S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSGREF",
		"S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSSAF",
		"S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@ArmaBases"]

with open("logfile.txt", "w", encoding="utf-8") as logfile:
	for x in mods:
		for root, dirs, files in os.walk(x):
			for file in files:
				if file == 'config.cpp':
					newFile(root, file, logfile)


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