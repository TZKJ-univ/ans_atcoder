import numpy as np

N = int(input())
A = np.array(list(map(int, input().split())), dtype=int)

for i in range(N):
    k = A[i]
    if A[i] < N - i:
        A[i:i+k+1] += 1
        A[i] = 0
    else:
        A[i:N] += 1
        A[i] -= (N-i)
    # print(*A)

print(*A)