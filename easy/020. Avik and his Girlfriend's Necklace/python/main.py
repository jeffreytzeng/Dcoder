from partition import PartitionArray

n = int(input())
number_array = list(map(int, input().split()))
numbers = PartitionArray(number_array)
numbers.Sort()
numbers.Show()


