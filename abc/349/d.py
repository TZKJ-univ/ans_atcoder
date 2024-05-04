import numpy as np
L,R=map(int,input().split())

l_min_2=2*(int(np.log2(L))+1)

R_min_2=2*(int(np.log2(R))+1)

print(l_min_2,R_min_2)