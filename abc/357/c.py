import numpy as np
import sys
sys.setrecursionlimit(1 << 20) 

N = int(input())

level_0 = np.array(['#'], dtype=str)

level_1 = np.array([['#', '#', '#'],
                    ['#', '.', '#'],
                    ['#', '#', '#']], dtype=str)


def level_grid(level):
    if level == 0:
        return level_0
    elif level == 1:
        return level_1
    else:
        return np.block([[level_grid(level - 1), level_grid(level - 1), level_grid(level - 1)],
                         [level_grid(level - 1), np.full(((3**(level-1)),(3**(level-1))),'.'), level_grid(level - 1)],
                         [level_grid(level - 1), level_grid(level - 1), level_grid(level - 1)]])

ans = level_grid(N)
for l in ans:
        print("".join(l)) 