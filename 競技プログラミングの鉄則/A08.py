import numpy as np
H,W = map(int,input().split())  # H:縦 W:横
X = np.zeros((H,W))
sum_corner = np.zeros((H+1,W+1))
for i in range(H):
    X[i]=list(map(int,input().split()))
sum_corner[0,0] = X[0,0]
for i in range(0,H):
    for j in range(0,W):
        if i==0 and j==0:
            continue
        elif j==0:
            sum_corner[i,j] = sum_corner[i-1,j]+X[i,j]
        elif i==0:
            sum_corner[i,j] = sum_corner[i,j-1]+X[i,j]
        else:
            sum_corner[i,j] = sum_corner[i-1,j]+sum_corner[i,j-1]-sum_corner[i-1,j-1]+X[i,j]

Q = int(input())    
A = np.zeros(Q, dtype=int)
B = np.zeros(Q, dtype=int)
C = np.zeros(Q, dtype=int)
D = np.zeros(Q, dtype=int)
for i in range(Q):
    A[i],B[i],C[i],D[i] = map(int,input().split())

for _ in range(Q):
    if A[_]==1 and B[_]==1:
        ans=sum_corner[C[_]-1,D[_]-1]
    elif A[_]==1:
        ans=sum_corner[C[_]-1,D[_]-1]-sum_corner[C[_]-1,B[_]-2]
    elif B[_]==1:
        ans=sum_corner[C[_]-1,D[_]-1]-sum_corner[A[_]-2,D[_]-1]
    else:
        ans=sum_corner[C[_]-1,D[_]-1]-sum_corner[A[_]-2,D[_]-1]-sum_corner[C[_]-1,B[_]-2]+sum_corner[A[_]-2,B[_]-2]
    print(ans.astype(int))