# Kattis - pizza2
# Percentage of inner concentric circle area that makes up the area of the entire circle
r, c = map(int, input().split())

print(100 * ((r - c) / r) ** 2)
