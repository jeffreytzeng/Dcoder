#include <iostream>
#include "partition.hpp"

PartitionArray::PartitionArray(int size):total_(0)
{
	array_.resize(size);
}

void PartitionArray::Insert(int number) {
	array_[total_++] = number;
}

int PartitionArray::Partition(int &start, int &end, int &pivot) {
	int left = start - 1;
	int right = end;

	while (true) {
		while (left < end && array_[++left] < array_[pivot]) {
		}
		while (right > start && array_[--right] > array_[pivot]) {
		}

		if (left >= right) {
			break;
		} else {
			Swap(left, right);
		}
	}
	Swap(left, pivot);
	return left;
}

void PartitionArray::Show() {
	for (int i = 0; i < total_; i++) {
		std::cout << array_[i] << (i == total_ - 1 ? "" : " ");
	}
	std::cout << std::endl;
}

void PartitionArray::Sort() {
	SortArray(0, total_);
}

void PartitionArray::SortArray(int start, int end) {
	if (end - start >= 0) {
		int partition = Partition(start, end, end);
		SortArray(start, partition-1);
		SortArray(partition+1, end);
	}
}

void PartitionArray::Swap(int &left, int &right) {
	int temp = array_[left];
	array_[left] = array_[right];
	array_[right] = temp;
}

