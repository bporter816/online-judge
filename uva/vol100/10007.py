# 10007 - Count the Trees
while True:
    num = int(input())
    if num == 0:
        break
    result = 1
    for i in range(2 * num, num + 1, -1):
        result *= i
    print(result)
