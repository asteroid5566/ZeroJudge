# https://zerojudge.tw/ShowProblem?problemid=e196

i1 = list(map(int, input().split()))
i2 = list(map(int, input().split()))

s = set()
count = 0

for i in range(0, len(i2)):
    if i2[i] in s:
        s.remove(i2[i])
        count += 1
    else:
        s.add(i2[i])

print(i1[0] - count)


