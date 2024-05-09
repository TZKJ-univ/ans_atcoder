import numpy as np
N=int(input())
A=[0]
a=list(map(int,input().split()))
for i in range(N):
  A.append(a[i])
  
masu_=np.zeros((N+2,4))
P=0
# print(A)
for i in range(N+1):
    masu_[i][0]=1

for i in range(1,N+1):
    for j in range(4):
        if masu_[i][j]==1:
            if (j+A[i])<=3:
                # print(A[i],j)
                masu_[i+1][j+A[i]]=1
            else:
                P+=1
        else:
            continue
    # print(masu_)

print(P)