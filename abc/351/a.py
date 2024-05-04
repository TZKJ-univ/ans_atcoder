import numpy as np
A=[0]
B=[0]
a=list(map(int,input().split()))
b=list(map(int,input().split()))
for i in range(len(a)):
    A.append(a[i])
for i in range(len(b)):
    B.append(b[i])

A_sum=sum(A)
B_sum=sum(B)

print(A_sum-B_sum+1)