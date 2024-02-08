import itertools
import pandas as pd
import numpy as np

N,W=map(int, input().split())
A=list(map(int, input().split()))
flag=[0]*(W+1)
for i in range(N):
    s = A[i]
    if s <= W:
        flag[s]=1
for i in range(N):
    for j in range(i+1,N):
        s=A[i]+A[j]
        if s <= W:
            flag[s]=1
for i in range(N):
    for j in range(i+1,N):
        for k in range(j+1,N):
            s=A[i]+A[j]+A[k]
            if s <= W:
                flag[s]=1
cnt=0
for i in range(1,W+1):
    if flag[i]==1:
        cnt+=1
print(cnt)
#i=0
# while True:
#     if i>=len(A):
#         break
#     if A[i] > W:
#         A.pop(i)
#     else:
#         i+=1
# combr3 = list(itertools.combinations(A, 3))
# combr2 = list(itertools.combinations(A, 2))
# combr1 = list(itertools.combinations(A, 1))
# combr = combr3+combr2+combr1
# #print(combr)
# ans=[]
# for i in range(len(combr)):
#     #print(ans[0:(i-2)])
#     if sum(combr[i])<=W:
#         ans.append(sum(combr[i]))
#         #print('ans',ans)
#         #print('cnt=',cnt)
#         #print(ans[len(combr)+j])
#         #print('cnt=',cnt)
# print(len(np.unique(ans))-1)