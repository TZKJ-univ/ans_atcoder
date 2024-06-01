import numpy as np
N, X, Y = map(int, input().split())

level1_blue = 0

def f(b,r,bn):
    if bn == 0:
        if r > 1:
            return f(b, r-1, X)
        else:
            return 0
    if b == 1 and r == 1:
        print(bn)
        return bn
    if r > 1:
        if b > 1:
            return f(b, r-1, X) + f(b-1, r-1, Y)
        else:
            return f(b, r-1, X) + bn
    elif b > 1:
        return f(b-1, r, Y)
    else:
        return bn
       

print(f(N,N,0))