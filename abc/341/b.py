N = int(input())
A=list(map(int,input().split()))
S=[0]*(N+1)
T=[0]*(N+1)
for i in range(0,N-1):
    S[i],T[i]=map(int,input().split())
    
for i in range(0,N-1):
    Bai=A[i]//S[i]
    A[i] = A[i] - Bai*S[i]
    A[i+1] = A[i+1]+Bai*T[i]
    
print(A[N-1])