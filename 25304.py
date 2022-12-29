def whe():                  #whether
    amount = int(input())
    kind = int(input())
    sum = 0
    for i in range(kind):
        str_list = input().split()
        sum += int(str_list[0]) * int(str_list[1])
    if amount == sum:
        print('Yes')
    else: print('No')

whe()
