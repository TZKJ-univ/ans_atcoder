import numpy as np
N = int(input())
S = [0]*N
cnt = 0
for i in range(N):
    S[i] = input()
    if S[i] == "Takahashi":
        cnt += 1
    
print(cnt)