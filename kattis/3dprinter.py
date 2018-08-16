# Kattis - 3dprinter
n = int(input())
count = 0

if n & (n - 1) != 0:
    count += 1
while n != 0:
    n >>= 1
    count += 1

print(count)
