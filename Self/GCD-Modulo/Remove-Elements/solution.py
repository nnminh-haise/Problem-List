def gcd(a, b):
    if b == 0:
        return a

    return gcd(b, a % b)


queries = int(input())

while queries:
    queries -= 1
    
    n = int(input())
    a = list(map(int, input().split(' ')))
    
    p = a[0]
    
    for i in range(1, n):
        p = gcd(p, a[i])
    
    if p == 1:
        print(0)
    else:
        print(-1)
