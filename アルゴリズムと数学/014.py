import math
N=int(input())
n_root=math.sqrt(N)
a=[]
for i in range(2,int(n_root)+1):
    while N%i==0:
        a.append(i)
        N=N//i
if N>1:
    a.append(N)

print(*a)