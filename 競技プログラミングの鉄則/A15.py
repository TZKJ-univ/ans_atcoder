import bisect
N=int(input())
A=list(map(int,input().split()))

a_set = set(A)
a_sorted = sorted(a_set)
ans = [0]*N
# print(a_sorted)

for i in range(N):
    ans[i] = bisect.bisect_left(a_sorted,A[i])
    ans[i] += 1
    # print(a_sorted[i],i+1)
    


Answer = [str(i) for i in ans]
print(" ".join(Answer))