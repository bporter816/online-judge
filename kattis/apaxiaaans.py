# Kattis - apaxiaaans
# Remove repeated characters from a string
name = input()

answer = name[0]
for i in range(1, len(name)):
    if name[i] != name[i - 1]:
        answer += name[i]
print(answer)
