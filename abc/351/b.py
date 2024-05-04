import numpy as np

N=int(input())
A=np.full((N+1,N+1),':')
B=np.full((N+1,N+1),':')

for i in range(1,N+1):
    a=input()
    aa=[(x) for x in list(str(a))]
    for j in range(1,len(a)+1):
        A[i][j]=aa[j-1]
        
for i in range(1,N+1):
    b=input()
    bb=[(x) for x in list(str(b))]
    for j in range(1,len(b)+1):
        B[i][j]=bb[j-1]

# print(A)
# print(B)
for i in range(1,N+1):
    for j in range(1,N+1):
        if A[i][j]!=B[i][j]:
            print(i,j)