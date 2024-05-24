import numpy as np
N=int(input())
S =[]
C=[]
souwa = 0
for i in range(N):
    s,c = input().split()
    S.append(s)
    C.append(int(c))
    souwa += int(c)


sorted_S = sorted(S)
ans = souwa % N

print(sorted_S[ans])

# print(sorted_S)