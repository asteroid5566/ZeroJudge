# https://zerojudge.tw/ShowProblem?problemid=d550

n, m = map(int, input().split())

l = list()

for i in range(0, n):
    t = list(map(int, input().split()))
    l.append(t)

l.sort()

for i in l:
    print(*i, sep = " ")
