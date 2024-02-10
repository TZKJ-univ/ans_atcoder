import numpy as np
A,B,D=map(int,input().split())
ans=A
while True:
    print(ans)
    if ans==B:
        break
    ans+=D
    