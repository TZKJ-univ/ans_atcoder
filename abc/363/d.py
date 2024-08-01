import numpy as np

N = int(input())

N_per10 = (N - 1) // 10
N_mod10 = N % N_per10

max_mid_num_num = N_per10 * 2 - 1
min_mid_num_num = N_per10 * 2 - 2

max_ketasu = max_mid_num_num + 2
min_ketasu = min_mid_num_num + 2

if N_per10 == 0:
    print(N-1)
    exit()

keta_18kind = [-1] * 19

for i in range(18, -1, -1):
    keta_18kind[i] = N // 10**(i-1) - 10**(i)

print(keta_18kind)

ans = [0] * 38

for i in range(18, 0, -1):
    if keta_18kind[i] > 0:
        ans[i] = 1

