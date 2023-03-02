def count(val: int) -> int:
    counter: int = 0
    
    while val > 0:
        counter += 1
        val //= 10
    
    return counter


def main():
    n = int(input())
    ans: int = 0
    for num in range(1, n + 1):
        if count(num) % 2 == 1:
            ans += 1
    
    print(ans)


if __name__ == "__main__":
    main()
