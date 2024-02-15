import numpy as np
H,W,N = map(int,input().split())
A = [0]*(N+2)
B = [0]*(N+2)
C = [0]*(N+2)
D = [0]*(N+2)
dif = np.zeros((H+2,W+2),dtype=int)
HWsum=np.zeros((H+2,W+2),dtype=int)
for i in range(1,N+1):
    A[i],B[i],C[i],D[i] = map(int,input().split())
    dif[A[i],B[i]] += 1
    dif[C[i]+1,D[i]+1] += 1
    dif[A[i],D[i]+1] -= 1
    dif[C[i]+1,B[i]] -= 1

for i in range(H+1):
    HWsum[i,0] = 0
for i in range(W+1):
    HWsum[0,i] = 0
    
for i in range(1,H+1):
    for j in range(1,W+1):
        HWsum[i,j] = HWsum[i-1,j]+dif[i,j]
for i in range(1,H+1):
    for j in range(1,W+1):
        HWsum[i,j] = HWsum[i,j-1]+HWsum[i,j]

#print(dif)
for i in range(1,H+1):
    for j in range(1,W+1):
        print(HWsum[i,j],end=" ")
    print()
#print(HWsum)