total_cases = int(input())
students = [int(input()) for i in range(total_cases)]
sections = [str(int(s/2)) + " " + str(int(s/2) + s%2) for s in students]

for section in sections:
	print(section)

