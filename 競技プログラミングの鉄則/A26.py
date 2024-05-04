import numpy as np
Q=int(input())
X=[0]*Q
for i in range(Q):
    X[i]=int(input()) 
    if X[i]==2:
            print('Yes')
    if X[i]==3:
            print('Yes')
    for j in range(2,int(np.sqrt(X[i]))+1):
        if X[i]%j==0  and X[i]/j!=1:
            print('No')
            break
        else:
            if j==int(np.sqrt(X[i])):
                print('Yes')