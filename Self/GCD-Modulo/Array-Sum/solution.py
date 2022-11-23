n, k = list(map(int, input().split(' ')))
a = list(map(int, input().split(' ')))

s = 0

for x in a:
    s = (s % k) + (x % k)

print(s % k)