import numpy as np

S = list(input())
T = list(input())

X = []

# print(S,T,X)

sa = []
for i in range(len(S)):
    # print(i)
    if T[i] != S[i]:
        if ord(S[i]) > ord(T[i]):
            S[i] = T[i]
            # print(S)
            X.append(S.copy())
        else:
            sa.append(i)
            
for i in range(len(sa)-1, -1, -1):
    S[sa[i]] = T[sa[i]]
    X.append(S.copy())

print(len(X))
for x in X:
    print(''.join(x))
    