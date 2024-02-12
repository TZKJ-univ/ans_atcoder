import numpy as np
H,W = map(int,input().split())  # H:縦 W:横
X = np.zeros((H,W))
for i in range(H):
    X[i]=list(map(int,input().split()))
        
Q = int(input())    
A = np.zeros(Q)
B = np.zeros(Q)
C = np.zeros(Q)
D = np.zeros(Q)
for i in range(Q):
    A[i],B[i],C[i],D[i] = map(int,input().split())
    
