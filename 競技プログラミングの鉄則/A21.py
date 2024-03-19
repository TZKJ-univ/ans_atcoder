import numpy as np
N=int(input())
P=np.zeros(N+1)
A=np.zeros(N+1)


for i in range(1,N+1):
    a,b=map(int,input().split())
    P[i]=a
    A[i]=b

dp=np.zeros((N+1,N+1),dtype=int)
dp[1][N]=0
for LEN in range(N-2,-1,-1):
    for l in range(0,N-LEN+1):
        r=l+LEN
        
        
