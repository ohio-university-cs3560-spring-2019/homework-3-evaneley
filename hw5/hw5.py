import sys

line = ""
for line in sys.stdin:
	pass

lines = line.split()
l = lines[0]
w = lines[1]
c = lines[2]

print("There are:")
print(l, "lines")
print(w, "words")
print(c, "characters")
print("in this directory.\n")
