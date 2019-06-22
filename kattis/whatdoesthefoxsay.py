# Kattis - whatdoesthefoxsay
# Remove given words from input.
t = int(input())

for i in range(t):
    words = input().split()
    ans = []
    used = {}

    line = ''
    while line != 'what does the fox say?':
        line = input()
        if line != 'what does the fox say?':
            used[line.split()[2]] = True

    for i in words:
        if i not in used:
            ans.append(i)

    print(' '.join(ans))
