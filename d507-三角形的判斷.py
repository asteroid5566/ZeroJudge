# https://zerojudge.tw/ShowProblem?problemid=d507

l = list(map(int, input().split()))
l.sort()

if l[2] * l[2] < (l[0] * l[0] + l[1] * l[1]):
    print("acute triangle")
elif l[2] * l[2] == (l[0] * l[0] + l[1] * l[1]):
    print("right triangle")
else:
    print("obtuse triangle")
