import numpy as np
import re
import math

a, m, l, r = map(int, input().split())
l -= a
r -= a
print(r // m - (l - 1) // m)

#
#a=[0]*(inputN)

#hiku=0
#i=0
#   hiku=inputA[i]
 #   j=0
  #  wa[i]=sum([j for j in inputA if inputA[j]>hiku])
   # i+=1
#print(*wa, sep=" ")

##inputA = list(map(int, input().split()))

#max_0=max(inputA)

#while(max(inputA)==max_0):
 #   inputA.remove(max_0)

#max_1=max(inputA)

#print(max_1)

#for i in range(len(input_n_m)):
 #   print(input_n_m[i]+" ",end="")
##input_n=int(input_n_m[0])
##input_m=int(input_n_m[1])

##input_num = input().split( )

##for j in range(0,input_n):
  ##      input_num[j]=int(input_num[j])
        
##kosuu=[0]*(input_n)

##for i in range(0,input_n):
 ##   for j in range(0,input_n):
   ##     if input_num[i]<=input_num[j] and input_num[j]<input_num[i]+input_m:
    #        kosuu[i]+=1

##print(max(kosuu))