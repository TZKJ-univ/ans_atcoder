import numpy as np

ans = 0
i_1 = 1
i_2 = 2
for i in range(3,41):
    k = i_1 + i_2
    i_1 = i_2
    i_2 = k - 1
    print(i_1, i_2)

print(i_2)