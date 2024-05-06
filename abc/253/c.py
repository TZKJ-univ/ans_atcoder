import numpy as np

Q=int(input())
Query=np.zeros((Q,3))
for i in range(Q):
    q=list(map(int,input().split()))
    for j in range(len(q)):
        Query[i][j]=Q[j]

Smax=-1
Smin=10**9+1
S=[]

for i in range(Q):
    
    print(Query[i])