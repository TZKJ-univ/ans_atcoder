import numpy as np

Sx, Sy = map(int, input().split())
Tx, Ty = map(int, input().split())

sx, sy = Sx+0.5, Sy+0.5

dx = abs(Tx-Sx)
dy = abs(Ty-Sy)

dz = dx - dy

ans = dy

Sx_odd_flag = 0
Tx_odd_flag = 0
Sy_odd_flag = 0
Ty_odd_flag = 0

if Sx%2 == 0:
    Sx_odd_flag = 0
else:
    Sx_odd_flag = 1

if Tx%2 == 0:
    Tx_odd_flag = 0
else:
    Tx_odd_flag = 1
    
if Sy%2 == 0:
    Sy_odd_flag = 0
else:
    Sy_odd_flag = 1

if Ty%2 == 0:
    Ty_odd_flag = 0
else:
    Ty_odd_flag = 1
    
if Sx_odd_flag == 0 and Sx < Tx:
    dz -= 1

if Sx_odd_flag == 1 and Sx > Tx:
    dz -= 1

if Tx_odd_flag == 0 and Sx > Tx:
    dz -= 1

if Tx_odd_flag == 1 and Sx < Tx:
    dz -= 1

if dz > 0:
    ans += dz//2

# # print(dz, Sx_odd_flag, Tx_odd_flag, Sx, Tx)
# if dz > 0:
#     if dy == 0:
#         if Sy_odd_flag == 0 and Ty_odd_flag == 0:
#             if Sx_odd_flag == 0 and Tx_odd_flag == 1:
#                 if Sx < Tx:
#                     dz = dz//2
#                     # print(dz)
#                 else:
#                     dz = dz//2 + 1
#                 dz = dz//2
#             elif Sx_odd_flag == 1 and Tx_odd_flag == 1:
#                 dz = dz//2
#             elif Sx_odd_flag == 0 and Tx_odd_flag == 0: 
#                 dz = dz//2
#             else:
#                 if Sx > Tx:
#                     dz = dz//2
#                 else:
#                     dz = dz//2 + 1
#         elif Sy_odd_flag == 1 and Ty_odd_flag == 1:
#             if Sx_odd_flag == 0 and Tx_odd_flag == 1:
#                 if Sx > Tx:
#                     dz = dz//2
#                     # print(dz)
#                 else:
#                     dz = dz//2 + 1
#                 dz = dz//2
#             elif Sx_odd_flag == 1 and Tx_odd_flag == 1:
#                 dz = dz//2
#             elif Sx_odd_flag == 0 and Tx_odd_flag == 0: 
#                 dz = dz//2
#             else:
#                 if Sx < Tx:
#                     dz = dz//2
#                 else:
#                     dz = dz//2 + 1
#     else:
#         if Sx_odd_flag == 1 and Tx_odd_flag == 1:
#             if Sx > Tx:
#                 dz = dz//2
#             else:
#                 dz = dz//2 + 1 
#         elif Sx_odd_flag == 0 and Tx_odd_flag == 0:
#             if Sx < Tx:
#                 dz = dz//2
#             else:
#                 dz = dz//2 + 1
#         else:
#             dz = dz//2
        
#     ans += dz

# print(dz)
# print(Sx_odd_flag, Tx_odd_flag, Sy_odd_flag, Ty_odd_flag)
print(ans)