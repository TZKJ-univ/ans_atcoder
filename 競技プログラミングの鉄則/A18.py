import numpy as np
N,S=map(int,input().split())
A=list(map(int,input().split()))

dp = np.zeros((N+1,S+1),dtype=int)
dp[0][0]=1
if S!=0:
    for i in range(1,S+1):
        dp[0][i]=0
else:
    print('Yes')
    exit()

for i in range(1,N+1):
    for j in range(S+1):
        if j-A[i-1]>=0:
            if dp[i-1][j-A[i-1]]==1:
                dp[i][j]=1
            elif dp[i-1][j]==1:
                dp[i][j]=1
            else:
                dp[i][j]=0
        else:
            if dp[i-1][j]==1:
                dp[i][j]=1
            else:
                dp[i][j]=0
                
# print(dp)


if dp[N][S]==1:
    print('Yes')
else:
    print('No')