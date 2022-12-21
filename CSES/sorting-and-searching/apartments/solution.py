n, m, k = [int(_) for _ in input().strip().split()]
a = [int(_) for _ in input().strip().split()]
b = [int(_) for _ in input().strip().split()]

a = sorted(a)
b = sorted(b)

ans = 0
i = j = 0
while i < n and j < m:
    if abs(a[i] - b[j]) <= k:
        ans += 1
        i += 1
        j += 1
    elif a[i] - b[j] > k:
        j += 1
    else:
        i += 1

print(ans)
