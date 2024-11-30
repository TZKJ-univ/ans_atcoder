import numpy as np
import bisect

def find_le(a, x):   # 探索したい数値以下のうち最大の数値を探索
    'Find rightmost value less than or equal to x'
    i = bisect.bisect_right(a, x)
    if i:
        return a[i-1]
    return -1

N, M = map(int, input().split())
A=[0]
A_MIN = [2*10**5+1]
A_zisyo = {-1: -1}
a=list(map(int,input().split()))
for i in range(N):
  A.append(a[i])
  A_zisyo.setdefault(a[i],i+1)
  A_MIN.append(min(A_MIN[-1],a[i]))
  
A_MIN.reverse()
B=[0]
b=list(map(int,input().split()))
for i in range(M):
  B.append(b[i])
  
sentou = 1
ans=[-1]*(M+1)

for _ in range(1,M+1):
    basyo = find_le(A_MIN,B[_])
    # print(basyo)
    ans[_] = A_zisyo[basyo]

print(*ans[1:],sep="\n")
# print(A_MIN)
# print(A_zisyo)