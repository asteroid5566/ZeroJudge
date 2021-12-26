# https://zerojudge.tw/ShowProblem?problemid=d532

a, b = map(int, input().split())
count = 0

for i in range(a, b + 1):
    if i % 4 == 0 and (i % 100 != 0 or i % 400 == 0):
        count += 1

print(count)
