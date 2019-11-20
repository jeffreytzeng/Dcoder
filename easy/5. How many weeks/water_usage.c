#include <stdio.h>

int main()
{
	int tank_contain = 10000;
	int usage = 0;
	scanf("%d", &usage);
	printf("%d", tank_contain / usage);
	return 0;
}