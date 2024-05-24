import numpy as np
H = int(input())    
i=0
hh=0
while H >= hh:
    hh+=2**i
    i+=1
    # print(hh)

print(i)