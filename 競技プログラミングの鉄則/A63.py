import numpy as np
import sys
from collections import deque
sys.setrecursionlimit(1 << 20) 
N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
A,B=np.zeros(M+1),np.zeros(M+1)
d=deque()
dist=[-1]*(N+1)

for i in range(1,M+1):
    A[i], B[i] = map(int, input().split())
    a,b=int(A[i]),int(B[i])
    graph[a].append(b)
    graph[b].append(a)  # 有向グラフなら消す

d.append(1)
dist[1]=0
while d:
    v=d.popleft()
    for i in graph[v]:
        if dist[i]==-1:
            dist[i]=dist[v]+1
            d.append(i)

for i in range(1,N+1):
    print(dist[i])
    


