import numpy as np
import bisect        

N,Q=map(int,input().split())
a=list(map(int,input().split()))
A=[]
A_sum_list=[0]*(N+1)
for i in range(N):
    A.append(a[i])
    
A=sorted(A)
X=[]
for i in range(Q):
    X.append(int(input()))

for i in range(N):
    A_sum_list[i+1]=A_sum_list[i]+A[i]

# print(A)
for j in range(Q):
    h=bisect.bisect_right(A,X[j])
    A_syou_sum=A_sum_list[h]
    A_dai_sum=A_sum_list[N]-A_sum_list[h]
    X_syou_sum=X[j]*h
    X_dai_sum=X[j]*(N-h)
    # print(h,A_syou_sum,A_dai_sum)
    ans=X_syou_sum-A_syou_sum+A_dai_sum-X_dai_sum
    print(ans)