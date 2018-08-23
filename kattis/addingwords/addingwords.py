# Kattis - addingwords
# Bidirectional hashing and expression evaluation
table = {}
rev_table = {}

try:
    while True:
        line = input()
        if line == 'clear':
            table = {}
            rev_table = {}
        else:
            cmd = line.split()
            if cmd[0] == 'def':
                int_val = int(cmd[2])
                if cmd[1] in table:
                    del rev_table[table[cmd[1]]]
                table[cmd[1]] = int_val
                rev_table[int_val] = cmd[1]
            else:
                ans = table[cmd[1]] if cmd[1] in table else 'x'
                if ans != 'x':
                    for i in range(2, len(cmd) - 1, 2):
                        if cmd[i + 1] in table:
                            if cmd[i] == '+':
                                ans += table[cmd[i + 1]]
                            else:
                                ans -= table[cmd[i + 1]]
                        else:
                            ans = 'x'
                            break
                out = 'unknown' if ans == 'x' or ans not in rev_table else rev_table[ans]
                print(f'{line[5:]} {out}')
except EOFError:
    pass
