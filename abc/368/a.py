import numpy as np
N, K = map(int, input().split())
A = list(map(int, input().split()))
B = []
for i in range(K):
    B.append(A.pop(-1))
    
B.reverse()

print(*B,*A, sep=' ')
        