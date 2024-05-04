import numpy as np
N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
A,B=np.zeros(M+1),np.zeros(M+1)
for i in range(1,M+1):
    A[i], B[i] = map(int, input().split())
    a,b=int(A[i]),int(B[i])
    graph[a].append(b)
    graph[b].append(a)  # 有向グラフなら消す
    
    
for i in range(1,N+1):
    print(i,end='')
    print(': {',end='')
    print(*graph[i],sep=', ',end='')
    print('}')