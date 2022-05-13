# https://zerojudge.tw/ShowProblem?problemid=f047

l = input().split()

print(l[0], end = "")
for i in range(3, len(l)):
    if i % 3 == 0:
        print(" " + l[i], end = "")

print("\n" + l[1], end = "")
for i in range(3, len(l)):
    if i % 3 == 1:
        print(" " + l[i], end = "")

print("\n" + l[2], end = "")
for i in range(3, len(l)):
    if i % 3 == 2:
        print(" " + l[i], end = "")
