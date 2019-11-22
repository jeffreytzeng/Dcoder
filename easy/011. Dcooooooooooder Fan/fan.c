#include <stdio.h>

int main()
{
	int os = 0;
	scanf("%d", &os);
    char o[50];
    memset(o, 'o', os);
	printf("Dc%sder", o);
	return 0;
}