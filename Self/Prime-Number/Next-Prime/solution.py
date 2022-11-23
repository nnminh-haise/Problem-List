def sieve(n: int) -> int:
    N = 1000000
    primality = [True for i in range(0, N + 1)]
    
    primality[0] = primality[1] = False
    
    for p in range(2, N + 1):
        if primality[p] == True and p * p <= N:
            for i in range(p * p, N, p):
                primality[i] = False
    
    for i in range(2, N + 1):
        if primality[i] == True and i >= n:
            return i
    
    return -1


print(sieve(int(input())))