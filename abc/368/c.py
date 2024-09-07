import numpy as np
N = int(input())
H = list(map(int, input().split()))

T = 0

i = 0
while i < N:
    if H[i] <= 0:
        i += 1
        if i == N:
            break
    else:
        Hper5 = H[i] // 5
        Hper5_ = H[i] % 5
        # print(Hper5, Hper5_)
        # print(T)
        if Hper5_ == 0:
            T += 3 * Hper5
            i += 1
            if i == N:
                break
        elif Hper5_ == 1:
            T += 3 * Hper5 + 1
            if i != N-1 and H[i + 1] == 1:
                if i + 1 == N - 1:
                    T += 1
                    break
                else:
                    i += 1
                    if i == N:
                        break
                    T += 1
                    i += 1
                    if i == N:
                        break
                    T += 1
                    H[i] -= 3
            else:
                i += 1
                if i == N:
                    break
                T += 2
                H[i] -= 4
        elif Hper5_ == 2:
            T += 3 * Hper5 + 2
            i += 1
            if i == N:
                break
            T += 1
            H[i] -= 3
        else:
            T += 3 * Hper5 + 3
            i += 1
            if i == N:
                break
print(T)