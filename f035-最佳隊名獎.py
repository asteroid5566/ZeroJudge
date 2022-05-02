# https://zerojudge.tw/ShowProblem?problemid=f035

s = input()

print(ord(s[0]), end="")

for i in range(1, len(s)):
    print("_" + str(ord(s[i])), end="")

