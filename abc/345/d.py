import numpy as np

N,H,W=map(int,input().split())
A=np.zeros(N+1)
B=np.zeros(N+1)
for i in range(1,N+1):
    A[i],B[i]=map(int,input().split())

dp=np.zeros((11,11),dtype=int)
# print(dp)
for i in range(1,N+1):
    dp[int(A[i])][int(B[i])]=1
    dp[int(B[i])][int(A[i])]=1

if N==1:
    if (A[1]==H and B[1]==W) or (A[1]==W and B[1]==H):
        print('Yes')
    else:
        print('No')
    exit()

for i in range(2,N+1):
    for j in range(1,H+1):
        for k in range(1,W+1):
            if (int(A[i])==j and int(B[i])==k) or (int(A[i])==k and int(B[i])==j):
                dp[j][k]=1
            elif (int(A[i])==j or int(B[i]==j) or int(A[i])==k or int(B[i]==k)) and (dp[j-int(A[i])][k]==1 or dp[j-int(B[i])][k]==1):
                dp[j][k]=1
            elif (int(A[i])==j or int(B[i]==j) or int(A[i])==k or int(B[i]==k)) and (dp[j][k-int(A[i])]==1 or dp[j][k-int(B[i])]==1):
                dp[j][k]=1
            else:
                continue
# print(dp)
if dp[H][W]==1:
    print('Yes')
else:
    print('No')