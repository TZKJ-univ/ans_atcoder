import numpy as np

N,K=map(int,input().split())
C=np.zeros(N+1)
D=np.zeros(N+1)
for i in range(1,N+1):
    C[i],D[i]=map(int,input().split())

dp=np.zeros((N+1,K+1),dtype=int)

for i in range(1,K+1):
    
    for j in range(1,N+1):
        if C[j]!=C[j+1]:
            g