import numpy as np
H,W=map(int,input().split())
A = np.full((H,W),'.',dtype=str)
for i in range(H):
    s=input()
    A[i]=[(x) for x in list(str(s))]
for i in range(H):
    for j in range(W):
        if A[i][j]=='S':
            start=[i,j]
        if A[i][j]=='T':
            goal=[i,j]
N=int(input())
R=[0]*(N)
C=[0]*(N)
E=[0]*(N)

distance=[goal[0]-start[0],goal[1]-start[1]]
dpe = np.zeros((H,W),dtype=int)
dph = np.zeros((H,W),dtype=int)
dpw = np.zeros((H,W),dtype=int)
for i in range(N):
    R[i],C[i],E[i]=map(int,input().split())
    R[i]-=1
    C[i]-=1
    if R[i]==start[0] and C[i]==start[1]:
        dpe[start[0]][start[1]]=E[i]
        dpw[start[0]][start[1]]=distance[1]
        dph[start[0]][start[1]]=distance[0]
if dpe[start[0]][start[1]]==0:
    print('No')
    exit()
sx=start[0]
sy=start[1]
tx=goal[0]
ty=goal[1]
while True:
    if dpe[sx+1][sy]<dpe[sx][sy]-1 and A[sx+1][sy]!='#' and sx+1<H:
        dpe[sx+1][sy]=dpe[sx][sy]-1
        dph[sx+1][sy]=dph[sx][sy]-1
        dpw[sx+1][sy]=dpw[sx][sy]
    if dpe[sx-1][sy]<dpe[sx][sy]-1 and A[sx-1][sy]!='#' and sx-1>=0:
        dpe[sx-1][sy]=dpe[sx][sy]-1
        dph[sx-1][sy]=dph[sx][sy]+1
        dpw[sx-1][sy]=dpw[sx][sy]
    if dpe[sx][sy+1]<dpe[sx][sy]-1 and A[sx][sy+1]!='#' and sy+1<W:
        dpe[sx][sy+1]=dpe[sx][sy]-1
        dph[sx][sy+1]=dph[sx][sy]
        dpw[sx][sy+1]=dpw[sx][sy]-1
    if dpe[sx][sy-1]<dpe[sx][sy]-1 and A[sx][sy-1]!='#' and sy-1>=0:
        dpe[sx][sy-1]=dpe[sx][sy]-1
        dpw[sx][sy-1]=dpw[sx][sy]+1
        dph[sx][sy-1]=dph[sx][sy]
    

print(dpe)
# print(A)