import numpy as np

A = []
cnt = 0
ji=0
for i in "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z":
    for j in "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z":
        for l in "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z":
            for k in "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z":
                for n in "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z":
                    A.append(i)
                    A.append(j)
                    A.append(l)
                    A.append(k)
                    A.append(n)
                    # print(A[0])
                    flag = 0
                    for _ in range(5):
                        if A[_] != "A" and A[_]!="K" and A[_]!="O" and A[_]!="R" and A[_]!="S" and A[_]!="T":
                            flag = 0
                            break
                        else:
                            if flag == 0:
                                if _ < 4:
                                    if A[_]=="O" and A[_+1]=="K":
                                        flag = 1
                                                       
                    if flag == 1:
                        cnt += 1
                    A = []           
print(cnt)