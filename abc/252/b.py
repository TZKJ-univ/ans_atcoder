import numpy as np
N,K=map(int,input().split())
A=[0]
B=[0]
a=list(map(int,input().split()))
b=list(map(int,input().split()))
for i in range(N):
    A.append(a[i])
for i in range(K):
    B.append(b[i])

for i in range(1,K+1):
    if A[B[i]]==max(A):
        print("Yes")
        exit()
    else:
        continue

print("No")