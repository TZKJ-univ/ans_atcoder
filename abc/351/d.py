import numpy as np
import sys
sys.setrecursionlimit(1 << 20)

H,W=map(int,input().split())
S=np.full((H+1,W+1),':')
for i in range(1,H+1):
    s=input()
    ss=[(x) for x in list(str(s))]
    for j in range(1,W+1):
        S[i][j]=ss[j-1]
# print(S)
dp=np.zeros((H+1,W+1))
used=np.zeros((H+1,W+1))
def dfs(i,j):
    if used[i][j]==1:
        return 0
    else:
        used[i][j]=1 # 通ったしるし
    if i==H:
        if j==W:
            if S[i-1][j]=='#' or S[i][j-1]=='#':#右下
                return 1
            else:
                if used[i-1][j]==1:
                    return dfs(i,j-1)+1
                elif used[i][j-1]==1:
                    return dfs(i-1,j)+1
                else:
                    return dfs(i,j-1)+dfs(i-1,j)+1
        elif j==1:
            if S[i-1][j]=='#' or S[i][j+1]=='#':
                return 1
            else:
                if used[i][j+1]==1:
                    return dfs(i-1,j)+1
                elif used[i-1][j]==1:
                    return dfs(i,j+1)+1
                else:
                    return dfs(i-1,j)+dfs(i,j+1)+1
        else:
            if S[i-1][j]=='#' or S[i][j-1]=='#' or S[i][j+1]=='#':#下
                return 1
            else:
                if used[i][j-1]==1:
                    return dfs(i-1,j)+dfs(i,j+1)+1
                elif used[i-1][j]==1:
                    return dfs(i,j-1)+dfs(i,j+1)+1
                elif used[i][j+1]==1:
                    return dfs(i-1,j)+dfs(i,j-1)+1
                else:
                    return dfs(i,j-1)+dfs(i-1,j)+dfs(i,j+1)+1
    elif j==W:
        if S[i-1][j]=='#' or S[i][j-1]=='#' or S[i+1][j]=='#':#右
            return 1
        elif i==1:
            if S[i+1][j]=='#' or S[i][j-1]=='#':
                return 1
            else:
                if used[i][j-1]==1:
                    return dfs(i+1,j)+1
                elif used[i+1][j]==1:
                    return dfs(i,j-1)+1
                else:
                    return dfs(i+1,j)+dfs(i,j-1)+1
        else:
            if used[i-1][j]==1:
                return dfs(i,j-1)+dfs(i+1,j)+1
            elif used[i][j-1]==1:
                return dfs(i-1,j)+dfs(i+1,j)+1
            elif used[i+1][j]==1:
                return dfs(i-1,j)+dfs(i,j-1)+1
            else:
                return dfs(i,j-1)+dfs(i-1,j)+dfs(i+1,j)+1
    elif i==1:
        if j==1:
            if S[i+1][j]=='#' or S[i][j+1]=='#':
                return 1
            else:
                if used[i+1][j]==1:
                    return dfs(i,j+1)+1
                elif used[i][j+1]==1:
                    return dfs(i+1,j)+1
                else:
                    return dfs(i,j+1)+dfs(i+1,j)+1
        else:
            if S[i+1][j]=='#' or S[i][j+1]=='#' or S[i][j-1]=='#':
                return 1
            else:
                if used[i][j+1]==1:
                    return dfs(i+1,j)+dfs(i,j-1)+1
                elif used[i][j-1]==1:
                    return dfs(i+1,j)+dfs(i,j+1)+1
                elif used[i+1][j]==1:
                    return dfs(i,j-1)+dfs(i,j+1)+1
                else:
                    return dfs(i,j+1)+dfs(i+1,j)+dfs(i,j-1)+1
    elif j==1:
        if S[i+1][j]=='#' or S[i][j+1]=='#' or S[i-1][j]=='#':
            return 1
        else:
            if used[i][j+1]==1 and used[i-1][j]==1 and used[i+1][j]==1:
                return 1
            elif used[i][j+1]==1:
                return dfs(i-1,j)+dfs(i+1,j)+1
            elif used[i+1][j]==1:
                return dfs(i-1,j)+dfs(i,j+1)+1
            elif used[i-1][j]==1:
                return dfs(i+1,j)+dfs(i,j+1)+1
            else:
                return dfs(i,j+1)+dfs(i+1,j)+dfs(i-1,j)+1
    else:
        if S[i+1][j]=='#' or S[i][j+1]=='#' or S[i-1][j]=='#' or S[i][j-1]=='#':# 4方向
            return 1
        else:
            return dfs(i,j+1,i,j)+dfs(i+1,j,i,j)+dfs(i-1,j,i,j)+dfs(i,j-1,i,j)+1
max_=0
for i in range(1,H+1):
    for j in range(1,W+1):
        if S[i][j]=='#':
            dp[i][j]=0
        elif used[i][j]==1:
            dp[i][j]=1
            # print(i,j)
        else:
            dp[i][j]=dfs(i,j)
            # print(dp)
        max_=max(max_,dp[i][j])
# print(dp)
# print(int(max(dp.flatten())))
print(int(max_))