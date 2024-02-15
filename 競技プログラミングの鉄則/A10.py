import numpy as np

N = int(input())
A = list(map(int, input().split()))
D = int(input())
L = [0]*(D+1)
R = [0]*(D+1)
Q = [0]*(N)
S = [0]*(N)
Q[0]=A[0]
S[N-1]=A[N-1]
for i in range(1,N):
    Q[i]=max(Q[i-1],A[i])
    
for i in range(N-2,-1,-1):
    S[i]=max(S[i+1],A[i])
    
for i in range(1,D+1):
    L[i], R[i] = map(int, input().split())
    
#print(Q)
#print(S)
for i in range(1,D+1):
    print(max(Q[L[i]-2],S[R[i]]))