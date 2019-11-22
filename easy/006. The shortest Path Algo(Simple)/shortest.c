#include <stdio.h>
#include <math.h>

int main()
{
	int coordinates[] = {0, 0, 0, 0};
	for (int i = 0; i < 4; i++) {
		scanf("%d", &coordinates[i]);
	}

	float dist_A = sqrt(pow(coordinates[0], 2) + pow(coordinates[1], 2));
	float dist_B = sqrt(pow(coordinates[2], 2) + pow(coordinates[3], 2));

	printf("%c", dist_A < dist_B ? 'A' : 'B');

	return 0;
}