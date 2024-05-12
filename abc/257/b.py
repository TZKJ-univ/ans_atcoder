import numpy as np
N,K,Q=map(int,input().split())
A=[0]
L=[0]
masu=np.zeros(N+1)
a=list(map(int,input().split()))
l=list(map(int,input().split()))
for i in range(K):
    A.append(a[i])
    masu[a[i]]+=1
for i in range(Q):
    L.append(l[i])

# print(masu)

for i in range(1,Q+1):
    if A[L[i]]==N:
        continue
    else:
        if masu[A[L[i]]+1]==0:
            masu[A[L[i]]+1]=1
            masu[A[L[i]]]=0
            A[L[i]]=A[L[i]]+1
        else:
            continue
cnt=0
for i in range(1,N+1):
    if masu[i]>0:
        if cnt<K-1:
            print(i,end=' ')
            cnt+=1
        else:
            print(i)
    else:
        continue
