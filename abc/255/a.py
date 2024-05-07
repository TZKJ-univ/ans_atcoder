import numpy as np
R,C=map(int,input().split())
A=np.zeros((2,2))
for i in range(2):
    A[i][0],A[i][1]=map(int,input().split())

print(int(A[R-1][C-1]))