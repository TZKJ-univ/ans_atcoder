import numpy as np
N=int(input())

for i in range(1,N+1):
    if i%3==0:
        if i==N:
            print('x')
        else:
            print('x',end='')
    else:
        if i==N:
            print('o')
        else:
            print('o',end='')
        