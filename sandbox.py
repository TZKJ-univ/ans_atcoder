import numpy as np

N,M=map(int,input().split())
A=np.zeros((N+1,M+1))
for i in range(1,N+1):
    a=list(map(int,input().split()))
    A[i]=np.array([0]+a)

X=int(input())
R=[0]
S=[0]
for i in range(X):
    r,s=map(int,input().split())
    R.append(r)
    S.append(s)
genzaiti=1
# print(A)
ans=0
for i in range(1,X+1):
    ans+=abs(A[R[i]][S[i]]-A[R[i]][genzaiti])
    genzaiti=S[i]
    

print(int(ans))