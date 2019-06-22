# Kattis - fizzbuzz
# The FizzBuzz problem
x, y, n = map(int, input().split())

for i in range(1, n + 1):
    fizz = i % x == 0
    buzz = i % y == 0
    if fizz or buzz:
        output = ""
        if fizz:
            output = "Fizz"
        if buzz:
            output += "Buzz"
        print(output)
    else:
        print(i)
