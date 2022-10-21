# https://zerojudge.tw/ShowProblem?problemid=g353

flag = 0

try:
    i = list(map(int, input().split()))
    if flag == 0:
        print(i[int(len(i) / 2)])
except EOFError:
    pass
