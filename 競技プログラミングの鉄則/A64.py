import numpy as np
import sys
import heapq
sys.setrecursionlimit(1 << 20) 
N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
A,B,C = np.zeros(M+1),np.zeros(M+1),np.zeros(M+1)
d=[]
dist=[10**10]*(N+1)
for i in range(1,M+1):
    A[i], B[i] ,C[i] = map(int, input().split())
    a,b,c=int(A[i]),int(B[i]),int(C[i])
    graph[a].append([b,c])
    graph[b].append([a,c])  # 有向グラフなら消す

dist[1]=0
heapq.heappush(d,[1,dist[1]])
while d:
    v=heapq.heappop(d)
    for i in graph[v[0]]:
        if dist[i[0]]>v[1]+i[1]:
            dist[i[0]]=v[1]+i[1]
            d.append([i[0],dist[i[0]]])

for i in range(1,N+1):
    if dist[i]==10**10:
        print(-1)
    else:
        print(dist[i])