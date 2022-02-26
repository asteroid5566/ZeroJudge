# https://zerojudge.tw/ShowProblem?problemid=d046

n = int(input())
count = 0

arr = list(map(int, input().split()))
for i in arr:
    if i <= 10:
        count += 1
print(count)
