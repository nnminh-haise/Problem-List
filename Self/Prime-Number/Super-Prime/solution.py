import math

def primality(n: int):
    if n < 2:
        return False
    
    if n == 2 or n == 3:
        return True
    
    if n % 2 == 0:
        return False
    
    for i in range(3, math.ceil(math.sqrt(n)), 2):
        if n % i == 0:
            return False
    
    return True


def binaryPower(a: int, b: int):
    if b == 0:
        return 1
    
    if b == 1:
        return a
    
    temp = binaryPower(a, b // 2)
    if b % 2 == 0:
        return temp * temp
    
    return temp * temp * a


def solution(n: int):
    while n > 0:
        if primality(n) == False:
            return False
        
        counter = 0
        temp = n
        n = 0
        
        while temp > 9:
            n += binaryPower(10, counter) * (temp % 10);
            counter += 1
            temp //= 10
    
    return True
    


n = int(input())
print(solution(n))