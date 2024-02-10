N=int(input())
siharai=0

syoki=2
syokinum=3
ans=2
h=2
j=1
A=[]
if N==2:
        print(ans)
for i in range(2,N):
    ans=ans+syokinum
    if j==h:
        syokinum=syokinum+1
        h=h+h*2
    j+=1

print(ans)