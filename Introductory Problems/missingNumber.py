n = int(input())

sum_ = int(0)
real_sum = n * (n+1)
real_sum //= 2

line = input()
n_list = [int(i) for i in line]

sum_ = sum(n_list)


print(real_sum - sum_)
