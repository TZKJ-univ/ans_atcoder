import numpy as np
import collections

N=int(input())
a=list(map(int,input().split()))
A=[0]
keta_list=[]

for i in range(N):
    A.append(a[i])
    keta_list.append(len(str(a[i])))
    
keta_list_sum=[collections.Counter(keta_list[:1])]

for i in range(2,N+1):
    keta_list_sum.append(collections.Counter(keta_list[:i]))

# for i in range(0,N):
#     keta_list_sum[i] += keta_list_sum[i-1]
    

# print(keta_list_sum)
keta_list_sum=list(keta_list_sum)
keta_list_list=[]
for i in range(N):
    keta_list_list.append(list(keta_list_sum[i].items()))
    keta_list_list[i]
# print(keta_list_list)
# print(keta_list_sum)
ans=0
for i in range(1,N+1):
    ans += A[i]*(i-1)
    # print(ans)
    for j in range(len(keta_list_list[N-1])):
        if j < len(keta_list_list[i-1]):
            # print(N-1,i-1,j)
            if keta_list_list[i-1][j][0] == keta_list_list[N-1][j][0]:
                kk = keta_list_list[N-1][j][1] - keta_list_list[i-1][j][1]
                # keta_list_list[N-i][j][1] = keta_list_list[N-i][j][1] - keta_list_list[i][j][1]
            else:
                kk = keta_list_list[N-1][j][1]
        else:
            kk = keta_list_list[N-1][j][1]
        ans += (A[i]*(10**(keta_list_list[N-1][j][0])))*(kk)
        # print(A[i]*(10**(keta_list_list[N-1][j][0])),kk)
        # # print(keta_list_list[N-i-1][j][0],kk)
print(ans%998244353)