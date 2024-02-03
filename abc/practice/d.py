import numpy as np
import bisect

N=int(input())
C=np.zeros(N, dtype=int)
P=np.zeros(N, dtype=int)
S=np.zeros((N,4), dtype=int)


for _ in range(N):
    C[_], P[_] = map(int, input().split())
    S[_][0]=C[_]
    S[_][1]=P[_]
    if _!=0 and C[_]==1:
        S[_][2]=S[_-1][2]+P[_]
        S[_][3]=S[_-1][3]
    elif _==0 and C[_]==1:
        S[_][2]=P[_]
        S[_][3]=0
    elif _!=0 and C[_]==2:
        S[_][3]=S[_-1][3]+P[_]
        S[_][2]=S[_-1][2]
    elif _==0 and C[_]==2:
        S[_][3]=P[_]
        S[_][2]=0
    else:
        print("error")
    
#print(S)
Q=int(input())
ans=np.zeros((Q,2), dtype=int)
for i in range(Q):
    l,r=map(int, input().split())
    l,r=l-1,r-1
    #print(l,r)
    if l!=0:
        ans[i][0]=S[r][2]-S[l-1][2]
        ans[i][1]=S[r][3]-S[l-1][3]
    else:
        ans[i][0]=S[r][2]
        ans[i][1]=S[r][3]
    print(*ans[i], sep=" ")