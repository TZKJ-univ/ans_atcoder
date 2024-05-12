import numpy as np
N=int(input())
a=list(map(int,input().split()))
A=[0]

for i in range(N):
    A.append(a[i])
A_sum_list=[A[1]]
for i in range(2,N+1):
    A_sum_list.append(A_sum_list[i-2]+A[i])
    
A_per10_list=[0]
# print(A_sum_list)
ans=0
for i in range(1,N+1):
    A_per10_list.append((A_sum_list[N-1]-A_sum_list[i-1])%(10**8)+((A[i])*(N-i)))
    ans += A_per10_list[i]


# print(A_per10_list)
print(ans)