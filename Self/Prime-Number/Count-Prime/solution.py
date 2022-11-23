def countPrimes(n: int) -> int:
    primality = [True for i in range(0, n)]
    counter = 0

    for p in range(2, n):
        if primality[p] == True and p * p < n:
            for i in range(p * p, n, p):
                primality[i] = False
        counter += int(primality[p])

    return counter


print(countPrimes(int(input())))