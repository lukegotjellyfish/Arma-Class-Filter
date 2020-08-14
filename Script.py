import mysql.connector

classList     = []
startBrace    = []
attributeList = []
endBrace      = []

with open("text.txt","r", encoding="UTF-8") as f:
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

		if (lineStripped.endswith(";\n") and lineStripped.startswith("}") == False):
			print("Attrib: [" + str(index) + "] " + line.replace("\n",""))
			attributeList.append(index)

		#Found multi-line attribute
		elif lineStripped.replace(" ","").endswith("=\n"):
			construct = []
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


#Show all pointers and tabcounts
#print("ClassList list:\n" + str(classList) + "\n")
#print("startBrace list:\n" + str(startBrace) + "\n")
#print("Attribute list:\n" + str(attributeList) + "\n")
#print("endBrace list:\n" + str(endBrace))



#Display all classes:
#x = 1
#for item in classList:
#	print("Class [" + "{:04d}".format(x) + "] " + lines[item].replace("\n",""))
#	x += 1

#index = 0
#for item in classList:
#	print(item + )