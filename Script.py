import os
import re


#\n^\s*$
attributeSkip = ["author","url","requiredVersion", "onLoad","dlc","category","editorSubcategory",
"vehicleClass","insideSoundCoef","unitInfoType","model","Icon","mapSize","transportMaxBackpacks","transportSoldier",
"destrType","crewExplosionProtection","camShakeCoef","dustFrontLeftPos","dustFrontRightPos","dustBackLeftPos","dustBackRightPos","tf_hasLRradio_api",
"selectionBrakeLights","selectionBackLights","driverAction","driverInAction","driverLeftHandAnimName","driverRightHandAnimName","cargoProxyIndexes",
"getInProxyOrder","getInAction","getOutAction","driverDoor","viewDriverInExternal","forceHideDriver","factions","textureList","cargoCompartments",
"visual","ammoExplosionEffect","boneName","center","boundary","suspForceAppPointOffset","tireForceAppPointOffset","tex", "picture","editorPreview",
"displayName","scope", "faction", "showNVGGunner","gunnerLeftHandAnimName","gunnerRightHandAnimName","body","gun","animationSourceBody","animationSourceGun",
"turretInfoType","discreteDistance","discreteDistanceInitIndex","gunnerForceOptics","gunnerOutOpticsShowCursor","gunnerAction","gunnerInAction",
"lodTurnedIn","lodTurnedOut","lodOpticsOut","canhideGunner","inGunnerMayFire","outGunnerMayFire","viewGunnerInExternal","gunnerGetInAction",
"gunnerGetOutAction","gunnerDoor","gunnerCompartments","castGunnerShadow","gunBeg","gunEnd","memoryPointGunnerOptics","memoryPointGunnerOutOptics",
"gunnerOpticsModel","gunnerOutOpticsModel","optics","disableSoundAttenuation","memoryPointsGetInGunner","memoryPointsGetInGunnerDir","crew"]
multiAttributeSkip = ["requiredAddons[]", "controls[]","cargoAction[]","memoryPointsGetInCargo[]","memoryPointsGetInCargoDir[]","cargoDoors[]","textures[]",
"aggregateReflectors[]","mat[]","HiddenSelectionsTextures[]","magazines[]","soundServo[]"]
classSkip = ["class CfgMovesBasic", "class RscInGameUI","class CfgMovesMaleSdr: CfgMovesBasic", "class ObjectTexture", "class DoorB", "class DoorL: DoorB",
"class DoorR: DoorB", "class TurnIn", "class CargoTurret_01: CargoTurret", "class AnimationSources", "class UserActions","class RHS_Engine_Smoke",
"class RHS_Engine_Fire: RHS_Engine_Smoke","class RHS_Engine_Sparks: RHS_Engine_Smoke", "class RHS_Engine_Sounds: RHS_Engine_Smoke",
"class RHS_Engine_Smoke_small1: RHS_Engine_Smoke","class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1", "class Reflectors", "class RenderTargets",
"class RHSUSF_EventHandlers","class TransportBackpacks","class TransportMagazines","class TransportItems","class TransportWeapons",
"class rhsusf_CGRCAT1A2_usmc_d: rhsusf_Cougar_base", "class DestructionEffects"]

def newFile(root, file):
	with open(root + "\\\\" + file, "r", encoding="UTF-8") as f:
		lines = f.readlines()

	modDir = re.sub("!Workshop\\\\(@[^\]*)", "\g<1>, root")
	folder = re.sub("addons\\\\(.*)", "\g<1>", root)
	print("Mod: " + modDir)
	print("Folder: " + folder)
	input("halt")
	with open(modDir + "\\" + folder + "\\export.txt", "w") as writeToThisFile:
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
							else:
								break
				toSkip = i
				if i > 0:
					index += 1
					continue
				print(line.replace("\n",""))

			#Found single-line attribute
			elif (lineStripped.endswith(";\n") and lineStripped.startswith("}") == False):
				cont = False
				for x in attributeSkip:
					if lineStripped.startswith(x):
						cont = True
				if cont == True:
					index += 1
					continue
				print(line.replace("\n",""))

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
				print(line.replace("\n",""))

			else:
				print(line.replace("\n",""))

			index += 1


for root, dirs, files in os.walk("S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSUSAF"):
	for file in files:
		if file == 'config.cpp' or file == "physx_config.hpp":
			newFile(root, file)
#newFile("S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSUSAF\\addons\\rhsusf_c_cougar\\config.cpp")
#newFile("S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSUSAF\\addons\\rhsusf_c_cougar\\physx_config.hpp")


#\n^\s*$  blanknewline





















#Tried using MySQL because why and why not
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