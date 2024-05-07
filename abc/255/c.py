import numpy as np
X,A,D,N=map(int,input().split())
if D==0:
    print(abs(X-A))
    exit()
if D<0 and A<X:
    print(abs(X-A))
    exit()
if D>0 and A>X:
    print(abs(A-X))
    exit()
if X==A:
    print(0)
    exit()

saigo=A+D*(N-1)

if saigo < X and D>0:
    print(abs(X-saigo))
    exit()
elif saigo > X and D<0:
    print(abs(X-saigo))
    exit()


X_A_plus1=X-A

X_A_waru_D=X_A_plus1//D

X_A_waru_D_amari=min(abs(X_A_plus1%D),abs(X_A_plus1%D-D))

X_A_waru_D_Hiku_N=X_A_waru_D-N

print(X_A_waru_D_amari)
