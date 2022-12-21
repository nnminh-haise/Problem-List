import math

def binary_search(a: int, b: int):
    for k in range(41, 0, -1):
        left = math.ceil(math.pow(a, 1.0 / k)) - 1
        right = math.ceil(math.pow(b, 1.0 / k)) + 1
        
        while left <= right:
            mid = (right - left + 1) // 2 + left
            res = math.pow(mid, k)
            
            if a <= res and res <= b:
                return k
            elif res < a:
                left = mid + 1
            else:
                right = mid - 1
    
    return -1


queries = int(input())

for _ in range(1, queries + 1):
    l, r = list(map(int, input().split(' ')))
    res = binary_search(l, r)
    print(f'Case #{_}: {res}')
