import numpy as np

N,W=map(int,input().split())
w=[0]*N
v=[0]*N
for i in range(N):
    w_i,v_i=map(int,input().split())
    w[i]=w_i
    v[i]=v_i
    
dp = np.zeros((N+1,W+1),dtype=int)

dp[0][0]=0
for i in range(1,W+1):
    dp[0][i]=0

for i in range(1,N+1):
    for j in range(W+1):
        if j-w[i-1]>=0:
            dp[i][j]=max(dp[i-1][j-w[i-1]]+v[i-1],dp[i-1][j])
        else:
            dp[i][j]=dp[i-1][j]

print(dp[N][W])