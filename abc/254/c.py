import numpy as np
import bisect
import collections

N,K=map(int,input().split())
a=[0]
aa=list(map(int,input().split()))
for i in range(N):
    a.append(aa[i])

N_minus_K=N-K
if sorted(a[1:])==a[1:]:
    print('Yes')
    exit()

if K==1:
    print('Yes')
    exit()

sorted_a=sorted(a)
# print(sorted_a)
used=[0]*(N+1)
a_count=collections.Counter(a)
for i in range(1,N+1):
    cnt=a_count[a[i]]
    if a[i]==sorted_a[i]:
        used[i]=1
        continue
    else:
        ans=bisect.bisect_left(sorted_a,a[i])
        hantei=0
        for j in range(cnt):
            if (ans-i+j)%K==0 and used[ans+j]==0:
                hantei=1
                used[ans+j]=1
                break
            else:
                continue
        if hantei==0:
            print('No')
            exit()
print('Yes')