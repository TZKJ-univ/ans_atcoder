import itertools
N=int(input())
A=list(map(int,input().split()))
S=1000
comb = list(itertools.combinations(A, 3))
for i in range(len(comb)):
    if sum(comb[i])==S:
        print("Yes")
        exit()

print("No")