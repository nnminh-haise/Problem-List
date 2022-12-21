n, m = [int(x) for x in input().strip().split(' ')]
arr = []
if m > 0:
    arr = [int(x) for x in input().strip().split(' ')]

f = [1 for _ in range(0, n + 1)]
dp = [0 for _ in range(0, n + 1)]
m = 14062008

for item in arr:
    f[item] = 0

dp[0] = 0
dp[1] = 1
for i in range(2, n + 1):
    dp[i] = f[i] * ((dp[i - 1] % m) + (dp[i - 2] % m)) % m

print(dp[n])
