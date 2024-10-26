import numpy as np

N, M = map(int, input().split())
L, R = [], []

H =set()
W = set()

for _ in range(N):
    l, r = map(int, input().split())
    L.append(l)
    R.append(r)
    H.add(l)
    W.add(r)

ans = (M * (M + 1)) // 2

# print(ans)

for i in range(N):
    

ans -= len(HW)
# print(HW)
print(ans)
