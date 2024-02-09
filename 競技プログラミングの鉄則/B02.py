A,B=map(int,input().split())
for i in range(A,B+1):
    if i==2 or i==5 or i==4 or i==25 or i==1 or i==100 or i==50 or i==20 or i==10:
        print("Yes")
        exit()
    elif i==B:
        print("No")
        exit()
    else:
        continue