import numpy as np

N=int(input())
A=[]
B=[]
C=[]
ans=0
abc=np.zeros((N,2))
ab=[]
for i in range(N):
    a,b=map(int,input().split())
    A.append(a)
    B.append(b)
    C.append(b-a)
    abc[i]=[i,b-a]
    ab.append(a)
    ab.append(b)
    

abc_sorted_by_C=abc[np.argsort(abc[:,1])]

# print(abc)
# print(abc_sorted_by_C)
ans+=B[int(abc_sorted_by_C[-1][0])]
# print(int(abc_sorted_by_C[-1][0]))
# print(ans)
for i in range(N):
    if i!=int(abc_sorted_by_C[-1][0]):
        ans+=A[i]
        # print(ans)

print(ans)

