# Kattis - different
# Absolute difference between two integers
try:
    while True:
        (a, b) = [int(i) for i in input().split()]
        print(abs(a - b))
except EOFError:
    pass
