class PartitionArray():
	def __init__(self, numbers):
		self.array = numbers[:]

	def Partition(self, start, end, pivot):
		while True:
			left = start
			right = end

			for l in range(left, end+1):
				left = l
				if self.array[l] > self.array[pivot]:
					break

			for r in reversed(range(start, right)):
				right = r
				if self.array[r] < self.array[pivot]:
					break

			if left >= right:
				break
			else:
				self.array[left], self.array[right] = self.array[right], self.array[left]

		self.array[left], self.array[pivot] = self.array[pivot], self.array[left]
		return left

	def Show(self):
		for i in range(len(self.array)):
			print(str(self.array[i]) if i == len(self.array)-1 else str(self.array[i]) + " ", end='')
		print()

	def Sort(self):
		self.SortArray(0, len(self.array)-1)

	def SortArray(self, start, end):
		if end - start >= 0:
			partition = self.Partition(start, end, end)
			self.SortArray(start, partition-1)
			self.SortArray(partition+1, end)

	def Swap(self, left, right):
		temp = self.array[left]
		self.array[left] = self.array[right]
		self.array[right] = temp