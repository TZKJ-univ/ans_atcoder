import numpy as np

N, M, X, T, D = map(int, input().split())

if X < M:
    print(T)
else:
    print(T - (X - M) * D)