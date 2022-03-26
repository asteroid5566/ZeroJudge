# https://zerojudge.tw/ShowProblem?problemid=a263

def month(n, y):
    if n == 1 or n == 3 or n == 5 or n == 7 or n == 8 or n == 10 or n == 12:
        return 31
    elif n == 2:
        if y % 4 == 0 and y % 100 != 0 or y % 400 == 0:
            return 29
        else:
            return 28
    else:
        return 30

try:
    while True:
        i1 = list(map(int, input().split()))
        i2 = list(map(int, input().split()))
    
        if i1[0] < i2[0]:
            date1 = i1
            date2 = i2
        else:
            date1 = i2
            date2 = i1

        day1 = date1[2]
        for i in range(1, date1[1]):
            day1 += month(i, date1[0])

        day2 = date2[2]
        for i in range(1, date2[1]):
            day2 += month(i, date2[0])

        for i in range(date1[0], date2[0]):
            if i % 4 == 0 and i % 100 != 0 or i % 400 == 0:
                day2 += 366
            else:
                day2 += 365
        print(int(abs(day2 - day1)))
except EOFError:
    pass    

