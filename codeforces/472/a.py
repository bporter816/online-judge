# Codeforces 472A - Design Tutorial: Learn from Math
# Any integer n >= 12 can be written as the sum of two composite integers,
# 4 and n - 4 if n is even, or 9 and n - 9 if n is odd.
n = int(input())

if n % 2 == 0:
    print(f'4 {n - 4}')
else:
    print(f'9 {n - 9}')
