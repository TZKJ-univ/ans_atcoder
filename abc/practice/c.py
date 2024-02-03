import numpy as np

H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]

A_np = np.array(A)
B = np.zeros((H, W), dtype=int)
C = np.zeros((H), dtype=int)
D = np.zeros((W), dtype=int)

for i in range(H):
    C[i] = np.sum(A_np[i, :])
for j in range(W):
    D[j] = np.sum(A_np[:, j])
    

for i in range(H):
    for j in range(W):
        B[i][j] = C[i] + D[j] - A_np[i, j]

for row in B:
    print(*row)
