# Kattis - 4thought
# Find the ops for which 4 (op) 4 (op) 4 (op) 4 = n.
# Using the fact that we can eval() a string in Python.
n = int(input())
ops = ['+', '-', '*', '//'] # // operator is integer division

def calc():
    num = int(input())
    for j in range(64):
        idx_a, idx_b, idx_c = int(j / 16), int(j / 4 % 4), int(j % 4)
        query = '4 ' + ops[idx_a] + ' 4 ' + ops[idx_b] + ' 4 ' + ops[idx_c] + ' 4'
        if eval(query) == num:
            print(query.replace('//', '/') + ' = ' + str(num))
            return
    print('no solution')
    return

for i in range(n):
    calc()
