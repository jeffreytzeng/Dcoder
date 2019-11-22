numbers = list(map(int, input().split()))
total = 0
for n in range(numbers[0], numbers[1]+1):
	total += n**2
print(total)