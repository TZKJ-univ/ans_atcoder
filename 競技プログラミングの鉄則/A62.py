import numpy as np
import sys
sys.setrecursionlimit(1 << 20) 
N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
A,B=np.zeros(M+1),np.zeros(M+1)
visited = np.zeros(N+1)
for i in range(1,M+1):
    A[i], B[i] = map(int, input().split())
    a,b=int(A[i]),int(B[i])
    graph[a].append(b)
    graph[b].append(a)  # 有向グラフなら消す

def dfs(x):
    visited[x] = 1
    for i in graph[x]:
        if visited[i] == 0:
            dfs(i)
    return
dfs(1)

for i in range(1,N+1):
    if visited[i] == 0:
        print("The graph is not connected.")
        exit()
print("The graph is connected.")
    