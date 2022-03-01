# https://zerojudge.tw/ShowProblem?problemid=e456

str = list(input().split())

for i in range(0, len(str) - 1):
    print(str[i] + " little, ", end="")
print(str[len(str) - 1] + " little Indians")
