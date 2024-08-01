import numpy as np

N, K, X = map(int, input().split())
a = list(map(int, input().split()))
A = [0]
for i in range(N):
    A.append(a[i])

ans =[]
flag = 0
i = 1
while i < N+1:
    if i == K+1 and flag == 0:
        ans.append(X)
        flag = 1
    else:
        ans.append(A[i])
        i += 1
    if i == N+1 and flag == 0:
        ans.append(X)
        flag = 1
    
print(*ans)