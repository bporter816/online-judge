# Kattis - bossbattle
# Proceeding in a circular fashion, the boss is guaranteed to be defeated after
# n - 2 turns because of the range of the bomb.
n = int(input())

print(max(1, n - 2))
