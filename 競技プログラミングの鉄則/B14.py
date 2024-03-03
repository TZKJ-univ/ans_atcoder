import itertools
import bisect

def enumerate(A):
    Sumlist = []
    for i in range(2 ** len(A)):
        Sum = 0
        for j in range(len(A)):
            wari=2**j
            if (i//wari)%2==1:
                Sum += A[j]
        Sumlist.append(Sum)
    return Sumlist

N,K = map(int,input().split())

A = list(map(int,input().split()))
A_l=A[0:N//2]
A_r=A[N//2:N]

sum_A_l = enumerate(A_l)
sum_A_r = enumerate(A_r)
sum_A_l.sort()
sum_A_r.sort()

for i in range(len(sum_A_l)):
    p = bisect.bisect_left(sum_A_r,K-sum_A_l[i])
    if p < len(sum_A_r) and sum_A_r[p] == K-sum_A_l[i]:
        print("Yes")
        exit()
print("No")

# print(D)
# print(B)