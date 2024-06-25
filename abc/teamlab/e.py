import numpy as np

ans = 0
for i in range(1, 1025):
    ans += 77777 % i
    ans += 77777 // i

print(ans)