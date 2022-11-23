# n = int(input())
# a = list(map(int, input().split(' ')))

# ans = 0

# for i in range(0, n - 2):
#     for j in range(i + 1, n - 1):
#         for k in range(j + 1, n):
#             if (a[i] + a[j] + a[k]) % 5 == 0:
#                 ans += 1

# print(ans)

def combination(n, k):
    if k == 1:
        return n
    elif k == 2:
        return n * (n - 1) // 2
    else:
        return n * (n - 1) * (n - 2) // 6


n = int(input())
a = list(map(int, input().split(' ')))

f = [0 for i in range(0, 5)]
for x in a:
    f[x % 5] += 1

ans = combination(f[0], 3)
ans += combination(f[4], 2) * combination(f[2], 1)
ans += combination(f[3], 2) * combination(f[4], 1)
ans += combination(f[2], 2) * combination(f[1], 1)
ans += combination(f[1], 2) * combination(f[3], 1)
ans += combination(f[0], 1) * combination(f[1], 1) * combination(f[4], 1);
ans += combination(f[0], 1) * combination(f[2], 1) * combination(f[3], 1);

print(ans)
