# Kattis - alphabetspam
# Find the percentage of whitespace, lowercase, uppercase, and symbol characters
# in a line of input
line = input()

length = len(line)
whitespace = 0
lowercase = 0
uppercase = 0
symbols = 0
for i in line:
    if i == '_':
        whitespace += 1
    elif i >= 'a' and i <= 'z':
        lowercase += 1
    elif i >= 'A' and i <= 'Z':
        uppercase += 1
    else:
        symbols += 1
print(whitespace / length)
print(lowercase / length)
print(uppercase / length)
print(symbols / length)
