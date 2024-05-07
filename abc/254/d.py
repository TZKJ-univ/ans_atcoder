import numpy as np
import math
from scipy.special import comb
N=int(input())

def factorization(n):
    arr = []
    temp = n
    for i in range(2, int(-(-n**0.5//1))+1):
        if temp%i==0:
            cnt=0
            while temp%i==0:
                cnt+=1
                temp //= i
            arr.append([i, cnt])

    if temp!=1:
        arr.append([temp, 1])

    if arr==[]:
        arr.append([n, 1])

    return arr

factorize_list=[]
ans_dict={} 
ans_cnt=1#1,1の場合
heihousu_num=0
for i in range(2,N+1):
    factorize_list.append(factorization(i))
    factorize_list[i-2]=dict(factorize_list[i-2])
    heihou_hantei=0
    for key in factorize_list[i-2].keys():
        factorize_list[i-2][key]=factorize_list[i-2][key]%2
        if factorize_list[i-2][key]!=0:
            heihou_hantei=1
    kk=str(factorize_list[i-2])
    ans_dict.setdefault(kk,[]).append(i)
    if heihou_hantei==0:
        heihousu_num+=1
    
for key in ans_dict.keys():
    ans_cnt+=(len(ans_dict[key]))**2
    # print(key,len(ans_dict[key]))
ans_cnt+=heihousu_num*2#1,平方数の場合
# print(factorize_list)
# print(ans_dict)
# print(heihousu_num)
ans_cnt+=heihousu_num*(heihousu_num-1)#平方数,平方数の場合
print(int(ans_cnt))
