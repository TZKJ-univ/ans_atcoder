import numpy as np
N=int(input())
A = [0]*N
B = [0]*N
d={}
for i in range(1,N):
    A[i],B[i]=map(int,input().split())
    if (A[i],B[i]) in d:
        d[A[i],B[i]]+=1
    else:
        d[A[i],B[i]]=1

C=list(map(int,input().split()))
for i in range(N):
    for j in range(N):
        

print(d)