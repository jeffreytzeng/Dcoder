def Recursion(x):
	"""Recursion function"""
	if x == 0:
		return 1
	else:
		return x * Recursion(x - 1)


n = int(input())
print(Recursion(n))
