import numpy as np
import bisect

def find_ge(a, x, N):   # 探索したい数値以上のうち最小の数値のインデックスを探索
    'Find leftmost item greater than or equal to x'
    i = bisect.bisect_left(a, x)
    if i != len(a):
        return i
    return N

N = int(input())
a = list(map(int, input().split()))

a.sort()

# print(a)

cnt = 0
for i in range(N):
    ai_2 = a[i] * 2
    nibaiizyou = find_ge(a, ai_2, N)
    cnt += N - nibaiizyou
    
print(cnt)