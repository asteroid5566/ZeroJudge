# https://zerojudge.tw/ShowProblem?problemid=d489

a, b, c = map(int, input().split())
s = (a + b + c) / 2
print(int(s * (s - a) * (s - b) * (s - c)))
