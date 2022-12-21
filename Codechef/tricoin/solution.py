queries = int(input())

while queries:
    queries -= 1
    
    n = int(input())
    
    ans = 1
    
    left, right = 1, n
    
    while left <= right:
        mid = (right - left + 1) // 2 + left
        
        if mid * (mid + 1) <= 2 * n:
            ans = max(ans, mid)
            left = mid + 1
        else:
            right = mid - 1
    
    print(ans)
