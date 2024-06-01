import numpy as np

N, M = map(int, input().split())

A = [-1]
X = np.zeros((N+1, M+1), dtype=int)
a = list(map(int, input().split()))
for i in range(M):
    A.append(a[i])

for i in range(1, N+1):
    xi =list(map(int, input().split()))
    for j in range(1, M+1):
        X[i][j] = xi[j-1]
        X[0][j] += xi[j-1]
# print(X)


for j in range(1, M+1):
    if X[0][j] < A[j]:
        print('No')
        exit()
        
        
print('Yes')

