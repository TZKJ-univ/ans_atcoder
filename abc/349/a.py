import numpy as np
N=int(input())
A=np.zeros(N)
a=list(map(int,input().split()))

for i in range(1,N):
    A[i]=int(a[i-1])
ans=0
for i in range(1,N):
    ans=ans-A[i]
print(int(ans))