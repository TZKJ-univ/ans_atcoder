import numpy as np
N=int(input())
H=list(map(int,input().split()))
H_1=H[0]

for i in range(1,N):
    if H[i]>H_1:
        print(i+1)
        exit()

print(-1)