import numpy as np
import sys
sys.setrecursionlimit(1 << 20)
    
N = int(input())
a =list(map(int, input().split()))
graph = [[] for _ in range(N+1)]

for i in range(N):
    if i+1 != a[i]:
        graph[i+1].append(a[i])
visited = [0] * (N+1)
A = 0
already=[0]*(N+1)
def dfs(v):
    if visited[v] == 1:
        return
    visited[v] = 1
    global A 
    A += 1
    for i in graph[v]:
        dfs(i)
atde = 0

for i in range(1,N+1):
    if already[i] == 1:
        continue
    visited = [0] * (N+1)
    ans_ = A
    dfs(i)
    ans = A-ans_-1
    already[a[i-1]] = 1
    atde += ans
    

print(A+atde)
# print(graph)