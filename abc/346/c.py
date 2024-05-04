import numpy as np
import collections as cl

N,K=map(int,input().split())
A=list(map(int,input().split()))
sum_A_under_K=0

a=list(set(A))
for i in range(len(a)):
    if a[i]<=K:
        sum_A_under_K+=a[i]
        # print(a[i])

sum_K=K*(K+1)//2
# print(sum_K)
# print(sum_A_under_K)
print(sum_K-sum_A_under_K)


