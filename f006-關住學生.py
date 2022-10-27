# https://zerojudge.tw/ShowProblem?problemid=f006
input()
l = list(map(int, input().split()))

l.sort()

print("%d %d" %(l[len(l) - 1], l[0]))
