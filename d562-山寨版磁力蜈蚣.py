# https://zerojudge.tw/ShowProblem?problemid=d562
from sys import stdin

flag = True
for n in stdin:
    if flag:
        t = n
        flag = False
    else:
        l = list(n.split())
    
        for i in l:
            print(i, end = " ")
        print()

        while len(l) > 1:
            l = l[-1 : 0 : -1]
            for i in l:
                print(i, end = " ")
            print()
        
        flag = True
