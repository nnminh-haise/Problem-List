def prepare():
    dp = [0 for _ in range(101)]
    
    dp[1] = 1
    dp[2] = 2
    for i in range(3, 101):
        dp[i] = dp[i - 1] + dp[i - 2]
    
    return dp

dp = prepare()
queries = int(input())

while queries:
    queries -= 1
    
    n = int(input())
    print(dp[n])
