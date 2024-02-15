import bisect 
N = int(input())
A = list(map(int,input().split()))
Q = int(input())
X = [0]*(Q+1)
a=sorted(A)
for i in range(1,Q+1):
    X[i] = int(input())
    print(bisect.bisect_left(a,X[i]))