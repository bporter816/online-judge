c = int(input())
for i in range(c):
    nums = [int(i) for i in input().split()]
    total = sum(nums[1:])
    count = 0
    for j in nums[1:]:
        if j * nums[0] > total:
            count += 1
    answer = count / nums[0] * 100
    print(f'{answer:.3f}%')

