import numpy as np

N = int(input())
A = list(map(int, input().split()))

cnt = 0

A.sort(reverse=True)

while A[1] > 0:
    cnt += 1
    A[0] -= 1
    A[1] -= 1
    A.sort(reverse=True) 
    
print(cnt)