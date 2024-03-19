import numpy as np
import bisect    
N=int(input())
A=list(map(int,input().split()))
M=int(input())
B=list(map(int,input().split()))
L=int(input())
C=list(map(int,input().split()))
Q=int(input())
X=list(map(int,input().split()))

A_B=np.zeros((N*M))

for i in range(N):
    for j in range(M):
        A_B[i*M+j]=A[i]+B[j]
        
A_B_C=np.zeros((N*M*L))

for i in range(N*M):
    for j in range(L):
        A_B_C[i*L+j]=A_B[i]+C[j]
A_B.sort()
A_B_C.sort()

for i in range(Q):
    ans=bisect.bisect_left(A_B_C,X[i])
    if ans<len(A_B_C):
        if A_B_C[ans]==X[i]:
            print('Yes')
            break
        else:
            print('No')
    else:
        print('No')
    
# for i in range(Q):
#     for j in range(L):
#         if X[i]-C[j]>=0:
#             ans=bisect.bisect_left(A_B,X[i]-C[j])
#             if ans<len(A_B):
#                 if A_B[ans]==X[i]-C[j]:
#                     print('Yes')
#                     break
#                 elif j==L-1:
#                     print('No')
#                 else:
#                     continue
#             elif j==L-1:
#                 print('No')
#                 break
#             else:
#                 continue
#         else:
#             if j==L-1:
#                 print('No')
#                 break
#             else:
#                 continue


                
                