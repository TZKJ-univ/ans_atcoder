import numpy as np
s=input()
S=[x for x in list(str(s))]

t=input()
T=[x for x in list(str(t))]

dp=np.zeros((len(S)+1,len(T)+1),dtype=int)

for i in range(len(S)+1):
    for j in range(len(T)+1):
        if i==0 or j==0:
            dp[i][j]=0
        elif S[i-1]==T[j-1]:
            dp[i][j]=max(dp[i-1][j-1]+1,dp[i-1][j],dp[i][j-1])
        else:
            dp[i][j]=max(dp[i-1][j],dp[i][j-1])

print(dp[len(S)][len(T)])