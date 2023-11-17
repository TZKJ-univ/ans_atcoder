##########################################
#    programmer:  Zama
#    created: Oct 09, 2023 - 00:39:16
##########################################

import numpy as np
import math
import string
import sys

n, m = map(int, input().split())
p = []
c = []
f = []

for i in range(n):
    l = list(map(int, input().split()))
    p.append(l[0])
    c.append(l[1])
    f.append(set(l[2:]))

ok = 1
for i in range(n):
    for j in range(n):
        if p[i] >= p[j]:
            if f[i] <= f[j]:
                if p[i] > p[j]:
                    print("Yes")
                    exit()
                else:
                    for ele in f[j]:
                        if ele not in f[i]:
                            print("Yes")
                            exit()
print("No")