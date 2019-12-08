#include <stdio.h>
#include "partition.h"

int Partition(int *arr, int *start, int *end, int *pivot) {
	int left = *start - 1;
	int right = *end;

	while (1) {
		while (left < *end && arr[++left] < arr[*pivot]) {
		}
		while (right > *start && arr[--right] > arr[*pivot]) {
		}

		if (left >= right) {
			break;
		} else {
			Swap(arr, &left, &right);
		}
	}
	Swap(arr, &left, pivot);
	return left;
}

void Show(int *arr, int *size) {
	for (int i = 0; i < *size; i++) {
		i == *size-1 ? printf("%d", arr[i]) : printf("%d ", arr[i]);
	}
	printf("\n");
}
		
void SortArray(int *arr, int start, int end) {
	if (end - start >= 0) {
		int partition = Partition(arr, &start, &end, &end);
		SortArray(arr, start, partition-1);
		SortArray(arr, partition+1, end);
	}
}

void Swap(int *arr, int *left, int *right) {
	int temp = arr[*left];
	arr[*left] = arr[*right];
	arr[*right] = temp;
}