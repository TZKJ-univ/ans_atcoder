import numpy as np

N, M = map(int, input().split())
H = list(map(int, input().split()))
ans = 0
for i in range(N):
    if M - H[i] >= 0:
        ans += 1
    M = M - H[i]
    
print(ans)