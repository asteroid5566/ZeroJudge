# https://zerojudge.tw/ShowProblem?problemid=f063
n = input()
max = 0

try:
    while True:
        li = list(map(int, input().split()))
        del li[0]
        li.sort()
        if li[0] > max:
            max = li[0]
except EOFError:
    pass

print(max)
