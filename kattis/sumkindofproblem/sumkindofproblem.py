# Kattis - sumkindofproblem
# Arithmetic sequence sums for all, odd, and even integers in the range [1, n]
p = int(input())

for i in range(p):
    k, n = map(int, input().split())
    total = n * (n + 1) // 2
    odd = n * n
    even = n * (2 + 2 * n) // 2

    print(k, total, odd, even)
