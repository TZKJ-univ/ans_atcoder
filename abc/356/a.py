import numpy as np

N, L, R = map(int, input().split())

A = list(map(int, range(1, N+1)))

# print(A)

A_ = A[L-1:R]

A_sorted = sorted(A_, reverse=True)

print(*(A[:L-1] + A_sorted + A[R:]))
