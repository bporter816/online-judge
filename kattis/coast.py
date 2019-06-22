# Kattis - coast
from collections import deque

n, m = map(int, input().split())
grid = ['0' * (m + 2)] * (n + 2)
visited = [[False] * (m + 2) for i in range(n + 2)]
dx = [0, -1, 0, 1]
dy = [-1, 0, 1, 0]
count = 0
for i in range(n):
    grid[i + 1] = '0' + input() + '0'

queue = deque()
queue.append((0, 0))
while len(queue) != 0:
    item = queue.popleft()
    r, c = item
    if not visited[r][c]:
        visited[r][c] = True
        for i in range(4):
            x = r + dx[i]
            y = c + dy[i]
            if x >= 0 and x <= n + 1 and y >= 0 and y <= m + 1:
                if grid[x][y] == '1':
                    count += 1
                elif grid[x][y] == '0' and not visited[x][y]:
                    queue.append((x, y))

print(count)
