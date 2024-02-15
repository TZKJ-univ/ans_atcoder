import bisect
N,X=map(int,input().split())
A=list(map(int,input().split()))

def serch(x):
    L=1
    R=N
    while L<=R:
        m=(L+R)//2
        if x < A[m]:
            R=m-1
        elif x > A[m]:
            L=m+1
        else:
            return m
    return -1

print(serch(X)+1)
#equivalent
print(bisect.bisect_left(A,X)+1)