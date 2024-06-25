import numpy as np

cnt = 0
for i in range(1,200):
    for j in range(1,200):
        for h in range(1,200):
            if i * j / 2 <= 6000 and i != j and i!= h and j != h and i**2+j**2 == h**2:
                cnt += 1
    
print(cnt)