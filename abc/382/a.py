import numpy as np

N, D = map(int, input().split())
s=input()
S=[(x) for x in list(str(s))]
cnt = 0

for i in range(N):
    # print(i)
    if S[i] == '@':
        cnt += 1
        
print(N-(cnt-D))