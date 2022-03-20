# https://zerojudge.tw/ShowProblem?problemid=c184

while True:
    n = int(input())
    if not n:
        break

    i = 1
    list = []
    while i * i <= n:
        if n % i == 0:
            list.append(i)
            list.append(n / i)
        i += 1
    
    sum = 0
    for i in list:
        sum += i

    sum -= n
    if sum == n:
        print("=" + str(n))
    else:
        i = 1
        list = []
        while i * i <= sum:
            if sum % i == 0:
                list.append(i)
                list.append(sum / i)
            i += 1
        
        sum2 = 0
        for i in list:
            sum2 += i
        
        if sum2 - sum == n:
            print(int(sum))
        else:
            print(0)
