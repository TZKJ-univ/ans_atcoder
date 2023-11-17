##########################################
#    programmer:  Zama
#    created: Oct 07, 2023 - 20:41:28
##########################################

import numpy as np
import math
import string
import sys

N, P, Q = map(int, input().split(' '))
D = list(map(int, input().split(' ')))

mv = P

for ele in D:
    mv = min(Q+ele, mv)

print(mv)