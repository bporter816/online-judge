# Kattis - abc
# Sort a list of three integers in a given order
nums = [int(i) for i in input().split()]
order = input()

nums.sort()
answer = [nums['ABC'.index(i)] for i in order]
print(' '.join(str(i) for i in answer))
