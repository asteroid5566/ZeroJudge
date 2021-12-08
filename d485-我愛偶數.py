# https://zerojudge.tw/ShowProblem?problemid=d485

a, b = map(int, input().split())

if (b - a) % 2 == 0:
    if a % 2 == 0:
        print((b - a + 1) // 2 + 1)
    else:
        print((b - a + 1) // 2)
else:
    print((b - a + 1) // 2)
