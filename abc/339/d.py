import numpy as np
def divisor_list_s(num):
    divisors = []
    for i in range(1, int(num**0.5)+1):
        if num % i == 0:
            divisors.append(i)  
            if i**2 == num:
                continue
            divisors.append(int(num/i))
#     return divisors # 昇順にしなくてよいならソートは不要
    return sorted(divisors) # 昇順にしたいときはソートする
N=int(input())
A=[]
B=[]
for i in range(N):
    A.append(int(input()))
    B=divisor_list_s(A[i])
    