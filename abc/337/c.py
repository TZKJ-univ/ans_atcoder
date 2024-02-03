
N=int(input())

A_i=list(map(int,input().split()))
A_i=[i-1 for i in A_i]

B_i = [[0] for _ in range(N)]
map(int,B_i)

first=-1
for i in range(N):
    if A_i[i]==-2:
        first=i
    else:
        B_i[A_i[i]]=i
        
int(first)
while first < N:
        print(first+1,end=" ")
        first=B_i[first]
        if type(first)==list:
            break