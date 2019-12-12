#include <stdio.h>

int main()
{
	int total_cases = 0;
	scanf("%d", &total_cases);
	int students[total_cases];

	for (int i = 0; i < total_cases; i++) {
		scanf("%d", students+i);
	}

	for (int i = 0; i < total_cases; i++) {
		printf("%d %d\n", students[i]/2, students[i]/2 + students[i]%2);
	}
	return 0;
}