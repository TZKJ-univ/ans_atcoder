import numpy as np
import collections
N=int(input())
S=np.full((N,10),11)
friend = {}
for i in range(N):
    s=input()
    S[i]=[int(x) for x in list(str(s))]
    for j in range(10): 
        friend.setdefault(S[i][j],[]).append(j)
# print(S)
# print(friend)
Min_=1000000
for i in range(10):
    time_=0
    ff=collections.Counter(friend[i])
    # print(ff)
    ff_max=max(ff.values())
    ff_max_list=[k for k, v in ff.items() if v == ff_max]
    ff_max_list_max=max(ff_max_list)
    # print(ff_max_list_max)
    time_=ff_max_list_max
    # print([ff_max_list_max])
    time_+=(ff[ff_max_list_max]-1)*10
    # print(ff[ff_max_list_max])
    Min_=min(Min_,time_)

print(Min_)