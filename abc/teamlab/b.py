import numpy as np

MAX_NUM = 1000000

cnt = 0
for i in range(1,MAX_NUM+1):
    num = [int(x) for x in list(str(i))]
    if sum(num)%7 ==0:
        cnt += 1

print(cnt)

if (1 + 2 +3 +4+5+6+7)%7 == 0:
    print("r")