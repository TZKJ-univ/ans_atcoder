import numpy as np
from collections import defaultdict

N = int(input())
K = [0]
K_max = 10**5
max_A = 10**5

A = [[0 for i in range(N+1)] for j in range(K_max+1)]
for i in range (1, N+1):
    k_a = list(map(int, input().split()))
    K.append(k_a[0])
    A[i] = [0] + k_a[1:] + [0 for i in range(K_max - k_a[0])]


B = [defaultdict(float) for _ in range(N+1)]

for i in range(1, N+1):
    for j in range(1, K[i]+1):
        # print("i: ", i, "j: ", j)
        # print("A[i][j]: ", A[i][j])
        B[i][A[i][j]] += (1 / K[i])

kakuritu  = []
for i in range(1, N+1):
    for j in range(i+1, N+1):
        # print(B[i] * B[j])
        kakuritu.append(sum(B[i][key] * B[j][key] for key in B[i] if key in B[j]))


print(max(kakuritu))
# print(A)
# print(B)