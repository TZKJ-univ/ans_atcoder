import numpy as np
N, K = map(int, input().split())

A = list(map(int, input().split()))

A.sort()
_ = 0
ans_s = K
ans_g = N-1
# print(A)

ans = []

for i in range(K+1):
    # print(ans_s, ans_g)
    ans.append([ans_s, ans_g])
    ans_s -= 1
    ans_g -= 1
    


# while _ < K:
#     # print(ans_s, ans_g)
#     if A[ans_g] - A[ans_s+1] > A[ans_g-1] - A[ans_s]:
#         ans_g -= 1
#         _ += 1
#     else:
#         ans_s += 1
#         _ += 1

min = 10**9
ans_s = 0
ans_g = N-1
for i in range(len(ans)):
    if A[ans[i][1]] - A[ans[i][0]] < min:
        min = A[ans[i][1]] - A[ans[i][0]]
        ans_s = ans[i][0]
        ans_g = ans[i][1]
    
print(A[ans_g] - A[ans_s])