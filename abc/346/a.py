import numpy as np

N=int(input())
A=list(map(int,input().split()))
B=[0]*N

for i in range(N-1):
    B[i]=A[i]*A[i+1]
    
for i in range(N-1):
    if i==N-2:
        print(B[i])
    else:
        print(B[i],end=' ')