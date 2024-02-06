import numpy as np

H,W=map(int,input().split())
R,C=map(int,input().split())

if R>H or C>W:# 例外処理
    print(0)
elif(H==1 and W==1):#1*1の場合
    print(0)
elif H==1 or W==1:#1行または1列の場合
    if (R==1 and W==1) or (R==H and W==1):#1列かつ端の場合
        print(1)
    elif (C==1 and H==1) or (C==W and H==1):#1行かつ端の場合
        print(1)
    else:
        print(2)
elif (R==H and C==W) or (R==1 and C==1) or (R==1 and C==W) or (R==H and C==1):#角の場合
    print(2)
    exit()
elif R==1 or C==1 or R==H or C==W:#端の場合
    print(3)
else:
    print(4)
    