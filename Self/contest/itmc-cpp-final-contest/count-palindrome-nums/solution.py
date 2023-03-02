def is_palin(s: str) -> bool:
    n = len(s)
    for i in range(n):
        if s[i] is not s[n - 1 - i]:
            return False
    
    return True


n: int = int(input())
ans: int = 0
for i in range(n):
    val: str = input()
    if is_palin(val) is True:
        ans += 1

print(ans)
