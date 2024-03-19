import numpy as np

N=int(input())
A=list(map(int,input().split()))
B=list(map(int,input().split()))
dp=np.full(N+1,-1000,dtype=int)

dp[1]=0
for i in range(1,N):
    dp[A[i-1]]=max(dp[i]+100,dp[A[i-1]])
    dp[B[i-1]]=max(dp[i]+150,dp[B[i-1]])
    
print(dp[N])