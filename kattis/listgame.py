# Kattis - listgame
# Points are maximized when Y_i + 1 are the prime factors of X.
from math import sqrt

n = int(input())
count = 0

while n % 2 == 0:
    count += 1
    n /= 2
root = int(sqrt(n))
for i in range(3, root + 1, 2):
    while n % i == 0:
        count += 1
        n /= i
if n > 2:
    count += 1

print(count)
