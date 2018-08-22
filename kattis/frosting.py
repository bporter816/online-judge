# Kattis - frosting
# Optimizing modular arithmetic over a 2D array.
n = int(input())
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
g_i = [0] * 3
g_j = [0] * 3
colors = [0] * 3

for i in range(n):
    g_i[i % 3] += a[i]
for i in range(n):
    g_j[i % 3] += b[i]
for i in range(3):
    for j in range(3):
        colors[(i + j) % 3] += g_i[i] * g_j[j]

print(f'{ colors[1] } { colors[2] } { colors[0] }')
