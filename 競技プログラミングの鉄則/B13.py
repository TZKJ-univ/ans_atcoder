N,K=map(int,input().split())
A=list(map(int,input().split()))
R = [0]*N
H = [0]*N
for i in range(N):
    if i==0:
        R[i]=0
        H[i]=A[i]
    else:
        R[i]=R[i-1]
        H[i]=H[i-1]-A[i-1]
    while R[i]<N-1 and H[i]+A[R[i]+1]<=K:
        R[i]+=1
        H[i]+=A[R[i]]
    
ans=0
# print(R)
# print(H)
for i in range(N):
    ans += (R[i]-i+1)
print(ans)