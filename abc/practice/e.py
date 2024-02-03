import numpy as np
import bisect

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
 
ABC = list(map(int, input().split()))
A=ABC[0]
B=ABC[1]
C=ABC[2]

G=np.gcd(A, np.gcd(B, C))
#print(np.gcd(A, np.gcd(B, C)))

a=factorization(A/G)
b=factorization(B/G)
c=factorization(C/G)
#print(a)
#print(b)
#print(c)
ans=np.zeros(3, dtype=int)
for i in range(len(a)):
        ans[0]+=(a[i][0]-1)*a[i][1]
for i in range(len(b)):
        ans[1]+=(b[i][0]-1)*b[i][1]
for i in range(len(c)):
        ans[2]+=(c[i][0]-1)*c[i][1]
print(ans[0]+ans[1]+ans[2])
