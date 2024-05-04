import numpy as np
A=np.zeros((3,3),dtype=int)
for i in range(3):
    A[i,0],A[i,1],A[i,2]=map(int,input().split())
    
# print(A)
takahasi=[0]*(2**9)
aoki=[0]*(2**9)

for i in range(3):
    for j in range(3):
        for k in range(2):
            if k==0:
                takahasi[]