import numpy as np

L, R = map(int, input().split())

if L == 1 and R == 0:
    print('Yes')
    exit()
elif L == 0 and R == 1:
    print('No')
    exit()
else:
    print('Invalid')
    exit()