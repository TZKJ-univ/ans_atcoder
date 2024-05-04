import numpy as np
import collections
from scipy.special import comb

N=int(input())
A=list(map(int,input().split()))

UPPER=2*10**5
cnt=[0]*(UPPER+1)
for i in range(N):
    cnt[A[i]]+=1

for i in range(UPPER):
    cnt[i+1]+=cnt[i]

ans=0
for i in range(N):
    ans+=cnt[A[i]-1]*(N-cnt[A[i]])
print(ans)
# a_tyouhuku_dict=collections.Counter(A)
# # print(a_tyouhuku_dict)
# cb = comb(len(a_tyouhuku_dict), 3, exact=True)

# sum_a_dict=sum(a_tyouhuku_dict.values())-len(a_tyouhuku_dict)
# # print(sum_a_dict)

# cb+=sum_a_dict
# print(cb)