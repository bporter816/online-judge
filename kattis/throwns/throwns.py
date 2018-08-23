# Kattis - throwns
# Removing items from a list and summing those remaining.
n, k = map(int, input().split())
cmds = input().split()
stack = []
idx = 0
ans = 0

for i in range(k):
    if cmds[idx] == 'undo':
        to_remove = int(cmds[idx + 1])
        for j in range(to_remove):
            ans -= stack.pop()
        idx += 2
    else:
        to_add = int(cmds[idx])
        stack.append(to_add)
        ans += to_add
        idx += 1

print(ans % n)
