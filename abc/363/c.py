import numpy as np
import itertools

N, K = map(int, input().split())
s=input()
S=[(x) for x in list(str(s))]
potential = list(set(itertools.permutations(s)))

def get_substrings(s, K):
    flag = 0
    for i in range(len(s) - K + 1):
        tuika = s[i:i+K]
        if tuika == tuika[::-1]:
            flag = 1
            return flag      
    return flag

ans_list = []

for i in range(len(potential)):
    # potential[i] = ''.join(potential[i])
    flag = get_substrings(potential[i], K)
    if flag == 0:
        ans_list.append(potential[i])

# print(potential)

print(len(ans_list))