from collections import deque

mn = list(map(int, input().split(' ')[:2]))
m = mn[0]
n = mn[1]

result = 0
f = [0] * n
l = [None] * n
r = [None] * n

for i in range(0, m):
    a = list(map(int, input().split(' ')))
    for j in range(0, len(a)):
        if a[j] == 0:
            f[j] = 0
        else:
            f[j] = f[j] + 1

    dq_a = deque()
    dq_b = deque()

    for j in range(0, n):
        while (len(dq_a) != 0 and dq_a[int(len(dq_a)) - 1] >= f[j]):
            dq_a.pop()
            dq_b.pop()
        if (len(dq_a) == 0):
            l[j] = -1
        else:
            l[j] = dq_b[len(dq_b) - 1]
        dq_a.append(int(f[j]))
        dq_b.append(int(j))

    while len(dq_a) > 0:
        dq_a.pop()
        dq_b.pop()

    for j in range(n - 1, -1, -1):
        while (len(dq_a) != 0 and dq_a[int(len(dq_a)) - 1] >= f[j]):
            dq_a.pop()
            dq_b.pop()
        if (len(dq_a) == 0):
            r[j] = n
        else:
            r[j] = dq_b[len(dq_b) - 1]
        dq_a.append(int(f[j]))
        dq_b.append(int(j))

    for j in range(0, n):
        result = max(result, f[j] * (r[j] - l[j] - 1))

print(result)