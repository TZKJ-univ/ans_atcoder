import numpy as np
K=int(input())
K_waru60=K//60
K_amari=K%60
if K==0:
    print(21,':',0,0,sep='')
    exit()
if K_waru60==0:
    print(21,':',K,sep='')
else:
    if K_amari<10:
        print(21+K_waru60,':0',K_amari,sep='')
    else:
        print(21+K_waru60,':',K_amari,sep='')