#include <stdio.h>

int main()
{
	int size = 0;
	scanf("%d", &size);
	int numbers[size];

	for (int i = 0; i < size; i++) {
		scanf("%d", numbers + i);
	}

	int result = 0;

	for (int i = 0; i < size; i++) {
		result += numbers[i];
	}

	printf("%d", result);
	return 0;
}