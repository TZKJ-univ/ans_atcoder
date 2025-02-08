import numpy as np

N = int(input())
p = list(map(int, input().split()))
q = list(map(int, input().split()))
P = [0]
Q = [0]
for i in range (N):
    P.append(p[i])
    Q.append(q[i])
P_Q = {}
Q_i = {}
for i in range (1, N+1):
    # print (P[i], Q[i], i)
    Q_i[Q[i]] = i

for i in range (1, N+1):
    P_Q[P[i]] = Q[P[i]]

# print(P_Q)
# print(Q_i)
ans = []
for i in range (1, N+1):
    # print(int(Q_i.get(i)))
    ans.append(P_Q[P[int(Q_i[i])]])

print(*ans)
    
