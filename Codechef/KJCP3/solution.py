query = int(input())

for q in range(0, query):
    n = int(input())
    a = list(map(int, input().split(' ')))
    b = list(map(int, input().split(' ')))

    ls1 = {}
    ls2 = {}
    pos1 = 0
    pos2 = 1
    c = [None] * (2 * n)

    for x in sorted(a):
        ls1[pos1] = x
        pos1 = pos1 + 2

    for x in sorted(b):
        ls2[pos2] = x
        pos2 = pos2 + 2

    for i in range(0, 2 * n):
        if i % 2 == 0:
            c[i] = ls1[i]
        else:
            c[i] = ls2[i]

    out = ""
    for x in c:
        out = out + str(x) + " "
    print(out)