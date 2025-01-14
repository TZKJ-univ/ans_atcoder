import numpy as np
import bisect

def find_ge(a, x):   # 探索したい数値以上のうち最小の数値のインデックスを探索
    'Find leftmost item greater than or equal to x'
    i = bisect.bisect_left(a, x)
    if i != len(a):
        return i
    return -1

N = int(input())
a = list(map(int, input().split()))

a.sort()

# print(a)

cnt = 0
i = 0
while len(a) > i:
    ai_2 = a[i] * 2
    nibaiizyou = find_ge(a, ai_2)
    if nibaiizyou == -1:
        i += 1
        continue
    else:
        cnt += 1
        a.pop(i)
        a.pop(nibaiizyou-1)
        # print(a)
print(cnt)