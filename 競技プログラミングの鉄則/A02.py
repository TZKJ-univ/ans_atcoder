N,X=map(int,input().split())
A=list(map(int,input().split()))

for i in range(N):
    if A[i]==X:
        print("Yes")
        exit()
    elif i==N-1:
        print("No")
        exit()
    else:
        continue