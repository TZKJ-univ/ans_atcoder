import numpy as np
N=int(input())
A=[0]
B=[0]
a=list(map(int,input().split()))
b=list(map(int,input().split()))
for i in range(N):
    A.append(a[i])
    B.append(b[i])

A_sort=np.sort(A)
B_sort=np.sort(B)

ans=0
for i in range(1,N+1):
    ans+=A_sort[i]*B_sort[N-i+1]

print(ans)