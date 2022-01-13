# https://zerojudge.tw/ShowProblem?problemid=d575
from sys import stdin, stdout

for n in stdin:
    x1, y1, x2, y2, range = map(int, n.split())

    if abs(x1 - x2) + abs(y1 - y2) <= range:
        stdout.write("die\n")
    else:
        stdout.write("alive\n")

