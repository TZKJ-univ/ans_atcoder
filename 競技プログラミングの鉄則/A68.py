import numpy as np
N,M=map(int,input().split())
A,B,C=np.zeros(M+1,dtype=int),np.zeros(M+1,dtype=int),np.zeros(M+1,dtype=int)
for i in range(1,M+1):
    A[i],B[i],C[i]=map(int,input().split())

