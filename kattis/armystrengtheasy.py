# Kattis - armystrengtheasy
# Repeatedly process the smallest element with specified tiebreaking
t = int(input())
for i in range(t):
    input()
    g_end, m_end = [int(j) for j in input().split()]
    godzilla = [int(j) for j in input().split()]
    mecha_godzilla = [int(j) for j in input().split()]
    godzilla.sort()
    mecha_godzilla.sort()
    g, m = 0, 0
    while g < g_end and m < m_end:
        if godzilla[g] < mecha_godzilla[m]:
            g += 1
        else:
            m += 1
    print('Godzilla' if m == m_end else 'MechaGodzilla')
