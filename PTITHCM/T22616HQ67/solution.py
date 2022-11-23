n = int(input())
a = list(map(int, input().split(' ')))

def checker(a):
    mp = {}
    for x in a:
        if x in mp:
            return False
        else:
            mp[x] = 1
    return True

if checker(a):
    print("YES")
else:
    print("NO")
