d = {}
query = int(input())
while query > 0:
    f = input()
    if f in d:
        print(f + str(d[f]))
        d[f] = d[f] + 1
    else:
        print("OK")
        d[f] = 1
    query = query - 1