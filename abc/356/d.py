import numpy as np

N, M = map(int, input().split())

n_2 = (bin(N)[2:])
N_2=[int(x) for x in list(str(n_2))]
m_2 = bin(M)[2:]
M_2=[int(x) for x in list(str(m_2))]

# print(N_2, M_2)
ans = 0
if N < M:
    for i in range(len(N_2)-1, -1, -1):
        if M_2[i] == 1:
            ans += N//(2**(i+1))*(2**i)
            if N%(2**(i+1)) >= 2**i:
                    ans += N%(2**(i+1))-2**i + 1
            # print(ans)
        else:
            continue
else:
    for i in range(len(M_2)-1, -1, -1):
        if M_2[i] == 1:
                ans += (N//(2**(i+1)))*(2**i)
                if N%(2**(i+1)) >= 2**i:
                    ans += N%(2**(i+1))-2**i + 1
                # print(ans, i)
        else:
            continue
    
print(ans%998244353)
        