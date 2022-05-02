# https://zerojudge.tw/ShowProblem?problemid=f017

s = input()

print(s[0], end = "")

for i in range(1, len(s)):
    print("-" + s[i], end = "")
