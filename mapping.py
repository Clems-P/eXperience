import re

formatted_file = []

formatted_file.append("")

with open("MainCore.map", 'r') as filin:
    lignes = filin.readlines()

    for line in lignes:
        if re.search('^\s*?\.',line):
            formatted_file.append(line.strip())
        else:
            formatted_file[-1] = formatted_file[-1] + " " + line.strip()

total = 0

for line in formatted_file:
    if re.search('\.bss',line):
        m = re.search('(\.bss(\..*?))\s+0x(\w+)\s+0x(\w+)\s+',line)
        if m:
            if int(m.group(4),16):
                print("DONE =>"+ m.group(1) + "\t" + str(int(m.group(4),16)))
                total = total + int(m.group(4),16)
            else:
                print("REMOVE =>"+line)
        else:
            print("TODO =>"+line)

print("total")
print(total)
