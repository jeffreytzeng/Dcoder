#include <stdio.h>

int main()
{
	int integer = 0;
	scanf("%d", &integer);

	int total = 0;

	for (int i = 0; i <= integer; i++) {
		total += i;
	}

	printf("%d", total);

	return 0;
}