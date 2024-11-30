import numpy as np
import bisect

def find_le(a, x):   # 探索したい数値以下のうち最大の数値を探索
    'Find rightmost value less than or equal to x'
    i = bisect.bisect_right(a, x)
    if i:
        return i
    raise ValueError

N, M = map(int, input().split())
aa = [1, 11, 21, 31, 41, 51, 61, 71, 81, 91, 101, 111]

max_kurai = find_le(aa, M)

max_diff = M - aa[max_kurai-1] + 1

yoyuu = max_kurai - N

a = [i for i in range(1, 11)]
b = [i for i in range(11, 21)]
c = [i for i in range(21, 31)]
d = [i for i in range(31, 41)]
e = [i for i in range(41, 51)]
f = [i for i in range(51, 61)]
g = [i for i in range(61, 71)]
h = [i for i in range(71, 81)]
i = [i for i in range(81, 91)]
j = [i for i in range(91, 101)]
k = [i for i in range(101, 111)]
l = [i for i in range(111, 121)]

kanou = 0
_ = max_diff 
while max_diff > 0:
    _ = max_diff
    while _ > 0:
        # print(_)
        kanou += _
        _ -= 1
    max_diff -= 1
    

print(yoyuu*10 + kanou)



# print(max_kurai, max_diff, yoyuu)
    