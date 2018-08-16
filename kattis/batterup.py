# Kattis - batterup
# Sum of nonnegative integers in input divided by number of nonzero integers in
# input
n = int(input())
total = 0
count = 0

for i in input().split():
    if int(i) != -1:
        total += int(i)
        count += 1

print(total / count)
