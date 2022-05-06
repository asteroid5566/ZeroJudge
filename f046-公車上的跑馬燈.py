# https://zerojudge.tw/ShowProblem?problemid=f046

w = int(input())
s = [i for i in input()]
t = int(input())

ans = []

for i in range(0, w):
    ans.append(" ")

ans += s

for i in range(0, t):
    del ans[0]

for i in range(0, w):
    if i < len(ans):
        print(ans[i], end = "")
    else:
        print(" ", end = "")
