from collections import deque

query = int(input())

for q in range(0, query):
    n = int(input())
    a = list(map(int, input().split(' ')))
    
    l = [-1] * n
    r = [-1] * n

    dq = deque()

    for i in range(0, n):
        while (len(dq) != 0 and a[dq[len(dq) - 1]] >= a[i]):
            dq.pop()
        if (len(dq) == 0):
            l[i] = -1
        else:
            l[i] = dq[len(dq) - 1]
        dq.append(i)

    while (len(dq) > 0):
        dq.pop()
    
    for i in range(n - 1, -1, -1):
        while (len(dq) != 0 and a[dq[len(dq) - 1]] >= a[i]):
            dq.pop()
        if (len(dq) == 0):
            r[i] = n
        else:
            r[i] = dq[len(dq) - 1]
        dq.append(i)

    def res(i):
        return (a[i] * (r[i] - l[i] - 1))

    u = 0
    for i in range(1, n):
        if (res(u) < res(i)):
            u = i
    
    print(res(u), l[u] + 2, r[u])