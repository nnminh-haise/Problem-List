n = int(input())
a = list(map(int, input().split(' ')))

f = [0 for i in range(0, n + 1)]

for item in a:
    f[item] += 1

for i in range(1, n + 1):
    if f[i] == 0:
        print(i)
