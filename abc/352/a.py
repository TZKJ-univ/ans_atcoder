import numpy as np
N,X,Y,Z=map(int,input().split())

if X<Z<Y or Y<Z<X:
    print('Yes')
else:
    print('No')