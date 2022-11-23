n = int(input())
a = list(map(int, input().split(' ')))

for x in a:
    if x % 7 == 0 and x % 13 == 0:
        print("both")
    elif x % 7 == 0:
        print("mod 7")
    elif x % 13 == 0:
        print("mod 13")
    else:
        print("none")
