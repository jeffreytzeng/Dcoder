#include <stdio.h>
#include "partition.h"

int main()
{
	int n = 0;
	scanf("%d", &n);

	int numbers[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}

	SortArray(numbers, 0, n-1);
	Show(numbers, &n);

	return 0;
}