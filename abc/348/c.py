import numpy as np

N=int(input())
A=[0]*(N+1)
C=[0]*(N+1)
B={}
for i in range(1,N+1):
    A[i],C[i]=map(int,input().split())
    
c=list(set(C))
# print(c)
for i in range(len(c)):
    B[c[i]]=0
    
for i in range(1,N+1):
    if B[C[i]]==0:
        B[C[i]]=A[i]
    else:
        B[C[i]]=min(B[C[i]],A[i])
# print(B)
        
print(max(B.values()))
