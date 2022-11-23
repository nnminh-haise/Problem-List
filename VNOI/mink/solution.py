import collections

query = int(input())

while query > 0:
    query = query - 1
    firstLine = list(map(int, input().split(' ')[:2]))
    n = firstLine[0]
    k = firstLine[1]
    a = list(map(int, input().split(' ')))
    a.insert(0, 0)

    dq = collections.deque()
    minRange = [10000000000] * (n + 1)

    while (len(dq)):
        dq.popleft()

    for i in range(1, n + 1):
        while (len(dq) and a[dq[len(dq) - 1]] >= a[i]):
            dq.pop()
        dq.append(i)
        if (dq[0] + k <= i):
            dq.popleft()
        if (i >= k):
            minRange[i] = a[dq[0]]

    output = ""
    for i in range(1, n - k + 1 + 1):
        output = str(minRange[n - i + 1]) + ' ' + output
    print(output)