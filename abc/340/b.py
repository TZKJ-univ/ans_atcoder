import numpy as np

Q=int(input())
A=[]
for i in range(Q):
    q1,q2=map(int,input().split())
    if q1==1:
        A.append(q2)
    elif q1==2:
        print(A[-q2])