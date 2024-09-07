import numpy as np

N = int(input())

A = np.zeros((N+1, N+1), dtype=int)

for i in range(1, N+1):
    a = list(map(int, input().split()))
    for j in range(1, i+1):
        A[i][j] = a[j-1]
        
# print(A)
L = 1
for _ in range(1, N+1):
    R = _
    if L >= R:
        L = A[L][R]
    else:
        L = A[R][L]

print(L)