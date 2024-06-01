import numpy as np
N,X, Y, Z = map(int, input().split())
A = {}
B = {}
A_B = {}
a = list(map(int, input().split()))
b = list(map(int, input().split()))
sirusi = [0]*(N+1)
for i in range(N):
    A[i+1] = a[i]
    B[i+1] = b[i]
    A_B[i+1] = a[i] + b[i]


A_sort = sorted(A.items(), key=lambda x: x[1], reverse=True)

B_sort = sorted(B.items(), key=lambda x: x[1], reverse=True)

A_B_sort = sorted(A_B.items(), key=lambda x: x[1], reverse=True)

# print(A_sort)
i=0
j=0
while i < X:
    if j == N:
        break
    if sirusi[A_sort[j][0]] == 0:
        sirusi[A_sort[j][0]] = 1
        i += 1
    j += 1


i = 0
j = 0
while i < Y:
    if j == N:
        break
    if sirusi[B_sort[j][0]] == 0:
        sirusi[B_sort[j][0]] = 1
        i += 1
    j += 1
# print(sirusi)
# print(A_B_sort)
        
i = 0
j = 0
while i < Z:
    if j == N:
        break
    if sirusi[A_B_sort[j][0]] == 0:
        sirusi[A_B_sort[j][0]] = 1
        i += 1
    j += 1

for i in range(1, N+1):
    if sirusi[i] == 1:
        print(i)