#include <stdio.h>

int main()
{
    int size = 5;
	char name[size+1];
	scanf("%s", &name);
	char reversed_name[size+1];

	for (int i = 0; i < size; i++) {
		reversed_name[i] = name[size-1 - i];
	}

	strncmp(name, reversed_name, size) == 0 ? printf("Yes") : printf("No");
	return 0;
}