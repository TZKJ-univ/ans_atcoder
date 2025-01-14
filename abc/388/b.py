import numpy as np

N, D = map(int, input().split())
T = []
L = []

for i in range(N):
    tl = list(map(int, input().split()))
    T.append(tl[0])
    L.append(tl[1])

for k in range(1, D+1):
    max_tlk = 0
    for i in range(N):
        if T[i] * (L[i] + k) >= max_tlk:
            max_tlk = T[i] * (L[i] + k)
    print(max_tlk)
            
            