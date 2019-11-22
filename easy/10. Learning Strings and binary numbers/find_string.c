#include <stdio.h>

int main()
{
    char a[20], b[20];
    scanf("%s %s", a, b);
    printf("%d", strstr(a, b) != NULL ? 1 : 0);
	return 0;
}