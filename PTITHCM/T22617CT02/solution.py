n = int(input())
a = list(map(int, input().split(' ')))
b = [None] * n

count = {}

for i in range(0, n):
    if a[i] not in count:
        count[a[i]] = []
        count[a[i]].append(i)
    else:
        count[a[i]].append(i)

rank = len(count)

for x in sorted(count):
    for pos in count[x]:
        b[pos] = rank
    rank = rank - 1

out = ""
for i in range(0, n):
    out = out + str(b[i])
    if i < n - 1:
        out = out + " "
print(out)