query = int(input())

for q in range(0, query):
    n = int(input())
    a = list(map(int, input().split(' ')))
    freq = {}
    for x in a:
        if x not in freq:
            freq[x] = 1
        else:
            freq[x] = freq[x] + 1
    ans = 0
    for x in freq:
        ans = ans + min(x - 1, freq[x])
    print(ans)