import numpy as np

N=int(input())
siharai=0
L=10000000
A=[0]*L
A[0]=0
A[1]=0
A[2]=2
A[3]=5
def calc(n,siharai):
    if n<1500000:
        return A[n]
    if n%2==0:
        right=n//2
        left=n//2
        siharai=n
        return calc(right,siharai)*2+siharai
    else:
        right=n//2+1
        left=n//2
        siharai=n
        return calc(right,siharai)+calc(left,siharai)+siharai
    #print(n,siharai)
def calcfi(n,siharai):
    if n<1000000:
        return A[n]
    if n%2==0:
        right=n//2
        left=n//2
        siharai=n
        return calc(right,siharai)*2+siharai
    else:
        right=n//2+1
        left=n//2
        siharai=n
        return calc(right,siharai)+calc(left,siharai)+siharai
    #print(n,siharai)
def calcf(n,siharai):
    if n<100000:
        return A[n]
    if n%2==0:
        right=n//2
        left=n//2
        siharai=n
        return calc(right,siharai)*2+siharai
    else:
        right=n//2+1
        left=n//2
        siharai=n
        return calc(right,siharai)+calc(left,siharai)+siharai
    #print(n,siharai)

def calct(n,siharai):
    if n<10000:
        return A[n]
    if n%2==0:
        right=n//2
        left=n//2
        siharai=n
        return calc(right,siharai)*2+siharai
    else:
        right=n//2+1
        left=n//2
        siharai=n
        return calc(right,siharai)+calc(left,siharai)+siharai
    #print(n,siharai)
    
def calcs(n,siharai):
    if n<1000:
        return A[n]
    if n%2==0:
        right=n//2
        left=n//2
        siharai=n
        return calc(right,siharai)*2+siharai
    else:
        right=n//2+1
        left=n//2
        siharai=n
        return calc(right,siharai)+calc(left,siharai)+siharai
    #print(n,siharai)
    
def calcf(n,siharai):
    if n%2==0:
        right=n//2
        left=n//2
        siharai=n
        return calc(right,siharai)*2+siharai
    else:
        right=n//2+1
        left=n//2
        siharai=n
        return calc(right,siharai)+calc(left,siharai)+siharai
    #print(n,siharai)    
    
for j in range(3,1000):
    A[j]=calcf(j,0)
    #print(A[j])
for j in range(1000,10000):
    A[j]=calcs(j,0)
    #print(A[j])
for j in range(10000,100000):
    A[j]=calct(j,0)
for j in range(100000,1000000):
    A[j]=calcf(j,0)
for j in range(1000000,L):
    A[j]=calcf(j,0)
    #print(A[j])
print(calc(N,0))