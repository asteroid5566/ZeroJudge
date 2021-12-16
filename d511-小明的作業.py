# https://zerojudge.tw/ShowProblem?problemid=d511

count = 0
for i in range(0, 5):
    a, b, c = map(int, input().split())
    if a + b > c and a + c > b and b + c > a:
        count += 1
print(count)
