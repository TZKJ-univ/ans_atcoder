import numpy as np

N, T, P = map(int, input().split())

L = list(map(int, input().split()))

cnt = 0
hiniti = 0
while True:
    cnt = 0  
    for i in range(N):
        if L[i]+hiniti >= T:
            cnt += 1
        if cnt == P:
            print(hiniti)
            break
    if cnt == P:
        break
    else:
        hiniti += 1
