# https://zerojudge.tw/ShowProblem?problemid=d471
from sys import stdin

def recursion(str, index, length):
    if index < length:
        recursion(str + '0', index + 1, length)
        recursion(str + '1', index + 1, length)
    else:
        print(str)

for n in stdin:
    recursion("", 0, int(n))
