import numpy as np
from itertools import accumulate
N=int(input())
A=list(map(int,input().split( )))
B = list(accumulate(A))

if min(B) >= 0:
    print(B[-1])
else:
    print(B[-1]+(min(B)*-1))