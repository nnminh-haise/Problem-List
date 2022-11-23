import math

def gcd(a, b):
    if b == 0:
        return a

    return gcd(b, a % b)

def lcm(a, b):
    return a // gcd(a, b) * b


queries = int(input())

while queries:
    queries -= 1
    
    n, a, b, k = list(map(int, input().split(' ')))

    ans = math.floor(n // a) + math.floor(n // b) - 2 * math.floor(n // lcm(a, b))

    if ans >= k:
        print("Yes")
    else:
        print("No")