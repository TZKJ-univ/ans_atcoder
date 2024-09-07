import numpy as np

H, W, Q = map(int, input().split())
R = []
C = []
for i in range(Q):
    r, c = map(int, input().split())
    R.append(r)
    C.append(c)

h = np.zeros(H, dtype=int)
w = np.zeros(W, dtype=int)
hwhL = np.zeros((H, W), dtype=int)
hwhR = np.zeros((H, W), dtype=int)
hwwU = np.zeros((H, W), dtype=int)
hwwD = np.zeros((H, W), dtype=int)
ans = 0

# for i in range(H):
#     for j in range(W):
#         hwhL[i][j] = i+1
#         hwwU[i][j] = j+1
#         hwhR[i][j] = H-i
#         hwwD[i][j] = W-j

# print(hwhL)
# print(hwwU)

for i in range(Q):
    hwhL[R[i]-1][C[i]-1] += 1
    hwwU[R[i]-1][C[i]-1] += 1
    hwhR[R[i]-1][C[i]-1] += 1
    hwwD[R[i]-1][C[i]-1] += 1
    
print(hwhL)
print(hwhR)
print(hwwU)
print(hwwD)
# for i in range(Q):
#     if hw[R[i]-1][C[i]-1] == 0:
#         hw[R[i]-1][C[i]-1] = 1
#         ans += 1
#     else:
#         _ = 0
#         while True:
#             if R[i]-1+_ >= H:
#                 break
#             if hw[R[i]-1+_][C[i]-1] == 0:
#                 hw[R[i]-1+_][C[i]-1] = 1
#                 ans += 1
#                 break
#             _ += 1
#         _ = 0
#         while True:
#             if R[i]-1-_ < 0:
#                 break
#             if hw[R[i]-1-_][C[i]-1] == 0:
#                 hw[R[i]-1-_][C[i]-1] = 1
#                 ans += 1
#                 break
#             _ += 1
#         _ = 0
#         while True:
#             if C[i]-1+_ >= W:
#                 break
#             if hw[R[i]-1][C[i]-1+_] == 0:
#                 hw[R[i]-1][C[i]-1+_] = 1
#                 ans += 1
#                 break
#             _ += 1
#         _ = 0
#         while True:
#             if C[i]-1-_ < 0:
#                 break
#             if hw[R[i]-1][C[i]-1-_] == 0:
#                 hw[R[i]-1][C[i]-1-_] = 1
#                 ans += 1
#                 break
#             _ += 1

# print(hw)

# print(H*W-ans)  
        