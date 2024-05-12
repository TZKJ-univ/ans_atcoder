import numpy as np

N,X = map(int,input().split())
X-=1
ans=X//N
ans2=X%N
anss=ord('A')
print(chr(anss+ans))