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
    graph[b].append(a)
    
path=[]    
def dfs(v):
    if v==1:
        path.append(v)
        path.reverse()
        print(*path)
        exit()
    visited[v]=1
    path.append(v)
    for i in graph[v]:
        if visited[i]==0:
            dfs(i)
    path.pop()

dfs(N)

print(path)