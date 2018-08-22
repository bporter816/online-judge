# Kattis - reversebinary
# Reverse the binary representation of an integer.
n = int(input())
result = 0

while n != 0:
    result <<= 1
    result |= n & 1
    n >>= 1

print(result)
