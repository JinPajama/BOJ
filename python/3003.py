answer = list(map(int, input().split()))

chess = [1, 1, 2, 2, 2, 8]

for i in range(len(answer)):
     answer[i] -= chess[i]
     print((answer[i])*-1)
