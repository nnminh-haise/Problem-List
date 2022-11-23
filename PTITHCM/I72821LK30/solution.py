from collections import deque

query = int(input())

for q in range(0, query):
    inp_nk = list(map(int, input().split(" ")[:2]))
    n = inp_nk[0]
    k = inp_nk[1]
    a = list(map(int, input().split(' ')))

    f = deque(a)
    
    for rep in range(0, k):
        temp = f[0]
        f.popleft()
        f.append(temp)
    
    out = ""
    for x in f:
        out = out + str(x) + " "
    print(out)
