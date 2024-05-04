import numpy as np
import sys
sys.setrecursionlimit(10000)

H,W=map(int,input().split())
S=np.zeros((H+1,W+1),dtype=int)
for i in range(1,H+1):
    S[i,1:]=np.array(list(input().split()),dtype=int)
    
# print(S)
dp=np.zeros((H+1,W+1),dtype=int)
dp[H,:]=S[H,:]
for i in range(H-1,0,-1):
    for j in range(1,W+1):
        if j==1:
            dp[i,j]=S[i,j]+max(dp[i+1,j],dp[i+1,j+1])
        elif j==W:
            dp[i,j]=S[i,j]+max(dp[i+1,j],dp[i+1,j-1])
        else:
            dp[i,j]=S[i,j]+max(dp[i+1,j],dp[i+1,j-1],dp[i+1,j+1])
        
print(max(dp[1,:]))