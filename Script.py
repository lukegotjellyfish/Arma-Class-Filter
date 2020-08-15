def newFile(filePath):
	classList     = []
	startBrace    = []
	attributeList = []
	endBrace      = []

	with open(filePath, "r", encoding="UTF-8") as f:
		lines = f.readlines()

		index = 0
		toSkip = 0
		for line in lines:
			if toSkip > 0:
				print("Skipped on line [" + str(index) + "]")
				toSkip -= 1
				index += 1
				continue
			lineStripped = line.replace("	","")

			#Found class line
			if lineStripped.startswith("class"):
				print(" CLASS: [" + str(index) + "] " + line.replace("\n",""))
				classList.append(index)

			#Found single-line attribute
			elif (lineStripped.endswith(";\n") and lineStripped.startswith("}") == False):
				print("Attrib: [" + str(index) + "] " + line.replace("\n",""))
				attributeList.append(index)

			#Found multi-line attribute
			elif lineStripped.replace(" ","").endswith("=\n"):
				construct = [-1]
				i = 0
				while True:
					if (lines[index+i].replace("	","") == "};\n"):
						construct.append(index+i)
						break
					construct.append(index+i)
					i += 1
				toSkip = i
				print("Attrib: [" + str(index) + "-" + str(index+i) + "] " + line.replace("\n",""))
				attributeList.append(construct)

			#Found start to class/attribute list
			elif lineStripped.startswith("{"):
				print("sBRACE: [" + str(index) + "] " + line.replace("\n",""))
				startBrace.append(index)

			#Found end to class/attribute list
			elif lineStripped.startswith("}"):
				print("eBRACE: [" + str(index) + "] " + line.replace("\n",""))
				endBrace.append(index)
			index += 1

newFile("S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSUSAF\\addons\\rhsusf_c_cougar\\config.cpp")
newFile("S:\\Steam\\steamapps\\common\\Arma 3\\!Workshop\\@RHSUSAF\\addons\\rhsusf_c_cougar\\physx_config.hpp")






















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