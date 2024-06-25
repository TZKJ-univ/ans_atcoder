import numpy as np

N = int(input())
A = np.zeros((2*N)+1, dtype=int)
a = list(map(int, input().split()))

for i in range(2*N):
    A[i+1] = a[i]
    
ans = np.zeros(N+1, dtype=int)
for i in range(1,2*N+1-2):
    if A[i]==A[i+2]:
        if A[i+1] != A[i]:
            ans[A[i]]+=1

print(sum(ans))