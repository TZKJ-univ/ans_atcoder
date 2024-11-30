import numpy as np

N, D = map(int, input().split())
s=input()
S=[(x) for x in list(str(s))]

cnt = 0
i = N - 1

while cnt < D:
    if S[i] == '@':
        S[i] = '.'
        cnt += 1
    i -= 1
        
print(*S, sep='')