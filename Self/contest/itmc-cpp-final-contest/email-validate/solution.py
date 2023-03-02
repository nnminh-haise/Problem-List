s = input().split("@gmail.com")[0]

flag: bool = True

for chr in s:
    if chr.isalnum() is not True:
        flag = False

print(flag)
