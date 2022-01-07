# https://zerojudge.tw/ShowProblem?problemid=d561
from sys import stdin

for s in stdin:
    idx = len(s)
    for i in range(0, len(s)):
        if s[i] == '.':
            idx = i
    s = s[ : idx + 4 : ]

    if s[len(s) - 1] == '\n':
        s = s[ : -1 : ]
    
    if abs(float(s)) * 1000 % 10 >= 5:
        if float(s) > 0:
            s = str(float(s) + 0.01)
        else:
            s = str(float(s) - 0.01)
    for i in range(0, len(s)):
        if s[i] == '.':
            s = s[ : i + 3 : ]
            break
    if float(s) == 0:
        s = "0"
    print("%.2f" % float(s))
