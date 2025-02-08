import numpy as np

N, M = map(int, input().split())
a = list(map(int, input().split(' ')))
A = [0]
for i in range (M):
    A.append(a[i])

A.sort()
i = 1
j = 1
ans = []
while ( i <= N ):
    if A[j] == i:
        if j == M:
            i += 1
            continue
        else:
            i += 1
            j += 1
            continue
    else:
        ans.append(i)
        i += 1

print(len(ans))
print(*ans)
