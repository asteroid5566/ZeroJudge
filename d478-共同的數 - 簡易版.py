# https://zerojudge.tw/ShowProblem?problemid=d478

n, m = input().split()
n = int(n)
m = int(m)

for i in range(0, n):
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    k1 = k2 = 0
    count = 0
    while k1 < m and k2 < m:
        if arr1[k1] < arr2[k2]:
            k1 += 1
        elif arr1[k1] > arr2[k2]:
            k2 += 1
        else:
            count += 1
            k1 += 1
            k2 += 1
    print(count)
