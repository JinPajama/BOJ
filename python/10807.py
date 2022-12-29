def solution():
    cnt = 0
    num = int(input())                  #첫째줄 데이터 개수 정수
    str_list = map(int, input().split())#둘째줄 문자열 데이터 받아 저장
    val = int(input())                  #val = 셋째줄 비교할 정수
    
    for i in str_list:                  #str list 내부 int와 val 비교
        if i == val:
            cnt += 1

    print(cnt)

solution()
