d = {}
query = int(input())

while (query):
    query = query - 1
    s = input()
    if s in d:
        print("YES")
    else:
        d[s] = 1
        print("NO")