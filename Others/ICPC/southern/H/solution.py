l = input()
r = input()

p = 0
n = len(r)
id = 0

while id < n:
    if l[id] == r[id]:
        p = p * 10 + (ord(l[id]) - ord('0'))
    else: