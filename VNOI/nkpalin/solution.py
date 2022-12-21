s = input()
p = s[::-1]

dp = [[0 for _ in range(len(s) + 1)] for _ in range(len(s) + 1)]

for i in range(1, len(s) + 1):
    for j in range(1, len(s) + 1):
        if s[i - 1] == p[j - 1]:
            dp[i][j] = dp[i - 1][j - 1] + 1
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

ans = ""
i = j = len(s)
while i >= 1 and j >= 1:
    if s[i - 1] == p[j - 1]:
        ans = s[i - 1] + ans
        i -= 1
        j -= 1
    else:
        if dp[i - 1][j] == dp[i][j]:
            i -= 1
        else:
            j -= 1

print(ans)
