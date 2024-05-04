import numpy as np
from collections import defaultdict
import sys
sys.setrecursionlimit(1 << 20) 
class UnionFind():
    def __init__(self, n):
        self.n = n
        self.parents = [-1] * n

    def find(self, x):
        if self.parents[x] < 0:
            return x
        else:
            self.parents[x] = self.find(self.parents[x])
            return self.parents[x]

    def union(self, x, y):
        x = self.find(x)
        y = self.find(y)

        if x == y:
            return

        if self.parents[x] > self.parents[y]:
            x, y = y, x

        self.parents[x] += self.parents[y]
        self.parents[y] = x

    def size(self, x):
        return -self.parents[self.find(x)]

    def same(self, x, y):
        return self.find(x) == self.find(y)

    def members(self, x):
        root = self.find(x)
        return [i for i in range(self.n) if self.find(i) == root]

    def roots(self):
        return [i for i, x in enumerate(self.parents) if x < 0]

    def group_count(self):
        return len(self.roots())

    def all_group_members(self):
        group_members = defaultdict(list)
        for member in range(self.n):
            group_members[self.find(member)].append(member)
        return group_members

    def __str__(self):
        return '\n'.join(f'{r}: {m}' for r, m in self.all_group_members().items())
N,M=map(int,input().split())
A,B,C=np.zeros(M+1,dtype=int),np.zeros(M+1,dtype=int),np.zeros(M+1,dtype=int)
all_abc=np.zeros((M+1,3),dtype=int)

for i in range(1,M+1):
    A[i],B[i],C[i]=map(int,input().split())
    all_abc[i]=np.array([A[i],B[i],C[i]])

all_abc=all_abc[np.argsort(all_abc[:,2])]
uf=UnionFind(N+1)
ans=0
for i in range(1,M+1):
    if uf.same(all_abc[i][0],all_abc[i][1])==False:
        uf.union(all_abc[i][0],all_abc[i][1])
        ans+=all_abc[i][2]
print(ans)