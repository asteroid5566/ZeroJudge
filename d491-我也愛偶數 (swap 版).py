# https://zerojudge.tw/ShowProblem?problemid=d491

a, b = map(int, input().split())

if a > b:
    a, b = b, a

if a % 2 == 1:
    a += 1
if b % 2 == 1:
    b -= 1

print(int((a + b) * (b - a + 2) / 2 / 2))
