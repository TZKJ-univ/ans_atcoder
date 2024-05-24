import numpy as np  

N=int(input())  
A=np.zeros((N+1,N+1))
AA=np.zeros((N+1)*(N+1))
amax=0

graph = [[] for _ in range((N+1)*(N+1))]
first_potential=[]
graph_next_max = [[] for _ in range((N+1)*(N+1))]
for i in range(1,N+1):
    a=input()
    aa=[int(x) for x in list(str(a))]
    # print(a)
    for j in range(1,N+1):
        # print(i,j)
        A[i][j]=a[j-1]
        AA[(i-1)*(N)+j]=a[j-1]
        max = 0
        if i-1 > 0:
            graph[(i-1)*(N)+j].append((i-2)*(N)+j)
            if j-1 > 0:
                graph[(i-1)*(N)+j].append((i-2)*(N)+j-1)
            if j+1 < N+1:
                graph[(i-1)*(N)+j].append((i-2)*(N)+j+1)
        if i+1 < N+1:
            graph[(i-1)*(N)+j].append((i)*(N)+j)
            if j-1 > 0:
                graph[(i-1)*(N)+j].append((i)*(N)+j-1)
            if j+1 < N+1:
                graph[(i-1)*(N)+j].append((i)*(N)+j+1)
        if j-1 > 0:
            graph[(i-1)*(N)+j].append((i-1)*(N)+j-1)
        if j+1 < N+1:
            graph[(i-1)*(N)+j].append((i-1)*(N)+j+1)
        # graph_next_max[(i-1)*(N)+j].append(max)
        if amax < A[i][j]:
            amax=A[i][j]
        
for i in range(1,N+1):
    for j in range(1,N+1):
        max=0
        if A[i][j]==amax:
            first_potential.append([i,j])
        if i-1 > 0:
            if A[i-1][j] > max:
                max=A[i-1][j]
            if j - 1 > 0:
                if A[i-1][j-1] > max:
                    max=A[i-1][j-1]
            if j + 1 < N+1:
                if A[i-1][j+1] > max:
                    max=A[i-1][j+1]
        if i+1 < N+1:
            if A[i+1][j] > max:
                max=A[i+1][j]
            if j - 1 > 0:
                if A[i+1][j-1] > max:
                    max=A[i+1][j-1]
            if j + 1 < N+1:
                if A[i+1][j+1] > max:
                    max=A[i+1][j+1]
        if j-1 > 0:
            if A[i][j-1] > max:
                max=A[i][j-1]
        if j+1 < N+1:
            if A[i][j+1] > max:
                max=A[i][j+1]
        graph_next_max[(i-1)*(N)+j].append(max)
# print(graph)

visited = [0] * ((N+1)*(N+1))
ans_list={}
# print(visited)
def dfs(v, cnt, id):
    cnt += 1
    if cnt > 4:
        return
    if ans_list.get(cnt) == None:
        ans_list.setdefault(cnt,[]).append([AA[v],id])
    elif ans_list[cnt][0][1]==id:
        if ans_list[cnt][0][0] < AA[v]:
            ans_list.setdefault(cnt,[]).append([AA[v],id])
    for next_v in graph[v]:
        max = 0
        if visited[next_v]==0:
            # print(next_v,'next_v',AA[next_v], graph_next_max[v])
            if AA[next_v] > max:
                max = AA[next_v]
    for next_v in graph[v]:  
        if visited[next_v]==0:      
            if max == AA[next_v]:
                dfs(next_v, cnt, id)


for i in range(len(first_potential)):
    visited = [0] * ((N+1)*(N+1))
    dfs((first_potential[i][0]-1)*(N)+first_potential[i][1], 0, i)


# print(A)
# print(AA)
# print(graph)
# print(len(graph))
# print(first_potential)
# print(graph_next_max)
# print(visited)
# print(first_potential)
print(ans_list)

    

