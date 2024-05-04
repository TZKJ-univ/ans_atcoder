import numpy as np
H,W=map(int,input().split())
S = [[0]*W]*H
for i in range(H):
    s=input()
    S[i]=[(x) for x in list(str(s))]
# print(S)
cnt=0
for i in range(H):
    for j in range(W):
        if i!=0 and j!=0 and i!=H-1 and j!=W-1:
            if S[i][j]=='.':
                if S[i-1][j]=='#' and S[i+1][j]=='#' and S[i][j-1]=='#' and S[i][j+1]=='#' and S[i-1][j-1]=='#' and S[i-1][j+1]=='#' and S[i+1][j-1]=='#' and S[i+1][j+1]=='#':
                    cnt+=1
            

# print(S)
print(cnt)