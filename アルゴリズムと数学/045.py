import numpy as np
import sys
sys.setrecursionlimit(1 << 20) 
N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
A,B=np.zeros(M+1),np.zeros(M+1)
for i in range(1,M+1):
    A[i], B[i] = map(int, input().split())
    a,b=int(A[i]),int(B[i])
    graph[a].append(b)
    graph[b].append(a)
ans=np.zeros(N+1)

def dfs(v):
    