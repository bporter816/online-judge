# Kattis - 8queens
# Are the queens on a chessboard placed such that no two can attack each other?
def is_valid(board):
    queens = 0
    for i in range(8):
        for j in range(8):
            if board[i][j] == '*':
                queens += 1
                if rows[i] or cols[j] or sums[i + j] or difs[i - j + 7]:
                    return False
                rows[i] = True
                cols[j] = True
                sums[i + j] = True
                difs[i - j + 7] = True
    return queens == 8

board = [None] * 8
rows = [False] * 8
cols = [False] * 8
sums = [False] * 15
difs = [False] * 15
for i in range(8):
    board[i] = input()

print('valid' if is_valid(board) else 'invalid')
