import numpy as np

N=int(input())
A=list(map(int,input().split()))

dp=np.zeros(N+1)

for i in range(0,N):
    dp[i]=1
    for j in range(0,i):
        if A[j] < A[i]:
            dp[i]=max(dp[i],dp[j]+1)

print(int(dp[N-1]))