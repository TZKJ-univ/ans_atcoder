import numpy as np
N=int(input())

N_5sin=np.base_repr(N, base=5)
#print('N_5sin=',N_5sin)

N_5sin_len=len(N_5sin)
#print('N_5sin_len=',N_5sin_len)
ans=0
if N==1:
    print(0)
else:
    for i in range(N_5sin_len,0,-1):
        if i==1:
            if int(N_5sin[N_5sin_len-1])==0:
                ans-=12
            else:
                ans+=2*int(N_5sin[N_5sin_len-1])-2
    #if i==2:
     #   ans+=(2*10**(i-1))*int(N_5sin[N_5sin_len-i])
        else:
            ans+=(2*10**(i-1))*int(N_5sin[N_5sin_len-i])
    
    print(ans)