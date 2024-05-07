import numpy as np
N,K=map(int,input().split())
A=[0]
a=list(map(int,input().split()))
used=[0]*(N+1)
for i in range(K):
    A.append(a[i])
    used[a[i]]=1

X=[0]
Y=[0]
max_R=0
for i in range(1,N+1):
    x,y=map(int,input().split())
    X.append(x)
    Y.append(y)

min_dist=[1000000]*(N+1)
for i in range(1,N+1):
    if used[i]==1:
        continue
    else:
        for j in range(1,N+1):
            if used[j]==1 and i!=j:
                dist=np.sqrt(abs(X[i]-X[j])**2+abs(Y[i]-Y[j])**2)
                if dist < min_dist[i]:
                    min_dist[i]=dist
    if min_dist[i] > max_R:
        max_R=min_dist[i]

print(max_R)