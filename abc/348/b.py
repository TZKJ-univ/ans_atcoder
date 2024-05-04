import numpy as np

N=int(input())
X=[0]*(N+1)
Y=[0]*(N+1)

x=[0]*(N+1)
y=[0]*(N+1)

for i in range(1,N+1):
    X[i],Y[i]=map(int,input().split())

for i in range(1,N+1):
    max=-1
    for j in range(1,N+1):
        if np.sqrt((X[i]-X[j])**2+(Y[i]-Y[j])**2)>max:
            max=np.sqrt((X[i]-X[j])**2+(Y[i]-Y[j])**2)
            x[i]=j
    print(x[i])