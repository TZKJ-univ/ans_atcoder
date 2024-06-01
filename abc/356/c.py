import numpy as np

N, M, K = map(int, input().split())
A = np.zeros((M+1, N+1), dtype=int)
C = np.zeros(M+1, dtype=int)
R = np.full(M+1, "#")
B = np.zeros((M+1, N+1), dtype=int)

for i in range(1, M+1):
    c_a_r = list(input().split())
    C[i] = int(c_a_r[0])
    R[i] = c_a_r[-1]
    for j in range(1, C[i]+1):
        A[i][j]=int(c_a_r[j])
    
    
print(A, C, R)
        
        

for i in range(1, M+1):
    if C[i] < K:
        continue
    elif R[i] == 'o':
        B[i][0] = C[i]-K
        for j in range(1, C[i]+1):
            B[i][A[i][j]] = 1
    else:
        B[i][0] = C[i]-K
        for j in range(1, C[i]+1):
            B[i][A[i][j]] = -1

print(B)
        
        