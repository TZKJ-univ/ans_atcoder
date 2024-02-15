import numpy as np
N = int(input()) 

A = [0]*(N+2)
B = [0]*(N+2)
C = [0]*(N+2)
D = [0]*(N+2)
diff = np.zeros((1502,1502),dtype=int)
HWsum = np.zeros((1502,1502),dtype=int)
for i in range(1,N+1):
    A[i],B[i],C[i],D[i] = map(int, input().split())
    diff[B[i],A[i]]+=1
    diff[D[i],C[i]]+=1
    diff[D[i],A[i]]-=1
    diff[B[i],C[i]]-=1
ans=0
if diff[0,0]>0:
    ans+=1  
for i in range(1501):
    HWsum[i,0] = diff[i,0]
for i in range(1501):
    HWsum[0,i] = diff[0,i]


for i in range(1,1501):
    for j in range(0,1501):
        HWsum[i,j] = HWsum[i-1,j] + diff[i,j]
        if j==0:
            if HWsum[i,j]>0:
                ans+=1

for i in range(0,1501):
    for j in range(1,1501):
        HWsum[i,j] = HWsum[i,j-1] + HWsum[i,j]
        if HWsum[i,j]>0:
            ans+=1
            #print(i,j)
#print(HWsum)
print(ans)

    