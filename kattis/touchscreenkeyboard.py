# Kattis - touchscreenkeyboard
# Sort by distance between typo characters and correct characters.
class Item:
    def __init__(self, word, score):
        self.word = word
        self.score = score
    def __lt__(self, other):
        if self.score == other.score:
            return self.word < other.word
        else:
            return self.score < other.score
    def __repr__(self):
        return f'{ self.word } { self.score }'

def find(char):
    if char in rows[0]:
        return 0
    elif char in rows[1]:
        return 1
    else:
        return 2

def get_score(word, typo):
    score = 0
    for i in range(len(word)):
        row_w = find(word[i])
        row_t = find(typo[i])
        score += abs(row_w - row_t) + abs(rows[row_w][word[i]] - rows[row_t][typo[i]])
    return score

t = int(input())
rows = [
    { 'q': 0, 'w': 1, 'e': 2, 'r': 3, 't': 4, 'y': 5, 'u': 6, 'i': 7, 'o': 8, 'p': 9 },
    { 'a': 0, 's': 1, 'd': 2, 'f': 3, 'g': 4, 'h': 5, 'j': 6, 'k': 7, 'l': 8 },
    { 'z': 0, 'x': 1, 'c': 2, 'v': 3, 'b': 4, 'n': 5, 'm': 6 }
]

for i in range(t):
    word, num = input().split()
    num = int(num)
    words = [None] * num
    for j in range(num):
        w = input()
        words[j] = Item(w, get_score(word, w))
    words.sort()
    for k in range(len(words)):
        print(words[k])

