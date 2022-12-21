n = int(input())
a = [int(x) for x in input().strip().split(' ')]
b = [int(x) for x in input().strip().split(' ')]

dp = [int for _ in range(n)]

dp[0] = a[0]
dp[1] = min(a[0] + a[1], b[0])
for i in range(2, n):
    dp[i] = min(a[i] + dp[i - 1], b[i - 1] + dp[i - 2])

print(dp[n - 1])
