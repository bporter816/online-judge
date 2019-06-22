# Kattis - acm
solved = [False] * 26
penalties = [0] * 26
count, score = 0, 0

while True:
    line = input()
    if line == '-1':
        break
    time, letter, isCorrect = line.split()
    time, isCorrect = int(time), isCorrect == 'right'
    index = ord(letter) - ord('A')
    if isCorrect == False:
        penalties[index] += 20
    else:
        count += 1
        score += time
        solved[index] = True
for i in range(26):
    if solved[i] == True:
        score += penalties[i]

print(f'{count} {score}')
