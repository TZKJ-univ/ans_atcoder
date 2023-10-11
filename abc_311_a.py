##########################################
#    programmer:  Zama
#    created: Oct 09, 2023 - 00:30:03
##########################################

import numpy as np
import math
import string
import sys

n = input()
s = input()

flag = [0, 0, 0]
for i, e in enumerate(s):
    if (e == "A"):
        flag[0] = 1
    if (e == "B"):
        flag[1] = 1
    if (e == "C"):
        flag[2] = 1
    if (flag[0] * flag[1] * flag[2] == 1):
        print(i+1)
        exit()