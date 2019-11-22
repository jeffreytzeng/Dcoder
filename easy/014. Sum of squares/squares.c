#include <stdio.h>

int main()
{
	int from = 0;
	int end = 0;
	scanf("%d %d", &from, &end);
	int total = 0;
	for (int i = from; i <= end; i++) {
		total += pow(i, 2);
	}
	printf("%d", total);
	return 0;
}