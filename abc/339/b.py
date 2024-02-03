import numpy as np

H,W,N=map(int,input().split( ))

ary = np.full((H, W), ".", dtype=str)
i=0
j=0
direction=0
if H==1 and W==1:
    if N//2==0:
        print("#")
    else:
        print(".")
else:
    for _ in range(N):
        if ary[i][j] == ".":
            ary[i][j] = "#"
            if direction==0:
                direction=1
                if j == W - 1:
                    j = 0
                else:
                    j += 1
            elif direction==1:
                direction=2
                if i == H - 1:
                    i = 0
                else:
                    i += 1
            elif direction==2:
                direction=3
                if j == 0:
                    j = W - 1
                else:
                    j -= 1
            else:
                direction=0
                if i == 0:
                    i = H - 1
                else:
                    i -= 1 
        else:
            ary[i][j] = "."
            if direction==0:
                direction=3
                if j == 0:
                    j = W - 1
                else:
                    j -= 1
            elif direction==1:
                direction=0
                if i == 0:
                    i = H - 1
                else:
                    i -= 1 
            elif direction==2:
                direction=1
                if j == W - 1:
                    j = 0
                else:
                    j += 1   
            else:
                direction=2
                if i == H - 1:
                    i = 0
                else:
                    i += 1
    for l in ary:
        print("".join(l))    