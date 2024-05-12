import numpy as np
N,K=map(int,input().split())
A=[0]
a=list(map(int,input().split()))
for i in range(N):
    A.append(a[i])
cnt=0
zanseki=K
for i in range(1,N+1):
    if zanseki>=A[i]:
        zanseki-=A[i]
        if i == N:
            cnt += 1
    elif zanseki<A[i]:
        cnt += 1
        zanseki=K-A[i]
        if i == N:
            cnt += 1
    # print(zanseki)
print(cnt)
            
        
    