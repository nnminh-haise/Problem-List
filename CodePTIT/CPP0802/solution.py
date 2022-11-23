import fileinput

data = fileinput.input(files = "DATA.in")

sum = 0

for line in data:
    args = line.split(" ")
    
    for arg in args:
        item = arg.split("\n")
        if (len(item) > 1):
            val = item[0]
        else:
            val = item[0]
        
        if (val.isnumeric() and int(val) <= 100000000 and int(val) >= -10000000):
            sum += int(val)

print(sum)
