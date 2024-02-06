import numpy as np

N,A,B = map(int,input().split())

tile=np.full((A*N,B*N),"_",dtype=str)
for i in range(A*N):
    
    for j in range(B*N):
        if ((i//A)+(j//B))%2==0:
            tile[i][j]="."
        else:
            tile[i][j]="#"
for l in tile:
        print("".join(l)) 
