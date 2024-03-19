from collections import deque
N=int(input())
A=list(map(int,input().split()))
B=list(map(int,input().split()))

dp = [0]*N
dp[0]=0
dp[1]=dp[0]+A[0]

miti=[0]*N
miti[0]=1
miti[1]=1



for i in range(2,N):
    if dp[i-1]+A[i-1] < dp[i-2]+B[i-2]:
        dp[i]=dp[i-1]+A[i-1]
        miti[i]=i
        # print(miti)
    else:
        dp[i]=dp[i-2]+B[i-2]
        miti[i]=i-1
        # print(miti)
# print(dp[N-1])
ans=[]
ans.append(N)
j=N-1
while(ans[0]!=1):
    ans.insert(0,miti[j])
    j=miti[j]-1
print(len(ans))
print(*ans)