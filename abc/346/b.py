import numpy as np
import collections as cl

W,B=map(int,input().split())
sum_WB=W+B

kenban=np.zeros(201,dtype=int)

for i in range(1,201):
    if i%12==1:
        kenban[i]=0
    elif i%12==2:
        kenban[i]=1
    elif i%12==3:
        kenban[i]=0
    elif i%12==4:
        kenban[i]=1
    elif i%12==5:
        kenban[i]=0
    elif i%12==6:
        kenban[i]=0
    elif i%12==7:
        kenban[i]=1
    elif i%12==8:
        kenban[i]=0
    elif i%12==9:
        kenban[i]=1
    elif i%12==10:
        kenban[i]=0
    elif i%12==11:
        kenban[i]=1
    elif i%12==0:
        kenban[i]=0

for i in range(1,13):
    kensa=kenban[i:i+sum_WB]
    Kensa=cl.Counter(kensa)
    # print(Kensa)
    kensa_W=Kensa[0]
    kensa_B=Kensa[1]
    if kensa_W==W and kensa_B==B:
        print('Yes')
        exit()
print('No')
    