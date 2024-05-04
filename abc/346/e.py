import numpy as np
import itertools
import collections as cl

H,W,M=map(int,input().split())
T=np.zeros(M+1,dtype=int)
A=np.zeros(M+1,dtype=int)
X=np.zeros(M+1,dtype=int)
glid=np.zeros((H+1,W+1),dtype=int)

for i in range(1,M+1):
    T[i],A[i],X[i]=map(int,input().split())
    if T[i]==1:
        glid[A[i],1:]=X[i]
    elif T[i]==2:
        glid[1:,A[i]]=X[i]

G=cl.Counter(glid[1,:])
print(G)
print(glid)
# for i in range(1,H+1):
#     G[i]=cl.Counter(glid[i,:])
#     print(G[i])
GL=np.zeros(H+1,dtype=int)
for i in range(1,H+1):
    GL[i]=cl.Counter(glid[i,:])






