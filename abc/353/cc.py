import numpy as np
N=int(input())
a=list(map(int,input().split()))
A=[0]

for i in range(N):
    A.append(a[i])

ans=0
for i in range(1,N+1):
    for j in range(i+1,N+1):
        ans += (A[i]+A[j])%(10**8)
    
print(ans)