import numpy as np
def popcount(x):
    return bin(x).count('1')

def sum_popcount(N, M):
    MOD = 998244353
    result = 0
    
    for i in range(61):
        if (M & (1 << i)) != 0:
            # i ビット目が M で 1 の場合の寄与を計算
            cycle_length = 1 << (i + 1)
            full_cycles = N // cycle_length
            remainder = N % cycle_length
            
            # 完全なサイクルの数における 1 の数
            result += full_cycles * (1 << i)
            
            # 残りの部分の 1 の数
            if remainder >= (1 << i):
                result += remainder - (1 << i) + 1
            
            result %= MOD

    return result

N, M = map(int, input().split())

print(sum_popcount(N, M))