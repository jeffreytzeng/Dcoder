#include <stdio.h>
#include <stdlib.h>

void Push(int *arr, int value, int *size, int *capacity) {
	if (*size > *capacity) {
		int *re = realloc(arr, *capacity * 2);

		if (*re == 0) {
			printf("ERR: There's no enough memory!\n");
		}
		*capacity = *capacity * 2;
	}

	arr[*size] = value;
	*size = *size + 1;
}

int main()
{
	int from = 0;
	int end = 0;
	scanf("%d %d", &from, &end);

	int capacity = 2;
	int size = 0;
	int *arr = malloc(sizeof(int));

	enum bool {false, true};

	for (int number = from; number <= end; number++) {
		if (number != 1) {
			enum bool prime = true;

			for (int check = 2; check < number; check++) {
				if (number % check == 0) {
					prime = false;
					break;
				}
			}

			if (prime) {
				Push(arr, number, &size, &capacity);
			}
		}
	}

	for (int index = 0; index < size; index++) {
		printf("%d\n", arr[index]);
	}

	free(arr);
	return 0;
}