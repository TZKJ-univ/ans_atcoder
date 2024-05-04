import numpy as np
import itertools

N=int(input())

s=input()
S=[(x) for x in list(str(s))]
C=list(map(int,input().split()))

gr = itertools.groupby(S)

dp=np.zeros((N+1,N+1),dtype=int)

for i in range(1,N+1):
    for j in range(1,N+1):
        