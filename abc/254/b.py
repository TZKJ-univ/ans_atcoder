import numpy as np
N=int(input())
a=np.zeros((N,N+1))
for i in range(N):
    for j in range(i+1):
        if j==i:
            a[i][j]=1
        elif j==0:
            a[i][j]=1
        else:
            a[i][j]=a[i-1][j-1]+a[i-1][j]

for i in range(N):
    for j in range(i+1):
        if j==i:
            print(int(a[i][j]))
        else:
            print(int(a[i][j]),end=" ")
            