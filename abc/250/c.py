import numpy as np
import bisect

N,Q=map(int,input().split())
x=[]
for i in range(Q):
    x.append(int(input()))
    
def switch(a,b,s=[]):
    c=s[a]
    s[a]=s[b]
    s[b]=c
    
def tansaku(X,s=[]):
    i=X-1
    l=1
    while True:
        if X>N:
            return -1
        elif -1<i<N and s[i]==X:
            return i
        elif i+l<N and s[i+l]==X:
            return i+l
        elif i+l*2<N and s[i+l*2]==X:
            return i+l*2
        elif i+l*3<N and s[i+l*3]==X:
            return i+l*3
        elif i-l>-1 and s[i-l]==X:
            return i-l
        elif (i-l*2)>=0 and s[i-l*2]==X:
            return (i-l*2)
        elif (i-l*3)>=0 and s[i-l*3]==X:
            return (i-l*3)
        elif (i-l*4)>=0 and s[i-l*4]==X:
            return (i-l*4)
        elif (i-l*5)>=0 and s[i-l*5]==X:
            return (i-l*5)
        else:
            l+=1
            continue
            
s=[0]*N
k=[0]*(N+1)
k[0]=0
for i in range(N):
    s[i]=i+1
    k[i+1]=i
for i in range(Q):
    #print("x[i]=",x[i])
    taisyou=k[x[i]]
    if taisyou==-1:
        continue
    #print("taisyou=",taisyou)
    if taisyou!=(N-1):
        s[taisyou],s[taisyou+1]=s[taisyou+1],s[taisyou]
        k[s[taisyou]],k[s[taisyou+1]]=k[s[taisyou+1]],k[s[taisyou]]
     #   print(*s, sep=" ")
    else:
        s[taisyou-1],s[taisyou]=s[taisyou],s[taisyou-1]
        k[s[taisyou]],k[s[taisyou-1]]=k[s[taisyou-1]],k[s[taisyou]]
      #  print(*s, sep=" ")
print(*s, sep=" ")