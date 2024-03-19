import numpy  as np
import bisect
t=input()
T=[(x) for x in list(str(t))]
N=int(input())
A=[0]*N
s=np.zeros((N,11))
for i in range(N):
    A[i]=int(input(end=" "))
    for j in range(A[i]):
        s[i]=list(input().split())
        
dp=np.zeros((N,11),dtype=int)
dps=np.zeros((N,11),dtype=str)

dp[0][0]=0
dps[0][0]=''
for i in range(N):
    for j in range(1,A[i]):
        dp[i][j]=dp[i-1][j]+1
        dps[i][j]=dps[i-1][j]+s[i][j]
        
    