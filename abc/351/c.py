import numpy as np
from collections import deque
N=int(input())

A=list(map(int,input().split()))

# print(A)
d=deque()
for i in range(N):
    d.append(A[i])
    # print(d)
    while True:
        if len(d)<=1:
            break
        elif d[-1]!=d[-2]:
            break
        else:
            firstleft=d.pop()
            d.pop()
            wa=firstleft+1
            d.append(wa)
            continue    
print(len(d))
# ans=2**A[0]
# sum_ans=0
# cnt=0
# for i in range(1,N):
#     if 2**A[i]>ans or i==N-1:
#         ANS=list(format(ans,'b'))
#         sum_ans+=ANS.count('1')
#         ans=2**A[i]
#         print(ANS)
#         cnt=0
#     else:
#         ans+=2**A[i]
#         cnt+=1
#         print('b')

# print(sum_ans)
# print(A_copy)
# print(ans)
