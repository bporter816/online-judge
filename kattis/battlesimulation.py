# Kattis - battlesimulation
line = input()
length = len(line)
ans = ''

i = 0
while i < length:
    sub = line[i:i + 3]
    vec = 0
    for j in range(len(sub)):
        vec |= 1 << 'RBL'.index(line[i + j])
    if vec == 0b111:
        ans += 'C'
        i += 3
        continue
    if line[i] == 'R':
        ans += 'S'
    elif line[i] == 'B':
        ans += 'K'
    else:
        ans += 'H'
    i += 1

print(ans)
