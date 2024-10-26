import sys
import numpy as np
sys.setrecursionlimit(1 << 20) 

N, M = map(int, input().split())

a = []
b = []

HW = set()

knight = [(2, 1), (1, 2), (-1, 2), (-2, 1), (-2, -1), (-1, -2), (1, -2), (2, -1)]

for _ in range(M):
    x, y = map(int, input().split())
    a.append(x)
    b.append(y)
    
    HW.add((x, y))
    
    for dx, dy in knight:
        nx, ny = x + dx, y + dy
        if 1 <= nx <= N and 1 <= ny <= N:
            HW.add((nx, ny))

ans = N * N - len(HW)
print(ans)