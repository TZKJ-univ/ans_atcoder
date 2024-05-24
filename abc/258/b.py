import numpy as np
N=int(input())  
A=np.zeros((N+1,N+1))
amax=0
first_potential=[]
ans=amax*(10**(N-1))   
# def search_ans(A,i,j,cnt,Ans,ans_):
#     print(i,j,cnt,Ans,ans_)
#     if cnt==N:
#         return
#     if Ans>ans:
#         ans=Ans
#     next_potential=[]
#     mawari_max=0
#     ans_list=[(x) for x in list(str(ans_))]
#     for p in range(-1,2):
#         for q in range(-1,2):
#             if p==0 and q==0:
#                 continue
#             else:
#                 l=i+p
#                 k=j+q
#                 if i+p==N+1:
#                     l=1
#                 if j+q==N+1:
#                     k=1
#                 if i+p==0:
#                     l=1
#                 if j+q==0:
#                     k=1
#                 if mawari_max < A[l][k]:
#                     mawari_max=A[l][k]
#     for p in range(-1,2):
#         for q in range(-1,2):
#             if p==0 and q==0:
#                 continue
#             else:
#                 l=i+p
#                 k=j+q
#                 if i+p==N+1:
#                     l=1
#                 if j+q==N+1:
#                     k=1
#                 if i+p==0:
#                     l=1
#                 if j+q==0:
#                     k=1
#                 if A[l][k]==mawari_max:
#                     next_potential.append([l,k])
#     for n in next_potential:
#         search_ans(A,n[0],n[1],cnt+1,ans+mawari_max*(10**(N-cnt-1)),ans_)
        
    

for i in range(1,N+1):
    a=input()
    aa=[int(x) for x in list(str(a))]
    # print(a)
    for j in range(1,N+1):
        # print(i,j)
        A[i][j]=a[j-1]
        if amax < A[i][j]:
            amax=A[i][j]

for i in range(1,N+1):
    for j in range(1,N+1):
        if A[i][j]==amax:
            first_potential.append([i,j])

# print(first_potential)  
        
# print(A)

 
for _ in first_potential:
    
    
print(ans)