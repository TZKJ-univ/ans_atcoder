import numpy as np
N=int(input())
A=[0]*(N+1)
B=[0]*(N+1)
X=[0]*(N+1)
ans=[0]*(N+1)
ans[1]=0
for i in range(1,N):
    A[i],B[i],X[i]=map(int,input().split())

for i in range(1,N):
    if ans[i+1]>ans[i]+A[i]:
        ans[i+1]=ans[i]+A[i]
    if ans[X[i]]>ans[i]+B[i]:
        ans[X[i]]=ans[i]+B[i]

print(ans[N])