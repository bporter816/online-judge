# Kattis - hidden
# Checking for characters in a specific order within a string.
def is_valid(pwd, msg):
    pwd_i = 0
    msg_i = 0

    while msg_i < len(msg):
        if pwd_i == len(pwd):
            return True
        if pwd[pwd_i] == msg[msg_i]:
            pwd_i += 1
        elif msg[msg_i] in pwd[pwd_i + 1:]:
            return False
        msg_i += 1
    return pwd_i == len(pwd)

pwd, msg = input().split()

print('PASS' if is_valid(pwd, msg) else 'FAIL')
