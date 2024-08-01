import numpy as np

N = int(input())
s=input()
S=[(x) for x in list(str(s))]
white_s_cnt = 0
black_s_cnt = 0
for i in range(N):
    if S[i] == "W":
        white_s_cnt += 1
    else:
        black_s_cnt += 1
t = input()
T=[(x) for x in list(str(t))]

white_t_cnt = 0
black_t_cnt = 0
for i in range(N):
    if T[i] == "W":
        white_t_cnt -= 1
    else:
        black_t_cnt -= 1

if white_s_cnt != white_t_cnt or black_s_cnt != black_t_cnt:
    print(-1)
    exit()

S.append("."), T.append("."), S.append("."), T.append(".")

