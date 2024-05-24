import numpy as np
N = int(input())
A = []
C = []
A_C={}
A_C_idx={}

for i in range(N):
    a, c = input().split()
    A.append(int(a))
    C.append(int(c))
    A_C.setdefault(int(c),int(a))
    A_C_idx.setdefault(int(c),i)

# print(A_C_max.keys())
# print(ACkeys)
sort_A_C= sorted(A_C.items(), key=lambda x:x[0])
sort_A_C_idx= sorted(A_C_idx.items(), key=lambda x:x[0])
# print(sort_A_C)
# print(sort_A_C_idx,'idx')
ACkeys = sorted(list(A_C.keys()))
# print(ACkeys)
foranslist=[]
foranslist.append(A_C[ACkeys[0]])
# print(ACkeys)
for i in range(len(ACkeys)-1):
    foranslist.append(max(A_C[ACkeys[i]], A_C[ACkeys[i+1]]))

ans_list = []
# print(foranslist)
for i in range(len(sort_A_C)):
    if foranslist[i] <= sort_A_C[i][1]:
        # print(sort_A_C[i][0],A_C_idx[sort_A_C[i][0]])
        ans_list.append(A_C_idx[sort_A_C[i][0]]+1)

print(len(ans_list))
print(*sorted(ans_list))