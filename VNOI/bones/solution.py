s1, s2, s3 = list(map(int, input().split(' ')))
dp = [0 for _ in range(2000)]

for i in range(1, s1 + 1):
    for j in range(1, s2 + 1):
        for k in range(1, s3 + 1):
            dp[i + j + k] += 1

ans = 0
dp[0] = -1

for i in range(3, s1 + s2 + s3 + 1):
    if dp[ans] < dp[i]:
        ans = i

print(ans)
